// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOLLECTIONDATASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOLLECTIONDATASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryCollectionDataShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCollectionDataShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Collection, collection_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(HybridSearch, hybridSearch_);
      DARABONBA_PTR_TO_JSON(HybridSearchArgs, hybridSearchArgsShrink_);
      DARABONBA_PTR_TO_JSON(IncludeMetadataFields, includeMetadataFields_);
      DARABONBA_PTR_TO_JSON(IncludeSparseValues, includeSparseValues_);
      DARABONBA_PTR_TO_JSON(IncludeValues, includeValues_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RelationalTableFilter, relationalTableFilterShrink_);
      DARABONBA_PTR_TO_JSON(SparseVector, sparseVectorShrink_);
      DARABONBA_PTR_TO_JSON(TopK, topK_);
      DARABONBA_PTR_TO_JSON(Vector, vectorShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCollectionDataShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Collection, collection_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(HybridSearch, hybridSearch_);
      DARABONBA_PTR_FROM_JSON(HybridSearchArgs, hybridSearchArgsShrink_);
      DARABONBA_PTR_FROM_JSON(IncludeMetadataFields, includeMetadataFields_);
      DARABONBA_PTR_FROM_JSON(IncludeSparseValues, includeSparseValues_);
      DARABONBA_PTR_FROM_JSON(IncludeValues, includeValues_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RelationalTableFilter, relationalTableFilterShrink_);
      DARABONBA_PTR_FROM_JSON(SparseVector, sparseVectorShrink_);
      DARABONBA_PTR_FROM_JSON(TopK, topK_);
      DARABONBA_PTR_FROM_JSON(Vector, vectorShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    QueryCollectionDataShrinkRequest() = default ;
    QueryCollectionDataShrinkRequest(const QueryCollectionDataShrinkRequest &) = default ;
    QueryCollectionDataShrinkRequest(QueryCollectionDataShrinkRequest &&) = default ;
    QueryCollectionDataShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCollectionDataShrinkRequest() = default ;
    QueryCollectionDataShrinkRequest& operator=(const QueryCollectionDataShrinkRequest &) = default ;
    QueryCollectionDataShrinkRequest& operator=(QueryCollectionDataShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collection_ == nullptr
        && this->content_ == nullptr && this->DBInstanceId_ == nullptr && this->filter_ == nullptr && this->hybridSearch_ == nullptr && this->hybridSearchArgsShrink_ == nullptr
        && this->includeMetadataFields_ == nullptr && this->includeSparseValues_ == nullptr && this->includeValues_ == nullptr && this->metrics_ == nullptr && this->namespace_ == nullptr
        && this->namespacePassword_ == nullptr && this->offset_ == nullptr && this->orderBy_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->relationalTableFilterShrink_ == nullptr && this->sparseVectorShrink_ == nullptr && this->topK_ == nullptr && this->vectorShrink_ == nullptr && this->workspaceId_ == nullptr; };
    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string getCollection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline QueryCollectionDataShrinkRequest& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline QueryCollectionDataShrinkRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline QueryCollectionDataShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline QueryCollectionDataShrinkRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // hybridSearch Field Functions 
    bool hasHybridSearch() const { return this->hybridSearch_ != nullptr;};
    void deleteHybridSearch() { this->hybridSearch_ = nullptr;};
    inline string getHybridSearch() const { DARABONBA_PTR_GET_DEFAULT(hybridSearch_, "") };
    inline QueryCollectionDataShrinkRequest& setHybridSearch(string hybridSearch) { DARABONBA_PTR_SET_VALUE(hybridSearch_, hybridSearch) };


    // hybridSearchArgsShrink Field Functions 
    bool hasHybridSearchArgsShrink() const { return this->hybridSearchArgsShrink_ != nullptr;};
    void deleteHybridSearchArgsShrink() { this->hybridSearchArgsShrink_ = nullptr;};
    inline string getHybridSearchArgsShrink() const { DARABONBA_PTR_GET_DEFAULT(hybridSearchArgsShrink_, "") };
    inline QueryCollectionDataShrinkRequest& setHybridSearchArgsShrink(string hybridSearchArgsShrink) { DARABONBA_PTR_SET_VALUE(hybridSearchArgsShrink_, hybridSearchArgsShrink) };


    // includeMetadataFields Field Functions 
    bool hasIncludeMetadataFields() const { return this->includeMetadataFields_ != nullptr;};
    void deleteIncludeMetadataFields() { this->includeMetadataFields_ = nullptr;};
    inline string getIncludeMetadataFields() const { DARABONBA_PTR_GET_DEFAULT(includeMetadataFields_, "") };
    inline QueryCollectionDataShrinkRequest& setIncludeMetadataFields(string includeMetadataFields) { DARABONBA_PTR_SET_VALUE(includeMetadataFields_, includeMetadataFields) };


    // includeSparseValues Field Functions 
    bool hasIncludeSparseValues() const { return this->includeSparseValues_ != nullptr;};
    void deleteIncludeSparseValues() { this->includeSparseValues_ = nullptr;};
    inline bool getIncludeSparseValues() const { DARABONBA_PTR_GET_DEFAULT(includeSparseValues_, false) };
    inline QueryCollectionDataShrinkRequest& setIncludeSparseValues(bool includeSparseValues) { DARABONBA_PTR_SET_VALUE(includeSparseValues_, includeSparseValues) };


    // includeValues Field Functions 
    bool hasIncludeValues() const { return this->includeValues_ != nullptr;};
    void deleteIncludeValues() { this->includeValues_ = nullptr;};
    inline bool getIncludeValues() const { DARABONBA_PTR_GET_DEFAULT(includeValues_, false) };
    inline QueryCollectionDataShrinkRequest& setIncludeValues(bool includeValues) { DARABONBA_PTR_SET_VALUE(includeValues_, includeValues) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline string getMetrics() const { DARABONBA_PTR_GET_DEFAULT(metrics_, "") };
    inline QueryCollectionDataShrinkRequest& setMetrics(string metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline QueryCollectionDataShrinkRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespacePassword Field Functions 
    bool hasNamespacePassword() const { return this->namespacePassword_ != nullptr;};
    void deleteNamespacePassword() { this->namespacePassword_ = nullptr;};
    inline string getNamespacePassword() const { DARABONBA_PTR_GET_DEFAULT(namespacePassword_, "") };
    inline QueryCollectionDataShrinkRequest& setNamespacePassword(string namespacePassword) { DARABONBA_PTR_SET_VALUE(namespacePassword_, namespacePassword) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline QueryCollectionDataShrinkRequest& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline QueryCollectionDataShrinkRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryCollectionDataShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryCollectionDataShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // relationalTableFilterShrink Field Functions 
    bool hasRelationalTableFilterShrink() const { return this->relationalTableFilterShrink_ != nullptr;};
    void deleteRelationalTableFilterShrink() { this->relationalTableFilterShrink_ = nullptr;};
    inline string getRelationalTableFilterShrink() const { DARABONBA_PTR_GET_DEFAULT(relationalTableFilterShrink_, "") };
    inline QueryCollectionDataShrinkRequest& setRelationalTableFilterShrink(string relationalTableFilterShrink) { DARABONBA_PTR_SET_VALUE(relationalTableFilterShrink_, relationalTableFilterShrink) };


    // sparseVectorShrink Field Functions 
    bool hasSparseVectorShrink() const { return this->sparseVectorShrink_ != nullptr;};
    void deleteSparseVectorShrink() { this->sparseVectorShrink_ = nullptr;};
    inline string getSparseVectorShrink() const { DARABONBA_PTR_GET_DEFAULT(sparseVectorShrink_, "") };
    inline QueryCollectionDataShrinkRequest& setSparseVectorShrink(string sparseVectorShrink) { DARABONBA_PTR_SET_VALUE(sparseVectorShrink_, sparseVectorShrink) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int64_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0L) };
    inline QueryCollectionDataShrinkRequest& setTopK(int64_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    // vectorShrink Field Functions 
    bool hasVectorShrink() const { return this->vectorShrink_ != nullptr;};
    void deleteVectorShrink() { this->vectorShrink_ = nullptr;};
    inline string getVectorShrink() const { DARABONBA_PTR_GET_DEFAULT(vectorShrink_, "") };
    inline QueryCollectionDataShrinkRequest& setVectorShrink(string vectorShrink) { DARABONBA_PTR_SET_VALUE(vectorShrink_, vectorShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QueryCollectionDataShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The collection name.
    // 
    // > You can call the [ListCollections](https://help.aliyun.com/document_detail/2401503.html) operation to view the list.
    // 
    // This parameter is required.
    shared_ptr<string> collection_ {};
    // The content used for full-text retrieval. If this parameter is left empty, only vector retrieval is used. If this parameter is specified, both vector and full-text retrieval are used.
    // 
    // > This parameter and the Vector parameter cannot be left empty at the same time.
    shared_ptr<string> content_ {};
    // The instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the details of all AnalyticDB for PostgreSQL instances in a specific region, including the instance IDs.
    shared_ptr<string> DBInstanceId_ {};
    // The filter condition for the data to query, in the SQL WHERE clause format. It is an expression that returns a Boolean value (true or false). The condition can be a simple comparison operator, such as equal to (=), not equal to (<> or !=), greater than (>), less than (<), greater than or equal to (>=), or less than or equal to (<=). It can also be a more complex expression combined with logical operators (AND, OR, NOT), or a condition that uses keywords such as IN, BETWEEN, and LIKE.
    // 
    // > 
    // > - For detailed syntax, refer to https://www.postgresqltutorial.com/postgresql-tutorial/postgresql-where/
    shared_ptr<string> filter_ {};
    // The dual-channel recall algorithm. Default value: empty (which means the vector and full-text scores are directly compared and sorting is applied). Valid values:
    // 
    // - RRF: reciprocal rank fusion. A parameter k is used to control the fusion effect. For more information, see the HybridSearchArgs configuration.
    // - Weight: weighted sorting. A parameter alpha is used to control the weight of the vector and full-text scores before sorting. For more information, see the HybridSearchArgs configuration.
    // - Cascaded: full-text retrieval is performed first, and then vector retrieval is performed based on the results.
    shared_ptr<string> hybridSearch_ {};
    // The algorithm parameters for hybrid search. RRF and Weight are supported:
    // 
    // - RRF: specifies the constant k in the score calculation formula `1/(k+rank_i)`. The value must be a positive integer greater than 1. Format:
    // ```
    // { 
    //    "RRF": {
    //     "k": 60
    //    }
    // }
    // ```
    // 
    // - Weight: The calculation formula is `alpha * vector_score + (1-alpha) * text_score`. The parameter alpha represents the weight of the vector and full-text search scores. The value ranges from 0 to 1, where 0 indicates full-text search only and 1 indicates vector search only. Format:
    // ```
    // { 
    //    "Weight": {
    //     "alpha": 0.5
    //    }
    // }
    // ```
    shared_ptr<string> hybridSearchArgsShrink_ {};
    // The metadata fields to return. Default value: empty. Separate multiple fields with commas.
    shared_ptr<string> includeMetadataFields_ {};
    // Specifies whether to return sparse vector data. Valid values:
    // - **true**: returns sparse vector data.
    // - **false**: does not return sparse vector data.
    shared_ptr<bool> includeSparseValues_ {};
    // Specifies whether to return dense vector data. Valid values:
    // - **true**: returns dense vector data.
    // - **false**: does not return dense vector data.
    shared_ptr<bool> includeValues_ {};
    // The similarity algorithm used during search. Valid values:
    // - **l2**: Euclidean distance.
    // - **ip**: Dot product (inner product) distance.
    // - **cosine**: Cosine similarity.
    // 
    // > If this parameter is left empty, the algorithm specified when the index is built is used.
    shared_ptr<string> metrics_ {};
    // The namespace.
    // 
    // > You can call the [ListNamespaces](https://help.aliyun.com/document_detail/2401502.html) operation to view the list.
    shared_ptr<string> namespace_ {};
    // The password for the namespace.
    // 
    // This parameter is required.
    shared_ptr<string> namespacePassword_ {};
    // The retrieval starting point during paged queries. Default value: empty. This parameter is not supported in dual-channel recall scenarios.
    // 
    // The value must be greater than or equal to 0. If this parameter is specified, the Total parameter is returned to indicate the total number of hits. This parameter is used together with TopK. For example, to retrieve chunks with chunk_id ranging from 0 to 44 with a paging size of 20, you must make three requests:
    // - Offset=0, TopK=20 returns chunks with chunk_id ranging from 0 to 19.
    // - Offset=20, TopK=20 returns chunks with chunk_id ranging from 20 to 39.
    // - Offset=30, TopK=20 returns chunks with chunk_id ranging from 40 to 44.
    shared_ptr<int32_t> offset_ {};
    // The field based on which the results are sorted. Default value: empty. This parameter is not supported in hybrid search scenarios.
    // 
    // The field must belong to the metadata or be a default field in the table, such as id. Supported formats:
    // - A single field, such as chunk_id.
    // - Multiple fields separated by commas, such as block_id, chunk_id.
    // - Descending order, such as block_id DESC, chunk_id DESC.
    shared_ptr<string> orderBy_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Uses another relational table to filter vector data, similar to the JOIN operation.
    // 
    // > You can set the IncludeMetadataFields parameter to return data from the relational table. For example, rds_table_name.id indicates that the id field of the relational table is returned.
    shared_ptr<string> relationalTableFilterShrink_ {};
    // The list of sparse vector data.
    shared_ptr<string> sparseVectorShrink_ {};
    // The number of top results to return.
    // 
    // This parameter is required.
    shared_ptr<int64_t> topK_ {};
    // The vector data. The length must be consistent with the dimension specified in the [CreateCollection](https://help.aliyun.com/document_detail/2401497.html) operation.
    // > 
    // > - If SparseVector is left empty, the system uses it to retrieve only dense vector results.
    // > - If both Vector and SparseVector are left empty, the system uses it to retrieve only full-text results.
    shared_ptr<string> vectorShrink_ {};
    // The ID of the workspace that consists of multiple database instances. This parameter and the DBInstanceId parameter cannot be left empty at the same time. If both parameters are specified, this parameter takes precedence.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
