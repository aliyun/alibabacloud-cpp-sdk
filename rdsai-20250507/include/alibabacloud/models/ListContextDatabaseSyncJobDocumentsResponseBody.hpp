// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTEXTDATABASESYNCJOBDOCUMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTEXTDATABASESYNCJOBDOCUMENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ListContextDatabaseSyncJobDocumentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListContextDatabaseSyncJobDocumentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListContextDatabaseSyncJobDocumentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListContextDatabaseSyncJobDocumentsResponseBody() = default ;
    ListContextDatabaseSyncJobDocumentsResponseBody(const ListContextDatabaseSyncJobDocumentsResponseBody &) = default ;
    ListContextDatabaseSyncJobDocumentsResponseBody(ListContextDatabaseSyncJobDocumentsResponseBody &&) = default ;
    ListContextDatabaseSyncJobDocumentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListContextDatabaseSyncJobDocumentsResponseBody() = default ;
    ListContextDatabaseSyncJobDocumentsResponseBody& operator=(const ListContextDatabaseSyncJobDocumentsResponseBody &) = default ;
    ListContextDatabaseSyncJobDocumentsResponseBody& operator=(ListContextDatabaseSyncJobDocumentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Documents, documents_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Documents, documents_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
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
      class Documents : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Documents& obj) { 
          DARABONBA_PTR_TO_JSON(ContentHash, contentHash_);
          DARABONBA_PTR_TO_JSON(CtxdbDocumentId, ctxdbDocumentId_);
          DARABONBA_PTR_TO_JSON(ProviderDocumentId, providerDocumentId_);
          DARABONBA_PTR_TO_JSON(RetiredAt, retiredAt_);
          DARABONBA_PTR_TO_JSON(SourceUpdateTime, sourceUpdateTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
        };
        friend void from_json(const Darabonba::Json& j, Documents& obj) { 
          DARABONBA_PTR_FROM_JSON(ContentHash, contentHash_);
          DARABONBA_PTR_FROM_JSON(CtxdbDocumentId, ctxdbDocumentId_);
          DARABONBA_PTR_FROM_JSON(ProviderDocumentId, providerDocumentId_);
          DARABONBA_PTR_FROM_JSON(RetiredAt, retiredAt_);
          DARABONBA_PTR_FROM_JSON(SourceUpdateTime, sourceUpdateTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
        };
        Documents() = default ;
        Documents(const Documents &) = default ;
        Documents(Documents &&) = default ;
        Documents(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Documents() = default ;
        Documents& operator=(const Documents &) = default ;
        Documents& operator=(Documents &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->contentHash_ == nullptr
        && this->ctxdbDocumentId_ == nullptr && this->providerDocumentId_ == nullptr && this->retiredAt_ == nullptr && this->sourceUpdateTime_ == nullptr && this->status_ == nullptr
        && this->updatedAt_ == nullptr; };
        // contentHash Field Functions 
        bool hasContentHash() const { return this->contentHash_ != nullptr;};
        void deleteContentHash() { this->contentHash_ = nullptr;};
        inline string getContentHash() const { DARABONBA_PTR_GET_DEFAULT(contentHash_, "") };
        inline Documents& setContentHash(string contentHash) { DARABONBA_PTR_SET_VALUE(contentHash_, contentHash) };


        // ctxdbDocumentId Field Functions 
        bool hasCtxdbDocumentId() const { return this->ctxdbDocumentId_ != nullptr;};
        void deleteCtxdbDocumentId() { this->ctxdbDocumentId_ = nullptr;};
        inline string getCtxdbDocumentId() const { DARABONBA_PTR_GET_DEFAULT(ctxdbDocumentId_, "") };
        inline Documents& setCtxdbDocumentId(string ctxdbDocumentId) { DARABONBA_PTR_SET_VALUE(ctxdbDocumentId_, ctxdbDocumentId) };


        // providerDocumentId Field Functions 
        bool hasProviderDocumentId() const { return this->providerDocumentId_ != nullptr;};
        void deleteProviderDocumentId() { this->providerDocumentId_ = nullptr;};
        inline string getProviderDocumentId() const { DARABONBA_PTR_GET_DEFAULT(providerDocumentId_, "") };
        inline Documents& setProviderDocumentId(string providerDocumentId) { DARABONBA_PTR_SET_VALUE(providerDocumentId_, providerDocumentId) };


        // retiredAt Field Functions 
        bool hasRetiredAt() const { return this->retiredAt_ != nullptr;};
        void deleteRetiredAt() { this->retiredAt_ = nullptr;};
        inline string getRetiredAt() const { DARABONBA_PTR_GET_DEFAULT(retiredAt_, "") };
        inline Documents& setRetiredAt(string retiredAt) { DARABONBA_PTR_SET_VALUE(retiredAt_, retiredAt) };


        // sourceUpdateTime Field Functions 
        bool hasSourceUpdateTime() const { return this->sourceUpdateTime_ != nullptr;};
        void deleteSourceUpdateTime() { this->sourceUpdateTime_ = nullptr;};
        inline string getSourceUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(sourceUpdateTime_, "") };
        inline Documents& setSourceUpdateTime(string sourceUpdateTime) { DARABONBA_PTR_SET_VALUE(sourceUpdateTime_, sourceUpdateTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Documents& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // updatedAt Field Functions 
        bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
        void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
        inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
        inline Documents& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      protected:
        // The content hash.
        shared_ptr<string> contentHash_ {};
        // The ContextDB document ID.
        shared_ptr<string> ctxdbDocumentId_ {};
        // The source document ID.
        shared_ptr<string> providerDocumentId_ {};
        // The retirement time.
        shared_ptr<string> retiredAt_ {};
        // The source update time.
        shared_ptr<string> sourceUpdateTime_ {};
        // The status.
        shared_ptr<string> status_ {};
        // The update time.
        shared_ptr<string> updatedAt_ {};
      };

      virtual bool empty() const override { return this->documents_ == nullptr
        && this->page_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // documents Field Functions 
      bool hasDocuments() const { return this->documents_ != nullptr;};
      void deleteDocuments() { this->documents_ = nullptr;};
      inline const vector<Data::Documents> & getDocuments() const { DARABONBA_PTR_GET_CONST(documents_, vector<Data::Documents>) };
      inline vector<Data::Documents> getDocuments() { DARABONBA_PTR_GET(documents_, vector<Data::Documents>) };
      inline Data& setDocuments(const vector<Data::Documents> & documents) { DARABONBA_PTR_SET_VALUE(documents_, documents) };
      inline Data& setDocuments(vector<Data::Documents> && documents) { DARABONBA_PTR_SET_RVALUE(documents_, documents) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline Data& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The list of documents.
      shared_ptr<vector<Data::Documents>> documents_ {};
      // The page number, starting from 1.
      shared_ptr<int32_t> page_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListContextDatabaseSyncJobDocumentsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListContextDatabaseSyncJobDocumentsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListContextDatabaseSyncJobDocumentsResponseBody::Data) };
    inline ListContextDatabaseSyncJobDocumentsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListContextDatabaseSyncJobDocumentsResponseBody::Data) };
    inline ListContextDatabaseSyncJobDocumentsResponseBody& setData(const ListContextDatabaseSyncJobDocumentsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListContextDatabaseSyncJobDocumentsResponseBody& setData(ListContextDatabaseSyncJobDocumentsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline ListContextDatabaseSyncJobDocumentsResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListContextDatabaseSyncJobDocumentsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListContextDatabaseSyncJobDocumentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListContextDatabaseSyncJobDocumentsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<ListContextDatabaseSyncJobDocumentsResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int64_t> httpStatusCode_ {};
    // The message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
