// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERSIONCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERSIONCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class DescribeVersionConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVersionConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVersionConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
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
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Body, body_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Body, body_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Body : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Body& obj) { 
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
          DARABONBA_PTR_TO_JSON(IntelligentAnalysisFlow, intelligentAnalysisFlow_);
          DARABONBA_PTR_TO_JSON(IsNewContainerVersion, isNewContainerVersion_);
          DARABONBA_PTR_TO_JSON(IsNewMultiVersion, isNewMultiVersion_);
          DARABONBA_PTR_TO_JSON(IsOverBalance, isOverBalance_);
          DARABONBA_PTR_TO_JSON(IsPostpay, isPostpay_);
          DARABONBA_PTR_TO_JSON(IsTrialVersion, isTrialVersion_);
          DARABONBA_PTR_TO_JSON(LastTrailEndTime, lastTrailEndTime_);
          DARABONBA_PTR_TO_JSON(MergedVersion, mergedVersion_);
          DARABONBA_PTR_TO_JSON(MultiVersion, multiVersion_);
          DARABONBA_PTR_TO_JSON(MvAuthCount, mvAuthCount_);
          DARABONBA_PTR_TO_JSON(MvUnusedAuthCount, mvUnusedAuthCount_);
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
        friend void from_json(const Darabonba::Json& j, Body& obj) { 
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
          DARABONBA_PTR_FROM_JSON(IntelligentAnalysisFlow, intelligentAnalysisFlow_);
          DARABONBA_PTR_FROM_JSON(IsNewContainerVersion, isNewContainerVersion_);
          DARABONBA_PTR_FROM_JSON(IsNewMultiVersion, isNewMultiVersion_);
          DARABONBA_PTR_FROM_JSON(IsOverBalance, isOverBalance_);
          DARABONBA_PTR_FROM_JSON(IsPostpay, isPostpay_);
          DARABONBA_PTR_FROM_JSON(IsTrialVersion, isTrialVersion_);
          DARABONBA_PTR_FROM_JSON(LastTrailEndTime, lastTrailEndTime_);
          DARABONBA_PTR_FROM_JSON(MergedVersion, mergedVersion_);
          DARABONBA_PTR_FROM_JSON(MultiVersion, multiVersion_);
          DARABONBA_PTR_FROM_JSON(MvAuthCount, mvAuthCount_);
          DARABONBA_PTR_FROM_JSON(MvUnusedAuthCount, mvUnusedAuthCount_);
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
        Body() = default ;
        Body(const Body &) = default ;
        Body(Body &&) = default ;
        Body(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Body() = default ;
        Body& operator=(const Body &) = default ;
        Body& operator=(Body &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentlessCapacity_ == nullptr
        && this->allowPartialBuy_ == nullptr && this->antiRansomwareCapacity_ == nullptr && this->antiRansomwareService_ == nullptr && this->appWhiteList_ == nullptr && this->appWhiteListAuthCount_ == nullptr
        && this->assetLevel_ == nullptr && this->canTryPostPaidPackage_ == nullptr && this->cspmCapacity_ == nullptr && this->highestVersion_ == nullptr && this->honeypotCapacity_ == nullptr
        && this->imageScanCapacity_ == nullptr && this->instanceBuyType_ == nullptr && this->intelligentAnalysisFlow_ == nullptr && this->isNewContainerVersion_ == nullptr && this->isNewMultiVersion_ == nullptr
        && this->isOverBalance_ == nullptr && this->isPostpay_ == nullptr && this->isTrialVersion_ == nullptr && this->lastTrailEndTime_ == nullptr && this->mergedVersion_ == nullptr
        && this->multiVersion_ == nullptr && this->mvAuthCount_ == nullptr && this->mvUnusedAuthCount_ == nullptr && this->newThreatAnalysis_ == nullptr && this->onboardedAssets_ == nullptr
        && this->openTime_ == nullptr && this->postPayHostVersion_ == nullptr && this->postPayInstanceId_ == nullptr && this->postPayModuleSwitch_ == nullptr && this->postPayOpenTime_ == nullptr
        && this->postPayStatus_ == nullptr && this->raspCapacity_ == nullptr && this->releaseTime_ == nullptr && this->requestId_ == nullptr && this->sasLog_ == nullptr
        && this->sasScreen_ == nullptr && this->sdkCapacity_ == nullptr && this->slsCapacity_ == nullptr && this->threatAnalysisCapacity_ == nullptr && this->threatAnalysisFlow_ == nullptr
        && this->userDefinedAlarms_ == nullptr && this->version_ == nullptr && this->vmCores_ == nullptr && this->vulFixCapacity_ == nullptr && this->webLock_ == nullptr
        && this->webLockAuthCount_ == nullptr; };
        // agentlessCapacity Field Functions 
        bool hasAgentlessCapacity() const { return this->agentlessCapacity_ != nullptr;};
        void deleteAgentlessCapacity() { this->agentlessCapacity_ = nullptr;};
        inline int64_t getAgentlessCapacity() const { DARABONBA_PTR_GET_DEFAULT(agentlessCapacity_, 0L) };
        inline Body& setAgentlessCapacity(int64_t agentlessCapacity) { DARABONBA_PTR_SET_VALUE(agentlessCapacity_, agentlessCapacity) };


        // allowPartialBuy Field Functions 
        bool hasAllowPartialBuy() const { return this->allowPartialBuy_ != nullptr;};
        void deleteAllowPartialBuy() { this->allowPartialBuy_ = nullptr;};
        inline int32_t getAllowPartialBuy() const { DARABONBA_PTR_GET_DEFAULT(allowPartialBuy_, 0) };
        inline Body& setAllowPartialBuy(int32_t allowPartialBuy) { DARABONBA_PTR_SET_VALUE(allowPartialBuy_, allowPartialBuy) };


        // antiRansomwareCapacity Field Functions 
        bool hasAntiRansomwareCapacity() const { return this->antiRansomwareCapacity_ != nullptr;};
        void deleteAntiRansomwareCapacity() { this->antiRansomwareCapacity_ = nullptr;};
        inline int32_t getAntiRansomwareCapacity() const { DARABONBA_PTR_GET_DEFAULT(antiRansomwareCapacity_, 0) };
        inline Body& setAntiRansomwareCapacity(int32_t antiRansomwareCapacity) { DARABONBA_PTR_SET_VALUE(antiRansomwareCapacity_, antiRansomwareCapacity) };


        // antiRansomwareService Field Functions 
        bool hasAntiRansomwareService() const { return this->antiRansomwareService_ != nullptr;};
        void deleteAntiRansomwareService() { this->antiRansomwareService_ = nullptr;};
        inline int32_t getAntiRansomwareService() const { DARABONBA_PTR_GET_DEFAULT(antiRansomwareService_, 0) };
        inline Body& setAntiRansomwareService(int32_t antiRansomwareService) { DARABONBA_PTR_SET_VALUE(antiRansomwareService_, antiRansomwareService) };


        // appWhiteList Field Functions 
        bool hasAppWhiteList() const { return this->appWhiteList_ != nullptr;};
        void deleteAppWhiteList() { this->appWhiteList_ = nullptr;};
        inline int32_t getAppWhiteList() const { DARABONBA_PTR_GET_DEFAULT(appWhiteList_, 0) };
        inline Body& setAppWhiteList(int32_t appWhiteList) { DARABONBA_PTR_SET_VALUE(appWhiteList_, appWhiteList) };


        // appWhiteListAuthCount Field Functions 
        bool hasAppWhiteListAuthCount() const { return this->appWhiteListAuthCount_ != nullptr;};
        void deleteAppWhiteListAuthCount() { this->appWhiteListAuthCount_ = nullptr;};
        inline int64_t getAppWhiteListAuthCount() const { DARABONBA_PTR_GET_DEFAULT(appWhiteListAuthCount_, 0L) };
        inline Body& setAppWhiteListAuthCount(int64_t appWhiteListAuthCount) { DARABONBA_PTR_SET_VALUE(appWhiteListAuthCount_, appWhiteListAuthCount) };


        // assetLevel Field Functions 
        bool hasAssetLevel() const { return this->assetLevel_ != nullptr;};
        void deleteAssetLevel() { this->assetLevel_ = nullptr;};
        inline int32_t getAssetLevel() const { DARABONBA_PTR_GET_DEFAULT(assetLevel_, 0) };
        inline Body& setAssetLevel(int32_t assetLevel) { DARABONBA_PTR_SET_VALUE(assetLevel_, assetLevel) };


        // canTryPostPaidPackage Field Functions 
        bool hasCanTryPostPaidPackage() const { return this->canTryPostPaidPackage_ != nullptr;};
        void deleteCanTryPostPaidPackage() { this->canTryPostPaidPackage_ = nullptr;};
        inline int32_t getCanTryPostPaidPackage() const { DARABONBA_PTR_GET_DEFAULT(canTryPostPaidPackage_, 0) };
        inline Body& setCanTryPostPaidPackage(int32_t canTryPostPaidPackage) { DARABONBA_PTR_SET_VALUE(canTryPostPaidPackage_, canTryPostPaidPackage) };


        // cspmCapacity Field Functions 
        bool hasCspmCapacity() const { return this->cspmCapacity_ != nullptr;};
        void deleteCspmCapacity() { this->cspmCapacity_ = nullptr;};
        inline int64_t getCspmCapacity() const { DARABONBA_PTR_GET_DEFAULT(cspmCapacity_, 0L) };
        inline Body& setCspmCapacity(int64_t cspmCapacity) { DARABONBA_PTR_SET_VALUE(cspmCapacity_, cspmCapacity) };


        // highestVersion Field Functions 
        bool hasHighestVersion() const { return this->highestVersion_ != nullptr;};
        void deleteHighestVersion() { this->highestVersion_ = nullptr;};
        inline int32_t getHighestVersion() const { DARABONBA_PTR_GET_DEFAULT(highestVersion_, 0) };
        inline Body& setHighestVersion(int32_t highestVersion) { DARABONBA_PTR_SET_VALUE(highestVersion_, highestVersion) };


        // honeypotCapacity Field Functions 
        bool hasHoneypotCapacity() const { return this->honeypotCapacity_ != nullptr;};
        void deleteHoneypotCapacity() { this->honeypotCapacity_ = nullptr;};
        inline int64_t getHoneypotCapacity() const { DARABONBA_PTR_GET_DEFAULT(honeypotCapacity_, 0L) };
        inline Body& setHoneypotCapacity(int64_t honeypotCapacity) { DARABONBA_PTR_SET_VALUE(honeypotCapacity_, honeypotCapacity) };


        // imageScanCapacity Field Functions 
        bool hasImageScanCapacity() const { return this->imageScanCapacity_ != nullptr;};
        void deleteImageScanCapacity() { this->imageScanCapacity_ = nullptr;};
        inline int64_t getImageScanCapacity() const { DARABONBA_PTR_GET_DEFAULT(imageScanCapacity_, 0L) };
        inline Body& setImageScanCapacity(int64_t imageScanCapacity) { DARABONBA_PTR_SET_VALUE(imageScanCapacity_, imageScanCapacity) };


        // instanceBuyType Field Functions 
        bool hasInstanceBuyType() const { return this->instanceBuyType_ != nullptr;};
        void deleteInstanceBuyType() { this->instanceBuyType_ = nullptr;};
        inline int32_t getInstanceBuyType() const { DARABONBA_PTR_GET_DEFAULT(instanceBuyType_, 0) };
        inline Body& setInstanceBuyType(int32_t instanceBuyType) { DARABONBA_PTR_SET_VALUE(instanceBuyType_, instanceBuyType) };


        // intelligentAnalysisFlow Field Functions 
        bool hasIntelligentAnalysisFlow() const { return this->intelligentAnalysisFlow_ != nullptr;};
        void deleteIntelligentAnalysisFlow() { this->intelligentAnalysisFlow_ = nullptr;};
        inline int32_t getIntelligentAnalysisFlow() const { DARABONBA_PTR_GET_DEFAULT(intelligentAnalysisFlow_, 0) };
        inline Body& setIntelligentAnalysisFlow(int32_t intelligentAnalysisFlow) { DARABONBA_PTR_SET_VALUE(intelligentAnalysisFlow_, intelligentAnalysisFlow) };


        // isNewContainerVersion Field Functions 
        bool hasIsNewContainerVersion() const { return this->isNewContainerVersion_ != nullptr;};
        void deleteIsNewContainerVersion() { this->isNewContainerVersion_ = nullptr;};
        inline bool getIsNewContainerVersion() const { DARABONBA_PTR_GET_DEFAULT(isNewContainerVersion_, false) };
        inline Body& setIsNewContainerVersion(bool isNewContainerVersion) { DARABONBA_PTR_SET_VALUE(isNewContainerVersion_, isNewContainerVersion) };


        // isNewMultiVersion Field Functions 
        bool hasIsNewMultiVersion() const { return this->isNewMultiVersion_ != nullptr;};
        void deleteIsNewMultiVersion() { this->isNewMultiVersion_ = nullptr;};
        inline bool getIsNewMultiVersion() const { DARABONBA_PTR_GET_DEFAULT(isNewMultiVersion_, false) };
        inline Body& setIsNewMultiVersion(bool isNewMultiVersion) { DARABONBA_PTR_SET_VALUE(isNewMultiVersion_, isNewMultiVersion) };


        // isOverBalance Field Functions 
        bool hasIsOverBalance() const { return this->isOverBalance_ != nullptr;};
        void deleteIsOverBalance() { this->isOverBalance_ = nullptr;};
        inline bool getIsOverBalance() const { DARABONBA_PTR_GET_DEFAULT(isOverBalance_, false) };
        inline Body& setIsOverBalance(bool isOverBalance) { DARABONBA_PTR_SET_VALUE(isOverBalance_, isOverBalance) };


        // isPostpay Field Functions 
        bool hasIsPostpay() const { return this->isPostpay_ != nullptr;};
        void deleteIsPostpay() { this->isPostpay_ = nullptr;};
        inline bool getIsPostpay() const { DARABONBA_PTR_GET_DEFAULT(isPostpay_, false) };
        inline Body& setIsPostpay(bool isPostpay) { DARABONBA_PTR_SET_VALUE(isPostpay_, isPostpay) };


        // isTrialVersion Field Functions 
        bool hasIsTrialVersion() const { return this->isTrialVersion_ != nullptr;};
        void deleteIsTrialVersion() { this->isTrialVersion_ = nullptr;};
        inline int32_t getIsTrialVersion() const { DARABONBA_PTR_GET_DEFAULT(isTrialVersion_, 0) };
        inline Body& setIsTrialVersion(int32_t isTrialVersion) { DARABONBA_PTR_SET_VALUE(isTrialVersion_, isTrialVersion) };


        // lastTrailEndTime Field Functions 
        bool hasLastTrailEndTime() const { return this->lastTrailEndTime_ != nullptr;};
        void deleteLastTrailEndTime() { this->lastTrailEndTime_ = nullptr;};
        inline int64_t getLastTrailEndTime() const { DARABONBA_PTR_GET_DEFAULT(lastTrailEndTime_, 0L) };
        inline Body& setLastTrailEndTime(int64_t lastTrailEndTime) { DARABONBA_PTR_SET_VALUE(lastTrailEndTime_, lastTrailEndTime) };


        // mergedVersion Field Functions 
        bool hasMergedVersion() const { return this->mergedVersion_ != nullptr;};
        void deleteMergedVersion() { this->mergedVersion_ = nullptr;};
        inline int32_t getMergedVersion() const { DARABONBA_PTR_GET_DEFAULT(mergedVersion_, 0) };
        inline Body& setMergedVersion(int32_t mergedVersion) { DARABONBA_PTR_SET_VALUE(mergedVersion_, mergedVersion) };


        // multiVersion Field Functions 
        bool hasMultiVersion() const { return this->multiVersion_ != nullptr;};
        void deleteMultiVersion() { this->multiVersion_ = nullptr;};
        inline string getMultiVersion() const { DARABONBA_PTR_GET_DEFAULT(multiVersion_, "") };
        inline Body& setMultiVersion(string multiVersion) { DARABONBA_PTR_SET_VALUE(multiVersion_, multiVersion) };


        // mvAuthCount Field Functions 
        bool hasMvAuthCount() const { return this->mvAuthCount_ != nullptr;};
        void deleteMvAuthCount() { this->mvAuthCount_ = nullptr;};
        inline int32_t getMvAuthCount() const { DARABONBA_PTR_GET_DEFAULT(mvAuthCount_, 0) };
        inline Body& setMvAuthCount(int32_t mvAuthCount) { DARABONBA_PTR_SET_VALUE(mvAuthCount_, mvAuthCount) };


        // mvUnusedAuthCount Field Functions 
        bool hasMvUnusedAuthCount() const { return this->mvUnusedAuthCount_ != nullptr;};
        void deleteMvUnusedAuthCount() { this->mvUnusedAuthCount_ = nullptr;};
        inline int32_t getMvUnusedAuthCount() const { DARABONBA_PTR_GET_DEFAULT(mvUnusedAuthCount_, 0) };
        inline Body& setMvUnusedAuthCount(int32_t mvUnusedAuthCount) { DARABONBA_PTR_SET_VALUE(mvUnusedAuthCount_, mvUnusedAuthCount) };


        // newThreatAnalysis Field Functions 
        bool hasNewThreatAnalysis() const { return this->newThreatAnalysis_ != nullptr;};
        void deleteNewThreatAnalysis() { this->newThreatAnalysis_ = nullptr;};
        inline int32_t getNewThreatAnalysis() const { DARABONBA_PTR_GET_DEFAULT(newThreatAnalysis_, 0) };
        inline Body& setNewThreatAnalysis(int32_t newThreatAnalysis) { DARABONBA_PTR_SET_VALUE(newThreatAnalysis_, newThreatAnalysis) };


        // onboardedAssets Field Functions 
        bool hasOnboardedAssets() const { return this->onboardedAssets_ != nullptr;};
        void deleteOnboardedAssets() { this->onboardedAssets_ = nullptr;};
        inline int32_t getOnboardedAssets() const { DARABONBA_PTR_GET_DEFAULT(onboardedAssets_, 0) };
        inline Body& setOnboardedAssets(int32_t onboardedAssets) { DARABONBA_PTR_SET_VALUE(onboardedAssets_, onboardedAssets) };


        // openTime Field Functions 
        bool hasOpenTime() const { return this->openTime_ != nullptr;};
        void deleteOpenTime() { this->openTime_ = nullptr;};
        inline int64_t getOpenTime() const { DARABONBA_PTR_GET_DEFAULT(openTime_, 0L) };
        inline Body& setOpenTime(int64_t openTime) { DARABONBA_PTR_SET_VALUE(openTime_, openTime) };


        // postPayHostVersion Field Functions 
        bool hasPostPayHostVersion() const { return this->postPayHostVersion_ != nullptr;};
        void deletePostPayHostVersion() { this->postPayHostVersion_ = nullptr;};
        inline int32_t getPostPayHostVersion() const { DARABONBA_PTR_GET_DEFAULT(postPayHostVersion_, 0) };
        inline Body& setPostPayHostVersion(int32_t postPayHostVersion) { DARABONBA_PTR_SET_VALUE(postPayHostVersion_, postPayHostVersion) };


        // postPayInstanceId Field Functions 
        bool hasPostPayInstanceId() const { return this->postPayInstanceId_ != nullptr;};
        void deletePostPayInstanceId() { this->postPayInstanceId_ = nullptr;};
        inline string getPostPayInstanceId() const { DARABONBA_PTR_GET_DEFAULT(postPayInstanceId_, "") };
        inline Body& setPostPayInstanceId(string postPayInstanceId) { DARABONBA_PTR_SET_VALUE(postPayInstanceId_, postPayInstanceId) };


        // postPayModuleSwitch Field Functions 
        bool hasPostPayModuleSwitch() const { return this->postPayModuleSwitch_ != nullptr;};
        void deletePostPayModuleSwitch() { this->postPayModuleSwitch_ = nullptr;};
        inline string getPostPayModuleSwitch() const { DARABONBA_PTR_GET_DEFAULT(postPayModuleSwitch_, "") };
        inline Body& setPostPayModuleSwitch(string postPayModuleSwitch) { DARABONBA_PTR_SET_VALUE(postPayModuleSwitch_, postPayModuleSwitch) };


        // postPayOpenTime Field Functions 
        bool hasPostPayOpenTime() const { return this->postPayOpenTime_ != nullptr;};
        void deletePostPayOpenTime() { this->postPayOpenTime_ = nullptr;};
        inline int64_t getPostPayOpenTime() const { DARABONBA_PTR_GET_DEFAULT(postPayOpenTime_, 0L) };
        inline Body& setPostPayOpenTime(int64_t postPayOpenTime) { DARABONBA_PTR_SET_VALUE(postPayOpenTime_, postPayOpenTime) };


        // postPayStatus Field Functions 
        bool hasPostPayStatus() const { return this->postPayStatus_ != nullptr;};
        void deletePostPayStatus() { this->postPayStatus_ = nullptr;};
        inline int32_t getPostPayStatus() const { DARABONBA_PTR_GET_DEFAULT(postPayStatus_, 0) };
        inline Body& setPostPayStatus(int32_t postPayStatus) { DARABONBA_PTR_SET_VALUE(postPayStatus_, postPayStatus) };


        // raspCapacity Field Functions 
        bool hasRaspCapacity() const { return this->raspCapacity_ != nullptr;};
        void deleteRaspCapacity() { this->raspCapacity_ = nullptr;};
        inline int64_t getRaspCapacity() const { DARABONBA_PTR_GET_DEFAULT(raspCapacity_, 0L) };
        inline Body& setRaspCapacity(int64_t raspCapacity) { DARABONBA_PTR_SET_VALUE(raspCapacity_, raspCapacity) };


        // releaseTime Field Functions 
        bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
        void deleteReleaseTime() { this->releaseTime_ = nullptr;};
        inline int64_t getReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, 0L) };
        inline Body& setReleaseTime(int64_t releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


        // requestId Field Functions 
        bool hasRequestId() const { return this->requestId_ != nullptr;};
        void deleteRequestId() { this->requestId_ = nullptr;};
        inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
        inline Body& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


        // sasLog Field Functions 
        bool hasSasLog() const { return this->sasLog_ != nullptr;};
        void deleteSasLog() { this->sasLog_ = nullptr;};
        inline int32_t getSasLog() const { DARABONBA_PTR_GET_DEFAULT(sasLog_, 0) };
        inline Body& setSasLog(int32_t sasLog) { DARABONBA_PTR_SET_VALUE(sasLog_, sasLog) };


        // sasScreen Field Functions 
        bool hasSasScreen() const { return this->sasScreen_ != nullptr;};
        void deleteSasScreen() { this->sasScreen_ = nullptr;};
        inline int32_t getSasScreen() const { DARABONBA_PTR_GET_DEFAULT(sasScreen_, 0) };
        inline Body& setSasScreen(int32_t sasScreen) { DARABONBA_PTR_SET_VALUE(sasScreen_, sasScreen) };


        // sdkCapacity Field Functions 
        bool hasSdkCapacity() const { return this->sdkCapacity_ != nullptr;};
        void deleteSdkCapacity() { this->sdkCapacity_ = nullptr;};
        inline int64_t getSdkCapacity() const { DARABONBA_PTR_GET_DEFAULT(sdkCapacity_, 0L) };
        inline Body& setSdkCapacity(int64_t sdkCapacity) { DARABONBA_PTR_SET_VALUE(sdkCapacity_, sdkCapacity) };


        // slsCapacity Field Functions 
        bool hasSlsCapacity() const { return this->slsCapacity_ != nullptr;};
        void deleteSlsCapacity() { this->slsCapacity_ = nullptr;};
        inline int64_t getSlsCapacity() const { DARABONBA_PTR_GET_DEFAULT(slsCapacity_, 0L) };
        inline Body& setSlsCapacity(int64_t slsCapacity) { DARABONBA_PTR_SET_VALUE(slsCapacity_, slsCapacity) };


        // threatAnalysisCapacity Field Functions 
        bool hasThreatAnalysisCapacity() const { return this->threatAnalysisCapacity_ != nullptr;};
        void deleteThreatAnalysisCapacity() { this->threatAnalysisCapacity_ = nullptr;};
        inline int64_t getThreatAnalysisCapacity() const { DARABONBA_PTR_GET_DEFAULT(threatAnalysisCapacity_, 0L) };
        inline Body& setThreatAnalysisCapacity(int64_t threatAnalysisCapacity) { DARABONBA_PTR_SET_VALUE(threatAnalysisCapacity_, threatAnalysisCapacity) };


        // threatAnalysisFlow Field Functions 
        bool hasThreatAnalysisFlow() const { return this->threatAnalysisFlow_ != nullptr;};
        void deleteThreatAnalysisFlow() { this->threatAnalysisFlow_ = nullptr;};
        inline int32_t getThreatAnalysisFlow() const { DARABONBA_PTR_GET_DEFAULT(threatAnalysisFlow_, 0) };
        inline Body& setThreatAnalysisFlow(int32_t threatAnalysisFlow) { DARABONBA_PTR_SET_VALUE(threatAnalysisFlow_, threatAnalysisFlow) };


        // userDefinedAlarms Field Functions 
        bool hasUserDefinedAlarms() const { return this->userDefinedAlarms_ != nullptr;};
        void deleteUserDefinedAlarms() { this->userDefinedAlarms_ = nullptr;};
        inline int32_t getUserDefinedAlarms() const { DARABONBA_PTR_GET_DEFAULT(userDefinedAlarms_, 0) };
        inline Body& setUserDefinedAlarms(int32_t userDefinedAlarms) { DARABONBA_PTR_SET_VALUE(userDefinedAlarms_, userDefinedAlarms) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
        inline Body& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        // vmCores Field Functions 
        bool hasVmCores() const { return this->vmCores_ != nullptr;};
        void deleteVmCores() { this->vmCores_ = nullptr;};
        inline int32_t getVmCores() const { DARABONBA_PTR_GET_DEFAULT(vmCores_, 0) };
        inline Body& setVmCores(int32_t vmCores) { DARABONBA_PTR_SET_VALUE(vmCores_, vmCores) };


        // vulFixCapacity Field Functions 
        bool hasVulFixCapacity() const { return this->vulFixCapacity_ != nullptr;};
        void deleteVulFixCapacity() { this->vulFixCapacity_ = nullptr;};
        inline int64_t getVulFixCapacity() const { DARABONBA_PTR_GET_DEFAULT(vulFixCapacity_, 0L) };
        inline Body& setVulFixCapacity(int64_t vulFixCapacity) { DARABONBA_PTR_SET_VALUE(vulFixCapacity_, vulFixCapacity) };


        // webLock Field Functions 
        bool hasWebLock() const { return this->webLock_ != nullptr;};
        void deleteWebLock() { this->webLock_ = nullptr;};
        inline int32_t getWebLock() const { DARABONBA_PTR_GET_DEFAULT(webLock_, 0) };
        inline Body& setWebLock(int32_t webLock) { DARABONBA_PTR_SET_VALUE(webLock_, webLock) };


        // webLockAuthCount Field Functions 
        bool hasWebLockAuthCount() const { return this->webLockAuthCount_ != nullptr;};
        void deleteWebLockAuthCount() { this->webLockAuthCount_ = nullptr;};
        inline int64_t getWebLockAuthCount() const { DARABONBA_PTR_GET_DEFAULT(webLockAuthCount_, 0L) };
        inline Body& setWebLockAuthCount(int64_t webLockAuthCount) { DARABONBA_PTR_SET_VALUE(webLockAuthCount_, webLockAuthCount) };


      protected:
        shared_ptr<int64_t> agentlessCapacity_ {};
        shared_ptr<int32_t> allowPartialBuy_ {};
        shared_ptr<int32_t> antiRansomwareCapacity_ {};
        shared_ptr<int32_t> antiRansomwareService_ {};
        shared_ptr<int32_t> appWhiteList_ {};
        shared_ptr<int64_t> appWhiteListAuthCount_ {};
        shared_ptr<int32_t> assetLevel_ {};
        shared_ptr<int32_t> canTryPostPaidPackage_ {};
        shared_ptr<int64_t> cspmCapacity_ {};
        shared_ptr<int32_t> highestVersion_ {};
        shared_ptr<int64_t> honeypotCapacity_ {};
        shared_ptr<int64_t> imageScanCapacity_ {};
        shared_ptr<int32_t> instanceBuyType_ {};
        shared_ptr<int32_t> intelligentAnalysisFlow_ {};
        shared_ptr<bool> isNewContainerVersion_ {};
        shared_ptr<bool> isNewMultiVersion_ {};
        shared_ptr<bool> isOverBalance_ {};
        shared_ptr<bool> isPostpay_ {};
        shared_ptr<int32_t> isTrialVersion_ {};
        shared_ptr<int64_t> lastTrailEndTime_ {};
        shared_ptr<int32_t> mergedVersion_ {};
        shared_ptr<string> multiVersion_ {};
        shared_ptr<int32_t> mvAuthCount_ {};
        shared_ptr<int32_t> mvUnusedAuthCount_ {};
        shared_ptr<int32_t> newThreatAnalysis_ {};
        shared_ptr<int32_t> onboardedAssets_ {};
        shared_ptr<int64_t> openTime_ {};
        shared_ptr<int32_t> postPayHostVersion_ {};
        shared_ptr<string> postPayInstanceId_ {};
        shared_ptr<string> postPayModuleSwitch_ {};
        shared_ptr<int64_t> postPayOpenTime_ {};
        shared_ptr<int32_t> postPayStatus_ {};
        shared_ptr<int64_t> raspCapacity_ {};
        shared_ptr<int64_t> releaseTime_ {};
        shared_ptr<string> requestId_ {};
        shared_ptr<int32_t> sasLog_ {};
        shared_ptr<int32_t> sasScreen_ {};
        shared_ptr<int64_t> sdkCapacity_ {};
        shared_ptr<int64_t> slsCapacity_ {};
        shared_ptr<int64_t> threatAnalysisCapacity_ {};
        shared_ptr<int32_t> threatAnalysisFlow_ {};
        shared_ptr<int32_t> userDefinedAlarms_ {};
        shared_ptr<int32_t> version_ {};
        shared_ptr<int32_t> vmCores_ {};
        shared_ptr<int64_t> vulFixCapacity_ {};
        shared_ptr<int32_t> webLock_ {};
        shared_ptr<int64_t> webLockAuthCount_ {};
      };

      virtual bool empty() const override { return this->body_ == nullptr; };
      // body Field Functions 
      bool hasBody() const { return this->body_ != nullptr;};
      void deleteBody() { this->body_ = nullptr;};
      inline const Data::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, Data::Body) };
      inline Data::Body getBody() { DARABONBA_PTR_GET(body_, Data::Body) };
      inline Data& setBody(const Data::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
      inline Data& setBody(Data::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    protected:
      shared_ptr<Data::Body> body_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeVersionConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeVersionConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeVersionConfigResponseBody::Data) };
    inline DescribeVersionConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeVersionConfigResponseBody::Data) };
    inline DescribeVersionConfigResponseBody& setData(const DescribeVersionConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeVersionConfigResponseBody& setData(DescribeVersionConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeVersionConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVersionConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeVersionConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<DescribeVersionConfigResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
