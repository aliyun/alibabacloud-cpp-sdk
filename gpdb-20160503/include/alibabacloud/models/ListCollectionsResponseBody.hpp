// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOLLECTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOLLECTIONSRESPONSEBODY_HPP_
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
  class ListCollectionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCollectionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Collections, collections_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListCollectionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Collections, collections_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListCollectionsResponseBody() = default ;
    ListCollectionsResponseBody(const ListCollectionsResponseBody &) = default ;
    ListCollectionsResponseBody(ListCollectionsResponseBody &&) = default ;
    ListCollectionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCollectionsResponseBody() = default ;
    ListCollectionsResponseBody& operator=(const ListCollectionsResponseBody &) = default ;
    ListCollectionsResponseBody& operator=(ListCollectionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Collections : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Collections& obj) { 
        DARABONBA_PTR_TO_JSON(Collection, collection_);
      };
      friend void from_json(const Darabonba::Json& j, Collections& obj) { 
        DARABONBA_PTR_FROM_JSON(Collection, collection_);
      };
      Collections() = default ;
      Collections(const Collections &) = default ;
      Collections(Collections &&) = default ;
      Collections(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Collections() = default ;
      Collections& operator=(const Collections &) = default ;
      Collections& operator=(Collections &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->collection_ == nullptr; };
      // collection Field Functions 
      bool hasCollection() const { return this->collection_ != nullptr;};
      void deleteCollection() { this->collection_ = nullptr;};
      inline const vector<string> & getCollection() const { DARABONBA_PTR_GET_CONST(collection_, vector<string>) };
      inline vector<string> getCollection() { DARABONBA_PTR_GET(collection_, vector<string>) };
      inline Collections& setCollection(const vector<string> & collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };
      inline Collections& setCollection(vector<string> && collection) { DARABONBA_PTR_SET_RVALUE(collection_, collection) };


    protected:
      shared_ptr<vector<string>> collection_ {};
    };

    virtual bool empty() const override { return this->collections_ == nullptr
        && this->count_ == nullptr && this->DBInstanceId_ == nullptr && this->message_ == nullptr && this->namespace_ == nullptr && this->regionId_ == nullptr
        && this->requestId_ == nullptr && this->status_ == nullptr; };
    // collections Field Functions 
    bool hasCollections() const { return this->collections_ != nullptr;};
    void deleteCollections() { this->collections_ = nullptr;};
    inline const ListCollectionsResponseBody::Collections & getCollections() const { DARABONBA_PTR_GET_CONST(collections_, ListCollectionsResponseBody::Collections) };
    inline ListCollectionsResponseBody::Collections getCollections() { DARABONBA_PTR_GET(collections_, ListCollectionsResponseBody::Collections) };
    inline ListCollectionsResponseBody& setCollections(const ListCollectionsResponseBody::Collections & collections) { DARABONBA_PTR_SET_VALUE(collections_, collections) };
    inline ListCollectionsResponseBody& setCollections(ListCollectionsResponseBody::Collections && collections) { DARABONBA_PTR_SET_RVALUE(collections_, collections) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListCollectionsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ListCollectionsResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCollectionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListCollectionsResponseBody& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListCollectionsResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCollectionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCollectionsResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The queried vector collections.
    shared_ptr<ListCollectionsResponseBody::Collections> collections_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> count_ {};
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The name of the namespace.
    shared_ptr<string> namespace_ {};
    // The region ID of the instance.
    shared_ptr<string> regionId_ {};
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
