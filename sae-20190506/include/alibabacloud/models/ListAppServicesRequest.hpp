// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPSERVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPSERVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListAppServicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppServicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(NacosInstanceId, nacosInstanceId_);
      DARABONBA_PTR_TO_JSON(NacosNamespaceId, nacosNamespaceId_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegistryType, registryType_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppServicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(NacosInstanceId, nacosInstanceId_);
      DARABONBA_PTR_FROM_JSON(NacosNamespaceId, nacosNamespaceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegistryType, registryType_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListAppServicesRequest() = default ;
    ListAppServicesRequest(const ListAppServicesRequest &) = default ;
    ListAppServicesRequest(ListAppServicesRequest &&) = default ;
    ListAppServicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppServicesRequest() = default ;
    ListAppServicesRequest& operator=(const ListAppServicesRequest &) = default ;
    ListAppServicesRequest& operator=(ListAppServicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->nacosInstanceId_ == nullptr && this->nacosNamespaceId_ == nullptr && this->namespaceId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->registryType_ == nullptr && this->serviceType_ == nullptr && this->vpcId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListAppServicesRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // nacosInstanceId Field Functions 
    bool hasNacosInstanceId() const { return this->nacosInstanceId_ != nullptr;};
    void deleteNacosInstanceId() { this->nacosInstanceId_ = nullptr;};
    inline string getNacosInstanceId() const { DARABONBA_PTR_GET_DEFAULT(nacosInstanceId_, "") };
    inline ListAppServicesRequest& setNacosInstanceId(string nacosInstanceId) { DARABONBA_PTR_SET_VALUE(nacosInstanceId_, nacosInstanceId) };


    // nacosNamespaceId Field Functions 
    bool hasNacosNamespaceId() const { return this->nacosNamespaceId_ != nullptr;};
    void deleteNacosNamespaceId() { this->nacosNamespaceId_ = nullptr;};
    inline string getNacosNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(nacosNamespaceId_, "") };
    inline ListAppServicesRequest& setNacosNamespaceId(string nacosNamespaceId) { DARABONBA_PTR_SET_VALUE(nacosNamespaceId_, nacosNamespaceId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListAppServicesRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAppServicesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAppServicesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // registryType Field Functions 
    bool hasRegistryType() const { return this->registryType_ != nullptr;};
    void deleteRegistryType() { this->registryType_ = nullptr;};
    inline string getRegistryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
    inline ListAppServicesRequest& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline ListAppServicesRequest& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListAppServicesRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of the application. You must specify only one of the following parameters: vpcId, namespace ID, and application ID.
    shared_ptr<string> appId_ {};
    // The ID of the MSE Nacos instance. This parameter is required when the registry type is set to MSE Nacos.
    shared_ptr<string> nacosInstanceId_ {};
    // The ID of the MSE Nacos namespace. This parameter is required when the registry type is set to MSE Nacos.
    shared_ptr<string> nacosNamespaceId_ {};
    // The ID of the namespace. You must specify only one of the following parameters: VPC ID, namespace ID, and application ID.
    shared_ptr<string> namespaceId_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The registry type. Valid values:
    // 
    // *   **0**: SAE Nacos
    // *   **1**: SAE built-in Nacos
    // *   **2** :MSE Nacos
    // *   **9**: SAE Kubernetes service
    shared_ptr<string> registryType_ {};
    // The service type. Valid values:
    // 
    // *   **dubbo**
    // *   **springCloud**
    // *   **hsf**
    // *   **k8sService**
    shared_ptr<string> serviceType_ {};
    // The unique identifier of the VPC. You must specify only one of the following parameters: VPC ID, namespace ID, and application ID.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
