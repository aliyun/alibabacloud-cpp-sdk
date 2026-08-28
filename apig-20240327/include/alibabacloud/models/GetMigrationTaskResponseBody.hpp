// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMIGRATIONTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMIGRATIONTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetMigrationTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMigrationTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMigrationTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetMigrationTaskResponseBody() = default ;
    GetMigrationTaskResponseBody(const GetMigrationTaskResponseBody &) = default ;
    GetMigrationTaskResponseBody(GetMigrationTaskResponseBody &&) = default ;
    GetMigrationTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMigrationTaskResponseBody() = default ;
    GetMigrationTaskResponseBody& operator=(const GetMigrationTaskResponseBody &) = default ;
    GetMigrationTaskResponseBody& operator=(GetMigrationTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(apiId, apiId_);
        DARABONBA_PTR_TO_JSON(apiName, apiName_);
        DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(clusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(clusterNamespace, clusterNamespace_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(envId, envId_);
        DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(gatewayName, gatewayName_);
        DARABONBA_PTR_TO_JSON(ingressConfig, ingressConfig_);
        DARABONBA_PTR_TO_JSON(migrationType, migrationType_);
        DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
        DARABONBA_PTR_TO_JSON(slbId, slbId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(switchType, switchType_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
        DARABONBA_PTR_TO_JSON(virtualServices, virtualServices_);
        DARABONBA_PTR_TO_JSON(weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(apiId, apiId_);
        DARABONBA_PTR_FROM_JSON(apiName, apiName_);
        DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(clusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(clusterNamespace, clusterNamespace_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(envId, envId_);
        DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(gatewayName, gatewayName_);
        DARABONBA_PTR_FROM_JSON(ingressConfig, ingressConfig_);
        DARABONBA_PTR_FROM_JSON(migrationType, migrationType_);
        DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(slbId, slbId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(switchType, switchType_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
        DARABONBA_PTR_FROM_JSON(virtualServices, virtualServices_);
        DARABONBA_PTR_FROM_JSON(weight, weight_);
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
      class VirtualServices : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VirtualServices& obj) { 
          DARABONBA_PTR_TO_JSON(port, port_);
          DARABONBA_PTR_TO_JSON(protocol, protocol_);
          DARABONBA_PTR_TO_JSON(virtualServiceGroupId, virtualServiceGroupId_);
          DARABONBA_PTR_TO_JSON(virtualServiceGroupName, virtualServiceGroupName_);
        };
        friend void from_json(const Darabonba::Json& j, VirtualServices& obj) { 
          DARABONBA_PTR_FROM_JSON(port, port_);
          DARABONBA_PTR_FROM_JSON(protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(virtualServiceGroupId, virtualServiceGroupId_);
          DARABONBA_PTR_FROM_JSON(virtualServiceGroupName, virtualServiceGroupName_);
        };
        VirtualServices() = default ;
        VirtualServices(const VirtualServices &) = default ;
        VirtualServices(VirtualServices &&) = default ;
        VirtualServices(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VirtualServices() = default ;
        VirtualServices& operator=(const VirtualServices &) = default ;
        VirtualServices& operator=(VirtualServices &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->port_ == nullptr
        && this->protocol_ == nullptr && this->virtualServiceGroupId_ == nullptr && this->virtualServiceGroupName_ == nullptr; };
        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline VirtualServices& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline VirtualServices& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // virtualServiceGroupId Field Functions 
        bool hasVirtualServiceGroupId() const { return this->virtualServiceGroupId_ != nullptr;};
        void deleteVirtualServiceGroupId() { this->virtualServiceGroupId_ = nullptr;};
        inline string getVirtualServiceGroupId() const { DARABONBA_PTR_GET_DEFAULT(virtualServiceGroupId_, "") };
        inline VirtualServices& setVirtualServiceGroupId(string virtualServiceGroupId) { DARABONBA_PTR_SET_VALUE(virtualServiceGroupId_, virtualServiceGroupId) };


        // virtualServiceGroupName Field Functions 
        bool hasVirtualServiceGroupName() const { return this->virtualServiceGroupName_ != nullptr;};
        void deleteVirtualServiceGroupName() { this->virtualServiceGroupName_ = nullptr;};
        inline string getVirtualServiceGroupName() const { DARABONBA_PTR_GET_DEFAULT(virtualServiceGroupName_, "") };
        inline VirtualServices& setVirtualServiceGroupName(string virtualServiceGroupName) { DARABONBA_PTR_SET_VALUE(virtualServiceGroupName_, virtualServiceGroupName) };


      protected:
        shared_ptr<int32_t> port_ {};
        shared_ptr<string> protocol_ {};
        shared_ptr<string> virtualServiceGroupId_ {};
        shared_ptr<string> virtualServiceGroupName_ {};
      };

      class IngressConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IngressConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ingressClass, ingressClass_);
          DARABONBA_PTR_TO_JSON(watchNamespace, watchNamespace_);
        };
        friend void from_json(const Darabonba::Json& j, IngressConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ingressClass, ingressClass_);
          DARABONBA_PTR_FROM_JSON(watchNamespace, watchNamespace_);
        };
        IngressConfig() = default ;
        IngressConfig(const IngressConfig &) = default ;
        IngressConfig(IngressConfig &&) = default ;
        IngressConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IngressConfig() = default ;
        IngressConfig& operator=(const IngressConfig &) = default ;
        IngressConfig& operator=(IngressConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ingressClass_ == nullptr
        && this->watchNamespace_ == nullptr; };
        // ingressClass Field Functions 
        bool hasIngressClass() const { return this->ingressClass_ != nullptr;};
        void deleteIngressClass() { this->ingressClass_ = nullptr;};
        inline string getIngressClass() const { DARABONBA_PTR_GET_DEFAULT(ingressClass_, "") };
        inline IngressConfig& setIngressClass(string ingressClass) { DARABONBA_PTR_SET_VALUE(ingressClass_, ingressClass) };


        // watchNamespace Field Functions 
        bool hasWatchNamespace() const { return this->watchNamespace_ != nullptr;};
        void deleteWatchNamespace() { this->watchNamespace_ = nullptr;};
        inline string getWatchNamespace() const { DARABONBA_PTR_GET_DEFAULT(watchNamespace_, "") };
        inline IngressConfig& setWatchNamespace(string watchNamespace) { DARABONBA_PTR_SET_VALUE(watchNamespace_, watchNamespace) };


      protected:
        shared_ptr<string> ingressClass_ {};
        shared_ptr<string> watchNamespace_ {};
      };

      virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiName_ == nullptr && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->clusterNamespace_ == nullptr && this->createTime_ == nullptr
        && this->description_ == nullptr && this->envId_ == nullptr && this->gatewayId_ == nullptr && this->gatewayName_ == nullptr && this->ingressConfig_ == nullptr
        && this->migrationType_ == nullptr && this->serviceName_ == nullptr && this->slbId_ == nullptr && this->status_ == nullptr && this->switchType_ == nullptr
        && this->taskId_ == nullptr && this->userId_ == nullptr && this->virtualServices_ == nullptr && this->weight_ == nullptr; };
      // apiId Field Functions 
      bool hasApiId() const { return this->apiId_ != nullptr;};
      void deleteApiId() { this->apiId_ = nullptr;};
      inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
      inline Data& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


      // apiName Field Functions 
      bool hasApiName() const { return this->apiName_ != nullptr;};
      void deleteApiName() { this->apiName_ = nullptr;};
      inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
      inline Data& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


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


      // clusterNamespace Field Functions 
      bool hasClusterNamespace() const { return this->clusterNamespace_ != nullptr;};
      void deleteClusterNamespace() { this->clusterNamespace_ = nullptr;};
      inline string getClusterNamespace() const { DARABONBA_PTR_GET_DEFAULT(clusterNamespace_, "") };
      inline Data& setClusterNamespace(string clusterNamespace) { DARABONBA_PTR_SET_VALUE(clusterNamespace_, clusterNamespace) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // envId Field Functions 
      bool hasEnvId() const { return this->envId_ != nullptr;};
      void deleteEnvId() { this->envId_ = nullptr;};
      inline string getEnvId() const { DARABONBA_PTR_GET_DEFAULT(envId_, "") };
      inline Data& setEnvId(string envId) { DARABONBA_PTR_SET_VALUE(envId_, envId) };


      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
      inline Data& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // gatewayName Field Functions 
      bool hasGatewayName() const { return this->gatewayName_ != nullptr;};
      void deleteGatewayName() { this->gatewayName_ = nullptr;};
      inline string getGatewayName() const { DARABONBA_PTR_GET_DEFAULT(gatewayName_, "") };
      inline Data& setGatewayName(string gatewayName) { DARABONBA_PTR_SET_VALUE(gatewayName_, gatewayName) };


      // ingressConfig Field Functions 
      bool hasIngressConfig() const { return this->ingressConfig_ != nullptr;};
      void deleteIngressConfig() { this->ingressConfig_ = nullptr;};
      inline const Data::IngressConfig & getIngressConfig() const { DARABONBA_PTR_GET_CONST(ingressConfig_, Data::IngressConfig) };
      inline Data::IngressConfig getIngressConfig() { DARABONBA_PTR_GET(ingressConfig_, Data::IngressConfig) };
      inline Data& setIngressConfig(const Data::IngressConfig & ingressConfig) { DARABONBA_PTR_SET_VALUE(ingressConfig_, ingressConfig) };
      inline Data& setIngressConfig(Data::IngressConfig && ingressConfig) { DARABONBA_PTR_SET_RVALUE(ingressConfig_, ingressConfig) };


      // migrationType Field Functions 
      bool hasMigrationType() const { return this->migrationType_ != nullptr;};
      void deleteMigrationType() { this->migrationType_ = nullptr;};
      inline string getMigrationType() const { DARABONBA_PTR_GET_DEFAULT(migrationType_, "") };
      inline Data& setMigrationType(string migrationType) { DARABONBA_PTR_SET_VALUE(migrationType_, migrationType) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline Data& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // slbId Field Functions 
      bool hasSlbId() const { return this->slbId_ != nullptr;};
      void deleteSlbId() { this->slbId_ = nullptr;};
      inline string getSlbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
      inline Data& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // switchType Field Functions 
      bool hasSwitchType() const { return this->switchType_ != nullptr;};
      void deleteSwitchType() { this->switchType_ = nullptr;};
      inline string getSwitchType() const { DARABONBA_PTR_GET_DEFAULT(switchType_, "") };
      inline Data& setSwitchType(string switchType) { DARABONBA_PTR_SET_VALUE(switchType_, switchType) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // virtualServices Field Functions 
      bool hasVirtualServices() const { return this->virtualServices_ != nullptr;};
      void deleteVirtualServices() { this->virtualServices_ = nullptr;};
      inline const vector<Data::VirtualServices> & getVirtualServices() const { DARABONBA_PTR_GET_CONST(virtualServices_, vector<Data::VirtualServices>) };
      inline vector<Data::VirtualServices> getVirtualServices() { DARABONBA_PTR_GET(virtualServices_, vector<Data::VirtualServices>) };
      inline Data& setVirtualServices(const vector<Data::VirtualServices> & virtualServices) { DARABONBA_PTR_SET_VALUE(virtualServices_, virtualServices) };
      inline Data& setVirtualServices(vector<Data::VirtualServices> && virtualServices) { DARABONBA_PTR_SET_RVALUE(virtualServices_, virtualServices) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline Data& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      shared_ptr<string> apiId_ {};
      shared_ptr<string> apiName_ {};
      shared_ptr<string> clusterId_ {};
      shared_ptr<string> clusterName_ {};
      shared_ptr<string> clusterNamespace_ {};
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> envId_ {};
      shared_ptr<string> gatewayId_ {};
      shared_ptr<string> gatewayName_ {};
      shared_ptr<Data::IngressConfig> ingressConfig_ {};
      shared_ptr<string> migrationType_ {};
      shared_ptr<string> serviceName_ {};
      shared_ptr<string> slbId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> switchType_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<vector<Data::VirtualServices>> virtualServices_ {};
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetMigrationTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMigrationTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMigrationTaskResponseBody::Data) };
    inline GetMigrationTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMigrationTaskResponseBody::Data) };
    inline GetMigrationTaskResponseBody& setData(const GetMigrationTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMigrationTaskResponseBody& setData(GetMigrationTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetMigrationTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMigrationTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetMigrationTaskResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
