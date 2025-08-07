// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCESRESPONSEBODYSERVICEINSTANCESSERVICE_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCESRESPONSEBODYSERVICEINSTANCESSERVICE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListServiceInstancesResponseBodyServiceInstancesServiceCommodity.hpp>
#include <vector>
#include <alibabacloud/models/ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListServiceInstancesResponseBodyServiceInstancesService : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstancesResponseBodyServiceInstancesService& obj) { 
      DARABONBA_PTR_TO_JSON(Commodity, commodity_);
      DARABONBA_PTR_TO_JSON(DeployType, deployType_);
      DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceInfos, serviceInfos_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_TO_JSON(SupplierUrl, supplierUrl_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstancesResponseBodyServiceInstancesService& obj) { 
      DARABONBA_PTR_FROM_JSON(Commodity, commodity_);
      DARABONBA_PTR_FROM_JSON(DeployType, deployType_);
      DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceInfos, serviceInfos_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_FROM_JSON(SupplierUrl, supplierUrl_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    ListServiceInstancesResponseBodyServiceInstancesService() = default ;
    ListServiceInstancesResponseBodyServiceInstancesService(const ListServiceInstancesResponseBodyServiceInstancesService &) = default ;
    ListServiceInstancesResponseBodyServiceInstancesService(ListServiceInstancesResponseBodyServiceInstancesService &&) = default ;
    ListServiceInstancesResponseBodyServiceInstancesService(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstancesResponseBodyServiceInstancesService() = default ;
    ListServiceInstancesResponseBodyServiceInstancesService& operator=(const ListServiceInstancesResponseBodyServiceInstancesService &) = default ;
    ListServiceInstancesResponseBodyServiceInstancesService& operator=(ListServiceInstancesResponseBodyServiceInstancesService &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commodity_ != nullptr
        && this->deployType_ != nullptr && this->publishTime_ != nullptr && this->serviceId_ != nullptr && this->serviceInfos_ != nullptr && this->serviceType_ != nullptr
        && this->status_ != nullptr && this->supplierName_ != nullptr && this->supplierUrl_ != nullptr && this->version_ != nullptr && this->versionName_ != nullptr; };
    // commodity Field Functions 
    bool hasCommodity() const { return this->commodity_ != nullptr;};
    void deleteCommodity() { this->commodity_ = nullptr;};
    inline const Models::ListServiceInstancesResponseBodyServiceInstancesServiceCommodity & commodity() const { DARABONBA_PTR_GET_CONST(commodity_, Models::ListServiceInstancesResponseBodyServiceInstancesServiceCommodity) };
    inline Models::ListServiceInstancesResponseBodyServiceInstancesServiceCommodity commodity() { DARABONBA_PTR_GET(commodity_, Models::ListServiceInstancesResponseBodyServiceInstancesServiceCommodity) };
    inline ListServiceInstancesResponseBodyServiceInstancesService& setCommodity(const Models::ListServiceInstancesResponseBodyServiceInstancesServiceCommodity & commodity) { DARABONBA_PTR_SET_VALUE(commodity_, commodity) };
    inline ListServiceInstancesResponseBodyServiceInstancesService& setCommodity(Models::ListServiceInstancesResponseBodyServiceInstancesServiceCommodity && commodity) { DARABONBA_PTR_SET_RVALUE(commodity_, commodity) };


    // deployType Field Functions 
    bool hasDeployType() const { return this->deployType_ != nullptr;};
    void deleteDeployType() { this->deployType_ = nullptr;};
    inline string deployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, "") };
    inline ListServiceInstancesResponseBodyServiceInstancesService& setDeployType(string deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


    // publishTime Field Functions 
    bool hasPublishTime() const { return this->publishTime_ != nullptr;};
    void deletePublishTime() { this->publishTime_ = nullptr;};
    inline string publishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
    inline ListServiceInstancesResponseBodyServiceInstancesService& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline ListServiceInstancesResponseBodyServiceInstancesService& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceInfos Field Functions 
    bool hasServiceInfos() const { return this->serviceInfos_ != nullptr;};
    void deleteServiceInfos() { this->serviceInfos_ = nullptr;};
    inline const vector<Models::ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos> & serviceInfos() const { DARABONBA_PTR_GET_CONST(serviceInfos_, vector<Models::ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos>) };
    inline vector<Models::ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos> serviceInfos() { DARABONBA_PTR_GET(serviceInfos_, vector<Models::ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos>) };
    inline ListServiceInstancesResponseBodyServiceInstancesService& setServiceInfos(const vector<Models::ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos> & serviceInfos) { DARABONBA_PTR_SET_VALUE(serviceInfos_, serviceInfos) };
    inline ListServiceInstancesResponseBodyServiceInstancesService& setServiceInfos(vector<Models::ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos> && serviceInfos) { DARABONBA_PTR_SET_RVALUE(serviceInfos_, serviceInfos) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline ListServiceInstancesResponseBodyServiceInstancesService& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListServiceInstancesResponseBodyServiceInstancesService& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supplierName Field Functions 
    bool hasSupplierName() const { return this->supplierName_ != nullptr;};
    void deleteSupplierName() { this->supplierName_ = nullptr;};
    inline string supplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
    inline ListServiceInstancesResponseBodyServiceInstancesService& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


    // supplierUrl Field Functions 
    bool hasSupplierUrl() const { return this->supplierUrl_ != nullptr;};
    void deleteSupplierUrl() { this->supplierUrl_ = nullptr;};
    inline string supplierUrl() const { DARABONBA_PTR_GET_DEFAULT(supplierUrl_, "") };
    inline ListServiceInstancesResponseBodyServiceInstancesService& setSupplierUrl(string supplierUrl) { DARABONBA_PTR_SET_VALUE(supplierUrl_, supplierUrl) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListServiceInstancesResponseBodyServiceInstancesService& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string versionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline ListServiceInstancesResponseBodyServiceInstancesService& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // The commodity details.
    std::shared_ptr<Models::ListServiceInstancesResponseBodyServiceInstancesServiceCommodity> commodity_ = nullptr;
    // The deployment type of the service. Valid values:
    // 
    // *   ros: The service is deployed by using Resource Orchestration Service (ROS).
    // *   terraform: The service is deployed by using Terraform.
    // *   ack: The service is deployed by using Alibaba Cloud Container Service for Kubernetes (ACK).
    // *   spi: The service is deployed by calling the Service Provider Interface (SPI).
    // *   operation: The service is deployed by using a hosted O\\&M service.
    std::shared_ptr<string> deployType_ = nullptr;
    // The time when the service was published.
    std::shared_ptr<string> publishTime_ = nullptr;
    // The service ID.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The information about the service.
    std::shared_ptr<vector<Models::ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos>> serviceInfos_ = nullptr;
    // The type of the service. Valid values:
    // 
    // *   private: The service is a private service and is deployed within the account of a customer.
    // *   managed: The service is a fully managed service and is deployed within the account of a service provider.
    // *   operation: The service is a hosted O\\&M service.
    std::shared_ptr<string> serviceType_ = nullptr;
    // The service state.
    std::shared_ptr<string> status_ = nullptr;
    // The name of the service provider.
    std::shared_ptr<string> supplierName_ = nullptr;
    // The URL of the service provider.
    std::shared_ptr<string> supplierUrl_ = nullptr;
    // The service version.
    std::shared_ptr<string> version_ = nullptr;
    // The custom version name defined by the service provider.
    std::shared_ptr<string> versionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
