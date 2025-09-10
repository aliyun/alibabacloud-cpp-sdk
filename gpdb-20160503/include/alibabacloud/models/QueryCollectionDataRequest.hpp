// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOLLECTIONDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOLLECTIONDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/QueryCollectionDataRequestRelationalTableFilter.hpp>
#include <alibabacloud/models/QueryCollectionDataRequestSparseVector.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryCollectionDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCollectionDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Collection, collection_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(HybridSearch, hybridSearch_);
      DARABONBA_PTR_TO_JSON(HybridSearchArgs, hybridSearchArgs_);
      DARABONBA_PTR_TO_JSON(IncludeMetadataFields, includeMetadataFields_);
      DARABONBA_PTR_TO_JSON(IncludeValues, includeValues_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RelationalTableFilter, relationalTableFilter_);
      DARABONBA_PTR_TO_JSON(SparseVector, sparseVector_);
      DARABONBA_PTR_TO_JSON(TopK, topK_);
      DARABONBA_PTR_TO_JSON(Vector, vector_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCollectionDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Collection, collection_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(HybridSearch, hybridSearch_);
      DARABONBA_PTR_FROM_JSON(HybridSearchArgs, hybridSearchArgs_);
      DARABONBA_PTR_FROM_JSON(IncludeMetadataFields, includeMetadataFields_);
      DARABONBA_PTR_FROM_JSON(IncludeValues, includeValues_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RelationalTableFilter, relationalTableFilter_);
      DARABONBA_PTR_FROM_JSON(SparseVector, sparseVector_);
      DARABONBA_PTR_FROM_JSON(TopK, topK_);
      DARABONBA_PTR_FROM_JSON(Vector, vector_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    QueryCollectionDataRequest() = default ;
    QueryCollectionDataRequest(const QueryCollectionDataRequest &) = default ;
    QueryCollectionDataRequest(QueryCollectionDataRequest &&) = default ;
    QueryCollectionDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCollectionDataRequest() = default ;
    QueryCollectionDataRequest& operator=(const QueryCollectionDataRequest &) = default ;
    QueryCollectionDataRequest& operator=(QueryCollectionDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->collection_ != nullptr
        && this->content_ != nullptr && this->DBInstanceId_ != nullptr && this->filter_ != nullptr && this->hybridSearch_ != nullptr && this->hybridSearchArgs_ != nullptr
        && this->includeMetadataFields_ != nullptr && this->includeValues_ != nullptr && this->metrics_ != nullptr && this->namespace_ != nullptr && this->namespacePassword_ != nullptr
        && this->offset_ != nullptr && this->orderBy_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->relationalTableFilter_ != nullptr
        && this->sparseVector_ != nullptr && this->topK_ != nullptr && this->vector_ != nullptr && this->workspaceId_ != nullptr; };
    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string collection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline QueryCollectionDataRequest& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline QueryCollectionDataRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline QueryCollectionDataRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string filter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline QueryCollectionDataRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // hybridSearch Field Functions 
    bool hasHybridSearch() const { return this->hybridSearch_ != nullptr;};
    void deleteHybridSearch() { this->hybridSearch_ = nullptr;};
    inline string hybridSearch() const { DARABONBA_PTR_GET_DEFAULT(hybridSearch_, "") };
    inline QueryCollectionDataRequest& setHybridSearch(string hybridSearch) { DARABONBA_PTR_SET_VALUE(hybridSearch_, hybridSearch) };


    // hybridSearchArgs Field Functions 
    bool hasHybridSearchArgs() const { return this->hybridSearchArgs_ != nullptr;};
    void deleteHybridSearchArgs() { this->hybridSearchArgs_ = nullptr;};
    inline const map<string, Darabonba::Json> & hybridSearchArgs() const { DARABONBA_PTR_GET_CONST(hybridSearchArgs_, map<string, Darabonba::Json>) };
    inline map<string, Darabonba::Json> hybridSearchArgs() { DARABONBA_PTR_GET(hybridSearchArgs_, map<string, Darabonba::Json>) };
    inline QueryCollectionDataRequest& setHybridSearchArgs(const map<string, Darabonba::Json> & hybridSearchArgs) { DARABONBA_PTR_SET_VALUE(hybridSearchArgs_, hybridSearchArgs) };
    inline QueryCollectionDataRequest& setHybridSearchArgs(map<string, Darabonba::Json> && hybridSearchArgs) { DARABONBA_PTR_SET_RVALUE(hybridSearchArgs_, hybridSearchArgs) };


    // includeMetadataFields Field Functions 
    bool hasIncludeMetadataFields() const { return this->includeMetadataFields_ != nullptr;};
    void deleteIncludeMetadataFields() { this->includeMetadataFields_ = nullptr;};
    inline string includeMetadataFields() const { DARABONBA_PTR_GET_DEFAULT(includeMetadataFields_, "") };
    inline QueryCollectionDataRequest& setIncludeMetadataFields(string includeMetadataFields) { DARABONBA_PTR_SET_VALUE(includeMetadataFields_, includeMetadataFields) };


    // includeValues Field Functions 
    bool hasIncludeValues() const { return this->includeValues_ != nullptr;};
    void deleteIncludeValues() { this->includeValues_ = nullptr;};
    inline bool includeValues() const { DARABONBA_PTR_GET_DEFAULT(includeValues_, false) };
    inline QueryCollectionDataRequest& setIncludeValues(bool includeValues) { DARABONBA_PTR_SET_VALUE(includeValues_, includeValues) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline string metrics() const { DARABONBA_PTR_GET_DEFAULT(metrics_, "") };
    inline QueryCollectionDataRequest& setMetrics(string metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline QueryCollectionDataRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespacePassword Field Functions 
    bool hasNamespacePassword() const { return this->namespacePassword_ != nullptr;};
    void deleteNamespacePassword() { this->namespacePassword_ = nullptr;};
    inline string namespacePassword() const { DARABONBA_PTR_GET_DEFAULT(namespacePassword_, "") };
    inline QueryCollectionDataRequest& setNamespacePassword(string namespacePassword) { DARABONBA_PTR_SET_VALUE(namespacePassword_, namespacePassword) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline QueryCollectionDataRequest& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline QueryCollectionDataRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryCollectionDataRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryCollectionDataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // relationalTableFilter Field Functions 
    bool hasRelationalTableFilter() const { return this->relationalTableFilter_ != nullptr;};
    void deleteRelationalTableFilter() { this->relationalTableFilter_ = nullptr;};
    inline const QueryCollectionDataRequestRelationalTableFilter & relationalTableFilter() const { DARABONBA_PTR_GET_CONST(relationalTableFilter_, QueryCollectionDataRequestRelationalTableFilter) };
    inline QueryCollectionDataRequestRelationalTableFilter relationalTableFilter() { DARABONBA_PTR_GET(relationalTableFilter_, QueryCollectionDataRequestRelationalTableFilter) };
    inline QueryCollectionDataRequest& setRelationalTableFilter(const QueryCollectionDataRequestRelationalTableFilter & relationalTableFilter) { DARABONBA_PTR_SET_VALUE(relationalTableFilter_, relationalTableFilter) };
    inline QueryCollectionDataRequest& setRelationalTableFilter(QueryCollectionDataRequestRelationalTableFilter && relationalTableFilter) { DARABONBA_PTR_SET_RVALUE(relationalTableFilter_, relationalTableFilter) };


    // sparseVector Field Functions 
    bool hasSparseVector() const { return this->sparseVector_ != nullptr;};
    void deleteSparseVector() { this->sparseVector_ = nullptr;};
    inline const QueryCollectionDataRequestSparseVector & sparseVector() const { DARABONBA_PTR_GET_CONST(sparseVector_, QueryCollectionDataRequestSparseVector) };
    inline QueryCollectionDataRequestSparseVector sparseVector() { DARABONBA_PTR_GET(sparseVector_, QueryCollectionDataRequestSparseVector) };
    inline QueryCollectionDataRequest& setSparseVector(const QueryCollectionDataRequestSparseVector & sparseVector) { DARABONBA_PTR_SET_VALUE(sparseVector_, sparseVector) };
    inline QueryCollectionDataRequest& setSparseVector(QueryCollectionDataRequestSparseVector && sparseVector) { DARABONBA_PTR_SET_RVALUE(sparseVector_, sparseVector) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int64_t topK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0L) };
    inline QueryCollectionDataRequest& setTopK(int64_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    // vector Field Functions 
    bool hasVector() const { return this->vector_ != nullptr;};
    void deleteVector() { this->vector_ = nullptr;};
    inline const vector<double> & _vector() const { DARABONBA_PTR_GET_CONST(vector_, vector<double>) };
    inline vector<double> _vector() { DARABONBA_PTR_GET(vector_, vector<double>) };
    inline QueryCollectionDataRequest& setVector(const vector<double> & _vector) { DARABONBA_PTR_SET_VALUE(vector_, _vector) };
    inline QueryCollectionDataRequest& setVector(vector<double> && _vector) { DARABONBA_PTR_SET_RVALUE(vector_, _vector) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QueryCollectionDataRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // Collection name.
    // 
    // > You can use the [ListCollections](https://help.aliyun.com/document_detail/2401503.html) API to view the list.
    // 
    // This parameter is required.
    std::shared_ptr<string> collection_ = nullptr;
    // Content for full-text search. When this value is empty, only vector search is used; when it is not empty, both vector and full-text search are used.
    // 
    // > The Vector parameter cannot be empty at the same time.
    std::shared_ptr<string> content_ = nullptr;
    // Instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) API to view details of all AnalyticDB PostgreSQL instances in the target region, including the instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<string> filter_ = nullptr;
    // Dual-path recall algorithm, default is empty (i.e., directly compare and sort the scores of vectors and full-text).
    // 
    // Available values:
    // 
    // - RRF: Reciprocal rank fusion, with a parameter k controlling the fusion effect. See HybridSearchArgs configuration for details;
    // - Weight: Weighted sorting, using a parameter alpha to control the score ratio of vectors and full-text, then sorting. See HybridSearchArgs configuration for details;
    // - Cascaded: Perform full-text search first, then vector search based on the full-text results;
    std::shared_ptr<string> hybridSearch_ = nullptr;
    // The parameters of the two-way retrieval algorithm. The following parameters are supported:
    // 
    // *   When HybridSearch is set to RRF, the scores are calculated by using the `1/(k+rank_i)` formula. The constant k is a positive integer that is greater than 1.
    // 
    // <!---->
    // 
    //     { 
    //        "RRF": {
    //         "k": 60
    //        }
    //     }
    // 
    // *   When HybridSearch is set to Weight, the scores are calculated by using the `alpha * vector_score + (1-alpha) * text_score` formula. The alpha parameter specifies the proportion of the vector search score and the full-text search score and ranges from 0 to 1. A value of 0 specifies full-text search and a value of 1 specifies vector search.
    // 
    // <!---->
    // 
    //     { 
    //        "Weight": {
    //         "alpha": 0.5
    //        }
    //     }
    std::shared_ptr<map<string, Darabonba::Json>> hybridSearchArgs_ = nullptr;
    // Defaults to empty, indicating the metadata fields to return. Multiple fields should be separated by commas.
    std::shared_ptr<string> includeMetadataFields_ = nullptr;
    // Whether to return vector data. Value descriptions:
    // - **true**: Return vector data.
    // - **false**: Do not return vector data, used for full-text search scenarios.
    std::shared_ptr<bool> includeValues_ = nullptr;
    // Similarity algorithm used during retrieval. Value descriptions:
    // - **l2**: Euclidean distance.
    // - **ip**: Inner product (dot product) distance.
    // - **cosine**: Cosine similarity.
    // 
    // > If this value is empty, the algorithm specified during index creation is used.
    std::shared_ptr<string> metrics_ = nullptr;
    // Namespace.
    // 
    // > You can use the [ListNamespaces](https://help.aliyun.com/document_detail/2401502.html) API to view the list.
    std::shared_ptr<string> namespace_ = nullptr;
    // Password for the namespace.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespacePassword_ = nullptr;
    // Defaults to empty, indicating the starting point for pagination queries. Does not support hybrid search scenarios.
    // 
    // The value must be >= 0. When this value is not empty, it will return `Total`, which indicates the total number of hits. This parameter works with `TopK`. For example, to paginate 20 and retrieve chunks with `chunk_id` from 0 to 44, you need to make three requests:
    // - `Offset=0, TopK=20` returns `chunk_id` 0~19
    // - `Offset=20, TopK=20` returns `chunk_id` 20~39
    // - `Offset=30, TopK=20` returns `chunk_id` 40~44
    std::shared_ptr<int32_t> offset_ = nullptr;
    // Defaults to empty, indicating the field for sorting. Does not support hybrid search scenarios.
    // 
    // The field must belong to metadata or be a default field in the table, such as `id`. The supported formats are:
    // - A single field, e.g., `chunk_id`;
    // - Multiple fields, separated by commas, e.g., `block_id, chunk_id`;
    // - Supports reverse order, e.g., `block_id DESC, chunk_id DESC`;
    std::shared_ptr<string> orderBy_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // Region ID where the instance is located.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Uses another relational table to filter vector data (similar to a Join function).
    // 
    // > Data from the relational table can be returned by setting the `IncludeMetadataFields` parameter. For example, `rds_table_name.id` indicates returning the `id` field from the relational table.
    std::shared_ptr<QueryCollectionDataRequestRelationalTableFilter> relationalTableFilter_ = nullptr;
    std::shared_ptr<QueryCollectionDataRequestSparseVector> sparseVector_ = nullptr;
    // Set the number of top results to return.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> topK_ = nullptr;
    // Vector data, with the same dimension as specified in the [CreateCollection](https://help.aliyun.com/document_detail/2401497.html) API.
    // > When the vector is empty, only full-text search results are returned.
    std::shared_ptr<vector<double>> vector_ = nullptr;
    // The ID of the Workspace composed of multiple database instances. This parameter and `DBInstanceId` cannot both be empty. If both are specified, this parameter takes precedence.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
