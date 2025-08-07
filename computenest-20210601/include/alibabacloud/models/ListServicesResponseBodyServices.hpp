// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICESRESPONSEBODYSERVICES_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICESRESPONSEBODYSERVICES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListServicesResponseBodyServicesCommodity.hpp>
#include <vector>
#include <alibabacloud/models/ListServicesResponseBodyServicesServiceInfos.hpp>
#include <alibabacloud/models/ListServicesResponseBodyServicesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListServicesResponseBodyServices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServicesResponseBodyServices& obj) { 
      DARABONBA_PTR_TO_JSON(Categories, categories_);
      DARABONBA_PTR_TO_JSON(Commodity, commodity_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(DeployFrom, deployFrom_);
      DARABONBA_PTR_TO_JSON(DeployType, deployType_);
      DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceInfos, serviceInfos_);
      DARABONBA_PTR_TO_JSON(ServiceProductUrl, serviceProductUrl_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_TO_JSON(SupplierNameEng, supplierNameEng_);
      DARABONBA_PTR_TO_JSON(SupplierUid, supplierUid_);
      DARABONBA_PTR_TO_JSON(SupplierUrl, supplierUrl_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TenantType, tenantType_);
      DARABONBA_PTR_TO_JSON(TrialDuration, trialDuration_);
      DARABONBA_PTR_TO_JSON(TrialType, trialType_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
      DARABONBA_PTR_TO_JSON(VirtualInternetService, virtualInternetService_);
    };
    friend void from_json(const Darabonba::Json& j, ListServicesResponseBodyServices& obj) { 
      DARABONBA_PTR_FROM_JSON(Categories, categories_);
      DARABONBA_PTR_FROM_JSON(Commodity, commodity_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(DeployFrom, deployFrom_);
      DARABONBA_PTR_FROM_JSON(DeployType, deployType_);
      DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceInfos, serviceInfos_);
      DARABONBA_PTR_FROM_JSON(ServiceProductUrl, serviceProductUrl_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_FROM_JSON(SupplierNameEng, supplierNameEng_);
      DARABONBA_PTR_FROM_JSON(SupplierUid, supplierUid_);
      DARABONBA_PTR_FROM_JSON(SupplierUrl, supplierUrl_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TenantType, tenantType_);
      DARABONBA_PTR_FROM_JSON(TrialDuration, trialDuration_);
      DARABONBA_PTR_FROM_JSON(TrialType, trialType_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
      DARABONBA_PTR_FROM_JSON(VirtualInternetService, virtualInternetService_);
    };
    ListServicesResponseBodyServices() = default ;
    ListServicesResponseBodyServices(const ListServicesResponseBodyServices &) = default ;
    ListServicesResponseBodyServices(ListServicesResponseBodyServices &&) = default ;
    ListServicesResponseBodyServices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServicesResponseBodyServices() = default ;
    ListServicesResponseBodyServices& operator=(const ListServicesResponseBodyServices &) = default ;
    ListServicesResponseBodyServices& operator=(ListServicesResponseBodyServices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categories_ != nullptr
        && this->commodity_ != nullptr && this->commodityCode_ != nullptr && this->deployFrom_ != nullptr && this->deployType_ != nullptr && this->publishTime_ != nullptr
        && this->score_ != nullptr && this->serviceId_ != nullptr && this->serviceInfos_ != nullptr && this->serviceProductUrl_ != nullptr && this->serviceType_ != nullptr
        && this->status_ != nullptr && this->supplierName_ != nullptr && this->supplierNameEng_ != nullptr && this->supplierUid_ != nullptr && this->supplierUrl_ != nullptr
        && this->tags_ != nullptr && this->tenantType_ != nullptr && this->trialDuration_ != nullptr && this->trialType_ != nullptr && this->version_ != nullptr
        && this->versionName_ != nullptr && this->virtualInternetService_ != nullptr; };
    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline string categories() const { DARABONBA_PTR_GET_DEFAULT(categories_, "") };
    inline ListServicesResponseBodyServices& setCategories(string categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };


    // commodity Field Functions 
    bool hasCommodity() const { return this->commodity_ != nullptr;};
    void deleteCommodity() { this->commodity_ = nullptr;};
    inline const Models::ListServicesResponseBodyServicesCommodity & commodity() const { DARABONBA_PTR_GET_CONST(commodity_, Models::ListServicesResponseBodyServicesCommodity) };
    inline Models::ListServicesResponseBodyServicesCommodity commodity() { DARABONBA_PTR_GET(commodity_, Models::ListServicesResponseBodyServicesCommodity) };
    inline ListServicesResponseBodyServices& setCommodity(const Models::ListServicesResponseBodyServicesCommodity & commodity) { DARABONBA_PTR_SET_VALUE(commodity_, commodity) };
    inline ListServicesResponseBodyServices& setCommodity(Models::ListServicesResponseBodyServicesCommodity && commodity) { DARABONBA_PTR_SET_RVALUE(commodity_, commodity) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline ListServicesResponseBodyServices& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // deployFrom Field Functions 
    bool hasDeployFrom() const { return this->deployFrom_ != nullptr;};
    void deleteDeployFrom() { this->deployFrom_ = nullptr;};
    inline string deployFrom() const { DARABONBA_PTR_GET_DEFAULT(deployFrom_, "") };
    inline ListServicesResponseBodyServices& setDeployFrom(string deployFrom) { DARABONBA_PTR_SET_VALUE(deployFrom_, deployFrom) };


    // deployType Field Functions 
    bool hasDeployType() const { return this->deployType_ != nullptr;};
    void deleteDeployType() { this->deployType_ = nullptr;};
    inline string deployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, "") };
    inline ListServicesResponseBodyServices& setDeployType(string deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


    // publishTime Field Functions 
    bool hasPublishTime() const { return this->publishTime_ != nullptr;};
    void deletePublishTime() { this->publishTime_ = nullptr;};
    inline string publishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
    inline ListServicesResponseBodyServices& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline ListServicesResponseBodyServices& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline ListServicesResponseBodyServices& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceInfos Field Functions 
    bool hasServiceInfos() const { return this->serviceInfos_ != nullptr;};
    void deleteServiceInfos() { this->serviceInfos_ = nullptr;};
    inline const vector<Models::ListServicesResponseBodyServicesServiceInfos> & serviceInfos() const { DARABONBA_PTR_GET_CONST(serviceInfos_, vector<Models::ListServicesResponseBodyServicesServiceInfos>) };
    inline vector<Models::ListServicesResponseBodyServicesServiceInfos> serviceInfos() { DARABONBA_PTR_GET(serviceInfos_, vector<Models::ListServicesResponseBodyServicesServiceInfos>) };
    inline ListServicesResponseBodyServices& setServiceInfos(const vector<Models::ListServicesResponseBodyServicesServiceInfos> & serviceInfos) { DARABONBA_PTR_SET_VALUE(serviceInfos_, serviceInfos) };
    inline ListServicesResponseBodyServices& setServiceInfos(vector<Models::ListServicesResponseBodyServicesServiceInfos> && serviceInfos) { DARABONBA_PTR_SET_RVALUE(serviceInfos_, serviceInfos) };


    // serviceProductUrl Field Functions 
    bool hasServiceProductUrl() const { return this->serviceProductUrl_ != nullptr;};
    void deleteServiceProductUrl() { this->serviceProductUrl_ = nullptr;};
    inline string serviceProductUrl() const { DARABONBA_PTR_GET_DEFAULT(serviceProductUrl_, "") };
    inline ListServicesResponseBodyServices& setServiceProductUrl(string serviceProductUrl) { DARABONBA_PTR_SET_VALUE(serviceProductUrl_, serviceProductUrl) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline ListServicesResponseBodyServices& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListServicesResponseBodyServices& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supplierName Field Functions 
    bool hasSupplierName() const { return this->supplierName_ != nullptr;};
    void deleteSupplierName() { this->supplierName_ = nullptr;};
    inline string supplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
    inline ListServicesResponseBodyServices& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


    // supplierNameEng Field Functions 
    bool hasSupplierNameEng() const { return this->supplierNameEng_ != nullptr;};
    void deleteSupplierNameEng() { this->supplierNameEng_ = nullptr;};
    inline string supplierNameEng() const { DARABONBA_PTR_GET_DEFAULT(supplierNameEng_, "") };
    inline ListServicesResponseBodyServices& setSupplierNameEng(string supplierNameEng) { DARABONBA_PTR_SET_VALUE(supplierNameEng_, supplierNameEng) };


    // supplierUid Field Functions 
    bool hasSupplierUid() const { return this->supplierUid_ != nullptr;};
    void deleteSupplierUid() { this->supplierUid_ = nullptr;};
    inline int64_t supplierUid() const { DARABONBA_PTR_GET_DEFAULT(supplierUid_, 0L) };
    inline ListServicesResponseBodyServices& setSupplierUid(int64_t supplierUid) { DARABONBA_PTR_SET_VALUE(supplierUid_, supplierUid) };


    // supplierUrl Field Functions 
    bool hasSupplierUrl() const { return this->supplierUrl_ != nullptr;};
    void deleteSupplierUrl() { this->supplierUrl_ = nullptr;};
    inline string supplierUrl() const { DARABONBA_PTR_GET_DEFAULT(supplierUrl_, "") };
    inline ListServicesResponseBodyServices& setSupplierUrl(string supplierUrl) { DARABONBA_PTR_SET_VALUE(supplierUrl_, supplierUrl) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListServicesResponseBodyServicesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListServicesResponseBodyServicesTags>) };
    inline vector<Models::ListServicesResponseBodyServicesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListServicesResponseBodyServicesTags>) };
    inline ListServicesResponseBodyServices& setTags(const vector<Models::ListServicesResponseBodyServicesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListServicesResponseBodyServices& setTags(vector<Models::ListServicesResponseBodyServicesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // tenantType Field Functions 
    bool hasTenantType() const { return this->tenantType_ != nullptr;};
    void deleteTenantType() { this->tenantType_ = nullptr;};
    inline string tenantType() const { DARABONBA_PTR_GET_DEFAULT(tenantType_, "") };
    inline ListServicesResponseBodyServices& setTenantType(string tenantType) { DARABONBA_PTR_SET_VALUE(tenantType_, tenantType) };


    // trialDuration Field Functions 
    bool hasTrialDuration() const { return this->trialDuration_ != nullptr;};
    void deleteTrialDuration() { this->trialDuration_ = nullptr;};
    inline string trialDuration() const { DARABONBA_PTR_GET_DEFAULT(trialDuration_, "") };
    inline ListServicesResponseBodyServices& setTrialDuration(string trialDuration) { DARABONBA_PTR_SET_VALUE(trialDuration_, trialDuration) };


    // trialType Field Functions 
    bool hasTrialType() const { return this->trialType_ != nullptr;};
    void deleteTrialType() { this->trialType_ = nullptr;};
    inline string trialType() const { DARABONBA_PTR_GET_DEFAULT(trialType_, "") };
    inline ListServicesResponseBodyServices& setTrialType(string trialType) { DARABONBA_PTR_SET_VALUE(trialType_, trialType) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListServicesResponseBodyServices& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string versionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline ListServicesResponseBodyServices& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


    // virtualInternetService Field Functions 
    bool hasVirtualInternetService() const { return this->virtualInternetService_ != nullptr;};
    void deleteVirtualInternetService() { this->virtualInternetService_ = nullptr;};
    inline string virtualInternetService() const { DARABONBA_PTR_GET_DEFAULT(virtualInternetService_, "") };
    inline ListServicesResponseBodyServices& setVirtualInternetService(string virtualInternetService) { DARABONBA_PTR_SET_VALUE(virtualInternetService_, virtualInternetService) };


  protected:
    // The category of the service.
    std::shared_ptr<string> categories_ = nullptr;
    // The commodity details.
    std::shared_ptr<Models::ListServicesResponseBodyServicesCommodity> commodity_ = nullptr;
    // The commodity code of the service in Alibaba Cloud Marketplace.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // Service deployment approach. Valid values:
    // - NoWhere
    // 
    // - Marketplace
    // 
    // - ComputeNest
    std::shared_ptr<string> deployFrom_ = nullptr;
    // The deployment type of the service. Valid values:
    // 
    // *   ros: The service is deployed by using Resource Orchestration Service (ROS).
    // *   terraform: The service is deployed by using Terraform.
    std::shared_ptr<string> deployType_ = nullptr;
    // The time when the service was published.
    std::shared_ptr<string> publishTime_ = nullptr;
    // Service recommendation score.
    std::shared_ptr<int32_t> score_ = nullptr;
    // The service ID.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The service information.
    std::shared_ptr<vector<Models::ListServicesResponseBodyServicesServiceInfos>> serviceInfos_ = nullptr;
    // The URL of the service page.
    std::shared_ptr<string> serviceProductUrl_ = nullptr;
    // The type of the service. Valid values:
    // 
    // - private: The service is a private service and is deployed within the account of a customer.
    // - managed: The service is a fully managed service and is deployed within the account of a service provider.
    // - operation: The service is a hosted O&M service.
    std::shared_ptr<string> serviceType_ = nullptr;
    // The state of the service. Valid values:
    // 
    // *   Draft: The service is a draft.
    // *   Submitted: The service is submitted for review. You cannot modify services in this state.
    // *   Approved: The service is approved. You cannot modify services in this state. You can publish services in this state.
    // *   Launching: The service is being published.
    // *   Online: The service is published.
    // *   Offline: The service is unpublished.
    std::shared_ptr<string> status_ = nullptr;
    // The name of the service provider.
    std::shared_ptr<string> supplierName_ = nullptr;
    // The name of service provider.
    std::shared_ptr<string> supplierNameEng_ = nullptr;
    // The Alibaba Cloud account ID of the service provider.
    std::shared_ptr<int64_t> supplierUid_ = nullptr;
    // The URL of the service provider.
    std::shared_ptr<string> supplierUrl_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::ListServicesResponseBodyServicesTags>> tags_ = nullptr;
    // The tenant type of the managed service. Valid values:
    // 
    // *   SingleTenant
    // *   MultiTenant
    std::shared_ptr<string> tenantType_ = nullptr;
    // The trial duration. Unit: day. The maximum trial duration cannot exceed 30 days.
    std::shared_ptr<string> trialDuration_ = nullptr;
    // The trial policy. Valid values:
    // 
    // *   Trial: Trials are supported.
    // *   NotTrial: Trials are not supported.
    std::shared_ptr<string> trialType_ = nullptr;
    // The version of the service.
    std::shared_ptr<string> version_ = nullptr;
    // The custom version name defined by the service provider.
    std::shared_ptr<string> versionName_ = nullptr;
    // Indicates whether the service is a virtual Internet service. Valid values:
    // 
    // *   false
    // *   true
    std::shared_ptr<string> virtualInternetService_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
