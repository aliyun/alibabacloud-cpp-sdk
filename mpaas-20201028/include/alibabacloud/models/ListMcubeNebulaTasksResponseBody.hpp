// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBENEBULATASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBENEBULATASKSRESPONSEBODY_HPP_
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
  class ListMcubeNebulaTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeNebulaTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ListMcubeNebulaTaskResult, listMcubeNebulaTaskResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeNebulaTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ListMcubeNebulaTaskResult, listMcubeNebulaTaskResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ListMcubeNebulaTasksResponseBody() = default ;
    ListMcubeNebulaTasksResponseBody(const ListMcubeNebulaTasksResponseBody &) = default ;
    ListMcubeNebulaTasksResponseBody(ListMcubeNebulaTasksResponseBody &&) = default ;
    ListMcubeNebulaTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeNebulaTasksResponseBody() = default ;
    ListMcubeNebulaTasksResponseBody& operator=(const ListMcubeNebulaTasksResponseBody &) = default ;
    ListMcubeNebulaTasksResponseBody& operator=(ListMcubeNebulaTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListMcubeNebulaTaskResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListMcubeNebulaTaskResult& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(NebulaTaskInfo, nebulaTaskInfo_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, ListMcubeNebulaTaskResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(NebulaTaskInfo, nebulaTaskInfo_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      ListMcubeNebulaTaskResult() = default ;
      ListMcubeNebulaTaskResult(const ListMcubeNebulaTaskResult &) = default ;
      ListMcubeNebulaTaskResult(ListMcubeNebulaTaskResult &&) = default ;
      ListMcubeNebulaTaskResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListMcubeNebulaTaskResult() = default ;
      ListMcubeNebulaTaskResult& operator=(const ListMcubeNebulaTaskResult &) = default ;
      ListMcubeNebulaTaskResult& operator=(ListMcubeNebulaTaskResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NebulaTaskInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NebulaTaskInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AppCode, appCode_);
          DARABONBA_PTR_TO_JSON(BizType, bizType_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(GmtModifiedStr, gmtModifiedStr_);
          DARABONBA_PTR_TO_JSON(GreyConfigInfo, greyConfigInfo_);
          DARABONBA_PTR_TO_JSON(GreyEndtime, greyEndtime_);
          DARABONBA_PTR_TO_JSON(GreyEndtimeData, greyEndtimeData_);
          DARABONBA_PTR_TO_JSON(GreyEndtimeStr, greyEndtimeStr_);
          DARABONBA_PTR_TO_JSON(GreyNum, greyNum_);
          DARABONBA_PTR_TO_JSON(GreyUrl, greyUrl_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Memo, memo_);
          DARABONBA_PTR_TO_JSON(Modifier, modifier_);
          DARABONBA_PTR_TO_JSON(PackageId, packageId_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(Platform, platform_);
          DARABONBA_PTR_TO_JSON(ProductId, productId_);
          DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
          DARABONBA_PTR_TO_JSON(PublishMode, publishMode_);
          DARABONBA_PTR_TO_JSON(PublishType, publishType_);
          DARABONBA_PTR_TO_JSON(ReleaseVersion, releaseVersion_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SyncResult, syncResult_);
          DARABONBA_PTR_TO_JSON(TaskName, taskName_);
          DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_TO_JSON(TaskType, taskType_);
          DARABONBA_PTR_TO_JSON(TaskVersion, taskVersion_);
          DARABONBA_PTR_TO_JSON(UpgradeNoticeNum, upgradeNoticeNum_);
          DARABONBA_PTR_TO_JSON(UpgradeProgress, upgradeProgress_);
          DARABONBA_PTR_TO_JSON(WhitelistIds, whitelistIds_);
        };
        friend void from_json(const Darabonba::Json& j, NebulaTaskInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
          DARABONBA_PTR_FROM_JSON(BizType, bizType_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(GmtModifiedStr, gmtModifiedStr_);
          DARABONBA_PTR_FROM_JSON(GreyConfigInfo, greyConfigInfo_);
          DARABONBA_PTR_FROM_JSON(GreyEndtime, greyEndtime_);
          DARABONBA_PTR_FROM_JSON(GreyEndtimeData, greyEndtimeData_);
          DARABONBA_PTR_FROM_JSON(GreyEndtimeStr, greyEndtimeStr_);
          DARABONBA_PTR_FROM_JSON(GreyNum, greyNum_);
          DARABONBA_PTR_FROM_JSON(GreyUrl, greyUrl_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Memo, memo_);
          DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
          DARABONBA_PTR_FROM_JSON(PackageId, packageId_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(Platform, platform_);
          DARABONBA_PTR_FROM_JSON(ProductId, productId_);
          DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
          DARABONBA_PTR_FROM_JSON(PublishMode, publishMode_);
          DARABONBA_PTR_FROM_JSON(PublishType, publishType_);
          DARABONBA_PTR_FROM_JSON(ReleaseVersion, releaseVersion_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SyncResult, syncResult_);
          DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
          DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
          DARABONBA_PTR_FROM_JSON(TaskVersion, taskVersion_);
          DARABONBA_PTR_FROM_JSON(UpgradeNoticeNum, upgradeNoticeNum_);
          DARABONBA_PTR_FROM_JSON(UpgradeProgress, upgradeProgress_);
          DARABONBA_PTR_FROM_JSON(WhitelistIds, whitelistIds_);
        };
        NebulaTaskInfo() = default ;
        NebulaTaskInfo(const NebulaTaskInfo &) = default ;
        NebulaTaskInfo(NebulaTaskInfo &&) = default ;
        NebulaTaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NebulaTaskInfo() = default ;
        NebulaTaskInfo& operator=(const NebulaTaskInfo &) = default ;
        NebulaTaskInfo& operator=(NebulaTaskInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appCode_ == nullptr
        && this->bizType_ == nullptr && this->creator_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->gmtModifiedStr_ == nullptr
        && this->greyConfigInfo_ == nullptr && this->greyEndtime_ == nullptr && this->greyEndtimeData_ == nullptr && this->greyEndtimeStr_ == nullptr && this->greyNum_ == nullptr
        && this->greyUrl_ == nullptr && this->id_ == nullptr && this->memo_ == nullptr && this->modifier_ == nullptr && this->packageId_ == nullptr
        && this->percent_ == nullptr && this->platform_ == nullptr && this->productId_ == nullptr && this->productVersion_ == nullptr && this->publishMode_ == nullptr
        && this->publishType_ == nullptr && this->releaseVersion_ == nullptr && this->status_ == nullptr && this->syncResult_ == nullptr && this->taskName_ == nullptr
        && this->taskStatus_ == nullptr && this->taskType_ == nullptr && this->taskVersion_ == nullptr && this->upgradeNoticeNum_ == nullptr && this->upgradeProgress_ == nullptr
        && this->whitelistIds_ == nullptr; };
        // appCode Field Functions 
        bool hasAppCode() const { return this->appCode_ != nullptr;};
        void deleteAppCode() { this->appCode_ = nullptr;};
        inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
        inline NebulaTaskInfo& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


        // bizType Field Functions 
        bool hasBizType() const { return this->bizType_ != nullptr;};
        void deleteBizType() { this->bizType_ = nullptr;};
        inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
        inline NebulaTaskInfo& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline NebulaTaskInfo& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline NebulaTaskInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline NebulaTaskInfo& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // gmtModifiedStr Field Functions 
        bool hasGmtModifiedStr() const { return this->gmtModifiedStr_ != nullptr;};
        void deleteGmtModifiedStr() { this->gmtModifiedStr_ = nullptr;};
        inline string getGmtModifiedStr() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedStr_, "") };
        inline NebulaTaskInfo& setGmtModifiedStr(string gmtModifiedStr) { DARABONBA_PTR_SET_VALUE(gmtModifiedStr_, gmtModifiedStr) };


        // greyConfigInfo Field Functions 
        bool hasGreyConfigInfo() const { return this->greyConfigInfo_ != nullptr;};
        void deleteGreyConfigInfo() { this->greyConfigInfo_ = nullptr;};
        inline string getGreyConfigInfo() const { DARABONBA_PTR_GET_DEFAULT(greyConfigInfo_, "") };
        inline NebulaTaskInfo& setGreyConfigInfo(string greyConfigInfo) { DARABONBA_PTR_SET_VALUE(greyConfigInfo_, greyConfigInfo) };


        // greyEndtime Field Functions 
        bool hasGreyEndtime() const { return this->greyEndtime_ != nullptr;};
        void deleteGreyEndtime() { this->greyEndtime_ = nullptr;};
        inline string getGreyEndtime() const { DARABONBA_PTR_GET_DEFAULT(greyEndtime_, "") };
        inline NebulaTaskInfo& setGreyEndtime(string greyEndtime) { DARABONBA_PTR_SET_VALUE(greyEndtime_, greyEndtime) };


        // greyEndtimeData Field Functions 
        bool hasGreyEndtimeData() const { return this->greyEndtimeData_ != nullptr;};
        void deleteGreyEndtimeData() { this->greyEndtimeData_ = nullptr;};
        inline string getGreyEndtimeData() const { DARABONBA_PTR_GET_DEFAULT(greyEndtimeData_, "") };
        inline NebulaTaskInfo& setGreyEndtimeData(string greyEndtimeData) { DARABONBA_PTR_SET_VALUE(greyEndtimeData_, greyEndtimeData) };


        // greyEndtimeStr Field Functions 
        bool hasGreyEndtimeStr() const { return this->greyEndtimeStr_ != nullptr;};
        void deleteGreyEndtimeStr() { this->greyEndtimeStr_ = nullptr;};
        inline string getGreyEndtimeStr() const { DARABONBA_PTR_GET_DEFAULT(greyEndtimeStr_, "") };
        inline NebulaTaskInfo& setGreyEndtimeStr(string greyEndtimeStr) { DARABONBA_PTR_SET_VALUE(greyEndtimeStr_, greyEndtimeStr) };


        // greyNum Field Functions 
        bool hasGreyNum() const { return this->greyNum_ != nullptr;};
        void deleteGreyNum() { this->greyNum_ = nullptr;};
        inline int32_t getGreyNum() const { DARABONBA_PTR_GET_DEFAULT(greyNum_, 0) };
        inline NebulaTaskInfo& setGreyNum(int32_t greyNum) { DARABONBA_PTR_SET_VALUE(greyNum_, greyNum) };


        // greyUrl Field Functions 
        bool hasGreyUrl() const { return this->greyUrl_ != nullptr;};
        void deleteGreyUrl() { this->greyUrl_ = nullptr;};
        inline string getGreyUrl() const { DARABONBA_PTR_GET_DEFAULT(greyUrl_, "") };
        inline NebulaTaskInfo& setGreyUrl(string greyUrl) { DARABONBA_PTR_SET_VALUE(greyUrl_, greyUrl) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline NebulaTaskInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // memo Field Functions 
        bool hasMemo() const { return this->memo_ != nullptr;};
        void deleteMemo() { this->memo_ = nullptr;};
        inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
        inline NebulaTaskInfo& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


        // modifier Field Functions 
        bool hasModifier() const { return this->modifier_ != nullptr;};
        void deleteModifier() { this->modifier_ = nullptr;};
        inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
        inline NebulaTaskInfo& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


        // packageId Field Functions 
        bool hasPackageId() const { return this->packageId_ != nullptr;};
        void deletePackageId() { this->packageId_ = nullptr;};
        inline int64_t getPackageId() const { DARABONBA_PTR_GET_DEFAULT(packageId_, 0L) };
        inline NebulaTaskInfo& setPackageId(int64_t packageId) { DARABONBA_PTR_SET_VALUE(packageId_, packageId) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline int32_t getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, 0) };
        inline NebulaTaskInfo& setPercent(int32_t percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // platform Field Functions 
        bool hasPlatform() const { return this->platform_ != nullptr;};
        void deletePlatform() { this->platform_ = nullptr;};
        inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
        inline NebulaTaskInfo& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


        // productId Field Functions 
        bool hasProductId() const { return this->productId_ != nullptr;};
        void deleteProductId() { this->productId_ = nullptr;};
        inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
        inline NebulaTaskInfo& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


        // productVersion Field Functions 
        bool hasProductVersion() const { return this->productVersion_ != nullptr;};
        void deleteProductVersion() { this->productVersion_ = nullptr;};
        inline string getProductVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
        inline NebulaTaskInfo& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


        // publishMode Field Functions 
        bool hasPublishMode() const { return this->publishMode_ != nullptr;};
        void deletePublishMode() { this->publishMode_ = nullptr;};
        inline int32_t getPublishMode() const { DARABONBA_PTR_GET_DEFAULT(publishMode_, 0) };
        inline NebulaTaskInfo& setPublishMode(int32_t publishMode) { DARABONBA_PTR_SET_VALUE(publishMode_, publishMode) };


        // publishType Field Functions 
        bool hasPublishType() const { return this->publishType_ != nullptr;};
        void deletePublishType() { this->publishType_ = nullptr;};
        inline int32_t getPublishType() const { DARABONBA_PTR_GET_DEFAULT(publishType_, 0) };
        inline NebulaTaskInfo& setPublishType(int32_t publishType) { DARABONBA_PTR_SET_VALUE(publishType_, publishType) };


        // releaseVersion Field Functions 
        bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
        void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
        inline string getReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
        inline NebulaTaskInfo& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline NebulaTaskInfo& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // syncResult Field Functions 
        bool hasSyncResult() const { return this->syncResult_ != nullptr;};
        void deleteSyncResult() { this->syncResult_ = nullptr;};
        inline string getSyncResult() const { DARABONBA_PTR_GET_DEFAULT(syncResult_, "") };
        inline NebulaTaskInfo& setSyncResult(string syncResult) { DARABONBA_PTR_SET_VALUE(syncResult_, syncResult) };


        // taskName Field Functions 
        bool hasTaskName() const { return this->taskName_ != nullptr;};
        void deleteTaskName() { this->taskName_ = nullptr;};
        inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
        inline NebulaTaskInfo& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


        // taskStatus Field Functions 
        bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
        void deleteTaskStatus() { this->taskStatus_ = nullptr;};
        inline int32_t getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
        inline NebulaTaskInfo& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


        // taskType Field Functions 
        bool hasTaskType() const { return this->taskType_ != nullptr;};
        void deleteTaskType() { this->taskType_ = nullptr;};
        inline int32_t getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
        inline NebulaTaskInfo& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


        // taskVersion Field Functions 
        bool hasTaskVersion() const { return this->taskVersion_ != nullptr;};
        void deleteTaskVersion() { this->taskVersion_ = nullptr;};
        inline int64_t getTaskVersion() const { DARABONBA_PTR_GET_DEFAULT(taskVersion_, 0L) };
        inline NebulaTaskInfo& setTaskVersion(int64_t taskVersion) { DARABONBA_PTR_SET_VALUE(taskVersion_, taskVersion) };


        // upgradeNoticeNum Field Functions 
        bool hasUpgradeNoticeNum() const { return this->upgradeNoticeNum_ != nullptr;};
        void deleteUpgradeNoticeNum() { this->upgradeNoticeNum_ = nullptr;};
        inline int64_t getUpgradeNoticeNum() const { DARABONBA_PTR_GET_DEFAULT(upgradeNoticeNum_, 0L) };
        inline NebulaTaskInfo& setUpgradeNoticeNum(int64_t upgradeNoticeNum) { DARABONBA_PTR_SET_VALUE(upgradeNoticeNum_, upgradeNoticeNum) };


        // upgradeProgress Field Functions 
        bool hasUpgradeProgress() const { return this->upgradeProgress_ != nullptr;};
        void deleteUpgradeProgress() { this->upgradeProgress_ = nullptr;};
        inline string getUpgradeProgress() const { DARABONBA_PTR_GET_DEFAULT(upgradeProgress_, "") };
        inline NebulaTaskInfo& setUpgradeProgress(string upgradeProgress) { DARABONBA_PTR_SET_VALUE(upgradeProgress_, upgradeProgress) };


        // whitelistIds Field Functions 
        bool hasWhitelistIds() const { return this->whitelistIds_ != nullptr;};
        void deleteWhitelistIds() { this->whitelistIds_ = nullptr;};
        inline string getWhitelistIds() const { DARABONBA_PTR_GET_DEFAULT(whitelistIds_, "") };
        inline NebulaTaskInfo& setWhitelistIds(string whitelistIds) { DARABONBA_PTR_SET_VALUE(whitelistIds_, whitelistIds) };


      protected:
        shared_ptr<string> appCode_ {};
        shared_ptr<string> bizType_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<string> gmtModifiedStr_ {};
        shared_ptr<string> greyConfigInfo_ {};
        shared_ptr<string> greyEndtime_ {};
        shared_ptr<string> greyEndtimeData_ {};
        shared_ptr<string> greyEndtimeStr_ {};
        shared_ptr<int32_t> greyNum_ {};
        shared_ptr<string> greyUrl_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> memo_ {};
        shared_ptr<string> modifier_ {};
        shared_ptr<int64_t> packageId_ {};
        shared_ptr<int32_t> percent_ {};
        shared_ptr<string> platform_ {};
        shared_ptr<string> productId_ {};
        shared_ptr<string> productVersion_ {};
        shared_ptr<int32_t> publishMode_ {};
        shared_ptr<int32_t> publishType_ {};
        shared_ptr<string> releaseVersion_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<string> syncResult_ {};
        shared_ptr<string> taskName_ {};
        shared_ptr<int32_t> taskStatus_ {};
        shared_ptr<int32_t> taskType_ {};
        shared_ptr<int64_t> taskVersion_ {};
        shared_ptr<int64_t> upgradeNoticeNum_ {};
        shared_ptr<string> upgradeProgress_ {};
        shared_ptr<string> whitelistIds_ {};
      };

      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->nebulaTaskInfo_ == nullptr && this->requestId_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline ListMcubeNebulaTaskResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // nebulaTaskInfo Field Functions 
      bool hasNebulaTaskInfo() const { return this->nebulaTaskInfo_ != nullptr;};
      void deleteNebulaTaskInfo() { this->nebulaTaskInfo_ = nullptr;};
      inline const vector<ListMcubeNebulaTaskResult::NebulaTaskInfo> & getNebulaTaskInfo() const { DARABONBA_PTR_GET_CONST(nebulaTaskInfo_, vector<ListMcubeNebulaTaskResult::NebulaTaskInfo>) };
      inline vector<ListMcubeNebulaTaskResult::NebulaTaskInfo> getNebulaTaskInfo() { DARABONBA_PTR_GET(nebulaTaskInfo_, vector<ListMcubeNebulaTaskResult::NebulaTaskInfo>) };
      inline ListMcubeNebulaTaskResult& setNebulaTaskInfo(const vector<ListMcubeNebulaTaskResult::NebulaTaskInfo> & nebulaTaskInfo) { DARABONBA_PTR_SET_VALUE(nebulaTaskInfo_, nebulaTaskInfo) };
      inline ListMcubeNebulaTaskResult& setNebulaTaskInfo(vector<ListMcubeNebulaTaskResult::NebulaTaskInfo> && nebulaTaskInfo) { DARABONBA_PTR_SET_RVALUE(nebulaTaskInfo_, nebulaTaskInfo) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline ListMcubeNebulaTaskResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline ListMcubeNebulaTaskResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline ListMcubeNebulaTaskResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> errorCode_ {};
      shared_ptr<vector<ListMcubeNebulaTaskResult::NebulaTaskInfo>> nebulaTaskInfo_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->listMcubeNebulaTaskResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // listMcubeNebulaTaskResult Field Functions 
    bool hasListMcubeNebulaTaskResult() const { return this->listMcubeNebulaTaskResult_ != nullptr;};
    void deleteListMcubeNebulaTaskResult() { this->listMcubeNebulaTaskResult_ = nullptr;};
    inline const ListMcubeNebulaTasksResponseBody::ListMcubeNebulaTaskResult & getListMcubeNebulaTaskResult() const { DARABONBA_PTR_GET_CONST(listMcubeNebulaTaskResult_, ListMcubeNebulaTasksResponseBody::ListMcubeNebulaTaskResult) };
    inline ListMcubeNebulaTasksResponseBody::ListMcubeNebulaTaskResult getListMcubeNebulaTaskResult() { DARABONBA_PTR_GET(listMcubeNebulaTaskResult_, ListMcubeNebulaTasksResponseBody::ListMcubeNebulaTaskResult) };
    inline ListMcubeNebulaTasksResponseBody& setListMcubeNebulaTaskResult(const ListMcubeNebulaTasksResponseBody::ListMcubeNebulaTaskResult & listMcubeNebulaTaskResult) { DARABONBA_PTR_SET_VALUE(listMcubeNebulaTaskResult_, listMcubeNebulaTaskResult) };
    inline ListMcubeNebulaTasksResponseBody& setListMcubeNebulaTaskResult(ListMcubeNebulaTasksResponseBody::ListMcubeNebulaTaskResult && listMcubeNebulaTaskResult) { DARABONBA_PTR_SET_RVALUE(listMcubeNebulaTaskResult_, listMcubeNebulaTaskResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMcubeNebulaTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ListMcubeNebulaTasksResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ListMcubeNebulaTasksResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<ListMcubeNebulaTasksResponseBody::ListMcubeNebulaTaskResult> listMcubeNebulaTaskResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
