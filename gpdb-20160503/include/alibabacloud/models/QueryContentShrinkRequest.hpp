// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONTENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONTENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryContentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryContentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Collection, collection_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(GraphEnhance, graphEnhance_);
      DARABONBA_PTR_TO_JSON(GraphSearchArgs, graphSearchArgsShrink_);
      DARABONBA_PTR_TO_JSON(HybridSearch, hybridSearch_);
      DARABONBA_PTR_TO_JSON(HybridSearchArgs, hybridSearchArgsShrink_);
      DARABONBA_PTR_TO_JSON(IncludeFileUrl, includeFileUrl_);
      DARABONBA_PTR_TO_JSON(IncludeMetadataFields, includeMetadataFields_);
      DARABONBA_PTR_TO_JSON(IncludeVector, includeVector_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RecallWindow, recallWindowShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RerankFactor, rerankFactor_);
      DARABONBA_PTR_TO_JSON(RerankModel, rerankModelShrink_);
      DARABONBA_PTR_TO_JSON(TopK, topK_);
      DARABONBA_PTR_TO_JSON(UrlExpiration, urlExpiration_);
      DARABONBA_PTR_TO_JSON(UseFullTextRetrieval, useFullTextRetrieval_);
    };
    friend void from_json(const Darabonba::Json& j, QueryContentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Collection, collection_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(GraphEnhance, graphEnhance_);
      DARABONBA_PTR_FROM_JSON(GraphSearchArgs, graphSearchArgsShrink_);
      DARABONBA_PTR_FROM_JSON(HybridSearch, hybridSearch_);
      DARABONBA_PTR_FROM_JSON(HybridSearchArgs, hybridSearchArgsShrink_);
      DARABONBA_PTR_FROM_JSON(IncludeFileUrl, includeFileUrl_);
      DARABONBA_PTR_FROM_JSON(IncludeMetadataFields, includeMetadataFields_);
      DARABONBA_PTR_FROM_JSON(IncludeVector, includeVector_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RecallWindow, recallWindowShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RerankFactor, rerankFactor_);
      DARABONBA_PTR_FROM_JSON(RerankModel, rerankModelShrink_);
      DARABONBA_PTR_FROM_JSON(TopK, topK_);
      DARABONBA_PTR_FROM_JSON(UrlExpiration, urlExpiration_);
      DARABONBA_PTR_FROM_JSON(UseFullTextRetrieval, useFullTextRetrieval_);
    };
    QueryContentShrinkRequest() = default ;
    QueryContentShrinkRequest(const QueryContentShrinkRequest &) = default ;
    QueryContentShrinkRequest(QueryContentShrinkRequest &&) = default ;
    QueryContentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryContentShrinkRequest() = default ;
    QueryContentShrinkRequest& operator=(const QueryContentShrinkRequest &) = default ;
    QueryContentShrinkRequest& operator=(QueryContentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collection_ == nullptr
        && this->content_ == nullptr && this->DBInstanceId_ == nullptr && this->fileName_ == nullptr && this->fileUrl_ == nullptr && this->filter_ == nullptr
        && this->graphEnhance_ == nullptr && this->graphSearchArgsShrink_ == nullptr && this->hybridSearch_ == nullptr && this->hybridSearchArgsShrink_ == nullptr && this->includeFileUrl_ == nullptr
        && this->includeMetadataFields_ == nullptr && this->includeVector_ == nullptr && this->metrics_ == nullptr && this->namespace_ == nullptr && this->namespacePassword_ == nullptr
        && this->offset_ == nullptr && this->orderBy_ == nullptr && this->ownerId_ == nullptr && this->recallWindowShrink_ == nullptr && this->regionId_ == nullptr
        && this->rerankFactor_ == nullptr && this->rerankModelShrink_ == nullptr && this->topK_ == nullptr && this->urlExpiration_ == nullptr && this->useFullTextRetrieval_ == nullptr; };
    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string getCollection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline QueryContentShrinkRequest& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline QueryContentShrinkRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline QueryContentShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline QueryContentShrinkRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline QueryContentShrinkRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline QueryContentShrinkRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // graphEnhance Field Functions 
    bool hasGraphEnhance() const { return this->graphEnhance_ != nullptr;};
    void deleteGraphEnhance() { this->graphEnhance_ = nullptr;};
    inline bool getGraphEnhance() const { DARABONBA_PTR_GET_DEFAULT(graphEnhance_, false) };
    inline QueryContentShrinkRequest& setGraphEnhance(bool graphEnhance) { DARABONBA_PTR_SET_VALUE(graphEnhance_, graphEnhance) };


    // graphSearchArgsShrink Field Functions 
    bool hasGraphSearchArgsShrink() const { return this->graphSearchArgsShrink_ != nullptr;};
    void deleteGraphSearchArgsShrink() { this->graphSearchArgsShrink_ = nullptr;};
    inline string getGraphSearchArgsShrink() const { DARABONBA_PTR_GET_DEFAULT(graphSearchArgsShrink_, "") };
    inline QueryContentShrinkRequest& setGraphSearchArgsShrink(string graphSearchArgsShrink) { DARABONBA_PTR_SET_VALUE(graphSearchArgsShrink_, graphSearchArgsShrink) };


    // hybridSearch Field Functions 
    bool hasHybridSearch() const { return this->hybridSearch_ != nullptr;};
    void deleteHybridSearch() { this->hybridSearch_ = nullptr;};
    inline string getHybridSearch() const { DARABONBA_PTR_GET_DEFAULT(hybridSearch_, "") };
    inline QueryContentShrinkRequest& setHybridSearch(string hybridSearch) { DARABONBA_PTR_SET_VALUE(hybridSearch_, hybridSearch) };


    // hybridSearchArgsShrink Field Functions 
    bool hasHybridSearchArgsShrink() const { return this->hybridSearchArgsShrink_ != nullptr;};
    void deleteHybridSearchArgsShrink() { this->hybridSearchArgsShrink_ = nullptr;};
    inline string getHybridSearchArgsShrink() const { DARABONBA_PTR_GET_DEFAULT(hybridSearchArgsShrink_, "") };
    inline QueryContentShrinkRequest& setHybridSearchArgsShrink(string hybridSearchArgsShrink) { DARABONBA_PTR_SET_VALUE(hybridSearchArgsShrink_, hybridSearchArgsShrink) };


    // includeFileUrl Field Functions 
    bool hasIncludeFileUrl() const { return this->includeFileUrl_ != nullptr;};
    void deleteIncludeFileUrl() { this->includeFileUrl_ = nullptr;};
    inline bool getIncludeFileUrl() const { DARABONBA_PTR_GET_DEFAULT(includeFileUrl_, false) };
    inline QueryContentShrinkRequest& setIncludeFileUrl(bool includeFileUrl) { DARABONBA_PTR_SET_VALUE(includeFileUrl_, includeFileUrl) };


    // includeMetadataFields Field Functions 
    bool hasIncludeMetadataFields() const { return this->includeMetadataFields_ != nullptr;};
    void deleteIncludeMetadataFields() { this->includeMetadataFields_ = nullptr;};
    inline string getIncludeMetadataFields() const { DARABONBA_PTR_GET_DEFAULT(includeMetadataFields_, "") };
    inline QueryContentShrinkRequest& setIncludeMetadataFields(string includeMetadataFields) { DARABONBA_PTR_SET_VALUE(includeMetadataFields_, includeMetadataFields) };


    // includeVector Field Functions 
    bool hasIncludeVector() const { return this->includeVector_ != nullptr;};
    void deleteIncludeVector() { this->includeVector_ = nullptr;};
    inline bool getIncludeVector() const { DARABONBA_PTR_GET_DEFAULT(includeVector_, false) };
    inline QueryContentShrinkRequest& setIncludeVector(bool includeVector) { DARABONBA_PTR_SET_VALUE(includeVector_, includeVector) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline string getMetrics() const { DARABONBA_PTR_GET_DEFAULT(metrics_, "") };
    inline QueryContentShrinkRequest& setMetrics(string metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline QueryContentShrinkRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespacePassword Field Functions 
    bool hasNamespacePassword() const { return this->namespacePassword_ != nullptr;};
    void deleteNamespacePassword() { this->namespacePassword_ = nullptr;};
    inline string getNamespacePassword() const { DARABONBA_PTR_GET_DEFAULT(namespacePassword_, "") };
    inline QueryContentShrinkRequest& setNamespacePassword(string namespacePassword) { DARABONBA_PTR_SET_VALUE(namespacePassword_, namespacePassword) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline QueryContentShrinkRequest& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline QueryContentShrinkRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryContentShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // recallWindowShrink Field Functions 
    bool hasRecallWindowShrink() const { return this->recallWindowShrink_ != nullptr;};
    void deleteRecallWindowShrink() { this->recallWindowShrink_ = nullptr;};
    inline string getRecallWindowShrink() const { DARABONBA_PTR_GET_DEFAULT(recallWindowShrink_, "") };
    inline QueryContentShrinkRequest& setRecallWindowShrink(string recallWindowShrink) { DARABONBA_PTR_SET_VALUE(recallWindowShrink_, recallWindowShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryContentShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rerankFactor Field Functions 
    bool hasRerankFactor() const { return this->rerankFactor_ != nullptr;};
    void deleteRerankFactor() { this->rerankFactor_ = nullptr;};
    inline double getRerankFactor() const { DARABONBA_PTR_GET_DEFAULT(rerankFactor_, 0.0) };
    inline QueryContentShrinkRequest& setRerankFactor(double rerankFactor) { DARABONBA_PTR_SET_VALUE(rerankFactor_, rerankFactor) };


    // rerankModelShrink Field Functions 
    bool hasRerankModelShrink() const { return this->rerankModelShrink_ != nullptr;};
    void deleteRerankModelShrink() { this->rerankModelShrink_ = nullptr;};
    inline string getRerankModelShrink() const { DARABONBA_PTR_GET_DEFAULT(rerankModelShrink_, "") };
    inline QueryContentShrinkRequest& setRerankModelShrink(string rerankModelShrink) { DARABONBA_PTR_SET_VALUE(rerankModelShrink_, rerankModelShrink) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline QueryContentShrinkRequest& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    // urlExpiration Field Functions 
    bool hasUrlExpiration() const { return this->urlExpiration_ != nullptr;};
    void deleteUrlExpiration() { this->urlExpiration_ = nullptr;};
    inline string getUrlExpiration() const { DARABONBA_PTR_GET_DEFAULT(urlExpiration_, "") };
    inline QueryContentShrinkRequest& setUrlExpiration(string urlExpiration) { DARABONBA_PTR_SET_VALUE(urlExpiration_, urlExpiration) };


    // useFullTextRetrieval Field Functions 
    bool hasUseFullTextRetrieval() const { return this->useFullTextRetrieval_ != nullptr;};
    void deleteUseFullTextRetrieval() { this->useFullTextRetrieval_ = nullptr;};
    inline bool getUseFullTextRetrieval() const { DARABONBA_PTR_GET_DEFAULT(useFullTextRetrieval_, false) };
    inline QueryContentShrinkRequest& setUseFullTextRetrieval(bool useFullTextRetrieval) { DARABONBA_PTR_SET_VALUE(useFullTextRetrieval_, useFullTextRetrieval) };


  protected:
    // The name of the document collection.
    // 
    // > A document collection is created by calling the [CreateDocumentCollection](https://help.aliyun.com/document_detail/2618448.html) operation. Call the [ListDocumentCollections](https://help.aliyun.com/document_detail/2618452.html) operation to list your document collections.
    // 
    // This parameter is required.
    shared_ptr<string> collection_ {};
    // The text to use for retrieval.
    shared_ptr<string> content_ {};
    // The instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to find the IDs of all AnalyticDB for PostgreSQL instances in a region.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The filename of the source image for a search-by-image query.
    // 
    // > The image file must have a file extension. The supported extensions are bmp, jpg, jpeg, png, and tiff.
    shared_ptr<string> fileName_ {};
    // The publicly accessible URL of the image file for a search-by-image query.
    // 
    // > The image file must have a file extension. The supported extensions are bmp, jpg, jpeg, png, and tiff.
    shared_ptr<string> fileUrl_ {};
    // A filter condition for the query, specified as a SQL `WHERE` clause that returns a boolean value. The clause can use comparison operators (such as `=`, `<>`, `!=`, `>`, `<`, `>=`, and `<=`), logical operators (`AND`, `OR`, and `NOT`), and keywords such as `IN`, `BETWEEN`, and `LIKE`.
    // 
    // > - For details about the syntax, see https\\://www\\.postgresqltutorial.com/postgresql-tutorial/postgresql-where/.
    shared_ptr<string> filter_ {};
    // Specifies whether to enable knowledge graph enhancement. The default value is `false`.
    shared_ptr<bool> graphEnhance_ {};
    // The parameters for knowledge graph retrieval.
    shared_ptr<string> graphSearchArgsShrink_ {};
    // Specifies the hybrid search algorithm. If this parameter is not specified, the system directly compares and sorts the scores from dense vector retrieval and full-text search.
    // 
    // Valid values:
    // 
    // - RRF: reciprocal rank fusion. This method uses a `k` parameter to control the fusion effect. For more information, see the `HybridSearchArgs` parameter.
    // 
    // - Weight: A weighted sorting method. This method uses parameters to control the score weights of vector retrieval and full-text search before sorting. For more information, see the `HybridSearchArgs` parameter.
    // 
    // - Cascaded: Performs full-text search first, and then performs vector retrieval on the results.
    shared_ptr<string> hybridSearch_ {};
    // Parameters for the multi-channel recall algorithm. Currently, `RRF` and `Weight` are supported. `HybridPathsSetting` can be used to specify the recall paths, including dense vector search (`dense`), sparse vector search (`sparse`), and full-text search (`fulltext`). If this parameter is not specified, the system recalls dense vectors and full-text search results by default.
    // 
    // - RRF: Specifies the constant `k` in the scoring formula `1/(k+rank_i)`. The value must be an integer greater than 1. Example:
    // 
    // ```
    // {
    //   "HybridPathsSetting": {
    //     "paths": "dense,fulltext"
    //   },
    //   "RRF": {
    //     "k": 60
    //   }
    // }
    // ```
    // 
    // - Weight:
    // 
    //   - For dual-channel recall (if `HybridPathsSetting` is not specified, only `alpha` is configured):
    // 
    //     - The score is calculated using the formula: `alpha * dense_score + (1-alpha) * fulltext_score`. The `alpha` parameter represents the score weight of dense vector retrieval relative to full-text search. The value must be in the range of 0 to 1. A value of 0 indicates that only full-text search is used, and a value of 1 indicates that only dense vector retrieval is used.
    // 
    // ```
    // { 
    //    "Weight": {
    //     "alpha": 0.5
    //    }
    // }
    // ```
    // 
    // - For three-channel recall:
    // 
    //   - The score is calculated using the formula: `normalized_dense * dense_score + normalized_sparse * sparse_score + normalized_fulltext * fulltext_score`. The `dense`, `sparse`, and `fulltext` parameters represent the weights for the dense vector, sparse vector, and full-text search results, respectively. Their values must be greater than or equal to 0. The system automatically normalizes the weights to a sum of 1 (for example, `normalized_x = x / (dense + sparse + fulltext)`).
    // 
    // ```
    // {
    //   "HybridPathsSetting": {
    //      "paths": "dense,sparse,fulltext"
    //    },
    //   "Weight": {
    //     "dense": 0.5,
    //     "sparse": 0.3,
    //     "fulltext": 0.2
    //   }
    // }
    // ```
    shared_ptr<string> hybridSearchArgsShrink_ {};
    // Specifies whether to return the URL of the document. The default value is `false`.
    shared_ptr<bool> includeFileUrl_ {};
    // The metadata fields to include in the response. If left empty, no metadata is returned. To specify multiple fields, use a comma-separated list.
    shared_ptr<string> includeMetadataFields_ {};
    // Specifies whether to include the vector in the results. The default value is `false`.
    // 
    // > - **false**: The vector is not returned.
    // >
    // > - **true**: The vector is returned.
    shared_ptr<bool> includeVector_ {};
    // The similarity algorithm used for retrieval. If this parameter is not specified, the algorithm that was specified when the document collection was created is used. We recommend that you do not set this parameter unless you have specific requirements.
    // 
    // > Valid values:
    // >
    // > - **l2**: Euclidean distance.
    // >
    // > - **ip**: dot product (inner product) distance.
    // >
    // > - **cosine**: cosine similarity.
    shared_ptr<string> metrics_ {};
    // The namespace. The default value is `public`.
    // 
    // > You can call the [CreateNamespace](https://help.aliyun.com/document_detail/2401495.html) operation to create a namespace and the [ListNamespaces](https://help.aliyun.com/document_detail/2401502.html) operation to list existing namespaces.
    shared_ptr<string> namespace_ {};
    // The password for the namespace.
    // 
    // > This password is set when you call the [CreateNamespace](https://help.aliyun.com/document_detail/2401495.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> namespacePassword_ {};
    // The offset for paginated queries.
    shared_ptr<int32_t> offset_ {};
    // The field to sort the results by. By default, this parameter is empty.
    // 
    // The field must be a metadata field or a default field from the table, such as `id`. Supported formats include single fields (e.g., `chunk_id`), multiple comma-separated fields (e.g., `block_id, chunk_id`), and fields with a sort direction (e.g., `block_id DESC, chunk_id DESC`).
    shared_ptr<string> orderBy_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The recall window. If this parameter is specified, additional context is returned with the retrieval results. The value must be a two-element array, `[A, B]`, where `-10 <= A <= 0` and `0 <= B <= 10`.
    // 
    // > - Use this parameter when documents are finely chunked and retrieval might otherwise lose contextual information.
    // >
    // > - Reranking is prioritized over windowing. The system first applies reranking and then processes the window.
    shared_ptr<string> recallWindowShrink_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The factor for reranking vector retrieval results. The value must be greater than 1 and less than or equal to 5.
    // 
    // > - Reranking may be slower if document chunks are sparse.
    // >
    // > - For best performance, the number of items to be reranked (`TopK` \\* `RerankFactor`, rounded up) should not exceed 50.
    shared_ptr<double> rerankFactor_ {};
    // The parameters for the reranking model.
    shared_ptr<string> rerankModelShrink_ {};
    // The number of top results to return.
    shared_ptr<int32_t> topK_ {};
    // The validity period of the returned image URL.
    // 
    // > - The value can be specified in seconds (s) or days (d). For example, `300s` indicates that the link is valid for 300 seconds, and `60d` indicates that the link is valid for 60 days.
    // >
    // > - The value must be in the range of `60s` to `365d`.
    // >
    // > - Default value: `7200s` (2 hours).
    shared_ptr<string> urlExpiration_ {};
    // (Deprecated) Specifies whether to use full-text search (dual-channel recall). The default value is `false`, which means only vector retrieval is used.
    shared_ptr<bool> useFullTextRetrieval_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
