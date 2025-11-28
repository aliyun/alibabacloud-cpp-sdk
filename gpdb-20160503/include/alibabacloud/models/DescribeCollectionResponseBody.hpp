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
        && return this->dimension_ == nullptr && return this->fullTextRetrievalFields_ == nullptr && return this->message_ == nullptr && return this->metadata_ == nullptr && return this->metrics_ == nullptr
        && return this->namespace_ == nullptr && return this->parser_ == nullptr && return this->regionId_ == nullptr && return this->requestId_ == nullptr && return this->sparseVectorMetrics_ == nullptr
        && return this->status_ == nullptr && return this->supportSparse_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeCollectionResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline int32_t dimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, 0) };
    inline DescribeCollectionResponseBody& setDimension(int32_t dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


    // fullTextRetrievalFields Field Functions 
    bool hasFullTextRetrievalFields() const { return this->fullTextRetrievalFields_ != nullptr;};
    void deleteFullTextRetrievalFields() { this->fullTextRetrievalFields_ = nullptr;};
    inline string fullTextRetrievalFields() const { DARABONBA_PTR_GET_DEFAULT(fullTextRetrievalFields_, "") };
    inline DescribeCollectionResponseBody& setFullTextRetrievalFields(string fullTextRetrievalFields) { DARABONBA_PTR_SET_VALUE(fullTextRetrievalFields_, fullTextRetrievalFields) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCollectionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline const map<string, string> & metadata() const { DARABONBA_PTR_GET_CONST(metadata_, map<string, string>) };
    inline map<string, string> metadata() { DARABONBA_PTR_GET(metadata_, map<string, string>) };
    inline DescribeCollectionResponseBody& setMetadata(const map<string, string> & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
    inline DescribeCollectionResponseBody& setMetadata(map<string, string> && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline string metrics() const { DARABONBA_PTR_GET_DEFAULT(metrics_, "") };
    inline DescribeCollectionResponseBody& setMetrics(string metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeCollectionResponseBody& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // parser Field Functions 
    bool hasParser() const { return this->parser_ != nullptr;};
    void deleteParser() { this->parser_ = nullptr;};
    inline string parser() const { DARABONBA_PTR_GET_DEFAULT(parser_, "") };
    inline DescribeCollectionResponseBody& setParser(string parser) { DARABONBA_PTR_SET_VALUE(parser_, parser) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCollectionResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCollectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sparseVectorMetrics Field Functions 
    bool hasSparseVectorMetrics() const { return this->sparseVectorMetrics_ != nullptr;};
    void deleteSparseVectorMetrics() { this->sparseVectorMetrics_ = nullptr;};
    inline string sparseVectorMetrics() const { DARABONBA_PTR_GET_DEFAULT(sparseVectorMetrics_, "") };
    inline DescribeCollectionResponseBody& setSparseVectorMetrics(string sparseVectorMetrics) { DARABONBA_PTR_SET_VALUE(sparseVectorMetrics_, sparseVectorMetrics) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCollectionResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supportSparse Field Functions 
    bool hasSupportSparse() const { return this->supportSparse_ != nullptr;};
    void deleteSupportSparse() { this->supportSparse_ = nullptr;};
    inline bool supportSparse() const { DARABONBA_PTR_GET_DEFAULT(supportSparse_, false) };
    inline DescribeCollectionResponseBody& setSupportSparse(bool supportSparse) { DARABONBA_PTR_SET_VALUE(supportSparse_, supportSparse) };


  protected:
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The number of vector dimensions.
    std::shared_ptr<int32_t> dimension_ = nullptr;
    // The fields that are used for full-text search. Multiple fields are separated by commas (,).
    std::shared_ptr<string> fullTextRetrievalFields_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The metadata of vector data, which is a JSON string in the MAP format. The key specifies the field name, and the value specifies the data type.
    // 
    // **
    // 
    // **Warning** Reserved fields such as id, vector, and to_tsvector cannot be used.
    std::shared_ptr<map<string, string>> metadata_ = nullptr;
    // The distance metrics.
    std::shared_ptr<string> metrics_ = nullptr;
    // The name of the namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The analyzer that is used for full-text search.
    std::shared_ptr<string> parser_ = nullptr;
    // The region ID of the instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The method that is used to create sparse vector indexes.
    std::shared_ptr<string> sparseVectorMetrics_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **success**
    // *   **fail**
    std::shared_ptr<string> status_ = nullptr;
    // Indicates whether sparse vectors are supported.
    std::shared_ptr<bool> supportSparse_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
