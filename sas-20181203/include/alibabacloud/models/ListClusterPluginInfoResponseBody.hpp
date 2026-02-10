// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERPLUGININFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERPLUGININFORESPONSEBODY_HPP_
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
  class ListClusterPluginInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterPluginInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterPluginInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListClusterPluginInfoResponseBody() = default ;
    ListClusterPluginInfoResponseBody(const ListClusterPluginInfoResponseBody &) = default ;
    ListClusterPluginInfoResponseBody(ListClusterPluginInfoResponseBody &&) = default ;
    ListClusterPluginInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterPluginInfoResponseBody() = default ;
    ListClusterPluginInfoResponseBody& operator=(const ListClusterPluginInfoResponseBody &) = default ;
    ListClusterPluginInfoResponseBody& operator=(ListClusterPluginInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(ClusterStatus, clusterStatus_);
        DARABONBA_PTR_TO_JSON(NodePluginInfoList, nodePluginInfoList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(ClusterStatus, clusterStatus_);
        DARABONBA_PTR_FROM_JSON(NodePluginInfoList, nodePluginInfoList_);
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
      class NodePluginInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodePluginInfoList& obj) { 
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
        friend void from_json(const Darabonba::Json& j, NodePluginInfoList& obj) { 
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
        NodePluginInfoList() = default ;
        NodePluginInfoList(const NodePluginInfoList &) = default ;
        NodePluginInfoList(NodePluginInfoList &&) = default ;
        NodePluginInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodePluginInfoList() = default ;
        NodePluginInfoList& operator=(const NodePluginInfoList &) = default ;
        NodePluginInfoList& operator=(NodePluginInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMsg_ == nullptr && this->installed_ == nullptr && this->machineInternetIp_ == nullptr && this->machineIntranetIp_ == nullptr && this->machineName_ == nullptr
        && this->machineType_ == nullptr && this->online_ == nullptr && this->pluginName_ == nullptr && this->pluginVersion_ == nullptr && this->uuid_ == nullptr
        && this->instanceId_ == nullptr; };
        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline NodePluginInfoList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMsg Field Functions 
        bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
        void deleteErrorMsg() { this->errorMsg_ = nullptr;};
        inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
        inline NodePluginInfoList& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


        // installed Field Functions 
        bool hasInstalled() const { return this->installed_ != nullptr;};
        void deleteInstalled() { this->installed_ = nullptr;};
        inline bool getInstalled() const { DARABONBA_PTR_GET_DEFAULT(installed_, false) };
        inline NodePluginInfoList& setInstalled(bool installed) { DARABONBA_PTR_SET_VALUE(installed_, installed) };


        // machineInternetIp Field Functions 
        bool hasMachineInternetIp() const { return this->machineInternetIp_ != nullptr;};
        void deleteMachineInternetIp() { this->machineInternetIp_ = nullptr;};
        inline string getMachineInternetIp() const { DARABONBA_PTR_GET_DEFAULT(machineInternetIp_, "") };
        inline NodePluginInfoList& setMachineInternetIp(string machineInternetIp) { DARABONBA_PTR_SET_VALUE(machineInternetIp_, machineInternetIp) };


        // machineIntranetIp Field Functions 
        bool hasMachineIntranetIp() const { return this->machineIntranetIp_ != nullptr;};
        void deleteMachineIntranetIp() { this->machineIntranetIp_ = nullptr;};
        inline string getMachineIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(machineIntranetIp_, "") };
        inline NodePluginInfoList& setMachineIntranetIp(string machineIntranetIp) { DARABONBA_PTR_SET_VALUE(machineIntranetIp_, machineIntranetIp) };


        // machineName Field Functions 
        bool hasMachineName() const { return this->machineName_ != nullptr;};
        void deleteMachineName() { this->machineName_ = nullptr;};
        inline string getMachineName() const { DARABONBA_PTR_GET_DEFAULT(machineName_, "") };
        inline NodePluginInfoList& setMachineName(string machineName) { DARABONBA_PTR_SET_VALUE(machineName_, machineName) };


        // machineType Field Functions 
        bool hasMachineType() const { return this->machineType_ != nullptr;};
        void deleteMachineType() { this->machineType_ = nullptr;};
        inline int64_t getMachineType() const { DARABONBA_PTR_GET_DEFAULT(machineType_, 0L) };
        inline NodePluginInfoList& setMachineType(int64_t machineType) { DARABONBA_PTR_SET_VALUE(machineType_, machineType) };


        // online Field Functions 
        bool hasOnline() const { return this->online_ != nullptr;};
        void deleteOnline() { this->online_ = nullptr;};
        inline bool getOnline() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
        inline NodePluginInfoList& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


        // pluginName Field Functions 
        bool hasPluginName() const { return this->pluginName_ != nullptr;};
        void deletePluginName() { this->pluginName_ = nullptr;};
        inline string getPluginName() const { DARABONBA_PTR_GET_DEFAULT(pluginName_, "") };
        inline NodePluginInfoList& setPluginName(string pluginName) { DARABONBA_PTR_SET_VALUE(pluginName_, pluginName) };


        // pluginVersion Field Functions 
        bool hasPluginVersion() const { return this->pluginVersion_ != nullptr;};
        void deletePluginVersion() { this->pluginVersion_ = nullptr;};
        inline string getPluginVersion() const { DARABONBA_PTR_GET_DEFAULT(pluginVersion_, "") };
        inline NodePluginInfoList& setPluginVersion(string pluginVersion) { DARABONBA_PTR_SET_VALUE(pluginVersion_, pluginVersion) };


        // uuid Field Functions 
        bool hasUuid() const { return this->uuid_ != nullptr;};
        void deleteUuid() { this->uuid_ = nullptr;};
        inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
        inline NodePluginInfoList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline NodePluginInfoList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      protected:
        // The error code returned.
        shared_ptr<string> errorCode_ {};
        // The error message returned.
        shared_ptr<string> errorMsg_ {};
        // Indicates whether the plug-in is installed. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> installed_ {};
        // The public IP address of the server.
        shared_ptr<string> machineInternetIp_ {};
        // The private IP address of the server.
        shared_ptr<string> machineIntranetIp_ {};
        // The name of the server.
        shared_ptr<string> machineName_ {};
        // The type of the instance. Valid values include:
        // 
        // *   **ecs**: Elastic Compute Service (ECS) instance
        // *   **slb**: Server Load Balancer (SLB) instance
        shared_ptr<int64_t> machineType_ {};
        // Indicates whether the Security Center agent is online. Valid values:
        // 
        // *   **true**
        // *   **false**
        // 
        // >  If the Security Center agent of the server is offline, Security Center does not protect the server.
        shared_ptr<bool> online_ {};
        // The name of the plug-in.
        shared_ptr<string> pluginName_ {};
        // The version of the plug-in.
        shared_ptr<string> pluginVersion_ {};
        // The UUID of the server.
        shared_ptr<string> uuid_ {};
        // The instance ID of the server.
        shared_ptr<string> instanceId_ {};
      };

      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterName_ == nullptr && this->clusterStatus_ == nullptr && this->nodePluginInfoList_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Data& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline Data& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // clusterStatus Field Functions 
      bool hasClusterStatus() const { return this->clusterStatus_ != nullptr;};
      void deleteClusterStatus() { this->clusterStatus_ = nullptr;};
      inline string getClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(clusterStatus_, "") };
      inline Data& setClusterStatus(string clusterStatus) { DARABONBA_PTR_SET_VALUE(clusterStatus_, clusterStatus) };


      // nodePluginInfoList Field Functions 
      bool hasNodePluginInfoList() const { return this->nodePluginInfoList_ != nullptr;};
      void deleteNodePluginInfoList() { this->nodePluginInfoList_ = nullptr;};
      inline const vector<Data::NodePluginInfoList> & getNodePluginInfoList() const { DARABONBA_PTR_GET_CONST(nodePluginInfoList_, vector<Data::NodePluginInfoList>) };
      inline vector<Data::NodePluginInfoList> getNodePluginInfoList() { DARABONBA_PTR_GET(nodePluginInfoList_, vector<Data::NodePluginInfoList>) };
      inline Data& setNodePluginInfoList(const vector<Data::NodePluginInfoList> & nodePluginInfoList) { DARABONBA_PTR_SET_VALUE(nodePluginInfoList_, nodePluginInfoList) };
      inline Data& setNodePluginInfoList(vector<Data::NodePluginInfoList> && nodePluginInfoList) { DARABONBA_PTR_SET_RVALUE(nodePluginInfoList_, nodePluginInfoList) };


    protected:
      // The ID of the cluster.
      shared_ptr<string> clusterId_ {};
      // The name of the cluster.
      shared_ptr<string> clusterName_ {};
      // The status of the cluster. Valid values:
      // 
      // *   1: normal
      // *   2: abnormal
      // *   3: offline
      shared_ptr<string> clusterStatus_ {};
      // The plug-ins.
      shared_ptr<vector<Data::NodePluginInfoList>> nodePluginInfoList_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListClusterPluginInfoResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListClusterPluginInfoResponseBody::Data>) };
    inline vector<ListClusterPluginInfoResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListClusterPluginInfoResponseBody::Data>) };
    inline ListClusterPluginInfoResponseBody& setData(const vector<ListClusterPluginInfoResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListClusterPluginInfoResponseBody& setData(vector<ListClusterPluginInfoResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClusterPluginInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the plug-in.
    shared_ptr<vector<ListClusterPluginInfoResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
