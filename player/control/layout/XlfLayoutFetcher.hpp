#pragma once

#include "constants.hpp"

#include "MainLayoutBuilder.hpp"
#include "OverlayLayoutBuilder.hpp"
#include "MainLayoutParser.hpp"
#include "IMainLayout.hpp"

#include "../common/XlfResources.hpp"
#include "common/Utils.hpp"
#include "utils/Resources.hpp"

template<typename BuilderType>
class XlfLayoutLoader
{
public:
    static std::unique_ptr<IMainLayout> loadBy(int layoutId)
    {
        auto rootNode = Utils::parseXmlFromPath(getXlfPath(layoutId));
        auto parsedLayout = parseLayoutFromNode(rootNode);

        return buildLayout(parsedLayout);
    }

private:
    static FilePath getXlfPath(int layoutId)
    {
        auto xlfFile = std::to_string(layoutId) + ".xlf";
        return Resources::directory() / xlfFile;
    }

    static ParsedLayout parseLayoutFromNode(const xml_node& node)
    {
        auto layoutNode = node.get_child(ResourcesXlf::LayoutNode);

        MainLayoutParser parser;
        return parser.parse(layoutNode);
    }

    static std::unique_ptr<IMainLayout> buildLayout(const ParsedLayout& parsedLayout)
    {
        BuilderType builder;

        return builder.build(parsedLayout);
    }
};

using XlfMainLayoutLoader = XlfLayoutLoader<MainLayoutBuilder>;
using XlfOverlayLayoutLoader = XlfLayoutLoader<OverlayLayoutBuilder>;
