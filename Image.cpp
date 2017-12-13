#include "Image.hpp"

Image::Image(const Size& size, int id, int duration, const std::string& uri, ScaleType scale_type, Align align, Valign valign) :
    Media(id, duration, Render::Native, uri), m_scale_type(scale_type), m_align(align), m_valign(valign)
{
    auto pixbuf = Gdk::Pixbuf::create_from_file(m_uri, size.width, size.height);
    m_handler.set(pixbuf);
    m_handler.show();
}

Image::ScaleType Image::scale_type() const
{
    return m_scale_type;
}

Image::Align Image::align() const
{
    return m_align;
}

Image::Valign Image::valign() const
{
    return m_valign;
}

Gtk::Widget& Image::handler()
{
    return m_handler;
}

void Image::hide()
{
    m_handler.hide();
}

void Image::show()
{
    m_handler.show();
}
