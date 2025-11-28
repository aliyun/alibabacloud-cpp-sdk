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
        && return this->content_ == nullptr && return this->DBInstanceId_ == nullptr && return this->fileName_ == nullptr && return this->fileUrl_ == nullptr && return this->filter_ == nullptr
        && return this->graphEnhance_ == nullptr && return this->graphSearchArgsShrink_ == nullptr && return this->hybridSearch_ == nullptr && return this->hybridSearchArgsShrink_ == nullptr && return this->includeFileUrl_ == nullptr
        && return this->includeMetadataFields_ == nullptr && return this->includeVector_ == nullptr && return this->metrics_ == nullptr && return this->namespace_ == nullptr && return this->namespacePassword_ == nullptr
        && return this->offset_ == nullptr && return this->orderBy_ == nullptr && return this->ownerId_ == nullptr && return this->recallWindowShrink_ == nullptr && return this->regionId_ == nullptr
        && return this->rerankFactor_ == nullptr && return this->topK_ == nullptr && return this->urlExpiration_ == nullptr && return this->useFullTextRetrieval_ == nullptr; };
    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string collection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline QueryContentShrinkRequest& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline QueryContentShrinkRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline QueryContentShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline QueryContentShrinkRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline QueryContentShrinkRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string filter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline QueryContentShrinkRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // graphEnhance Field Functions 
    bool hasGraphEnhance() const { return this->graphEnhance_ != nullptr;};
    void deleteGraphEnhance() { this->graphEnhance_ = nullptr;};
    inline bool graphEnhance() const { DARABONBA_PTR_GET_DEFAULT(graphEnhance_, false) };
    inline QueryContentShrinkRequest& setGraphEnhance(bool graphEnhance) { DARABONBA_PTR_SET_VALUE(graphEnhance_, graphEnhance) };


    // graphSearchArgsShrink Field Functions 
    bool hasGraphSearchArgsShrink() const { return this->graphSearchArgsShrink_ != nullptr;};
    void deleteGraphSearchArgsShrink() { this->graphSearchArgsShrink_ = nullptr;};
    inline string graphSearchArgsShrink() const { DARABONBA_PTR_GET_DEFAULT(graphSearchArgsShrink_, "") };
    inline QueryContentShrinkRequest& setGraphSearchArgsShrink(string graphSearchArgsShrink) { DARABONBA_PTR_SET_VALUE(graphSearchArgsShrink_, graphSearchArgsShrink) };


    // hybridSearch Field Functions 
    bool hasHybridSearch() const { return this->hybridSearch_ != nullptr;};
    void deleteHybridSearch() { this->hybridSearch_ = nullptr;};
    inline string hybridSearch() const { DARABONBA_PTR_GET_DEFAULT(hybridSearch_, "") };
    inline QueryContentShrinkRequest& setHybridSearch(string hybridSearch) { DARABONBA_PTR_SET_VALUE(hybridSearch_, hybridSearch) };


    // hybridSearchArgsShrink Field Functions 
    bool hasHybridSearchArgsShrink() const { return this->hybridSearchArgsShrink_ != nullptr;};
    void deleteHybridSearchArgsShrink() { this->hybridSearchArgsShrink_ = nullptr;};
    inline string hybridSearchArgsShrink() const { DARABONBA_PTR_GET_DEFAULT(hybridSearchArgsShrink_, "") };
    inline QueryContentShrinkRequest& setHybridSearchArgsShrink(string hybridSearchArgsShrink) { DARABONBA_PTR_SET_VALUE(hybridSearchArgsShrink_, hybridSearchArgsShrink) };


    // includeFileUrl Field Functions 
    bool hasIncludeFileUrl() const { return this->includeFileUrl_ != nullptr;};
    void deleteIncludeFileUrl() { this->includeFileUrl_ = nullptr;};
    inline bool includeFileUrl() const { DARABONBA_PTR_GET_DEFAULT(includeFileUrl_, false) };
    inline QueryContentShrinkRequest& setIncludeFileUrl(bool includeFileUrl) { DARABONBA_PTR_SET_VALUE(includeFileUrl_, includeFileUrl) };


    // includeMetadataFields Field Functions 
    bool hasIncludeMetadataFields() const { return this->includeMetadataFields_ != nullptr;};
    void deleteIncludeMetadataFields() { this->includeMetadataFields_ = nullptr;};
    inline string includeMetadataFields() const { DARABONBA_PTR_GET_DEFAULT(includeMetadataFields_, "") };
    inline QueryContentShrinkRequest& setIncludeMetadataFields(string includeMetadataFields) { DARABONBA_PTR_SET_VALUE(includeMetadataFields_, includeMetadataFields) };


    // includeVector Field Functions 
    bool hasIncludeVector() const { return this->includeVector_ != nullptr;};
    void deleteIncludeVector() { this->includeVector_ = nullptr;};
    inline bool includeVector() const { DARABONBA_PTR_GET_DEFAULT(includeVector_, false) };
    inline QueryContentShrinkRequest& setIncludeVector(bool includeVector) { DARABONBA_PTR_SET_VALUE(includeVector_, includeVector) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline string metrics() const { DARABONBA_PTR_GET_DEFAULT(metrics_, "") };
    inline QueryContentShrinkRequest& setMetrics(string metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline QueryContentShrinkRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespacePassword Field Functions 
    bool hasNamespacePassword() const { return this->namespacePassword_ != nullptr;};
    void deleteNamespacePassword() { this->namespacePassword_ = nullptr;};
    inline string namespacePassword() const { DARABONBA_PTR_GET_DEFAULT(namespacePassword_, "") };
    inline QueryContentShrinkRequest& setNamespacePassword(string namespacePassword) { DARABONBA_PTR_SET_VALUE(namespacePassword_, namespacePassword) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline QueryContentShrinkRequest& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline QueryContentShrinkRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryContentShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // recallWindowShrink Field Functions 
    bool hasRecallWindowShrink() const { return this->recallWindowShrink_ != nullptr;};
    void deleteRecallWindowShrink() { this->recallWindowShrink_ = nullptr;};
    inline string recallWindowShrink() const { DARABONBA_PTR_GET_DEFAULT(recallWindowShrink_, "") };
    inline QueryContentShrinkRequest& setRecallWindowShrink(string recallWindowShrink) { DARABONBA_PTR_SET_VALUE(recallWindowShrink_, recallWindowShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryContentShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rerankFactor Field Functions 
    bool hasRerankFactor() const { return this->rerankFactor_ != nullptr;};
    void deleteRerankFactor() { this->rerankFactor_ = nullptr;};
    inline double rerankFactor() const { DARABONBA_PTR_GET_DEFAULT(rerankFactor_, 0.0) };
    inline QueryContentShrinkRequest& setRerankFactor(double rerankFactor) { DARABONBA_PTR_SET_VALUE(rerankFactor_, rerankFactor) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t topK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline QueryContentShrinkRequest& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    // urlExpiration Field Functions 
    bool hasUrlExpiration() const { return this->urlExpiration_ != nullptr;};
    void deleteUrlExpiration() { this->urlExpiration_ = nullptr;};
    inline string urlExpiration() const { DARABONBA_PTR_GET_DEFAULT(urlExpiration_, "") };
    inline QueryContentShrinkRequest& setUrlExpiration(string urlExpiration) { DARABONBA_PTR_SET_VALUE(urlExpiration_, urlExpiration) };


    // useFullTextRetrieval Field Functions 
    bool hasUseFullTextRetrieval() const { return this->useFullTextRetrieval_ != nullptr;};
    void deleteUseFullTextRetrieval() { this->useFullTextRetrieval_ = nullptr;};
    inline bool useFullTextRetrieval() const { DARABONBA_PTR_GET_DEFAULT(useFullTextRetrieval_, false) };
    inline QueryContentShrinkRequest& setUseFullTextRetrieval(bool useFullTextRetrieval) { DARABONBA_PTR_SET_VALUE(useFullTextRetrieval_, useFullTextRetrieval) };


  protected:
    // Document collection name.
    // 
    // > Created by the [CreateDocumentCollection](https://help.aliyun.com/document_detail/2618448.html) API. You can use the [ListDocumentCollections](https://help.aliyun.com/document_detail/2618452.html) API to view the list of created document collections.
    // 
    // This parameter is required.
    std::shared_ptr<string> collection_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    // Instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) API to view details of all AnalyticDB for PostgreSQL instances in the target region, including the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // In image search scenarios, the source file name of the image to be searched.
    // 
    // > The image file must have a file extension. Currently supported image extensions: bmp, jpg, jpeg, png, tiff.
    std::shared_ptr<string> fileName_ = nullptr;
    // In image search scenarios, the publicly accessible URL of the image file.
    // 
    // > The image file must have a file extension. Currently supported image extensions: bmp, jpg, jpeg, png, tiff.
    std::shared_ptr<string> fileUrl_ = nullptr;
    // Filter condition for the data to be queried, in SQL WHERE format. It is an expression that returns a boolean value (true or false). The conditions can be simple comparison operators such as equal (=), not equal (<> or !=), greater than (>), less than (<), greater than or equal to (>=), less than or equal to (<=), or more complex expressions combined with logical operators (AND, OR, NOT), and conditions using keywords like IN, BETWEEN, LIKE, etc.
    // 
    // > 
    // > - For detailed syntax, refer to: https://www.postgresqltutorial.com/postgresql-tutorial/postgresql-where/
    std::shared_ptr<string> filter_ = nullptr;
    // Whether to enable knowledge graph enhancement. Default value: false.
    std::shared_ptr<bool> graphEnhance_ = nullptr;
    // The search parameters of the knowledge graph.
    std::shared_ptr<string> graphSearchArgsShrink_ = nullptr;
    // Dual recall algorithm, default is empty (i.e., directly compare and sort the scores of vectors and full text).
    // 
    // Available values:
    // 
    // - RRF: Reciprocal rank fusion, with a parameter k controlling the fusion effect. See HybridSearchArgs configuration for details;
    // - Weight: Weighted ranking, using a parameter alpha to control the weight of vector and full-text scores, then sorting. See HybridSearchArgs configuration for details;
    // - Cascaded: Perform full-text retrieval first, then vector retrieval on top of it;
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
    std::shared_ptr<string> hybridSearchArgsShrink_ = nullptr;
    // Specifies whether to return the URL of the document. Default value: false.
    std::shared_ptr<bool> includeFileUrl_ = nullptr;
    // The metadata fields to be returned. Separate multiple fields with commas (,). This parameter is empty by default.
    std::shared_ptr<string> includeMetadataFields_ = nullptr;
    // Whether to return vectors. Default is false.
    // > - **false**: Do not return vectors.
    // > - **true**: Return vectors.
    std::shared_ptr<bool> includeVector_ = nullptr;
    // Similarity algorithm used during retrieval. If this value is empty, the algorithm specified at the time of knowledge base creation is used. It is recommended not to set this unless there is a specific need.
    // 
    // > Value description:
    // > - **l2**: Euclidean distance.
    // > - **ip**: Inner product (dot product) distance.
    // > - **cosine**: Cosine similarity.
    std::shared_ptr<string> metrics_ = nullptr;
    // Namespace, default is public.
    // 
    // > You can create a namespace using the [CreateNamespace](https://help.aliyun.com/document_detail/2401495.html) API and view the list of namespaces using the [ListNamespaces](https://help.aliyun.com/document_detail/2401502.html) API.
    std::shared_ptr<string> namespace_ = nullptr;
    // Password for the namespace.
    // 
    // > This value is specified in the [CreateNamespace](https://help.aliyun.com/document_detail/2401495.html) API.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespacePassword_ = nullptr;
    // Offset, used for paginated queries.
    std::shared_ptr<int32_t> offset_ = nullptr;
    // The fields by which to sort the results. This parameter is empty by default.
    // 
    // The field must be either a metadata field or a default field in the table (e.g., id). Supported formats include:
    // 
    // Single field, such as chunk_id. Multiple fields that are separated by commas (,), such as block_id,chunk_id. Descending order is supported, e.g., block_id DESC, chunk_id DESC.
    std::shared_ptr<string> orderBy_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // Recall window. When this value is not empty, it adds context to the returned search results. The format is an array of 2 elements: List<A, B>, where -10 <= A <= 0 and 0 <= B <= 10.
    // > - Recommended when documents are fragmented and retrieval may lose contextual information.
    // > - Re-ranking takes precedence over windowing, i.e., re-rank first, then apply windowing.
    std::shared_ptr<string> recallWindowShrink_ = nullptr;
    // The region ID where the instance is located.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Re-ranking factor. When this value is not empty, it will re-rank the vector search results. The value range is 1 < RerankFactor <= 5.
    // > - Re-ranking is slower when documents are sparsely split.
    // > - It is recommended that the re-ranked count (TopK * Factor, rounded up) does not exceed 50.
    std::shared_ptr<double> rerankFactor_ = nullptr;
    // The number of the returned top results.
    std::shared_ptr<int32_t> topK_ = nullptr;
    // The validity period of the returned image URL.
    // 
    // >  Value Description
    // 
    // *   Supported units are seconds (s) and days (d). For example, 300s specifies that the URL is valid for 300 seconds, and 60d specifies that the URL is valid for 60 days.
    // 
    // *   Valid values: 60s to 365d.
    // 
    // *   Default value: 7200s, that is, 2 hours.
    std::shared_ptr<string> urlExpiration_ = nullptr;
    // Whether to use full-text retrieval (dual recall). Default is false, which means only vector retrieval is used.
    std::shared_ptr<bool> useFullTextRetrieval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
