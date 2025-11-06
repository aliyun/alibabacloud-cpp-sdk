// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMDSUPGRADETASKDETAILRESPONSEBODYRESULTCONTENTDATACONTENT_HPP_
#define ALIBABACLOUD_MODELS_QUERYMDSUPGRADETASKDETAILRESPONSEBODYRESULTCONTENTDATACONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentRuleJsonList.hpp>
#include <alibabacloud/models/QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Appstoreurl, appstoreurl_);
      DARABONBA_PTR_TO_JSON(ChannelContains, channelContains_);
      DARABONBA_PTR_TO_JSON(ChannelExcludes, channelExcludes_);
      DARABONBA_PTR_TO_JSON(CityContains, cityContains_);
      DARABONBA_PTR_TO_JSON(CityExcludes, cityExcludes_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(DeviceGreyNum, deviceGreyNum_);
      DARABONBA_PTR_TO_JSON(DevicePercent, devicePercent_);
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(ExecutionOrder, executionOrder_);
      DARABONBA_PTR_TO_JSON(GmtCreateStr, gmtCreateStr_);
      DARABONBA_PTR_TO_JSON(GreyConfigInfo, greyConfigInfo_);
      DARABONBA_PTR_TO_JSON(GreyEndtimeData, greyEndtimeData_);
      DARABONBA_PTR_TO_JSON(GreyNotice, greyNotice_);
      DARABONBA_PTR_TO_JSON(GreyNum, greyNum_);
      DARABONBA_PTR_TO_JSON(GreyUv, greyUv_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InnerVersion, innerVersion_);
      DARABONBA_PTR_TO_JSON(IsEnterprise, isEnterprise_);
      DARABONBA_PTR_TO_JSON(IsOfficial, isOfficial_);
      DARABONBA_PTR_TO_JSON(IsPush, isPush_);
      DARABONBA_PTR_TO_JSON(IsRc, isRc_);
      DARABONBA_PTR_TO_JSON(IsRelease, isRelease_);
      DARABONBA_PTR_TO_JSON(Memo, memo_);
      DARABONBA_PTR_TO_JSON(MobileModelContains, mobileModelContains_);
      DARABONBA_PTR_TO_JSON(MobileModelExcludes, mobileModelExcludes_);
      DARABONBA_PTR_TO_JSON(Modifier, modifier_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(OsVersion, osVersion_);
      DARABONBA_PTR_TO_JSON(PackageInfoId, packageInfoId_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_TO_JSON(PublishMode, publishMode_);
      DARABONBA_PTR_TO_JSON(PublishType, publishType_);
      DARABONBA_PTR_TO_JSON(PushContent, pushContent_);
      DARABONBA_PTR_TO_JSON(QrcodeUrl, qrcodeUrl_);
      DARABONBA_PTR_TO_JSON(ReleaseType, releaseType_);
      DARABONBA_PTR_TO_JSON(RuleJsonList, ruleJsonList_);
      DARABONBA_PTR_TO_JSON(SilentType, silentType_);
      DARABONBA_PTR_TO_JSON(SyncMode, syncMode_);
      DARABONBA_PTR_TO_JSON(SyncResult, syncResult_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(UpgradeContent, upgradeContent_);
      DARABONBA_PTR_TO_JSON(UpgradeType, upgradeType_);
      DARABONBA_PTR_TO_JSON(UpgradeValidTime, upgradeValidTime_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
      DARABONBA_PTR_TO_JSON(WhitelistIds, whitelistIds_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Appstoreurl, appstoreurl_);
      DARABONBA_PTR_FROM_JSON(ChannelContains, channelContains_);
      DARABONBA_PTR_FROM_JSON(ChannelExcludes, channelExcludes_);
      DARABONBA_PTR_FROM_JSON(CityContains, cityContains_);
      DARABONBA_PTR_FROM_JSON(CityExcludes, cityExcludes_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(DeviceGreyNum, deviceGreyNum_);
      DARABONBA_PTR_FROM_JSON(DevicePercent, devicePercent_);
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(ExecutionOrder, executionOrder_);
      DARABONBA_PTR_FROM_JSON(GmtCreateStr, gmtCreateStr_);
      DARABONBA_PTR_FROM_JSON(GreyConfigInfo, greyConfigInfo_);
      DARABONBA_PTR_FROM_JSON(GreyEndtimeData, greyEndtimeData_);
      DARABONBA_PTR_FROM_JSON(GreyNotice, greyNotice_);
      DARABONBA_PTR_FROM_JSON(GreyNum, greyNum_);
      DARABONBA_PTR_FROM_JSON(GreyUv, greyUv_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InnerVersion, innerVersion_);
      DARABONBA_PTR_FROM_JSON(IsEnterprise, isEnterprise_);
      DARABONBA_PTR_FROM_JSON(IsOfficial, isOfficial_);
      DARABONBA_PTR_FROM_JSON(IsPush, isPush_);
      DARABONBA_PTR_FROM_JSON(IsRc, isRc_);
      DARABONBA_PTR_FROM_JSON(IsRelease, isRelease_);
      DARABONBA_PTR_FROM_JSON(Memo, memo_);
      DARABONBA_PTR_FROM_JSON(MobileModelContains, mobileModelContains_);
      DARABONBA_PTR_FROM_JSON(MobileModelExcludes, mobileModelExcludes_);
      DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(OsVersion, osVersion_);
      DARABONBA_PTR_FROM_JSON(PackageInfoId, packageInfoId_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_FROM_JSON(PublishMode, publishMode_);
      DARABONBA_PTR_FROM_JSON(PublishType, publishType_);
      DARABONBA_PTR_FROM_JSON(PushContent, pushContent_);
      DARABONBA_PTR_FROM_JSON(QrcodeUrl, qrcodeUrl_);
      DARABONBA_PTR_FROM_JSON(ReleaseType, releaseType_);
      DARABONBA_PTR_FROM_JSON(RuleJsonList, ruleJsonList_);
      DARABONBA_PTR_FROM_JSON(SilentType, silentType_);
      DARABONBA_PTR_FROM_JSON(SyncMode, syncMode_);
      DARABONBA_PTR_FROM_JSON(SyncResult, syncResult_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(UpgradeContent, upgradeContent_);
      DARABONBA_PTR_FROM_JSON(UpgradeType, upgradeType_);
      DARABONBA_PTR_FROM_JSON(UpgradeValidTime, upgradeValidTime_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
      DARABONBA_PTR_FROM_JSON(WhitelistIds, whitelistIds_);
    };
    QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent() = default ;
    QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent(const QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent &) = default ;
    QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent(QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent &&) = default ;
    QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent() = default ;
    QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& operator=(const QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent &) = default ;
    QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& operator=(QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && return this->appId_ == nullptr && return this->appstoreurl_ == nullptr && return this->channelContains_ == nullptr && return this->channelExcludes_ == nullptr && return this->cityContains_ == nullptr
        && return this->cityExcludes_ == nullptr && return this->creator_ == nullptr && return this->deviceGreyNum_ == nullptr && return this->devicePercent_ == nullptr && return this->downloadUrl_ == nullptr
        && return this->executionOrder_ == nullptr && return this->gmtCreateStr_ == nullptr && return this->greyConfigInfo_ == nullptr && return this->greyEndtimeData_ == nullptr && return this->greyNotice_ == nullptr
        && return this->greyNum_ == nullptr && return this->greyUv_ == nullptr && return this->id_ == nullptr && return this->innerVersion_ == nullptr && return this->isEnterprise_ == nullptr
        && return this->isOfficial_ == nullptr && return this->isPush_ == nullptr && return this->isRc_ == nullptr && return this->isRelease_ == nullptr && return this->memo_ == nullptr
        && return this->mobileModelContains_ == nullptr && return this->mobileModelExcludes_ == nullptr && return this->modifier_ == nullptr && return this->netType_ == nullptr && return this->osVersion_ == nullptr
        && return this->packageInfoId_ == nullptr && return this->packageType_ == nullptr && return this->platform_ == nullptr && return this->productId_ == nullptr && return this->productVersion_ == nullptr
        && return this->publishMode_ == nullptr && return this->publishType_ == nullptr && return this->pushContent_ == nullptr && return this->qrcodeUrl_ == nullptr && return this->releaseType_ == nullptr
        && return this->ruleJsonList_ == nullptr && return this->silentType_ == nullptr && return this->syncMode_ == nullptr && return this->syncResult_ == nullptr && return this->taskStatus_ == nullptr
        && return this->upgradeContent_ == nullptr && return this->upgradeType_ == nullptr && return this->upgradeValidTime_ == nullptr && return this->whitelist_ == nullptr && return this->whitelistIds_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appstoreurl Field Functions 
    bool hasAppstoreurl() const { return this->appstoreurl_ != nullptr;};
    void deleteAppstoreurl() { this->appstoreurl_ = nullptr;};
    inline string appstoreurl() const { DARABONBA_PTR_GET_DEFAULT(appstoreurl_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setAppstoreurl(string appstoreurl) { DARABONBA_PTR_SET_VALUE(appstoreurl_, appstoreurl) };


    // channelContains Field Functions 
    bool hasChannelContains() const { return this->channelContains_ != nullptr;};
    void deleteChannelContains() { this->channelContains_ = nullptr;};
    inline string channelContains() const { DARABONBA_PTR_GET_DEFAULT(channelContains_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setChannelContains(string channelContains) { DARABONBA_PTR_SET_VALUE(channelContains_, channelContains) };


    // channelExcludes Field Functions 
    bool hasChannelExcludes() const { return this->channelExcludes_ != nullptr;};
    void deleteChannelExcludes() { this->channelExcludes_ = nullptr;};
    inline string channelExcludes() const { DARABONBA_PTR_GET_DEFAULT(channelExcludes_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setChannelExcludes(string channelExcludes) { DARABONBA_PTR_SET_VALUE(channelExcludes_, channelExcludes) };


    // cityContains Field Functions 
    bool hasCityContains() const { return this->cityContains_ != nullptr;};
    void deleteCityContains() { this->cityContains_ = nullptr;};
    inline string cityContains() const { DARABONBA_PTR_GET_DEFAULT(cityContains_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setCityContains(string cityContains) { DARABONBA_PTR_SET_VALUE(cityContains_, cityContains) };


    // cityExcludes Field Functions 
    bool hasCityExcludes() const { return this->cityExcludes_ != nullptr;};
    void deleteCityExcludes() { this->cityExcludes_ = nullptr;};
    inline string cityExcludes() const { DARABONBA_PTR_GET_DEFAULT(cityExcludes_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setCityExcludes(string cityExcludes) { DARABONBA_PTR_SET_VALUE(cityExcludes_, cityExcludes) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // deviceGreyNum Field Functions 
    bool hasDeviceGreyNum() const { return this->deviceGreyNum_ != nullptr;};
    void deleteDeviceGreyNum() { this->deviceGreyNum_ = nullptr;};
    inline int64_t deviceGreyNum() const { DARABONBA_PTR_GET_DEFAULT(deviceGreyNum_, 0L) };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setDeviceGreyNum(int64_t deviceGreyNum) { DARABONBA_PTR_SET_VALUE(deviceGreyNum_, deviceGreyNum) };


    // devicePercent Field Functions 
    bool hasDevicePercent() const { return this->devicePercent_ != nullptr;};
    void deleteDevicePercent() { this->devicePercent_ = nullptr;};
    inline int64_t devicePercent() const { DARABONBA_PTR_GET_DEFAULT(devicePercent_, 0L) };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setDevicePercent(int64_t devicePercent) { DARABONBA_PTR_SET_VALUE(devicePercent_, devicePercent) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // executionOrder Field Functions 
    bool hasExecutionOrder() const { return this->executionOrder_ != nullptr;};
    void deleteExecutionOrder() { this->executionOrder_ = nullptr;};
    inline int64_t executionOrder() const { DARABONBA_PTR_GET_DEFAULT(executionOrder_, 0L) };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setExecutionOrder(int64_t executionOrder) { DARABONBA_PTR_SET_VALUE(executionOrder_, executionOrder) };


    // gmtCreateStr Field Functions 
    bool hasGmtCreateStr() const { return this->gmtCreateStr_ != nullptr;};
    void deleteGmtCreateStr() { this->gmtCreateStr_ = nullptr;};
    inline string gmtCreateStr() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateStr_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setGmtCreateStr(string gmtCreateStr) { DARABONBA_PTR_SET_VALUE(gmtCreateStr_, gmtCreateStr) };


    // greyConfigInfo Field Functions 
    bool hasGreyConfigInfo() const { return this->greyConfigInfo_ != nullptr;};
    void deleteGreyConfigInfo() { this->greyConfigInfo_ = nullptr;};
    inline string greyConfigInfo() const { DARABONBA_PTR_GET_DEFAULT(greyConfigInfo_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setGreyConfigInfo(string greyConfigInfo) { DARABONBA_PTR_SET_VALUE(greyConfigInfo_, greyConfigInfo) };


    // greyEndtimeData Field Functions 
    bool hasGreyEndtimeData() const { return this->greyEndtimeData_ != nullptr;};
    void deleteGreyEndtimeData() { this->greyEndtimeData_ = nullptr;};
    inline string greyEndtimeData() const { DARABONBA_PTR_GET_DEFAULT(greyEndtimeData_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setGreyEndtimeData(string greyEndtimeData) { DARABONBA_PTR_SET_VALUE(greyEndtimeData_, greyEndtimeData) };


    // greyNotice Field Functions 
    bool hasGreyNotice() const { return this->greyNotice_ != nullptr;};
    void deleteGreyNotice() { this->greyNotice_ = nullptr;};
    inline int64_t greyNotice() const { DARABONBA_PTR_GET_DEFAULT(greyNotice_, 0L) };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setGreyNotice(int64_t greyNotice) { DARABONBA_PTR_SET_VALUE(greyNotice_, greyNotice) };


    // greyNum Field Functions 
    bool hasGreyNum() const { return this->greyNum_ != nullptr;};
    void deleteGreyNum() { this->greyNum_ = nullptr;};
    inline int64_t greyNum() const { DARABONBA_PTR_GET_DEFAULT(greyNum_, 0L) };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setGreyNum(int64_t greyNum) { DARABONBA_PTR_SET_VALUE(greyNum_, greyNum) };


    // greyUv Field Functions 
    bool hasGreyUv() const { return this->greyUv_ != nullptr;};
    void deleteGreyUv() { this->greyUv_ = nullptr;};
    inline int64_t greyUv() const { DARABONBA_PTR_GET_DEFAULT(greyUv_, 0L) };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setGreyUv(int64_t greyUv) { DARABONBA_PTR_SET_VALUE(greyUv_, greyUv) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // innerVersion Field Functions 
    bool hasInnerVersion() const { return this->innerVersion_ != nullptr;};
    void deleteInnerVersion() { this->innerVersion_ = nullptr;};
    inline string innerVersion() const { DARABONBA_PTR_GET_DEFAULT(innerVersion_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setInnerVersion(string innerVersion) { DARABONBA_PTR_SET_VALUE(innerVersion_, innerVersion) };


    // isEnterprise Field Functions 
    bool hasIsEnterprise() const { return this->isEnterprise_ != nullptr;};
    void deleteIsEnterprise() { this->isEnterprise_ = nullptr;};
    inline int64_t isEnterprise() const { DARABONBA_PTR_GET_DEFAULT(isEnterprise_, 0L) };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setIsEnterprise(int64_t isEnterprise) { DARABONBA_PTR_SET_VALUE(isEnterprise_, isEnterprise) };


    // isOfficial Field Functions 
    bool hasIsOfficial() const { return this->isOfficial_ != nullptr;};
    void deleteIsOfficial() { this->isOfficial_ = nullptr;};
    inline int64_t isOfficial() const { DARABONBA_PTR_GET_DEFAULT(isOfficial_, 0L) };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setIsOfficial(int64_t isOfficial) { DARABONBA_PTR_SET_VALUE(isOfficial_, isOfficial) };


    // isPush Field Functions 
    bool hasIsPush() const { return this->isPush_ != nullptr;};
    void deleteIsPush() { this->isPush_ = nullptr;};
    inline int64_t isPush() const { DARABONBA_PTR_GET_DEFAULT(isPush_, 0L) };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setIsPush(int64_t isPush) { DARABONBA_PTR_SET_VALUE(isPush_, isPush) };


    // isRc Field Functions 
    bool hasIsRc() const { return this->isRc_ != nullptr;};
    void deleteIsRc() { this->isRc_ = nullptr;};
    inline int64_t isRc() const { DARABONBA_PTR_GET_DEFAULT(isRc_, 0L) };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setIsRc(int64_t isRc) { DARABONBA_PTR_SET_VALUE(isRc_, isRc) };


    // isRelease Field Functions 
    bool hasIsRelease() const { return this->isRelease_ != nullptr;};
    void deleteIsRelease() { this->isRelease_ = nullptr;};
    inline int64_t isRelease() const { DARABONBA_PTR_GET_DEFAULT(isRelease_, 0L) };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setIsRelease(int64_t isRelease) { DARABONBA_PTR_SET_VALUE(isRelease_, isRelease) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // mobileModelContains Field Functions 
    bool hasMobileModelContains() const { return this->mobileModelContains_ != nullptr;};
    void deleteMobileModelContains() { this->mobileModelContains_ = nullptr;};
    inline string mobileModelContains() const { DARABONBA_PTR_GET_DEFAULT(mobileModelContains_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setMobileModelContains(string mobileModelContains) { DARABONBA_PTR_SET_VALUE(mobileModelContains_, mobileModelContains) };


    // mobileModelExcludes Field Functions 
    bool hasMobileModelExcludes() const { return this->mobileModelExcludes_ != nullptr;};
    void deleteMobileModelExcludes() { this->mobileModelExcludes_ = nullptr;};
    inline string mobileModelExcludes() const { DARABONBA_PTR_GET_DEFAULT(mobileModelExcludes_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setMobileModelExcludes(string mobileModelExcludes) { DARABONBA_PTR_SET_VALUE(mobileModelExcludes_, mobileModelExcludes) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // osVersion Field Functions 
    bool hasOsVersion() const { return this->osVersion_ != nullptr;};
    void deleteOsVersion() { this->osVersion_ = nullptr;};
    inline string osVersion() const { DARABONBA_PTR_GET_DEFAULT(osVersion_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setOsVersion(string osVersion) { DARABONBA_PTR_SET_VALUE(osVersion_, osVersion) };


    // packageInfoId Field Functions 
    bool hasPackageInfoId() const { return this->packageInfoId_ != nullptr;};
    void deletePackageInfoId() { this->packageInfoId_ = nullptr;};
    inline int64_t packageInfoId() const { DARABONBA_PTR_GET_DEFAULT(packageInfoId_, 0L) };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setPackageInfoId(int64_t packageInfoId) { DARABONBA_PTR_SET_VALUE(packageInfoId_, packageInfoId) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string packageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // productVersion Field Functions 
    bool hasProductVersion() const { return this->productVersion_ != nullptr;};
    void deleteProductVersion() { this->productVersion_ = nullptr;};
    inline string productVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


    // publishMode Field Functions 
    bool hasPublishMode() const { return this->publishMode_ != nullptr;};
    void deletePublishMode() { this->publishMode_ = nullptr;};
    inline int64_t publishMode() const { DARABONBA_PTR_GET_DEFAULT(publishMode_, 0L) };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setPublishMode(int64_t publishMode) { DARABONBA_PTR_SET_VALUE(publishMode_, publishMode) };


    // publishType Field Functions 
    bool hasPublishType() const { return this->publishType_ != nullptr;};
    void deletePublishType() { this->publishType_ = nullptr;};
    inline int64_t publishType() const { DARABONBA_PTR_GET_DEFAULT(publishType_, 0L) };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setPublishType(int64_t publishType) { DARABONBA_PTR_SET_VALUE(publishType_, publishType) };


    // pushContent Field Functions 
    bool hasPushContent() const { return this->pushContent_ != nullptr;};
    void deletePushContent() { this->pushContent_ = nullptr;};
    inline string pushContent() const { DARABONBA_PTR_GET_DEFAULT(pushContent_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setPushContent(string pushContent) { DARABONBA_PTR_SET_VALUE(pushContent_, pushContent) };


    // qrcodeUrl Field Functions 
    bool hasQrcodeUrl() const { return this->qrcodeUrl_ != nullptr;};
    void deleteQrcodeUrl() { this->qrcodeUrl_ = nullptr;};
    inline string qrcodeUrl() const { DARABONBA_PTR_GET_DEFAULT(qrcodeUrl_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setQrcodeUrl(string qrcodeUrl) { DARABONBA_PTR_SET_VALUE(qrcodeUrl_, qrcodeUrl) };


    // releaseType Field Functions 
    bool hasReleaseType() const { return this->releaseType_ != nullptr;};
    void deleteReleaseType() { this->releaseType_ = nullptr;};
    inline string releaseType() const { DARABONBA_PTR_GET_DEFAULT(releaseType_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setReleaseType(string releaseType) { DARABONBA_PTR_SET_VALUE(releaseType_, releaseType) };


    // ruleJsonList Field Functions 
    bool hasRuleJsonList() const { return this->ruleJsonList_ != nullptr;};
    void deleteRuleJsonList() { this->ruleJsonList_ = nullptr;};
    inline const vector<Models::QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentRuleJsonList> & ruleJsonList() const { DARABONBA_PTR_GET_CONST(ruleJsonList_, vector<Models::QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentRuleJsonList>) };
    inline vector<Models::QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentRuleJsonList> ruleJsonList() { DARABONBA_PTR_GET(ruleJsonList_, vector<Models::QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentRuleJsonList>) };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setRuleJsonList(const vector<Models::QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentRuleJsonList> & ruleJsonList) { DARABONBA_PTR_SET_VALUE(ruleJsonList_, ruleJsonList) };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setRuleJsonList(vector<Models::QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentRuleJsonList> && ruleJsonList) { DARABONBA_PTR_SET_RVALUE(ruleJsonList_, ruleJsonList) };


    // silentType Field Functions 
    bool hasSilentType() const { return this->silentType_ != nullptr;};
    void deleteSilentType() { this->silentType_ = nullptr;};
    inline int64_t silentType() const { DARABONBA_PTR_GET_DEFAULT(silentType_, 0L) };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setSilentType(int64_t silentType) { DARABONBA_PTR_SET_VALUE(silentType_, silentType) };


    // syncMode Field Functions 
    bool hasSyncMode() const { return this->syncMode_ != nullptr;};
    void deleteSyncMode() { this->syncMode_ = nullptr;};
    inline string syncMode() const { DARABONBA_PTR_GET_DEFAULT(syncMode_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setSyncMode(string syncMode) { DARABONBA_PTR_SET_VALUE(syncMode_, syncMode) };


    // syncResult Field Functions 
    bool hasSyncResult() const { return this->syncResult_ != nullptr;};
    void deleteSyncResult() { this->syncResult_ = nullptr;};
    inline string syncResult() const { DARABONBA_PTR_GET_DEFAULT(syncResult_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setSyncResult(string syncResult) { DARABONBA_PTR_SET_VALUE(syncResult_, syncResult) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int64_t taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0L) };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setTaskStatus(int64_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // upgradeContent Field Functions 
    bool hasUpgradeContent() const { return this->upgradeContent_ != nullptr;};
    void deleteUpgradeContent() { this->upgradeContent_ = nullptr;};
    inline string upgradeContent() const { DARABONBA_PTR_GET_DEFAULT(upgradeContent_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setUpgradeContent(string upgradeContent) { DARABONBA_PTR_SET_VALUE(upgradeContent_, upgradeContent) };


    // upgradeType Field Functions 
    bool hasUpgradeType() const { return this->upgradeType_ != nullptr;};
    void deleteUpgradeType() { this->upgradeType_ = nullptr;};
    inline int64_t upgradeType() const { DARABONBA_PTR_GET_DEFAULT(upgradeType_, 0L) };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setUpgradeType(int64_t upgradeType) { DARABONBA_PTR_SET_VALUE(upgradeType_, upgradeType) };


    // upgradeValidTime Field Functions 
    bool hasUpgradeValidTime() const { return this->upgradeValidTime_ != nullptr;};
    void deleteUpgradeValidTime() { this->upgradeValidTime_ = nullptr;};
    inline int64_t upgradeValidTime() const { DARABONBA_PTR_GET_DEFAULT(upgradeValidTime_, 0L) };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setUpgradeValidTime(int64_t upgradeValidTime) { DARABONBA_PTR_SET_VALUE(upgradeValidTime_, upgradeValidTime) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline const vector<Models::QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist> & whitelist() const { DARABONBA_PTR_GET_CONST(whitelist_, vector<Models::QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist>) };
    inline vector<Models::QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist> whitelist() { DARABONBA_PTR_GET(whitelist_, vector<Models::QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist>) };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setWhitelist(const vector<Models::QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist> & whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setWhitelist(vector<Models::QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist> && whitelist) { DARABONBA_PTR_SET_RVALUE(whitelist_, whitelist) };


    // whitelistIds Field Functions 
    bool hasWhitelistIds() const { return this->whitelistIds_ != nullptr;};
    void deleteWhitelistIds() { this->whitelistIds_ = nullptr;};
    inline string whitelistIds() const { DARABONBA_PTR_GET_DEFAULT(whitelistIds_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContent& setWhitelistIds(string whitelistIds) { DARABONBA_PTR_SET_VALUE(whitelistIds_, whitelistIds) };


  protected:
    std::shared_ptr<string> appCode_ = nullptr;
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> appstoreurl_ = nullptr;
    std::shared_ptr<string> channelContains_ = nullptr;
    std::shared_ptr<string> channelExcludes_ = nullptr;
    std::shared_ptr<string> cityContains_ = nullptr;
    std::shared_ptr<string> cityExcludes_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<int64_t> deviceGreyNum_ = nullptr;
    std::shared_ptr<int64_t> devicePercent_ = nullptr;
    std::shared_ptr<string> downloadUrl_ = nullptr;
    std::shared_ptr<int64_t> executionOrder_ = nullptr;
    std::shared_ptr<string> gmtCreateStr_ = nullptr;
    std::shared_ptr<string> greyConfigInfo_ = nullptr;
    std::shared_ptr<string> greyEndtimeData_ = nullptr;
    std::shared_ptr<int64_t> greyNotice_ = nullptr;
    std::shared_ptr<int64_t> greyNum_ = nullptr;
    std::shared_ptr<int64_t> greyUv_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> innerVersion_ = nullptr;
    std::shared_ptr<int64_t> isEnterprise_ = nullptr;
    std::shared_ptr<int64_t> isOfficial_ = nullptr;
    std::shared_ptr<int64_t> isPush_ = nullptr;
    std::shared_ptr<int64_t> isRc_ = nullptr;
    std::shared_ptr<int64_t> isRelease_ = nullptr;
    std::shared_ptr<string> memo_ = nullptr;
    std::shared_ptr<string> mobileModelContains_ = nullptr;
    std::shared_ptr<string> mobileModelExcludes_ = nullptr;
    std::shared_ptr<string> modifier_ = nullptr;
    std::shared_ptr<string> netType_ = nullptr;
    std::shared_ptr<string> osVersion_ = nullptr;
    std::shared_ptr<int64_t> packageInfoId_ = nullptr;
    std::shared_ptr<string> packageType_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<string> productId_ = nullptr;
    std::shared_ptr<string> productVersion_ = nullptr;
    std::shared_ptr<int64_t> publishMode_ = nullptr;
    std::shared_ptr<int64_t> publishType_ = nullptr;
    std::shared_ptr<string> pushContent_ = nullptr;
    std::shared_ptr<string> qrcodeUrl_ = nullptr;
    std::shared_ptr<string> releaseType_ = nullptr;
    std::shared_ptr<vector<Models::QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentRuleJsonList>> ruleJsonList_ = nullptr;
    std::shared_ptr<int64_t> silentType_ = nullptr;
    std::shared_ptr<string> syncMode_ = nullptr;
    std::shared_ptr<string> syncResult_ = nullptr;
    std::shared_ptr<int64_t> taskStatus_ = nullptr;
    std::shared_ptr<string> upgradeContent_ = nullptr;
    std::shared_ptr<int64_t> upgradeType_ = nullptr;
    std::shared_ptr<int64_t> upgradeValidTime_ = nullptr;
    std::shared_ptr<vector<Models::QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist>> whitelist_ = nullptr;
    std::shared_ptr<string> whitelistIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
