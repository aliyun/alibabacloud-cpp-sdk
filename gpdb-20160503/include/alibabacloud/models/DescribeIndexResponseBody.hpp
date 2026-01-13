// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINDEXRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINDEXRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeIndexResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIndexResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Collection, collection_);
      DARABONBA_PTR_TO_JSON(IndexDef, indexDef_);
      DARABONBA_PTR_TO_JSON(IndexName, indexName_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIndexResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Collection, collection_);
      DARABONBA_PTR_FROM_JSON(IndexDef, indexDef_);
      DARABONBA_PTR_FROM_JSON(IndexName, indexName_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeIndexResponseBody() = default ;
    DescribeIndexResponseBody(const DescribeIndexResponseBody &) = default ;
    DescribeIndexResponseBody(DescribeIndexResponseBody &&) = default ;
    DescribeIndexResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIndexResponseBody() = default ;
    DescribeIndexResponseBody& operator=(const DescribeIndexResponseBody &) = default ;
    DescribeIndexResponseBody& operator=(DescribeIndexResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collection_ == nullptr
        && this->indexDef_ == nullptr && this->indexName_ == nullptr && this->message_ == nullptr && this->namespace_ == nullptr && this->requestId_ == nullptr
        && this->status_ == nullptr; };
    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string getCollection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline DescribeIndexResponseBody& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // indexDef Field Functions 
    bool hasIndexDef() const { return this->indexDef_ != nullptr;};
    void deleteIndexDef() { this->indexDef_ = nullptr;};
    inline string getIndexDef() const { DARABONBA_PTR_GET_DEFAULT(indexDef_, "") };
    inline DescribeIndexResponseBody& setIndexDef(string indexDef) { DARABONBA_PTR_SET_VALUE(indexDef_, indexDef) };


    // indexName Field Functions 
    bool hasIndexName() const { return this->indexName_ != nullptr;};
    void deleteIndexName() { this->indexName_ = nullptr;};
    inline string getIndexName() const { DARABONBA_PTR_GET_DEFAULT(indexName_, "") };
    inline DescribeIndexResponseBody& setIndexName(string indexName) { DARABONBA_PTR_SET_VALUE(indexName_, indexName) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeIndexResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeIndexResponseBody& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIndexResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeIndexResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The name of the collection.
    shared_ptr<string> collection_ {};
    // The definition of the index.
    shared_ptr<string> indexDef_ {};
    // The name of the index.
    shared_ptr<string> indexName_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The namespace.
    shared_ptr<string> namespace_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **false**: The operation fails.
    // *   **true**: The operation is successful.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
