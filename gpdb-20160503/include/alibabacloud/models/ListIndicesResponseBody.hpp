// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINDICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINDICESRESPONSEBODY_HPP_
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
  class ListIndicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIndicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Indices, indices_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListIndicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Indices, indices_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListIndicesResponseBody() = default ;
    ListIndicesResponseBody(const ListIndicesResponseBody &) = default ;
    ListIndicesResponseBody(ListIndicesResponseBody &&) = default ;
    ListIndicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIndicesResponseBody() = default ;
    ListIndicesResponseBody& operator=(const ListIndicesResponseBody &) = default ;
    ListIndicesResponseBody& operator=(ListIndicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Indices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Indices& obj) { 
        DARABONBA_PTR_TO_JSON(Indices, indices_);
      };
      friend void from_json(const Darabonba::Json& j, Indices& obj) { 
        DARABONBA_PTR_FROM_JSON(Indices, indices_);
      };
      Indices() = default ;
      Indices(const Indices &) = default ;
      Indices(Indices &&) = default ;
      Indices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Indices() = default ;
      Indices& operator=(const Indices &) = default ;
      Indices& operator=(Indices &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class IndicesItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IndicesItem& obj) { 
          DARABONBA_PTR_TO_JSON(Collection, collection_);
          DARABONBA_PTR_TO_JSON(IndexDef, indexDef_);
          DARABONBA_PTR_TO_JSON(IndexName, indexName_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        };
        friend void from_json(const Darabonba::Json& j, IndicesItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Collection, collection_);
          DARABONBA_PTR_FROM_JSON(IndexDef, indexDef_);
          DARABONBA_PTR_FROM_JSON(IndexName, indexName_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        };
        IndicesItem() = default ;
        IndicesItem(const IndicesItem &) = default ;
        IndicesItem(IndicesItem &&) = default ;
        IndicesItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IndicesItem() = default ;
        IndicesItem& operator=(const IndicesItem &) = default ;
        IndicesItem& operator=(IndicesItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->collection_ == nullptr
        && this->indexDef_ == nullptr && this->indexName_ == nullptr && this->namespace_ == nullptr; };
        // collection Field Functions 
        bool hasCollection() const { return this->collection_ != nullptr;};
        void deleteCollection() { this->collection_ = nullptr;};
        inline string getCollection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
        inline IndicesItem& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


        // indexDef Field Functions 
        bool hasIndexDef() const { return this->indexDef_ != nullptr;};
        void deleteIndexDef() { this->indexDef_ = nullptr;};
        inline string getIndexDef() const { DARABONBA_PTR_GET_DEFAULT(indexDef_, "") };
        inline IndicesItem& setIndexDef(string indexDef) { DARABONBA_PTR_SET_VALUE(indexDef_, indexDef) };


        // indexName Field Functions 
        bool hasIndexName() const { return this->indexName_ != nullptr;};
        void deleteIndexName() { this->indexName_ = nullptr;};
        inline string getIndexName() const { DARABONBA_PTR_GET_DEFAULT(indexName_, "") };
        inline IndicesItem& setIndexName(string indexName) { DARABONBA_PTR_SET_VALUE(indexName_, indexName) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline IndicesItem& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      protected:
        // The name of the collection.
        shared_ptr<string> collection_ {};
        // The definition of the index.
        shared_ptr<string> indexDef_ {};
        // The name of the index.
        shared_ptr<string> indexName_ {};
        // The namespace to which the pod belongs.
        shared_ptr<string> namespace_ {};
      };

      virtual bool empty() const override { return this->indices_ == nullptr; };
      // indices Field Functions 
      bool hasIndices() const { return this->indices_ != nullptr;};
      void deleteIndices() { this->indices_ = nullptr;};
      inline const vector<Indices::IndicesItem> & getIndices() const { DARABONBA_PTR_GET_CONST(indices_, vector<Indices::IndicesItem>) };
      inline vector<Indices::IndicesItem> getIndices() { DARABONBA_PTR_GET(indices_, vector<Indices::IndicesItem>) };
      inline Indices& setIndices(const vector<Indices::IndicesItem> & indices) { DARABONBA_PTR_SET_VALUE(indices_, indices) };
      inline Indices& setIndices(vector<Indices::IndicesItem> && indices) { DARABONBA_PTR_SET_RVALUE(indices_, indices) };


    protected:
      shared_ptr<vector<Indices::IndicesItem>> indices_ {};
    };

    virtual bool empty() const override { return this->indices_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // indices Field Functions 
    bool hasIndices() const { return this->indices_ != nullptr;};
    void deleteIndices() { this->indices_ = nullptr;};
    inline const ListIndicesResponseBody::Indices & getIndices() const { DARABONBA_PTR_GET_CONST(indices_, ListIndicesResponseBody::Indices) };
    inline ListIndicesResponseBody::Indices getIndices() { DARABONBA_PTR_GET(indices_, ListIndicesResponseBody::Indices) };
    inline ListIndicesResponseBody& setIndices(const ListIndicesResponseBody::Indices & indices) { DARABONBA_PTR_SET_VALUE(indices_, indices) };
    inline ListIndicesResponseBody& setIndices(ListIndicesResponseBody::Indices && indices) { DARABONBA_PTR_SET_RVALUE(indices_, indices) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListIndicesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIndicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListIndicesResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The queried indexes.
    shared_ptr<ListIndicesResponseBody::Indices> indices_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // The status of the operation. Valid values:
    // 
    // *   **success**.
    // *   **fail**.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
