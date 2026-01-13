// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLLECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLLECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeCollectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCollectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Dimension, dimension_);
      DARABONBA_PTR_TO_JSON(FullTextRetrievalFields, fullTextRetrievalFields_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Parser, parser_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SparseVectorMetrics, sparseVectorMetrics_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupportSparse, supportSparse_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCollectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(FullTextRetrievalFields, fullTextRetrievalFields_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Parser, parser_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SparseVectorMetrics, sparseVectorMetrics_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupportSparse, supportSparse_);
    };
    DescribeCollectionResponseBody() = default ;
    DescribeCollectionResponseBody(const DescribeCollectionResponseBody &) = default ;
    DescribeCollectionResponseBody(DescribeCollectionResponseBody &&) = default ;
    DescribeCollectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCollectionResponseBody() = default ;
    DescribeCollectionResponseBody& operator=(const DescribeCollectionResponseBody &) = default ;
    DescribeCollectionResponseBody& operator=(DescribeCollectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->dimension_ == nullptr && this->fullTextRetrievalFields_ == nullptr && this->message_ == nullptr && this->metadata_ == nullptr && this->metrics_ == nullptr
        && this->namespace_ == nullptr && this->parser_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->sparseVectorMetrics_ == nullptr
        && this->status_ == nullptr && this->supportSparse_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeCollectionResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline int32_t getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, 0) };
    inline DescribeCollectionResponseBody& setDimension(int32_t dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


    // fullTextRetrievalFields Field Functions 
    bool hasFullTextRetrievalFields() const { return this->fullTextRetrievalFields_ != nullptr;};
    void deleteFullTextRetrievalFields() { this->fullTextRetrievalFields_ = nullptr;};
    inline string getFullTextRetrievalFields() const { DARABONBA_PTR_GET_DEFAULT(fullTextRetrievalFields_, "") };
    inline DescribeCollectionResponseBody& setFullTextRetrievalFields(string fullTextRetrievalFields) { DARABONBA_PTR_SET_VALUE(fullTextRetrievalFields_, fullTextRetrievalFields) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCollectionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline const map<string, string> & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, map<string, string>) };
    inline map<string, string> getMetadata() { DARABONBA_PTR_GET(metadata_, map<string, string>) };
    inline DescribeCollectionResponseBody& setMetadata(const map<string, string> & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
    inline DescribeCollectionResponseBody& setMetadata(map<string, string> && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline string getMetrics() const { DARABONBA_PTR_GET_DEFAULT(metrics_, "") };
    inline DescribeCollectionResponseBody& setMetrics(string metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeCollectionResponseBody& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // parser Field Functions 
    bool hasParser() const { return this->parser_ != nullptr;};
    void deleteParser() { this->parser_ = nullptr;};
    inline string getParser() const { DARABONBA_PTR_GET_DEFAULT(parser_, "") };
    inline DescribeCollectionResponseBody& setParser(string parser) { DARABONBA_PTR_SET_VALUE(parser_, parser) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCollectionResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCollectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sparseVectorMetrics Field Functions 
    bool hasSparseVectorMetrics() const { return this->sparseVectorMetrics_ != nullptr;};
    void deleteSparseVectorMetrics() { this->sparseVectorMetrics_ = nullptr;};
    inline string getSparseVectorMetrics() const { DARABONBA_PTR_GET_DEFAULT(sparseVectorMetrics_, "") };
    inline DescribeCollectionResponseBody& setSparseVectorMetrics(string sparseVectorMetrics) { DARABONBA_PTR_SET_VALUE(sparseVectorMetrics_, sparseVectorMetrics) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCollectionResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supportSparse Field Functions 
    bool hasSupportSparse() const { return this->supportSparse_ != nullptr;};
    void deleteSupportSparse() { this->supportSparse_ = nullptr;};
    inline bool getSupportSparse() const { DARABONBA_PTR_GET_DEFAULT(supportSparse_, false) };
    inline DescribeCollectionResponseBody& setSupportSparse(bool supportSparse) { DARABONBA_PTR_SET_VALUE(supportSparse_, supportSparse) };


  protected:
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The number of vector dimensions.
    shared_ptr<int32_t> dimension_ {};
    // The fields that are used for full-text search. Multiple fields are separated by commas (,).
    shared_ptr<string> fullTextRetrievalFields_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The metadata of vector data, which is a JSON string in the MAP format. The key specifies the field name, and the value specifies the data type.
    // 
    // **
    // 
    // **Warning** Reserved fields such as id, vector, and to_tsvector cannot be used.
    shared_ptr<map<string, string>> metadata_ {};
    // The distance metrics.
    shared_ptr<string> metrics_ {};
    // The name of the namespace.
    shared_ptr<string> namespace_ {};
    // The analyzer that is used for full-text search.
    shared_ptr<string> parser_ {};
    // The region ID of the instance.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The method that is used to create sparse vector indexes.
    shared_ptr<string> sparseVectorMetrics_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **success**
    // *   **fail**
    shared_ptr<string> status_ {};
    // Indicates whether sparse vectors are supported.
    shared_ptr<bool> supportSparse_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
