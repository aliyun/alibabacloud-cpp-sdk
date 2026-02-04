// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAICALLDETAILPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAICALLDETAILPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryAiCallDetailPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAiCallDetailPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAiCallDetailPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryAiCallDetailPageResponseBody() = default ;
    QueryAiCallDetailPageResponseBody(const QueryAiCallDetailPageResponseBody &) = default ;
    QueryAiCallDetailPageResponseBody(QueryAiCallDetailPageResponseBody &&) = default ;
    QueryAiCallDetailPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAiCallDetailPageResponseBody() = default ;
    QueryAiCallDetailPageResponseBody& operator=(const QueryAiCallDetailPageResponseBody &) = default ;
    QueryAiCallDetailPageResponseBody& operator=(QueryAiCallDetailPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(BatchId, batchId_);
          DARABONBA_PTR_TO_JSON(BranchId, branchId_);
          DARABONBA_PTR_TO_JSON(BranchVersionId, branchVersionId_);
          DARABONBA_PTR_TO_JSON(CallResult, callResult_);
          DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
          DARABONBA_PTR_TO_JSON(CallingTime, callingTime_);
          DARABONBA_PTR_TO_JSON(ConversationDuration, conversationDuration_);
          DARABONBA_PTR_TO_JSON(ConversationRecord, conversationRecord_);
          DARABONBA_PTR_TO_JSON(ConversationTurnCount, conversationTurnCount_);
          DARABONBA_PTR_TO_JSON(DetailId, detailId_);
          DARABONBA_PTR_TO_JSON(EncryptionType, encryptionType_);
          DARABONBA_PTR_TO_JSON(FailedReason, failedReason_);
          DARABONBA_PTR_TO_JSON(ImportedTime, importedTime_);
          DARABONBA_PTR_TO_JSON(MajorIntent, majorIntent_);
          DARABONBA_PTR_TO_JSON(Options, options_);
          DARABONBA_PTR_TO_JSON(OutId, outId_);
          DARABONBA_PTR_TO_JSON(RecordingFilePath, recordingFilePath_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
          DARABONBA_PTR_FROM_JSON(BranchId, branchId_);
          DARABONBA_PTR_FROM_JSON(BranchVersionId, branchVersionId_);
          DARABONBA_PTR_FROM_JSON(CallResult, callResult_);
          DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
          DARABONBA_PTR_FROM_JSON(CallingTime, callingTime_);
          DARABONBA_PTR_FROM_JSON(ConversationDuration, conversationDuration_);
          DARABONBA_PTR_FROM_JSON(ConversationRecord, conversationRecord_);
          DARABONBA_PTR_FROM_JSON(ConversationTurnCount, conversationTurnCount_);
          DARABONBA_PTR_FROM_JSON(DetailId, detailId_);
          DARABONBA_PTR_FROM_JSON(EncryptionType, encryptionType_);
          DARABONBA_PTR_FROM_JSON(FailedReason, failedReason_);
          DARABONBA_PTR_FROM_JSON(ImportedTime, importedTime_);
          DARABONBA_PTR_FROM_JSON(MajorIntent, majorIntent_);
          DARABONBA_PTR_FROM_JSON(Options, options_);
          DARABONBA_PTR_FROM_JSON(OutId, outId_);
          DARABONBA_PTR_FROM_JSON(RecordingFilePath, recordingFilePath_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->batchId_ == nullptr
        && this->branchId_ == nullptr && this->branchVersionId_ == nullptr && this->callResult_ == nullptr && this->calledNumber_ == nullptr && this->callingTime_ == nullptr
        && this->conversationDuration_ == nullptr && this->conversationRecord_ == nullptr && this->conversationTurnCount_ == nullptr && this->detailId_ == nullptr && this->encryptionType_ == nullptr
        && this->failedReason_ == nullptr && this->importedTime_ == nullptr && this->majorIntent_ == nullptr && this->options_ == nullptr && this->outId_ == nullptr
        && this->recordingFilePath_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr; };
        // batchId Field Functions 
        bool hasBatchId() const { return this->batchId_ != nullptr;};
        void deleteBatchId() { this->batchId_ = nullptr;};
        inline string getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
        inline List& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


        // branchId Field Functions 
        bool hasBranchId() const { return this->branchId_ != nullptr;};
        void deleteBranchId() { this->branchId_ = nullptr;};
        inline int64_t getBranchId() const { DARABONBA_PTR_GET_DEFAULT(branchId_, 0L) };
        inline List& setBranchId(int64_t branchId) { DARABONBA_PTR_SET_VALUE(branchId_, branchId) };


        // branchVersionId Field Functions 
        bool hasBranchVersionId() const { return this->branchVersionId_ != nullptr;};
        void deleteBranchVersionId() { this->branchVersionId_ = nullptr;};
        inline int64_t getBranchVersionId() const { DARABONBA_PTR_GET_DEFAULT(branchVersionId_, 0L) };
        inline List& setBranchVersionId(int64_t branchVersionId) { DARABONBA_PTR_SET_VALUE(branchVersionId_, branchVersionId) };


        // callResult Field Functions 
        bool hasCallResult() const { return this->callResult_ != nullptr;};
        void deleteCallResult() { this->callResult_ = nullptr;};
        inline string getCallResult() const { DARABONBA_PTR_GET_DEFAULT(callResult_, "") };
        inline List& setCallResult(string callResult) { DARABONBA_PTR_SET_VALUE(callResult_, callResult) };


        // calledNumber Field Functions 
        bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
        void deleteCalledNumber() { this->calledNumber_ = nullptr;};
        inline string getCalledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
        inline List& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


        // callingTime Field Functions 
        bool hasCallingTime() const { return this->callingTime_ != nullptr;};
        void deleteCallingTime() { this->callingTime_ = nullptr;};
        inline int64_t getCallingTime() const { DARABONBA_PTR_GET_DEFAULT(callingTime_, 0L) };
        inline List& setCallingTime(int64_t callingTime) { DARABONBA_PTR_SET_VALUE(callingTime_, callingTime) };


        // conversationDuration Field Functions 
        bool hasConversationDuration() const { return this->conversationDuration_ != nullptr;};
        void deleteConversationDuration() { this->conversationDuration_ = nullptr;};
        inline int64_t getConversationDuration() const { DARABONBA_PTR_GET_DEFAULT(conversationDuration_, 0L) };
        inline List& setConversationDuration(int64_t conversationDuration) { DARABONBA_PTR_SET_VALUE(conversationDuration_, conversationDuration) };


        // conversationRecord Field Functions 
        bool hasConversationRecord() const { return this->conversationRecord_ != nullptr;};
        void deleteConversationRecord() { this->conversationRecord_ = nullptr;};
        inline string getConversationRecord() const { DARABONBA_PTR_GET_DEFAULT(conversationRecord_, "") };
        inline List& setConversationRecord(string conversationRecord) { DARABONBA_PTR_SET_VALUE(conversationRecord_, conversationRecord) };


        // conversationTurnCount Field Functions 
        bool hasConversationTurnCount() const { return this->conversationTurnCount_ != nullptr;};
        void deleteConversationTurnCount() { this->conversationTurnCount_ = nullptr;};
        inline int64_t getConversationTurnCount() const { DARABONBA_PTR_GET_DEFAULT(conversationTurnCount_, 0L) };
        inline List& setConversationTurnCount(int64_t conversationTurnCount) { DARABONBA_PTR_SET_VALUE(conversationTurnCount_, conversationTurnCount) };


        // detailId Field Functions 
        bool hasDetailId() const { return this->detailId_ != nullptr;};
        void deleteDetailId() { this->detailId_ = nullptr;};
        inline string getDetailId() const { DARABONBA_PTR_GET_DEFAULT(detailId_, "") };
        inline List& setDetailId(string detailId) { DARABONBA_PTR_SET_VALUE(detailId_, detailId) };


        // encryptionType Field Functions 
        bool hasEncryptionType() const { return this->encryptionType_ != nullptr;};
        void deleteEncryptionType() { this->encryptionType_ = nullptr;};
        inline int64_t getEncryptionType() const { DARABONBA_PTR_GET_DEFAULT(encryptionType_, 0L) };
        inline List& setEncryptionType(int64_t encryptionType) { DARABONBA_PTR_SET_VALUE(encryptionType_, encryptionType) };


        // failedReason Field Functions 
        bool hasFailedReason() const { return this->failedReason_ != nullptr;};
        void deleteFailedReason() { this->failedReason_ = nullptr;};
        inline string getFailedReason() const { DARABONBA_PTR_GET_DEFAULT(failedReason_, "") };
        inline List& setFailedReason(string failedReason) { DARABONBA_PTR_SET_VALUE(failedReason_, failedReason) };


        // importedTime Field Functions 
        bool hasImportedTime() const { return this->importedTime_ != nullptr;};
        void deleteImportedTime() { this->importedTime_ = nullptr;};
        inline int64_t getImportedTime() const { DARABONBA_PTR_GET_DEFAULT(importedTime_, 0L) };
        inline List& setImportedTime(int64_t importedTime) { DARABONBA_PTR_SET_VALUE(importedTime_, importedTime) };


        // majorIntent Field Functions 
        bool hasMajorIntent() const { return this->majorIntent_ != nullptr;};
        void deleteMajorIntent() { this->majorIntent_ = nullptr;};
        inline string getMajorIntent() const { DARABONBA_PTR_GET_DEFAULT(majorIntent_, "") };
        inline List& setMajorIntent(string majorIntent) { DARABONBA_PTR_SET_VALUE(majorIntent_, majorIntent) };


        // options Field Functions 
        bool hasOptions() const { return this->options_ != nullptr;};
        void deleteOptions() { this->options_ = nullptr;};
        inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
        inline List& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


        // outId Field Functions 
        bool hasOutId() const { return this->outId_ != nullptr;};
        void deleteOutId() { this->outId_ = nullptr;};
        inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
        inline List& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


        // recordingFilePath Field Functions 
        bool hasRecordingFilePath() const { return this->recordingFilePath_ != nullptr;};
        void deleteRecordingFilePath() { this->recordingFilePath_ = nullptr;};
        inline string getRecordingFilePath() const { DARABONBA_PTR_GET_DEFAULT(recordingFilePath_, "") };
        inline List& setRecordingFilePath(string recordingFilePath) { DARABONBA_PTR_SET_VALUE(recordingFilePath_, recordingFilePath) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
        inline List& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline List& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      protected:
        shared_ptr<string> batchId_ {};
        shared_ptr<int64_t> branchId_ {};
        shared_ptr<int64_t> branchVersionId_ {};
        shared_ptr<string> callResult_ {};
        shared_ptr<string> calledNumber_ {};
        shared_ptr<int64_t> callingTime_ {};
        shared_ptr<int64_t> conversationDuration_ {};
        shared_ptr<string> conversationRecord_ {};
        shared_ptr<int64_t> conversationTurnCount_ {};
        shared_ptr<string> detailId_ {};
        shared_ptr<int64_t> encryptionType_ {};
        shared_ptr<string> failedReason_ {};
        shared_ptr<int64_t> importedTime_ {};
        shared_ptr<string> majorIntent_ {};
        shared_ptr<string> options_ {};
        shared_ptr<string> outId_ {};
        shared_ptr<string> recordingFilePath_ {};
        shared_ptr<int64_t> status_ {};
        shared_ptr<string> taskId_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
      inline Data& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<int64_t> pageNo_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QueryAiCallDetailPageResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryAiCallDetailPageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryAiCallDetailPageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryAiCallDetailPageResponseBody::Data) };
    inline QueryAiCallDetailPageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryAiCallDetailPageResponseBody::Data) };
    inline QueryAiCallDetailPageResponseBody& setData(const QueryAiCallDetailPageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryAiCallDetailPageResponseBody& setData(QueryAiCallDetailPageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryAiCallDetailPageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAiCallDetailPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryAiCallDetailPageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<QueryAiCallDetailPageResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
