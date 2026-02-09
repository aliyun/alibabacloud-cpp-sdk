// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCUBENEBULATASKDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMCUBENEBULATASKDETAILRESPONSEBODY_HPP_
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
  class GetMcubeNebulaTaskDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcubeNebulaTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GetMcubeNebulaTaskDetailResult, getMcubeNebulaTaskDetailResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, GetMcubeNebulaTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GetMcubeNebulaTaskDetailResult, getMcubeNebulaTaskDetailResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    GetMcubeNebulaTaskDetailResponseBody() = default ;
    GetMcubeNebulaTaskDetailResponseBody(const GetMcubeNebulaTaskDetailResponseBody &) = default ;
    GetMcubeNebulaTaskDetailResponseBody(GetMcubeNebulaTaskDetailResponseBody &&) = default ;
    GetMcubeNebulaTaskDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcubeNebulaTaskDetailResponseBody() = default ;
    GetMcubeNebulaTaskDetailResponseBody& operator=(const GetMcubeNebulaTaskDetailResponseBody &) = default ;
    GetMcubeNebulaTaskDetailResponseBody& operator=(GetMcubeNebulaTaskDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GetMcubeNebulaTaskDetailResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GetMcubeNebulaTaskDetailResult& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(NebulaTaskDetail, nebulaTaskDetail_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, GetMcubeNebulaTaskDetailResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(NebulaTaskDetail, nebulaTaskDetail_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      GetMcubeNebulaTaskDetailResult() = default ;
      GetMcubeNebulaTaskDetailResult(const GetMcubeNebulaTaskDetailResult &) = default ;
      GetMcubeNebulaTaskDetailResult(GetMcubeNebulaTaskDetailResult &&) = default ;
      GetMcubeNebulaTaskDetailResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GetMcubeNebulaTaskDetailResult() = default ;
      GetMcubeNebulaTaskDetailResult& operator=(const GetMcubeNebulaTaskDetailResult &) = default ;
      GetMcubeNebulaTaskDetailResult& operator=(GetMcubeNebulaTaskDetailResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NebulaTaskDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NebulaTaskDetail& obj) { 
          DARABONBA_PTR_TO_JSON(AppCode, appCode_);
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(Atomic, atomic_);
          DARABONBA_PTR_TO_JSON(BaseInfoId, baseInfoId_);
          DARABONBA_PTR_TO_JSON(BizType, bizType_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(Cronexpress, cronexpress_);
          DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
          DARABONBA_PTR_TO_JSON(ExtraData, extraData_);
          DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
          DARABONBA_PTR_TO_JSON(FullRepair, fullRepair_);
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
          DARABONBA_PTR_TO_JSON(IssueDesc, issueDesc_);
          DARABONBA_PTR_TO_JSON(Memo, memo_);
          DARABONBA_PTR_TO_JSON(Modifier, modifier_);
          DARABONBA_PTR_TO_JSON(OssPath, ossPath_);
          DARABONBA_PTR_TO_JSON(PackageId, packageId_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(Platform, platform_);
          DARABONBA_PTR_TO_JSON(ProductId, productId_);
          DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
          DARABONBA_PTR_TO_JSON(PublishMode, publishMode_);
          DARABONBA_PTR_TO_JSON(PublishPeriod, publishPeriod_);
          DARABONBA_PTR_TO_JSON(PublishType, publishType_);
          DARABONBA_PTR_TO_JSON(QuickRollback, quickRollback_);
          DARABONBA_PTR_TO_JSON(ReleaseVersion, releaseVersion_);
          DARABONBA_PTR_TO_JSON(RuleJsonList, ruleJsonList_);
          DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
          DARABONBA_PTR_TO_JSON(SourceName, sourceName_);
          DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SyncResult, syncResult_);
          DARABONBA_PTR_TO_JSON(SyncType, syncType_);
          DARABONBA_PTR_TO_JSON(TaskName, taskName_);
          DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_TO_JSON(TaskType, taskType_);
          DARABONBA_PTR_TO_JSON(TaskVersion, taskVersion_);
          DARABONBA_PTR_TO_JSON(UpgradeNoticeNum, upgradeNoticeNum_);
          DARABONBA_PTR_TO_JSON(UpgradeProgress, upgradeProgress_);
          DARABONBA_PTR_TO_JSON(WhitelistIds, whitelistIds_);
          DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
        };
        friend void from_json(const Darabonba::Json& j, NebulaTaskDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(Atomic, atomic_);
          DARABONBA_PTR_FROM_JSON(BaseInfoId, baseInfoId_);
          DARABONBA_PTR_FROM_JSON(BizType, bizType_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(Cronexpress, cronexpress_);
          DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
          DARABONBA_PTR_FROM_JSON(ExtraData, extraData_);
          DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
          DARABONBA_PTR_FROM_JSON(FullRepair, fullRepair_);
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
          DARABONBA_PTR_FROM_JSON(IssueDesc, issueDesc_);
          DARABONBA_PTR_FROM_JSON(Memo, memo_);
          DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
          DARABONBA_PTR_FROM_JSON(OssPath, ossPath_);
          DARABONBA_PTR_FROM_JSON(PackageId, packageId_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(Platform, platform_);
          DARABONBA_PTR_FROM_JSON(ProductId, productId_);
          DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
          DARABONBA_PTR_FROM_JSON(PublishMode, publishMode_);
          DARABONBA_PTR_FROM_JSON(PublishPeriod, publishPeriod_);
          DARABONBA_PTR_FROM_JSON(PublishType, publishType_);
          DARABONBA_PTR_FROM_JSON(QuickRollback, quickRollback_);
          DARABONBA_PTR_FROM_JSON(ReleaseVersion, releaseVersion_);
          DARABONBA_PTR_FROM_JSON(RuleJsonList, ruleJsonList_);
          DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
          DARABONBA_PTR_FROM_JSON(SourceName, sourceName_);
          DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SyncResult, syncResult_);
          DARABONBA_PTR_FROM_JSON(SyncType, syncType_);
          DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
          DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
          DARABONBA_PTR_FROM_JSON(TaskVersion, taskVersion_);
          DARABONBA_PTR_FROM_JSON(UpgradeNoticeNum, upgradeNoticeNum_);
          DARABONBA_PTR_FROM_JSON(UpgradeProgress, upgradeProgress_);
          DARABONBA_PTR_FROM_JSON(WhitelistIds, whitelistIds_);
          DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
        };
        NebulaTaskDetail() = default ;
        NebulaTaskDetail(const NebulaTaskDetail &) = default ;
        NebulaTaskDetail(NebulaTaskDetail &&) = default ;
        NebulaTaskDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NebulaTaskDetail() = default ;
        NebulaTaskDetail& operator=(const NebulaTaskDetail &) = default ;
        NebulaTaskDetail& operator=(NebulaTaskDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RuleJsonList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RuleJsonList& obj) { 
            DARABONBA_PTR_TO_JSON(Operation, operation_);
            DARABONBA_PTR_TO_JSON(RuleElement, ruleElement_);
            DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, RuleJsonList& obj) { 
            DARABONBA_PTR_FROM_JSON(Operation, operation_);
            DARABONBA_PTR_FROM_JSON(RuleElement, ruleElement_);
            DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          RuleJsonList() = default ;
          RuleJsonList(const RuleJsonList &) = default ;
          RuleJsonList(RuleJsonList &&) = default ;
          RuleJsonList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RuleJsonList() = default ;
          RuleJsonList& operator=(const RuleJsonList &) = default ;
          RuleJsonList& operator=(RuleJsonList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->operation_ == nullptr
        && this->ruleElement_ == nullptr && this->ruleType_ == nullptr && this->value_ == nullptr; };
          // operation Field Functions 
          bool hasOperation() const { return this->operation_ != nullptr;};
          void deleteOperation() { this->operation_ = nullptr;};
          inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
          inline RuleJsonList& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


          // ruleElement Field Functions 
          bool hasRuleElement() const { return this->ruleElement_ != nullptr;};
          void deleteRuleElement() { this->ruleElement_ = nullptr;};
          inline string getRuleElement() const { DARABONBA_PTR_GET_DEFAULT(ruleElement_, "") };
          inline RuleJsonList& setRuleElement(string ruleElement) { DARABONBA_PTR_SET_VALUE(ruleElement_, ruleElement) };


          // ruleType Field Functions 
          bool hasRuleType() const { return this->ruleType_ != nullptr;};
          void deleteRuleType() { this->ruleType_ = nullptr;};
          inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
          inline RuleJsonList& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline RuleJsonList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> operation_ {};
          shared_ptr<string> ruleElement_ {};
          shared_ptr<string> ruleType_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->appCode_ == nullptr
        && this->appId_ == nullptr && this->atomic_ == nullptr && this->baseInfoId_ == nullptr && this->bizType_ == nullptr && this->creator_ == nullptr
        && this->cronexpress_ == nullptr && this->downloadUrl_ == nullptr && this->extraData_ == nullptr && this->fileSize_ == nullptr && this->fullRepair_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->gmtModifiedStr_ == nullptr && this->greyConfigInfo_ == nullptr && this->greyEndtime_ == nullptr
        && this->greyEndtimeData_ == nullptr && this->greyEndtimeStr_ == nullptr && this->greyNum_ == nullptr && this->greyUrl_ == nullptr && this->id_ == nullptr
        && this->issueDesc_ == nullptr && this->memo_ == nullptr && this->modifier_ == nullptr && this->ossPath_ == nullptr && this->packageId_ == nullptr
        && this->percent_ == nullptr && this->platform_ == nullptr && this->productId_ == nullptr && this->productVersion_ == nullptr && this->publishMode_ == nullptr
        && this->publishPeriod_ == nullptr && this->publishType_ == nullptr && this->quickRollback_ == nullptr && this->releaseVersion_ == nullptr && this->ruleJsonList_ == nullptr
        && this->sourceId_ == nullptr && this->sourceName_ == nullptr && this->sourceType_ == nullptr && this->status_ == nullptr && this->syncResult_ == nullptr
        && this->syncType_ == nullptr && this->taskName_ == nullptr && this->taskStatus_ == nullptr && this->taskType_ == nullptr && this->taskVersion_ == nullptr
        && this->upgradeNoticeNum_ == nullptr && this->upgradeProgress_ == nullptr && this->whitelistIds_ == nullptr && this->workspaceId_ == nullptr; };
        // appCode Field Functions 
        bool hasAppCode() const { return this->appCode_ != nullptr;};
        void deleteAppCode() { this->appCode_ = nullptr;};
        inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
        inline NebulaTaskDetail& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline NebulaTaskDetail& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // atomic Field Functions 
        bool hasAtomic() const { return this->atomic_ != nullptr;};
        void deleteAtomic() { this->atomic_ = nullptr;};
        inline int32_t getAtomic() const { DARABONBA_PTR_GET_DEFAULT(atomic_, 0) };
        inline NebulaTaskDetail& setAtomic(int32_t atomic) { DARABONBA_PTR_SET_VALUE(atomic_, atomic) };


        // baseInfoId Field Functions 
        bool hasBaseInfoId() const { return this->baseInfoId_ != nullptr;};
        void deleteBaseInfoId() { this->baseInfoId_ = nullptr;};
        inline int64_t getBaseInfoId() const { DARABONBA_PTR_GET_DEFAULT(baseInfoId_, 0L) };
        inline NebulaTaskDetail& setBaseInfoId(int64_t baseInfoId) { DARABONBA_PTR_SET_VALUE(baseInfoId_, baseInfoId) };


        // bizType Field Functions 
        bool hasBizType() const { return this->bizType_ != nullptr;};
        void deleteBizType() { this->bizType_ = nullptr;};
        inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
        inline NebulaTaskDetail& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline NebulaTaskDetail& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // cronexpress Field Functions 
        bool hasCronexpress() const { return this->cronexpress_ != nullptr;};
        void deleteCronexpress() { this->cronexpress_ = nullptr;};
        inline int32_t getCronexpress() const { DARABONBA_PTR_GET_DEFAULT(cronexpress_, 0) };
        inline NebulaTaskDetail& setCronexpress(int32_t cronexpress) { DARABONBA_PTR_SET_VALUE(cronexpress_, cronexpress) };


        // downloadUrl Field Functions 
        bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
        void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
        inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
        inline NebulaTaskDetail& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


        // extraData Field Functions 
        bool hasExtraData() const { return this->extraData_ != nullptr;};
        void deleteExtraData() { this->extraData_ = nullptr;};
        inline string getExtraData() const { DARABONBA_PTR_GET_DEFAULT(extraData_, "") };
        inline NebulaTaskDetail& setExtraData(string extraData) { DARABONBA_PTR_SET_VALUE(extraData_, extraData) };


        // fileSize Field Functions 
        bool hasFileSize() const { return this->fileSize_ != nullptr;};
        void deleteFileSize() { this->fileSize_ = nullptr;};
        inline string getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
        inline NebulaTaskDetail& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


        // fullRepair Field Functions 
        bool hasFullRepair() const { return this->fullRepair_ != nullptr;};
        void deleteFullRepair() { this->fullRepair_ = nullptr;};
        inline int32_t getFullRepair() const { DARABONBA_PTR_GET_DEFAULT(fullRepair_, 0) };
        inline NebulaTaskDetail& setFullRepair(int32_t fullRepair) { DARABONBA_PTR_SET_VALUE(fullRepair_, fullRepair) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline NebulaTaskDetail& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline NebulaTaskDetail& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // gmtModifiedStr Field Functions 
        bool hasGmtModifiedStr() const { return this->gmtModifiedStr_ != nullptr;};
        void deleteGmtModifiedStr() { this->gmtModifiedStr_ = nullptr;};
        inline string getGmtModifiedStr() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedStr_, "") };
        inline NebulaTaskDetail& setGmtModifiedStr(string gmtModifiedStr) { DARABONBA_PTR_SET_VALUE(gmtModifiedStr_, gmtModifiedStr) };


        // greyConfigInfo Field Functions 
        bool hasGreyConfigInfo() const { return this->greyConfigInfo_ != nullptr;};
        void deleteGreyConfigInfo() { this->greyConfigInfo_ = nullptr;};
        inline string getGreyConfigInfo() const { DARABONBA_PTR_GET_DEFAULT(greyConfigInfo_, "") };
        inline NebulaTaskDetail& setGreyConfigInfo(string greyConfigInfo) { DARABONBA_PTR_SET_VALUE(greyConfigInfo_, greyConfigInfo) };


        // greyEndtime Field Functions 
        bool hasGreyEndtime() const { return this->greyEndtime_ != nullptr;};
        void deleteGreyEndtime() { this->greyEndtime_ = nullptr;};
        inline string getGreyEndtime() const { DARABONBA_PTR_GET_DEFAULT(greyEndtime_, "") };
        inline NebulaTaskDetail& setGreyEndtime(string greyEndtime) { DARABONBA_PTR_SET_VALUE(greyEndtime_, greyEndtime) };


        // greyEndtimeData Field Functions 
        bool hasGreyEndtimeData() const { return this->greyEndtimeData_ != nullptr;};
        void deleteGreyEndtimeData() { this->greyEndtimeData_ = nullptr;};
        inline string getGreyEndtimeData() const { DARABONBA_PTR_GET_DEFAULT(greyEndtimeData_, "") };
        inline NebulaTaskDetail& setGreyEndtimeData(string greyEndtimeData) { DARABONBA_PTR_SET_VALUE(greyEndtimeData_, greyEndtimeData) };


        // greyEndtimeStr Field Functions 
        bool hasGreyEndtimeStr() const { return this->greyEndtimeStr_ != nullptr;};
        void deleteGreyEndtimeStr() { this->greyEndtimeStr_ = nullptr;};
        inline string getGreyEndtimeStr() const { DARABONBA_PTR_GET_DEFAULT(greyEndtimeStr_, "") };
        inline NebulaTaskDetail& setGreyEndtimeStr(string greyEndtimeStr) { DARABONBA_PTR_SET_VALUE(greyEndtimeStr_, greyEndtimeStr) };


        // greyNum Field Functions 
        bool hasGreyNum() const { return this->greyNum_ != nullptr;};
        void deleteGreyNum() { this->greyNum_ = nullptr;};
        inline int32_t getGreyNum() const { DARABONBA_PTR_GET_DEFAULT(greyNum_, 0) };
        inline NebulaTaskDetail& setGreyNum(int32_t greyNum) { DARABONBA_PTR_SET_VALUE(greyNum_, greyNum) };


        // greyUrl Field Functions 
        bool hasGreyUrl() const { return this->greyUrl_ != nullptr;};
        void deleteGreyUrl() { this->greyUrl_ = nullptr;};
        inline string getGreyUrl() const { DARABONBA_PTR_GET_DEFAULT(greyUrl_, "") };
        inline NebulaTaskDetail& setGreyUrl(string greyUrl) { DARABONBA_PTR_SET_VALUE(greyUrl_, greyUrl) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline NebulaTaskDetail& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // issueDesc Field Functions 
        bool hasIssueDesc() const { return this->issueDesc_ != nullptr;};
        void deleteIssueDesc() { this->issueDesc_ = nullptr;};
        inline string getIssueDesc() const { DARABONBA_PTR_GET_DEFAULT(issueDesc_, "") };
        inline NebulaTaskDetail& setIssueDesc(string issueDesc) { DARABONBA_PTR_SET_VALUE(issueDesc_, issueDesc) };


        // memo Field Functions 
        bool hasMemo() const { return this->memo_ != nullptr;};
        void deleteMemo() { this->memo_ = nullptr;};
        inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
        inline NebulaTaskDetail& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


        // modifier Field Functions 
        bool hasModifier() const { return this->modifier_ != nullptr;};
        void deleteModifier() { this->modifier_ = nullptr;};
        inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
        inline NebulaTaskDetail& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


        // ossPath Field Functions 
        bool hasOssPath() const { return this->ossPath_ != nullptr;};
        void deleteOssPath() { this->ossPath_ = nullptr;};
        inline string getOssPath() const { DARABONBA_PTR_GET_DEFAULT(ossPath_, "") };
        inline NebulaTaskDetail& setOssPath(string ossPath) { DARABONBA_PTR_SET_VALUE(ossPath_, ossPath) };


        // packageId Field Functions 
        bool hasPackageId() const { return this->packageId_ != nullptr;};
        void deletePackageId() { this->packageId_ = nullptr;};
        inline int64_t getPackageId() const { DARABONBA_PTR_GET_DEFAULT(packageId_, 0L) };
        inline NebulaTaskDetail& setPackageId(int64_t packageId) { DARABONBA_PTR_SET_VALUE(packageId_, packageId) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline int32_t getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, 0) };
        inline NebulaTaskDetail& setPercent(int32_t percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // platform Field Functions 
        bool hasPlatform() const { return this->platform_ != nullptr;};
        void deletePlatform() { this->platform_ = nullptr;};
        inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
        inline NebulaTaskDetail& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


        // productId Field Functions 
        bool hasProductId() const { return this->productId_ != nullptr;};
        void deleteProductId() { this->productId_ = nullptr;};
        inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
        inline NebulaTaskDetail& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


        // productVersion Field Functions 
        bool hasProductVersion() const { return this->productVersion_ != nullptr;};
        void deleteProductVersion() { this->productVersion_ = nullptr;};
        inline string getProductVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
        inline NebulaTaskDetail& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


        // publishMode Field Functions 
        bool hasPublishMode() const { return this->publishMode_ != nullptr;};
        void deletePublishMode() { this->publishMode_ = nullptr;};
        inline int32_t getPublishMode() const { DARABONBA_PTR_GET_DEFAULT(publishMode_, 0) };
        inline NebulaTaskDetail& setPublishMode(int32_t publishMode) { DARABONBA_PTR_SET_VALUE(publishMode_, publishMode) };


        // publishPeriod Field Functions 
        bool hasPublishPeriod() const { return this->publishPeriod_ != nullptr;};
        void deletePublishPeriod() { this->publishPeriod_ = nullptr;};
        inline int32_t getPublishPeriod() const { DARABONBA_PTR_GET_DEFAULT(publishPeriod_, 0) };
        inline NebulaTaskDetail& setPublishPeriod(int32_t publishPeriod) { DARABONBA_PTR_SET_VALUE(publishPeriod_, publishPeriod) };


        // publishType Field Functions 
        bool hasPublishType() const { return this->publishType_ != nullptr;};
        void deletePublishType() { this->publishType_ = nullptr;};
        inline int32_t getPublishType() const { DARABONBA_PTR_GET_DEFAULT(publishType_, 0) };
        inline NebulaTaskDetail& setPublishType(int32_t publishType) { DARABONBA_PTR_SET_VALUE(publishType_, publishType) };


        // quickRollback Field Functions 
        bool hasQuickRollback() const { return this->quickRollback_ != nullptr;};
        void deleteQuickRollback() { this->quickRollback_ = nullptr;};
        inline int32_t getQuickRollback() const { DARABONBA_PTR_GET_DEFAULT(quickRollback_, 0) };
        inline NebulaTaskDetail& setQuickRollback(int32_t quickRollback) { DARABONBA_PTR_SET_VALUE(quickRollback_, quickRollback) };


        // releaseVersion Field Functions 
        bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
        void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
        inline string getReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
        inline NebulaTaskDetail& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


        // ruleJsonList Field Functions 
        bool hasRuleJsonList() const { return this->ruleJsonList_ != nullptr;};
        void deleteRuleJsonList() { this->ruleJsonList_ = nullptr;};
        inline const vector<NebulaTaskDetail::RuleJsonList> & getRuleJsonList() const { DARABONBA_PTR_GET_CONST(ruleJsonList_, vector<NebulaTaskDetail::RuleJsonList>) };
        inline vector<NebulaTaskDetail::RuleJsonList> getRuleJsonList() { DARABONBA_PTR_GET(ruleJsonList_, vector<NebulaTaskDetail::RuleJsonList>) };
        inline NebulaTaskDetail& setRuleJsonList(const vector<NebulaTaskDetail::RuleJsonList> & ruleJsonList) { DARABONBA_PTR_SET_VALUE(ruleJsonList_, ruleJsonList) };
        inline NebulaTaskDetail& setRuleJsonList(vector<NebulaTaskDetail::RuleJsonList> && ruleJsonList) { DARABONBA_PTR_SET_RVALUE(ruleJsonList_, ruleJsonList) };


        // sourceId Field Functions 
        bool hasSourceId() const { return this->sourceId_ != nullptr;};
        void deleteSourceId() { this->sourceId_ = nullptr;};
        inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
        inline NebulaTaskDetail& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


        // sourceName Field Functions 
        bool hasSourceName() const { return this->sourceName_ != nullptr;};
        void deleteSourceName() { this->sourceName_ = nullptr;};
        inline string getSourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
        inline NebulaTaskDetail& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline NebulaTaskDetail& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline NebulaTaskDetail& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // syncResult Field Functions 
        bool hasSyncResult() const { return this->syncResult_ != nullptr;};
        void deleteSyncResult() { this->syncResult_ = nullptr;};
        inline string getSyncResult() const { DARABONBA_PTR_GET_DEFAULT(syncResult_, "") };
        inline NebulaTaskDetail& setSyncResult(string syncResult) { DARABONBA_PTR_SET_VALUE(syncResult_, syncResult) };


        // syncType Field Functions 
        bool hasSyncType() const { return this->syncType_ != nullptr;};
        void deleteSyncType() { this->syncType_ = nullptr;};
        inline int32_t getSyncType() const { DARABONBA_PTR_GET_DEFAULT(syncType_, 0) };
        inline NebulaTaskDetail& setSyncType(int32_t syncType) { DARABONBA_PTR_SET_VALUE(syncType_, syncType) };


        // taskName Field Functions 
        bool hasTaskName() const { return this->taskName_ != nullptr;};
        void deleteTaskName() { this->taskName_ = nullptr;};
        inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
        inline NebulaTaskDetail& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


        // taskStatus Field Functions 
        bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
        void deleteTaskStatus() { this->taskStatus_ = nullptr;};
        inline int32_t getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
        inline NebulaTaskDetail& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


        // taskType Field Functions 
        bool hasTaskType() const { return this->taskType_ != nullptr;};
        void deleteTaskType() { this->taskType_ = nullptr;};
        inline int32_t getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
        inline NebulaTaskDetail& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


        // taskVersion Field Functions 
        bool hasTaskVersion() const { return this->taskVersion_ != nullptr;};
        void deleteTaskVersion() { this->taskVersion_ = nullptr;};
        inline int64_t getTaskVersion() const { DARABONBA_PTR_GET_DEFAULT(taskVersion_, 0L) };
        inline NebulaTaskDetail& setTaskVersion(int64_t taskVersion) { DARABONBA_PTR_SET_VALUE(taskVersion_, taskVersion) };


        // upgradeNoticeNum Field Functions 
        bool hasUpgradeNoticeNum() const { return this->upgradeNoticeNum_ != nullptr;};
        void deleteUpgradeNoticeNum() { this->upgradeNoticeNum_ = nullptr;};
        inline int64_t getUpgradeNoticeNum() const { DARABONBA_PTR_GET_DEFAULT(upgradeNoticeNum_, 0L) };
        inline NebulaTaskDetail& setUpgradeNoticeNum(int64_t upgradeNoticeNum) { DARABONBA_PTR_SET_VALUE(upgradeNoticeNum_, upgradeNoticeNum) };


        // upgradeProgress Field Functions 
        bool hasUpgradeProgress() const { return this->upgradeProgress_ != nullptr;};
        void deleteUpgradeProgress() { this->upgradeProgress_ = nullptr;};
        inline string getUpgradeProgress() const { DARABONBA_PTR_GET_DEFAULT(upgradeProgress_, "") };
        inline NebulaTaskDetail& setUpgradeProgress(string upgradeProgress) { DARABONBA_PTR_SET_VALUE(upgradeProgress_, upgradeProgress) };


        // whitelistIds Field Functions 
        bool hasWhitelistIds() const { return this->whitelistIds_ != nullptr;};
        void deleteWhitelistIds() { this->whitelistIds_ = nullptr;};
        inline string getWhitelistIds() const { DARABONBA_PTR_GET_DEFAULT(whitelistIds_, "") };
        inline NebulaTaskDetail& setWhitelistIds(string whitelistIds) { DARABONBA_PTR_SET_VALUE(whitelistIds_, whitelistIds) };


        // workspaceId Field Functions 
        bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
        void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
        inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
        inline NebulaTaskDetail& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


      protected:
        shared_ptr<string> appCode_ {};
        shared_ptr<string> appId_ {};
        shared_ptr<int32_t> atomic_ {};
        shared_ptr<int64_t> baseInfoId_ {};
        shared_ptr<string> bizType_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<int32_t> cronexpress_ {};
        shared_ptr<string> downloadUrl_ {};
        shared_ptr<string> extraData_ {};
        shared_ptr<string> fileSize_ {};
        shared_ptr<int32_t> fullRepair_ {};
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
        shared_ptr<string> issueDesc_ {};
        shared_ptr<string> memo_ {};
        shared_ptr<string> modifier_ {};
        shared_ptr<string> ossPath_ {};
        shared_ptr<int64_t> packageId_ {};
        shared_ptr<int32_t> percent_ {};
        shared_ptr<string> platform_ {};
        shared_ptr<string> productId_ {};
        shared_ptr<string> productVersion_ {};
        shared_ptr<int32_t> publishMode_ {};
        shared_ptr<int32_t> publishPeriod_ {};
        shared_ptr<int32_t> publishType_ {};
        shared_ptr<int32_t> quickRollback_ {};
        shared_ptr<string> releaseVersion_ {};
        shared_ptr<vector<NebulaTaskDetail::RuleJsonList>> ruleJsonList_ {};
        shared_ptr<string> sourceId_ {};
        shared_ptr<string> sourceName_ {};
        shared_ptr<string> sourceType_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<string> syncResult_ {};
        shared_ptr<int32_t> syncType_ {};
        shared_ptr<string> taskName_ {};
        shared_ptr<int32_t> taskStatus_ {};
        shared_ptr<int32_t> taskType_ {};
        shared_ptr<int64_t> taskVersion_ {};
        shared_ptr<int64_t> upgradeNoticeNum_ {};
        shared_ptr<string> upgradeProgress_ {};
        shared_ptr<string> whitelistIds_ {};
        shared_ptr<string> workspaceId_ {};
      };

      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->nebulaTaskDetail_ == nullptr && this->requestId_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline GetMcubeNebulaTaskDetailResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // nebulaTaskDetail Field Functions 
      bool hasNebulaTaskDetail() const { return this->nebulaTaskDetail_ != nullptr;};
      void deleteNebulaTaskDetail() { this->nebulaTaskDetail_ = nullptr;};
      inline const GetMcubeNebulaTaskDetailResult::NebulaTaskDetail & getNebulaTaskDetail() const { DARABONBA_PTR_GET_CONST(nebulaTaskDetail_, GetMcubeNebulaTaskDetailResult::NebulaTaskDetail) };
      inline GetMcubeNebulaTaskDetailResult::NebulaTaskDetail getNebulaTaskDetail() { DARABONBA_PTR_GET(nebulaTaskDetail_, GetMcubeNebulaTaskDetailResult::NebulaTaskDetail) };
      inline GetMcubeNebulaTaskDetailResult& setNebulaTaskDetail(const GetMcubeNebulaTaskDetailResult::NebulaTaskDetail & nebulaTaskDetail) { DARABONBA_PTR_SET_VALUE(nebulaTaskDetail_, nebulaTaskDetail) };
      inline GetMcubeNebulaTaskDetailResult& setNebulaTaskDetail(GetMcubeNebulaTaskDetailResult::NebulaTaskDetail && nebulaTaskDetail) { DARABONBA_PTR_SET_RVALUE(nebulaTaskDetail_, nebulaTaskDetail) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline GetMcubeNebulaTaskDetailResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline GetMcubeNebulaTaskDetailResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline GetMcubeNebulaTaskDetailResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> errorCode_ {};
      shared_ptr<GetMcubeNebulaTaskDetailResult::NebulaTaskDetail> nebulaTaskDetail_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->getMcubeNebulaTaskDetailResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // getMcubeNebulaTaskDetailResult Field Functions 
    bool hasGetMcubeNebulaTaskDetailResult() const { return this->getMcubeNebulaTaskDetailResult_ != nullptr;};
    void deleteGetMcubeNebulaTaskDetailResult() { this->getMcubeNebulaTaskDetailResult_ = nullptr;};
    inline const GetMcubeNebulaTaskDetailResponseBody::GetMcubeNebulaTaskDetailResult & getGetMcubeNebulaTaskDetailResult() const { DARABONBA_PTR_GET_CONST(getMcubeNebulaTaskDetailResult_, GetMcubeNebulaTaskDetailResponseBody::GetMcubeNebulaTaskDetailResult) };
    inline GetMcubeNebulaTaskDetailResponseBody::GetMcubeNebulaTaskDetailResult getGetMcubeNebulaTaskDetailResult() { DARABONBA_PTR_GET(getMcubeNebulaTaskDetailResult_, GetMcubeNebulaTaskDetailResponseBody::GetMcubeNebulaTaskDetailResult) };
    inline GetMcubeNebulaTaskDetailResponseBody& setGetMcubeNebulaTaskDetailResult(const GetMcubeNebulaTaskDetailResponseBody::GetMcubeNebulaTaskDetailResult & getMcubeNebulaTaskDetailResult) { DARABONBA_PTR_SET_VALUE(getMcubeNebulaTaskDetailResult_, getMcubeNebulaTaskDetailResult) };
    inline GetMcubeNebulaTaskDetailResponseBody& setGetMcubeNebulaTaskDetailResult(GetMcubeNebulaTaskDetailResponseBody::GetMcubeNebulaTaskDetailResult && getMcubeNebulaTaskDetailResult) { DARABONBA_PTR_SET_RVALUE(getMcubeNebulaTaskDetailResult_, getMcubeNebulaTaskDetailResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMcubeNebulaTaskDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline GetMcubeNebulaTaskDetailResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline GetMcubeNebulaTaskDetailResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<GetMcubeNebulaTaskDetailResponseBody::GetMcubeNebulaTaskDetailResult> getMcubeNebulaTaskDetailResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
