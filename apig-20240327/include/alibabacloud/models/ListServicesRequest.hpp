// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListServicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(sourceTypes, sourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, ListServicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(sourceTypes, sourceTypes_);
    };
    ListServicesRequest() = default ;
    ListServicesRequest(const ListServicesRequest &) = default ;
    ListServicesRequest(ListServicesRequest &&) = default ;
    ListServicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServicesRequest() = default ;
    ListServicesRequest& operator=(const ListServicesRequest &) = default ;
    ListServicesRequest& operator=(ListServicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayId_ == nullptr
        && this->name_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->resourceGroupId_ == nullptr && this->sourceType_ == nullptr
        && this->sourceTypes_ == nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ListServicesRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListServicesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListServicesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListServicesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListServicesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListServicesRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // sourceTypes Field Functions 
    bool hasSourceTypes() const { return this->sourceTypes_ != nullptr;};
    void deleteSourceTypes() { this->sourceTypes_ = nullptr;};
    inline string getSourceTypes() const { DARABONBA_PTR_GET_DEFAULT(sourceTypes_, "") };
    inline ListServicesRequest& setSourceTypes(string sourceTypes) { DARABONBA_PTR_SET_VALUE(sourceTypes_, sourceTypes) };


  protected:
    // The ID of the cloud-native API gateway.
    shared_ptr<string> gatewayId_ {};
    // The service name for exact match query.
    shared_ptr<string> name_ {};
    // The page number. Pages start from 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The source type of the service. Valid values:
    // - MSE_NACOS: The service is from MSE Nacos.
    // - K8S: The service is from a Kubernetes cluster in Container Service.
    // - FC3: The service is from Function Compute.
    // - VIP: The service is from a fixed address.
    // - DNS: The service is from a domain name.
    shared_ptr<string> sourceType_ {};
    // The list of service source types.
    shared_ptr<string> sourceTypes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
