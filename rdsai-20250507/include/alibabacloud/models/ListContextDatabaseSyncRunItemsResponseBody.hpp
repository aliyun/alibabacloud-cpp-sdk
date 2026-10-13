// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTEXTDATABASESYNCRUNITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTEXTDATABASESYNCRUNITEMSRESPONSEBODY_HPP_
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
  class ListContextDatabaseSyncRunItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListContextDatabaseSyncRunItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListContextDatabaseSyncRunItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListContextDatabaseSyncRunItemsResponseBody() = default ;
    ListContextDatabaseSyncRunItemsResponseBody(const ListContextDatabaseSyncRunItemsResponseBody &) = default ;
    ListContextDatabaseSyncRunItemsResponseBody(ListContextDatabaseSyncRunItemsResponseBody &&) = default ;
    ListContextDatabaseSyncRunItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListContextDatabaseSyncRunItemsResponseBody() = default ;
    ListContextDatabaseSyncRunItemsResponseBody& operator=(const ListContextDatabaseSyncRunItemsResponseBody &) = default ;
    ListContextDatabaseSyncRunItemsResponseBody& operator=(ListContextDatabaseSyncRunItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Items, items_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Items, items_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(ArtifactIndex, artifactIndex_);
          DARABONBA_PTR_TO_JSON(CtxdbDocumentId, ctxdbDocumentId_);
          DARABONBA_PTR_TO_JSON(Decision, decision_);
          DARABONBA_PTR_TO_JSON(DecisionCategory, decisionCategory_);
          DARABONBA_PTR_TO_JSON(ProviderDocumentId, providerDocumentId_);
          DARABONBA_PTR_TO_JSON(Reason, reason_);
          DARABONBA_PTR_TO_JSON(SizeBytes, sizeBytes_);
          DARABONBA_PTR_TO_JSON(SourcePath, sourcePath_);
          DARABONBA_PTR_TO_JSON(SourceRecordId, sourceRecordId_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(ArtifactIndex, artifactIndex_);
          DARABONBA_PTR_FROM_JSON(CtxdbDocumentId, ctxdbDocumentId_);
          DARABONBA_PTR_FROM_JSON(Decision, decision_);
          DARABONBA_PTR_FROM_JSON(DecisionCategory, decisionCategory_);
          DARABONBA_PTR_FROM_JSON(ProviderDocumentId, providerDocumentId_);
          DARABONBA_PTR_FROM_JSON(Reason, reason_);
          DARABONBA_PTR_FROM_JSON(SizeBytes, sizeBytes_);
          DARABONBA_PTR_FROM_JSON(SourcePath, sourcePath_);
          DARABONBA_PTR_FROM_JSON(SourceRecordId, sourceRecordId_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->artifactIndex_ == nullptr
        && this->ctxdbDocumentId_ == nullptr && this->decision_ == nullptr && this->decisionCategory_ == nullptr && this->providerDocumentId_ == nullptr && this->reason_ == nullptr
        && this->sizeBytes_ == nullptr && this->sourcePath_ == nullptr && this->sourceRecordId_ == nullptr && this->title_ == nullptr && this->updatedAt_ == nullptr; };
        // artifactIndex Field Functions 
        bool hasArtifactIndex() const { return this->artifactIndex_ != nullptr;};
        void deleteArtifactIndex() { this->artifactIndex_ = nullptr;};
        inline int32_t getArtifactIndex() const { DARABONBA_PTR_GET_DEFAULT(artifactIndex_, 0) };
        inline Items& setArtifactIndex(int32_t artifactIndex) { DARABONBA_PTR_SET_VALUE(artifactIndex_, artifactIndex) };


        // ctxdbDocumentId Field Functions 
        bool hasCtxdbDocumentId() const { return this->ctxdbDocumentId_ != nullptr;};
        void deleteCtxdbDocumentId() { this->ctxdbDocumentId_ = nullptr;};
        inline string getCtxdbDocumentId() const { DARABONBA_PTR_GET_DEFAULT(ctxdbDocumentId_, "") };
        inline Items& setCtxdbDocumentId(string ctxdbDocumentId) { DARABONBA_PTR_SET_VALUE(ctxdbDocumentId_, ctxdbDocumentId) };


        // decision Field Functions 
        bool hasDecision() const { return this->decision_ != nullptr;};
        void deleteDecision() { this->decision_ = nullptr;};
        inline string getDecision() const { DARABONBA_PTR_GET_DEFAULT(decision_, "") };
        inline Items& setDecision(string decision) { DARABONBA_PTR_SET_VALUE(decision_, decision) };


        // decisionCategory Field Functions 
        bool hasDecisionCategory() const { return this->decisionCategory_ != nullptr;};
        void deleteDecisionCategory() { this->decisionCategory_ = nullptr;};
        inline string getDecisionCategory() const { DARABONBA_PTR_GET_DEFAULT(decisionCategory_, "") };
        inline Items& setDecisionCategory(string decisionCategory) { DARABONBA_PTR_SET_VALUE(decisionCategory_, decisionCategory) };


        // providerDocumentId Field Functions 
        bool hasProviderDocumentId() const { return this->providerDocumentId_ != nullptr;};
        void deleteProviderDocumentId() { this->providerDocumentId_ = nullptr;};
        inline string getProviderDocumentId() const { DARABONBA_PTR_GET_DEFAULT(providerDocumentId_, "") };
        inline Items& setProviderDocumentId(string providerDocumentId) { DARABONBA_PTR_SET_VALUE(providerDocumentId_, providerDocumentId) };


        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline Items& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


        // sizeBytes Field Functions 
        bool hasSizeBytes() const { return this->sizeBytes_ != nullptr;};
        void deleteSizeBytes() { this->sizeBytes_ = nullptr;};
        inline int64_t getSizeBytes() const { DARABONBA_PTR_GET_DEFAULT(sizeBytes_, 0L) };
        inline Items& setSizeBytes(int64_t sizeBytes) { DARABONBA_PTR_SET_VALUE(sizeBytes_, sizeBytes) };


        // sourcePath Field Functions 
        bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
        void deleteSourcePath() { this->sourcePath_ = nullptr;};
        inline string getSourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
        inline Items& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


        // sourceRecordId Field Functions 
        bool hasSourceRecordId() const { return this->sourceRecordId_ != nullptr;};
        void deleteSourceRecordId() { this->sourceRecordId_ = nullptr;};
        inline string getSourceRecordId() const { DARABONBA_PTR_GET_DEFAULT(sourceRecordId_, "") };
        inline Items& setSourceRecordId(string sourceRecordId) { DARABONBA_PTR_SET_VALUE(sourceRecordId_, sourceRecordId) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Items& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // updatedAt Field Functions 
        bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
        void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
        inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
        inline Items& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      protected:
        // The document shard index.
        shared_ptr<int32_t> artifactIndex_ {};
        // The ContextDB document ID.
        shared_ptr<string> ctxdbDocumentId_ {};
        // The fine-grained execution status of the current synchronization item, which indicates the processing result of a single document in the current run. Common valid values include uploaded, uploaded-pending-review, upload-accepted, upload-busy, metadata-updating, metadata-updated, migrated, failed, source-failed, replace, warning, deferred, resume, skip, skipped, unsupported, and cancelled.
        shared_ptr<string> decision_ {};
        // The aggregated display status of the current synchronization item. Known mappings include success, failure, processing, and skipped. Unknown Decision values are passed through as-is.
        shared_ptr<string> decisionCategory_ {};
        // The source document ID.
        shared_ptr<string> providerDocumentId_ {};
        // The processing reason or failure reason.
        shared_ptr<string> reason_ {};
        // The size in bytes.
        shared_ptr<int64_t> sizeBytes_ {};
        // The source path.
        shared_ptr<string> sourcePath_ {};
        // The source record ID.
        shared_ptr<string> sourceRecordId_ {};
        // The title.
        shared_ptr<string> title_ {};
        // The update time.
        shared_ptr<string> updatedAt_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->page_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


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
      // The data list.
      shared_ptr<vector<Data::Items>> items_ {};
      // The page number. Pages start from 1.
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
    inline ListContextDatabaseSyncRunItemsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListContextDatabaseSyncRunItemsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListContextDatabaseSyncRunItemsResponseBody::Data) };
    inline ListContextDatabaseSyncRunItemsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListContextDatabaseSyncRunItemsResponseBody::Data) };
    inline ListContextDatabaseSyncRunItemsResponseBody& setData(const ListContextDatabaseSyncRunItemsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListContextDatabaseSyncRunItemsResponseBody& setData(ListContextDatabaseSyncRunItemsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline ListContextDatabaseSyncRunItemsResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListContextDatabaseSyncRunItemsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListContextDatabaseSyncRunItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListContextDatabaseSyncRunItemsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<ListContextDatabaseSyncRunItemsResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int64_t> httpStatusCode_ {};
    // The message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request succeeded.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
