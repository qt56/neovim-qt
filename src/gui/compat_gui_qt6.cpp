#include <QWidget>
#include <QRect>
#include <QScreen>

QRect screenAvailableGeometry(const QWidget* w)
{
	return w->screen()->availableGeometry();
}
