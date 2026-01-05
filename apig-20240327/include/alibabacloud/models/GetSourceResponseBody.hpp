// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetSourceResponseBody() = default ;
    GetSourceResponseBody(const GetSourceResponseBody &) = default ;
    GetSourceResponseBody(GetSourceResponseBody &&) = default ;
    GetSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSourceResponseBody() = default ;
    GetSourceResponseBody& operator=(const GetSourceResponseBody &) = default ;
    GetSourceResponseBody& operator=(GetSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(createTimestamp, createTimestamp_);
        DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(k8SSourceInfo, k8SSourceInfo_);
        DARABONBA_PTR_TO_JSON(nacosSourceInfo, nacosSourceInfo_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(updateTimestamp, updateTimestamp_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(createTimestamp, createTimestamp_);
        DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(k8SSourceInfo, k8SSourceInfo_);
        DARABONBA_PTR_FROM_JSON(nacosSourceInfo, nacosSourceInfo_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(updateTimestamp, updateTimestamp_);
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
      class NacosSourceInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NacosSourceInfo& obj) { 
          DARABONBA_PTR_TO_JSON(address, address_);
          DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        };
        friend void from_json(const Darabonba::Json& j, NacosSourceInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(address, address_);
          DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        };
        NacosSourceInfo() = default ;
        NacosSourceInfo(const NacosSourceInfo &) = default ;
        NacosSourceInfo(NacosSourceInfo &&) = default ;
        NacosSourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NacosSourceInfo() = default ;
        NacosSourceInfo& operator=(const NacosSourceInfo &) = default ;
        NacosSourceInfo& operator=(NacosSourceInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->address_ == nullptr
        && this->clusterId_ == nullptr && this->instanceId_ == nullptr; };
        // address Field Functions 
        bool hasAddress() const { return this->address_ != nullptr;};
        void deleteAddress() { this->address_ = nullptr;};
        inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
        inline NacosSourceInfo& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline NacosSourceInfo& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline NacosSourceInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      protected:
        // The endpoint of the Nacos instance.
        shared_ptr<string> address_ {};
        // The cluster ID.
        shared_ptr<string> clusterId_ {};
        // The Nacos instance ID.
        shared_ptr<string> instanceId_ {};
      };

      class K8SSourceInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const K8SSourceInfo& obj) { 
          DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
        };
        friend void from_json(const Darabonba::Json& j, K8SSourceInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
        };
        K8SSourceInfo() = default ;
        K8SSourceInfo(const K8SSourceInfo &) = default ;
        K8SSourceInfo(K8SSourceInfo &&) = default ;
        K8SSourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~K8SSourceInfo() = default ;
        K8SSourceInfo& operator=(const K8SSourceInfo &) = default ;
        K8SSourceInfo& operator=(K8SSourceInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clusterId_ == nullptr; };
        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline K8SSourceInfo& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      protected:
        // The ID of the Container Service for Kubernetes (ACK) cluster.
        shared_ptr<string> clusterId_ {};
      };

      virtual bool empty() const override { return this->createTimestamp_ == nullptr
        && this->gatewayId_ == nullptr && this->k8SSourceInfo_ == nullptr && this->nacosSourceInfo_ == nullptr && this->name_ == nullptr && this->resourceGroupId_ == nullptr
        && this->sourceId_ == nullptr && this->type_ == nullptr && this->updateTimestamp_ == nullptr; };
      // createTimestamp Field Functions 
      bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
      void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
      inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
      inline Data& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
      inline Data& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // k8SSourceInfo Field Functions 
      bool hasK8SSourceInfo() const { return this->k8SSourceInfo_ != nullptr;};
      void deleteK8SSourceInfo() { this->k8SSourceInfo_ = nullptr;};
      inline const Data::K8SSourceInfo & getK8SSourceInfo() const { DARABONBA_PTR_GET_CONST(k8SSourceInfo_, Data::K8SSourceInfo) };
      inline Data::K8SSourceInfo getK8SSourceInfo() { DARABONBA_PTR_GET(k8SSourceInfo_, Data::K8SSourceInfo) };
      inline Data& setK8SSourceInfo(const Data::K8SSourceInfo & k8SSourceInfo) { DARABONBA_PTR_SET_VALUE(k8SSourceInfo_, k8SSourceInfo) };
      inline Data& setK8SSourceInfo(Data::K8SSourceInfo && k8SSourceInfo) { DARABONBA_PTR_SET_RVALUE(k8SSourceInfo_, k8SSourceInfo) };


      // nacosSourceInfo Field Functions 
      bool hasNacosSourceInfo() const { return this->nacosSourceInfo_ != nullptr;};
      void deleteNacosSourceInfo() { this->nacosSourceInfo_ = nullptr;};
      inline const Data::NacosSourceInfo & getNacosSourceInfo() const { DARABONBA_PTR_GET_CONST(nacosSourceInfo_, Data::NacosSourceInfo) };
      inline Data::NacosSourceInfo getNacosSourceInfo() { DARABONBA_PTR_GET(nacosSourceInfo_, Data::NacosSourceInfo) };
      inline Data& setNacosSourceInfo(const Data::NacosSourceInfo & nacosSourceInfo) { DARABONBA_PTR_SET_VALUE(nacosSourceInfo_, nacosSourceInfo) };
      inline Data& setNacosSourceInfo(Data::NacosSourceInfo && nacosSourceInfo) { DARABONBA_PTR_SET_RVALUE(nacosSourceInfo_, nacosSourceInfo) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Data& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // sourceId Field Functions 
      bool hasSourceId() const { return this->sourceId_ != nullptr;};
      void deleteSourceId() { this->sourceId_ = nullptr;};
      inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
      inline Data& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updateTimestamp Field Functions 
      bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
      void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
      inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
      inline Data& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


    protected:
      // The creation timestamp.
      shared_ptr<int64_t> createTimestamp_ {};
      // The gateway ID.
      shared_ptr<string> gatewayId_ {};
      // Kubernetes source information.
      shared_ptr<Data::K8SSourceInfo> k8SSourceInfo_ {};
      // The source information when the source type is MSE_NACOS.
      shared_ptr<Data::NacosSourceInfo> nacosSourceInfo_ {};
      // The name.
      shared_ptr<string> name_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The source ID.
      shared_ptr<string> sourceId_ {};
      // The type.
      shared_ptr<string> type_ {};
      // The update timestamp.
      shared_ptr<int64_t> updateTimestamp_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSourceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSourceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSourceResponseBody::Data) };
    inline GetSourceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSourceResponseBody::Data) };
    inline GetSourceResponseBody& setData(const GetSourceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSourceResponseBody& setData(GetSourceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSourceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<GetSourceResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
