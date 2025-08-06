// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLUGINSTATUSRESPONSEBODYINSTANCEPLUGINSTATUSSETINSTANCEPLUGINSTATUSPLUGINSTATUSSETPLUGINSTATUS_HPP_
#define ALIBABACLOUD_MODELS_LISTPLUGINSTATUSRESPONSEBODYINSTANCEPLUGINSTATUSSETINSTANCEPLUGINSTATUSPLUGINSTATUSSETPLUGINSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus& obj) { 
      DARABONBA_PTR_TO_JSON(FirstHeartbeatTime, firstHeartbeatTime_);
      DARABONBA_PTR_TO_JSON(LastHeartbeatTime, lastHeartbeatTime_);
      DARABONBA_PTR_TO_JSON(PluginName, pluginName_);
      DARABONBA_PTR_TO_JSON(PluginStatus, pluginStatus_);
      DARABONBA_PTR_TO_JSON(PluginVersion, pluginVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(FirstHeartbeatTime, firstHeartbeatTime_);
      DARABONBA_PTR_FROM_JSON(LastHeartbeatTime, lastHeartbeatTime_);
      DARABONBA_PTR_FROM_JSON(PluginName, pluginName_);
      DARABONBA_PTR_FROM_JSON(PluginStatus, pluginStatus_);
      DARABONBA_PTR_FROM_JSON(PluginVersion, pluginVersion_);
    };
    ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus() = default ;
    ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus(const ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus &) = default ;
    ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus(ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus &&) = default ;
    ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus() = default ;
    ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus& operator=(const ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus &) = default ;
    ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus& operator=(ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->firstHeartbeatTime_ != nullptr
        && this->lastHeartbeatTime_ != nullptr && this->pluginName_ != nullptr && this->pluginStatus_ != nullptr && this->pluginVersion_ != nullptr; };
    // firstHeartbeatTime Field Functions 
    bool hasFirstHeartbeatTime() const { return this->firstHeartbeatTime_ != nullptr;};
    void deleteFirstHeartbeatTime() { this->firstHeartbeatTime_ = nullptr;};
    inline string firstHeartbeatTime() const { DARABONBA_PTR_GET_DEFAULT(firstHeartbeatTime_, "") };
    inline ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus& setFirstHeartbeatTime(string firstHeartbeatTime) { DARABONBA_PTR_SET_VALUE(firstHeartbeatTime_, firstHeartbeatTime) };


    // lastHeartbeatTime Field Functions 
    bool hasLastHeartbeatTime() const { return this->lastHeartbeatTime_ != nullptr;};
    void deleteLastHeartbeatTime() { this->lastHeartbeatTime_ = nullptr;};
    inline string lastHeartbeatTime() const { DARABONBA_PTR_GET_DEFAULT(lastHeartbeatTime_, "") };
    inline ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus& setLastHeartbeatTime(string lastHeartbeatTime) { DARABONBA_PTR_SET_VALUE(lastHeartbeatTime_, lastHeartbeatTime) };


    // pluginName Field Functions 
    bool hasPluginName() const { return this->pluginName_ != nullptr;};
    void deletePluginName() { this->pluginName_ = nullptr;};
    inline string pluginName() const { DARABONBA_PTR_GET_DEFAULT(pluginName_, "") };
    inline ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus& setPluginName(string pluginName) { DARABONBA_PTR_SET_VALUE(pluginName_, pluginName) };


    // pluginStatus Field Functions 
    bool hasPluginStatus() const { return this->pluginStatus_ != nullptr;};
    void deletePluginStatus() { this->pluginStatus_ = nullptr;};
    inline string pluginStatus() const { DARABONBA_PTR_GET_DEFAULT(pluginStatus_, "") };
    inline ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus& setPluginStatus(string pluginStatus) { DARABONBA_PTR_SET_VALUE(pluginStatus_, pluginStatus) };


    // pluginVersion Field Functions 
    bool hasPluginVersion() const { return this->pluginVersion_ != nullptr;};
    void deletePluginVersion() { this->pluginVersion_ = nullptr;};
    inline string pluginVersion() const { DARABONBA_PTR_GET_DEFAULT(pluginVersion_, "") };
    inline ListPluginStatusResponseBodyInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus& setPluginVersion(string pluginVersion) { DARABONBA_PTR_SET_VALUE(pluginVersion_, pluginVersion) };


  protected:
    // The first time when Cloud Assistant reported the state of the plug-in.
    std::shared_ptr<string> firstHeartbeatTime_ = nullptr;
    // The last time when Cloud Assistant reported the state of the plug-in.
    std::shared_ptr<string> lastHeartbeatTime_ = nullptr;
    // The name of the plug-in.
    std::shared_ptr<string> pluginName_ = nullptr;
    // The state of the Cloud Assistant plug-in. Valid values:
    // 
    // *   NotInstalled: The plug-in is not installed.
    // *   Installed: The one-time plug-in is installed.
    // *   Running: The long-running plug-in is running.
    // *   Stopped: The long-running plug-in is not running.
    // *   Crashed: The plug-in is abnormal.
    // *   Removed: The plug-in is uninstalled.
    // *   Unknown: The state of the plug-in is unknown.
    std::shared_ptr<string> pluginStatus_ = nullptr;
    // The version of the plug-in.
    std::shared_ptr<string> pluginVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
