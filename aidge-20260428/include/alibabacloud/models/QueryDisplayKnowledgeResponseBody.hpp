// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDISPLAYKNOWLEDGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDISPLAYKNOWLEDGERESPONSEBODY_HPP_
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
  class QueryDisplayKnowledgeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDisplayKnowledgeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDisplayKnowledgeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryDisplayKnowledgeResponseBody() = default ;
    QueryDisplayKnowledgeResponseBody(const QueryDisplayKnowledgeResponseBody &) = default ;
    QueryDisplayKnowledgeResponseBody(QueryDisplayKnowledgeResponseBody &&) = default ;
    QueryDisplayKnowledgeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDisplayKnowledgeResponseBody() = default ;
    QueryDisplayKnowledgeResponseBody& operator=(const QueryDisplayKnowledgeResponseBody &) = default ;
    QueryDisplayKnowledgeResponseBody& operator=(QueryDisplayKnowledgeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(KnowledgeBaseStatus, knowledgeBaseStatus_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(RagId, ragId_);
        DARABONBA_PTR_TO_JSON(Records, records_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(Total, total_);
        DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
        DARABONBA_PTR_TO_JSON(UsageMap, usageMap_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(KnowledgeBaseStatus, knowledgeBaseStatus_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(RagId, ragId_);
        DARABONBA_PTR_FROM_JSON(Records, records_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
        DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
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
      class Records : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Records& obj) { 
          DARABONBA_PTR_TO_JSON(FailureMessage, failureMessage_);
          DARABONBA_PTR_TO_JSON(FailureReason, failureReason_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_TO_JSON(ImageUrlExpireTime, imageUrlExpireTime_);
          DARABONBA_PTR_TO_JSON(RecordId, recordId_);
          DARABONBA_PTR_TO_JSON(SkuId, skuId_);
          DARABONBA_PTR_TO_JSON(SkuName, skuName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Records& obj) { 
          DARABONBA_PTR_FROM_JSON(FailureMessage, failureMessage_);
          DARABONBA_PTR_FROM_JSON(FailureReason, failureReason_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_FROM_JSON(ImageUrlExpireTime, imageUrlExpireTime_);
          DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
          DARABONBA_PTR_FROM_JSON(SkuId, skuId_);
          DARABONBA_PTR_FROM_JSON(SkuName, skuName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Records() = default ;
        Records(const Records &) = default ;
        Records(Records &&) = default ;
        Records(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Records() = default ;
        Records& operator=(const Records &) = default ;
        Records& operator=(Records &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->failureMessage_ == nullptr
        && this->failureReason_ == nullptr && this->gmtModified_ == nullptr && this->imageUrl_ == nullptr && this->imageUrlExpireTime_ == nullptr && this->recordId_ == nullptr
        && this->skuId_ == nullptr && this->skuName_ == nullptr && this->status_ == nullptr; };
        // failureMessage Field Functions 
        bool hasFailureMessage() const { return this->failureMessage_ != nullptr;};
        void deleteFailureMessage() { this->failureMessage_ = nullptr;};
        inline string getFailureMessage() const { DARABONBA_PTR_GET_DEFAULT(failureMessage_, "") };
        inline Records& setFailureMessage(string failureMessage) { DARABONBA_PTR_SET_VALUE(failureMessage_, failureMessage) };


        // failureReason Field Functions 
        bool hasFailureReason() const { return this->failureReason_ != nullptr;};
        void deleteFailureReason() { this->failureReason_ = nullptr;};
        inline string getFailureReason() const { DARABONBA_PTR_GET_DEFAULT(failureReason_, "") };
        inline Records& setFailureReason(string failureReason) { DARABONBA_PTR_SET_VALUE(failureReason_, failureReason) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Records& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // imageUrl Field Functions 
        bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
        void deleteImageUrl() { this->imageUrl_ = nullptr;};
        inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
        inline Records& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


        // imageUrlExpireTime Field Functions 
        bool hasImageUrlExpireTime() const { return this->imageUrlExpireTime_ != nullptr;};
        void deleteImageUrlExpireTime() { this->imageUrlExpireTime_ = nullptr;};
        inline string getImageUrlExpireTime() const { DARABONBA_PTR_GET_DEFAULT(imageUrlExpireTime_, "") };
        inline Records& setImageUrlExpireTime(string imageUrlExpireTime) { DARABONBA_PTR_SET_VALUE(imageUrlExpireTime_, imageUrlExpireTime) };


        // recordId Field Functions 
        bool hasRecordId() const { return this->recordId_ != nullptr;};
        void deleteRecordId() { this->recordId_ = nullptr;};
        inline int64_t getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
        inline Records& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


        // skuId Field Functions 
        bool hasSkuId() const { return this->skuId_ != nullptr;};
        void deleteSkuId() { this->skuId_ = nullptr;};
        inline string getSkuId() const { DARABONBA_PTR_GET_DEFAULT(skuId_, "") };
        inline Records& setSkuId(string skuId) { DARABONBA_PTR_SET_VALUE(skuId_, skuId) };


        // skuName Field Functions 
        bool hasSkuName() const { return this->skuName_ != nullptr;};
        void deleteSkuName() { this->skuName_ = nullptr;};
        inline string getSkuName() const { DARABONBA_PTR_GET_DEFAULT(skuName_, "") };
        inline Records& setSkuName(string skuName) { DARABONBA_PTR_SET_VALUE(skuName_, skuName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Records& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The description of the failure cause. This parameter is returned only when the status is FAILED.
        shared_ptr<string> failureMessage_ {};
        // The code of the failure cause. This parameter is returned only when the status is FAILED.
        shared_ptr<string> failureReason_ {};
        // The last modified time.
        shared_ptr<string> gmtModified_ {};
        // The 24-hour signed URL of the transferred image.
        shared_ptr<string> imageUrl_ {};
        // The expiration time of the signed URL.
        shared_ptr<string> imageUrlExpireTime_ {};
        // The record ID.
        shared_ptr<int64_t> recordId_ {};
        // SKU ID
        shared_ptr<string> skuId_ {};
        // The SKU name.
        shared_ptr<string> skuName_ {};
        // The record status.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->knowledgeBaseStatus_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->ragId_ == nullptr
        && this->records_ == nullptr && this->success_ == nullptr && this->taskId_ == nullptr && this->total_ == nullptr && this->totalPage_ == nullptr
        && this->usageMap_ == nullptr; };
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


      // knowledgeBaseStatus Field Functions 
      bool hasKnowledgeBaseStatus() const { return this->knowledgeBaseStatus_ != nullptr;};
      void deleteKnowledgeBaseStatus() { this->knowledgeBaseStatus_ = nullptr;};
      inline string getKnowledgeBaseStatus() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseStatus_, "") };
      inline Data& setKnowledgeBaseStatus(string knowledgeBaseStatus) { DARABONBA_PTR_SET_VALUE(knowledgeBaseStatus_, knowledgeBaseStatus) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Data& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // ragId Field Functions 
      bool hasRagId() const { return this->ragId_ != nullptr;};
      void deleteRagId() { this->ragId_ = nullptr;};
      inline string getRagId() const { DARABONBA_PTR_GET_DEFAULT(ragId_, "") };
      inline Data& setRagId(string ragId) { DARABONBA_PTR_SET_VALUE(ragId_, ragId) };


      // records Field Functions 
      bool hasRecords() const { return this->records_ != nullptr;};
      void deleteRecords() { this->records_ = nullptr;};
      inline const vector<Data::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<Data::Records>) };
      inline vector<Data::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<Data::Records>) };
      inline Data& setRecords(const vector<Data::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
      inline Data& setRecords(vector<Data::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


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


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      // totalPage Field Functions 
      bool hasTotalPage() const { return this->totalPage_ != nullptr;};
      void deleteTotalPage() { this->totalPage_ = nullptr;};
      inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
      inline Data& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


      // usageMap Field Functions 
      bool hasUsageMap() const { return this->usageMap_ != nullptr;};
      void deleteUsageMap() { this->usageMap_ = nullptr;};
      inline const map<string, int64_t> & getUsageMap() const { DARABONBA_PTR_GET_CONST(usageMap_, map<string, int64_t>) };
      inline map<string, int64_t> getUsageMap() { DARABONBA_PTR_GET(usageMap_, map<string, int64_t>) };
      inline Data& setUsageMap(const map<string, int64_t> & usageMap) { DARABONBA_PTR_SET_VALUE(usageMap_, usageMap) };
      inline Data& setUsageMap(map<string, int64_t> && usageMap) { DARABONBA_PTR_SET_RVALUE(usageMap_, usageMap) };


    protected:
      // The business error code.
      shared_ptr<string> errorCode_ {};
      // The business error message.
      shared_ptr<string> errorMessage_ {};
      // The knowledge base status.
      shared_ptr<string> knowledgeBaseStatus_ {};
      // The page number.
      shared_ptr<int32_t> pageNum_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The knowledge base ID.
      shared_ptr<string> ragId_ {};
      // The records on the current page.
      shared_ptr<vector<Data::Records>> records_ {};
      // Indicates whether the business processing is successful.
      shared_ptr<bool> success_ {};
      // The asynchronous task ID. This parameter is empty for synchronous API operations.
      shared_ptr<string> taskId_ {};
      // The total number of records.
      shared_ptr<int32_t> total_ {};
      // The total number of pages.
      shared_ptr<int32_t> totalPage_ {};
      // The usage information. This parameter is empty for free API operations.
      shared_ptr<map<string, int64_t>> usageMap_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryDisplayKnowledgeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryDisplayKnowledgeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryDisplayKnowledgeResponseBody::Data) };
    inline QueryDisplayKnowledgeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryDisplayKnowledgeResponseBody::Data) };
    inline QueryDisplayKnowledgeResponseBody& setData(const QueryDisplayKnowledgeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryDisplayKnowledgeResponseBody& setData(QueryDisplayKnowledgeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryDisplayKnowledgeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDisplayKnowledgeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryDisplayKnowledgeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The query result of the display knowledge base content.
    shared_ptr<QueryDisplayKnowledgeResponseBody::Data> data_ {};
    // The returned message or failure description.
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
