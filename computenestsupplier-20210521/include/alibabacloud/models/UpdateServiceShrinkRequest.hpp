// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateServiceShrinkRequestServiceInfo.hpp>
#include <alibabacloud/models/UpdateServiceShrinkRequestServiceLocaleConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class UpdateServiceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmMetadata, alarmMetadata_);
      DARABONBA_PTR_TO_JSON(ApprovalType, approvalType_);
      DARABONBA_PTR_TO_JSON(BuildParameters, buildParameters_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Commodity, commodityShrink_);
      DARABONBA_PTR_TO_JSON(ComplianceMetadata, complianceMetadataShrink_);
      DARABONBA_PTR_TO_JSON(DeployMetadata, deployMetadata_);
      DARABONBA_PTR_TO_JSON(DeployType, deployType_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(IsSupportOperated, isSupportOperated_);
      DARABONBA_PTR_TO_JSON(LicenseMetadata, licenseMetadata_);
      DARABONBA_PTR_TO_JSON(LogMetadata, logMetadata_);
      DARABONBA_PTR_TO_JSON(OperationMetadata, operationMetadata_);
      DARABONBA_PTR_TO_JSON(PolicyNames, policyNames_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resellable, resellable_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceInfo, serviceInfo_);
      DARABONBA_PTR_TO_JSON(ServiceLocaleConfigs, serviceLocaleConfigs_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_TO_JSON(ShareType, shareType_);
      DARABONBA_PTR_TO_JSON(TenantType, tenantType_);
      DARABONBA_PTR_TO_JSON(TrialDuration, trialDuration_);
      DARABONBA_PTR_TO_JSON(UpdateOption, updateOptionShrink_);
      DARABONBA_PTR_TO_JSON(UpgradeMetadata, upgradeMetadata_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmMetadata, alarmMetadata_);
      DARABONBA_PTR_FROM_JSON(ApprovalType, approvalType_);
      DARABONBA_PTR_FROM_JSON(BuildParameters, buildParameters_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Commodity, commodityShrink_);
      DARABONBA_PTR_FROM_JSON(ComplianceMetadata, complianceMetadataShrink_);
      DARABONBA_PTR_FROM_JSON(DeployMetadata, deployMetadata_);
      DARABONBA_PTR_FROM_JSON(DeployType, deployType_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(IsSupportOperated, isSupportOperated_);
      DARABONBA_PTR_FROM_JSON(LicenseMetadata, licenseMetadata_);
      DARABONBA_PTR_FROM_JSON(LogMetadata, logMetadata_);
      DARABONBA_PTR_FROM_JSON(OperationMetadata, operationMetadata_);
      DARABONBA_PTR_FROM_JSON(PolicyNames, policyNames_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resellable, resellable_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceInfo, serviceInfo_);
      DARABONBA_PTR_FROM_JSON(ServiceLocaleConfigs, serviceLocaleConfigs_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
      DARABONBA_PTR_FROM_JSON(TenantType, tenantType_);
      DARABONBA_PTR_FROM_JSON(TrialDuration, trialDuration_);
      DARABONBA_PTR_FROM_JSON(UpdateOption, updateOptionShrink_);
      DARABONBA_PTR_FROM_JSON(UpgradeMetadata, upgradeMetadata_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    UpdateServiceShrinkRequest() = default ;
    UpdateServiceShrinkRequest(const UpdateServiceShrinkRequest &) = default ;
    UpdateServiceShrinkRequest(UpdateServiceShrinkRequest &&) = default ;
    UpdateServiceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceShrinkRequest() = default ;
    UpdateServiceShrinkRequest& operator=(const UpdateServiceShrinkRequest &) = default ;
    UpdateServiceShrinkRequest& operator=(UpdateServiceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmMetadata_ != nullptr
        && this->approvalType_ != nullptr && this->buildParameters_ != nullptr && this->clientToken_ != nullptr && this->commodityShrink_ != nullptr && this->complianceMetadataShrink_ != nullptr
        && this->deployMetadata_ != nullptr && this->deployType_ != nullptr && this->dryRun_ != nullptr && this->duration_ != nullptr && this->isSupportOperated_ != nullptr
        && this->licenseMetadata_ != nullptr && this->logMetadata_ != nullptr && this->operationMetadata_ != nullptr && this->policyNames_ != nullptr && this->regionId_ != nullptr
        && this->resellable_ != nullptr && this->serviceId_ != nullptr && this->serviceInfo_ != nullptr && this->serviceLocaleConfigs_ != nullptr && this->serviceType_ != nullptr
        && this->serviceVersion_ != nullptr && this->shareType_ != nullptr && this->tenantType_ != nullptr && this->trialDuration_ != nullptr && this->updateOptionShrink_ != nullptr
        && this->upgradeMetadata_ != nullptr && this->versionName_ != nullptr; };
    // alarmMetadata Field Functions 
    bool hasAlarmMetadata() const { return this->alarmMetadata_ != nullptr;};
    void deleteAlarmMetadata() { this->alarmMetadata_ = nullptr;};
    inline string alarmMetadata() const { DARABONBA_PTR_GET_DEFAULT(alarmMetadata_, "") };
    inline UpdateServiceShrinkRequest& setAlarmMetadata(string alarmMetadata) { DARABONBA_PTR_SET_VALUE(alarmMetadata_, alarmMetadata) };


    // approvalType Field Functions 
    bool hasApprovalType() const { return this->approvalType_ != nullptr;};
    void deleteApprovalType() { this->approvalType_ = nullptr;};
    inline string approvalType() const { DARABONBA_PTR_GET_DEFAULT(approvalType_, "") };
    inline UpdateServiceShrinkRequest& setApprovalType(string approvalType) { DARABONBA_PTR_SET_VALUE(approvalType_, approvalType) };


    // buildParameters Field Functions 
    bool hasBuildParameters() const { return this->buildParameters_ != nullptr;};
    void deleteBuildParameters() { this->buildParameters_ = nullptr;};
    inline string buildParameters() const { DARABONBA_PTR_GET_DEFAULT(buildParameters_, "") };
    inline UpdateServiceShrinkRequest& setBuildParameters(string buildParameters) { DARABONBA_PTR_SET_VALUE(buildParameters_, buildParameters) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateServiceShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // commodityShrink Field Functions 
    bool hasCommodityShrink() const { return this->commodityShrink_ != nullptr;};
    void deleteCommodityShrink() { this->commodityShrink_ = nullptr;};
    inline string commodityShrink() const { DARABONBA_PTR_GET_DEFAULT(commodityShrink_, "") };
    inline UpdateServiceShrinkRequest& setCommodityShrink(string commodityShrink) { DARABONBA_PTR_SET_VALUE(commodityShrink_, commodityShrink) };


    // complianceMetadataShrink Field Functions 
    bool hasComplianceMetadataShrink() const { return this->complianceMetadataShrink_ != nullptr;};
    void deleteComplianceMetadataShrink() { this->complianceMetadataShrink_ = nullptr;};
    inline string complianceMetadataShrink() const { DARABONBA_PTR_GET_DEFAULT(complianceMetadataShrink_, "") };
    inline UpdateServiceShrinkRequest& setComplianceMetadataShrink(string complianceMetadataShrink) { DARABONBA_PTR_SET_VALUE(complianceMetadataShrink_, complianceMetadataShrink) };


    // deployMetadata Field Functions 
    bool hasDeployMetadata() const { return this->deployMetadata_ != nullptr;};
    void deleteDeployMetadata() { this->deployMetadata_ = nullptr;};
    inline string deployMetadata() const { DARABONBA_PTR_GET_DEFAULT(deployMetadata_, "") };
    inline UpdateServiceShrinkRequest& setDeployMetadata(string deployMetadata) { DARABONBA_PTR_SET_VALUE(deployMetadata_, deployMetadata) };


    // deployType Field Functions 
    bool hasDeployType() const { return this->deployType_ != nullptr;};
    void deleteDeployType() { this->deployType_ = nullptr;};
    inline string deployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, "") };
    inline UpdateServiceShrinkRequest& setDeployType(string deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateServiceShrinkRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline UpdateServiceShrinkRequest& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // isSupportOperated Field Functions 
    bool hasIsSupportOperated() const { return this->isSupportOperated_ != nullptr;};
    void deleteIsSupportOperated() { this->isSupportOperated_ = nullptr;};
    inline bool isSupportOperated() const { DARABONBA_PTR_GET_DEFAULT(isSupportOperated_, false) };
    inline UpdateServiceShrinkRequest& setIsSupportOperated(bool isSupportOperated) { DARABONBA_PTR_SET_VALUE(isSupportOperated_, isSupportOperated) };


    // licenseMetadata Field Functions 
    bool hasLicenseMetadata() const { return this->licenseMetadata_ != nullptr;};
    void deleteLicenseMetadata() { this->licenseMetadata_ = nullptr;};
    inline string licenseMetadata() const { DARABONBA_PTR_GET_DEFAULT(licenseMetadata_, "") };
    inline UpdateServiceShrinkRequest& setLicenseMetadata(string licenseMetadata) { DARABONBA_PTR_SET_VALUE(licenseMetadata_, licenseMetadata) };


    // logMetadata Field Functions 
    bool hasLogMetadata() const { return this->logMetadata_ != nullptr;};
    void deleteLogMetadata() { this->logMetadata_ = nullptr;};
    inline string logMetadata() const { DARABONBA_PTR_GET_DEFAULT(logMetadata_, "") };
    inline UpdateServiceShrinkRequest& setLogMetadata(string logMetadata) { DARABONBA_PTR_SET_VALUE(logMetadata_, logMetadata) };


    // operationMetadata Field Functions 
    bool hasOperationMetadata() const { return this->operationMetadata_ != nullptr;};
    void deleteOperationMetadata() { this->operationMetadata_ = nullptr;};
    inline string operationMetadata() const { DARABONBA_PTR_GET_DEFAULT(operationMetadata_, "") };
    inline UpdateServiceShrinkRequest& setOperationMetadata(string operationMetadata) { DARABONBA_PTR_SET_VALUE(operationMetadata_, operationMetadata) };


    // policyNames Field Functions 
    bool hasPolicyNames() const { return this->policyNames_ != nullptr;};
    void deletePolicyNames() { this->policyNames_ = nullptr;};
    inline string policyNames() const { DARABONBA_PTR_GET_DEFAULT(policyNames_, "") };
    inline UpdateServiceShrinkRequest& setPolicyNames(string policyNames) { DARABONBA_PTR_SET_VALUE(policyNames_, policyNames) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateServiceShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resellable Field Functions 
    bool hasResellable() const { return this->resellable_ != nullptr;};
    void deleteResellable() { this->resellable_ = nullptr;};
    inline bool resellable() const { DARABONBA_PTR_GET_DEFAULT(resellable_, false) };
    inline UpdateServiceShrinkRequest& setResellable(bool resellable) { DARABONBA_PTR_SET_VALUE(resellable_, resellable) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline UpdateServiceShrinkRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceInfo Field Functions 
    bool hasServiceInfo() const { return this->serviceInfo_ != nullptr;};
    void deleteServiceInfo() { this->serviceInfo_ = nullptr;};
    inline const vector<UpdateServiceShrinkRequestServiceInfo> & serviceInfo() const { DARABONBA_PTR_GET_CONST(serviceInfo_, vector<UpdateServiceShrinkRequestServiceInfo>) };
    inline vector<UpdateServiceShrinkRequestServiceInfo> serviceInfo() { DARABONBA_PTR_GET(serviceInfo_, vector<UpdateServiceShrinkRequestServiceInfo>) };
    inline UpdateServiceShrinkRequest& setServiceInfo(const vector<UpdateServiceShrinkRequestServiceInfo> & serviceInfo) { DARABONBA_PTR_SET_VALUE(serviceInfo_, serviceInfo) };
    inline UpdateServiceShrinkRequest& setServiceInfo(vector<UpdateServiceShrinkRequestServiceInfo> && serviceInfo) { DARABONBA_PTR_SET_RVALUE(serviceInfo_, serviceInfo) };


    // serviceLocaleConfigs Field Functions 
    bool hasServiceLocaleConfigs() const { return this->serviceLocaleConfigs_ != nullptr;};
    void deleteServiceLocaleConfigs() { this->serviceLocaleConfigs_ = nullptr;};
    inline const vector<UpdateServiceShrinkRequestServiceLocaleConfigs> & serviceLocaleConfigs() const { DARABONBA_PTR_GET_CONST(serviceLocaleConfigs_, vector<UpdateServiceShrinkRequestServiceLocaleConfigs>) };
    inline vector<UpdateServiceShrinkRequestServiceLocaleConfigs> serviceLocaleConfigs() { DARABONBA_PTR_GET(serviceLocaleConfigs_, vector<UpdateServiceShrinkRequestServiceLocaleConfigs>) };
    inline UpdateServiceShrinkRequest& setServiceLocaleConfigs(const vector<UpdateServiceShrinkRequestServiceLocaleConfigs> & serviceLocaleConfigs) { DARABONBA_PTR_SET_VALUE(serviceLocaleConfigs_, serviceLocaleConfigs) };
    inline UpdateServiceShrinkRequest& setServiceLocaleConfigs(vector<UpdateServiceShrinkRequestServiceLocaleConfigs> && serviceLocaleConfigs) { DARABONBA_PTR_SET_RVALUE(serviceLocaleConfigs_, serviceLocaleConfigs) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline UpdateServiceShrinkRequest& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // serviceVersion Field Functions 
    bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
    void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
    inline string serviceVersion() const { DARABONBA_PTR_GET_DEFAULT(serviceVersion_, "") };
    inline UpdateServiceShrinkRequest& setServiceVersion(string serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };


    // shareType Field Functions 
    bool hasShareType() const { return this->shareType_ != nullptr;};
    void deleteShareType() { this->shareType_ = nullptr;};
    inline string shareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
    inline UpdateServiceShrinkRequest& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


    // tenantType Field Functions 
    bool hasTenantType() const { return this->tenantType_ != nullptr;};
    void deleteTenantType() { this->tenantType_ = nullptr;};
    inline string tenantType() const { DARABONBA_PTR_GET_DEFAULT(tenantType_, "") };
    inline UpdateServiceShrinkRequest& setTenantType(string tenantType) { DARABONBA_PTR_SET_VALUE(tenantType_, tenantType) };


    // trialDuration Field Functions 
    bool hasTrialDuration() const { return this->trialDuration_ != nullptr;};
    void deleteTrialDuration() { this->trialDuration_ = nullptr;};
    inline int32_t trialDuration() const { DARABONBA_PTR_GET_DEFAULT(trialDuration_, 0) };
    inline UpdateServiceShrinkRequest& setTrialDuration(int32_t trialDuration) { DARABONBA_PTR_SET_VALUE(trialDuration_, trialDuration) };


    // updateOptionShrink Field Functions 
    bool hasUpdateOptionShrink() const { return this->updateOptionShrink_ != nullptr;};
    void deleteUpdateOptionShrink() { this->updateOptionShrink_ = nullptr;};
    inline string updateOptionShrink() const { DARABONBA_PTR_GET_DEFAULT(updateOptionShrink_, "") };
    inline UpdateServiceShrinkRequest& setUpdateOptionShrink(string updateOptionShrink) { DARABONBA_PTR_SET_VALUE(updateOptionShrink_, updateOptionShrink) };


    // upgradeMetadata Field Functions 
    bool hasUpgradeMetadata() const { return this->upgradeMetadata_ != nullptr;};
    void deleteUpgradeMetadata() { this->upgradeMetadata_ = nullptr;};
    inline string upgradeMetadata() const { DARABONBA_PTR_GET_DEFAULT(upgradeMetadata_, "") };
    inline UpdateServiceShrinkRequest& setUpgradeMetadata(string upgradeMetadata) { DARABONBA_PTR_SET_VALUE(upgradeMetadata_, upgradeMetadata) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string versionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline UpdateServiceShrinkRequest& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // The alert configurations of the service.
    // 
    // >  This parameter takes effect only when you specify an alert policy for **PolicyNames**.
    std::shared_ptr<string> alarmMetadata_ = nullptr;
    // The approval type of the service usage application. Valid values:
    // 
    // *   Manual: The application is manually approved.
    // *   AutoPass: The application is automatically approved.
    std::shared_ptr<string> approvalType_ = nullptr;
    // The Parameters to build service parameters.
    std::shared_ptr<string> buildParameters_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The commodity details.
    std::shared_ptr<string> commodityShrink_ = nullptr;
    // Compliance check metadata.
    std::shared_ptr<string> complianceMetadataShrink_ = nullptr;
    // The deployment configurations of the service. The format in which the deployment information of a service is stored varies based on the deployment type of the service. In this case, the deployment information is stored in the JSON string format.
    std::shared_ptr<string> deployMetadata_ = nullptr;
    // The deployment type of the service. Valid values:
    // 
    // ros: The service is deployed by using Resource Orchestration Service (ROS).
    // terraform: The service is deployed by using Terraform.
    // ack: The service is deployed by using Container Service for Kubernetes (ACK).
    // spi: The service is deployed by calling a service provider interface (SPI).
    // operation: The service is deployed by using a hosted O&M service.
    std::shared_ptr<string> deployType_ = nullptr;
    // Specifies whether to perform only a dry run for the request to check information such as the permissions and instance status. Valid values:
    // 
    // *   true: performs a dry run for the request, but does not update a service.
    // *   false: performs a dry run for the request, and update a service if the request passes the dry run.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The duration for which hosted O\\&M is implemented. Unit: seconds.
    std::shared_ptr<int64_t> duration_ = nullptr;
    // Specifies whether to enable the hosted O\\&M feature for the service. Default value: false. Valid values:
    // 
    // *   true
    // *   false
    // 
    // >  This parameter is required if you set **ServiceType** to **private**.
    std::shared_ptr<bool> isSupportOperated_ = nullptr;
    // The license metadata.
    std::shared_ptr<string> licenseMetadata_ = nullptr;
    // The logging configurations.
    std::shared_ptr<string> logMetadata_ = nullptr;
    // The hosted O\\&M configurations.
    std::shared_ptr<string> operationMetadata_ = nullptr;
    // The policy name. The name can be up to 128 characters in length. Separate multiple names with commas (,). Only hosted O\\&M policies are supported.
    std::shared_ptr<string> policyNames_ = nullptr;
    // Region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Whether resell is supported.
    std::shared_ptr<bool> resellable_ = nullptr;
    // The service ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The service details.
    std::shared_ptr<vector<UpdateServiceShrinkRequestServiceInfo>> serviceInfo_ = nullptr;
    std::shared_ptr<vector<UpdateServiceShrinkRequestServiceLocaleConfigs>> serviceLocaleConfigs_ = nullptr;
    // The service type. Valid values:
    // 
    // *   private: The service is a private service and is deployed within the account of a customer.
    // *   managed: The service is a fully managed service and is deployed within the account of a service provider.
    // *   operation: The service is a hosted O\\&M service.
    std::shared_ptr<string> serviceType_ = nullptr;
    // The service version.
    std::shared_ptr<string> serviceVersion_ = nullptr;
    // The permission type of the deployment URL. Valid values:
    // 
    // *   Public: All users can go to the URL to create a service instance or a trial service instance.
    // *   Restricted: Only users in the whitelist can go to the URL to create a service instance or a trial service instance.
    // *   OnlyFormalRestricted: Only users in the whitelist can go to the URL to create a service instance.
    // *   OnlyTrailRestricted: Only users in the whitelist can go to the URL to create a trial service instance.
    // *   Hidden: Users not in the whitelist cannot see the service details page when they go to the URL and cannot request deployment permissions.
    std::shared_ptr<string> shareType_ = nullptr;
    // The type of the tenant. Valid values:
    // 
    // *   SingleTenant
    // *   MultiTenant
    std::shared_ptr<string> tenantType_ = nullptr;
    // The trial duration. Unit: day. The maximum trial duration cannot exceed 30 days.
    std::shared_ptr<int32_t> trialDuration_ = nullptr;
    // The update option.
    std::shared_ptr<string> updateOptionShrink_ = nullptr;
    // The metadata about the upgrade.
    std::shared_ptr<string> upgradeMetadata_ = nullptr;
    // The version name.
    std::shared_ptr<string> versionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
