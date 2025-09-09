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
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListServicesResponseBodyServices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServicesResponseBodyServices& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalType, approvalType_);
      DARABONBA_PTR_TO_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_TO_JSON(ArtifactVersion, artifactVersion_);
      DARABONBA_PTR_TO_JSON(BuildInfo, buildInfo_);
      DARABONBA_PTR_TO_JSON(Categories, categories_);
      DARABONBA_PTR_TO_JSON(Commodity, commodity_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DefaultVersion, defaultVersion_);
      DARABONBA_PTR_TO_JSON(DeployType, deployType_);
      DARABONBA_PTR_TO_JSON(HasBeta, hasBeta_);
      DARABONBA_PTR_TO_JSON(HasDraft, hasDraft_);
      DARABONBA_PTR_TO_JSON(LatestResellSourceServiceVersion, latestResellSourceServiceVersion_);
      DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_TO_JSON(RelationType, relationType_);
      DARABONBA_PTR_TO_JSON(ResellApplyStatus, resellApplyStatus_);
      DARABONBA_PTR_TO_JSON(ResellServiceId, resellServiceId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceDiscoverable, serviceDiscoverable_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceInfos, serviceInfos_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(ShareType, shareType_);
      DARABONBA_PTR_TO_JSON(SourceImage, sourceImage_);
      DARABONBA_PTR_TO_JSON(SourceServiceId, sourceServiceId_);
      DARABONBA_PTR_TO_JSON(SourceServiceVersion, sourceServiceVersion_);
      DARABONBA_PTR_TO_JSON(SourceSupplierName, sourceSupplierName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_TO_JSON(SupplierUrl, supplierUrl_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TenantType, tenantType_);
      DARABONBA_PTR_TO_JSON(TrialType, trialType_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
      DARABONBA_PTR_TO_JSON(VirtualInternetService, virtualInternetService_);
    };
    friend void from_json(const Darabonba::Json& j, ListServicesResponseBodyServices& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalType, approvalType_);
      DARABONBA_PTR_FROM_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_FROM_JSON(ArtifactVersion, artifactVersion_);
      DARABONBA_PTR_FROM_JSON(BuildInfo, buildInfo_);
      DARABONBA_PTR_FROM_JSON(Categories, categories_);
      DARABONBA_PTR_FROM_JSON(Commodity, commodity_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DefaultVersion, defaultVersion_);
      DARABONBA_PTR_FROM_JSON(DeployType, deployType_);
      DARABONBA_PTR_FROM_JSON(HasBeta, hasBeta_);
      DARABONBA_PTR_FROM_JSON(HasDraft, hasDraft_);
      DARABONBA_PTR_FROM_JSON(LatestResellSourceServiceVersion, latestResellSourceServiceVersion_);
      DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
      DARABONBA_PTR_FROM_JSON(ResellApplyStatus, resellApplyStatus_);
      DARABONBA_PTR_FROM_JSON(ResellServiceId, resellServiceId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceDiscoverable, serviceDiscoverable_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceInfos, serviceInfos_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
      DARABONBA_PTR_FROM_JSON(SourceImage, sourceImage_);
      DARABONBA_PTR_FROM_JSON(SourceServiceId, sourceServiceId_);
      DARABONBA_PTR_FROM_JSON(SourceServiceVersion, sourceServiceVersion_);
      DARABONBA_PTR_FROM_JSON(SourceSupplierName, sourceSupplierName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_FROM_JSON(SupplierUrl, supplierUrl_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TenantType, tenantType_);
      DARABONBA_PTR_FROM_JSON(TrialType, trialType_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
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
    virtual bool empty() const override { this->approvalType_ != nullptr
        && this->artifactId_ != nullptr && this->artifactVersion_ != nullptr && this->buildInfo_ != nullptr && this->categories_ != nullptr && this->commodity_ != nullptr
        && this->commodityCode_ != nullptr && this->createTime_ != nullptr && this->defaultVersion_ != nullptr && this->deployType_ != nullptr && this->hasBeta_ != nullptr
        && this->hasDraft_ != nullptr && this->latestResellSourceServiceVersion_ != nullptr && this->publishTime_ != nullptr && this->relationType_ != nullptr && this->resellApplyStatus_ != nullptr
        && this->resellServiceId_ != nullptr && this->resourceGroupId_ != nullptr && this->serviceDiscoverable_ != nullptr && this->serviceId_ != nullptr && this->serviceInfos_ != nullptr
        && this->serviceType_ != nullptr && this->shareType_ != nullptr && this->sourceImage_ != nullptr && this->sourceServiceId_ != nullptr && this->sourceServiceVersion_ != nullptr
        && this->sourceSupplierName_ != nullptr && this->status_ != nullptr && this->supplierName_ != nullptr && this->supplierUrl_ != nullptr && this->tags_ != nullptr
        && this->tenantType_ != nullptr && this->trialType_ != nullptr && this->updateTime_ != nullptr && this->version_ != nullptr && this->versionName_ != nullptr
        && this->virtualInternetService_ != nullptr; };
    // approvalType Field Functions 
    bool hasApprovalType() const { return this->approvalType_ != nullptr;};
    void deleteApprovalType() { this->approvalType_ = nullptr;};
    inline string approvalType() const { DARABONBA_PTR_GET_DEFAULT(approvalType_, "") };
    inline ListServicesResponseBodyServices& setApprovalType(string approvalType) { DARABONBA_PTR_SET_VALUE(approvalType_, approvalType) };


    // artifactId Field Functions 
    bool hasArtifactId() const { return this->artifactId_ != nullptr;};
    void deleteArtifactId() { this->artifactId_ = nullptr;};
    inline string artifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
    inline ListServicesResponseBodyServices& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


    // artifactVersion Field Functions 
    bool hasArtifactVersion() const { return this->artifactVersion_ != nullptr;};
    void deleteArtifactVersion() { this->artifactVersion_ = nullptr;};
    inline string artifactVersion() const { DARABONBA_PTR_GET_DEFAULT(artifactVersion_, "") };
    inline ListServicesResponseBodyServices& setArtifactVersion(string artifactVersion) { DARABONBA_PTR_SET_VALUE(artifactVersion_, artifactVersion) };


    // buildInfo Field Functions 
    bool hasBuildInfo() const { return this->buildInfo_ != nullptr;};
    void deleteBuildInfo() { this->buildInfo_ = nullptr;};
    inline string buildInfo() const { DARABONBA_PTR_GET_DEFAULT(buildInfo_, "") };
    inline ListServicesResponseBodyServices& setBuildInfo(string buildInfo) { DARABONBA_PTR_SET_VALUE(buildInfo_, buildInfo) };


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


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListServicesResponseBodyServices& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // defaultVersion Field Functions 
    bool hasDefaultVersion() const { return this->defaultVersion_ != nullptr;};
    void deleteDefaultVersion() { this->defaultVersion_ = nullptr;};
    inline bool defaultVersion() const { DARABONBA_PTR_GET_DEFAULT(defaultVersion_, false) };
    inline ListServicesResponseBodyServices& setDefaultVersion(bool defaultVersion) { DARABONBA_PTR_SET_VALUE(defaultVersion_, defaultVersion) };


    // deployType Field Functions 
    bool hasDeployType() const { return this->deployType_ != nullptr;};
    void deleteDeployType() { this->deployType_ = nullptr;};
    inline string deployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, "") };
    inline ListServicesResponseBodyServices& setDeployType(string deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


    // hasBeta Field Functions 
    bool hasHasBeta() const { return this->hasBeta_ != nullptr;};
    void deleteHasBeta() { this->hasBeta_ = nullptr;};
    inline bool hasBeta() const { DARABONBA_PTR_GET_DEFAULT(hasBeta_, false) };
    inline ListServicesResponseBodyServices& setHasBeta(bool hasBeta) { DARABONBA_PTR_SET_VALUE(hasBeta_, hasBeta) };


    // hasDraft Field Functions 
    bool hasHasDraft() const { return this->hasDraft_ != nullptr;};
    void deleteHasDraft() { this->hasDraft_ = nullptr;};
    inline bool hasDraft() const { DARABONBA_PTR_GET_DEFAULT(hasDraft_, false) };
    inline ListServicesResponseBodyServices& setHasDraft(bool hasDraft) { DARABONBA_PTR_SET_VALUE(hasDraft_, hasDraft) };


    // latestResellSourceServiceVersion Field Functions 
    bool hasLatestResellSourceServiceVersion() const { return this->latestResellSourceServiceVersion_ != nullptr;};
    void deleteLatestResellSourceServiceVersion() { this->latestResellSourceServiceVersion_ = nullptr;};
    inline string latestResellSourceServiceVersion() const { DARABONBA_PTR_GET_DEFAULT(latestResellSourceServiceVersion_, "") };
    inline ListServicesResponseBodyServices& setLatestResellSourceServiceVersion(string latestResellSourceServiceVersion) { DARABONBA_PTR_SET_VALUE(latestResellSourceServiceVersion_, latestResellSourceServiceVersion) };


    // publishTime Field Functions 
    bool hasPublishTime() const { return this->publishTime_ != nullptr;};
    void deletePublishTime() { this->publishTime_ = nullptr;};
    inline string publishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
    inline ListServicesResponseBodyServices& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


    // relationType Field Functions 
    bool hasRelationType() const { return this->relationType_ != nullptr;};
    void deleteRelationType() { this->relationType_ = nullptr;};
    inline string relationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
    inline ListServicesResponseBodyServices& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


    // resellApplyStatus Field Functions 
    bool hasResellApplyStatus() const { return this->resellApplyStatus_ != nullptr;};
    void deleteResellApplyStatus() { this->resellApplyStatus_ = nullptr;};
    inline string resellApplyStatus() const { DARABONBA_PTR_GET_DEFAULT(resellApplyStatus_, "") };
    inline ListServicesResponseBodyServices& setResellApplyStatus(string resellApplyStatus) { DARABONBA_PTR_SET_VALUE(resellApplyStatus_, resellApplyStatus) };


    // resellServiceId Field Functions 
    bool hasResellServiceId() const { return this->resellServiceId_ != nullptr;};
    void deleteResellServiceId() { this->resellServiceId_ = nullptr;};
    inline string resellServiceId() const { DARABONBA_PTR_GET_DEFAULT(resellServiceId_, "") };
    inline ListServicesResponseBodyServices& setResellServiceId(string resellServiceId) { DARABONBA_PTR_SET_VALUE(resellServiceId_, resellServiceId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListServicesResponseBodyServices& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceDiscoverable Field Functions 
    bool hasServiceDiscoverable() const { return this->serviceDiscoverable_ != nullptr;};
    void deleteServiceDiscoverable() { this->serviceDiscoverable_ = nullptr;};
    inline string serviceDiscoverable() const { DARABONBA_PTR_GET_DEFAULT(serviceDiscoverable_, "") };
    inline ListServicesResponseBodyServices& setServiceDiscoverable(string serviceDiscoverable) { DARABONBA_PTR_SET_VALUE(serviceDiscoverable_, serviceDiscoverable) };


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


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline ListServicesResponseBodyServices& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // shareType Field Functions 
    bool hasShareType() const { return this->shareType_ != nullptr;};
    void deleteShareType() { this->shareType_ = nullptr;};
    inline string shareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
    inline ListServicesResponseBodyServices& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


    // sourceImage Field Functions 
    bool hasSourceImage() const { return this->sourceImage_ != nullptr;};
    void deleteSourceImage() { this->sourceImage_ = nullptr;};
    inline string sourceImage() const { DARABONBA_PTR_GET_DEFAULT(sourceImage_, "") };
    inline ListServicesResponseBodyServices& setSourceImage(string sourceImage) { DARABONBA_PTR_SET_VALUE(sourceImage_, sourceImage) };


    // sourceServiceId Field Functions 
    bool hasSourceServiceId() const { return this->sourceServiceId_ != nullptr;};
    void deleteSourceServiceId() { this->sourceServiceId_ = nullptr;};
    inline string sourceServiceId() const { DARABONBA_PTR_GET_DEFAULT(sourceServiceId_, "") };
    inline ListServicesResponseBodyServices& setSourceServiceId(string sourceServiceId) { DARABONBA_PTR_SET_VALUE(sourceServiceId_, sourceServiceId) };


    // sourceServiceVersion Field Functions 
    bool hasSourceServiceVersion() const { return this->sourceServiceVersion_ != nullptr;};
    void deleteSourceServiceVersion() { this->sourceServiceVersion_ = nullptr;};
    inline string sourceServiceVersion() const { DARABONBA_PTR_GET_DEFAULT(sourceServiceVersion_, "") };
    inline ListServicesResponseBodyServices& setSourceServiceVersion(string sourceServiceVersion) { DARABONBA_PTR_SET_VALUE(sourceServiceVersion_, sourceServiceVersion) };


    // sourceSupplierName Field Functions 
    bool hasSourceSupplierName() const { return this->sourceSupplierName_ != nullptr;};
    void deleteSourceSupplierName() { this->sourceSupplierName_ = nullptr;};
    inline string sourceSupplierName() const { DARABONBA_PTR_GET_DEFAULT(sourceSupplierName_, "") };
    inline ListServicesResponseBodyServices& setSourceSupplierName(string sourceSupplierName) { DARABONBA_PTR_SET_VALUE(sourceSupplierName_, sourceSupplierName) };


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


    // trialType Field Functions 
    bool hasTrialType() const { return this->trialType_ != nullptr;};
    void deleteTrialType() { this->trialType_ = nullptr;};
    inline string trialType() const { DARABONBA_PTR_GET_DEFAULT(trialType_, "") };
    inline ListServicesResponseBodyServices& setTrialType(string trialType) { DARABONBA_PTR_SET_VALUE(trialType_, trialType) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListServicesResponseBodyServices& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


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
    // The approval type for applications for using the service. Valid values:
    // 
    // *   Manual: The applications are manual reviewed.
    // *   AutoPass: The applications are automatically approved.
    std::shared_ptr<string> approvalType_ = nullptr;
    // The ID of the artifact.
    std::shared_ptr<string> artifactId_ = nullptr;
    // The version of the artifact.
    std::shared_ptr<string> artifactVersion_ = nullptr;
    // The informathon for build service.
    std::shared_ptr<string> buildInfo_ = nullptr;
    // The category of the service.
    std::shared_ptr<string> categories_ = nullptr;
    // The commodity details.
    std::shared_ptr<Models::ListServicesResponseBodyServicesCommodity> commodity_ = nullptr;
    // The commodity code of the service in Alibaba Cloud Marketplace.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The time when the service was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // Indicates whether the version is the default version. Valid values:
    // 
    // *   false
    // *   true
    std::shared_ptr<bool> defaultVersion_ = nullptr;
    // The deployment type of the service. Valid values:
    // 
    // *   ros: The service is deployed by using Resource Orchestration Service (ROS).
    // *   terraform: The service is deployed by using Terraform.
    // *   spi: The service is deployed by calling the Service Provider Interface (SPI).
    // *   operation: The service is deployed by using a hosted O\\&M service.
    // *   container: The service is deployed by using a container.
    // *
    std::shared_ptr<string> deployType_ = nullptr;
    // Indicates whether the service has a beta version. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> hasBeta_ = nullptr;
    // Indicates whether the service has a draft version. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> hasDraft_ = nullptr;
    // The latest version of the distribution source service.
    std::shared_ptr<string> latestResellSourceServiceVersion_ = nullptr;
    // The time when the service was published.
    std::shared_ptr<string> publishTime_ = nullptr;
    // The purpose of the artifact. Valid values:
    // 
    // *   ServiceDeployment: The artifact is used to create service instances.
    // *   ServiceUpgrade: The artifact is used to upgrade service instances.
    std::shared_ptr<string> relationType_ = nullptr;
    // The state of distribution authorization of the service. Valid values:
    // 
    // *   CanApply: Distributors can apply for distribution permissions.
    // *   Applied: The application for distribution permissions is submitted.
    // *   Approved: The application for distribution permissions is approved.
    std::shared_ptr<string> resellApplyStatus_ = nullptr;
    // The ID of the distribution service.
    std::shared_ptr<string> resellServiceId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Indicates whether the service is visible. Valid values:
    // 
    // *   INVISIBLE
    // *   DISCOVERABLE
    std::shared_ptr<string> serviceDiscoverable_ = nullptr;
    // The service ID.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The information about the service.
    std::shared_ptr<vector<Models::ListServicesResponseBodyServicesServiceInfos>> serviceInfos_ = nullptr;
    // The type of the service. Valid values:
    // 
    // *   private: The service is a private service and is deployed within the account of a customer.
    // *   managed: The service is a fully managed service and is deployed within the account of a service provider.
    // *   operation: The service is a hosted O\\&M service.
    std::shared_ptr<string> serviceType_ = nullptr;
    // The permission type of the deployment URL. Valid values:
    // 
    // *   Public: All users can go to the URL to create a formal service instance or a trial service instance.
    // *   Restricted: Only users in the whitelist can go to the URL to create a formal service instance or a trial service instance.
    // *   OnlyFormalRestricted: Only users in the whitelist can go to the URL to create a formal service instance.
    // *   OnlyTrailRestricted: Only users in the whitelist can go to the URL to create a trial service instance.
    // *   Hidden: Users not in the whitelist cannot see the service details page when they go to the URL and cannot request deployment permissions.
    std::shared_ptr<string> shareType_ = nullptr;
    // The source image.
    std::shared_ptr<string> sourceImage_ = nullptr;
    // The ID of the distribution source service.
    std::shared_ptr<string> sourceServiceId_ = nullptr;
    // The version of the distribution source service.
    std::shared_ptr<string> sourceServiceVersion_ = nullptr;
    // The name of the distribution source service provider.
    std::shared_ptr<string> sourceSupplierName_ = nullptr;
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
    // The URL of the service provider.
    std::shared_ptr<string> supplierUrl_ = nullptr;
    // The service tags.
    std::shared_ptr<vector<Models::ListServicesResponseBodyServicesTags>> tags_ = nullptr;
    // The tenant type of the managed service. Valid values:
    // 
    // *   SingleTenant
    // *   MultiTenant
    std::shared_ptr<string> tenantType_ = nullptr;
    // The trial policy. Valid values:
    // 
    // *   Trial: Trials are supported.
    // *   NotTrial: Trials are not supported.
    std::shared_ptr<string> trialType_ = nullptr;
    // The time when the service was modified.
    std::shared_ptr<string> updateTime_ = nullptr;
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
} // namespace ComputeNestSupplier20210521
#endif
