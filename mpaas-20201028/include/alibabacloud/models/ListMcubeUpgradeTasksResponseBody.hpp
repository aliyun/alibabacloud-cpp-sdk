// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBEUPGRADETASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBEUPGRADETASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMcubeUpgradeTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeUpgradeTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ListTaskResult, listTaskResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeUpgradeTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ListTaskResult, listTaskResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ListMcubeUpgradeTasksResponseBody() = default ;
    ListMcubeUpgradeTasksResponseBody(const ListMcubeUpgradeTasksResponseBody &) = default ;
    ListMcubeUpgradeTasksResponseBody(ListMcubeUpgradeTasksResponseBody &&) = default ;
    ListMcubeUpgradeTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeUpgradeTasksResponseBody() = default ;
    ListMcubeUpgradeTasksResponseBody& operator=(const ListMcubeUpgradeTasksResponseBody &) = default ;
    ListMcubeUpgradeTasksResponseBody& operator=(ListMcubeUpgradeTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListTaskResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListTaskResult& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(TaskInfo, taskInfo_);
      };
      friend void from_json(const Darabonba::Json& j, ListTaskResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(TaskInfo, taskInfo_);
      };
      ListTaskResult() = default ;
      ListTaskResult(const ListTaskResult &) = default ;
      ListTaskResult(ListTaskResult &&) = default ;
      ListTaskResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListTaskResult() = default ;
      ListTaskResult& operator=(const ListTaskResult &) = default ;
      ListTaskResult& operator=(ListTaskResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TaskInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskInfo& obj) { 
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
        friend void from_json(const Darabonba::Json& j, TaskInfo& obj) { 
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
        TaskInfo() = default ;
        TaskInfo(const TaskInfo &) = default ;
        TaskInfo(TaskInfo &&) = default ;
        TaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaskInfo() = default ;
        TaskInfo& operator=(const TaskInfo &) = default ;
        TaskInfo& operator=(TaskInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appCode_ == nullptr
        && this->creator_ == nullptr && this->devicePercent_ == nullptr && this->executionOrder_ == nullptr && this->gmtCreate_ == nullptr && this->gmtCreateStr_ == nullptr
        && this->gmtModified_ == nullptr && this->gmtModifiedStr_ == nullptr && this->greyConfigInfo_ == nullptr && this->greyEndtime_ == nullptr && this->greyNotice_ == nullptr
        && this->greyNum_ == nullptr && this->greyPausePoint_ == nullptr && this->greyPauseType_ == nullptr && this->greyUv_ == nullptr && this->historyForce_ == nullptr
        && this->huobanNoticeId_ == nullptr && this->huobanUrl_ == nullptr && this->id_ == nullptr && this->innerVersion_ == nullptr && this->isEnterprise_ == nullptr
        && this->isOfficial_ == nullptr && this->isPush_ == nullptr && this->isRelease_ == nullptr && this->maxVersion_ == nullptr && this->memo_ == nullptr
        && this->modifier_ == nullptr && this->packageInfoId_ == nullptr && this->platform_ == nullptr && this->productId_ == nullptr && this->productVersion_ == nullptr
        && this->publishMode_ == nullptr && this->publishType_ == nullptr && this->pushContent_ == nullptr && this->realGreyEndtime_ == nullptr && this->realGreyEndtimeStr_ == nullptr
        && this->realGreyEndtype_ == nullptr && this->realGreyNum_ == nullptr && this->realGreyUv_ == nullptr && this->silentType_ == nullptr && this->syncResult_ == nullptr
        && this->taskStatus_ == nullptr && this->upgradeContent_ == nullptr && this->upgradeType_ == nullptr && this->upgradeValidTime_ == nullptr && this->whitelistIds_ == nullptr; };
        // appCode Field Functions 
        bool hasAppCode() const { return this->appCode_ != nullptr;};
        void deleteAppCode() { this->appCode_ = nullptr;};
        inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
        inline TaskInfo& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline TaskInfo& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // devicePercent Field Functions 
        bool hasDevicePercent() const { return this->devicePercent_ != nullptr;};
        void deleteDevicePercent() { this->devicePercent_ = nullptr;};
        inline int32_t getDevicePercent() const { DARABONBA_PTR_GET_DEFAULT(devicePercent_, 0) };
        inline TaskInfo& setDevicePercent(int32_t devicePercent) { DARABONBA_PTR_SET_VALUE(devicePercent_, devicePercent) };


        // executionOrder Field Functions 
        bool hasExecutionOrder() const { return this->executionOrder_ != nullptr;};
        void deleteExecutionOrder() { this->executionOrder_ = nullptr;};
        inline int32_t getExecutionOrder() const { DARABONBA_PTR_GET_DEFAULT(executionOrder_, 0) };
        inline TaskInfo& setExecutionOrder(int32_t executionOrder) { DARABONBA_PTR_SET_VALUE(executionOrder_, executionOrder) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline TaskInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtCreateStr Field Functions 
        bool hasGmtCreateStr() const { return this->gmtCreateStr_ != nullptr;};
        void deleteGmtCreateStr() { this->gmtCreateStr_ = nullptr;};
        inline string getGmtCreateStr() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateStr_, "") };
        inline TaskInfo& setGmtCreateStr(string gmtCreateStr) { DARABONBA_PTR_SET_VALUE(gmtCreateStr_, gmtCreateStr) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline TaskInfo& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // gmtModifiedStr Field Functions 
        bool hasGmtModifiedStr() const { return this->gmtModifiedStr_ != nullptr;};
        void deleteGmtModifiedStr() { this->gmtModifiedStr_ = nullptr;};
        inline string getGmtModifiedStr() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedStr_, "") };
        inline TaskInfo& setGmtModifiedStr(string gmtModifiedStr) { DARABONBA_PTR_SET_VALUE(gmtModifiedStr_, gmtModifiedStr) };


        // greyConfigInfo Field Functions 
        bool hasGreyConfigInfo() const { return this->greyConfigInfo_ != nullptr;};
        void deleteGreyConfigInfo() { this->greyConfigInfo_ = nullptr;};
        inline string getGreyConfigInfo() const { DARABONBA_PTR_GET_DEFAULT(greyConfigInfo_, "") };
        inline TaskInfo& setGreyConfigInfo(string greyConfigInfo) { DARABONBA_PTR_SET_VALUE(greyConfigInfo_, greyConfigInfo) };


        // greyEndtime Field Functions 
        bool hasGreyEndtime() const { return this->greyEndtime_ != nullptr;};
        void deleteGreyEndtime() { this->greyEndtime_ = nullptr;};
        inline string getGreyEndtime() const { DARABONBA_PTR_GET_DEFAULT(greyEndtime_, "") };
        inline TaskInfo& setGreyEndtime(string greyEndtime) { DARABONBA_PTR_SET_VALUE(greyEndtime_, greyEndtime) };


        // greyNotice Field Functions 
        bool hasGreyNotice() const { return this->greyNotice_ != nullptr;};
        void deleteGreyNotice() { this->greyNotice_ = nullptr;};
        inline int32_t getGreyNotice() const { DARABONBA_PTR_GET_DEFAULT(greyNotice_, 0) };
        inline TaskInfo& setGreyNotice(int32_t greyNotice) { DARABONBA_PTR_SET_VALUE(greyNotice_, greyNotice) };


        // greyNum Field Functions 
        bool hasGreyNum() const { return this->greyNum_ != nullptr;};
        void deleteGreyNum() { this->greyNum_ = nullptr;};
        inline int32_t getGreyNum() const { DARABONBA_PTR_GET_DEFAULT(greyNum_, 0) };
        inline TaskInfo& setGreyNum(int32_t greyNum) { DARABONBA_PTR_SET_VALUE(greyNum_, greyNum) };


        // greyPausePoint Field Functions 
        bool hasGreyPausePoint() const { return this->greyPausePoint_ != nullptr;};
        void deleteGreyPausePoint() { this->greyPausePoint_ = nullptr;};
        inline int32_t getGreyPausePoint() const { DARABONBA_PTR_GET_DEFAULT(greyPausePoint_, 0) };
        inline TaskInfo& setGreyPausePoint(int32_t greyPausePoint) { DARABONBA_PTR_SET_VALUE(greyPausePoint_, greyPausePoint) };


        // greyPauseType Field Functions 
        bool hasGreyPauseType() const { return this->greyPauseType_ != nullptr;};
        void deleteGreyPauseType() { this->greyPauseType_ = nullptr;};
        inline int32_t getGreyPauseType() const { DARABONBA_PTR_GET_DEFAULT(greyPauseType_, 0) };
        inline TaskInfo& setGreyPauseType(int32_t greyPauseType) { DARABONBA_PTR_SET_VALUE(greyPauseType_, greyPauseType) };


        // greyUv Field Functions 
        bool hasGreyUv() const { return this->greyUv_ != nullptr;};
        void deleteGreyUv() { this->greyUv_ = nullptr;};
        inline int32_t getGreyUv() const { DARABONBA_PTR_GET_DEFAULT(greyUv_, 0) };
        inline TaskInfo& setGreyUv(int32_t greyUv) { DARABONBA_PTR_SET_VALUE(greyUv_, greyUv) };


        // historyForce Field Functions 
        bool hasHistoryForce() const { return this->historyForce_ != nullptr;};
        void deleteHistoryForce() { this->historyForce_ = nullptr;};
        inline int32_t getHistoryForce() const { DARABONBA_PTR_GET_DEFAULT(historyForce_, 0) };
        inline TaskInfo& setHistoryForce(int32_t historyForce) { DARABONBA_PTR_SET_VALUE(historyForce_, historyForce) };


        // huobanNoticeId Field Functions 
        bool hasHuobanNoticeId() const { return this->huobanNoticeId_ != nullptr;};
        void deleteHuobanNoticeId() { this->huobanNoticeId_ = nullptr;};
        inline string getHuobanNoticeId() const { DARABONBA_PTR_GET_DEFAULT(huobanNoticeId_, "") };
        inline TaskInfo& setHuobanNoticeId(string huobanNoticeId) { DARABONBA_PTR_SET_VALUE(huobanNoticeId_, huobanNoticeId) };


        // huobanUrl Field Functions 
        bool hasHuobanUrl() const { return this->huobanUrl_ != nullptr;};
        void deleteHuobanUrl() { this->huobanUrl_ = nullptr;};
        inline string getHuobanUrl() const { DARABONBA_PTR_GET_DEFAULT(huobanUrl_, "") };
        inline TaskInfo& setHuobanUrl(string huobanUrl) { DARABONBA_PTR_SET_VALUE(huobanUrl_, huobanUrl) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline TaskInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // innerVersion Field Functions 
        bool hasInnerVersion() const { return this->innerVersion_ != nullptr;};
        void deleteInnerVersion() { this->innerVersion_ = nullptr;};
        inline string getInnerVersion() const { DARABONBA_PTR_GET_DEFAULT(innerVersion_, "") };
        inline TaskInfo& setInnerVersion(string innerVersion) { DARABONBA_PTR_SET_VALUE(innerVersion_, innerVersion) };


        // isEnterprise Field Functions 
        bool hasIsEnterprise() const { return this->isEnterprise_ != nullptr;};
        void deleteIsEnterprise() { this->isEnterprise_ = nullptr;};
        inline int32_t getIsEnterprise() const { DARABONBA_PTR_GET_DEFAULT(isEnterprise_, 0) };
        inline TaskInfo& setIsEnterprise(int32_t isEnterprise) { DARABONBA_PTR_SET_VALUE(isEnterprise_, isEnterprise) };


        // isOfficial Field Functions 
        bool hasIsOfficial() const { return this->isOfficial_ != nullptr;};
        void deleteIsOfficial() { this->isOfficial_ = nullptr;};
        inline int32_t getIsOfficial() const { DARABONBA_PTR_GET_DEFAULT(isOfficial_, 0) };
        inline TaskInfo& setIsOfficial(int32_t isOfficial) { DARABONBA_PTR_SET_VALUE(isOfficial_, isOfficial) };


        // isPush Field Functions 
        bool hasIsPush() const { return this->isPush_ != nullptr;};
        void deleteIsPush() { this->isPush_ = nullptr;};
        inline int32_t getIsPush() const { DARABONBA_PTR_GET_DEFAULT(isPush_, 0) };
        inline TaskInfo& setIsPush(int32_t isPush) { DARABONBA_PTR_SET_VALUE(isPush_, isPush) };


        // isRelease Field Functions 
        bool hasIsRelease() const { return this->isRelease_ != nullptr;};
        void deleteIsRelease() { this->isRelease_ = nullptr;};
        inline int32_t getIsRelease() const { DARABONBA_PTR_GET_DEFAULT(isRelease_, 0) };
        inline TaskInfo& setIsRelease(int32_t isRelease) { DARABONBA_PTR_SET_VALUE(isRelease_, isRelease) };


        // maxVersion Field Functions 
        bool hasMaxVersion() const { return this->maxVersion_ != nullptr;};
        void deleteMaxVersion() { this->maxVersion_ = nullptr;};
        inline string getMaxVersion() const { DARABONBA_PTR_GET_DEFAULT(maxVersion_, "") };
        inline TaskInfo& setMaxVersion(string maxVersion) { DARABONBA_PTR_SET_VALUE(maxVersion_, maxVersion) };


        // memo Field Functions 
        bool hasMemo() const { return this->memo_ != nullptr;};
        void deleteMemo() { this->memo_ = nullptr;};
        inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
        inline TaskInfo& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


        // modifier Field Functions 
        bool hasModifier() const { return this->modifier_ != nullptr;};
        void deleteModifier() { this->modifier_ = nullptr;};
        inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
        inline TaskInfo& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


        // packageInfoId Field Functions 
        bool hasPackageInfoId() const { return this->packageInfoId_ != nullptr;};
        void deletePackageInfoId() { this->packageInfoId_ = nullptr;};
        inline int64_t getPackageInfoId() const { DARABONBA_PTR_GET_DEFAULT(packageInfoId_, 0L) };
        inline TaskInfo& setPackageInfoId(int64_t packageInfoId) { DARABONBA_PTR_SET_VALUE(packageInfoId_, packageInfoId) };


        // platform Field Functions 
        bool hasPlatform() const { return this->platform_ != nullptr;};
        void deletePlatform() { this->platform_ = nullptr;};
        inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
        inline TaskInfo& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


        // productId Field Functions 
        bool hasProductId() const { return this->productId_ != nullptr;};
        void deleteProductId() { this->productId_ = nullptr;};
        inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
        inline TaskInfo& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


        // productVersion Field Functions 
        bool hasProductVersion() const { return this->productVersion_ != nullptr;};
        void deleteProductVersion() { this->productVersion_ = nullptr;};
        inline string getProductVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
        inline TaskInfo& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


        // publishMode Field Functions 
        bool hasPublishMode() const { return this->publishMode_ != nullptr;};
        void deletePublishMode() { this->publishMode_ = nullptr;};
        inline int32_t getPublishMode() const { DARABONBA_PTR_GET_DEFAULT(publishMode_, 0) };
        inline TaskInfo& setPublishMode(int32_t publishMode) { DARABONBA_PTR_SET_VALUE(publishMode_, publishMode) };


        // publishType Field Functions 
        bool hasPublishType() const { return this->publishType_ != nullptr;};
        void deletePublishType() { this->publishType_ = nullptr;};
        inline int32_t getPublishType() const { DARABONBA_PTR_GET_DEFAULT(publishType_, 0) };
        inline TaskInfo& setPublishType(int32_t publishType) { DARABONBA_PTR_SET_VALUE(publishType_, publishType) };


        // pushContent Field Functions 
        bool hasPushContent() const { return this->pushContent_ != nullptr;};
        void deletePushContent() { this->pushContent_ = nullptr;};
        inline string getPushContent() const { DARABONBA_PTR_GET_DEFAULT(pushContent_, "") };
        inline TaskInfo& setPushContent(string pushContent) { DARABONBA_PTR_SET_VALUE(pushContent_, pushContent) };


        // realGreyEndtime Field Functions 
        bool hasRealGreyEndtime() const { return this->realGreyEndtime_ != nullptr;};
        void deleteRealGreyEndtime() { this->realGreyEndtime_ = nullptr;};
        inline string getRealGreyEndtime() const { DARABONBA_PTR_GET_DEFAULT(realGreyEndtime_, "") };
        inline TaskInfo& setRealGreyEndtime(string realGreyEndtime) { DARABONBA_PTR_SET_VALUE(realGreyEndtime_, realGreyEndtime) };


        // realGreyEndtimeStr Field Functions 
        bool hasRealGreyEndtimeStr() const { return this->realGreyEndtimeStr_ != nullptr;};
        void deleteRealGreyEndtimeStr() { this->realGreyEndtimeStr_ = nullptr;};
        inline string getRealGreyEndtimeStr() const { DARABONBA_PTR_GET_DEFAULT(realGreyEndtimeStr_, "") };
        inline TaskInfo& setRealGreyEndtimeStr(string realGreyEndtimeStr) { DARABONBA_PTR_SET_VALUE(realGreyEndtimeStr_, realGreyEndtimeStr) };


        // realGreyEndtype Field Functions 
        bool hasRealGreyEndtype() const { return this->realGreyEndtype_ != nullptr;};
        void deleteRealGreyEndtype() { this->realGreyEndtype_ = nullptr;};
        inline int32_t getRealGreyEndtype() const { DARABONBA_PTR_GET_DEFAULT(realGreyEndtype_, 0) };
        inline TaskInfo& setRealGreyEndtype(int32_t realGreyEndtype) { DARABONBA_PTR_SET_VALUE(realGreyEndtype_, realGreyEndtype) };


        // realGreyNum Field Functions 
        bool hasRealGreyNum() const { return this->realGreyNum_ != nullptr;};
        void deleteRealGreyNum() { this->realGreyNum_ = nullptr;};
        inline int32_t getRealGreyNum() const { DARABONBA_PTR_GET_DEFAULT(realGreyNum_, 0) };
        inline TaskInfo& setRealGreyNum(int32_t realGreyNum) { DARABONBA_PTR_SET_VALUE(realGreyNum_, realGreyNum) };


        // realGreyUv Field Functions 
        bool hasRealGreyUv() const { return this->realGreyUv_ != nullptr;};
        void deleteRealGreyUv() { this->realGreyUv_ = nullptr;};
        inline int32_t getRealGreyUv() const { DARABONBA_PTR_GET_DEFAULT(realGreyUv_, 0) };
        inline TaskInfo& setRealGreyUv(int32_t realGreyUv) { DARABONBA_PTR_SET_VALUE(realGreyUv_, realGreyUv) };


        // silentType Field Functions 
        bool hasSilentType() const { return this->silentType_ != nullptr;};
        void deleteSilentType() { this->silentType_ = nullptr;};
        inline int32_t getSilentType() const { DARABONBA_PTR_GET_DEFAULT(silentType_, 0) };
        inline TaskInfo& setSilentType(int32_t silentType) { DARABONBA_PTR_SET_VALUE(silentType_, silentType) };


        // syncResult Field Functions 
        bool hasSyncResult() const { return this->syncResult_ != nullptr;};
        void deleteSyncResult() { this->syncResult_ = nullptr;};
        inline string getSyncResult() const { DARABONBA_PTR_GET_DEFAULT(syncResult_, "") };
        inline TaskInfo& setSyncResult(string syncResult) { DARABONBA_PTR_SET_VALUE(syncResult_, syncResult) };


        // taskStatus Field Functions 
        bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
        void deleteTaskStatus() { this->taskStatus_ = nullptr;};
        inline int32_t getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
        inline TaskInfo& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


        // upgradeContent Field Functions 
        bool hasUpgradeContent() const { return this->upgradeContent_ != nullptr;};
        void deleteUpgradeContent() { this->upgradeContent_ = nullptr;};
        inline string getUpgradeContent() const { DARABONBA_PTR_GET_DEFAULT(upgradeContent_, "") };
        inline TaskInfo& setUpgradeContent(string upgradeContent) { DARABONBA_PTR_SET_VALUE(upgradeContent_, upgradeContent) };


        // upgradeType Field Functions 
        bool hasUpgradeType() const { return this->upgradeType_ != nullptr;};
        void deleteUpgradeType() { this->upgradeType_ = nullptr;};
        inline int32_t getUpgradeType() const { DARABONBA_PTR_GET_DEFAULT(upgradeType_, 0) };
        inline TaskInfo& setUpgradeType(int32_t upgradeType) { DARABONBA_PTR_SET_VALUE(upgradeType_, upgradeType) };


        // upgradeValidTime Field Functions 
        bool hasUpgradeValidTime() const { return this->upgradeValidTime_ != nullptr;};
        void deleteUpgradeValidTime() { this->upgradeValidTime_ = nullptr;};
        inline int32_t getUpgradeValidTime() const { DARABONBA_PTR_GET_DEFAULT(upgradeValidTime_, 0) };
        inline TaskInfo& setUpgradeValidTime(int32_t upgradeValidTime) { DARABONBA_PTR_SET_VALUE(upgradeValidTime_, upgradeValidTime) };


        // whitelistIds Field Functions 
        bool hasWhitelistIds() const { return this->whitelistIds_ != nullptr;};
        void deleteWhitelistIds() { this->whitelistIds_ = nullptr;};
        inline string getWhitelistIds() const { DARABONBA_PTR_GET_DEFAULT(whitelistIds_, "") };
        inline TaskInfo& setWhitelistIds(string whitelistIds) { DARABONBA_PTR_SET_VALUE(whitelistIds_, whitelistIds) };


      protected:
        shared_ptr<string> appCode_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<int32_t> devicePercent_ {};
        shared_ptr<int32_t> executionOrder_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtCreateStr_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<string> gmtModifiedStr_ {};
        shared_ptr<string> greyConfigInfo_ {};
        shared_ptr<string> greyEndtime_ {};
        shared_ptr<int32_t> greyNotice_ {};
        shared_ptr<int32_t> greyNum_ {};
        shared_ptr<int32_t> greyPausePoint_ {};
        shared_ptr<int32_t> greyPauseType_ {};
        shared_ptr<int32_t> greyUv_ {};
        shared_ptr<int32_t> historyForce_ {};
        shared_ptr<string> huobanNoticeId_ {};
        shared_ptr<string> huobanUrl_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> innerVersion_ {};
        shared_ptr<int32_t> isEnterprise_ {};
        shared_ptr<int32_t> isOfficial_ {};
        shared_ptr<int32_t> isPush_ {};
        shared_ptr<int32_t> isRelease_ {};
        shared_ptr<string> maxVersion_ {};
        shared_ptr<string> memo_ {};
        shared_ptr<string> modifier_ {};
        shared_ptr<int64_t> packageInfoId_ {};
        shared_ptr<string> platform_ {};
        shared_ptr<string> productId_ {};
        shared_ptr<string> productVersion_ {};
        shared_ptr<int32_t> publishMode_ {};
        shared_ptr<int32_t> publishType_ {};
        shared_ptr<string> pushContent_ {};
        shared_ptr<string> realGreyEndtime_ {};
        shared_ptr<string> realGreyEndtimeStr_ {};
        shared_ptr<int32_t> realGreyEndtype_ {};
        shared_ptr<int32_t> realGreyNum_ {};
        shared_ptr<int32_t> realGreyUv_ {};
        shared_ptr<int32_t> silentType_ {};
        shared_ptr<string> syncResult_ {};
        shared_ptr<int32_t> taskStatus_ {};
        shared_ptr<string> upgradeContent_ {};
        shared_ptr<int32_t> upgradeType_ {};
        shared_ptr<int32_t> upgradeValidTime_ {};
        shared_ptr<string> whitelistIds_ {};
      };

      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->requestId_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr && this->taskInfo_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline ListTaskResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline ListTaskResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline ListTaskResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline ListTaskResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // taskInfo Field Functions 
      bool hasTaskInfo() const { return this->taskInfo_ != nullptr;};
      void deleteTaskInfo() { this->taskInfo_ = nullptr;};
      inline const vector<ListTaskResult::TaskInfo> & getTaskInfo() const { DARABONBA_PTR_GET_CONST(taskInfo_, vector<ListTaskResult::TaskInfo>) };
      inline vector<ListTaskResult::TaskInfo> getTaskInfo() { DARABONBA_PTR_GET(taskInfo_, vector<ListTaskResult::TaskInfo>) };
      inline ListTaskResult& setTaskInfo(const vector<ListTaskResult::TaskInfo> & taskInfo) { DARABONBA_PTR_SET_VALUE(taskInfo_, taskInfo) };
      inline ListTaskResult& setTaskInfo(vector<ListTaskResult::TaskInfo> && taskInfo) { DARABONBA_PTR_SET_RVALUE(taskInfo_, taskInfo) };


    protected:
      shared_ptr<string> errorCode_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
      shared_ptr<vector<ListTaskResult::TaskInfo>> taskInfo_ {};
    };

    virtual bool empty() const override { return this->listTaskResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // listTaskResult Field Functions 
    bool hasListTaskResult() const { return this->listTaskResult_ != nullptr;};
    void deleteListTaskResult() { this->listTaskResult_ = nullptr;};
    inline const ListMcubeUpgradeTasksResponseBody::ListTaskResult & getListTaskResult() const { DARABONBA_PTR_GET_CONST(listTaskResult_, ListMcubeUpgradeTasksResponseBody::ListTaskResult) };
    inline ListMcubeUpgradeTasksResponseBody::ListTaskResult getListTaskResult() { DARABONBA_PTR_GET(listTaskResult_, ListMcubeUpgradeTasksResponseBody::ListTaskResult) };
    inline ListMcubeUpgradeTasksResponseBody& setListTaskResult(const ListMcubeUpgradeTasksResponseBody::ListTaskResult & listTaskResult) { DARABONBA_PTR_SET_VALUE(listTaskResult_, listTaskResult) };
    inline ListMcubeUpgradeTasksResponseBody& setListTaskResult(ListMcubeUpgradeTasksResponseBody::ListTaskResult && listTaskResult) { DARABONBA_PTR_SET_RVALUE(listTaskResult_, listTaskResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMcubeUpgradeTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ListMcubeUpgradeTasksResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ListMcubeUpgradeTasksResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<ListMcubeUpgradeTasksResponseBody::ListTaskResult> listTaskResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
