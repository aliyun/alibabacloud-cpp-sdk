// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMCUBEMINITASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMCUBEMINITASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMcubeMiniTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMcubeMiniTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QueryMiniTaskResult, queryMiniTaskResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMcubeMiniTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QueryMiniTaskResult, queryMiniTaskResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    QueryMcubeMiniTaskResponseBody() = default ;
    QueryMcubeMiniTaskResponseBody(const QueryMcubeMiniTaskResponseBody &) = default ;
    QueryMcubeMiniTaskResponseBody(QueryMcubeMiniTaskResponseBody &&) = default ;
    QueryMcubeMiniTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMcubeMiniTaskResponseBody() = default ;
    QueryMcubeMiniTaskResponseBody& operator=(const QueryMcubeMiniTaskResponseBody &) = default ;
    QueryMcubeMiniTaskResponseBody& operator=(QueryMcubeMiniTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QueryMiniTaskResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QueryMiniTaskResult& obj) { 
        DARABONBA_PTR_TO_JSON(MiniTaskInfo, miniTaskInfo_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, QueryMiniTaskResult& obj) { 
        DARABONBA_PTR_FROM_JSON(MiniTaskInfo, miniTaskInfo_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      QueryMiniTaskResult() = default ;
      QueryMiniTaskResult(const QueryMiniTaskResult &) = default ;
      QueryMiniTaskResult(QueryMiniTaskResult &&) = default ;
      QueryMiniTaskResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QueryMiniTaskResult() = default ;
      QueryMiniTaskResult& operator=(const QueryMiniTaskResult &) = default ;
      QueryMiniTaskResult& operator=(QueryMiniTaskResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MiniTaskInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MiniTaskInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AppCode, appCode_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(GreyConfigInfo, greyConfigInfo_);
          DARABONBA_PTR_TO_JSON(GreyEndtime, greyEndtime_);
          DARABONBA_PTR_TO_JSON(GreyEndtimeData, greyEndtimeData_);
          DARABONBA_PTR_TO_JSON(GreyNum, greyNum_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Memo, memo_);
          DARABONBA_PTR_TO_JSON(PackageId, packageId_);
          DARABONBA_PTR_TO_JSON(Platform, platform_);
          DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
          DARABONBA_PTR_TO_JSON(PublishMode, publishMode_);
          DARABONBA_PTR_TO_JSON(PublishType, publishType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_TO_JSON(WhitelistIds, whitelistIds_);
        };
        friend void from_json(const Darabonba::Json& j, MiniTaskInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(GreyConfigInfo, greyConfigInfo_);
          DARABONBA_PTR_FROM_JSON(GreyEndtime, greyEndtime_);
          DARABONBA_PTR_FROM_JSON(GreyEndtimeData, greyEndtimeData_);
          DARABONBA_PTR_FROM_JSON(GreyNum, greyNum_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Memo, memo_);
          DARABONBA_PTR_FROM_JSON(PackageId, packageId_);
          DARABONBA_PTR_FROM_JSON(Platform, platform_);
          DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
          DARABONBA_PTR_FROM_JSON(PublishMode, publishMode_);
          DARABONBA_PTR_FROM_JSON(PublishType, publishType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_FROM_JSON(WhitelistIds, whitelistIds_);
        };
        MiniTaskInfo() = default ;
        MiniTaskInfo(const MiniTaskInfo &) = default ;
        MiniTaskInfo(MiniTaskInfo &&) = default ;
        MiniTaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MiniTaskInfo() = default ;
        MiniTaskInfo& operator=(const MiniTaskInfo &) = default ;
        MiniTaskInfo& operator=(MiniTaskInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appCode_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->greyConfigInfo_ == nullptr && this->greyEndtime_ == nullptr && this->greyEndtimeData_ == nullptr
        && this->greyNum_ == nullptr && this->id_ == nullptr && this->memo_ == nullptr && this->packageId_ == nullptr && this->platform_ == nullptr
        && this->productVersion_ == nullptr && this->publishMode_ == nullptr && this->publishType_ == nullptr && this->status_ == nullptr && this->taskStatus_ == nullptr
        && this->whitelistIds_ == nullptr; };
        // appCode Field Functions 
        bool hasAppCode() const { return this->appCode_ != nullptr;};
        void deleteAppCode() { this->appCode_ = nullptr;};
        inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
        inline MiniTaskInfo& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline MiniTaskInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline MiniTaskInfo& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // greyConfigInfo Field Functions 
        bool hasGreyConfigInfo() const { return this->greyConfigInfo_ != nullptr;};
        void deleteGreyConfigInfo() { this->greyConfigInfo_ = nullptr;};
        inline string getGreyConfigInfo() const { DARABONBA_PTR_GET_DEFAULT(greyConfigInfo_, "") };
        inline MiniTaskInfo& setGreyConfigInfo(string greyConfigInfo) { DARABONBA_PTR_SET_VALUE(greyConfigInfo_, greyConfigInfo) };


        // greyEndtime Field Functions 
        bool hasGreyEndtime() const { return this->greyEndtime_ != nullptr;};
        void deleteGreyEndtime() { this->greyEndtime_ = nullptr;};
        inline string getGreyEndtime() const { DARABONBA_PTR_GET_DEFAULT(greyEndtime_, "") };
        inline MiniTaskInfo& setGreyEndtime(string greyEndtime) { DARABONBA_PTR_SET_VALUE(greyEndtime_, greyEndtime) };


        // greyEndtimeData Field Functions 
        bool hasGreyEndtimeData() const { return this->greyEndtimeData_ != nullptr;};
        void deleteGreyEndtimeData() { this->greyEndtimeData_ = nullptr;};
        inline string getGreyEndtimeData() const { DARABONBA_PTR_GET_DEFAULT(greyEndtimeData_, "") };
        inline MiniTaskInfo& setGreyEndtimeData(string greyEndtimeData) { DARABONBA_PTR_SET_VALUE(greyEndtimeData_, greyEndtimeData) };


        // greyNum Field Functions 
        bool hasGreyNum() const { return this->greyNum_ != nullptr;};
        void deleteGreyNum() { this->greyNum_ = nullptr;};
        inline int64_t getGreyNum() const { DARABONBA_PTR_GET_DEFAULT(greyNum_, 0L) };
        inline MiniTaskInfo& setGreyNum(int64_t greyNum) { DARABONBA_PTR_SET_VALUE(greyNum_, greyNum) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline MiniTaskInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // memo Field Functions 
        bool hasMemo() const { return this->memo_ != nullptr;};
        void deleteMemo() { this->memo_ = nullptr;};
        inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
        inline MiniTaskInfo& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


        // packageId Field Functions 
        bool hasPackageId() const { return this->packageId_ != nullptr;};
        void deletePackageId() { this->packageId_ = nullptr;};
        inline int64_t getPackageId() const { DARABONBA_PTR_GET_DEFAULT(packageId_, 0L) };
        inline MiniTaskInfo& setPackageId(int64_t packageId) { DARABONBA_PTR_SET_VALUE(packageId_, packageId) };


        // platform Field Functions 
        bool hasPlatform() const { return this->platform_ != nullptr;};
        void deletePlatform() { this->platform_ = nullptr;};
        inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
        inline MiniTaskInfo& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


        // productVersion Field Functions 
        bool hasProductVersion() const { return this->productVersion_ != nullptr;};
        void deleteProductVersion() { this->productVersion_ = nullptr;};
        inline string getProductVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
        inline MiniTaskInfo& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


        // publishMode Field Functions 
        bool hasPublishMode() const { return this->publishMode_ != nullptr;};
        void deletePublishMode() { this->publishMode_ = nullptr;};
        inline int64_t getPublishMode() const { DARABONBA_PTR_GET_DEFAULT(publishMode_, 0L) };
        inline MiniTaskInfo& setPublishMode(int64_t publishMode) { DARABONBA_PTR_SET_VALUE(publishMode_, publishMode) };


        // publishType Field Functions 
        bool hasPublishType() const { return this->publishType_ != nullptr;};
        void deletePublishType() { this->publishType_ = nullptr;};
        inline int64_t getPublishType() const { DARABONBA_PTR_GET_DEFAULT(publishType_, 0L) };
        inline MiniTaskInfo& setPublishType(int64_t publishType) { DARABONBA_PTR_SET_VALUE(publishType_, publishType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline MiniTaskInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // taskStatus Field Functions 
        bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
        void deleteTaskStatus() { this->taskStatus_ = nullptr;};
        inline int64_t getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0L) };
        inline MiniTaskInfo& setTaskStatus(int64_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


        // whitelistIds Field Functions 
        bool hasWhitelistIds() const { return this->whitelistIds_ != nullptr;};
        void deleteWhitelistIds() { this->whitelistIds_ = nullptr;};
        inline string getWhitelistIds() const { DARABONBA_PTR_GET_DEFAULT(whitelistIds_, "") };
        inline MiniTaskInfo& setWhitelistIds(string whitelistIds) { DARABONBA_PTR_SET_VALUE(whitelistIds_, whitelistIds) };


      protected:
        shared_ptr<string> appCode_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<string> greyConfigInfo_ {};
        shared_ptr<string> greyEndtime_ {};
        shared_ptr<string> greyEndtimeData_ {};
        shared_ptr<int64_t> greyNum_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> memo_ {};
        shared_ptr<int64_t> packageId_ {};
        shared_ptr<string> platform_ {};
        shared_ptr<string> productVersion_ {};
        shared_ptr<int64_t> publishMode_ {};
        shared_ptr<int64_t> publishType_ {};
        shared_ptr<string> status_ {};
        shared_ptr<int64_t> taskStatus_ {};
        shared_ptr<string> whitelistIds_ {};
      };

      virtual bool empty() const override { return this->miniTaskInfo_ == nullptr
        && this->resultMsg_ == nullptr && this->success_ == nullptr; };
      // miniTaskInfo Field Functions 
      bool hasMiniTaskInfo() const { return this->miniTaskInfo_ != nullptr;};
      void deleteMiniTaskInfo() { this->miniTaskInfo_ = nullptr;};
      inline const QueryMiniTaskResult::MiniTaskInfo & getMiniTaskInfo() const { DARABONBA_PTR_GET_CONST(miniTaskInfo_, QueryMiniTaskResult::MiniTaskInfo) };
      inline QueryMiniTaskResult::MiniTaskInfo getMiniTaskInfo() { DARABONBA_PTR_GET(miniTaskInfo_, QueryMiniTaskResult::MiniTaskInfo) };
      inline QueryMiniTaskResult& setMiniTaskInfo(const QueryMiniTaskResult::MiniTaskInfo & miniTaskInfo) { DARABONBA_PTR_SET_VALUE(miniTaskInfo_, miniTaskInfo) };
      inline QueryMiniTaskResult& setMiniTaskInfo(QueryMiniTaskResult::MiniTaskInfo && miniTaskInfo) { DARABONBA_PTR_SET_RVALUE(miniTaskInfo_, miniTaskInfo) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline QueryMiniTaskResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline QueryMiniTaskResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<QueryMiniTaskResult::MiniTaskInfo> miniTaskInfo_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->queryMiniTaskResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // queryMiniTaskResult Field Functions 
    bool hasQueryMiniTaskResult() const { return this->queryMiniTaskResult_ != nullptr;};
    void deleteQueryMiniTaskResult() { this->queryMiniTaskResult_ = nullptr;};
    inline const QueryMcubeMiniTaskResponseBody::QueryMiniTaskResult & getQueryMiniTaskResult() const { DARABONBA_PTR_GET_CONST(queryMiniTaskResult_, QueryMcubeMiniTaskResponseBody::QueryMiniTaskResult) };
    inline QueryMcubeMiniTaskResponseBody::QueryMiniTaskResult getQueryMiniTaskResult() { DARABONBA_PTR_GET(queryMiniTaskResult_, QueryMcubeMiniTaskResponseBody::QueryMiniTaskResult) };
    inline QueryMcubeMiniTaskResponseBody& setQueryMiniTaskResult(const QueryMcubeMiniTaskResponseBody::QueryMiniTaskResult & queryMiniTaskResult) { DARABONBA_PTR_SET_VALUE(queryMiniTaskResult_, queryMiniTaskResult) };
    inline QueryMcubeMiniTaskResponseBody& setQueryMiniTaskResult(QueryMcubeMiniTaskResponseBody::QueryMiniTaskResult && queryMiniTaskResult) { DARABONBA_PTR_SET_RVALUE(queryMiniTaskResult_, queryMiniTaskResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMcubeMiniTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline QueryMcubeMiniTaskResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline QueryMcubeMiniTaskResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<QueryMcubeMiniTaskResponseBody::QueryMiniTaskResult> queryMiniTaskResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
