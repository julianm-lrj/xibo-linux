#pragma once

#include <string>

namespace ResourcesXlf
{
    const std::string Attrs = "<xmlattr>";
    const std::string Options = "options";

    std::string attr(const std::string& property);
    std::string option(const std::string& property);

    const std::string LayoutNode = "layout";
    const std::string RegionNode = "region";
    const std::string MediaNode = "media";

    const std::string AudioType = "audio";
    const std::string VideoType = "video";
    const std::string ImageType = "image";


    namespace Layout
    {
        const std::string SchemaVersion = "schemaVersion";
        const std::string Width = "width";
        const std::string Height = "height";
    }

    namespace Background
    {
        const std::string Width = "width";
        const std::string Height = "height";
        const std::string Path = "background";
        const std::string Color = "bgcolor";
    }

    namespace Region
    {
        const std::string Id = "id";
        const std::string Width = "width";
        const std::string Height = "height";
        const std::string Left = "left";
        const std::string Top = "top";
        const std::string Zindex = "zindex";
        const std::string Loop = "loop";
    }

    namespace Media
    {
        const std::string Id = "id";
        const std::string Type = "type";
        const std::string Uri = "uri";
        const std::string Duration = "duration";

        const std::string ScaleType = "scaleType";
        const std::string Scaled = "center";
        const std::string Stretch = "stretch";

        const std::string Align = "align";
        const std::string RightAlign = "right";
        const std::string CenterAlign = "center";
        const std::string LeftAlign = "left";

        const std::string Valign = "valign";
        const std::string TopValign = "top";
        const std::string MiddleValign = "middle";
        const std::string BottomValign = "bottom";

        namespace Audio
        {
            const std::string Id = "mediaId";
            const std::string Mute = "mute";
            const std::string Loop = "loop";
            const std::string Volume = "volume";
        }

        namespace Video
        {
            const std::string Mute = "mute";
            const std::string Loop = "loop";
        }

        namespace WebView
        {
            const std::string Transparent = "transparency";
            const std::string ModeId = "modeid";
        }
    }

}
