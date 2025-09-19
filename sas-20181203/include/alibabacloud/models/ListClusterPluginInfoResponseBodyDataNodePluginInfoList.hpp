// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERPLUGININFORESPONSEBODYDATANODEPLUGININFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERPLUGININFORESPONSEBODYDATANODEPLUGININFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListClusterPluginInfoResponseBodyDataNodePluginInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterPluginInfoResponseBodyDataNodePluginInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(Installed, installed_);
      DARABONBA_PTR_TO_JSON(MachineInternetIp, machineInternetIp_);
      DARABONBA_PTR_TO_JSON(MachineIntranetIp, machineIntranetIp_);
      DARABONBA_PTR_TO_JSON(MachineName, machineName_);
      DARABONBA_PTR_TO_JSON(MachineType, machineType_);
      DARABONBA_PTR_TO_JSON(Online, online_);
      DARABONBA_PTR_TO_JSON(PluginName, pluginName_);
      DARABONBA_PTR_TO_JSON(PluginVersion, pluginVersion_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterPluginInfoResponseBodyDataNodePluginInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(Installed, installed_);
      DARABONBA_PTR_FROM_JSON(MachineInternetIp, machineInternetIp_);
      DARABONBA_PTR_FROM_JSON(MachineIntranetIp, machineIntranetIp_);
      DARABONBA_PTR_FROM_JSON(MachineName, machineName_);
      DARABONBA_PTR_FROM_JSON(MachineType, machineType_);
      DARABONBA_PTR_FROM_JSON(Online, online_);
      DARABONBA_PTR_FROM_JSON(PluginName, pluginName_);
      DARABONBA_PTR_FROM_JSON(PluginVersion, pluginVersion_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
    };
    ListClusterPluginInfoResponseBodyDataNodePluginInfoList() = default ;
    ListClusterPluginInfoResponseBodyDataNodePluginInfoList(const ListClusterPluginInfoResponseBodyDataNodePluginInfoList &) = default ;
    ListClusterPluginInfoResponseBodyDataNodePluginInfoList(ListClusterPluginInfoResponseBodyDataNodePluginInfoList &&) = default ;
    ListClusterPluginInfoResponseBodyDataNodePluginInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterPluginInfoResponseBodyDataNodePluginInfoList() = default ;
    ListClusterPluginInfoResponseBodyDataNodePluginInfoList& operator=(const ListClusterPluginInfoResponseBodyDataNodePluginInfoList &) = default ;
    ListClusterPluginInfoResponseBodyDataNodePluginInfoList& operator=(ListClusterPluginInfoResponseBodyDataNodePluginInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMsg_ != nullptr && this->installed_ != nullptr && this->machineInternetIp_ != nullptr && this->machineIntranetIp_ != nullptr && this->machineName_ != nullptr
        && this->machineType_ != nullptr && this->online_ != nullptr && this->pluginName_ != nullptr && this->pluginVersion_ != nullptr && this->uuid_ != nullptr
        && this->instanceId_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListClusterPluginInfoResponseBodyDataNodePluginInfoList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline ListClusterPluginInfoResponseBodyDataNodePluginInfoList& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // installed Field Functions 
    bool hasInstalled() const { return this->installed_ != nullptr;};
    void deleteInstalled() { this->installed_ = nullptr;};
    inline bool installed() const { DARABONBA_PTR_GET_DEFAULT(installed_, false) };
    inline ListClusterPluginInfoResponseBodyDataNodePluginInfoList& setInstalled(bool installed) { DARABONBA_PTR_SET_VALUE(installed_, installed) };


    // machineInternetIp Field Functions 
    bool hasMachineInternetIp() const { return this->machineInternetIp_ != nullptr;};
    void deleteMachineInternetIp() { this->machineInternetIp_ = nullptr;};
    inline string machineInternetIp() const { DARABONBA_PTR_GET_DEFAULT(machineInternetIp_, "") };
    inline ListClusterPluginInfoResponseBodyDataNodePluginInfoList& setMachineInternetIp(string machineInternetIp) { DARABONBA_PTR_SET_VALUE(machineInternetIp_, machineInternetIp) };


    // machineIntranetIp Field Functions 
    bool hasMachineIntranetIp() const { return this->machineIntranetIp_ != nullptr;};
    void deleteMachineIntranetIp() { this->machineIntranetIp_ = nullptr;};
    inline string machineIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(machineIntranetIp_, "") };
    inline ListClusterPluginInfoResponseBodyDataNodePluginInfoList& setMachineIntranetIp(string machineIntranetIp) { DARABONBA_PTR_SET_VALUE(machineIntranetIp_, machineIntranetIp) };


    // machineName Field Functions 
    bool hasMachineName() const { return this->machineName_ != nullptr;};
    void deleteMachineName() { this->machineName_ = nullptr;};
    inline string machineName() const { DARABONBA_PTR_GET_DEFAULT(machineName_, "") };
    inline ListClusterPluginInfoResponseBodyDataNodePluginInfoList& setMachineName(string machineName) { DARABONBA_PTR_SET_VALUE(machineName_, machineName) };


    // machineType Field Functions 
    bool hasMachineType() const { return this->machineType_ != nullptr;};
    void deleteMachineType() { this->machineType_ = nullptr;};
    inline int64_t machineType() const { DARABONBA_PTR_GET_DEFAULT(machineType_, 0L) };
    inline ListClusterPluginInfoResponseBodyDataNodePluginInfoList& setMachineType(int64_t machineType) { DARABONBA_PTR_SET_VALUE(machineType_, machineType) };


    // online Field Functions 
    bool hasOnline() const { return this->online_ != nullptr;};
    void deleteOnline() { this->online_ = nullptr;};
    inline bool online() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
    inline ListClusterPluginInfoResponseBodyDataNodePluginInfoList& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


    // pluginName Field Functions 
    bool hasPluginName() const { return this->pluginName_ != nullptr;};
    void deletePluginName() { this->pluginName_ = nullptr;};
    inline string pluginName() const { DARABONBA_PTR_GET_DEFAULT(pluginName_, "") };
    inline ListClusterPluginInfoResponseBodyDataNodePluginInfoList& setPluginName(string pluginName) { DARABONBA_PTR_SET_VALUE(pluginName_, pluginName) };


    // pluginVersion Field Functions 
    bool hasPluginVersion() const { return this->pluginVersion_ != nullptr;};
    void deletePluginVersion() { this->pluginVersion_ = nullptr;};
    inline string pluginVersion() const { DARABONBA_PTR_GET_DEFAULT(pluginVersion_, "") };
    inline ListClusterPluginInfoResponseBodyDataNodePluginInfoList& setPluginVersion(string pluginVersion) { DARABONBA_PTR_SET_VALUE(pluginVersion_, pluginVersion) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListClusterPluginInfoResponseBodyDataNodePluginInfoList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListClusterPluginInfoResponseBodyDataNodePluginInfoList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The error code returned.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> errorMsg_ = nullptr;
    // Indicates whether the plug-in is installed. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> installed_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> machineInternetIp_ = nullptr;
    // The private IP address of the server.
    std::shared_ptr<string> machineIntranetIp_ = nullptr;
    // The name of the server.
    std::shared_ptr<string> machineName_ = nullptr;
    // The type of the instance. Valid values include:
    // 
    // *   **ecs**: Elastic Compute Service (ECS) instance
    // *   **slb**: Server Load Balancer (SLB) instance
    std::shared_ptr<int64_t> machineType_ = nullptr;
    // Indicates whether the Security Center agent is online. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  If the Security Center agent of the server is offline, Security Center does not protect the server.
    std::shared_ptr<bool> online_ = nullptr;
    // The name of the plug-in.
    std::shared_ptr<string> pluginName_ = nullptr;
    // The version of the plug-in.
    std::shared_ptr<string> pluginVersion_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
    // The instance ID of the server.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
