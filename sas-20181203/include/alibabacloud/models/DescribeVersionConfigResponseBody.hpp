// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERSIONCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERSIONCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVersionConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVersionConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AgentlessCapacity, agentlessCapacity_);
      DARABONBA_PTR_TO_JSON(AllowPartialBuy, allowPartialBuy_);
      DARABONBA_PTR_TO_JSON(AntiRansomwareCapacity, antiRansomwareCapacity_);
      DARABONBA_PTR_TO_JSON(AntiRansomwareService, antiRansomwareService_);
      DARABONBA_PTR_TO_JSON(AppWhiteList, appWhiteList_);
      DARABONBA_PTR_TO_JSON(AppWhiteListAuthCount, appWhiteListAuthCount_);
      DARABONBA_PTR_TO_JSON(AssetLevel, assetLevel_);
      DARABONBA_PTR_TO_JSON(CspmCapacity, cspmCapacity_);
      DARABONBA_PTR_TO_JSON(HighestVersion, highestVersion_);
      DARABONBA_PTR_TO_JSON(HoneypotCapacity, honeypotCapacity_);
      DARABONBA_PTR_TO_JSON(ImageScanCapacity, imageScanCapacity_);
      DARABONBA_PTR_TO_JSON(InstanceBuyType, instanceBuyType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsNewContainerVersion, isNewContainerVersion_);
      DARABONBA_PTR_TO_JSON(IsNewMultiVersion, isNewMultiVersion_);
      DARABONBA_PTR_TO_JSON(IsOverBalance, isOverBalance_);
      DARABONBA_PTR_TO_JSON(IsPostpay, isPostpay_);
      DARABONBA_PTR_TO_JSON(IsTrialVersion, isTrialVersion_);
      DARABONBA_PTR_TO_JSON(LastTrailEndTime, lastTrailEndTime_);
      DARABONBA_PTR_TO_JSON(MVAuthCount, MVAuthCount_);
      DARABONBA_PTR_TO_JSON(MVUnusedAuthCount, MVUnusedAuthCount_);
      DARABONBA_PTR_TO_JSON(MergedVersion, mergedVersion_);
      DARABONBA_PTR_TO_JSON(MultiVersion, multiVersion_);
      DARABONBA_PTR_TO_JSON(NewThreatAnalysis, newThreatAnalysis_);
      DARABONBA_PTR_TO_JSON(OpenTime, openTime_);
      DARABONBA_PTR_TO_JSON(PostPayHostVersion, postPayHostVersion_);
      DARABONBA_PTR_TO_JSON(PostPayInstanceId, postPayInstanceId_);
      DARABONBA_PTR_TO_JSON(PostPayModuleSwitch, postPayModuleSwitch_);
      DARABONBA_PTR_TO_JSON(PostPayOpenTime, postPayOpenTime_);
      DARABONBA_PTR_TO_JSON(PostPayStatus, postPayStatus_);
      DARABONBA_PTR_TO_JSON(RaspCapacity, raspCapacity_);
      DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SasLog, sasLog_);
      DARABONBA_PTR_TO_JSON(SasScreen, sasScreen_);
      DARABONBA_PTR_TO_JSON(SdkCapacity, sdkCapacity_);
      DARABONBA_PTR_TO_JSON(SlsCapacity, slsCapacity_);
      DARABONBA_PTR_TO_JSON(ThreatAnalysisCapacity, threatAnalysisCapacity_);
      DARABONBA_PTR_TO_JSON(ThreatAnalysisFlow, threatAnalysisFlow_);
      DARABONBA_PTR_TO_JSON(UserDefinedAlarms, userDefinedAlarms_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VmCores, vmCores_);
      DARABONBA_PTR_TO_JSON(VulFixCapacity, vulFixCapacity_);
      DARABONBA_PTR_TO_JSON(WebLock, webLock_);
      DARABONBA_PTR_TO_JSON(WebLockAuthCount, webLockAuthCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVersionConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentlessCapacity, agentlessCapacity_);
      DARABONBA_PTR_FROM_JSON(AllowPartialBuy, allowPartialBuy_);
      DARABONBA_PTR_FROM_JSON(AntiRansomwareCapacity, antiRansomwareCapacity_);
      DARABONBA_PTR_FROM_JSON(AntiRansomwareService, antiRansomwareService_);
      DARABONBA_PTR_FROM_JSON(AppWhiteList, appWhiteList_);
      DARABONBA_PTR_FROM_JSON(AppWhiteListAuthCount, appWhiteListAuthCount_);
      DARABONBA_PTR_FROM_JSON(AssetLevel, assetLevel_);
      DARABONBA_PTR_FROM_JSON(CspmCapacity, cspmCapacity_);
      DARABONBA_PTR_FROM_JSON(HighestVersion, highestVersion_);
      DARABONBA_PTR_FROM_JSON(HoneypotCapacity, honeypotCapacity_);
      DARABONBA_PTR_FROM_JSON(ImageScanCapacity, imageScanCapacity_);
      DARABONBA_PTR_FROM_JSON(InstanceBuyType, instanceBuyType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsNewContainerVersion, isNewContainerVersion_);
      DARABONBA_PTR_FROM_JSON(IsNewMultiVersion, isNewMultiVersion_);
      DARABONBA_PTR_FROM_JSON(IsOverBalance, isOverBalance_);
      DARABONBA_PTR_FROM_JSON(IsPostpay, isPostpay_);
      DARABONBA_PTR_FROM_JSON(IsTrialVersion, isTrialVersion_);
      DARABONBA_PTR_FROM_JSON(LastTrailEndTime, lastTrailEndTime_);
      DARABONBA_PTR_FROM_JSON(MVAuthCount, MVAuthCount_);
      DARABONBA_PTR_FROM_JSON(MVUnusedAuthCount, MVUnusedAuthCount_);
      DARABONBA_PTR_FROM_JSON(MergedVersion, mergedVersion_);
      DARABONBA_PTR_FROM_JSON(MultiVersion, multiVersion_);
      DARABONBA_PTR_FROM_JSON(NewThreatAnalysis, newThreatAnalysis_);
      DARABONBA_PTR_FROM_JSON(OpenTime, openTime_);
      DARABONBA_PTR_FROM_JSON(PostPayHostVersion, postPayHostVersion_);
      DARABONBA_PTR_FROM_JSON(PostPayInstanceId, postPayInstanceId_);
      DARABONBA_PTR_FROM_JSON(PostPayModuleSwitch, postPayModuleSwitch_);
      DARABONBA_PTR_FROM_JSON(PostPayOpenTime, postPayOpenTime_);
      DARABONBA_PTR_FROM_JSON(PostPayStatus, postPayStatus_);
      DARABONBA_PTR_FROM_JSON(RaspCapacity, raspCapacity_);
      DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SasLog, sasLog_);
      DARABONBA_PTR_FROM_JSON(SasScreen, sasScreen_);
      DARABONBA_PTR_FROM_JSON(SdkCapacity, sdkCapacity_);
      DARABONBA_PTR_FROM_JSON(SlsCapacity, slsCapacity_);
      DARABONBA_PTR_FROM_JSON(ThreatAnalysisCapacity, threatAnalysisCapacity_);
      DARABONBA_PTR_FROM_JSON(ThreatAnalysisFlow, threatAnalysisFlow_);
      DARABONBA_PTR_FROM_JSON(UserDefinedAlarms, userDefinedAlarms_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VmCores, vmCores_);
      DARABONBA_PTR_FROM_JSON(VulFixCapacity, vulFixCapacity_);
      DARABONBA_PTR_FROM_JSON(WebLock, webLock_);
      DARABONBA_PTR_FROM_JSON(WebLockAuthCount, webLockAuthCount_);
    };
    DescribeVersionConfigResponseBody() = default ;
    DescribeVersionConfigResponseBody(const DescribeVersionConfigResponseBody &) = default ;
    DescribeVersionConfigResponseBody(DescribeVersionConfigResponseBody &&) = default ;
    DescribeVersionConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVersionConfigResponseBody() = default ;
    DescribeVersionConfigResponseBody& operator=(const DescribeVersionConfigResponseBody &) = default ;
    DescribeVersionConfigResponseBody& operator=(DescribeVersionConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentlessCapacity_ == nullptr
        && return this->allowPartialBuy_ == nullptr && return this->antiRansomwareCapacity_ == nullptr && return this->antiRansomwareService_ == nullptr && return this->appWhiteList_ == nullptr && return this->appWhiteListAuthCount_ == nullptr
        && return this->assetLevel_ == nullptr && return this->cspmCapacity_ == nullptr && return this->highestVersion_ == nullptr && return this->honeypotCapacity_ == nullptr && return this->imageScanCapacity_ == nullptr
        && return this->instanceBuyType_ == nullptr && return this->instanceId_ == nullptr && return this->isNewContainerVersion_ == nullptr && return this->isNewMultiVersion_ == nullptr && return this->isOverBalance_ == nullptr
        && return this->isPostpay_ == nullptr && return this->isTrialVersion_ == nullptr && return this->lastTrailEndTime_ == nullptr && return this->MVAuthCount_ == nullptr && return this->MVUnusedAuthCount_ == nullptr
        && return this->mergedVersion_ == nullptr && return this->multiVersion_ == nullptr && return this->newThreatAnalysis_ == nullptr && return this->openTime_ == nullptr && return this->postPayHostVersion_ == nullptr
        && return this->postPayInstanceId_ == nullptr && return this->postPayModuleSwitch_ == nullptr && return this->postPayOpenTime_ == nullptr && return this->postPayStatus_ == nullptr && return this->raspCapacity_ == nullptr
        && return this->releaseTime_ == nullptr && return this->requestId_ == nullptr && return this->sasLog_ == nullptr && return this->sasScreen_ == nullptr && return this->sdkCapacity_ == nullptr
        && return this->slsCapacity_ == nullptr && return this->threatAnalysisCapacity_ == nullptr && return this->threatAnalysisFlow_ == nullptr && return this->userDefinedAlarms_ == nullptr && return this->version_ == nullptr
        && return this->vmCores_ == nullptr && return this->vulFixCapacity_ == nullptr && return this->webLock_ == nullptr && return this->webLockAuthCount_ == nullptr; };
    // agentlessCapacity Field Functions 
    bool hasAgentlessCapacity() const { return this->agentlessCapacity_ != nullptr;};
    void deleteAgentlessCapacity() { this->agentlessCapacity_ = nullptr;};
    inline int64_t agentlessCapacity() const { DARABONBA_PTR_GET_DEFAULT(agentlessCapacity_, 0L) };
    inline DescribeVersionConfigResponseBody& setAgentlessCapacity(int64_t agentlessCapacity) { DARABONBA_PTR_SET_VALUE(agentlessCapacity_, agentlessCapacity) };


    // allowPartialBuy Field Functions 
    bool hasAllowPartialBuy() const { return this->allowPartialBuy_ != nullptr;};
    void deleteAllowPartialBuy() { this->allowPartialBuy_ = nullptr;};
    inline int32_t allowPartialBuy() const { DARABONBA_PTR_GET_DEFAULT(allowPartialBuy_, 0) };
    inline DescribeVersionConfigResponseBody& setAllowPartialBuy(int32_t allowPartialBuy) { DARABONBA_PTR_SET_VALUE(allowPartialBuy_, allowPartialBuy) };


    // antiRansomwareCapacity Field Functions 
    bool hasAntiRansomwareCapacity() const { return this->antiRansomwareCapacity_ != nullptr;};
    void deleteAntiRansomwareCapacity() { this->antiRansomwareCapacity_ = nullptr;};
    inline int32_t antiRansomwareCapacity() const { DARABONBA_PTR_GET_DEFAULT(antiRansomwareCapacity_, 0) };
    inline DescribeVersionConfigResponseBody& setAntiRansomwareCapacity(int32_t antiRansomwareCapacity) { DARABONBA_PTR_SET_VALUE(antiRansomwareCapacity_, antiRansomwareCapacity) };


    // antiRansomwareService Field Functions 
    bool hasAntiRansomwareService() const { return this->antiRansomwareService_ != nullptr;};
    void deleteAntiRansomwareService() { this->antiRansomwareService_ = nullptr;};
    inline int32_t antiRansomwareService() const { DARABONBA_PTR_GET_DEFAULT(antiRansomwareService_, 0) };
    inline DescribeVersionConfigResponseBody& setAntiRansomwareService(int32_t antiRansomwareService) { DARABONBA_PTR_SET_VALUE(antiRansomwareService_, antiRansomwareService) };


    // appWhiteList Field Functions 
    bool hasAppWhiteList() const { return this->appWhiteList_ != nullptr;};
    void deleteAppWhiteList() { this->appWhiteList_ = nullptr;};
    inline int32_t appWhiteList() const { DARABONBA_PTR_GET_DEFAULT(appWhiteList_, 0) };
    inline DescribeVersionConfigResponseBody& setAppWhiteList(int32_t appWhiteList) { DARABONBA_PTR_SET_VALUE(appWhiteList_, appWhiteList) };


    // appWhiteListAuthCount Field Functions 
    bool hasAppWhiteListAuthCount() const { return this->appWhiteListAuthCount_ != nullptr;};
    void deleteAppWhiteListAuthCount() { this->appWhiteListAuthCount_ = nullptr;};
    inline int64_t appWhiteListAuthCount() const { DARABONBA_PTR_GET_DEFAULT(appWhiteListAuthCount_, 0L) };
    inline DescribeVersionConfigResponseBody& setAppWhiteListAuthCount(int64_t appWhiteListAuthCount) { DARABONBA_PTR_SET_VALUE(appWhiteListAuthCount_, appWhiteListAuthCount) };


    // assetLevel Field Functions 
    bool hasAssetLevel() const { return this->assetLevel_ != nullptr;};
    void deleteAssetLevel() { this->assetLevel_ = nullptr;};
    inline int32_t assetLevel() const { DARABONBA_PTR_GET_DEFAULT(assetLevel_, 0) };
    inline DescribeVersionConfigResponseBody& setAssetLevel(int32_t assetLevel) { DARABONBA_PTR_SET_VALUE(assetLevel_, assetLevel) };


    // cspmCapacity Field Functions 
    bool hasCspmCapacity() const { return this->cspmCapacity_ != nullptr;};
    void deleteCspmCapacity() { this->cspmCapacity_ = nullptr;};
    inline int64_t cspmCapacity() const { DARABONBA_PTR_GET_DEFAULT(cspmCapacity_, 0L) };
    inline DescribeVersionConfigResponseBody& setCspmCapacity(int64_t cspmCapacity) { DARABONBA_PTR_SET_VALUE(cspmCapacity_, cspmCapacity) };


    // highestVersion Field Functions 
    bool hasHighestVersion() const { return this->highestVersion_ != nullptr;};
    void deleteHighestVersion() { this->highestVersion_ = nullptr;};
    inline int32_t highestVersion() const { DARABONBA_PTR_GET_DEFAULT(highestVersion_, 0) };
    inline DescribeVersionConfigResponseBody& setHighestVersion(int32_t highestVersion) { DARABONBA_PTR_SET_VALUE(highestVersion_, highestVersion) };


    // honeypotCapacity Field Functions 
    bool hasHoneypotCapacity() const { return this->honeypotCapacity_ != nullptr;};
    void deleteHoneypotCapacity() { this->honeypotCapacity_ = nullptr;};
    inline int64_t honeypotCapacity() const { DARABONBA_PTR_GET_DEFAULT(honeypotCapacity_, 0L) };
    inline DescribeVersionConfigResponseBody& setHoneypotCapacity(int64_t honeypotCapacity) { DARABONBA_PTR_SET_VALUE(honeypotCapacity_, honeypotCapacity) };


    // imageScanCapacity Field Functions 
    bool hasImageScanCapacity() const { return this->imageScanCapacity_ != nullptr;};
    void deleteImageScanCapacity() { this->imageScanCapacity_ = nullptr;};
    inline int64_t imageScanCapacity() const { DARABONBA_PTR_GET_DEFAULT(imageScanCapacity_, 0L) };
    inline DescribeVersionConfigResponseBody& setImageScanCapacity(int64_t imageScanCapacity) { DARABONBA_PTR_SET_VALUE(imageScanCapacity_, imageScanCapacity) };


    // instanceBuyType Field Functions 
    bool hasInstanceBuyType() const { return this->instanceBuyType_ != nullptr;};
    void deleteInstanceBuyType() { this->instanceBuyType_ = nullptr;};
    inline int32_t instanceBuyType() const { DARABONBA_PTR_GET_DEFAULT(instanceBuyType_, 0) };
    inline DescribeVersionConfigResponseBody& setInstanceBuyType(int32_t instanceBuyType) { DARABONBA_PTR_SET_VALUE(instanceBuyType_, instanceBuyType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeVersionConfigResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isNewContainerVersion Field Functions 
    bool hasIsNewContainerVersion() const { return this->isNewContainerVersion_ != nullptr;};
    void deleteIsNewContainerVersion() { this->isNewContainerVersion_ = nullptr;};
    inline bool isNewContainerVersion() const { DARABONBA_PTR_GET_DEFAULT(isNewContainerVersion_, false) };
    inline DescribeVersionConfigResponseBody& setIsNewContainerVersion(bool isNewContainerVersion) { DARABONBA_PTR_SET_VALUE(isNewContainerVersion_, isNewContainerVersion) };


    // isNewMultiVersion Field Functions 
    bool hasIsNewMultiVersion() const { return this->isNewMultiVersion_ != nullptr;};
    void deleteIsNewMultiVersion() { this->isNewMultiVersion_ = nullptr;};
    inline bool isNewMultiVersion() const { DARABONBA_PTR_GET_DEFAULT(isNewMultiVersion_, false) };
    inline DescribeVersionConfigResponseBody& setIsNewMultiVersion(bool isNewMultiVersion) { DARABONBA_PTR_SET_VALUE(isNewMultiVersion_, isNewMultiVersion) };


    // isOverBalance Field Functions 
    bool hasIsOverBalance() const { return this->isOverBalance_ != nullptr;};
    void deleteIsOverBalance() { this->isOverBalance_ = nullptr;};
    inline bool isOverBalance() const { DARABONBA_PTR_GET_DEFAULT(isOverBalance_, false) };
    inline DescribeVersionConfigResponseBody& setIsOverBalance(bool isOverBalance) { DARABONBA_PTR_SET_VALUE(isOverBalance_, isOverBalance) };


    // isPostpay Field Functions 
    bool hasIsPostpay() const { return this->isPostpay_ != nullptr;};
    void deleteIsPostpay() { this->isPostpay_ = nullptr;};
    inline bool isPostpay() const { DARABONBA_PTR_GET_DEFAULT(isPostpay_, false) };
    inline DescribeVersionConfigResponseBody& setIsPostpay(bool isPostpay) { DARABONBA_PTR_SET_VALUE(isPostpay_, isPostpay) };


    // isTrialVersion Field Functions 
    bool hasIsTrialVersion() const { return this->isTrialVersion_ != nullptr;};
    void deleteIsTrialVersion() { this->isTrialVersion_ = nullptr;};
    inline int32_t isTrialVersion() const { DARABONBA_PTR_GET_DEFAULT(isTrialVersion_, 0) };
    inline DescribeVersionConfigResponseBody& setIsTrialVersion(int32_t isTrialVersion) { DARABONBA_PTR_SET_VALUE(isTrialVersion_, isTrialVersion) };


    // lastTrailEndTime Field Functions 
    bool hasLastTrailEndTime() const { return this->lastTrailEndTime_ != nullptr;};
    void deleteLastTrailEndTime() { this->lastTrailEndTime_ = nullptr;};
    inline int64_t lastTrailEndTime() const { DARABONBA_PTR_GET_DEFAULT(lastTrailEndTime_, 0L) };
    inline DescribeVersionConfigResponseBody& setLastTrailEndTime(int64_t lastTrailEndTime) { DARABONBA_PTR_SET_VALUE(lastTrailEndTime_, lastTrailEndTime) };


    // MVAuthCount Field Functions 
    bool hasMVAuthCount() const { return this->MVAuthCount_ != nullptr;};
    void deleteMVAuthCount() { this->MVAuthCount_ = nullptr;};
    inline int32_t MVAuthCount() const { DARABONBA_PTR_GET_DEFAULT(MVAuthCount_, 0) };
    inline DescribeVersionConfigResponseBody& setMVAuthCount(int32_t MVAuthCount) { DARABONBA_PTR_SET_VALUE(MVAuthCount_, MVAuthCount) };


    // MVUnusedAuthCount Field Functions 
    bool hasMVUnusedAuthCount() const { return this->MVUnusedAuthCount_ != nullptr;};
    void deleteMVUnusedAuthCount() { this->MVUnusedAuthCount_ = nullptr;};
    inline int32_t MVUnusedAuthCount() const { DARABONBA_PTR_GET_DEFAULT(MVUnusedAuthCount_, 0) };
    inline DescribeVersionConfigResponseBody& setMVUnusedAuthCount(int32_t MVUnusedAuthCount) { DARABONBA_PTR_SET_VALUE(MVUnusedAuthCount_, MVUnusedAuthCount) };


    // mergedVersion Field Functions 
    bool hasMergedVersion() const { return this->mergedVersion_ != nullptr;};
    void deleteMergedVersion() { this->mergedVersion_ = nullptr;};
    inline int32_t mergedVersion() const { DARABONBA_PTR_GET_DEFAULT(mergedVersion_, 0) };
    inline DescribeVersionConfigResponseBody& setMergedVersion(int32_t mergedVersion) { DARABONBA_PTR_SET_VALUE(mergedVersion_, mergedVersion) };


    // multiVersion Field Functions 
    bool hasMultiVersion() const { return this->multiVersion_ != nullptr;};
    void deleteMultiVersion() { this->multiVersion_ = nullptr;};
    inline string multiVersion() const { DARABONBA_PTR_GET_DEFAULT(multiVersion_, "") };
    inline DescribeVersionConfigResponseBody& setMultiVersion(string multiVersion) { DARABONBA_PTR_SET_VALUE(multiVersion_, multiVersion) };


    // newThreatAnalysis Field Functions 
    bool hasNewThreatAnalysis() const { return this->newThreatAnalysis_ != nullptr;};
    void deleteNewThreatAnalysis() { this->newThreatAnalysis_ = nullptr;};
    inline int32_t newThreatAnalysis() const { DARABONBA_PTR_GET_DEFAULT(newThreatAnalysis_, 0) };
    inline DescribeVersionConfigResponseBody& setNewThreatAnalysis(int32_t newThreatAnalysis) { DARABONBA_PTR_SET_VALUE(newThreatAnalysis_, newThreatAnalysis) };


    // openTime Field Functions 
    bool hasOpenTime() const { return this->openTime_ != nullptr;};
    void deleteOpenTime() { this->openTime_ = nullptr;};
    inline int64_t openTime() const { DARABONBA_PTR_GET_DEFAULT(openTime_, 0L) };
    inline DescribeVersionConfigResponseBody& setOpenTime(int64_t openTime) { DARABONBA_PTR_SET_VALUE(openTime_, openTime) };


    // postPayHostVersion Field Functions 
    bool hasPostPayHostVersion() const { return this->postPayHostVersion_ != nullptr;};
    void deletePostPayHostVersion() { this->postPayHostVersion_ = nullptr;};
    inline int32_t postPayHostVersion() const { DARABONBA_PTR_GET_DEFAULT(postPayHostVersion_, 0) };
    inline DescribeVersionConfigResponseBody& setPostPayHostVersion(int32_t postPayHostVersion) { DARABONBA_PTR_SET_VALUE(postPayHostVersion_, postPayHostVersion) };


    // postPayInstanceId Field Functions 
    bool hasPostPayInstanceId() const { return this->postPayInstanceId_ != nullptr;};
    void deletePostPayInstanceId() { this->postPayInstanceId_ = nullptr;};
    inline string postPayInstanceId() const { DARABONBA_PTR_GET_DEFAULT(postPayInstanceId_, "") };
    inline DescribeVersionConfigResponseBody& setPostPayInstanceId(string postPayInstanceId) { DARABONBA_PTR_SET_VALUE(postPayInstanceId_, postPayInstanceId) };


    // postPayModuleSwitch Field Functions 
    bool hasPostPayModuleSwitch() const { return this->postPayModuleSwitch_ != nullptr;};
    void deletePostPayModuleSwitch() { this->postPayModuleSwitch_ = nullptr;};
    inline string postPayModuleSwitch() const { DARABONBA_PTR_GET_DEFAULT(postPayModuleSwitch_, "") };
    inline DescribeVersionConfigResponseBody& setPostPayModuleSwitch(string postPayModuleSwitch) { DARABONBA_PTR_SET_VALUE(postPayModuleSwitch_, postPayModuleSwitch) };


    // postPayOpenTime Field Functions 
    bool hasPostPayOpenTime() const { return this->postPayOpenTime_ != nullptr;};
    void deletePostPayOpenTime() { this->postPayOpenTime_ = nullptr;};
    inline int64_t postPayOpenTime() const { DARABONBA_PTR_GET_DEFAULT(postPayOpenTime_, 0L) };
    inline DescribeVersionConfigResponseBody& setPostPayOpenTime(int64_t postPayOpenTime) { DARABONBA_PTR_SET_VALUE(postPayOpenTime_, postPayOpenTime) };


    // postPayStatus Field Functions 
    bool hasPostPayStatus() const { return this->postPayStatus_ != nullptr;};
    void deletePostPayStatus() { this->postPayStatus_ = nullptr;};
    inline int32_t postPayStatus() const { DARABONBA_PTR_GET_DEFAULT(postPayStatus_, 0) };
    inline DescribeVersionConfigResponseBody& setPostPayStatus(int32_t postPayStatus) { DARABONBA_PTR_SET_VALUE(postPayStatus_, postPayStatus) };


    // raspCapacity Field Functions 
    bool hasRaspCapacity() const { return this->raspCapacity_ != nullptr;};
    void deleteRaspCapacity() { this->raspCapacity_ = nullptr;};
    inline int64_t raspCapacity() const { DARABONBA_PTR_GET_DEFAULT(raspCapacity_, 0L) };
    inline DescribeVersionConfigResponseBody& setRaspCapacity(int64_t raspCapacity) { DARABONBA_PTR_SET_VALUE(raspCapacity_, raspCapacity) };


    // releaseTime Field Functions 
    bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
    void deleteReleaseTime() { this->releaseTime_ = nullptr;};
    inline int64_t releaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, 0L) };
    inline DescribeVersionConfigResponseBody& setReleaseTime(int64_t releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVersionConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sasLog Field Functions 
    bool hasSasLog() const { return this->sasLog_ != nullptr;};
    void deleteSasLog() { this->sasLog_ = nullptr;};
    inline int32_t sasLog() const { DARABONBA_PTR_GET_DEFAULT(sasLog_, 0) };
    inline DescribeVersionConfigResponseBody& setSasLog(int32_t sasLog) { DARABONBA_PTR_SET_VALUE(sasLog_, sasLog) };


    // sasScreen Field Functions 
    bool hasSasScreen() const { return this->sasScreen_ != nullptr;};
    void deleteSasScreen() { this->sasScreen_ = nullptr;};
    inline int32_t sasScreen() const { DARABONBA_PTR_GET_DEFAULT(sasScreen_, 0) };
    inline DescribeVersionConfigResponseBody& setSasScreen(int32_t sasScreen) { DARABONBA_PTR_SET_VALUE(sasScreen_, sasScreen) };


    // sdkCapacity Field Functions 
    bool hasSdkCapacity() const { return this->sdkCapacity_ != nullptr;};
    void deleteSdkCapacity() { this->sdkCapacity_ = nullptr;};
    inline int64_t sdkCapacity() const { DARABONBA_PTR_GET_DEFAULT(sdkCapacity_, 0L) };
    inline DescribeVersionConfigResponseBody& setSdkCapacity(int64_t sdkCapacity) { DARABONBA_PTR_SET_VALUE(sdkCapacity_, sdkCapacity) };


    // slsCapacity Field Functions 
    bool hasSlsCapacity() const { return this->slsCapacity_ != nullptr;};
    void deleteSlsCapacity() { this->slsCapacity_ = nullptr;};
    inline int64_t slsCapacity() const { DARABONBA_PTR_GET_DEFAULT(slsCapacity_, 0L) };
    inline DescribeVersionConfigResponseBody& setSlsCapacity(int64_t slsCapacity) { DARABONBA_PTR_SET_VALUE(slsCapacity_, slsCapacity) };


    // threatAnalysisCapacity Field Functions 
    bool hasThreatAnalysisCapacity() const { return this->threatAnalysisCapacity_ != nullptr;};
    void deleteThreatAnalysisCapacity() { this->threatAnalysisCapacity_ = nullptr;};
    inline int64_t threatAnalysisCapacity() const { DARABONBA_PTR_GET_DEFAULT(threatAnalysisCapacity_, 0L) };
    inline DescribeVersionConfigResponseBody& setThreatAnalysisCapacity(int64_t threatAnalysisCapacity) { DARABONBA_PTR_SET_VALUE(threatAnalysisCapacity_, threatAnalysisCapacity) };


    // threatAnalysisFlow Field Functions 
    bool hasThreatAnalysisFlow() const { return this->threatAnalysisFlow_ != nullptr;};
    void deleteThreatAnalysisFlow() { this->threatAnalysisFlow_ = nullptr;};
    inline int32_t threatAnalysisFlow() const { DARABONBA_PTR_GET_DEFAULT(threatAnalysisFlow_, 0) };
    inline DescribeVersionConfigResponseBody& setThreatAnalysisFlow(int32_t threatAnalysisFlow) { DARABONBA_PTR_SET_VALUE(threatAnalysisFlow_, threatAnalysisFlow) };


    // userDefinedAlarms Field Functions 
    bool hasUserDefinedAlarms() const { return this->userDefinedAlarms_ != nullptr;};
    void deleteUserDefinedAlarms() { this->userDefinedAlarms_ = nullptr;};
    inline int32_t userDefinedAlarms() const { DARABONBA_PTR_GET_DEFAULT(userDefinedAlarms_, 0) };
    inline DescribeVersionConfigResponseBody& setUserDefinedAlarms(int32_t userDefinedAlarms) { DARABONBA_PTR_SET_VALUE(userDefinedAlarms_, userDefinedAlarms) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline DescribeVersionConfigResponseBody& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // vmCores Field Functions 
    bool hasVmCores() const { return this->vmCores_ != nullptr;};
    void deleteVmCores() { this->vmCores_ = nullptr;};
    inline int32_t vmCores() const { DARABONBA_PTR_GET_DEFAULT(vmCores_, 0) };
    inline DescribeVersionConfigResponseBody& setVmCores(int32_t vmCores) { DARABONBA_PTR_SET_VALUE(vmCores_, vmCores) };


    // vulFixCapacity Field Functions 
    bool hasVulFixCapacity() const { return this->vulFixCapacity_ != nullptr;};
    void deleteVulFixCapacity() { this->vulFixCapacity_ = nullptr;};
    inline int64_t vulFixCapacity() const { DARABONBA_PTR_GET_DEFAULT(vulFixCapacity_, 0L) };
    inline DescribeVersionConfigResponseBody& setVulFixCapacity(int64_t vulFixCapacity) { DARABONBA_PTR_SET_VALUE(vulFixCapacity_, vulFixCapacity) };


    // webLock Field Functions 
    bool hasWebLock() const { return this->webLock_ != nullptr;};
    void deleteWebLock() { this->webLock_ = nullptr;};
    inline int32_t webLock() const { DARABONBA_PTR_GET_DEFAULT(webLock_, 0) };
    inline DescribeVersionConfigResponseBody& setWebLock(int32_t webLock) { DARABONBA_PTR_SET_VALUE(webLock_, webLock) };


    // webLockAuthCount Field Functions 
    bool hasWebLockAuthCount() const { return this->webLockAuthCount_ != nullptr;};
    void deleteWebLockAuthCount() { this->webLockAuthCount_ = nullptr;};
    inline int64_t webLockAuthCount() const { DARABONBA_PTR_GET_DEFAULT(webLockAuthCount_, 0L) };
    inline DescribeVersionConfigResponseBody& setWebLockAuthCount(int64_t webLockAuthCount) { DARABONBA_PTR_SET_VALUE(webLockAuthCount_, webLockAuthCount) };


  protected:
    // The quota for agentless detection.
    // 
    // >  The agentless detection feature is unavailable for purchase. You can ignore this parameter.
    std::shared_ptr<int64_t> agentlessCapacity_ = nullptr;
    // Indicates whether the pay-as-you-go billing method is supported.
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<int32_t> allowPartialBuy_ = nullptr;
    std::shared_ptr<int32_t> antiRansomwareCapacity_ = nullptr;
    // Switch of anti-ransomware hosting service. Valid values:
    // 
    // *   **0**: off
    // *   **1**: on
    std::shared_ptr<int32_t> antiRansomwareService_ = nullptr;
    // Indicates whether the application whitelist feature is enabled. Valid values:
    // 
    // *   **0**: no
    // *   **2**: yes
    std::shared_ptr<int32_t> appWhiteList_ = nullptr;
    // The quota for the application whitelist feature.
    // 
    // >  The quantity of servers that are allowed by the quota is deducted by one each time you apply an application whitelist to a server. After you enable the application whitelist feature, the quota is 20 by default.
    std::shared_ptr<int64_t> appWhiteListAuthCount_ = nullptr;
    // The quota for servers that can be protected.
    std::shared_ptr<int32_t> assetLevel_ = nullptr;
    // The purchased quota for configuration assessment. Unit: times/month.
    std::shared_ptr<int64_t> cspmCapacity_ = nullptr;
    // The most advanced edition that is used. Valid values:
    // 
    // *   **1**: Basic edition
    // *   **3**: Enterprise edition
    // *   **5**: Advanced edition
    // *   **6**: Anti-virus edition
    // *   **7**: Ultimate edition
    // *   **10**: Value-added Plan edition
    // 
    // >  If you purchase the Multi-version edition of Security Center, the value indicates the most advanced edition that is used in the Multi-version edition. If you do not purchase the Multi-version edition of Security Center, the value indicates the edition of Security Center.
    std::shared_ptr<int32_t> highestVersion_ = nullptr;
    // The purchased quota for the cloud honeypot feature.
    std::shared_ptr<int64_t> honeypotCapacity_ = nullptr;
    // The purchased quota for the container image scan feature.
    std::shared_ptr<int64_t> imageScanCapacity_ = nullptr;
    std::shared_ptr<int32_t> instanceBuyType_ = nullptr;
    // The ID of purchased Security Center.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Indicates whether Security Center runs the latest version of the Ultimate edition.
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> isNewContainerVersion_ = nullptr;
    // Indicates whether Security Center runs the latest version of the Multi-version edition. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isNewMultiVersion_ = nullptr;
    // Indicates whether the number of existing servers exceeds the purchased quota. Valid values:
    // 
    // *   **false**: no
    // *   **true**: yes
    // >Notice: This parameter is deprecated. You can ignore it.
    std::shared_ptr<bool> isOverBalance_ = nullptr;
    // Indicates whether the pay-as-you-go billing method is used. Valid values:
    // 
    // *   **false**
    // *   **true**
    std::shared_ptr<bool> isPostpay_ = nullptr;
    // Indicates whether Security Center runs the free trial edition. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<int32_t> isTrialVersion_ = nullptr;
    // The timestamp when the last trial of Security Center ends. Unit: milliseconds.
    std::shared_ptr<int64_t> lastTrailEndTime_ = nullptr;
    // The total quota in the Multi-version edition of purchased Security Center.
    std::shared_ptr<int32_t> MVAuthCount_ = nullptr;
    // The total remaining quota in the Multi-version edition of purchased Security Center.
    std::shared_ptr<int32_t> MVUnusedAuthCount_ = nullptr;
    // When both the annual/monthly and pay-as-you-go services of Cloud Security Center\\"s host and container security are activated, the higher protection version among the two is selected. Values: - **1**: Free Edition - **6**: Anti-Virus Edition - **5**: Advanced Edition - **3**: Enterprise Edition - **7**: Ultimate Edition
    std::shared_ptr<int32_t> mergedVersion_ = nullptr;
    std::shared_ptr<string> multiVersion_ = nullptr;
    // Indicates whether the new version of the threat analysis and response feature is enabled. With the new version, you can purchase the amount of log data that you want to add to the feature and log storage capacity. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<int32_t> newThreatAnalysis_ = nullptr;
    // The timestamp when Security Center is purchased. Unit: milliseconds.
    std::shared_ptr<int64_t> openTime_ = nullptr;
    // When activating the pay-as-you-go service for host and container security, this represents the highest protection version for the already bound assets. The values are as follows: - **1**: Free Edition - **3**: Enterprise Edition - **5**: Advanced Edition - **6**: Anti-Virus Edition - **7**: Flagship Edition
    std::shared_ptr<int32_t> postPayHostVersion_ = nullptr;
    // The instance ID of Security Center that uses the pay-as-you-go billing method.
    std::shared_ptr<string> postPayInstanceId_ = nullptr;
    // The configuration of the pay-as-you-go module. Valid values:
    // 
    // *   **VUL**: vulnerability fixing module
    std::shared_ptr<string> postPayModuleSwitch_ = nullptr;
    // The creation time of Security Center that uses the pay-as-you-go billing method.
    std::shared_ptr<int64_t> postPayOpenTime_ = nullptr;
    // The status of Security Center that uses the pay-as-you-go billing method. Valid values:
    // 
    // *   **1**: The instance runs as expected.
    // *   **2**: The instance is stopped due to overdue payments.
    std::shared_ptr<int32_t> postPayStatus_ = nullptr;
    // The purchased quota for application protection. Unit: process/month.
    std::shared_ptr<int64_t> raspCapacity_ = nullptr;
    // The timestamp when the Security Center subscription ends. Unit: milliseconds.
    // 
    // >  If you do not renew the subscription within seven days after the expiration date, Security Center of a paid edition is automatically downgraded to Security Center Basic. In this case, you can no longer use the features of the paid edition or view the existing configurations or statistics such as DDoS alerts in Security Center. You must purchase Security Center of a paid edition to use relevant features. For more information, see [Purchase Security Center](https://help.aliyun.com/document_detail/42308.html).
    std::shared_ptr<int64_t> releaseTime_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether log analysis is purchased. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<int32_t> sasLog_ = nullptr;
    // Indicates whether the security screen feature is purchased. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<int32_t> sasScreen_ = nullptr;
    // The purchased quota for malicious file detection SDK. Unit: process/month.
    std::shared_ptr<int64_t> sdkCapacity_ = nullptr;
    // The log storage capacity that you purchase. Unit: GB. Valid values: 0 to 200000.
    std::shared_ptr<int64_t> slsCapacity_ = nullptr;
    // The purchased log storage capacity for threat analysis. Unit: GB.
    std::shared_ptr<int64_t> threatAnalysisCapacity_ = nullptr;
    // The amount of log data that you purchase for the threat analysis and response feature. Unit: GB-day.
    std::shared_ptr<int32_t> threatAnalysisFlow_ = nullptr;
    // Indicates whether the custom alert feature is enabled. Valid values:
    // 
    // *   **0**: no
    // *   **2**: yes
    std::shared_ptr<int32_t> userDefinedAlarms_ = nullptr;
    // The edition of purchased Security Center. Valid values:
    // 
    // *   **1**: Basic edition
    // *   **3**: Enterprise edition
    // *   **5**: Advanced edition
    // *   **6**: Anti-virus edition
    // *   **7**: Ultimate edition
    // *   **8**: Multi-version edition
    // *   **10**: Value-added Plan edition
    std::shared_ptr<int32_t> version_ = nullptr;
    // The quota for the cores of servers that can be protected.
    std::shared_ptr<int32_t> vmCores_ = nullptr;
    // The purchased quota for vulnerability fixing. Unit: times/month.
    std::shared_ptr<int64_t> vulFixCapacity_ = nullptr;
    // Indicates whether the web tamper proofing feature is enabled. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<int32_t> webLock_ = nullptr;
    // The quota for the web tamper proofing feature. The quantity of servers that are allowed by the quota is deducted by one each time a server is protected by the web tamper proofing feature. Valid values: 0 to N.
    // 
    // >  N indicates the number of servers that you own.
    std::shared_ptr<int64_t> webLockAuthCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
