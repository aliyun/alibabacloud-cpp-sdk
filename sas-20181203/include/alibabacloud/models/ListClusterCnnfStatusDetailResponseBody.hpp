// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERCNNFSTATUSDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERCNNFSTATUSDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListClusterCnnfStatusDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterCnnfStatusDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterCnnfStatusDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListClusterCnnfStatusDetailResponseBody() = default ;
    ListClusterCnnfStatusDetailResponseBody(const ListClusterCnnfStatusDetailResponseBody &) = default ;
    ListClusterCnnfStatusDetailResponseBody(ListClusterCnnfStatusDetailResponseBody &&) = default ;
    ListClusterCnnfStatusDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterCnnfStatusDetailResponseBody() = default ;
    ListClusterCnnfStatusDetailResponseBody& operator=(const ListClusterCnnfStatusDetailResponseBody &) = default ;
    ListClusterCnnfStatusDetailResponseBody& operator=(ListClusterCnnfStatusDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->installed_ == nullptr && this->instanceId_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->invalidType_ == nullptr
        && this->machineName_ == nullptr && this->machineType_ == nullptr && this->pluginName_ == nullptr && this->pluginVersion_ == nullptr && this->status_ == nullptr
        && this->uuid_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Data& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // installed Field Functions 
      bool hasInstalled() const { return this->installed_ != nullptr;};
      void deleteInstalled() { this->installed_ = nullptr;};
      inline bool getInstalled() const { DARABONBA_PTR_GET_DEFAULT(installed_, false) };
      inline Data& setInstalled(bool installed) { DARABONBA_PTR_SET_VALUE(installed_, installed) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline Data& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline Data& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // invalidType Field Functions 
      bool hasInvalidType() const { return this->invalidType_ != nullptr;};
      void deleteInvalidType() { this->invalidType_ = nullptr;};
      inline string getInvalidType() const { DARABONBA_PTR_GET_DEFAULT(invalidType_, "") };
      inline Data& setInvalidType(string invalidType) { DARABONBA_PTR_SET_VALUE(invalidType_, invalidType) };


      // machineName Field Functions 
      bool hasMachineName() const { return this->machineName_ != nullptr;};
      void deleteMachineName() { this->machineName_ = nullptr;};
      inline string getMachineName() const { DARABONBA_PTR_GET_DEFAULT(machineName_, "") };
      inline Data& setMachineName(string machineName) { DARABONBA_PTR_SET_VALUE(machineName_, machineName) };


      // machineType Field Functions 
      bool hasMachineType() const { return this->machineType_ != nullptr;};
      void deleteMachineType() { this->machineType_ = nullptr;};
      inline int32_t getMachineType() const { DARABONBA_PTR_GET_DEFAULT(machineType_, 0) };
      inline Data& setMachineType(int32_t machineType) { DARABONBA_PTR_SET_VALUE(machineType_, machineType) };


      // pluginName Field Functions 
      bool hasPluginName() const { return this->pluginName_ != nullptr;};
      void deletePluginName() { this->pluginName_ = nullptr;};
      inline string getPluginName() const { DARABONBA_PTR_GET_DEFAULT(pluginName_, "") };
      inline Data& setPluginName(string pluginName) { DARABONBA_PTR_SET_VALUE(pluginName_, pluginName) };


      // pluginVersion Field Functions 
      bool hasPluginVersion() const { return this->pluginVersion_ != nullptr;};
      void deletePluginVersion() { this->pluginVersion_ = nullptr;};
      inline string getPluginVersion() const { DARABONBA_PTR_GET_DEFAULT(pluginVersion_, "") };
      inline Data& setPluginVersion(string pluginVersion) { DARABONBA_PTR_SET_VALUE(pluginVersion_, pluginVersion) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Data& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The ID of the cluster.
      shared_ptr<string> clusterId_ {};
      // Indicates whether the container firewall plug-in is installed.
      shared_ptr<bool> installed_ {};
      // The ID of the server.
      shared_ptr<string> instanceId_ {};
      // The public IP address of the associated instance.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the associated instance.
      shared_ptr<string> intranetIp_ {};
      // The cause why the plug-in is invalid. Valid values:
      // 
      // *   **PLUGIN_OFFLINE**: The plug-in is offline.
      // *   **PLUGIN_NOT_INSTALLED**: The plug-in is not installed.
      // *   **PLUGIN_INVALID_VERSION**: The version of the plug-in is invalid.
      shared_ptr<string> invalidType_ {};
      // The name of the server.
      shared_ptr<string> machineName_ {};
      // The machine type of the instance. The value is fixed as **ecs**.
      shared_ptr<int32_t> machineType_ {};
      // The name of the plug-in. The value is fixed as **alinet**.
      shared_ptr<string> pluginName_ {};
      // The version of the plug-in.
      shared_ptr<string> pluginVersion_ {};
      // The online status of the plug-in. Valid values:
      // 
      // *   **false**: The plug-in is offline.
      // *   **true**: The plug-in is online.
      shared_ptr<string> status_ {};
      // The UUID of the asset.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListClusterCnnfStatusDetailResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListClusterCnnfStatusDetailResponseBody::Data>) };
    inline vector<ListClusterCnnfStatusDetailResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListClusterCnnfStatusDetailResponseBody::Data>) };
    inline ListClusterCnnfStatusDetailResponseBody& setData(const vector<ListClusterCnnfStatusDetailResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListClusterCnnfStatusDetailResponseBody& setData(vector<ListClusterCnnfStatusDetailResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClusterCnnfStatusDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the protection status of the container firewall.
    shared_ptr<vector<ListClusterCnnfStatusDetailResponseBody::Data>> data_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
