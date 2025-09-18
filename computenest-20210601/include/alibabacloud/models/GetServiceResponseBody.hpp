// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetServiceResponseBodyCommodity.hpp>
#include <alibabacloud/models/GetServiceResponseBodyComplianceMetadata.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceResponseBodyInstanceRoleInfos.hpp>
#include <alibabacloud/models/GetServiceResponseBodyServiceDocumentInfos.hpp>
#include <alibabacloud/models/GetServiceResponseBodyServiceInfos.hpp>
#include <alibabacloud/models/GetServiceResponseBodyServiceLocaleConfigs.hpp>
#include <alibabacloud/models/GetServiceResponseBodySupportContacts.hpp>
#include <alibabacloud/models/GetServiceResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmMetadata, alarmMetadata_);
      DARABONBA_PTR_TO_JSON(Categories, categories_);
      DARABONBA_PTR_TO_JSON(Commodity, commodity_);
      DARABONBA_PTR_TO_JSON(ComplianceMetadata, complianceMetadata_);
      DARABONBA_PTR_TO_JSON(DeployFrom, deployFrom_);
      DARABONBA_PTR_TO_JSON(DeployMetadata, deployMetadata_);
      DARABONBA_PTR_TO_JSON(DeployType, deployType_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(InstanceRoleInfos, instanceRoleInfos_);
      DARABONBA_PTR_TO_JSON(IsSupportOperated, isSupportOperated_);
      DARABONBA_PTR_TO_JSON(LicenseMetadata, licenseMetadata_);
      DARABONBA_PTR_TO_JSON(LogMetadata, logMetadata_);
      DARABONBA_PTR_TO_JSON(OperationMetadata, operationMetadata_);
      DARABONBA_PTR_TO_JSON(Permission, permission_);
      DARABONBA_PTR_TO_JSON(PolicyNames, policyNames_);
      DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceDocumentInfos, serviceDocumentInfos_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceInfos, serviceInfos_);
      DARABONBA_PTR_TO_JSON(ServiceLocaleConfigs, serviceLocaleConfigs_);
      DARABONBA_PTR_TO_JSON(ServiceProductUrl, serviceProductUrl_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(ShareType, shareType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupplierDesc, supplierDesc_);
      DARABONBA_PTR_TO_JSON(SupplierLogo, supplierLogo_);
      DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_TO_JSON(SupplierUid, supplierUid_);
      DARABONBA_PTR_TO_JSON(SupplierUrl, supplierUrl_);
      DARABONBA_PTR_TO_JSON(SupportContacts, supportContacts_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TenantType, tenantType_);
      DARABONBA_PTR_TO_JSON(TrialDuration, trialDuration_);
      DARABONBA_PTR_TO_JSON(TrialType, trialType_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmMetadata, alarmMetadata_);
      DARABONBA_PTR_FROM_JSON(Categories, categories_);
      DARABONBA_PTR_FROM_JSON(Commodity, commodity_);
      DARABONBA_PTR_FROM_JSON(ComplianceMetadata, complianceMetadata_);
      DARABONBA_PTR_FROM_JSON(DeployFrom, deployFrom_);
      DARABONBA_PTR_FROM_JSON(DeployMetadata, deployMetadata_);
      DARABONBA_PTR_FROM_JSON(DeployType, deployType_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(InstanceRoleInfos, instanceRoleInfos_);
      DARABONBA_PTR_FROM_JSON(IsSupportOperated, isSupportOperated_);
      DARABONBA_PTR_FROM_JSON(LicenseMetadata, licenseMetadata_);
      DARABONBA_PTR_FROM_JSON(LogMetadata, logMetadata_);
      DARABONBA_PTR_FROM_JSON(OperationMetadata, operationMetadata_);
      DARABONBA_PTR_FROM_JSON(Permission, permission_);
      DARABONBA_PTR_FROM_JSON(PolicyNames, policyNames_);
      DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceDocumentInfos, serviceDocumentInfos_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceInfos, serviceInfos_);
      DARABONBA_PTR_FROM_JSON(ServiceLocaleConfigs, serviceLocaleConfigs_);
      DARABONBA_PTR_FROM_JSON(ServiceProductUrl, serviceProductUrl_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupplierDesc, supplierDesc_);
      DARABONBA_PTR_FROM_JSON(SupplierLogo, supplierLogo_);
      DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_FROM_JSON(SupplierUid, supplierUid_);
      DARABONBA_PTR_FROM_JSON(SupplierUrl, supplierUrl_);
      DARABONBA_PTR_FROM_JSON(SupportContacts, supportContacts_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TenantType, tenantType_);
      DARABONBA_PTR_FROM_JSON(TrialDuration, trialDuration_);
      DARABONBA_PTR_FROM_JSON(TrialType, trialType_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    GetServiceResponseBody() = default ;
    GetServiceResponseBody(const GetServiceResponseBody &) = default ;
    GetServiceResponseBody(GetServiceResponseBody &&) = default ;
    GetServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceResponseBody() = default ;
    GetServiceResponseBody& operator=(const GetServiceResponseBody &) = default ;
    GetServiceResponseBody& operator=(GetServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmMetadata_ != nullptr
        && this->categories_ != nullptr && this->commodity_ != nullptr && this->complianceMetadata_ != nullptr && this->deployFrom_ != nullptr && this->deployMetadata_ != nullptr
        && this->deployType_ != nullptr && this->duration_ != nullptr && this->instanceRoleInfos_ != nullptr && this->isSupportOperated_ != nullptr && this->licenseMetadata_ != nullptr
        && this->logMetadata_ != nullptr && this->operationMetadata_ != nullptr && this->permission_ != nullptr && this->policyNames_ != nullptr && this->publishTime_ != nullptr
        && this->requestId_ != nullptr && this->serviceDocumentInfos_ != nullptr && this->serviceId_ != nullptr && this->serviceInfos_ != nullptr && this->serviceLocaleConfigs_ != nullptr
        && this->serviceProductUrl_ != nullptr && this->serviceType_ != nullptr && this->shareType_ != nullptr && this->status_ != nullptr && this->supplierDesc_ != nullptr
        && this->supplierLogo_ != nullptr && this->supplierName_ != nullptr && this->supplierUid_ != nullptr && this->supplierUrl_ != nullptr && this->supportContacts_ != nullptr
        && this->tags_ != nullptr && this->tenantType_ != nullptr && this->trialDuration_ != nullptr && this->trialType_ != nullptr && this->version_ != nullptr
        && this->versionName_ != nullptr; };
    // alarmMetadata Field Functions 
    bool hasAlarmMetadata() const { return this->alarmMetadata_ != nullptr;};
    void deleteAlarmMetadata() { this->alarmMetadata_ = nullptr;};
    inline string alarmMetadata() const { DARABONBA_PTR_GET_DEFAULT(alarmMetadata_, "") };
    inline GetServiceResponseBody& setAlarmMetadata(string alarmMetadata) { DARABONBA_PTR_SET_VALUE(alarmMetadata_, alarmMetadata) };


    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline string categories() const { DARABONBA_PTR_GET_DEFAULT(categories_, "") };
    inline GetServiceResponseBody& setCategories(string categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };


    // commodity Field Functions 
    bool hasCommodity() const { return this->commodity_ != nullptr;};
    void deleteCommodity() { this->commodity_ = nullptr;};
    inline const GetServiceResponseBodyCommodity & commodity() const { DARABONBA_PTR_GET_CONST(commodity_, GetServiceResponseBodyCommodity) };
    inline GetServiceResponseBodyCommodity commodity() { DARABONBA_PTR_GET(commodity_, GetServiceResponseBodyCommodity) };
    inline GetServiceResponseBody& setCommodity(const GetServiceResponseBodyCommodity & commodity) { DARABONBA_PTR_SET_VALUE(commodity_, commodity) };
    inline GetServiceResponseBody& setCommodity(GetServiceResponseBodyCommodity && commodity) { DARABONBA_PTR_SET_RVALUE(commodity_, commodity) };


    // complianceMetadata Field Functions 
    bool hasComplianceMetadata() const { return this->complianceMetadata_ != nullptr;};
    void deleteComplianceMetadata() { this->complianceMetadata_ = nullptr;};
    inline const GetServiceResponseBodyComplianceMetadata & complianceMetadata() const { DARABONBA_PTR_GET_CONST(complianceMetadata_, GetServiceResponseBodyComplianceMetadata) };
    inline GetServiceResponseBodyComplianceMetadata complianceMetadata() { DARABONBA_PTR_GET(complianceMetadata_, GetServiceResponseBodyComplianceMetadata) };
    inline GetServiceResponseBody& setComplianceMetadata(const GetServiceResponseBodyComplianceMetadata & complianceMetadata) { DARABONBA_PTR_SET_VALUE(complianceMetadata_, complianceMetadata) };
    inline GetServiceResponseBody& setComplianceMetadata(GetServiceResponseBodyComplianceMetadata && complianceMetadata) { DARABONBA_PTR_SET_RVALUE(complianceMetadata_, complianceMetadata) };


    // deployFrom Field Functions 
    bool hasDeployFrom() const { return this->deployFrom_ != nullptr;};
    void deleteDeployFrom() { this->deployFrom_ = nullptr;};
    inline string deployFrom() const { DARABONBA_PTR_GET_DEFAULT(deployFrom_, "") };
    inline GetServiceResponseBody& setDeployFrom(string deployFrom) { DARABONBA_PTR_SET_VALUE(deployFrom_, deployFrom) };


    // deployMetadata Field Functions 
    bool hasDeployMetadata() const { return this->deployMetadata_ != nullptr;};
    void deleteDeployMetadata() { this->deployMetadata_ = nullptr;};
    inline string deployMetadata() const { DARABONBA_PTR_GET_DEFAULT(deployMetadata_, "") };
    inline GetServiceResponseBody& setDeployMetadata(string deployMetadata) { DARABONBA_PTR_SET_VALUE(deployMetadata_, deployMetadata) };


    // deployType Field Functions 
    bool hasDeployType() const { return this->deployType_ != nullptr;};
    void deleteDeployType() { this->deployType_ = nullptr;};
    inline string deployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, "") };
    inline GetServiceResponseBody& setDeployType(string deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline GetServiceResponseBody& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // instanceRoleInfos Field Functions 
    bool hasInstanceRoleInfos() const { return this->instanceRoleInfos_ != nullptr;};
    void deleteInstanceRoleInfos() { this->instanceRoleInfos_ = nullptr;};
    inline const vector<GetServiceResponseBodyInstanceRoleInfos> & instanceRoleInfos() const { DARABONBA_PTR_GET_CONST(instanceRoleInfos_, vector<GetServiceResponseBodyInstanceRoleInfos>) };
    inline vector<GetServiceResponseBodyInstanceRoleInfos> instanceRoleInfos() { DARABONBA_PTR_GET(instanceRoleInfos_, vector<GetServiceResponseBodyInstanceRoleInfos>) };
    inline GetServiceResponseBody& setInstanceRoleInfos(const vector<GetServiceResponseBodyInstanceRoleInfos> & instanceRoleInfos) { DARABONBA_PTR_SET_VALUE(instanceRoleInfos_, instanceRoleInfos) };
    inline GetServiceResponseBody& setInstanceRoleInfos(vector<GetServiceResponseBodyInstanceRoleInfos> && instanceRoleInfos) { DARABONBA_PTR_SET_RVALUE(instanceRoleInfos_, instanceRoleInfos) };


    // isSupportOperated Field Functions 
    bool hasIsSupportOperated() const { return this->isSupportOperated_ != nullptr;};
    void deleteIsSupportOperated() { this->isSupportOperated_ = nullptr;};
    inline bool isSupportOperated() const { DARABONBA_PTR_GET_DEFAULT(isSupportOperated_, false) };
    inline GetServiceResponseBody& setIsSupportOperated(bool isSupportOperated) { DARABONBA_PTR_SET_VALUE(isSupportOperated_, isSupportOperated) };


    // licenseMetadata Field Functions 
    bool hasLicenseMetadata() const { return this->licenseMetadata_ != nullptr;};
    void deleteLicenseMetadata() { this->licenseMetadata_ = nullptr;};
    inline string licenseMetadata() const { DARABONBA_PTR_GET_DEFAULT(licenseMetadata_, "") };
    inline GetServiceResponseBody& setLicenseMetadata(string licenseMetadata) { DARABONBA_PTR_SET_VALUE(licenseMetadata_, licenseMetadata) };


    // logMetadata Field Functions 
    bool hasLogMetadata() const { return this->logMetadata_ != nullptr;};
    void deleteLogMetadata() { this->logMetadata_ = nullptr;};
    inline string logMetadata() const { DARABONBA_PTR_GET_DEFAULT(logMetadata_, "") };
    inline GetServiceResponseBody& setLogMetadata(string logMetadata) { DARABONBA_PTR_SET_VALUE(logMetadata_, logMetadata) };


    // operationMetadata Field Functions 
    bool hasOperationMetadata() const { return this->operationMetadata_ != nullptr;};
    void deleteOperationMetadata() { this->operationMetadata_ = nullptr;};
    inline string operationMetadata() const { DARABONBA_PTR_GET_DEFAULT(operationMetadata_, "") };
    inline GetServiceResponseBody& setOperationMetadata(string operationMetadata) { DARABONBA_PTR_SET_VALUE(operationMetadata_, operationMetadata) };


    // permission Field Functions 
    bool hasPermission() const { return this->permission_ != nullptr;};
    void deletePermission() { this->permission_ = nullptr;};
    inline string permission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
    inline GetServiceResponseBody& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


    // policyNames Field Functions 
    bool hasPolicyNames() const { return this->policyNames_ != nullptr;};
    void deletePolicyNames() { this->policyNames_ = nullptr;};
    inline string policyNames() const { DARABONBA_PTR_GET_DEFAULT(policyNames_, "") };
    inline GetServiceResponseBody& setPolicyNames(string policyNames) { DARABONBA_PTR_SET_VALUE(policyNames_, policyNames) };


    // publishTime Field Functions 
    bool hasPublishTime() const { return this->publishTime_ != nullptr;};
    void deletePublishTime() { this->publishTime_ = nullptr;};
    inline string publishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
    inline GetServiceResponseBody& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceDocumentInfos Field Functions 
    bool hasServiceDocumentInfos() const { return this->serviceDocumentInfos_ != nullptr;};
    void deleteServiceDocumentInfos() { this->serviceDocumentInfos_ = nullptr;};
    inline const vector<GetServiceResponseBodyServiceDocumentInfos> & serviceDocumentInfos() const { DARABONBA_PTR_GET_CONST(serviceDocumentInfos_, vector<GetServiceResponseBodyServiceDocumentInfos>) };
    inline vector<GetServiceResponseBodyServiceDocumentInfos> serviceDocumentInfos() { DARABONBA_PTR_GET(serviceDocumentInfos_, vector<GetServiceResponseBodyServiceDocumentInfos>) };
    inline GetServiceResponseBody& setServiceDocumentInfos(const vector<GetServiceResponseBodyServiceDocumentInfos> & serviceDocumentInfos) { DARABONBA_PTR_SET_VALUE(serviceDocumentInfos_, serviceDocumentInfos) };
    inline GetServiceResponseBody& setServiceDocumentInfos(vector<GetServiceResponseBodyServiceDocumentInfos> && serviceDocumentInfos) { DARABONBA_PTR_SET_RVALUE(serviceDocumentInfos_, serviceDocumentInfos) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline GetServiceResponseBody& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceInfos Field Functions 
    bool hasServiceInfos() const { return this->serviceInfos_ != nullptr;};
    void deleteServiceInfos() { this->serviceInfos_ = nullptr;};
    inline const vector<GetServiceResponseBodyServiceInfos> & serviceInfos() const { DARABONBA_PTR_GET_CONST(serviceInfos_, vector<GetServiceResponseBodyServiceInfos>) };
    inline vector<GetServiceResponseBodyServiceInfos> serviceInfos() { DARABONBA_PTR_GET(serviceInfos_, vector<GetServiceResponseBodyServiceInfos>) };
    inline GetServiceResponseBody& setServiceInfos(const vector<GetServiceResponseBodyServiceInfos> & serviceInfos) { DARABONBA_PTR_SET_VALUE(serviceInfos_, serviceInfos) };
    inline GetServiceResponseBody& setServiceInfos(vector<GetServiceResponseBodyServiceInfos> && serviceInfos) { DARABONBA_PTR_SET_RVALUE(serviceInfos_, serviceInfos) };


    // serviceLocaleConfigs Field Functions 
    bool hasServiceLocaleConfigs() const { return this->serviceLocaleConfigs_ != nullptr;};
    void deleteServiceLocaleConfigs() { this->serviceLocaleConfigs_ = nullptr;};
    inline const vector<GetServiceResponseBodyServiceLocaleConfigs> & serviceLocaleConfigs() const { DARABONBA_PTR_GET_CONST(serviceLocaleConfigs_, vector<GetServiceResponseBodyServiceLocaleConfigs>) };
    inline vector<GetServiceResponseBodyServiceLocaleConfigs> serviceLocaleConfigs() { DARABONBA_PTR_GET(serviceLocaleConfigs_, vector<GetServiceResponseBodyServiceLocaleConfigs>) };
    inline GetServiceResponseBody& setServiceLocaleConfigs(const vector<GetServiceResponseBodyServiceLocaleConfigs> & serviceLocaleConfigs) { DARABONBA_PTR_SET_VALUE(serviceLocaleConfigs_, serviceLocaleConfigs) };
    inline GetServiceResponseBody& setServiceLocaleConfigs(vector<GetServiceResponseBodyServiceLocaleConfigs> && serviceLocaleConfigs) { DARABONBA_PTR_SET_RVALUE(serviceLocaleConfigs_, serviceLocaleConfigs) };


    // serviceProductUrl Field Functions 
    bool hasServiceProductUrl() const { return this->serviceProductUrl_ != nullptr;};
    void deleteServiceProductUrl() { this->serviceProductUrl_ = nullptr;};
    inline string serviceProductUrl() const { DARABONBA_PTR_GET_DEFAULT(serviceProductUrl_, "") };
    inline GetServiceResponseBody& setServiceProductUrl(string serviceProductUrl) { DARABONBA_PTR_SET_VALUE(serviceProductUrl_, serviceProductUrl) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline GetServiceResponseBody& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // shareType Field Functions 
    bool hasShareType() const { return this->shareType_ != nullptr;};
    void deleteShareType() { this->shareType_ = nullptr;};
    inline string shareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
    inline GetServiceResponseBody& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetServiceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supplierDesc Field Functions 
    bool hasSupplierDesc() const { return this->supplierDesc_ != nullptr;};
    void deleteSupplierDesc() { this->supplierDesc_ = nullptr;};
    inline string supplierDesc() const { DARABONBA_PTR_GET_DEFAULT(supplierDesc_, "") };
    inline GetServiceResponseBody& setSupplierDesc(string supplierDesc) { DARABONBA_PTR_SET_VALUE(supplierDesc_, supplierDesc) };


    // supplierLogo Field Functions 
    bool hasSupplierLogo() const { return this->supplierLogo_ != nullptr;};
    void deleteSupplierLogo() { this->supplierLogo_ = nullptr;};
    inline string supplierLogo() const { DARABONBA_PTR_GET_DEFAULT(supplierLogo_, "") };
    inline GetServiceResponseBody& setSupplierLogo(string supplierLogo) { DARABONBA_PTR_SET_VALUE(supplierLogo_, supplierLogo) };


    // supplierName Field Functions 
    bool hasSupplierName() const { return this->supplierName_ != nullptr;};
    void deleteSupplierName() { this->supplierName_ = nullptr;};
    inline string supplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
    inline GetServiceResponseBody& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


    // supplierUid Field Functions 
    bool hasSupplierUid() const { return this->supplierUid_ != nullptr;};
    void deleteSupplierUid() { this->supplierUid_ = nullptr;};
    inline int64_t supplierUid() const { DARABONBA_PTR_GET_DEFAULT(supplierUid_, 0L) };
    inline GetServiceResponseBody& setSupplierUid(int64_t supplierUid) { DARABONBA_PTR_SET_VALUE(supplierUid_, supplierUid) };


    // supplierUrl Field Functions 
    bool hasSupplierUrl() const { return this->supplierUrl_ != nullptr;};
    void deleteSupplierUrl() { this->supplierUrl_ = nullptr;};
    inline string supplierUrl() const { DARABONBA_PTR_GET_DEFAULT(supplierUrl_, "") };
    inline GetServiceResponseBody& setSupplierUrl(string supplierUrl) { DARABONBA_PTR_SET_VALUE(supplierUrl_, supplierUrl) };


    // supportContacts Field Functions 
    bool hasSupportContacts() const { return this->supportContacts_ != nullptr;};
    void deleteSupportContacts() { this->supportContacts_ = nullptr;};
    inline const vector<GetServiceResponseBodySupportContacts> & supportContacts() const { DARABONBA_PTR_GET_CONST(supportContacts_, vector<GetServiceResponseBodySupportContacts>) };
    inline vector<GetServiceResponseBodySupportContacts> supportContacts() { DARABONBA_PTR_GET(supportContacts_, vector<GetServiceResponseBodySupportContacts>) };
    inline GetServiceResponseBody& setSupportContacts(const vector<GetServiceResponseBodySupportContacts> & supportContacts) { DARABONBA_PTR_SET_VALUE(supportContacts_, supportContacts) };
    inline GetServiceResponseBody& setSupportContacts(vector<GetServiceResponseBodySupportContacts> && supportContacts) { DARABONBA_PTR_SET_RVALUE(supportContacts_, supportContacts) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetServiceResponseBodyTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetServiceResponseBodyTags>) };
    inline vector<GetServiceResponseBodyTags> tags() { DARABONBA_PTR_GET(tags_, vector<GetServiceResponseBodyTags>) };
    inline GetServiceResponseBody& setTags(const vector<GetServiceResponseBodyTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetServiceResponseBody& setTags(vector<GetServiceResponseBodyTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // tenantType Field Functions 
    bool hasTenantType() const { return this->tenantType_ != nullptr;};
    void deleteTenantType() { this->tenantType_ = nullptr;};
    inline string tenantType() const { DARABONBA_PTR_GET_DEFAULT(tenantType_, "") };
    inline GetServiceResponseBody& setTenantType(string tenantType) { DARABONBA_PTR_SET_VALUE(tenantType_, tenantType) };


    // trialDuration Field Functions 
    bool hasTrialDuration() const { return this->trialDuration_ != nullptr;};
    void deleteTrialDuration() { this->trialDuration_ = nullptr;};
    inline int64_t trialDuration() const { DARABONBA_PTR_GET_DEFAULT(trialDuration_, 0L) };
    inline GetServiceResponseBody& setTrialDuration(int64_t trialDuration) { DARABONBA_PTR_SET_VALUE(trialDuration_, trialDuration) };


    // trialType Field Functions 
    bool hasTrialType() const { return this->trialType_ != nullptr;};
    void deleteTrialType() { this->trialType_ = nullptr;};
    inline string trialType() const { DARABONBA_PTR_GET_DEFAULT(trialType_, "") };
    inline GetServiceResponseBody& setTrialType(string trialType) { DARABONBA_PTR_SET_VALUE(trialType_, trialType) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetServiceResponseBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string versionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline GetServiceResponseBody& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // The alert configurations of the service.
    // 
    // >  This parameter takes effect only when you specify an alert policy for **PolicyNames**.
    std::shared_ptr<string> alarmMetadata_ = nullptr;
    // The categories of the Flow.
    std::shared_ptr<string> categories_ = nullptr;
    // The information about the order placed in Alibaba Cloud Marketplace.
    std::shared_ptr<GetServiceResponseBodyCommodity> commodity_ = nullptr;
    // Compliance check metadata.
    std::shared_ptr<GetServiceResponseBodyComplianceMetadata> complianceMetadata_ = nullptr;
    // Service deployment approach, Valid values：
    // 
    // - NoWhere
    // - Marketplace
    // - ComputeNest
    std::shared_ptr<string> deployFrom_ = nullptr;
    // The storage configurations of the service. The format in which the deployment information of a service is stored varies based on the deployment type of the service. In this case, the deployment information is stored in the JSON string format.
    std::shared_ptr<string> deployMetadata_ = nullptr;
    // The deployment type of the service. Valid values:
    // 
    // *   ros: The service is deployed by using Resource Orchestration Service (ROS).
    // *   terraform: The service is deployed by using Terraform.
    std::shared_ptr<string> deployType_ = nullptr;
    // The duration for which hosted O\\&M is implemented. Unit: seconds.
    std::shared_ptr<int64_t> duration_ = nullptr;
    // Information about the ram role created in the service template.
    std::shared_ptr<vector<GetServiceResponseBodyInstanceRoleInfos>> instanceRoleInfos_ = nullptr;
    // Indicates whether the hosted O\\&M feature is enabled for the service. Default value: false. Valid values:
    // 
    // *   true
    // *   false
    // 
    // >  This parameter is returned if you set **ServiceType** to **private**.
    std::shared_ptr<bool> isSupportOperated_ = nullptr;
    // The license metadata.
    std::shared_ptr<string> licenseMetadata_ = nullptr;
    // The logging configurations.
    std::shared_ptr<string> logMetadata_ = nullptr;
    // The operation metadata.
    std::shared_ptr<string> operationMetadata_ = nullptr;
    // The permissions on the service. Valid values:
    // 
    // *   Deployable: Permissions to deploy the service.
    // *   Accessible: Permissions to access the service.
    std::shared_ptr<string> permission_ = nullptr;
    // The policy name. The name can be up to 128 characters in length. Separate multiple names with commas (,). Only hosted O\\&M policies are supported.
    std::shared_ptr<string> policyNames_ = nullptr;
    // The time when the service was published.
    std::shared_ptr<string> publishTime_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Service document information.
    std::shared_ptr<vector<GetServiceResponseBodyServiceDocumentInfos>> serviceDocumentInfos_ = nullptr;
    // The service ID.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The information about the service.
    std::shared_ptr<vector<GetServiceResponseBodyServiceInfos>> serviceInfos_ = nullptr;
    std::shared_ptr<vector<GetServiceResponseBodyServiceLocaleConfigs>> serviceLocaleConfigs_ = nullptr;
    // The URL of the service page.
    std::shared_ptr<string> serviceProductUrl_ = nullptr;
    // The type of the service. Valid values:
    // 
    // - private: The service is a private service and is deployed within the account of a customer.
    // - managed: The service is a fully managed service and is deployed within the account of a service provider.
    // - operation: The service is a hosted O&M service.
    std::shared_ptr<string> serviceType_ = nullptr;
    // The permission type of the deployment URL. Valid values:
    // 
    // *   Public: All users can go to the URL to create a service instance or a trial service instance.
    // *   Restricted: Only users in the whitelist can go to the URL to create a service instance or a trial service instance.
    // *   OnlyFormalRestricted: Only users in the whitelist can go to the URL to create a service instance.
    // *   OnlyTrailRestricted: Only users in the whitelist can go to the URL to create a trial service instance.
    // *   Hidden: Users not in the whitelist cannot see the service details page when they go to the URL and cannot request deployment permissions.
    std::shared_ptr<string> shareType_ = nullptr;
    // The deploy status of the service. Valid values:
    // - Draft
    // - Beta
    // - Submitted
    // - Approved
    // - Launching
    // - Online
    // - Offline
    // - Creating
    std::shared_ptr<string> status_ = nullptr;
    // The description of service provider.
    std::shared_ptr<string> supplierDesc_ = nullptr;
    // The Logo of service provider.
    std::shared_ptr<string> supplierLogo_ = nullptr;
    // The name of the service provider.
    std::shared_ptr<string> supplierName_ = nullptr;
    // The Alibaba Cloud account ID of the service provider.
    std::shared_ptr<int64_t> supplierUid_ = nullptr;
    // The URL of the service provider.
    std::shared_ptr<string> supplierUrl_ = nullptr;
    // Contact information of the service provider
    std::shared_ptr<vector<GetServiceResponseBodySupportContacts>> supportContacts_ = nullptr;
    // The tags.
    std::shared_ptr<vector<GetServiceResponseBodyTags>> tags_ = nullptr;
    // The type of the tenant. Valid values:
    // 
    // *   SingleTenant
    // *   MultiTenant
    std::shared_ptr<string> tenantType_ = nullptr;
    // The trial duration. Unit: day. The maximum trial duration cannot exceed 30 days.
    std::shared_ptr<int64_t> trialDuration_ = nullptr;
    // The trial policy. Valid values:
    // 
    // *   Trial: Trials are supported.
    // *   NotTrial: Trials are not supported.
    std::shared_ptr<string> trialType_ = nullptr;
    // The service version.
    std::shared_ptr<string> version_ = nullptr;
    // The version name.
    std::shared_ptr<string> versionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
