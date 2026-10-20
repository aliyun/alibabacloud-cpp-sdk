// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDISPLAYKNOWLEDGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEDISPLAYKNOWLEDGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class DeleteDisplayKnowledgeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDisplayKnowledgeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDisplayKnowledgeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DeleteDisplayKnowledgeResponseBody() = default ;
    DeleteDisplayKnowledgeResponseBody(const DeleteDisplayKnowledgeResponseBody &) = default ;
    DeleteDisplayKnowledgeResponseBody(DeleteDisplayKnowledgeResponseBody &&) = default ;
    DeleteDisplayKnowledgeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDisplayKnowledgeResponseBody() = default ;
    DeleteDisplayKnowledgeResponseBody& operator=(const DeleteDisplayKnowledgeResponseBody &) = default ;
    DeleteDisplayKnowledgeResponseBody& operator=(DeleteDisplayKnowledgeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AcceptedCount, acceptedCount_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
        DARABONBA_PTR_TO_JSON(KnowledgeBaseStatus, knowledgeBaseStatus_);
        DARABONBA_PTR_TO_JSON(RagId, ragId_);
        DARABONBA_PTR_TO_JSON(RemainingCount, remainingCount_);
        DARABONBA_PTR_TO_JSON(Results, results_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(UsageMap, usageMap_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AcceptedCount, acceptedCount_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
        DARABONBA_PTR_FROM_JSON(KnowledgeBaseStatus, knowledgeBaseStatus_);
        DARABONBA_PTR_FROM_JSON(RagId, ragId_);
        DARABONBA_PTR_FROM_JSON(RemainingCount, remainingCount_);
        DARABONBA_PTR_FROM_JSON(Results, results_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(UsageMap, usageMap_);
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
      class Results : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Results& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(Index, index_);
          DARABONBA_PTR_TO_JSON(RecordId, recordId_);
          DARABONBA_PTR_TO_JSON(SkuId, skuId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Success, success_);
        };
        friend void from_json(const Darabonba::Json& j, Results& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(Index, index_);
          DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
          DARABONBA_PTR_FROM_JSON(SkuId, skuId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
        };
        Results() = default ;
        Results(const Results &) = default ;
        Results(Results &&) = default ;
        Results(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Results() = default ;
        Results& operator=(const Results &) = default ;
        Results& operator=(Results &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->index_ == nullptr && this->recordId_ == nullptr && this->skuId_ == nullptr && this->status_ == nullptr
        && this->success_ == nullptr; };
        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline Results& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline Results& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // index Field Functions 
        bool hasIndex() const { return this->index_ != nullptr;};
        void deleteIndex() { this->index_ = nullptr;};
        inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
        inline Results& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


        // recordId Field Functions 
        bool hasRecordId() const { return this->recordId_ != nullptr;};
        void deleteRecordId() { this->recordId_ = nullptr;};
        inline int64_t getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
        inline Results& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


        // skuId Field Functions 
        bool hasSkuId() const { return this->skuId_ != nullptr;};
        void deleteSkuId() { this->skuId_ = nullptr;};
        inline string getSkuId() const { DARABONBA_PTR_GET_DEFAULT(skuId_, "") };
        inline Results& setSkuId(string skuId) { DARABONBA_PTR_SET_VALUE(skuId_, skuId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Results& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
        inline Results& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      protected:
        // The error code for the failure.
        shared_ptr<string> errorCode_ {};
        // The cause of the failure.
        shared_ptr<string> errorMessage_ {};
        // The index in the original request array.
        shared_ptr<int32_t> index_ {};
        // The record ID.
        shared_ptr<int64_t> recordId_ {};
        // The SKU ID. This field is empty for deletion results.
        shared_ptr<string> skuId_ {};
        // The record status. This field is empty for deletion results.
        shared_ptr<string> status_ {};
        // Indicates whether the deletion is successful.
        shared_ptr<bool> success_ {};
      };

      virtual bool empty() const override { return this->acceptedCount_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->failedCount_ == nullptr && this->knowledgeBaseStatus_ == nullptr && this->ragId_ == nullptr
        && this->remainingCount_ == nullptr && this->results_ == nullptr && this->success_ == nullptr && this->taskId_ == nullptr && this->usageMap_ == nullptr; };
      // acceptedCount Field Functions 
      bool hasAcceptedCount() const { return this->acceptedCount_ != nullptr;};
      void deleteAcceptedCount() { this->acceptedCount_ = nullptr;};
      inline int32_t getAcceptedCount() const { DARABONBA_PTR_GET_DEFAULT(acceptedCount_, 0) };
      inline Data& setAcceptedCount(int32_t acceptedCount) { DARABONBA_PTR_SET_VALUE(acceptedCount_, acceptedCount) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Data& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // failedCount Field Functions 
      bool hasFailedCount() const { return this->failedCount_ != nullptr;};
      void deleteFailedCount() { this->failedCount_ = nullptr;};
      inline int32_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0) };
      inline Data& setFailedCount(int32_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


      // knowledgeBaseStatus Field Functions 
      bool hasKnowledgeBaseStatus() const { return this->knowledgeBaseStatus_ != nullptr;};
      void deleteKnowledgeBaseStatus() { this->knowledgeBaseStatus_ = nullptr;};
      inline string getKnowledgeBaseStatus() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseStatus_, "") };
      inline Data& setKnowledgeBaseStatus(string knowledgeBaseStatus) { DARABONBA_PTR_SET_VALUE(knowledgeBaseStatus_, knowledgeBaseStatus) };


      // ragId Field Functions 
      bool hasRagId() const { return this->ragId_ != nullptr;};
      void deleteRagId() { this->ragId_ = nullptr;};
      inline string getRagId() const { DARABONBA_PTR_GET_DEFAULT(ragId_, "") };
      inline Data& setRagId(string ragId) { DARABONBA_PTR_SET_VALUE(ragId_, ragId) };


      // remainingCount Field Functions 
      bool hasRemainingCount() const { return this->remainingCount_ != nullptr;};
      void deleteRemainingCount() { this->remainingCount_ = nullptr;};
      inline int32_t getRemainingCount() const { DARABONBA_PTR_GET_DEFAULT(remainingCount_, 0) };
      inline Data& setRemainingCount(int32_t remainingCount) { DARABONBA_PTR_SET_VALUE(remainingCount_, remainingCount) };


      // results Field Functions 
      bool hasResults() const { return this->results_ != nullptr;};
      void deleteResults() { this->results_ = nullptr;};
      inline const vector<Data::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<Data::Results>) };
      inline vector<Data::Results> getResults() { DARABONBA_PTR_GET(results_, vector<Data::Results>) };
      inline Data& setResults(const vector<Data::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
      inline Data& setResults(vector<Data::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // usageMap Field Functions 
      bool hasUsageMap() const { return this->usageMap_ != nullptr;};
      void deleteUsageMap() { this->usageMap_ = nullptr;};
      inline const map<string, int64_t> & getUsageMap() const { DARABONBA_PTR_GET_CONST(usageMap_, map<string, int64_t>) };
      inline map<string, int64_t> getUsageMap() { DARABONBA_PTR_GET(usageMap_, map<string, int64_t>) };
      inline Data& setUsageMap(const map<string, int64_t> & usageMap) { DARABONBA_PTR_SET_VALUE(usageMap_, usageMap) };
      inline Data& setUsageMap(map<string, int64_t> && usageMap) { DARABONBA_PTR_SET_RVALUE(usageMap_, usageMap) };


    protected:
      // The number of accepted records.
      shared_ptr<int32_t> acceptedCount_ {};
      // The business error code.
      shared_ptr<string> errorCode_ {};
      // The business error message.
      shared_ptr<string> errorMessage_ {};
      // The number of failed records.
      shared_ptr<int32_t> failedCount_ {};
      // The status of the knowledge base.
      shared_ptr<string> knowledgeBaseStatus_ {};
      // The knowledge base ID.
      shared_ptr<string> ragId_ {};
      // The number of visible records after the deletion.
      shared_ptr<int32_t> remainingCount_ {};
      // The processing results for each record.
      shared_ptr<vector<Data::Results>> results_ {};
      // Indicates whether the business processing is successful.
      shared_ptr<bool> success_ {};
      // The asynchronous task ID. This field is empty for synchronous API operations.
      shared_ptr<string> taskId_ {};
      // The usage information. This field is empty for free API operations.
      shared_ptr<map<string, int64_t>> usageMap_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteDisplayKnowledgeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DeleteDisplayKnowledgeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DeleteDisplayKnowledgeResponseBody::Data) };
    inline DeleteDisplayKnowledgeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DeleteDisplayKnowledgeResponseBody::Data) };
    inline DeleteDisplayKnowledgeResponseBody& setData(const DeleteDisplayKnowledgeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DeleteDisplayKnowledgeResponseBody& setData(DeleteDisplayKnowledgeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteDisplayKnowledgeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteDisplayKnowledgeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteDisplayKnowledgeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The deletion results for the display knowledge base content.
    shared_ptr<DeleteDisplayKnowledgeResponseBody::Data> data_ {};
    // The response message or failure description.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
