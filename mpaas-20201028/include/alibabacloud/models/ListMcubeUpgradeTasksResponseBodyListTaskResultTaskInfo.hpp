// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBEUPGRADETASKSRESPONSEBODYLISTTASKRESULTTASKINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBEUPGRADETASKSRESPONSEBODYLISTTASKRESULTTASKINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(DevicePercent, devicePercent_);
      DARABONBA_PTR_TO_JSON(ExecutionOrder, executionOrder_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtCreateStr, gmtCreateStr_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(GmtModifiedStr, gmtModifiedStr_);
      DARABONBA_PTR_TO_JSON(GreyConfigInfo, greyConfigInfo_);
      DARABONBA_PTR_TO_JSON(GreyEndtime, greyEndtime_);
      DARABONBA_PTR_TO_JSON(GreyNotice, greyNotice_);
      DARABONBA_PTR_TO_JSON(GreyNum, greyNum_);
      DARABONBA_PTR_TO_JSON(GreyPausePoint, greyPausePoint_);
      DARABONBA_PTR_TO_JSON(GreyPauseType, greyPauseType_);
      DARABONBA_PTR_TO_JSON(GreyUv, greyUv_);
      DARABONBA_PTR_TO_JSON(HistoryForce, historyForce_);
      DARABONBA_PTR_TO_JSON(HuobanNoticeId, huobanNoticeId_);
      DARABONBA_PTR_TO_JSON(HuobanUrl, huobanUrl_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InnerVersion, innerVersion_);
      DARABONBA_PTR_TO_JSON(IsEnterprise, isEnterprise_);
      DARABONBA_PTR_TO_JSON(IsOfficial, isOfficial_);
      DARABONBA_PTR_TO_JSON(IsPush, isPush_);
      DARABONBA_PTR_TO_JSON(IsRelease, isRelease_);
      DARABONBA_PTR_TO_JSON(MaxVersion, maxVersion_);
      DARABONBA_PTR_TO_JSON(Memo, memo_);
      DARABONBA_PTR_TO_JSON(Modifier, modifier_);
      DARABONBA_PTR_TO_JSON(PackageInfoId, packageInfoId_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_TO_JSON(PublishMode, publishMode_);
      DARABONBA_PTR_TO_JSON(PublishType, publishType_);
      DARABONBA_PTR_TO_JSON(PushContent, pushContent_);
      DARABONBA_PTR_TO_JSON(RealGreyEndtime, realGreyEndtime_);
      DARABONBA_PTR_TO_JSON(RealGreyEndtimeStr, realGreyEndtimeStr_);
      DARABONBA_PTR_TO_JSON(RealGreyEndtype, realGreyEndtype_);
      DARABONBA_PTR_TO_JSON(RealGreyNum, realGreyNum_);
      DARABONBA_PTR_TO_JSON(RealGreyUv, realGreyUv_);
      DARABONBA_PTR_TO_JSON(SilentType, silentType_);
      DARABONBA_PTR_TO_JSON(SyncResult, syncResult_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(UpgradeContent, upgradeContent_);
      DARABONBA_PTR_TO_JSON(UpgradeType, upgradeType_);
      DARABONBA_PTR_TO_JSON(UpgradeValidTime, upgradeValidTime_);
      DARABONBA_PTR_TO_JSON(WhitelistIds, whitelistIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(DevicePercent, devicePercent_);
      DARABONBA_PTR_FROM_JSON(ExecutionOrder, executionOrder_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtCreateStr, gmtCreateStr_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedStr, gmtModifiedStr_);
      DARABONBA_PTR_FROM_JSON(GreyConfigInfo, greyConfigInfo_);
      DARABONBA_PTR_FROM_JSON(GreyEndtime, greyEndtime_);
      DARABONBA_PTR_FROM_JSON(GreyNotice, greyNotice_);
      DARABONBA_PTR_FROM_JSON(GreyNum, greyNum_);
      DARABONBA_PTR_FROM_JSON(GreyPausePoint, greyPausePoint_);
      DARABONBA_PTR_FROM_JSON(GreyPauseType, greyPauseType_);
      DARABONBA_PTR_FROM_JSON(GreyUv, greyUv_);
      DARABONBA_PTR_FROM_JSON(HistoryForce, historyForce_);
      DARABONBA_PTR_FROM_JSON(HuobanNoticeId, huobanNoticeId_);
      DARABONBA_PTR_FROM_JSON(HuobanUrl, huobanUrl_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InnerVersion, innerVersion_);
      DARABONBA_PTR_FROM_JSON(IsEnterprise, isEnterprise_);
      DARABONBA_PTR_FROM_JSON(IsOfficial, isOfficial_);
      DARABONBA_PTR_FROM_JSON(IsPush, isPush_);
      DARABONBA_PTR_FROM_JSON(IsRelease, isRelease_);
      DARABONBA_PTR_FROM_JSON(MaxVersion, maxVersion_);
      DARABONBA_PTR_FROM_JSON(Memo, memo_);
      DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(PackageInfoId, packageInfoId_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_FROM_JSON(PublishMode, publishMode_);
      DARABONBA_PTR_FROM_JSON(PublishType, publishType_);
      DARABONBA_PTR_FROM_JSON(PushContent, pushContent_);
      DARABONBA_PTR_FROM_JSON(RealGreyEndtime, realGreyEndtime_);
      DARABONBA_PTR_FROM_JSON(RealGreyEndtimeStr, realGreyEndtimeStr_);
      DARABONBA_PTR_FROM_JSON(RealGreyEndtype, realGreyEndtype_);
      DARABONBA_PTR_FROM_JSON(RealGreyNum, realGreyNum_);
      DARABONBA_PTR_FROM_JSON(RealGreyUv, realGreyUv_);
      DARABONBA_PTR_FROM_JSON(SilentType, silentType_);
      DARABONBA_PTR_FROM_JSON(SyncResult, syncResult_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(UpgradeContent, upgradeContent_);
      DARABONBA_PTR_FROM_JSON(UpgradeType, upgradeType_);
      DARABONBA_PTR_FROM_JSON(UpgradeValidTime, upgradeValidTime_);
      DARABONBA_PTR_FROM_JSON(WhitelistIds, whitelistIds_);
    };
    ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo() = default ;
    ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo(const ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo &) = default ;
    ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo(ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo &&) = default ;
    ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo() = default ;
    ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& operator=(const ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo &) = default ;
    ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& operator=(ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && return this->creator_ == nullptr && return this->devicePercent_ == nullptr && return this->executionOrder_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtCreateStr_ == nullptr
        && return this->gmtModified_ == nullptr && return this->gmtModifiedStr_ == nullptr && return this->greyConfigInfo_ == nullptr && return this->greyEndtime_ == nullptr && return this->greyNotice_ == nullptr
        && return this->greyNum_ == nullptr && return this->greyPausePoint_ == nullptr && return this->greyPauseType_ == nullptr && return this->greyUv_ == nullptr && return this->historyForce_ == nullptr
        && return this->huobanNoticeId_ == nullptr && return this->huobanUrl_ == nullptr && return this->id_ == nullptr && return this->innerVersion_ == nullptr && return this->isEnterprise_ == nullptr
        && return this->isOfficial_ == nullptr && return this->isPush_ == nullptr && return this->isRelease_ == nullptr && return this->maxVersion_ == nullptr && return this->memo_ == nullptr
        && return this->modifier_ == nullptr && return this->packageInfoId_ == nullptr && return this->platform_ == nullptr && return this->productId_ == nullptr && return this->productVersion_ == nullptr
        && return this->publishMode_ == nullptr && return this->publishType_ == nullptr && return this->pushContent_ == nullptr && return this->realGreyEndtime_ == nullptr && return this->realGreyEndtimeStr_ == nullptr
        && return this->realGreyEndtype_ == nullptr && return this->realGreyNum_ == nullptr && return this->realGreyUv_ == nullptr && return this->silentType_ == nullptr && return this->syncResult_ == nullptr
        && return this->taskStatus_ == nullptr && return this->upgradeContent_ == nullptr && return this->upgradeType_ == nullptr && return this->upgradeValidTime_ == nullptr && return this->whitelistIds_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // devicePercent Field Functions 
    bool hasDevicePercent() const { return this->devicePercent_ != nullptr;};
    void deleteDevicePercent() { this->devicePercent_ = nullptr;};
    inline int32_t devicePercent() const { DARABONBA_PTR_GET_DEFAULT(devicePercent_, 0) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setDevicePercent(int32_t devicePercent) { DARABONBA_PTR_SET_VALUE(devicePercent_, devicePercent) };


    // executionOrder Field Functions 
    bool hasExecutionOrder() const { return this->executionOrder_ != nullptr;};
    void deleteExecutionOrder() { this->executionOrder_ = nullptr;};
    inline int32_t executionOrder() const { DARABONBA_PTR_GET_DEFAULT(executionOrder_, 0) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setExecutionOrder(int32_t executionOrder) { DARABONBA_PTR_SET_VALUE(executionOrder_, executionOrder) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtCreateStr Field Functions 
    bool hasGmtCreateStr() const { return this->gmtCreateStr_ != nullptr;};
    void deleteGmtCreateStr() { this->gmtCreateStr_ = nullptr;};
    inline string gmtCreateStr() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateStr_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setGmtCreateStr(string gmtCreateStr) { DARABONBA_PTR_SET_VALUE(gmtCreateStr_, gmtCreateStr) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // gmtModifiedStr Field Functions 
    bool hasGmtModifiedStr() const { return this->gmtModifiedStr_ != nullptr;};
    void deleteGmtModifiedStr() { this->gmtModifiedStr_ = nullptr;};
    inline string gmtModifiedStr() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedStr_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setGmtModifiedStr(string gmtModifiedStr) { DARABONBA_PTR_SET_VALUE(gmtModifiedStr_, gmtModifiedStr) };


    // greyConfigInfo Field Functions 
    bool hasGreyConfigInfo() const { return this->greyConfigInfo_ != nullptr;};
    void deleteGreyConfigInfo() { this->greyConfigInfo_ = nullptr;};
    inline string greyConfigInfo() const { DARABONBA_PTR_GET_DEFAULT(greyConfigInfo_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setGreyConfigInfo(string greyConfigInfo) { DARABONBA_PTR_SET_VALUE(greyConfigInfo_, greyConfigInfo) };


    // greyEndtime Field Functions 
    bool hasGreyEndtime() const { return this->greyEndtime_ != nullptr;};
    void deleteGreyEndtime() { this->greyEndtime_ = nullptr;};
    inline string greyEndtime() const { DARABONBA_PTR_GET_DEFAULT(greyEndtime_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setGreyEndtime(string greyEndtime) { DARABONBA_PTR_SET_VALUE(greyEndtime_, greyEndtime) };


    // greyNotice Field Functions 
    bool hasGreyNotice() const { return this->greyNotice_ != nullptr;};
    void deleteGreyNotice() { this->greyNotice_ = nullptr;};
    inline int32_t greyNotice() const { DARABONBA_PTR_GET_DEFAULT(greyNotice_, 0) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setGreyNotice(int32_t greyNotice) { DARABONBA_PTR_SET_VALUE(greyNotice_, greyNotice) };


    // greyNum Field Functions 
    bool hasGreyNum() const { return this->greyNum_ != nullptr;};
    void deleteGreyNum() { this->greyNum_ = nullptr;};
    inline int32_t greyNum() const { DARABONBA_PTR_GET_DEFAULT(greyNum_, 0) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setGreyNum(int32_t greyNum) { DARABONBA_PTR_SET_VALUE(greyNum_, greyNum) };


    // greyPausePoint Field Functions 
    bool hasGreyPausePoint() const { return this->greyPausePoint_ != nullptr;};
    void deleteGreyPausePoint() { this->greyPausePoint_ = nullptr;};
    inline int32_t greyPausePoint() const { DARABONBA_PTR_GET_DEFAULT(greyPausePoint_, 0) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setGreyPausePoint(int32_t greyPausePoint) { DARABONBA_PTR_SET_VALUE(greyPausePoint_, greyPausePoint) };


    // greyPauseType Field Functions 
    bool hasGreyPauseType() const { return this->greyPauseType_ != nullptr;};
    void deleteGreyPauseType() { this->greyPauseType_ = nullptr;};
    inline int32_t greyPauseType() const { DARABONBA_PTR_GET_DEFAULT(greyPauseType_, 0) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setGreyPauseType(int32_t greyPauseType) { DARABONBA_PTR_SET_VALUE(greyPauseType_, greyPauseType) };


    // greyUv Field Functions 
    bool hasGreyUv() const { return this->greyUv_ != nullptr;};
    void deleteGreyUv() { this->greyUv_ = nullptr;};
    inline int32_t greyUv() const { DARABONBA_PTR_GET_DEFAULT(greyUv_, 0) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setGreyUv(int32_t greyUv) { DARABONBA_PTR_SET_VALUE(greyUv_, greyUv) };


    // historyForce Field Functions 
    bool hasHistoryForce() const { return this->historyForce_ != nullptr;};
    void deleteHistoryForce() { this->historyForce_ = nullptr;};
    inline int32_t historyForce() const { DARABONBA_PTR_GET_DEFAULT(historyForce_, 0) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setHistoryForce(int32_t historyForce) { DARABONBA_PTR_SET_VALUE(historyForce_, historyForce) };


    // huobanNoticeId Field Functions 
    bool hasHuobanNoticeId() const { return this->huobanNoticeId_ != nullptr;};
    void deleteHuobanNoticeId() { this->huobanNoticeId_ = nullptr;};
    inline string huobanNoticeId() const { DARABONBA_PTR_GET_DEFAULT(huobanNoticeId_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setHuobanNoticeId(string huobanNoticeId) { DARABONBA_PTR_SET_VALUE(huobanNoticeId_, huobanNoticeId) };


    // huobanUrl Field Functions 
    bool hasHuobanUrl() const { return this->huobanUrl_ != nullptr;};
    void deleteHuobanUrl() { this->huobanUrl_ = nullptr;};
    inline string huobanUrl() const { DARABONBA_PTR_GET_DEFAULT(huobanUrl_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setHuobanUrl(string huobanUrl) { DARABONBA_PTR_SET_VALUE(huobanUrl_, huobanUrl) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // innerVersion Field Functions 
    bool hasInnerVersion() const { return this->innerVersion_ != nullptr;};
    void deleteInnerVersion() { this->innerVersion_ = nullptr;};
    inline string innerVersion() const { DARABONBA_PTR_GET_DEFAULT(innerVersion_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setInnerVersion(string innerVersion) { DARABONBA_PTR_SET_VALUE(innerVersion_, innerVersion) };


    // isEnterprise Field Functions 
    bool hasIsEnterprise() const { return this->isEnterprise_ != nullptr;};
    void deleteIsEnterprise() { this->isEnterprise_ = nullptr;};
    inline int32_t isEnterprise() const { DARABONBA_PTR_GET_DEFAULT(isEnterprise_, 0) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setIsEnterprise(int32_t isEnterprise) { DARABONBA_PTR_SET_VALUE(isEnterprise_, isEnterprise) };


    // isOfficial Field Functions 
    bool hasIsOfficial() const { return this->isOfficial_ != nullptr;};
    void deleteIsOfficial() { this->isOfficial_ = nullptr;};
    inline int32_t isOfficial() const { DARABONBA_PTR_GET_DEFAULT(isOfficial_, 0) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setIsOfficial(int32_t isOfficial) { DARABONBA_PTR_SET_VALUE(isOfficial_, isOfficial) };


    // isPush Field Functions 
    bool hasIsPush() const { return this->isPush_ != nullptr;};
    void deleteIsPush() { this->isPush_ = nullptr;};
    inline int32_t isPush() const { DARABONBA_PTR_GET_DEFAULT(isPush_, 0) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setIsPush(int32_t isPush) { DARABONBA_PTR_SET_VALUE(isPush_, isPush) };


    // isRelease Field Functions 
    bool hasIsRelease() const { return this->isRelease_ != nullptr;};
    void deleteIsRelease() { this->isRelease_ = nullptr;};
    inline int32_t isRelease() const { DARABONBA_PTR_GET_DEFAULT(isRelease_, 0) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setIsRelease(int32_t isRelease) { DARABONBA_PTR_SET_VALUE(isRelease_, isRelease) };


    // maxVersion Field Functions 
    bool hasMaxVersion() const { return this->maxVersion_ != nullptr;};
    void deleteMaxVersion() { this->maxVersion_ = nullptr;};
    inline string maxVersion() const { DARABONBA_PTR_GET_DEFAULT(maxVersion_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setMaxVersion(string maxVersion) { DARABONBA_PTR_SET_VALUE(maxVersion_, maxVersion) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // packageInfoId Field Functions 
    bool hasPackageInfoId() const { return this->packageInfoId_ != nullptr;};
    void deletePackageInfoId() { this->packageInfoId_ = nullptr;};
    inline int64_t packageInfoId() const { DARABONBA_PTR_GET_DEFAULT(packageInfoId_, 0L) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setPackageInfoId(int64_t packageInfoId) { DARABONBA_PTR_SET_VALUE(packageInfoId_, packageInfoId) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // productVersion Field Functions 
    bool hasProductVersion() const { return this->productVersion_ != nullptr;};
    void deleteProductVersion() { this->productVersion_ = nullptr;};
    inline string productVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


    // publishMode Field Functions 
    bool hasPublishMode() const { return this->publishMode_ != nullptr;};
    void deletePublishMode() { this->publishMode_ = nullptr;};
    inline int32_t publishMode() const { DARABONBA_PTR_GET_DEFAULT(publishMode_, 0) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setPublishMode(int32_t publishMode) { DARABONBA_PTR_SET_VALUE(publishMode_, publishMode) };


    // publishType Field Functions 
    bool hasPublishType() const { return this->publishType_ != nullptr;};
    void deletePublishType() { this->publishType_ = nullptr;};
    inline int32_t publishType() const { DARABONBA_PTR_GET_DEFAULT(publishType_, 0) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setPublishType(int32_t publishType) { DARABONBA_PTR_SET_VALUE(publishType_, publishType) };


    // pushContent Field Functions 
    bool hasPushContent() const { return this->pushContent_ != nullptr;};
    void deletePushContent() { this->pushContent_ = nullptr;};
    inline string pushContent() const { DARABONBA_PTR_GET_DEFAULT(pushContent_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setPushContent(string pushContent) { DARABONBA_PTR_SET_VALUE(pushContent_, pushContent) };


    // realGreyEndtime Field Functions 
    bool hasRealGreyEndtime() const { return this->realGreyEndtime_ != nullptr;};
    void deleteRealGreyEndtime() { this->realGreyEndtime_ = nullptr;};
    inline string realGreyEndtime() const { DARABONBA_PTR_GET_DEFAULT(realGreyEndtime_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setRealGreyEndtime(string realGreyEndtime) { DARABONBA_PTR_SET_VALUE(realGreyEndtime_, realGreyEndtime) };


    // realGreyEndtimeStr Field Functions 
    bool hasRealGreyEndtimeStr() const { return this->realGreyEndtimeStr_ != nullptr;};
    void deleteRealGreyEndtimeStr() { this->realGreyEndtimeStr_ = nullptr;};
    inline string realGreyEndtimeStr() const { DARABONBA_PTR_GET_DEFAULT(realGreyEndtimeStr_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setRealGreyEndtimeStr(string realGreyEndtimeStr) { DARABONBA_PTR_SET_VALUE(realGreyEndtimeStr_, realGreyEndtimeStr) };


    // realGreyEndtype Field Functions 
    bool hasRealGreyEndtype() const { return this->realGreyEndtype_ != nullptr;};
    void deleteRealGreyEndtype() { this->realGreyEndtype_ = nullptr;};
    inline int32_t realGreyEndtype() const { DARABONBA_PTR_GET_DEFAULT(realGreyEndtype_, 0) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setRealGreyEndtype(int32_t realGreyEndtype) { DARABONBA_PTR_SET_VALUE(realGreyEndtype_, realGreyEndtype) };


    // realGreyNum Field Functions 
    bool hasRealGreyNum() const { return this->realGreyNum_ != nullptr;};
    void deleteRealGreyNum() { this->realGreyNum_ = nullptr;};
    inline int32_t realGreyNum() const { DARABONBA_PTR_GET_DEFAULT(realGreyNum_, 0) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setRealGreyNum(int32_t realGreyNum) { DARABONBA_PTR_SET_VALUE(realGreyNum_, realGreyNum) };


    // realGreyUv Field Functions 
    bool hasRealGreyUv() const { return this->realGreyUv_ != nullptr;};
    void deleteRealGreyUv() { this->realGreyUv_ = nullptr;};
    inline int32_t realGreyUv() const { DARABONBA_PTR_GET_DEFAULT(realGreyUv_, 0) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setRealGreyUv(int32_t realGreyUv) { DARABONBA_PTR_SET_VALUE(realGreyUv_, realGreyUv) };


    // silentType Field Functions 
    bool hasSilentType() const { return this->silentType_ != nullptr;};
    void deleteSilentType() { this->silentType_ = nullptr;};
    inline int32_t silentType() const { DARABONBA_PTR_GET_DEFAULT(silentType_, 0) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setSilentType(int32_t silentType) { DARABONBA_PTR_SET_VALUE(silentType_, silentType) };


    // syncResult Field Functions 
    bool hasSyncResult() const { return this->syncResult_ != nullptr;};
    void deleteSyncResult() { this->syncResult_ = nullptr;};
    inline string syncResult() const { DARABONBA_PTR_GET_DEFAULT(syncResult_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setSyncResult(string syncResult) { DARABONBA_PTR_SET_VALUE(syncResult_, syncResult) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int32_t taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // upgradeContent Field Functions 
    bool hasUpgradeContent() const { return this->upgradeContent_ != nullptr;};
    void deleteUpgradeContent() { this->upgradeContent_ = nullptr;};
    inline string upgradeContent() const { DARABONBA_PTR_GET_DEFAULT(upgradeContent_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setUpgradeContent(string upgradeContent) { DARABONBA_PTR_SET_VALUE(upgradeContent_, upgradeContent) };


    // upgradeType Field Functions 
    bool hasUpgradeType() const { return this->upgradeType_ != nullptr;};
    void deleteUpgradeType() { this->upgradeType_ = nullptr;};
    inline int32_t upgradeType() const { DARABONBA_PTR_GET_DEFAULT(upgradeType_, 0) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setUpgradeType(int32_t upgradeType) { DARABONBA_PTR_SET_VALUE(upgradeType_, upgradeType) };


    // upgradeValidTime Field Functions 
    bool hasUpgradeValidTime() const { return this->upgradeValidTime_ != nullptr;};
    void deleteUpgradeValidTime() { this->upgradeValidTime_ = nullptr;};
    inline int32_t upgradeValidTime() const { DARABONBA_PTR_GET_DEFAULT(upgradeValidTime_, 0) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setUpgradeValidTime(int32_t upgradeValidTime) { DARABONBA_PTR_SET_VALUE(upgradeValidTime_, upgradeValidTime) };


    // whitelistIds Field Functions 
    bool hasWhitelistIds() const { return this->whitelistIds_ != nullptr;};
    void deleteWhitelistIds() { this->whitelistIds_ = nullptr;};
    inline string whitelistIds() const { DARABONBA_PTR_GET_DEFAULT(whitelistIds_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setWhitelistIds(string whitelistIds) { DARABONBA_PTR_SET_VALUE(whitelistIds_, whitelistIds) };


  protected:
    std::shared_ptr<string> appCode_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<int32_t> devicePercent_ = nullptr;
    std::shared_ptr<int32_t> executionOrder_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtCreateStr_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> gmtModifiedStr_ = nullptr;
    std::shared_ptr<string> greyConfigInfo_ = nullptr;
    std::shared_ptr<string> greyEndtime_ = nullptr;
    std::shared_ptr<int32_t> greyNotice_ = nullptr;
    std::shared_ptr<int32_t> greyNum_ = nullptr;
    std::shared_ptr<int32_t> greyPausePoint_ = nullptr;
    std::shared_ptr<int32_t> greyPauseType_ = nullptr;
    std::shared_ptr<int32_t> greyUv_ = nullptr;
    std::shared_ptr<int32_t> historyForce_ = nullptr;
    std::shared_ptr<string> huobanNoticeId_ = nullptr;
    std::shared_ptr<string> huobanUrl_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> innerVersion_ = nullptr;
    std::shared_ptr<int32_t> isEnterprise_ = nullptr;
    std::shared_ptr<int32_t> isOfficial_ = nullptr;
    std::shared_ptr<int32_t> isPush_ = nullptr;
    std::shared_ptr<int32_t> isRelease_ = nullptr;
    std::shared_ptr<string> maxVersion_ = nullptr;
    std::shared_ptr<string> memo_ = nullptr;
    std::shared_ptr<string> modifier_ = nullptr;
    std::shared_ptr<int64_t> packageInfoId_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<string> productId_ = nullptr;
    std::shared_ptr<string> productVersion_ = nullptr;
    std::shared_ptr<int32_t> publishMode_ = nullptr;
    std::shared_ptr<int32_t> publishType_ = nullptr;
    std::shared_ptr<string> pushContent_ = nullptr;
    std::shared_ptr<string> realGreyEndtime_ = nullptr;
    std::shared_ptr<string> realGreyEndtimeStr_ = nullptr;
    std::shared_ptr<int32_t> realGreyEndtype_ = nullptr;
    std::shared_ptr<int32_t> realGreyNum_ = nullptr;
    std::shared_ptr<int32_t> realGreyUv_ = nullptr;
    std::shared_ptr<int32_t> silentType_ = nullptr;
    std::shared_ptr<string> syncResult_ = nullptr;
    std::shared_ptr<int32_t> taskStatus_ = nullptr;
    std::shared_ptr<string> upgradeContent_ = nullptr;
    std::shared_ptr<int32_t> upgradeType_ = nullptr;
    std::shared_ptr<int32_t> upgradeValidTime_ = nullptr;
    std::shared_ptr<string> whitelistIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
