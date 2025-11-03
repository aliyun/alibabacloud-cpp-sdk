// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPINSTANCEGROUPRESPONSEBODYAPPINSTANCEGROUPMODELS_HPP_
#define ALIBABACLOUD_MODELS_GETAPPINSTANCEGROUPRESPONSEBODYAPPINSTANCEGROUPMODELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps.hpp>
#include <alibabacloud/models/GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool.hpp>
#include <alibabacloud/models/GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo.hpp>
#include <alibabacloud/models/GetAppInstanceGroupResponseBodyAppInstanceGroupModelsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetAppInstanceGroupResponseBodyAppInstanceGroupModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppInstanceGroupResponseBodyAppInstanceGroupModels& obj) { 
      DARABONBA_PTR_TO_JSON(AccessType, accessType_);
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(AppCenterImageId, appCenterImageId_);
      DARABONBA_PTR_TO_JSON(AppCenterImageName, appCenterImageName_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupName, appInstanceGroupName_);
      DARABONBA_PTR_TO_JSON(AppInstanceType, appInstanceType_);
      DARABONBA_PTR_TO_JSON(AppInstanceTypeName, appInstanceTypeName_);
      DARABONBA_PTR_TO_JSON(AppPolicyId, appPolicyId_);
      DARABONBA_PTR_TO_JSON(Apps, apps_);
      DARABONBA_PTR_TO_JSON(AuthMode, authMode_);
      DARABONBA_PTR_TO_JSON(ChargeResourceMode, chargeResourceMode_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(MaxAmount, maxAmount_);
      DARABONBA_PTR_TO_JSON(MinAmount, minAmount_);
      DARABONBA_PTR_TO_JSON(NodePool, nodePool_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(OtaInfo, otaInfo_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReserveAmountRatio, reserveAmountRatio_);
      DARABONBA_PTR_TO_JSON(ReserveMaxAmount, reserveMaxAmount_);
      DARABONBA_PTR_TO_JSON(ReserveMinAmount, reserveMinAmount_);
      DARABONBA_PTR_TO_JSON(ResourceStatus, resourceStatus_);
      DARABONBA_PTR_TO_JSON(ScalingDownAfterIdleMinutes, scalingDownAfterIdleMinutes_);
      DARABONBA_PTR_TO_JSON(ScalingStep, scalingStep_);
      DARABONBA_PTR_TO_JSON(ScalingUsageThreshold, scalingUsageThreshold_);
      DARABONBA_PTR_TO_JSON(SessionTimeout, sessionTimeout_);
      DARABONBA_PTR_TO_JSON(SessionType, sessionType_);
      DARABONBA_PTR_TO_JSON(SkipUserAuthCheck, skipUserAuthCheck_);
      DARABONBA_PTR_TO_JSON(SpecId, specId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppInstanceGroupResponseBodyAppInstanceGroupModels& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(AppCenterImageId, appCenterImageId_);
      DARABONBA_PTR_FROM_JSON(AppCenterImageName, appCenterImageName_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupName, appInstanceGroupName_);
      DARABONBA_PTR_FROM_JSON(AppInstanceType, appInstanceType_);
      DARABONBA_PTR_FROM_JSON(AppInstanceTypeName, appInstanceTypeName_);
      DARABONBA_PTR_FROM_JSON(AppPolicyId, appPolicyId_);
      DARABONBA_PTR_FROM_JSON(Apps, apps_);
      DARABONBA_PTR_FROM_JSON(AuthMode, authMode_);
      DARABONBA_PTR_FROM_JSON(ChargeResourceMode, chargeResourceMode_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(MaxAmount, maxAmount_);
      DARABONBA_PTR_FROM_JSON(MinAmount, minAmount_);
      DARABONBA_PTR_FROM_JSON(NodePool, nodePool_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(OtaInfo, otaInfo_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReserveAmountRatio, reserveAmountRatio_);
      DARABONBA_PTR_FROM_JSON(ReserveMaxAmount, reserveMaxAmount_);
      DARABONBA_PTR_FROM_JSON(ReserveMinAmount, reserveMinAmount_);
      DARABONBA_PTR_FROM_JSON(ResourceStatus, resourceStatus_);
      DARABONBA_PTR_FROM_JSON(ScalingDownAfterIdleMinutes, scalingDownAfterIdleMinutes_);
      DARABONBA_PTR_FROM_JSON(ScalingStep, scalingStep_);
      DARABONBA_PTR_FROM_JSON(ScalingUsageThreshold, scalingUsageThreshold_);
      DARABONBA_PTR_FROM_JSON(SessionTimeout, sessionTimeout_);
      DARABONBA_PTR_FROM_JSON(SessionType, sessionType_);
      DARABONBA_PTR_FROM_JSON(SkipUserAuthCheck, skipUserAuthCheck_);
      DARABONBA_PTR_FROM_JSON(SpecId, specId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetAppInstanceGroupResponseBodyAppInstanceGroupModels() = default ;
    GetAppInstanceGroupResponseBodyAppInstanceGroupModels(const GetAppInstanceGroupResponseBodyAppInstanceGroupModels &) = default ;
    GetAppInstanceGroupResponseBodyAppInstanceGroupModels(GetAppInstanceGroupResponseBodyAppInstanceGroupModels &&) = default ;
    GetAppInstanceGroupResponseBodyAppInstanceGroupModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppInstanceGroupResponseBodyAppInstanceGroupModels() = default ;
    GetAppInstanceGroupResponseBodyAppInstanceGroupModels& operator=(const GetAppInstanceGroupResponseBodyAppInstanceGroupModels &) = default ;
    GetAppInstanceGroupResponseBodyAppInstanceGroupModels& operator=(GetAppInstanceGroupResponseBodyAppInstanceGroupModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessType_ == nullptr
        && return this->amount_ == nullptr && return this->appCenterImageId_ == nullptr && return this->appCenterImageName_ == nullptr && return this->appInstanceGroupId_ == nullptr && return this->appInstanceGroupName_ == nullptr
        && return this->appInstanceType_ == nullptr && return this->appInstanceTypeName_ == nullptr && return this->appPolicyId_ == nullptr && return this->apps_ == nullptr && return this->authMode_ == nullptr
        && return this->chargeResourceMode_ == nullptr && return this->chargeType_ == nullptr && return this->expiredTime_ == nullptr && return this->gmtCreate_ == nullptr && return this->maxAmount_ == nullptr
        && return this->minAmount_ == nullptr && return this->nodePool_ == nullptr && return this->officeSiteId_ == nullptr && return this->osType_ == nullptr && return this->otaInfo_ == nullptr
        && return this->productType_ == nullptr && return this->regionId_ == nullptr && return this->reserveAmountRatio_ == nullptr && return this->reserveMaxAmount_ == nullptr && return this->reserveMinAmount_ == nullptr
        && return this->resourceStatus_ == nullptr && return this->scalingDownAfterIdleMinutes_ == nullptr && return this->scalingStep_ == nullptr && return this->scalingUsageThreshold_ == nullptr && return this->sessionTimeout_ == nullptr
        && return this->sessionType_ == nullptr && return this->skipUserAuthCheck_ == nullptr && return this->specId_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string accessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // appCenterImageId Field Functions 
    bool hasAppCenterImageId() const { return this->appCenterImageId_ != nullptr;};
    void deleteAppCenterImageId() { this->appCenterImageId_ = nullptr;};
    inline string appCenterImageId() const { DARABONBA_PTR_GET_DEFAULT(appCenterImageId_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setAppCenterImageId(string appCenterImageId) { DARABONBA_PTR_SET_VALUE(appCenterImageId_, appCenterImageId) };


    // appCenterImageName Field Functions 
    bool hasAppCenterImageName() const { return this->appCenterImageName_ != nullptr;};
    void deleteAppCenterImageName() { this->appCenterImageName_ = nullptr;};
    inline string appCenterImageName() const { DARABONBA_PTR_GET_DEFAULT(appCenterImageName_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setAppCenterImageName(string appCenterImageName) { DARABONBA_PTR_SET_VALUE(appCenterImageName_, appCenterImageName) };


    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string appInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstanceGroupName Field Functions 
    bool hasAppInstanceGroupName() const { return this->appInstanceGroupName_ != nullptr;};
    void deleteAppInstanceGroupName() { this->appInstanceGroupName_ = nullptr;};
    inline string appInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupName_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setAppInstanceGroupName(string appInstanceGroupName) { DARABONBA_PTR_SET_VALUE(appInstanceGroupName_, appInstanceGroupName) };


    // appInstanceType Field Functions 
    bool hasAppInstanceType() const { return this->appInstanceType_ != nullptr;};
    void deleteAppInstanceType() { this->appInstanceType_ = nullptr;};
    inline string appInstanceType() const { DARABONBA_PTR_GET_DEFAULT(appInstanceType_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setAppInstanceType(string appInstanceType) { DARABONBA_PTR_SET_VALUE(appInstanceType_, appInstanceType) };


    // appInstanceTypeName Field Functions 
    bool hasAppInstanceTypeName() const { return this->appInstanceTypeName_ != nullptr;};
    void deleteAppInstanceTypeName() { this->appInstanceTypeName_ = nullptr;};
    inline string appInstanceTypeName() const { DARABONBA_PTR_GET_DEFAULT(appInstanceTypeName_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setAppInstanceTypeName(string appInstanceTypeName) { DARABONBA_PTR_SET_VALUE(appInstanceTypeName_, appInstanceTypeName) };


    // appPolicyId Field Functions 
    bool hasAppPolicyId() const { return this->appPolicyId_ != nullptr;};
    void deleteAppPolicyId() { this->appPolicyId_ = nullptr;};
    inline string appPolicyId() const { DARABONBA_PTR_GET_DEFAULT(appPolicyId_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setAppPolicyId(string appPolicyId) { DARABONBA_PTR_SET_VALUE(appPolicyId_, appPolicyId) };


    // apps Field Functions 
    bool hasApps() const { return this->apps_ != nullptr;};
    void deleteApps() { this->apps_ = nullptr;};
    inline const vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps> & apps() const { DARABONBA_PTR_GET_CONST(apps_, vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps>) };
    inline vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps> apps() { DARABONBA_PTR_GET(apps_, vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps>) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setApps(const vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps> & apps) { DARABONBA_PTR_SET_VALUE(apps_, apps) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setApps(vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps> && apps) { DARABONBA_PTR_SET_RVALUE(apps_, apps) };


    // authMode Field Functions 
    bool hasAuthMode() const { return this->authMode_ != nullptr;};
    void deleteAuthMode() { this->authMode_ = nullptr;};
    inline string authMode() const { DARABONBA_PTR_GET_DEFAULT(authMode_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setAuthMode(string authMode) { DARABONBA_PTR_SET_VALUE(authMode_, authMode) };


    // chargeResourceMode Field Functions 
    bool hasChargeResourceMode() const { return this->chargeResourceMode_ != nullptr;};
    void deleteChargeResourceMode() { this->chargeResourceMode_ = nullptr;};
    inline string chargeResourceMode() const { DARABONBA_PTR_GET_DEFAULT(chargeResourceMode_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setChargeResourceMode(string chargeResourceMode) { DARABONBA_PTR_SET_VALUE(chargeResourceMode_, chargeResourceMode) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // maxAmount Field Functions 
    bool hasMaxAmount() const { return this->maxAmount_ != nullptr;};
    void deleteMaxAmount() { this->maxAmount_ = nullptr;};
    inline int32_t maxAmount() const { DARABONBA_PTR_GET_DEFAULT(maxAmount_, 0) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setMaxAmount(int32_t maxAmount) { DARABONBA_PTR_SET_VALUE(maxAmount_, maxAmount) };


    // minAmount Field Functions 
    bool hasMinAmount() const { return this->minAmount_ != nullptr;};
    void deleteMinAmount() { this->minAmount_ = nullptr;};
    inline int32_t minAmount() const { DARABONBA_PTR_GET_DEFAULT(minAmount_, 0) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setMinAmount(int32_t minAmount) { DARABONBA_PTR_SET_VALUE(minAmount_, minAmount) };


    // nodePool Field Functions 
    bool hasNodePool() const { return this->nodePool_ != nullptr;};
    void deleteNodePool() { this->nodePool_ = nullptr;};
    inline const vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool> & nodePool() const { DARABONBA_PTR_GET_CONST(nodePool_, vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool>) };
    inline vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool> nodePool() { DARABONBA_PTR_GET(nodePool_, vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool>) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setNodePool(const vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool> & nodePool) { DARABONBA_PTR_SET_VALUE(nodePool_, nodePool) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setNodePool(vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool> && nodePool) { DARABONBA_PTR_SET_RVALUE(nodePool_, nodePool) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // otaInfo Field Functions 
    bool hasOtaInfo() const { return this->otaInfo_ != nullptr;};
    void deleteOtaInfo() { this->otaInfo_ = nullptr;};
    inline const Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo & otaInfo() const { DARABONBA_PTR_GET_CONST(otaInfo_, Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo) };
    inline Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo otaInfo() { DARABONBA_PTR_GET(otaInfo_, Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setOtaInfo(const Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo & otaInfo) { DARABONBA_PTR_SET_VALUE(otaInfo_, otaInfo) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setOtaInfo(Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo && otaInfo) { DARABONBA_PTR_SET_RVALUE(otaInfo_, otaInfo) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reserveAmountRatio Field Functions 
    bool hasReserveAmountRatio() const { return this->reserveAmountRatio_ != nullptr;};
    void deleteReserveAmountRatio() { this->reserveAmountRatio_ = nullptr;};
    inline string reserveAmountRatio() const { DARABONBA_PTR_GET_DEFAULT(reserveAmountRatio_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setReserveAmountRatio(string reserveAmountRatio) { DARABONBA_PTR_SET_VALUE(reserveAmountRatio_, reserveAmountRatio) };


    // reserveMaxAmount Field Functions 
    bool hasReserveMaxAmount() const { return this->reserveMaxAmount_ != nullptr;};
    void deleteReserveMaxAmount() { this->reserveMaxAmount_ = nullptr;};
    inline int32_t reserveMaxAmount() const { DARABONBA_PTR_GET_DEFAULT(reserveMaxAmount_, 0) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setReserveMaxAmount(int32_t reserveMaxAmount) { DARABONBA_PTR_SET_VALUE(reserveMaxAmount_, reserveMaxAmount) };


    // reserveMinAmount Field Functions 
    bool hasReserveMinAmount() const { return this->reserveMinAmount_ != nullptr;};
    void deleteReserveMinAmount() { this->reserveMinAmount_ = nullptr;};
    inline int32_t reserveMinAmount() const { DARABONBA_PTR_GET_DEFAULT(reserveMinAmount_, 0) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setReserveMinAmount(int32_t reserveMinAmount) { DARABONBA_PTR_SET_VALUE(reserveMinAmount_, reserveMinAmount) };


    // resourceStatus Field Functions 
    bool hasResourceStatus() const { return this->resourceStatus_ != nullptr;};
    void deleteResourceStatus() { this->resourceStatus_ = nullptr;};
    inline string resourceStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceStatus_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setResourceStatus(string resourceStatus) { DARABONBA_PTR_SET_VALUE(resourceStatus_, resourceStatus) };


    // scalingDownAfterIdleMinutes Field Functions 
    bool hasScalingDownAfterIdleMinutes() const { return this->scalingDownAfterIdleMinutes_ != nullptr;};
    void deleteScalingDownAfterIdleMinutes() { this->scalingDownAfterIdleMinutes_ = nullptr;};
    inline int32_t scalingDownAfterIdleMinutes() const { DARABONBA_PTR_GET_DEFAULT(scalingDownAfterIdleMinutes_, 0) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setScalingDownAfterIdleMinutes(int32_t scalingDownAfterIdleMinutes) { DARABONBA_PTR_SET_VALUE(scalingDownAfterIdleMinutes_, scalingDownAfterIdleMinutes) };


    // scalingStep Field Functions 
    bool hasScalingStep() const { return this->scalingStep_ != nullptr;};
    void deleteScalingStep() { this->scalingStep_ = nullptr;};
    inline int32_t scalingStep() const { DARABONBA_PTR_GET_DEFAULT(scalingStep_, 0) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setScalingStep(int32_t scalingStep) { DARABONBA_PTR_SET_VALUE(scalingStep_, scalingStep) };


    // scalingUsageThreshold Field Functions 
    bool hasScalingUsageThreshold() const { return this->scalingUsageThreshold_ != nullptr;};
    void deleteScalingUsageThreshold() { this->scalingUsageThreshold_ = nullptr;};
    inline string scalingUsageThreshold() const { DARABONBA_PTR_GET_DEFAULT(scalingUsageThreshold_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setScalingUsageThreshold(string scalingUsageThreshold) { DARABONBA_PTR_SET_VALUE(scalingUsageThreshold_, scalingUsageThreshold) };


    // sessionTimeout Field Functions 
    bool hasSessionTimeout() const { return this->sessionTimeout_ != nullptr;};
    void deleteSessionTimeout() { this->sessionTimeout_ = nullptr;};
    inline string sessionTimeout() const { DARABONBA_PTR_GET_DEFAULT(sessionTimeout_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setSessionTimeout(string sessionTimeout) { DARABONBA_PTR_SET_VALUE(sessionTimeout_, sessionTimeout) };


    // sessionType Field Functions 
    bool hasSessionType() const { return this->sessionType_ != nullptr;};
    void deleteSessionType() { this->sessionType_ = nullptr;};
    inline string sessionType() const { DARABONBA_PTR_GET_DEFAULT(sessionType_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setSessionType(string sessionType) { DARABONBA_PTR_SET_VALUE(sessionType_, sessionType) };


    // skipUserAuthCheck Field Functions 
    bool hasSkipUserAuthCheck() const { return this->skipUserAuthCheck_ != nullptr;};
    void deleteSkipUserAuthCheck() { this->skipUserAuthCheck_ = nullptr;};
    inline bool skipUserAuthCheck() const { DARABONBA_PTR_GET_DEFAULT(skipUserAuthCheck_, false) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setSkipUserAuthCheck(bool skipUserAuthCheck) { DARABONBA_PTR_SET_VALUE(skipUserAuthCheck_, skipUserAuthCheck) };


    // specId Field Functions 
    bool hasSpecId() const { return this->specId_ != nullptr;};
    void deleteSpecId() { this->specId_ = nullptr;};
    inline string specId() const { DARABONBA_PTR_GET_DEFAULT(specId_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setSpecId(string specId) { DARABONBA_PTR_SET_VALUE(specId_, specId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsTags>) };
    inline vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsTags>) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setTags(const vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels& setTags(vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // 接入类型。
    std::shared_ptr<string> accessType_ = nullptr;
    std::shared_ptr<int32_t> amount_ = nullptr;
    std::shared_ptr<string> appCenterImageId_ = nullptr;
    std::shared_ptr<string> appCenterImageName_ = nullptr;
    std::shared_ptr<string> appInstanceGroupId_ = nullptr;
    std::shared_ptr<string> appInstanceGroupName_ = nullptr;
    std::shared_ptr<string> appInstanceType_ = nullptr;
    std::shared_ptr<string> appInstanceTypeName_ = nullptr;
    std::shared_ptr<string> appPolicyId_ = nullptr;
    std::shared_ptr<vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps>> apps_ = nullptr;
    // 授权模式。
    std::shared_ptr<string> authMode_ = nullptr;
    std::shared_ptr<string> chargeResourceMode_ = nullptr;
    std::shared_ptr<string> chargeType_ = nullptr;
    std::shared_ptr<string> expiredTime_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<int32_t> maxAmount_ = nullptr;
    std::shared_ptr<int32_t> minAmount_ = nullptr;
    // The resource groups.
    std::shared_ptr<vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool>> nodePool_ = nullptr;
    std::shared_ptr<string> officeSiteId_ = nullptr;
    std::shared_ptr<string> osType_ = nullptr;
    std::shared_ptr<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo> otaInfo_ = nullptr;
    std::shared_ptr<string> productType_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> reserveAmountRatio_ = nullptr;
    std::shared_ptr<int32_t> reserveMaxAmount_ = nullptr;
    std::shared_ptr<int32_t> reserveMinAmount_ = nullptr;
    std::shared_ptr<string> resourceStatus_ = nullptr;
    std::shared_ptr<int32_t> scalingDownAfterIdleMinutes_ = nullptr;
    std::shared_ptr<int32_t> scalingStep_ = nullptr;
    std::shared_ptr<string> scalingUsageThreshold_ = nullptr;
    std::shared_ptr<string> sessionTimeout_ = nullptr;
    std::shared_ptr<string> sessionType_ = nullptr;
    std::shared_ptr<bool> skipUserAuthCheck_ = nullptr;
    std::shared_ptr<string> specId_ = nullptr;
    // The status of the delivery group.
    // 
    // Valid values:
    // 
    // *   PUBLISHED: The delivery group is published.
    // *   FAILED: The delivery group failed to be published.
    // *   MAINTAIN_FAILED: The delivery group failed to be updated.
    // *   EXPIRED: The delivery group is expired.
    // *   MAINTAINING: The delivery group is being updated.
    // *   CEASED: The delivery group has overdue payments.
    // *   EXPIRED_RECYCLING: The delivery group is expired and being recycled.
    // *   DEPLOYING: The delivery group is being published.
    std::shared_ptr<string> status_ = nullptr;
    // 资源标签列表。
    std::shared_ptr<vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
