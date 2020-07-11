#include <algorithm>
#include <string>

#include "common.h"
#include "gazebo/common/Assert.hh"
#include "gazebo/transport/transport.hh"
#include "gazebo/msgs/msgs.hh"
#include "liftdrag_plugin/visual_liftdrag_plugin.h"

using namespace gazebo;

GZ_REGISTER_VISUAL_PLUGIN(VisualLiftDragPlugin)

/////////////////////////////////////////////////
VisaulLiftDragPlugin::VisaulLiftDragPlugin()
{
}

/////////////////////////////////////////////////
VisaulLiftDragPlugin::~VisaulLiftDragPlugin()
{
}

/////////////////////////////////////////////////
void VisaulLiftDragPlugin::Load(rendering::VisualPtr _parent, sdf::ElementPtr _sdf)
{
}
