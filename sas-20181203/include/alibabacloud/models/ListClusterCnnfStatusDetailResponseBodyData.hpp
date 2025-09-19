// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERCNNFSTATUSDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERCNNFSTATUSDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListClusterCnnfStatusDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterCnnfStatusDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Installed, installed_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(InvalidType, invalidType_);
      DARABONBA_PTR_TO_JSON(MachineName, machineName_);
      DARABONBA_PTR_TO_JSON(MachineType, machineType_);
      DARABONBA_PTR_TO_JSON(PluginName, pluginName_);
      DARABONBA_PTR_TO_JSON(PluginVersion, pluginVersion_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterCnnfStatusDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Installed, installed_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(InvalidType, invalidType_);
      DARABONBA_PTR_FROM_JSON(MachineName, machineName_);
      DARABONBA_PTR_FROM_JSON(MachineType, machineType_);
      DARABONBA_PTR_FROM_JSON(PluginName, pluginName_);
      DARABONBA_PTR_FROM_JSON(PluginVersion, pluginVersion_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ListClusterCnnfStatusDetailResponseBodyData() = default ;
    ListClusterCnnfStatusDetailResponseBodyData(const ListClusterCnnfStatusDetailResponseBodyData &) = default ;
    ListClusterCnnfStatusDetailResponseBodyData(ListClusterCnnfStatusDetailResponseBodyData &&) = default ;
    ListClusterCnnfStatusDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterCnnfStatusDetailResponseBodyData() = default ;
    ListClusterCnnfStatusDetailResponseBodyData& operator=(const ListClusterCnnfStatusDetailResponseBodyData &) = default ;
    ListClusterCnnfStatusDetailResponseBodyData& operator=(ListClusterCnnfStatusDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->installed_ != nullptr && this->instanceId_ != nullptr && this->internetIp_ != nullptr && this->intranetIp_ != nullptr && this->invalidType_ != nullptr
        && this->machineName_ != nullptr && this->machineType_ != nullptr && this->pluginName_ != nullptr && this->pluginVersion_ != nullptr && this->status_ != nullptr
        && this->uuid_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListClusterCnnfStatusDetailResponseBodyData& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // installed Field Functions 
    bool hasInstalled() const { return this->installed_ != nullptr;};
    void deleteInstalled() { this->installed_ = nullptr;};
    inline bool installed() const { DARABONBA_PTR_GET_DEFAULT(installed_, false) };
    inline ListClusterCnnfStatusDetailResponseBodyData& setInstalled(bool installed) { DARABONBA_PTR_SET_VALUE(installed_, installed) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListClusterCnnfStatusDetailResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline ListClusterCnnfStatusDetailResponseBodyData& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline ListClusterCnnfStatusDetailResponseBodyData& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // invalidType Field Functions 
    bool hasInvalidType() const { return this->invalidType_ != nullptr;};
    void deleteInvalidType() { this->invalidType_ = nullptr;};
    inline string invalidType() const { DARABONBA_PTR_GET_DEFAULT(invalidType_, "") };
    inline ListClusterCnnfStatusDetailResponseBodyData& setInvalidType(string invalidType) { DARABONBA_PTR_SET_VALUE(invalidType_, invalidType) };


    // machineName Field Functions 
    bool hasMachineName() const { return this->machineName_ != nullptr;};
    void deleteMachineName() { this->machineName_ = nullptr;};
    inline string machineName() const { DARABONBA_PTR_GET_DEFAULT(machineName_, "") };
    inline ListClusterCnnfStatusDetailResponseBodyData& setMachineName(string machineName) { DARABONBA_PTR_SET_VALUE(machineName_, machineName) };


    // machineType Field Functions 
    bool hasMachineType() const { return this->machineType_ != nullptr;};
    void deleteMachineType() { this->machineType_ = nullptr;};
    inline int32_t machineType() const { DARABONBA_PTR_GET_DEFAULT(machineType_, 0) };
    inline ListClusterCnnfStatusDetailResponseBodyData& setMachineType(int32_t machineType) { DARABONBA_PTR_SET_VALUE(machineType_, machineType) };


    // pluginName Field Functions 
    bool hasPluginName() const { return this->pluginName_ != nullptr;};
    void deletePluginName() { this->pluginName_ = nullptr;};
    inline string pluginName() const { DARABONBA_PTR_GET_DEFAULT(pluginName_, "") };
    inline ListClusterCnnfStatusDetailResponseBodyData& setPluginName(string pluginName) { DARABONBA_PTR_SET_VALUE(pluginName_, pluginName) };


    // pluginVersion Field Functions 
    bool hasPluginVersion() const { return this->pluginVersion_ != nullptr;};
    void deletePluginVersion() { this->pluginVersion_ = nullptr;};
    inline string pluginVersion() const { DARABONBA_PTR_GET_DEFAULT(pluginVersion_, "") };
    inline ListClusterCnnfStatusDetailResponseBodyData& setPluginVersion(string pluginVersion) { DARABONBA_PTR_SET_VALUE(pluginVersion_, pluginVersion) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListClusterCnnfStatusDetailResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListClusterCnnfStatusDetailResponseBodyData& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // Indicates whether the container firewall plug-in is installed.
    std::shared_ptr<bool> installed_ = nullptr;
    // The ID of the server.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The public IP address of the associated instance.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the associated instance.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The cause why the plug-in is invalid. Valid values:
    // 
    // *   **PLUGIN_OFFLINE**: The plug-in is offline.
    // *   **PLUGIN_NOT_INSTALLED**: The plug-in is not installed.
    // *   **PLUGIN_INVALID_VERSION**: The version of the plug-in is invalid.
    std::shared_ptr<string> invalidType_ = nullptr;
    // The name of the server.
    std::shared_ptr<string> machineName_ = nullptr;
    // The machine type of the instance. The value is fixed as **ecs**.
    std::shared_ptr<int32_t> machineType_ = nullptr;
    // The name of the plug-in. The value is fixed as **alinet**.
    std::shared_ptr<string> pluginName_ = nullptr;
    // The version of the plug-in.
    std::shared_ptr<string> pluginVersion_ = nullptr;
    // The online status of the plug-in. Valid values:
    // 
    // *   **false**: The plug-in is offline.
    // *   **true**: The plug-in is online.
    std::shared_ptr<string> status_ = nullptr;
    // The UUID of the asset.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
