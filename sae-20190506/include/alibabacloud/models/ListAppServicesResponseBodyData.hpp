// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPSERVICESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPSERVICESRESPONSEBODYDATA_HPP_
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
  class ListAppServicesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppServicesResponseBodyData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListAppServicesResponseBodyData& obj) { 
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
    ListAppServicesResponseBodyData() = default ;
    ListAppServicesResponseBodyData(const ListAppServicesResponseBodyData &) = default ;
    ListAppServicesResponseBodyData(ListAppServicesResponseBodyData &&) = default ;
    ListAppServicesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppServicesResponseBodyData() = default ;
    ListAppServicesResponseBodyData& operator=(const ListAppServicesResponseBodyData &) = default ;
    ListAppServicesResponseBodyData& operator=(ListAppServicesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->instanceCount_ == nullptr && return this->namespaceId_ == nullptr && return this->namespaceName_ == nullptr && return this->registryType_ == nullptr
        && return this->securityGroupId_ == nullptr && return this->serviceGroup_ == nullptr && return this->serviceName_ == nullptr && return this->servicePortAndProtocol_ == nullptr && return this->servicePorts_ == nullptr
        && return this->serviceProtocol_ == nullptr && return this->serviceType_ == nullptr && return this->serviceVersion_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListAppServicesResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListAppServicesResponseBodyData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline string instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, "") };
    inline ListAppServicesResponseBodyData& setInstanceCount(string instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListAppServicesResponseBodyData& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string namespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline ListAppServicesResponseBodyData& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // registryType Field Functions 
    bool hasRegistryType() const { return this->registryType_ != nullptr;};
    void deleteRegistryType() { this->registryType_ = nullptr;};
    inline string registryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
    inline ListAppServicesResponseBodyData& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline ListAppServicesResponseBodyData& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // serviceGroup Field Functions 
    bool hasServiceGroup() const { return this->serviceGroup_ != nullptr;};
    void deleteServiceGroup() { this->serviceGroup_ = nullptr;};
    inline string serviceGroup() const { DARABONBA_PTR_GET_DEFAULT(serviceGroup_, "") };
    inline ListAppServicesResponseBodyData& setServiceGroup(string serviceGroup) { DARABONBA_PTR_SET_VALUE(serviceGroup_, serviceGroup) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListAppServicesResponseBodyData& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // servicePortAndProtocol Field Functions 
    bool hasServicePortAndProtocol() const { return this->servicePortAndProtocol_ != nullptr;};
    void deleteServicePortAndProtocol() { this->servicePortAndProtocol_ = nullptr;};
    inline const map<string, string> & servicePortAndProtocol() const { DARABONBA_PTR_GET_CONST(servicePortAndProtocol_, map<string, string>) };
    inline map<string, string> servicePortAndProtocol() { DARABONBA_PTR_GET(servicePortAndProtocol_, map<string, string>) };
    inline ListAppServicesResponseBodyData& setServicePortAndProtocol(const map<string, string> & servicePortAndProtocol) { DARABONBA_PTR_SET_VALUE(servicePortAndProtocol_, servicePortAndProtocol) };
    inline ListAppServicesResponseBodyData& setServicePortAndProtocol(map<string, string> && servicePortAndProtocol) { DARABONBA_PTR_SET_RVALUE(servicePortAndProtocol_, servicePortAndProtocol) };


    // servicePorts Field Functions 
    bool hasServicePorts() const { return this->servicePorts_ != nullptr;};
    void deleteServicePorts() { this->servicePorts_ = nullptr;};
    inline const vector<int32_t> & servicePorts() const { DARABONBA_PTR_GET_CONST(servicePorts_, vector<int32_t>) };
    inline vector<int32_t> servicePorts() { DARABONBA_PTR_GET(servicePorts_, vector<int32_t>) };
    inline ListAppServicesResponseBodyData& setServicePorts(const vector<int32_t> & servicePorts) { DARABONBA_PTR_SET_VALUE(servicePorts_, servicePorts) };
    inline ListAppServicesResponseBodyData& setServicePorts(vector<int32_t> && servicePorts) { DARABONBA_PTR_SET_RVALUE(servicePorts_, servicePorts) };


    // serviceProtocol Field Functions 
    bool hasServiceProtocol() const { return this->serviceProtocol_ != nullptr;};
    void deleteServiceProtocol() { this->serviceProtocol_ = nullptr;};
    inline string serviceProtocol() const { DARABONBA_PTR_GET_DEFAULT(serviceProtocol_, "") };
    inline ListAppServicesResponseBodyData& setServiceProtocol(string serviceProtocol) { DARABONBA_PTR_SET_VALUE(serviceProtocol_, serviceProtocol) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline ListAppServicesResponseBodyData& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // serviceVersion Field Functions 
    bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
    void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
    inline string serviceVersion() const { DARABONBA_PTR_GET_DEFAULT(serviceVersion_, "") };
    inline ListAppServicesResponseBodyData& setServiceVersion(string serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };


  protected:
    // The application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The number of instances of the microservice.
    std::shared_ptr<string> instanceCount_ = nullptr;
    // The ID of the namespace to which the application belongs.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The name of the namespace.
    std::shared_ptr<string> namespaceName_ = nullptr;
    // The registry type. Valid values:
    // 
    // *   **0**：SAE Nacos
    // *   **1**: SAE built-in Nacos
    // *   **2**: MSE Nacos
    // *   **9**: SAE Kubernets service
    std::shared_ptr<string> registryType_ = nullptr;
    // The IDs of the security groups.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The group to which the microservice belongs.
    std::shared_ptr<string> serviceGroup_ = nullptr;
    // The name of the microservice.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The ports and protocols.
    std::shared_ptr<map<string, string>> servicePortAndProtocol_ = nullptr;
    // The list of ports.
    std::shared_ptr<vector<int32_t>> servicePorts_ = nullptr;
    // The protocol used by the microservice.
    std::shared_ptr<string> serviceProtocol_ = nullptr;
    // The type of the microservice. Valid values:
    // 
    // *   **dubbo**
    // *   **springCloud**
    // *   **hsf**
    // *   **k8sService**
    std::shared_ptr<string> serviceType_ = nullptr;
    // The version of the microservice.
    std::shared_ptr<string> serviceVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
