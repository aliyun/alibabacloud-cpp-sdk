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
      DARABONBA_PTR_TO_JSON(CanTryPostPaidPackage, canTryPostPaidPackage_);
      DARABONBA_PTR_TO_JSON(CspmCapacity, cspmCapacity_);
      DARABONBA_PTR_TO_JSON(HighestVersion, highestVersion_);
      DARABONBA_PTR_TO_JSON(HoneypotCapacity, honeypotCapacity_);
      DARABONBA_PTR_TO_JSON(ImageScanCapacity, imageScanCapacity_);
      DARABONBA_PTR_TO_JSON(InstanceBuyType, instanceBuyType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntelligentAnalysisFlow, intelligentAnalysisFlow_);
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
      DARABONBA_PTR_TO_JSON(OnboardedAssets, onboardedAssets_);
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
      DARABONBA_PTR_FROM_JSON(CanTryPostPaidPackage, canTryPostPaidPackage_);
      DARABONBA_PTR_FROM_JSON(CspmCapacity, cspmCapacity_);
      DARABONBA_PTR_FROM_JSON(HighestVersion, highestVersion_);
      DARABONBA_PTR_FROM_JSON(HoneypotCapacity, honeypotCapacity_);
      DARABONBA_PTR_FROM_JSON(ImageScanCapacity, imageScanCapacity_);
      DARABONBA_PTR_FROM_JSON(InstanceBuyType, instanceBuyType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntelligentAnalysisFlow, intelligentAnalysisFlow_);
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
      DARABONBA_PTR_FROM_JSON(OnboardedAssets, onboardedAssets_);
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
        && this->allowPartialBuy_ == nullptr && this->antiRansomwareCapacity_ == nullptr && this->antiRansomwareService_ == nullptr && this->appWhiteList_ == nullptr && this->appWhiteListAuthCount_ == nullptr
        && this->assetLevel_ == nullptr && this->canTryPostPaidPackage_ == nullptr && this->cspmCapacity_ == nullptr && this->highestVersion_ == nullptr && this->honeypotCapacity_ == nullptr
        && this->imageScanCapacity_ == nullptr && this->instanceBuyType_ == nullptr && this->instanceId_ == nullptr && this->intelligentAnalysisFlow_ == nullptr && this->isNewContainerVersion_ == nullptr
        && this->isNewMultiVersion_ == nullptr && this->isOverBalance_ == nullptr && this->isPostpay_ == nullptr && this->isTrialVersion_ == nullptr && this->lastTrailEndTime_ == nullptr
        && this->MVAuthCount_ == nullptr && this->MVUnusedAuthCount_ == nullptr && this->mergedVersion_ == nullptr && this->multiVersion_ == nullptr && this->newThreatAnalysis_ == nullptr
        && this->onboardedAssets_ == nullptr && this->openTime_ == nullptr && this->postPayHostVersion_ == nullptr && this->postPayInstanceId_ == nullptr && this->postPayModuleSwitch_ == nullptr
        && this->postPayOpenTime_ == nullptr && this->postPayStatus_ == nullptr && this->raspCapacity_ == nullptr && this->releaseTime_ == nullptr && this->requestId_ == nullptr
        && this->sasLog_ == nullptr && this->sasScreen_ == nullptr && this->sdkCapacity_ == nullptr && this->slsCapacity_ == nullptr && this->threatAnalysisCapacity_ == nullptr
        && this->threatAnalysisFlow_ == nullptr && this->userDefinedAlarms_ == nullptr && this->version_ == nullptr && this->vmCores_ == nullptr && this->vulFixCapacity_ == nullptr
        && this->webLock_ == nullptr && this->webLockAuthCount_ == nullptr; };
    // agentlessCapacity Field Functions 
    bool hasAgentlessCapacity() const { return this->agentlessCapacity_ != nullptr;};
    void deleteAgentlessCapacity() { this->agentlessCapacity_ = nullptr;};
    inline int64_t getAgentlessCapacity() const { DARABONBA_PTR_GET_DEFAULT(agentlessCapacity_, 0L) };
    inline DescribeVersionConfigResponseBody& setAgentlessCapacity(int64_t agentlessCapacity) { DARABONBA_PTR_SET_VALUE(agentlessCapacity_, agentlessCapacity) };


    // allowPartialBuy Field Functions 
    bool hasAllowPartialBuy() const { return this->allowPartialBuy_ != nullptr;};
    void deleteAllowPartialBuy() { this->allowPartialBuy_ = nullptr;};
    inline int32_t getAllowPartialBuy() const { DARABONBA_PTR_GET_DEFAULT(allowPartialBuy_, 0) };
    inline DescribeVersionConfigResponseBody& setAllowPartialBuy(int32_t allowPartialBuy) { DARABONBA_PTR_SET_VALUE(allowPartialBuy_, allowPartialBuy) };


    // antiRansomwareCapacity Field Functions 
    bool hasAntiRansomwareCapacity() const { return this->antiRansomwareCapacity_ != nullptr;};
    void deleteAntiRansomwareCapacity() { this->antiRansomwareCapacity_ = nullptr;};
    inline int32_t getAntiRansomwareCapacity() const { DARABONBA_PTR_GET_DEFAULT(antiRansomwareCapacity_, 0) };
    inline DescribeVersionConfigResponseBody& setAntiRansomwareCapacity(int32_t antiRansomwareCapacity) { DARABONBA_PTR_SET_VALUE(antiRansomwareCapacity_, antiRansomwareCapacity) };


    // antiRansomwareService Field Functions 
    bool hasAntiRansomwareService() const { return this->antiRansomwareService_ != nullptr;};
    void deleteAntiRansomwareService() { this->antiRansomwareService_ = nullptr;};
    inline int32_t getAntiRansomwareService() const { DARABONBA_PTR_GET_DEFAULT(antiRansomwareService_, 0) };
    inline DescribeVersionConfigResponseBody& setAntiRansomwareService(int32_t antiRansomwareService) { DARABONBA_PTR_SET_VALUE(antiRansomwareService_, antiRansomwareService) };


    // appWhiteList Field Functions 
    bool hasAppWhiteList() const { return this->appWhiteList_ != nullptr;};
    void deleteAppWhiteList() { this->appWhiteList_ = nullptr;};
    inline int32_t getAppWhiteList() const { DARABONBA_PTR_GET_DEFAULT(appWhiteList_, 0) };
    inline DescribeVersionConfigResponseBody& setAppWhiteList(int32_t appWhiteList) { DARABONBA_PTR_SET_VALUE(appWhiteList_, appWhiteList) };


    // appWhiteListAuthCount Field Functions 
    bool hasAppWhiteListAuthCount() const { return this->appWhiteListAuthCount_ != nullptr;};
    void deleteAppWhiteListAuthCount() { this->appWhiteListAuthCount_ = nullptr;};
    inline int64_t getAppWhiteListAuthCount() const { DARABONBA_PTR_GET_DEFAULT(appWhiteListAuthCount_, 0L) };
    inline DescribeVersionConfigResponseBody& setAppWhiteListAuthCount(int64_t appWhiteListAuthCount) { DARABONBA_PTR_SET_VALUE(appWhiteListAuthCount_, appWhiteListAuthCount) };


    // assetLevel Field Functions 
    bool hasAssetLevel() const { return this->assetLevel_ != nullptr;};
    void deleteAssetLevel() { this->assetLevel_ = nullptr;};
    inline int32_t getAssetLevel() const { DARABONBA_PTR_GET_DEFAULT(assetLevel_, 0) };
    inline DescribeVersionConfigResponseBody& setAssetLevel(int32_t assetLevel) { DARABONBA_PTR_SET_VALUE(assetLevel_, assetLevel) };


    // canTryPostPaidPackage Field Functions 
    bool hasCanTryPostPaidPackage() const { return this->canTryPostPaidPackage_ != nullptr;};
    void deleteCanTryPostPaidPackage() { this->canTryPostPaidPackage_ = nullptr;};
    inline int32_t getCanTryPostPaidPackage() const { DARABONBA_PTR_GET_DEFAULT(canTryPostPaidPackage_, 0) };
    inline DescribeVersionConfigResponseBody& setCanTryPostPaidPackage(int32_t canTryPostPaidPackage) { DARABONBA_PTR_SET_VALUE(canTryPostPaidPackage_, canTryPostPaidPackage) };


    // cspmCapacity Field Functions 
    bool hasCspmCapacity() const { return this->cspmCapacity_ != nullptr;};
    void deleteCspmCapacity() { this->cspmCapacity_ = nullptr;};
    inline int64_t getCspmCapacity() const { DARABONBA_PTR_GET_DEFAULT(cspmCapacity_, 0L) };
    inline DescribeVersionConfigResponseBody& setCspmCapacity(int64_t cspmCapacity) { DARABONBA_PTR_SET_VALUE(cspmCapacity_, cspmCapacity) };


    // highestVersion Field Functions 
    bool hasHighestVersion() const { return this->highestVersion_ != nullptr;};
    void deleteHighestVersion() { this->highestVersion_ = nullptr;};
    inline int32_t getHighestVersion() const { DARABONBA_PTR_GET_DEFAULT(highestVersion_, 0) };
    inline DescribeVersionConfigResponseBody& setHighestVersion(int32_t highestVersion) { DARABONBA_PTR_SET_VALUE(highestVersion_, highestVersion) };


    // honeypotCapacity Field Functions 
    bool hasHoneypotCapacity() const { return this->honeypotCapacity_ != nullptr;};
    void deleteHoneypotCapacity() { this->honeypotCapacity_ = nullptr;};
    inline int64_t getHoneypotCapacity() const { DARABONBA_PTR_GET_DEFAULT(honeypotCapacity_, 0L) };
    inline DescribeVersionConfigResponseBody& setHoneypotCapacity(int64_t honeypotCapacity) { DARABONBA_PTR_SET_VALUE(honeypotCapacity_, honeypotCapacity) };


    // imageScanCapacity Field Functions 
    bool hasImageScanCapacity() const { return this->imageScanCapacity_ != nullptr;};
    void deleteImageScanCapacity() { this->imageScanCapacity_ = nullptr;};
    inline int64_t getImageScanCapacity() const { DARABONBA_PTR_GET_DEFAULT(imageScanCapacity_, 0L) };
    inline DescribeVersionConfigResponseBody& setImageScanCapacity(int64_t imageScanCapacity) { DARABONBA_PTR_SET_VALUE(imageScanCapacity_, imageScanCapacity) };


    // instanceBuyType Field Functions 
    bool hasInstanceBuyType() const { return this->instanceBuyType_ != nullptr;};
    void deleteInstanceBuyType() { this->instanceBuyType_ = nullptr;};
    inline int32_t getInstanceBuyType() const { DARABONBA_PTR_GET_DEFAULT(instanceBuyType_, 0) };
    inline DescribeVersionConfigResponseBody& setInstanceBuyType(int32_t instanceBuyType) { DARABONBA_PTR_SET_VALUE(instanceBuyType_, instanceBuyType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeVersionConfigResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intelligentAnalysisFlow Field Functions 
    bool hasIntelligentAnalysisFlow() const { return this->intelligentAnalysisFlow_ != nullptr;};
    void deleteIntelligentAnalysisFlow() { this->intelligentAnalysisFlow_ = nullptr;};
    inline int32_t getIntelligentAnalysisFlow() const { DARABONBA_PTR_GET_DEFAULT(intelligentAnalysisFlow_, 0) };
    inline DescribeVersionConfigResponseBody& setIntelligentAnalysisFlow(int32_t intelligentAnalysisFlow) { DARABONBA_PTR_SET_VALUE(intelligentAnalysisFlow_, intelligentAnalysisFlow) };


    // isNewContainerVersion Field Functions 
    bool hasIsNewContainerVersion() const { return this->isNewContainerVersion_ != nullptr;};
    void deleteIsNewContainerVersion() { this->isNewContainerVersion_ = nullptr;};
    inline bool getIsNewContainerVersion() const { DARABONBA_PTR_GET_DEFAULT(isNewContainerVersion_, false) };
    inline DescribeVersionConfigResponseBody& setIsNewContainerVersion(bool isNewContainerVersion) { DARABONBA_PTR_SET_VALUE(isNewContainerVersion_, isNewContainerVersion) };


    // isNewMultiVersion Field Functions 
    bool hasIsNewMultiVersion() const { return this->isNewMultiVersion_ != nullptr;};
    void deleteIsNewMultiVersion() { this->isNewMultiVersion_ = nullptr;};
    inline bool getIsNewMultiVersion() const { DARABONBA_PTR_GET_DEFAULT(isNewMultiVersion_, false) };
    inline DescribeVersionConfigResponseBody& setIsNewMultiVersion(bool isNewMultiVersion) { DARABONBA_PTR_SET_VALUE(isNewMultiVersion_, isNewMultiVersion) };


    // isOverBalance Field Functions 
    bool hasIsOverBalance() const { return this->isOverBalance_ != nullptr;};
    void deleteIsOverBalance() { this->isOverBalance_ = nullptr;};
    inline bool getIsOverBalance() const { DARABONBA_PTR_GET_DEFAULT(isOverBalance_, false) };
    inline DescribeVersionConfigResponseBody& setIsOverBalance(bool isOverBalance) { DARABONBA_PTR_SET_VALUE(isOverBalance_, isOverBalance) };


    // isPostpay Field Functions 
    bool hasIsPostpay() const { return this->isPostpay_ != nullptr;};
    void deleteIsPostpay() { this->isPostpay_ = nullptr;};
    inline bool getIsPostpay() const { DARABONBA_PTR_GET_DEFAULT(isPostpay_, false) };
    inline DescribeVersionConfigResponseBody& setIsPostpay(bool isPostpay) { DARABONBA_PTR_SET_VALUE(isPostpay_, isPostpay) };


    // isTrialVersion Field Functions 
    bool hasIsTrialVersion() const { return this->isTrialVersion_ != nullptr;};
    void deleteIsTrialVersion() { this->isTrialVersion_ = nullptr;};
    inline int32_t getIsTrialVersion() const { DARABONBA_PTR_GET_DEFAULT(isTrialVersion_, 0) };
    inline DescribeVersionConfigResponseBody& setIsTrialVersion(int32_t isTrialVersion) { DARABONBA_PTR_SET_VALUE(isTrialVersion_, isTrialVersion) };


    // lastTrailEndTime Field Functions 
    bool hasLastTrailEndTime() const { return this->lastTrailEndTime_ != nullptr;};
    void deleteLastTrailEndTime() { this->lastTrailEndTime_ = nullptr;};
    inline int64_t getLastTrailEndTime() const { DARABONBA_PTR_GET_DEFAULT(lastTrailEndTime_, 0L) };
    inline DescribeVersionConfigResponseBody& setLastTrailEndTime(int64_t lastTrailEndTime) { DARABONBA_PTR_SET_VALUE(lastTrailEndTime_, lastTrailEndTime) };


    // MVAuthCount Field Functions 
    bool hasMVAuthCount() const { return this->MVAuthCount_ != nullptr;};
    void deleteMVAuthCount() { this->MVAuthCount_ = nullptr;};
    inline int32_t getMVAuthCount() const { DARABONBA_PTR_GET_DEFAULT(MVAuthCount_, 0) };
    inline DescribeVersionConfigResponseBody& setMVAuthCount(int32_t MVAuthCount) { DARABONBA_PTR_SET_VALUE(MVAuthCount_, MVAuthCount) };


    // MVUnusedAuthCount Field Functions 
    bool hasMVUnusedAuthCount() const { return this->MVUnusedAuthCount_ != nullptr;};
    void deleteMVUnusedAuthCount() { this->MVUnusedAuthCount_ = nullptr;};
    inline int32_t getMVUnusedAuthCount() const { DARABONBA_PTR_GET_DEFAULT(MVUnusedAuthCount_, 0) };
    inline DescribeVersionConfigResponseBody& setMVUnusedAuthCount(int32_t MVUnusedAuthCount) { DARABONBA_PTR_SET_VALUE(MVUnusedAuthCount_, MVUnusedAuthCount) };


    // mergedVersion Field Functions 
    bool hasMergedVersion() const { return this->mergedVersion_ != nullptr;};
    void deleteMergedVersion() { this->mergedVersion_ = nullptr;};
    inline int32_t getMergedVersion() const { DARABONBA_PTR_GET_DEFAULT(mergedVersion_, 0) };
    inline DescribeVersionConfigResponseBody& setMergedVersion(int32_t mergedVersion) { DARABONBA_PTR_SET_VALUE(mergedVersion_, mergedVersion) };


    // multiVersion Field Functions 
    bool hasMultiVersion() const { return this->multiVersion_ != nullptr;};
    void deleteMultiVersion() { this->multiVersion_ = nullptr;};
    inline string getMultiVersion() const { DARABONBA_PTR_GET_DEFAULT(multiVersion_, "") };
    inline DescribeVersionConfigResponseBody& setMultiVersion(string multiVersion) { DARABONBA_PTR_SET_VALUE(multiVersion_, multiVersion) };


    // newThreatAnalysis Field Functions 
    bool hasNewThreatAnalysis() const { return this->newThreatAnalysis_ != nullptr;};
    void deleteNewThreatAnalysis() { this->newThreatAnalysis_ = nullptr;};
    inline int32_t getNewThreatAnalysis() const { DARABONBA_PTR_GET_DEFAULT(newThreatAnalysis_, 0) };
    inline DescribeVersionConfigResponseBody& setNewThreatAnalysis(int32_t newThreatAnalysis) { DARABONBA_PTR_SET_VALUE(newThreatAnalysis_, newThreatAnalysis) };


    // onboardedAssets Field Functions 
    bool hasOnboardedAssets() const { return this->onboardedAssets_ != nullptr;};
    void deleteOnboardedAssets() { this->onboardedAssets_ = nullptr;};
    inline int32_t getOnboardedAssets() const { DARABONBA_PTR_GET_DEFAULT(onboardedAssets_, 0) };
    inline DescribeVersionConfigResponseBody& setOnboardedAssets(int32_t onboardedAssets) { DARABONBA_PTR_SET_VALUE(onboardedAssets_, onboardedAssets) };


    // openTime Field Functions 
    bool hasOpenTime() const { return this->openTime_ != nullptr;};
    void deleteOpenTime() { this->openTime_ = nullptr;};
    inline int64_t getOpenTime() const { DARABONBA_PTR_GET_DEFAULT(openTime_, 0L) };
    inline DescribeVersionConfigResponseBody& setOpenTime(int64_t openTime) { DARABONBA_PTR_SET_VALUE(openTime_, openTime) };


    // postPayHostVersion Field Functions 
    bool hasPostPayHostVersion() const { return this->postPayHostVersion_ != nullptr;};
    void deletePostPayHostVersion() { this->postPayHostVersion_ = nullptr;};
    inline int32_t getPostPayHostVersion() const { DARABONBA_PTR_GET_DEFAULT(postPayHostVersion_, 0) };
    inline DescribeVersionConfigResponseBody& setPostPayHostVersion(int32_t postPayHostVersion) { DARABONBA_PTR_SET_VALUE(postPayHostVersion_, postPayHostVersion) };


    // postPayInstanceId Field Functions 
    bool hasPostPayInstanceId() const { return this->postPayInstanceId_ != nullptr;};
    void deletePostPayInstanceId() { this->postPayInstanceId_ = nullptr;};
    inline string getPostPayInstanceId() const { DARABONBA_PTR_GET_DEFAULT(postPayInstanceId_, "") };
    inline DescribeVersionConfigResponseBody& setPostPayInstanceId(string postPayInstanceId) { DARABONBA_PTR_SET_VALUE(postPayInstanceId_, postPayInstanceId) };


    // postPayModuleSwitch Field Functions 
    bool hasPostPayModuleSwitch() const { return this->postPayModuleSwitch_ != nullptr;};
    void deletePostPayModuleSwitch() { this->postPayModuleSwitch_ = nullptr;};
    inline string getPostPayModuleSwitch() const { DARABONBA_PTR_GET_DEFAULT(postPayModuleSwitch_, "") };
    inline DescribeVersionConfigResponseBody& setPostPayModuleSwitch(string postPayModuleSwitch) { DARABONBA_PTR_SET_VALUE(postPayModuleSwitch_, postPayModuleSwitch) };


    // postPayOpenTime Field Functions 
    bool hasPostPayOpenTime() const { return this->postPayOpenTime_ != nullptr;};
    void deletePostPayOpenTime() { this->postPayOpenTime_ = nullptr;};
    inline int64_t getPostPayOpenTime() const { DARABONBA_PTR_GET_DEFAULT(postPayOpenTime_, 0L) };
    inline DescribeVersionConfigResponseBody& setPostPayOpenTime(int64_t postPayOpenTime) { DARABONBA_PTR_SET_VALUE(postPayOpenTime_, postPayOpenTime) };


    // postPayStatus Field Functions 
    bool hasPostPayStatus() const { return this->postPayStatus_ != nullptr;};
    void deletePostPayStatus() { this->postPayStatus_ = nullptr;};
    inline int32_t getPostPayStatus() const { DARABONBA_PTR_GET_DEFAULT(postPayStatus_, 0) };
    inline DescribeVersionConfigResponseBody& setPostPayStatus(int32_t postPayStatus) { DARABONBA_PTR_SET_VALUE(postPayStatus_, postPayStatus) };


    // raspCapacity Field Functions 
    bool hasRaspCapacity() const { return this->raspCapacity_ != nullptr;};
    void deleteRaspCapacity() { this->raspCapacity_ = nullptr;};
    inline int64_t getRaspCapacity() const { DARABONBA_PTR_GET_DEFAULT(raspCapacity_, 0L) };
    inline DescribeVersionConfigResponseBody& setRaspCapacity(int64_t raspCapacity) { DARABONBA_PTR_SET_VALUE(raspCapacity_, raspCapacity) };


    // releaseTime Field Functions 
    bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
    void deleteReleaseTime() { this->releaseTime_ = nullptr;};
    inline int64_t getReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, 0L) };
    inline DescribeVersionConfigResponseBody& setReleaseTime(int64_t releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVersionConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sasLog Field Functions 
    bool hasSasLog() const { return this->sasLog_ != nullptr;};
    void deleteSasLog() { this->sasLog_ = nullptr;};
    inline int32_t getSasLog() const { DARABONBA_PTR_GET_DEFAULT(sasLog_, 0) };
    inline DescribeVersionConfigResponseBody& setSasLog(int32_t sasLog) { DARABONBA_PTR_SET_VALUE(sasLog_, sasLog) };


    // sasScreen Field Functions 
    bool hasSasScreen() const { return this->sasScreen_ != nullptr;};
    void deleteSasScreen() { this->sasScreen_ = nullptr;};
    inline int32_t getSasScreen() const { DARABONBA_PTR_GET_DEFAULT(sasScreen_, 0) };
    inline DescribeVersionConfigResponseBody& setSasScreen(int32_t sasScreen) { DARABONBA_PTR_SET_VALUE(sasScreen_, sasScreen) };


    // sdkCapacity Field Functions 
    bool hasSdkCapacity() const { return this->sdkCapacity_ != nullptr;};
    void deleteSdkCapacity() { this->sdkCapacity_ = nullptr;};
    inline int64_t getSdkCapacity() const { DARABONBA_PTR_GET_DEFAULT(sdkCapacity_, 0L) };
    inline DescribeVersionConfigResponseBody& setSdkCapacity(int64_t sdkCapacity) { DARABONBA_PTR_SET_VALUE(sdkCapacity_, sdkCapacity) };


    // slsCapacity Field Functions 
    bool hasSlsCapacity() const { return this->slsCapacity_ != nullptr;};
    void deleteSlsCapacity() { this->slsCapacity_ = nullptr;};
    inline int64_t getSlsCapacity() const { DARABONBA_PTR_GET_DEFAULT(slsCapacity_, 0L) };
    inline DescribeVersionConfigResponseBody& setSlsCapacity(int64_t slsCapacity) { DARABONBA_PTR_SET_VALUE(slsCapacity_, slsCapacity) };


    // threatAnalysisCapacity Field Functions 
    bool hasThreatAnalysisCapacity() const { return this->threatAnalysisCapacity_ != nullptr;};
    void deleteThreatAnalysisCapacity() { this->threatAnalysisCapacity_ = nullptr;};
    inline int64_t getThreatAnalysisCapacity() const { DARABONBA_PTR_GET_DEFAULT(threatAnalysisCapacity_, 0L) };
    inline DescribeVersionConfigResponseBody& setThreatAnalysisCapacity(int64_t threatAnalysisCapacity) { DARABONBA_PTR_SET_VALUE(threatAnalysisCapacity_, threatAnalysisCapacity) };


    // threatAnalysisFlow Field Functions 
    bool hasThreatAnalysisFlow() const { return this->threatAnalysisFlow_ != nullptr;};
    void deleteThreatAnalysisFlow() { this->threatAnalysisFlow_ = nullptr;};
    inline int32_t getThreatAnalysisFlow() const { DARABONBA_PTR_GET_DEFAULT(threatAnalysisFlow_, 0) };
    inline DescribeVersionConfigResponseBody& setThreatAnalysisFlow(int32_t threatAnalysisFlow) { DARABONBA_PTR_SET_VALUE(threatAnalysisFlow_, threatAnalysisFlow) };


    // userDefinedAlarms Field Functions 
    bool hasUserDefinedAlarms() const { return this->userDefinedAlarms_ != nullptr;};
    void deleteUserDefinedAlarms() { this->userDefinedAlarms_ = nullptr;};
    inline int32_t getUserDefinedAlarms() const { DARABONBA_PTR_GET_DEFAULT(userDefinedAlarms_, 0) };
    inline DescribeVersionConfigResponseBody& setUserDefinedAlarms(int32_t userDefinedAlarms) { DARABONBA_PTR_SET_VALUE(userDefinedAlarms_, userDefinedAlarms) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline DescribeVersionConfigResponseBody& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // vmCores Field Functions 
    bool hasVmCores() const { return this->vmCores_ != nullptr;};
    void deleteVmCores() { this->vmCores_ = nullptr;};
    inline int32_t getVmCores() const { DARABONBA_PTR_GET_DEFAULT(vmCores_, 0) };
    inline DescribeVersionConfigResponseBody& setVmCores(int32_t vmCores) { DARABONBA_PTR_SET_VALUE(vmCores_, vmCores) };


    // vulFixCapacity Field Functions 
    bool hasVulFixCapacity() const { return this->vulFixCapacity_ != nullptr;};
    void deleteVulFixCapacity() { this->vulFixCapacity_ = nullptr;};
    inline int64_t getVulFixCapacity() const { DARABONBA_PTR_GET_DEFAULT(vulFixCapacity_, 0L) };
    inline DescribeVersionConfigResponseBody& setVulFixCapacity(int64_t vulFixCapacity) { DARABONBA_PTR_SET_VALUE(vulFixCapacity_, vulFixCapacity) };


    // webLock Field Functions 
    bool hasWebLock() const { return this->webLock_ != nullptr;};
    void deleteWebLock() { this->webLock_ = nullptr;};
    inline int32_t getWebLock() const { DARABONBA_PTR_GET_DEFAULT(webLock_, 0) };
    inline DescribeVersionConfigResponseBody& setWebLock(int32_t webLock) { DARABONBA_PTR_SET_VALUE(webLock_, webLock) };


    // webLockAuthCount Field Functions 
    bool hasWebLockAuthCount() const { return this->webLockAuthCount_ != nullptr;};
    void deleteWebLockAuthCount() { this->webLockAuthCount_ = nullptr;};
    inline int64_t getWebLockAuthCount() const { DARABONBA_PTR_GET_DEFAULT(webLockAuthCount_, 0L) };
    inline DescribeVersionConfigResponseBody& setWebLockAuthCount(int64_t webLockAuthCount) { DARABONBA_PTR_SET_VALUE(webLockAuthCount_, webLockAuthCount) };


  protected:
    // Number of agentless detections. 
    // >Agentless detection is not yet available for sale, so there\\"s no need to pay attention to this field at the moment.
    shared_ptr<int64_t> agentlessCapacity_ {};
    // Whether to allow pay-as-you-go purchases.
    // - **0**: Not allowed 
    // - **1**: Allowed
    shared_ptr<int32_t> allowPartialBuy_ {};
    // Ransomware protection backup capacity, in GB.
    shared_ptr<int32_t> antiRansomwareCapacity_ {};
    // Ransomware Guardian Service. Values:
    //  - **0**: Not activated
    //  - **1**: Activated
    shared_ptr<int32_t> antiRansomwareService_ {};
    // Whether to enable the application whitelist. Values: 
    // - **0**: Not enabled 
    // - **2**: Enabled
    shared_ptr<int32_t> appWhiteList_ {};
    // Number of application whitelist authorizations. 
    // > One authorization allows the application of a whitelist policy to one server. After enabling the application whitelist function, the account will have 20 authorizations by default.
    shared_ptr<int64_t> appWhiteListAuthCount_ {};
    // Number of purchased server licenses.
    shared_ptr<int32_t> assetLevel_ {};
    // Whether it supports the activation of a post-paid trial package. Values: 
    // - **0**: Not supported
    //  - **1**: Supported
    shared_ptr<int32_t> canTryPostPaidPackage_ {};
    // Purchased cloud platform configuration check scan count. Unit: times/month.
    shared_ptr<int64_t> cspmCapacity_ {};
    // Purchase the highest version of the Security Center. Values:
    //  - **1**: Free Edition 
    // - **3**: Enterprise Edition 
    // - **5**: Advanced Edition 
    // - **6**: Anti-Virus Edition
    //  - **7**: Flagship Edition 
    // - **10**: Purchase Additional Services Only 
    // > When purchasing a single version, it indicates the corresponding version. When purchasing multiple versions, this value represents the highest version among the purchased multi-versions of Cloud Security Center.
    shared_ptr<int32_t> highestVersion_ {};
    // Number of purchased honeypot licenses.
    shared_ptr<int64_t> honeypotCapacity_ {};
    // Number of purchased image scanning authorizations.
    shared_ptr<int64_t> imageScanCapacity_ {};
    // Instance purchase type. Values: 
    // - **0**: Self-purchased
    //  - **1**: Allocated from multiple accounts
    shared_ptr<int32_t> instanceBuyType_ {};
    // ID of the purchased Cloud Security Center instance.
    shared_ptr<string> instanceId_ {};
    // AI digital human analyzes traffic
    shared_ptr<int32_t> intelligentAnalysisFlow_ {};
    // Whether it is the new flagship version.
    // - **true**: It is the latest version
    // - **false**: It is not the latest version
    shared_ptr<bool> isNewContainerVersion_ {};
    // Whether it is the latest multi-version.
    // - **true**: It is the latest multi-version 
    // - **false**: It is not the latest multi-version
    shared_ptr<bool> isNewMultiVersion_ {};
    // Whether the number of existing servers exceeds the maximum authorized purchase quantity. Values: 
    // - **false**: Not exceeded 
    // - **true**: Exceeded
    // >Notice: This parameter is deprecated, and you do not need to pay attention to it.
    shared_ptr<bool> isOverBalance_ {};
    // Whether to enable pay-as-you-go. Values: 
    // - **false**: Not enabled 
    // - **true**: Enabled
    shared_ptr<bool> isPostpay_ {};
    // Indicates whether the current Cloud Security Center version is a trial version. Values: 
    // - **0**: Not a trial version 
    // - **1**: Trial version
    shared_ptr<int32_t> isTrialVersion_ {};
    // The timestamp of the last trial expiration for Cloud Security Center, in milliseconds.
    shared_ptr<int64_t> lastTrailEndTime_ {};
    // Total number of licenses when purchasing multiple versions.
    shared_ptr<int32_t> MVAuthCount_ {};
    // Total remaining licenses when purchasing multiple versions.
    shared_ptr<int32_t> MVUnusedAuthCount_ {};
    // When both the annual/monthly and pay-as-you-go services for Cloud Security Center\\"s host and container security are activated, the higher protection version of the two is selected. Values: 
    // - **1**: Free Edition
    //  - **6**: Anti-Virus Edition 
    // - **5**: Advanced Edition 
    // - **3**: Enterprise Edition 
    // - **7**: Ultimate Edition
    shared_ptr<int32_t> mergedVersion_ {};
    // Usage of multiple version numbers and license counts
    shared_ptr<string> multiVersion_ {};
    // Whether to enable the new version of Threat Analysis and Response service. The new version of Threat Analysis and Response service refers to the one that supports purchasing access traffic and log storage capacity. Values: 
    // - **0**: No 
    // - **1**: Yes
    shared_ptr<int32_t> newThreatAnalysis_ {};
    // AI Digital Human Management Instance
    shared_ptr<int32_t> onboardedAssets_ {};
    // Service activation timestamp, unit: milliseconds.
    shared_ptr<int64_t> openTime_ {};
    // When activating the pay-as-you-go service for host and container security, it represents the highest protection version of the already bound assets. Values: 
    // - **1**: Free Edition
    //  - **3**: Enterprise Edition
    //  - **5**: Advanced Edition
    //  - **6**: Anti-Virus Edition 
    // - **7**: Flagship Edition
    shared_ptr<int32_t> postPayHostVersion_ {};
    // Pay-As-You-Go instance ID.
    shared_ptr<string> postPayInstanceId_ {};
    // Pay-as-you-go module switch status, in the format of JsonString, with values as follows:
    //  - Key:
    //    * **VUL**: Vulnerability Repair Module 
    //    * **CSPM**: Cloud Security Posture Management Module 
    //    * **AGENTLESS**: Agentless Detection Module 
    //    * **SERVERLESS**: Serverless Security Module 
    //    * **CTDR**: Threat Analysis and Response Module 
    //    * **POST_HOST**: Host and Container Security Module 
    //    *  **SDK**: Malicious File Detection SDK Module 
    //    * **RASP**: Application Protection Module 
    //  - Value: 0 indicates off, 1 indicates on
    shared_ptr<string> postPayModuleSwitch_ {};
    // Pay-as-you-go activation time
    shared_ptr<int64_t> postPayOpenTime_ {};
    // Pay-As-You-Go instance status. Values: 
    // - **1**: Normal 
    // - **2**: Stopped due to unpaid bills
    shared_ptr<int32_t> postPayStatus_ {};
    // Number of purchased application protections. Unit: per month.
    shared_ptr<int64_t> raspCapacity_ {};
    // The timestamp of when the Cloud Security Center instance will expire, in milliseconds.
    // > If you do not renew the service within 7 days after it expires, your paid instance will be downgraded to a free version, and you will no longer be able to use the features of the paid version. Your previous Cloud Security Center configuration data and historical alert data (e.g., DDoS alerts) will become inaccessible. At this point, you can only re-enable the paid version of Cloud Security Center by repurchasing it. For more information, see [Purchasing Cloud Security Center](https://help.aliyun.com/document_detail/42308.html).
    shared_ptr<int64_t> releaseTime_ {};
    // The unique identifier generated by Alibaba Cloud for this request.
    shared_ptr<string> requestId_ {};
    // Whether log analysis has been purchased. Values: 
    // - **0**: Not purchased 
    // - **1**: Purchased
    shared_ptr<int32_t> sasLog_ {};
    // Whether the security dashboard has been purchased. Values: 
    // - **0**: Not purchased 
    // - **1**: Purchased
    shared_ptr<int32_t> sasScreen_ {};
    // Number of SDK authorizations for malicious file detection
    shared_ptr<int64_t> sdkCapacity_ {};
    // Purchased log storage capacity in GB. Range: 0 to 200000.
    shared_ptr<int64_t> slsCapacity_ {};
    // Purchased threat analysis capacity. Unit: GB.
    shared_ptr<int64_t> threatAnalysisCapacity_ {};
    // Purchased threat analysis and response log access traffic. Unit is GB/day.
    shared_ptr<int32_t> threatAnalysisFlow_ {};
    // Whether to enable the custom alarm function. Values:
    //  - **0**: Not enabled 
    // - **2**: Enabled
    shared_ptr<int32_t> userDefinedAlarms_ {};
    // Purchased Cloud Security Center version. Values:   
    // - **1**: Free Edition 
    //  - **3**: Enterprise Edition 
    // - **5**: Advanced Edition 
    // - **6**: Anti-Virus Edition     
    // - **7**: Flagship Edition   
    //  - **8**: Multi-Edition  
    //   - **10**: Value-Added Services Only
    shared_ptr<int32_t> version_ {};
    // Number of authorized cores purchased.
    shared_ptr<int32_t> vmCores_ {};
    // Number of purchased vulnerability fixes. Unit: times/month.
    shared_ptr<int64_t> vulFixCapacity_ {};
    // Indicates whether the web tamper-proof service is enabled. Values: 
    // - **0**: Not enabled 
    // - **1**: Enabled
    shared_ptr<int32_t> webLock_ {};
    // The number of purchased web tamper-proof licenses. One license can enable web tamper protection for one server. Value range: 0~N.
    //  >N is the number of servers you have.
    shared_ptr<int64_t> webLockAuthCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
