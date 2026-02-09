// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMCUBEHOTPATCHTASKDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMCUBEHOTPATCHTASKDETAILRESPONSEBODY_HPP_
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
  class QueryMcubeHotpatchTaskDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMcubeHotpatchTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QueryHotpatchTaskDetailResult, queryHotpatchTaskDetailResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMcubeHotpatchTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QueryHotpatchTaskDetailResult, queryHotpatchTaskDetailResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    QueryMcubeHotpatchTaskDetailResponseBody() = default ;
    QueryMcubeHotpatchTaskDetailResponseBody(const QueryMcubeHotpatchTaskDetailResponseBody &) = default ;
    QueryMcubeHotpatchTaskDetailResponseBody(QueryMcubeHotpatchTaskDetailResponseBody &&) = default ;
    QueryMcubeHotpatchTaskDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMcubeHotpatchTaskDetailResponseBody() = default ;
    QueryMcubeHotpatchTaskDetailResponseBody& operator=(const QueryMcubeHotpatchTaskDetailResponseBody &) = default ;
    QueryMcubeHotpatchTaskDetailResponseBody& operator=(QueryMcubeHotpatchTaskDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QueryHotpatchTaskDetailResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QueryHotpatchTaskDetailResult& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(HotpatchTaskDetail, hotpatchTaskDetail_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, QueryHotpatchTaskDetailResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(HotpatchTaskDetail, hotpatchTaskDetail_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      QueryHotpatchTaskDetailResult() = default ;
      QueryHotpatchTaskDetailResult(const QueryHotpatchTaskDetailResult &) = default ;
      QueryHotpatchTaskDetailResult(QueryHotpatchTaskDetailResult &&) = default ;
      QueryHotpatchTaskDetailResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QueryHotpatchTaskDetailResult() = default ;
      QueryHotpatchTaskDetailResult& operator=(const QueryHotpatchTaskDetailResult &) = default ;
      QueryHotpatchTaskDetailResult& operator=(QueryHotpatchTaskDetailResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HotpatchTaskDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotpatchTaskDetail& obj) { 
          DARABONBA_PTR_TO_JSON(AppCode, appCode_);
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(BaseInfoId, baseInfoId_);
          DARABONBA_PTR_TO_JSON(Bundles, bundles_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
          DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(GmtModifiedStr, gmtModifiedStr_);
          DARABONBA_PTR_TO_JSON(GreyConfigInfo, greyConfigInfo_);
          DARABONBA_PTR_TO_JSON(GreyEndtimeData, greyEndtimeData_);
          DARABONBA_PTR_TO_JSON(GreyNum, greyNum_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Md5, md5_);
          DARABONBA_PTR_TO_JSON(Memo, memo_);
          DARABONBA_PTR_TO_JSON(Modifier, modifier_);
          DARABONBA_PTR_TO_JSON(PackageId, packageId_);
          DARABONBA_PTR_TO_JSON(Platform, platform_);
          DARABONBA_PTR_TO_JSON(ProductId, productId_);
          DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
          DARABONBA_PTR_TO_JSON(PublishMode, publishMode_);
          DARABONBA_PTR_TO_JSON(PublishPeriod, publishPeriod_);
          DARABONBA_PTR_TO_JSON(PublishType, publishType_);
          DARABONBA_PTR_TO_JSON(QuickRollback, quickRollback_);
          DARABONBA_PTR_TO_JSON(ReleaseVersion, releaseVersion_);
          DARABONBA_PTR_TO_JSON(RuleJsonList, ruleJsonList_);
          DARABONBA_PTR_TO_JSON(SourceName, sourceName_);
          DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_TO_JSON(TaskVersion, taskVersion_);
          DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
          DARABONBA_PTR_TO_JSON(WhitelistIds, whitelistIds_);
          DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
        };
        friend void from_json(const Darabonba::Json& j, HotpatchTaskDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(BaseInfoId, baseInfoId_);
          DARABONBA_PTR_FROM_JSON(Bundles, bundles_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
          DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(GmtModifiedStr, gmtModifiedStr_);
          DARABONBA_PTR_FROM_JSON(GreyConfigInfo, greyConfigInfo_);
          DARABONBA_PTR_FROM_JSON(GreyEndtimeData, greyEndtimeData_);
          DARABONBA_PTR_FROM_JSON(GreyNum, greyNum_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Md5, md5_);
          DARABONBA_PTR_FROM_JSON(Memo, memo_);
          DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
          DARABONBA_PTR_FROM_JSON(PackageId, packageId_);
          DARABONBA_PTR_FROM_JSON(Platform, platform_);
          DARABONBA_PTR_FROM_JSON(ProductId, productId_);
          DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
          DARABONBA_PTR_FROM_JSON(PublishMode, publishMode_);
          DARABONBA_PTR_FROM_JSON(PublishPeriod, publishPeriod_);
          DARABONBA_PTR_FROM_JSON(PublishType, publishType_);
          DARABONBA_PTR_FROM_JSON(QuickRollback, quickRollback_);
          DARABONBA_PTR_FROM_JSON(ReleaseVersion, releaseVersion_);
          DARABONBA_PTR_FROM_JSON(RuleJsonList, ruleJsonList_);
          DARABONBA_PTR_FROM_JSON(SourceName, sourceName_);
          DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_FROM_JSON(TaskVersion, taskVersion_);
          DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
          DARABONBA_PTR_FROM_JSON(WhitelistIds, whitelistIds_);
          DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
        };
        HotpatchTaskDetail() = default ;
        HotpatchTaskDetail(const HotpatchTaskDetail &) = default ;
        HotpatchTaskDetail(HotpatchTaskDetail &&) = default ;
        HotpatchTaskDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotpatchTaskDetail() = default ;
        HotpatchTaskDetail& operator=(const HotpatchTaskDetail &) = default ;
        HotpatchTaskDetail& operator=(HotpatchTaskDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Whitelist : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Whitelist& obj) { 
            DARABONBA_PTR_TO_JSON(AppCode, appCode_);
            DARABONBA_PTR_TO_JSON(Business, business_);
            DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(IdType, idType_);
            DARABONBA_PTR_TO_JSON(Platform, platform_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(WhiteListCount, whiteListCount_);
            DARABONBA_PTR_TO_JSON(WhiteListName, whiteListName_);
          };
          friend void from_json(const Darabonba::Json& j, Whitelist& obj) { 
            DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
            DARABONBA_PTR_FROM_JSON(Business, business_);
            DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(IdType, idType_);
            DARABONBA_PTR_FROM_JSON(Platform, platform_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(WhiteListCount, whiteListCount_);
            DARABONBA_PTR_FROM_JSON(WhiteListName, whiteListName_);
          };
          Whitelist() = default ;
          Whitelist(const Whitelist &) = default ;
          Whitelist(Whitelist &&) = default ;
          Whitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Whitelist() = default ;
          Whitelist& operator=(const Whitelist &) = default ;
          Whitelist& operator=(Whitelist &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->appCode_ == nullptr
        && this->business_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->idType_ == nullptr && this->platform_ == nullptr
        && this->status_ == nullptr && this->whiteListCount_ == nullptr && this->whiteListName_ == nullptr; };
          // appCode Field Functions 
          bool hasAppCode() const { return this->appCode_ != nullptr;};
          void deleteAppCode() { this->appCode_ = nullptr;};
          inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
          inline Whitelist& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


          // business Field Functions 
          bool hasBusiness() const { return this->business_ != nullptr;};
          void deleteBusiness() { this->business_ = nullptr;};
          inline string getBusiness() const { DARABONBA_PTR_GET_DEFAULT(business_, "") };
          inline Whitelist& setBusiness(string business) { DARABONBA_PTR_SET_VALUE(business_, business) };


          // gmtModified Field Functions 
          bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
          void deleteGmtModified() { this->gmtModified_ = nullptr;};
          inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
          inline Whitelist& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline Whitelist& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // idType Field Functions 
          bool hasIdType() const { return this->idType_ != nullptr;};
          void deleteIdType() { this->idType_ = nullptr;};
          inline string getIdType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
          inline Whitelist& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


          // platform Field Functions 
          bool hasPlatform() const { return this->platform_ != nullptr;};
          void deletePlatform() { this->platform_ = nullptr;};
          inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
          inline Whitelist& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
          inline Whitelist& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // whiteListCount Field Functions 
          bool hasWhiteListCount() const { return this->whiteListCount_ != nullptr;};
          void deleteWhiteListCount() { this->whiteListCount_ = nullptr;};
          inline int64_t getWhiteListCount() const { DARABONBA_PTR_GET_DEFAULT(whiteListCount_, 0L) };
          inline Whitelist& setWhiteListCount(int64_t whiteListCount) { DARABONBA_PTR_SET_VALUE(whiteListCount_, whiteListCount) };


          // whiteListName Field Functions 
          bool hasWhiteListName() const { return this->whiteListName_ != nullptr;};
          void deleteWhiteListName() { this->whiteListName_ = nullptr;};
          inline string getWhiteListName() const { DARABONBA_PTR_GET_DEFAULT(whiteListName_, "") };
          inline Whitelist& setWhiteListName(string whiteListName) { DARABONBA_PTR_SET_VALUE(whiteListName_, whiteListName) };


        protected:
          shared_ptr<string> appCode_ {};
          shared_ptr<string> business_ {};
          shared_ptr<string> gmtModified_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<string> idType_ {};
          shared_ptr<string> platform_ {};
          shared_ptr<int64_t> status_ {};
          shared_ptr<int64_t> whiteListCount_ {};
          shared_ptr<string> whiteListName_ {};
        };

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
        && this->appId_ == nullptr && this->baseInfoId_ == nullptr && this->bundles_ == nullptr && this->creator_ == nullptr && this->downloadUrl_ == nullptr
        && this->fileSize_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->gmtModifiedStr_ == nullptr && this->greyConfigInfo_ == nullptr
        && this->greyEndtimeData_ == nullptr && this->greyNum_ == nullptr && this->id_ == nullptr && this->md5_ == nullptr && this->memo_ == nullptr
        && this->modifier_ == nullptr && this->packageId_ == nullptr && this->platform_ == nullptr && this->productId_ == nullptr && this->productVersion_ == nullptr
        && this->publishMode_ == nullptr && this->publishPeriod_ == nullptr && this->publishType_ == nullptr && this->quickRollback_ == nullptr && this->releaseVersion_ == nullptr
        && this->ruleJsonList_ == nullptr && this->sourceName_ == nullptr && this->taskStatus_ == nullptr && this->taskVersion_ == nullptr && this->whitelist_ == nullptr
        && this->whitelistIds_ == nullptr && this->workspaceId_ == nullptr; };
        // appCode Field Functions 
        bool hasAppCode() const { return this->appCode_ != nullptr;};
        void deleteAppCode() { this->appCode_ = nullptr;};
        inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
        inline HotpatchTaskDetail& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline HotpatchTaskDetail& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // baseInfoId Field Functions 
        bool hasBaseInfoId() const { return this->baseInfoId_ != nullptr;};
        void deleteBaseInfoId() { this->baseInfoId_ = nullptr;};
        inline int64_t getBaseInfoId() const { DARABONBA_PTR_GET_DEFAULT(baseInfoId_, 0L) };
        inline HotpatchTaskDetail& setBaseInfoId(int64_t baseInfoId) { DARABONBA_PTR_SET_VALUE(baseInfoId_, baseInfoId) };


        // bundles Field Functions 
        bool hasBundles() const { return this->bundles_ != nullptr;};
        void deleteBundles() { this->bundles_ = nullptr;};
        inline const vector<string> & getBundles() const { DARABONBA_PTR_GET_CONST(bundles_, vector<string>) };
        inline vector<string> getBundles() { DARABONBA_PTR_GET(bundles_, vector<string>) };
        inline HotpatchTaskDetail& setBundles(const vector<string> & bundles) { DARABONBA_PTR_SET_VALUE(bundles_, bundles) };
        inline HotpatchTaskDetail& setBundles(vector<string> && bundles) { DARABONBA_PTR_SET_RVALUE(bundles_, bundles) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline HotpatchTaskDetail& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // downloadUrl Field Functions 
        bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
        void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
        inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
        inline HotpatchTaskDetail& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


        // fileSize Field Functions 
        bool hasFileSize() const { return this->fileSize_ != nullptr;};
        void deleteFileSize() { this->fileSize_ = nullptr;};
        inline string getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
        inline HotpatchTaskDetail& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline HotpatchTaskDetail& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline HotpatchTaskDetail& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // gmtModifiedStr Field Functions 
        bool hasGmtModifiedStr() const { return this->gmtModifiedStr_ != nullptr;};
        void deleteGmtModifiedStr() { this->gmtModifiedStr_ = nullptr;};
        inline string getGmtModifiedStr() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedStr_, "") };
        inline HotpatchTaskDetail& setGmtModifiedStr(string gmtModifiedStr) { DARABONBA_PTR_SET_VALUE(gmtModifiedStr_, gmtModifiedStr) };


        // greyConfigInfo Field Functions 
        bool hasGreyConfigInfo() const { return this->greyConfigInfo_ != nullptr;};
        void deleteGreyConfigInfo() { this->greyConfigInfo_ = nullptr;};
        inline string getGreyConfigInfo() const { DARABONBA_PTR_GET_DEFAULT(greyConfigInfo_, "") };
        inline HotpatchTaskDetail& setGreyConfigInfo(string greyConfigInfo) { DARABONBA_PTR_SET_VALUE(greyConfigInfo_, greyConfigInfo) };


        // greyEndtimeData Field Functions 
        bool hasGreyEndtimeData() const { return this->greyEndtimeData_ != nullptr;};
        void deleteGreyEndtimeData() { this->greyEndtimeData_ = nullptr;};
        inline string getGreyEndtimeData() const { DARABONBA_PTR_GET_DEFAULT(greyEndtimeData_, "") };
        inline HotpatchTaskDetail& setGreyEndtimeData(string greyEndtimeData) { DARABONBA_PTR_SET_VALUE(greyEndtimeData_, greyEndtimeData) };


        // greyNum Field Functions 
        bool hasGreyNum() const { return this->greyNum_ != nullptr;};
        void deleteGreyNum() { this->greyNum_ = nullptr;};
        inline int64_t getGreyNum() const { DARABONBA_PTR_GET_DEFAULT(greyNum_, 0L) };
        inline HotpatchTaskDetail& setGreyNum(int64_t greyNum) { DARABONBA_PTR_SET_VALUE(greyNum_, greyNum) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline HotpatchTaskDetail& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // md5 Field Functions 
        bool hasMd5() const { return this->md5_ != nullptr;};
        void deleteMd5() { this->md5_ = nullptr;};
        inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
        inline HotpatchTaskDetail& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


        // memo Field Functions 
        bool hasMemo() const { return this->memo_ != nullptr;};
        void deleteMemo() { this->memo_ = nullptr;};
        inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
        inline HotpatchTaskDetail& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


        // modifier Field Functions 
        bool hasModifier() const { return this->modifier_ != nullptr;};
        void deleteModifier() { this->modifier_ = nullptr;};
        inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
        inline HotpatchTaskDetail& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


        // packageId Field Functions 
        bool hasPackageId() const { return this->packageId_ != nullptr;};
        void deletePackageId() { this->packageId_ = nullptr;};
        inline int64_t getPackageId() const { DARABONBA_PTR_GET_DEFAULT(packageId_, 0L) };
        inline HotpatchTaskDetail& setPackageId(int64_t packageId) { DARABONBA_PTR_SET_VALUE(packageId_, packageId) };


        // platform Field Functions 
        bool hasPlatform() const { return this->platform_ != nullptr;};
        void deletePlatform() { this->platform_ = nullptr;};
        inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
        inline HotpatchTaskDetail& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


        // productId Field Functions 
        bool hasProductId() const { return this->productId_ != nullptr;};
        void deleteProductId() { this->productId_ = nullptr;};
        inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
        inline HotpatchTaskDetail& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


        // productVersion Field Functions 
        bool hasProductVersion() const { return this->productVersion_ != nullptr;};
        void deleteProductVersion() { this->productVersion_ = nullptr;};
        inline string getProductVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
        inline HotpatchTaskDetail& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


        // publishMode Field Functions 
        bool hasPublishMode() const { return this->publishMode_ != nullptr;};
        void deletePublishMode() { this->publishMode_ = nullptr;};
        inline int64_t getPublishMode() const { DARABONBA_PTR_GET_DEFAULT(publishMode_, 0L) };
        inline HotpatchTaskDetail& setPublishMode(int64_t publishMode) { DARABONBA_PTR_SET_VALUE(publishMode_, publishMode) };


        // publishPeriod Field Functions 
        bool hasPublishPeriod() const { return this->publishPeriod_ != nullptr;};
        void deletePublishPeriod() { this->publishPeriod_ = nullptr;};
        inline int64_t getPublishPeriod() const { DARABONBA_PTR_GET_DEFAULT(publishPeriod_, 0L) };
        inline HotpatchTaskDetail& setPublishPeriod(int64_t publishPeriod) { DARABONBA_PTR_SET_VALUE(publishPeriod_, publishPeriod) };


        // publishType Field Functions 
        bool hasPublishType() const { return this->publishType_ != nullptr;};
        void deletePublishType() { this->publishType_ = nullptr;};
        inline int64_t getPublishType() const { DARABONBA_PTR_GET_DEFAULT(publishType_, 0L) };
        inline HotpatchTaskDetail& setPublishType(int64_t publishType) { DARABONBA_PTR_SET_VALUE(publishType_, publishType) };


        // quickRollback Field Functions 
        bool hasQuickRollback() const { return this->quickRollback_ != nullptr;};
        void deleteQuickRollback() { this->quickRollback_ = nullptr;};
        inline int64_t getQuickRollback() const { DARABONBA_PTR_GET_DEFAULT(quickRollback_, 0L) };
        inline HotpatchTaskDetail& setQuickRollback(int64_t quickRollback) { DARABONBA_PTR_SET_VALUE(quickRollback_, quickRollback) };


        // releaseVersion Field Functions 
        bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
        void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
        inline string getReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
        inline HotpatchTaskDetail& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


        // ruleJsonList Field Functions 
        bool hasRuleJsonList() const { return this->ruleJsonList_ != nullptr;};
        void deleteRuleJsonList() { this->ruleJsonList_ = nullptr;};
        inline const vector<HotpatchTaskDetail::RuleJsonList> & getRuleJsonList() const { DARABONBA_PTR_GET_CONST(ruleJsonList_, vector<HotpatchTaskDetail::RuleJsonList>) };
        inline vector<HotpatchTaskDetail::RuleJsonList> getRuleJsonList() { DARABONBA_PTR_GET(ruleJsonList_, vector<HotpatchTaskDetail::RuleJsonList>) };
        inline HotpatchTaskDetail& setRuleJsonList(const vector<HotpatchTaskDetail::RuleJsonList> & ruleJsonList) { DARABONBA_PTR_SET_VALUE(ruleJsonList_, ruleJsonList) };
        inline HotpatchTaskDetail& setRuleJsonList(vector<HotpatchTaskDetail::RuleJsonList> && ruleJsonList) { DARABONBA_PTR_SET_RVALUE(ruleJsonList_, ruleJsonList) };


        // sourceName Field Functions 
        bool hasSourceName() const { return this->sourceName_ != nullptr;};
        void deleteSourceName() { this->sourceName_ = nullptr;};
        inline string getSourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
        inline HotpatchTaskDetail& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


        // taskStatus Field Functions 
        bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
        void deleteTaskStatus() { this->taskStatus_ = nullptr;};
        inline int64_t getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0L) };
        inline HotpatchTaskDetail& setTaskStatus(int64_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


        // taskVersion Field Functions 
        bool hasTaskVersion() const { return this->taskVersion_ != nullptr;};
        void deleteTaskVersion() { this->taskVersion_ = nullptr;};
        inline int64_t getTaskVersion() const { DARABONBA_PTR_GET_DEFAULT(taskVersion_, 0L) };
        inline HotpatchTaskDetail& setTaskVersion(int64_t taskVersion) { DARABONBA_PTR_SET_VALUE(taskVersion_, taskVersion) };


        // whitelist Field Functions 
        bool hasWhitelist() const { return this->whitelist_ != nullptr;};
        void deleteWhitelist() { this->whitelist_ = nullptr;};
        inline const vector<HotpatchTaskDetail::Whitelist> & getWhitelist() const { DARABONBA_PTR_GET_CONST(whitelist_, vector<HotpatchTaskDetail::Whitelist>) };
        inline vector<HotpatchTaskDetail::Whitelist> getWhitelist() { DARABONBA_PTR_GET(whitelist_, vector<HotpatchTaskDetail::Whitelist>) };
        inline HotpatchTaskDetail& setWhitelist(const vector<HotpatchTaskDetail::Whitelist> & whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };
        inline HotpatchTaskDetail& setWhitelist(vector<HotpatchTaskDetail::Whitelist> && whitelist) { DARABONBA_PTR_SET_RVALUE(whitelist_, whitelist) };


        // whitelistIds Field Functions 
        bool hasWhitelistIds() const { return this->whitelistIds_ != nullptr;};
        void deleteWhitelistIds() { this->whitelistIds_ = nullptr;};
        inline string getWhitelistIds() const { DARABONBA_PTR_GET_DEFAULT(whitelistIds_, "") };
        inline HotpatchTaskDetail& setWhitelistIds(string whitelistIds) { DARABONBA_PTR_SET_VALUE(whitelistIds_, whitelistIds) };


        // workspaceId Field Functions 
        bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
        void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
        inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
        inline HotpatchTaskDetail& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


      protected:
        shared_ptr<string> appCode_ {};
        shared_ptr<string> appId_ {};
        shared_ptr<int64_t> baseInfoId_ {};
        shared_ptr<vector<string>> bundles_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<string> downloadUrl_ {};
        shared_ptr<string> fileSize_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<string> gmtModifiedStr_ {};
        shared_ptr<string> greyConfigInfo_ {};
        shared_ptr<string> greyEndtimeData_ {};
        shared_ptr<int64_t> greyNum_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> md5_ {};
        shared_ptr<string> memo_ {};
        shared_ptr<string> modifier_ {};
        shared_ptr<int64_t> packageId_ {};
        shared_ptr<string> platform_ {};
        shared_ptr<string> productId_ {};
        shared_ptr<string> productVersion_ {};
        shared_ptr<int64_t> publishMode_ {};
        shared_ptr<int64_t> publishPeriod_ {};
        shared_ptr<int64_t> publishType_ {};
        shared_ptr<int64_t> quickRollback_ {};
        shared_ptr<string> releaseVersion_ {};
        shared_ptr<vector<HotpatchTaskDetail::RuleJsonList>> ruleJsonList_ {};
        shared_ptr<string> sourceName_ {};
        shared_ptr<int64_t> taskStatus_ {};
        shared_ptr<int64_t> taskVersion_ {};
        shared_ptr<vector<HotpatchTaskDetail::Whitelist>> whitelist_ {};
        shared_ptr<string> whitelistIds_ {};
        shared_ptr<string> workspaceId_ {};
      };

      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->hotpatchTaskDetail_ == nullptr && this->requestId_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline QueryHotpatchTaskDetailResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // hotpatchTaskDetail Field Functions 
      bool hasHotpatchTaskDetail() const { return this->hotpatchTaskDetail_ != nullptr;};
      void deleteHotpatchTaskDetail() { this->hotpatchTaskDetail_ = nullptr;};
      inline const QueryHotpatchTaskDetailResult::HotpatchTaskDetail & getHotpatchTaskDetail() const { DARABONBA_PTR_GET_CONST(hotpatchTaskDetail_, QueryHotpatchTaskDetailResult::HotpatchTaskDetail) };
      inline QueryHotpatchTaskDetailResult::HotpatchTaskDetail getHotpatchTaskDetail() { DARABONBA_PTR_GET(hotpatchTaskDetail_, QueryHotpatchTaskDetailResult::HotpatchTaskDetail) };
      inline QueryHotpatchTaskDetailResult& setHotpatchTaskDetail(const QueryHotpatchTaskDetailResult::HotpatchTaskDetail & hotpatchTaskDetail) { DARABONBA_PTR_SET_VALUE(hotpatchTaskDetail_, hotpatchTaskDetail) };
      inline QueryHotpatchTaskDetailResult& setHotpatchTaskDetail(QueryHotpatchTaskDetailResult::HotpatchTaskDetail && hotpatchTaskDetail) { DARABONBA_PTR_SET_RVALUE(hotpatchTaskDetail_, hotpatchTaskDetail) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline QueryHotpatchTaskDetailResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline QueryHotpatchTaskDetailResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline QueryHotpatchTaskDetailResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> errorCode_ {};
      shared_ptr<QueryHotpatchTaskDetailResult::HotpatchTaskDetail> hotpatchTaskDetail_ {};
      // Id of the request
      shared_ptr<string> requestId_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->queryHotpatchTaskDetailResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // queryHotpatchTaskDetailResult Field Functions 
    bool hasQueryHotpatchTaskDetailResult() const { return this->queryHotpatchTaskDetailResult_ != nullptr;};
    void deleteQueryHotpatchTaskDetailResult() { this->queryHotpatchTaskDetailResult_ = nullptr;};
    inline const QueryMcubeHotpatchTaskDetailResponseBody::QueryHotpatchTaskDetailResult & getQueryHotpatchTaskDetailResult() const { DARABONBA_PTR_GET_CONST(queryHotpatchTaskDetailResult_, QueryMcubeHotpatchTaskDetailResponseBody::QueryHotpatchTaskDetailResult) };
    inline QueryMcubeHotpatchTaskDetailResponseBody::QueryHotpatchTaskDetailResult getQueryHotpatchTaskDetailResult() { DARABONBA_PTR_GET(queryHotpatchTaskDetailResult_, QueryMcubeHotpatchTaskDetailResponseBody::QueryHotpatchTaskDetailResult) };
    inline QueryMcubeHotpatchTaskDetailResponseBody& setQueryHotpatchTaskDetailResult(const QueryMcubeHotpatchTaskDetailResponseBody::QueryHotpatchTaskDetailResult & queryHotpatchTaskDetailResult) { DARABONBA_PTR_SET_VALUE(queryHotpatchTaskDetailResult_, queryHotpatchTaskDetailResult) };
    inline QueryMcubeHotpatchTaskDetailResponseBody& setQueryHotpatchTaskDetailResult(QueryMcubeHotpatchTaskDetailResponseBody::QueryHotpatchTaskDetailResult && queryHotpatchTaskDetailResult) { DARABONBA_PTR_SET_RVALUE(queryHotpatchTaskDetailResult_, queryHotpatchTaskDetailResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMcubeHotpatchTaskDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline QueryMcubeHotpatchTaskDetailResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline QueryMcubeHotpatchTaskDetailResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<QueryMcubeHotpatchTaskDetailResponseBody::QueryHotpatchTaskDetailResult> queryHotpatchTaskDetailResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
