// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCUMENTCOLLECTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCUMENTCOLLECTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListDocumentCollectionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDocumentCollectionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListDocumentCollectionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListDocumentCollectionsResponseBody() = default ;
    ListDocumentCollectionsResponseBody(const ListDocumentCollectionsResponseBody &) = default ;
    ListDocumentCollectionsResponseBody(ListDocumentCollectionsResponseBody &&) = default ;
    ListDocumentCollectionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDocumentCollectionsResponseBody() = default ;
    ListDocumentCollectionsResponseBody& operator=(const ListDocumentCollectionsResponseBody &) = default ;
    ListDocumentCollectionsResponseBody& operator=(ListDocumentCollectionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(CollectionList, collectionList_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(CollectionList, collectionList_);
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
      class CollectionList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CollectionList& obj) { 
          DARABONBA_PTR_TO_JSON(CollectionName, collectionName_);
          DARABONBA_PTR_TO_JSON(Dimension, dimension_);
          DARABONBA_PTR_TO_JSON(EmbeddingModel, embeddingModel_);
          DARABONBA_PTR_TO_JSON(FullTextRetrievalFields, fullTextRetrievalFields_);
          DARABONBA_PTR_TO_JSON(Metadata, metadata_);
          DARABONBA_PTR_TO_JSON(Metrics, metrics_);
          DARABONBA_PTR_TO_JSON(Parser, parser_);
        };
        friend void from_json(const Darabonba::Json& j, CollectionList& obj) { 
          DARABONBA_PTR_FROM_JSON(CollectionName, collectionName_);
          DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
          DARABONBA_PTR_FROM_JSON(EmbeddingModel, embeddingModel_);
          DARABONBA_PTR_FROM_JSON(FullTextRetrievalFields, fullTextRetrievalFields_);
          DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
          DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
          DARABONBA_PTR_FROM_JSON(Parser, parser_);
        };
        CollectionList() = default ;
        CollectionList(const CollectionList &) = default ;
        CollectionList(CollectionList &&) = default ;
        CollectionList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CollectionList() = default ;
        CollectionList& operator=(const CollectionList &) = default ;
        CollectionList& operator=(CollectionList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->collectionName_ == nullptr
        && this->dimension_ == nullptr && this->embeddingModel_ == nullptr && this->fullTextRetrievalFields_ == nullptr && this->metadata_ == nullptr && this->metrics_ == nullptr
        && this->parser_ == nullptr; };
        // collectionName Field Functions 
        bool hasCollectionName() const { return this->collectionName_ != nullptr;};
        void deleteCollectionName() { this->collectionName_ = nullptr;};
        inline string getCollectionName() const { DARABONBA_PTR_GET_DEFAULT(collectionName_, "") };
        inline CollectionList& setCollectionName(string collectionName) { DARABONBA_PTR_SET_VALUE(collectionName_, collectionName) };


        // dimension Field Functions 
        bool hasDimension() const { return this->dimension_ != nullptr;};
        void deleteDimension() { this->dimension_ = nullptr;};
        inline int32_t getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, 0) };
        inline CollectionList& setDimension(int32_t dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


        // embeddingModel Field Functions 
        bool hasEmbeddingModel() const { return this->embeddingModel_ != nullptr;};
        void deleteEmbeddingModel() { this->embeddingModel_ = nullptr;};
        inline string getEmbeddingModel() const { DARABONBA_PTR_GET_DEFAULT(embeddingModel_, "") };
        inline CollectionList& setEmbeddingModel(string embeddingModel) { DARABONBA_PTR_SET_VALUE(embeddingModel_, embeddingModel) };


        // fullTextRetrievalFields Field Functions 
        bool hasFullTextRetrievalFields() const { return this->fullTextRetrievalFields_ != nullptr;};
        void deleteFullTextRetrievalFields() { this->fullTextRetrievalFields_ = nullptr;};
        inline string getFullTextRetrievalFields() const { DARABONBA_PTR_GET_DEFAULT(fullTextRetrievalFields_, "") };
        inline CollectionList& setFullTextRetrievalFields(string fullTextRetrievalFields) { DARABONBA_PTR_SET_VALUE(fullTextRetrievalFields_, fullTextRetrievalFields) };


        // metadata Field Functions 
        bool hasMetadata() const { return this->metadata_ != nullptr;};
        void deleteMetadata() { this->metadata_ = nullptr;};
        inline string getMetadata() const { DARABONBA_PTR_GET_DEFAULT(metadata_, "") };
        inline CollectionList& setMetadata(string metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };


        // metrics Field Functions 
        bool hasMetrics() const { return this->metrics_ != nullptr;};
        void deleteMetrics() { this->metrics_ = nullptr;};
        inline string getMetrics() const { DARABONBA_PTR_GET_DEFAULT(metrics_, "") };
        inline CollectionList& setMetrics(string metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };


        // parser Field Functions 
        bool hasParser() const { return this->parser_ != nullptr;};
        void deleteParser() { this->parser_ = nullptr;};
        inline string getParser() const { DARABONBA_PTR_GET_DEFAULT(parser_, "") };
        inline CollectionList& setParser(string parser) { DARABONBA_PTR_SET_VALUE(parser_, parser) };


      protected:
        // The name of the document collection.
        shared_ptr<string> collectionName_ {};
        // The number of vector dimensions.
        shared_ptr<int32_t> dimension_ {};
        // The name of the vector algorithm.
        shared_ptr<string> embeddingModel_ {};
        // The fields that are used for full-text search. Multiple fields are separated by commas (,).
        shared_ptr<string> fullTextRetrievalFields_ {};
        // The metadata.
        shared_ptr<string> metadata_ {};
        // The vector similarity algorithm.
        shared_ptr<string> metrics_ {};
        // The analyzer that is used for full-text search.
        shared_ptr<string> parser_ {};
      };

      virtual bool empty() const override { return this->collectionList_ == nullptr; };
      // collectionList Field Functions 
      bool hasCollectionList() const { return this->collectionList_ != nullptr;};
      void deleteCollectionList() { this->collectionList_ = nullptr;};
      inline const vector<Items::CollectionList> & getCollectionList() const { DARABONBA_PTR_GET_CONST(collectionList_, vector<Items::CollectionList>) };
      inline vector<Items::CollectionList> getCollectionList() { DARABONBA_PTR_GET(collectionList_, vector<Items::CollectionList>) };
      inline Items& setCollectionList(const vector<Items::CollectionList> & collectionList) { DARABONBA_PTR_SET_VALUE(collectionList_, collectionList) };
      inline Items& setCollectionList(vector<Items::CollectionList> && collectionList) { DARABONBA_PTR_SET_RVALUE(collectionList_, collectionList) };


    protected:
      shared_ptr<vector<Items::CollectionList>> collectionList_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->items_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListDocumentCollectionsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const ListDocumentCollectionsResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, ListDocumentCollectionsResponseBody::Items) };
    inline ListDocumentCollectionsResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, ListDocumentCollectionsResponseBody::Items) };
    inline ListDocumentCollectionsResponseBody& setItems(const ListDocumentCollectionsResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListDocumentCollectionsResponseBody& setItems(ListDocumentCollectionsResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDocumentCollectionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDocumentCollectionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDocumentCollectionsResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The total number of entries returned.
    shared_ptr<int32_t> count_ {};
    // The queried document collections.
    shared_ptr<ListDocumentCollectionsResponseBody::Items> items_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **success**
    // *   **fail**
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
