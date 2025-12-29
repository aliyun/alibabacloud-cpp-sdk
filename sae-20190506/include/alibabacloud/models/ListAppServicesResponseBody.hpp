// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPSERVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPSERVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListAppServicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppServicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppServicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    ListAppServicesResponseBody() = default ;
    ListAppServicesResponseBody(const ListAppServicesResponseBody &) = default ;
    ListAppServicesResponseBody(ListAppServicesResponseBody &&) = default ;
    ListAppServicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppServicesResponseBody() = default ;
    ListAppServicesResponseBody& operator=(const ListAppServicesResponseBody &) = default ;
    ListAppServicesResponseBody& operator=(ListAppServicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
        DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
        DARABONBA_PTR_TO_JSON(RegistryType, registryType_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(ServiceGroup, serviceGroup_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_TO_JSON(ServicePortAndProtocol, servicePortAndProtocol_);
        DARABONBA_PTR_TO_JSON(ServicePorts, servicePorts_);
        DARABONBA_PTR_TO_JSON(ServiceProtocol, serviceProtocol_);
        DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_TO_JSON(ServiceVersion, serviceVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
        DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
        DARABONBA_PTR_FROM_JSON(RegistryType, registryType_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(ServiceGroup, serviceGroup_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(ServicePortAndProtocol, servicePortAndProtocol_);
        DARABONBA_PTR_FROM_JSON(ServicePorts, servicePorts_);
        DARABONBA_PTR_FROM_JSON(ServiceProtocol, serviceProtocol_);
        DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_FROM_JSON(ServiceVersion, serviceVersion_);
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
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->instanceCount_ == nullptr && this->namespaceId_ == nullptr && this->namespaceName_ == nullptr && this->registryType_ == nullptr
        && this->securityGroupId_ == nullptr && this->serviceGroup_ == nullptr && this->serviceName_ == nullptr && this->servicePortAndProtocol_ == nullptr && this->servicePorts_ == nullptr
        && this->serviceProtocol_ == nullptr && this->serviceType_ == nullptr && this->serviceVersion_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Data& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // instanceCount Field Functions 
      bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
      void deleteInstanceCount() { this->instanceCount_ = nullptr;};
      inline string getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, "") };
      inline Data& setInstanceCount(string instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


      // namespaceId Field Functions 
      bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
      void deleteNamespaceId() { this->namespaceId_ = nullptr;};
      inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
      inline Data& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


      // namespaceName Field Functions 
      bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
      void deleteNamespaceName() { this->namespaceName_ = nullptr;};
      inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
      inline Data& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


      // registryType Field Functions 
      bool hasRegistryType() const { return this->registryType_ != nullptr;};
      void deleteRegistryType() { this->registryType_ = nullptr;};
      inline string getRegistryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
      inline Data& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline Data& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // serviceGroup Field Functions 
      bool hasServiceGroup() const { return this->serviceGroup_ != nullptr;};
      void deleteServiceGroup() { this->serviceGroup_ = nullptr;};
      inline string getServiceGroup() const { DARABONBA_PTR_GET_DEFAULT(serviceGroup_, "") };
      inline Data& setServiceGroup(string serviceGroup) { DARABONBA_PTR_SET_VALUE(serviceGroup_, serviceGroup) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline Data& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // servicePortAndProtocol Field Functions 
      bool hasServicePortAndProtocol() const { return this->servicePortAndProtocol_ != nullptr;};
      void deleteServicePortAndProtocol() { this->servicePortAndProtocol_ = nullptr;};
      inline const map<string, string> & getServicePortAndProtocol() const { DARABONBA_PTR_GET_CONST(servicePortAndProtocol_, map<string, string>) };
      inline map<string, string> getServicePortAndProtocol() { DARABONBA_PTR_GET(servicePortAndProtocol_, map<string, string>) };
      inline Data& setServicePortAndProtocol(const map<string, string> & servicePortAndProtocol) { DARABONBA_PTR_SET_VALUE(servicePortAndProtocol_, servicePortAndProtocol) };
      inline Data& setServicePortAndProtocol(map<string, string> && servicePortAndProtocol) { DARABONBA_PTR_SET_RVALUE(servicePortAndProtocol_, servicePortAndProtocol) };


      // servicePorts Field Functions 
      bool hasServicePorts() const { return this->servicePorts_ != nullptr;};
      void deleteServicePorts() { this->servicePorts_ = nullptr;};
      inline const vector<int32_t> & getServicePorts() const { DARABONBA_PTR_GET_CONST(servicePorts_, vector<int32_t>) };
      inline vector<int32_t> getServicePorts() { DARABONBA_PTR_GET(servicePorts_, vector<int32_t>) };
      inline Data& setServicePorts(const vector<int32_t> & servicePorts) { DARABONBA_PTR_SET_VALUE(servicePorts_, servicePorts) };
      inline Data& setServicePorts(vector<int32_t> && servicePorts) { DARABONBA_PTR_SET_RVALUE(servicePorts_, servicePorts) };


      // serviceProtocol Field Functions 
      bool hasServiceProtocol() const { return this->serviceProtocol_ != nullptr;};
      void deleteServiceProtocol() { this->serviceProtocol_ = nullptr;};
      inline string getServiceProtocol() const { DARABONBA_PTR_GET_DEFAULT(serviceProtocol_, "") };
      inline Data& setServiceProtocol(string serviceProtocol) { DARABONBA_PTR_SET_VALUE(serviceProtocol_, serviceProtocol) };


      // serviceType Field Functions 
      bool hasServiceType() const { return this->serviceType_ != nullptr;};
      void deleteServiceType() { this->serviceType_ = nullptr;};
      inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
      inline Data& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


      // serviceVersion Field Functions 
      bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
      void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
      inline string getServiceVersion() const { DARABONBA_PTR_GET_DEFAULT(serviceVersion_, "") };
      inline Data& setServiceVersion(string serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };


    protected:
      // The application ID.
      shared_ptr<string> appId_ {};
      // The name of the application.
      shared_ptr<string> appName_ {};
      // The number of instances of the microservice.
      shared_ptr<string> instanceCount_ {};
      // The ID of the namespace to which the application belongs.
      shared_ptr<string> namespaceId_ {};
      // The name of the namespace.
      shared_ptr<string> namespaceName_ {};
      // The registry type. Valid values:
      // 
      // *   **0**：SAE Nacos
      // *   **1**: SAE built-in Nacos
      // *   **2**: MSE Nacos
      // *   **9**: SAE Kubernets service
      shared_ptr<string> registryType_ {};
      // The IDs of the security groups.
      shared_ptr<string> securityGroupId_ {};
      // The group to which the microservice belongs.
      shared_ptr<string> serviceGroup_ {};
      // The name of the microservice.
      shared_ptr<string> serviceName_ {};
      // The ports and protocols.
      shared_ptr<map<string, string>> servicePortAndProtocol_ {};
      // The list of ports.
      shared_ptr<vector<int32_t>> servicePorts_ {};
      // The protocol used by the microservice.
      shared_ptr<string> serviceProtocol_ {};
      // The type of the microservice. Valid values:
      // 
      // *   **dubbo**
      // *   **springCloud**
      // *   **hsf**
      // *   **k8sService**
      shared_ptr<string> serviceType_ {};
      // The version of the microservice.
      shared_ptr<string> serviceVersion_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAppServicesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAppServicesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAppServicesResponseBody::Data>) };
    inline vector<ListAppServicesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAppServicesResponseBody::Data>) };
    inline ListAppServicesResponseBody& setData(const vector<ListAppServicesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAppServicesResponseBody& setData(vector<ListAppServicesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListAppServicesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAppServicesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAppServicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAppServicesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline ListAppServicesResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code that is returned. Valid values:
    // 
    // *   **2xx**: The request was successful.
    // *   **3xx**: The request was redirected.
    // *   **4xx**: The request failed.
    // *   **5xx**: A server error occurred.
    shared_ptr<string> code_ {};
    // The details of the microservice.
    shared_ptr<vector<ListAppServicesResponseBody::Data>> data_ {};
    // The status code. Valid values:
    // 
    // *   If the request was successful, the **ErrorCode** parameter is not returned.
    // *   If the request failed, **ErrorCode** is returned. For more information, see **Error codes** in this topic.
    shared_ptr<string> errorCode_ {};
    // The message returned. Valid values:
    // 
    // *   If the request was successful, **success** is returned.
    // *   If the request failed, an error message is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The ID of the trace. The ID is used to query the details of a request.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
