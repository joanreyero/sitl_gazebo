#ifndef _GAZEBO_VISUAL_LIFT_DRAG_PLUGIN_HH_
#define _GAZEBO_VISUAL_LIFT_DRAG_PLUGIN_HH_

#include <string>
#include <vector>
#include <boost/bind.hpp>

#include "gazebo/common/Plugin.hh"
#include "gazebo/transport/TransportTypes.hh"
#include <ignition/math.hh>

namespace gazebo
{
  /// \brief A plugin that simulates lift and drag.
  class GAZEBO_VISIBLE VisualLiftDragPlugin : public VisualPlugin
  {
    public: VisualLiftDragPlugin();

    public: ~VisualLiftDragPlugin();

    public: virtual void Load(rendering::VisualPtr _parent, sdf::ElementPtr _sdf);

    protected: virtual void OnUpdate();

    /// \brief Connection to World Update events.
    protected: event::ConnectionPtr updateConnection;

    /// \brief SDF for this plugin;
    protected: sdf::ElementPtr sdf;

    private: transport::NodePtr node_handle_;
    private: std::string namespace_;
  };
}
#endif
