// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPINSTANCEGROUPRESPONSEBODYAPPINSTANCEGROUPMODELS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPINSTANCEGROUPRESPONSEBODYAPPINSTANCEGROUPMODELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAppInstanceGroupResponseBodyAppInstanceGroupModelsApps.hpp>
#include <alibabacloud/models/ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool.hpp>
#include <alibabacloud/models/ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo.hpp>
#include <alibabacloud/models/ListAppInstanceGroupResponseBodyAppInstanceGroupModelsResourceTags.hpp>
#include <alibabacloud/models/ListAppInstanceGroupResponseBodyAppInstanceGroupModelsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListAppInstanceGroupResponseBodyAppInstanceGroupModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppInstanceGroupResponseBodyAppInstanceGroupModels& obj) { 
      DARABONBA_PTR_TO_JSON(AccessType, accessType_);
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(AppCenterImageId, appCenterImageId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupName, appInstanceGroupName_);
      DARABONBA_PTR_TO_JSON(AppInstanceType, appInstanceType_);
      DARABONBA_PTR_TO_JSON(AppPolicyId, appPolicyId_);
      DARABONBA_PTR_TO_JSON(AppPolicyImageCheck, appPolicyImageCheck_);
      DARABONBA_PTR_TO_JSON(AppPolicyVersion, appPolicyVersion_);
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
      DARABONBA_PTR_TO_JSON(ResourceTags, resourceTags_);
      DARABONBA_PTR_TO_JSON(ScalingDownAfterIdleMinutes, scalingDownAfterIdleMinutes_);
      DARABONBA_PTR_TO_JSON(ScalingStep, scalingStep_);
      DARABONBA_PTR_TO_JSON(ScalingUsageThreshold, scalingUsageThreshold_);
      DARABONBA_PTR_TO_JSON(SessionTimeout, sessionTimeout_);
      DARABONBA_PTR_TO_JSON(SkipUserAuthCheck, skipUserAuthCheck_);
      DARABONBA_PTR_TO_JSON(SpecId, specId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppInstanceGroupResponseBodyAppInstanceGroupModels& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(AppCenterImageId, appCenterImageId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupName, appInstanceGroupName_);
      DARABONBA_PTR_FROM_JSON(AppInstanceType, appInstanceType_);
      DARABONBA_PTR_FROM_JSON(AppPolicyId, appPolicyId_);
      DARABONBA_PTR_FROM_JSON(AppPolicyImageCheck, appPolicyImageCheck_);
      DARABONBA_PTR_FROM_JSON(AppPolicyVersion, appPolicyVersion_);
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
      DARABONBA_PTR_FROM_JSON(ResourceTags, resourceTags_);
      DARABONBA_PTR_FROM_JSON(ScalingDownAfterIdleMinutes, scalingDownAfterIdleMinutes_);
      DARABONBA_PTR_FROM_JSON(ScalingStep, scalingStep_);
      DARABONBA_PTR_FROM_JSON(ScalingUsageThreshold, scalingUsageThreshold_);
      DARABONBA_PTR_FROM_JSON(SessionTimeout, sessionTimeout_);
      DARABONBA_PTR_FROM_JSON(SkipUserAuthCheck, skipUserAuthCheck_);
      DARABONBA_PTR_FROM_JSON(SpecId, specId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListAppInstanceGroupResponseBodyAppInstanceGroupModels() = default ;
    ListAppInstanceGroupResponseBodyAppInstanceGroupModels(const ListAppInstanceGroupResponseBodyAppInstanceGroupModels &) = default ;
    ListAppInstanceGroupResponseBodyAppInstanceGroupModels(ListAppInstanceGroupResponseBodyAppInstanceGroupModels &&) = default ;
    ListAppInstanceGroupResponseBodyAppInstanceGroupModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppInstanceGroupResponseBodyAppInstanceGroupModels() = default ;
    ListAppInstanceGroupResponseBodyAppInstanceGroupModels& operator=(const ListAppInstanceGroupResponseBodyAppInstanceGroupModels &) = default ;
    ListAppInstanceGroupResponseBodyAppInstanceGroupModels& operator=(ListAppInstanceGroupResponseBodyAppInstanceGroupModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessType_ != nullptr
        && this->amount_ != nullptr && this->appCenterImageId_ != nullptr && this->appInstanceGroupId_ != nullptr && this->appInstanceGroupName_ != nullptr && this->appInstanceType_ != nullptr
        && this->appPolicyId_ != nullptr && this->appPolicyImageCheck_ != nullptr && this->appPolicyVersion_ != nullptr && this->apps_ != nullptr && this->authMode_ != nullptr
        && this->chargeResourceMode_ != nullptr && this->chargeType_ != nullptr && this->expiredTime_ != nullptr && this->gmtCreate_ != nullptr && this->maxAmount_ != nullptr
        && this->minAmount_ != nullptr && this->nodePool_ != nullptr && this->officeSiteId_ != nullptr && this->osType_ != nullptr && this->otaInfo_ != nullptr
        && this->productType_ != nullptr && this->regionId_ != nullptr && this->reserveAmountRatio_ != nullptr && this->reserveMaxAmount_ != nullptr && this->reserveMinAmount_ != nullptr
        && this->resourceStatus_ != nullptr && this->resourceTags_ != nullptr && this->scalingDownAfterIdleMinutes_ != nullptr && this->scalingStep_ != nullptr && this->scalingUsageThreshold_ != nullptr
        && this->sessionTimeout_ != nullptr && this->skipUserAuthCheck_ != nullptr && this->specId_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string accessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // appCenterImageId Field Functions 
    bool hasAppCenterImageId() const { return this->appCenterImageId_ != nullptr;};
    void deleteAppCenterImageId() { this->appCenterImageId_ = nullptr;};
    inline string appCenterImageId() const { DARABONBA_PTR_GET_DEFAULT(appCenterImageId_, "") };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setAppCenterImageId(string appCenterImageId) { DARABONBA_PTR_SET_VALUE(appCenterImageId_, appCenterImageId) };


    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string appInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstanceGroupName Field Functions 
    bool hasAppInstanceGroupName() const { return this->appInstanceGroupName_ != nullptr;};
    void deleteAppInstanceGroupName() { this->appInstanceGroupName_ = nullptr;};
    inline string appInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupName_, "") };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setAppInstanceGroupName(string appInstanceGroupName) { DARABONBA_PTR_SET_VALUE(appInstanceGroupName_, appInstanceGroupName) };


    // appInstanceType Field Functions 
    bool hasAppInstanceType() const { return this->appInstanceType_ != nullptr;};
    void deleteAppInstanceType() { this->appInstanceType_ = nullptr;};
    inline string appInstanceType() const { DARABONBA_PTR_GET_DEFAULT(appInstanceType_, "") };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setAppInstanceType(string appInstanceType) { DARABONBA_PTR_SET_VALUE(appInstanceType_, appInstanceType) };


    // appPolicyId Field Functions 
    bool hasAppPolicyId() const { return this->appPolicyId_ != nullptr;};
    void deleteAppPolicyId() { this->appPolicyId_ = nullptr;};
    inline string appPolicyId() const { DARABONBA_PTR_GET_DEFAULT(appPolicyId_, "") };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setAppPolicyId(string appPolicyId) { DARABONBA_PTR_SET_VALUE(appPolicyId_, appPolicyId) };


    // appPolicyImageCheck Field Functions 
    bool hasAppPolicyImageCheck() const { return this->appPolicyImageCheck_ != nullptr;};
    void deleteAppPolicyImageCheck() { this->appPolicyImageCheck_ = nullptr;};
    inline bool appPolicyImageCheck() const { DARABONBA_PTR_GET_DEFAULT(appPolicyImageCheck_, false) };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setAppPolicyImageCheck(bool appPolicyImageCheck) { DARABONBA_PTR_SET_VALUE(appPolicyImageCheck_, appPolicyImageCheck) };


    // appPolicyVersion Field Functions 
    bool hasAppPolicyVersion() const { return this->appPolicyVersion_ != nullptr;};
    void deleteAppPolicyVersion() { this->appPolicyVersion_ = nullptr;};
    inline string appPolicyVersion() const { DARABONBA_PTR_GET_DEFAULT(appPolicyVersion_, "") };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setAppPolicyVersion(string appPolicyVersion) { DARABONBA_PTR_SET_VALUE(appPolicyVersion_, appPolicyVersion) };


    // apps Field Functions 
    bool hasApps() const { return this->apps_ != nullptr;};
    void deleteApps() { this->apps_ = nullptr;};
    inline const vector<Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsApps> & apps() const { DARABONBA_PTR_GET_CONST(apps_, vector<Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsApps>) };
    inline vector<Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsApps> apps() { DARABONBA_PTR_GET(apps_, vector<Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsApps>) };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setApps(const vector<Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsApps> & apps) { DARABONBA_PTR_SET_VALUE(apps_, apps) };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setApps(vector<Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsApps> && apps) { DARABONBA_PTR_SET_RVALUE(apps_, apps) };


    // authMode Field Functions 
    bool hasAuthMode() const { return this->authMode_ != nullptr;};
    void deleteAuthMode() { this->authMode_ = nullptr;};
    inline string authMode() const { DARABONBA_PTR_GET_DEFAULT(authMode_, "") };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setAuthMode(string authMode) { DARABONBA_PTR_SET_VALUE(authMode_, authMode) };


    // chargeResourceMode Field Functions 
    bool hasChargeResourceMode() const { return this->chargeResourceMode_ != nullptr;};
    void deleteChargeResourceMode() { this->chargeResourceMode_ = nullptr;};
    inline string chargeResourceMode() const { DARABONBA_PTR_GET_DEFAULT(chargeResourceMode_, "") };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setChargeResourceMode(string chargeResourceMode) { DARABONBA_PTR_SET_VALUE(chargeResourceMode_, chargeResourceMode) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // maxAmount Field Functions 
    bool hasMaxAmount() const { return this->maxAmount_ != nullptr;};
    void deleteMaxAmount() { this->maxAmount_ = nullptr;};
    inline int32_t maxAmount() const { DARABONBA_PTR_GET_DEFAULT(maxAmount_, 0) };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setMaxAmount(int32_t maxAmount) { DARABONBA_PTR_SET_VALUE(maxAmount_, maxAmount) };


    // minAmount Field Functions 
    bool hasMinAmount() const { return this->minAmount_ != nullptr;};
    void deleteMinAmount() { this->minAmount_ = nullptr;};
    inline int32_t minAmount() const { DARABONBA_PTR_GET_DEFAULT(minAmount_, 0) };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setMinAmount(int32_t minAmount) { DARABONBA_PTR_SET_VALUE(minAmount_, minAmount) };


    // nodePool Field Functions 
    bool hasNodePool() const { return this->nodePool_ != nullptr;};
    void deleteNodePool() { this->nodePool_ = nullptr;};
    inline const vector<Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool> & nodePool() const { DARABONBA_PTR_GET_CONST(nodePool_, vector<Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool>) };
    inline vector<Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool> nodePool() { DARABONBA_PTR_GET(nodePool_, vector<Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool>) };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setNodePool(const vector<Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool> & nodePool) { DARABONBA_PTR_SET_VALUE(nodePool_, nodePool) };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setNodePool(vector<Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool> && nodePool) { DARABONBA_PTR_SET_RVALUE(nodePool_, nodePool) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // otaInfo Field Functions 
    bool hasOtaInfo() const { return this->otaInfo_ != nullptr;};
    void deleteOtaInfo() { this->otaInfo_ = nullptr;};
    inline const Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo & otaInfo() const { DARABONBA_PTR_GET_CONST(otaInfo_, Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo) };
    inline Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo otaInfo() { DARABONBA_PTR_GET(otaInfo_, Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo) };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setOtaInfo(const Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo & otaInfo) { DARABONBA_PTR_SET_VALUE(otaInfo_, otaInfo) };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setOtaInfo(Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo && otaInfo) { DARABONBA_PTR_SET_RVALUE(otaInfo_, otaInfo) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reserveAmountRatio Field Functions 
    bool hasReserveAmountRatio() const { return this->reserveAmountRatio_ != nullptr;};
    void deleteReserveAmountRatio() { this->reserveAmountRatio_ = nullptr;};
    inline string reserveAmountRatio() const { DARABONBA_PTR_GET_DEFAULT(reserveAmountRatio_, "") };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setReserveAmountRatio(string reserveAmountRatio) { DARABONBA_PTR_SET_VALUE(reserveAmountRatio_, reserveAmountRatio) };


    // reserveMaxAmount Field Functions 
    bool hasReserveMaxAmount() const { return this->reserveMaxAmount_ != nullptr;};
    void deleteReserveMaxAmount() { this->reserveMaxAmount_ = nullptr;};
    inline int32_t reserveMaxAmount() const { DARABONBA_PTR_GET_DEFAULT(reserveMaxAmount_, 0) };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setReserveMaxAmount(int32_t reserveMaxAmount) { DARABONBA_PTR_SET_VALUE(reserveMaxAmount_, reserveMaxAmount) };


    // reserveMinAmount Field Functions 
    bool hasReserveMinAmount() const { return this->reserveMinAmount_ != nullptr;};
    void deleteReserveMinAmount() { this->reserveMinAmount_ = nullptr;};
    inline int32_t reserveMinAmount() const { DARABONBA_PTR_GET_DEFAULT(reserveMinAmount_, 0) };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setReserveMinAmount(int32_t reserveMinAmount) { DARABONBA_PTR_SET_VALUE(reserveMinAmount_, reserveMinAmount) };


    // resourceStatus Field Functions 
    bool hasResourceStatus() const { return this->resourceStatus_ != nullptr;};
    void deleteResourceStatus() { this->resourceStatus_ = nullptr;};
    inline string resourceStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceStatus_, "") };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setResourceStatus(string resourceStatus) { DARABONBA_PTR_SET_VALUE(resourceStatus_, resourceStatus) };


    // resourceTags Field Functions 
    bool hasResourceTags() const { return this->resourceTags_ != nullptr;};
    void deleteResourceTags() { this->resourceTags_ = nullptr;};
    inline const vector<Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsResourceTags> & resourceTags() const { DARABONBA_PTR_GET_CONST(resourceTags_, vector<Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsResourceTags>) };
    inline vector<Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsResourceTags> resourceTags() { DARABONBA_PTR_GET(resourceTags_, vector<Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsResourceTags>) };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setResourceTags(const vector<Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsResourceTags> & resourceTags) { DARABONBA_PTR_SET_VALUE(resourceTags_, resourceTags) };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setResourceTags(vector<Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsResourceTags> && resourceTags) { DARABONBA_PTR_SET_RVALUE(resourceTags_, resourceTags) };


    // scalingDownAfterIdleMinutes Field Functions 
    bool hasScalingDownAfterIdleMinutes() const { return this->scalingDownAfterIdleMinutes_ != nullptr;};
    void deleteScalingDownAfterIdleMinutes() { this->scalingDownAfterIdleMinutes_ = nullptr;};
    inline int32_t scalingDownAfterIdleMinutes() const { DARABONBA_PTR_GET_DEFAULT(scalingDownAfterIdleMinutes_, 0) };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setScalingDownAfterIdleMinutes(int32_t scalingDownAfterIdleMinutes) { DARABONBA_PTR_SET_VALUE(scalingDownAfterIdleMinutes_, scalingDownAfterIdleMinutes) };


    // scalingStep Field Functions 
    bool hasScalingStep() const { return this->scalingStep_ != nullptr;};
    void deleteScalingStep() { this->scalingStep_ = nullptr;};
    inline int32_t scalingStep() const { DARABONBA_PTR_GET_DEFAULT(scalingStep_, 0) };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setScalingStep(int32_t scalingStep) { DARABONBA_PTR_SET_VALUE(scalingStep_, scalingStep) };


    // scalingUsageThreshold Field Functions 
    bool hasScalingUsageThreshold() const { return this->scalingUsageThreshold_ != nullptr;};
    void deleteScalingUsageThreshold() { this->scalingUsageThreshold_ = nullptr;};
    inline string scalingUsageThreshold() const { DARABONBA_PTR_GET_DEFAULT(scalingUsageThreshold_, "") };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setScalingUsageThreshold(string scalingUsageThreshold) { DARABONBA_PTR_SET_VALUE(scalingUsageThreshold_, scalingUsageThreshold) };


    // sessionTimeout Field Functions 
    bool hasSessionTimeout() const { return this->sessionTimeout_ != nullptr;};
    void deleteSessionTimeout() { this->sessionTimeout_ = nullptr;};
    inline string sessionTimeout() const { DARABONBA_PTR_GET_DEFAULT(sessionTimeout_, "") };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setSessionTimeout(string sessionTimeout) { DARABONBA_PTR_SET_VALUE(sessionTimeout_, sessionTimeout) };


    // skipUserAuthCheck Field Functions 
    bool hasSkipUserAuthCheck() const { return this->skipUserAuthCheck_ != nullptr;};
    void deleteSkipUserAuthCheck() { this->skipUserAuthCheck_ = nullptr;};
    inline bool skipUserAuthCheck() const { DARABONBA_PTR_GET_DEFAULT(skipUserAuthCheck_, false) };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setSkipUserAuthCheck(bool skipUserAuthCheck) { DARABONBA_PTR_SET_VALUE(skipUserAuthCheck_, skipUserAuthCheck) };


    // specId Field Functions 
    bool hasSpecId() const { return this->specId_ != nullptr;};
    void deleteSpecId() { this->specId_ = nullptr;};
    inline string specId() const { DARABONBA_PTR_GET_DEFAULT(specId_, "") };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setSpecId(string specId) { DARABONBA_PTR_SET_VALUE(specId_, specId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsTags>) };
    inline vector<Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsTags>) };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setTags(const vector<Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModels& setTags(vector<Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<string> accessType_ = nullptr;
    // The number of subscription resources. Minimum value: 1.
    std::shared_ptr<int32_t> amount_ = nullptr;
    // The image ID of the app.
    std::shared_ptr<string> appCenterImageId_ = nullptr;
    // The ID of the delivery group.
    std::shared_ptr<string> appInstanceGroupId_ = nullptr;
    // The name of the delivery group.
    std::shared_ptr<string> appInstanceGroupName_ = nullptr;
    // The resource type of the delivery group.
    std::shared_ptr<string> appInstanceType_ = nullptr;
    // The policy ID.
    std::shared_ptr<string> appPolicyId_ = nullptr;
    std::shared_ptr<bool> appPolicyImageCheck_ = nullptr;
    std::shared_ptr<string> appPolicyVersion_ = nullptr;
    // The apps.
    std::shared_ptr<vector<Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsApps>> apps_ = nullptr;
    std::shared_ptr<string> authMode_ = nullptr;
    // The sales mode.
    // 
    // Valid values:
    // 
    // *   AppInstance: by session
    // *   Node: by resource
    std::shared_ptr<string> chargeResourceMode_ = nullptr;
    // The billing method.
    // 
    // Valid values:
    // 
    // *   PostPaid: pay-as-you-go
    // *   PrePaid: subscription
    std::shared_ptr<string> chargeType_ = nullptr;
    // The time when the delivery group expires.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The time when the delivery group was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The maximum number of instances. Minimum value: 1.
    std::shared_ptr<int32_t> maxAmount_ = nullptr;
    // The minimum number of instances. Minimum value: 1.
    std::shared_ptr<int32_t> minAmount_ = nullptr;
    // The resource groups.
    std::shared_ptr<vector<Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool>> nodePool_ = nullptr;
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The type of the operating system.
    // 
    // Valid value:
    // 
    // *   Windows
    std::shared_ptr<string> osType_ = nullptr;
    // The information about the over-the-air (OTA) update task.
    std::shared_ptr<Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo> otaInfo_ = nullptr;
    // The product type.
    // 
    // Valid value:
    // 
    // *   CloudApp: App Streaming
    std::shared_ptr<string> productType_ = nullptr;
    // The ID of the region where the delivery group resides. For information about the supported regions, see [Limits](https://help.aliyun.com/document_detail/426036.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // The percentage of reserved instances. The value indicates the percentage of unused sessions in the delivery group. Valid values: 0 to 99.
    std::shared_ptr<string> reserveAmountRatio_ = nullptr;
    // The maximum number of reserved instances. The value indicates the maximum number of unused sessions in the delivery group. Minimum value: 1.
    std::shared_ptr<int32_t> reserveMaxAmount_ = nullptr;
    // The minimum number of reserved instances. The value indicates the minimum number of unused sessions in the delivery group. Minimum value: 1.
    std::shared_ptr<int32_t> reserveMinAmount_ = nullptr;
    // The resource status.
    // 
    // Valid values:
    // 
    // *   AVAILABLE
    // *   RELEASED
    // *   EXPIRED_IN_7_DAYS
    // *   UNAVAILABLE
    // *   UPGRADING
    // *   CREATING
    std::shared_ptr<string> resourceStatus_ = nullptr;
    // The resource tags.
    std::shared_ptr<vector<Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsResourceTags>> resourceTags_ = nullptr;
    // The duration for which no session is connected. Unit: minutes. If no session is connected in the resources after the specified duration elapses, auto scale-in is triggered. Minimum value: 0.
    std::shared_ptr<int32_t> scalingDownAfterIdleMinutes_ = nullptr;
    // The number of sessions that are created each time the delivery group is scaled out. Minimum value: 1.
    std::shared_ptr<int32_t> scalingStep_ = nullptr;
    // The upper limit of session usage. If the session usage exceeds the specified upper limit, auto scale-out is triggered. The session usage rate is calculated by using the following formula: Session usage rate = Number of sessions in use/Total number of sessions × 100%. Valid values: 0 to 99.
    std::shared_ptr<string> scalingUsageThreshold_ = nullptr;
    // The duration for which sessions are retained after disconnection. Unit: minutes. After an end user disconnects from a session, the session is closed only after the specified duration elapses. If you want to permanently retain sessions, set this parameter to `-1`. Valid values:-1 and 3 to 300. Default value: `15`.
    std::shared_ptr<string> sessionTimeout_ = nullptr;
    // Indicates whether user permission verification is skipped.
    // 
    // Valid values:
    // 
    // *   true
    // *   false: This is the default value.
    std::shared_ptr<bool> skipUserAuthCheck_ = nullptr;
    // The specification ID that uniquely corresponds to the ID of the delivery group.
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
    std::shared_ptr<vector<Models::ListAppInstanceGroupResponseBodyAppInstanceGroupModelsTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
