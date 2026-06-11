// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRIEVEKNOWLEDGEBASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RETRIEVEKNOWLEDGEBASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class RetrieveKnowledgeBaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetrieveKnowledgeBaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(HybridSearch, hybridSearch_);
      DARABONBA_PTR_TO_JSON(HybridSearchArgs, hybridSearchArgs_);
      DARABONBA_PTR_TO_JSON(IncludeMetadataFields, includeMetadataFields_);
      DARABONBA_PTR_TO_JSON(IncludeVector, includeVector_);
      DARABONBA_PTR_TO_JSON(KbUuid, kbUuid_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(RecallWindow, recallWindow_);
      DARABONBA_PTR_TO_JSON(RerankFactor, rerankFactor_);
      DARABONBA_PTR_TO_JSON(TopK, topK_);
    };
    friend void from_json(const Darabonba::Json& j, RetrieveKnowledgeBaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(HybridSearch, hybridSearch_);
      DARABONBA_PTR_FROM_JSON(HybridSearchArgs, hybridSearchArgs_);
      DARABONBA_PTR_FROM_JSON(IncludeMetadataFields, includeMetadataFields_);
      DARABONBA_PTR_FROM_JSON(IncludeVector, includeVector_);
      DARABONBA_PTR_FROM_JSON(KbUuid, kbUuid_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(RecallWindow, recallWindow_);
      DARABONBA_PTR_FROM_JSON(RerankFactor, rerankFactor_);
      DARABONBA_PTR_FROM_JSON(TopK, topK_);
    };
    RetrieveKnowledgeBaseRequest() = default ;
    RetrieveKnowledgeBaseRequest(const RetrieveKnowledgeBaseRequest &) = default ;
    RetrieveKnowledgeBaseRequest(RetrieveKnowledgeBaseRequest &&) = default ;
    RetrieveKnowledgeBaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetrieveKnowledgeBaseRequest() = default ;
    RetrieveKnowledgeBaseRequest& operator=(const RetrieveKnowledgeBaseRequest &) = default ;
    RetrieveKnowledgeBaseRequest& operator=(RetrieveKnowledgeBaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filter_ == nullptr
        && this->hybridSearch_ == nullptr && this->hybridSearchArgs_ == nullptr && this->includeMetadataFields_ == nullptr && this->includeVector_ == nullptr && this->kbUuid_ == nullptr
        && this->metrics_ == nullptr && this->offset_ == nullptr && this->orderBy_ == nullptr && this->query_ == nullptr && this->recallWindow_ == nullptr
        && this->rerankFactor_ == nullptr && this->topK_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline RetrieveKnowledgeBaseRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // hybridSearch Field Functions 
    bool hasHybridSearch() const { return this->hybridSearch_ != nullptr;};
    void deleteHybridSearch() { this->hybridSearch_ = nullptr;};
    inline string getHybridSearch() const { DARABONBA_PTR_GET_DEFAULT(hybridSearch_, "") };
    inline RetrieveKnowledgeBaseRequest& setHybridSearch(string hybridSearch) { DARABONBA_PTR_SET_VALUE(hybridSearch_, hybridSearch) };


    // hybridSearchArgs Field Functions 
    bool hasHybridSearchArgs() const { return this->hybridSearchArgs_ != nullptr;};
    void deleteHybridSearchArgs() { this->hybridSearchArgs_ = nullptr;};
    inline string getHybridSearchArgs() const { DARABONBA_PTR_GET_DEFAULT(hybridSearchArgs_, "") };
    inline RetrieveKnowledgeBaseRequest& setHybridSearchArgs(string hybridSearchArgs) { DARABONBA_PTR_SET_VALUE(hybridSearchArgs_, hybridSearchArgs) };


    // includeMetadataFields Field Functions 
    bool hasIncludeMetadataFields() const { return this->includeMetadataFields_ != nullptr;};
    void deleteIncludeMetadataFields() { this->includeMetadataFields_ = nullptr;};
    inline string getIncludeMetadataFields() const { DARABONBA_PTR_GET_DEFAULT(includeMetadataFields_, "") };
    inline RetrieveKnowledgeBaseRequest& setIncludeMetadataFields(string includeMetadataFields) { DARABONBA_PTR_SET_VALUE(includeMetadataFields_, includeMetadataFields) };


    // includeVector Field Functions 
    bool hasIncludeVector() const { return this->includeVector_ != nullptr;};
    void deleteIncludeVector() { this->includeVector_ = nullptr;};
    inline bool getIncludeVector() const { DARABONBA_PTR_GET_DEFAULT(includeVector_, false) };
    inline RetrieveKnowledgeBaseRequest& setIncludeVector(bool includeVector) { DARABONBA_PTR_SET_VALUE(includeVector_, includeVector) };


    // kbUuid Field Functions 
    bool hasKbUuid() const { return this->kbUuid_ != nullptr;};
    void deleteKbUuid() { this->kbUuid_ = nullptr;};
    inline string getKbUuid() const { DARABONBA_PTR_GET_DEFAULT(kbUuid_, "") };
    inline RetrieveKnowledgeBaseRequest& setKbUuid(string kbUuid) { DARABONBA_PTR_SET_VALUE(kbUuid_, kbUuid) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline string getMetrics() const { DARABONBA_PTR_GET_DEFAULT(metrics_, "") };
    inline RetrieveKnowledgeBaseRequest& setMetrics(string metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline RetrieveKnowledgeBaseRequest& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline RetrieveKnowledgeBaseRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline RetrieveKnowledgeBaseRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // recallWindow Field Functions 
    bool hasRecallWindow() const { return this->recallWindow_ != nullptr;};
    void deleteRecallWindow() { this->recallWindow_ = nullptr;};
    inline string getRecallWindow() const { DARABONBA_PTR_GET_DEFAULT(recallWindow_, "") };
    inline RetrieveKnowledgeBaseRequest& setRecallWindow(string recallWindow) { DARABONBA_PTR_SET_VALUE(recallWindow_, recallWindow) };


    // rerankFactor Field Functions 
    bool hasRerankFactor() const { return this->rerankFactor_ != nullptr;};
    void deleteRerankFactor() { this->rerankFactor_ = nullptr;};
    inline double getRerankFactor() const { DARABONBA_PTR_GET_DEFAULT(rerankFactor_, 0.0) };
    inline RetrieveKnowledgeBaseRequest& setRerankFactor(double rerankFactor) { DARABONBA_PTR_SET_VALUE(rerankFactor_, rerankFactor) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline RetrieveKnowledgeBaseRequest& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


  protected:
    // A filter for the data, specified as a SQL `WHERE` clause.
    shared_ptr<string> filter_ {};
    // The hybrid search algorithm. If this parameter is not set, the system directly compares and ranks the scores from the dense vector and full-text searches.
    // 
    // Valid values:
    // 
    // - `RRF`: Reciprocal Rank Fusion. This method uses a parameter `k` to control the fusion effect. For more information, see the `HybridSearchArgs` configuration.
    // 
    // - `Weight`: Weighted ranking. This method applies weights to the vector and full-text search scores before ranking. For more information, see the `HybridSearchArgs` configuration.
    // 
    // - `Cascaded`: Performs a full-text search first, followed by a vector search on the results of the full-text search.
    shared_ptr<string> hybridSearch_ {};
    // Parameters for the specified `HybridSearch` algorithm. Both `RRF` and `Weight` are supported. You can use the `HybridPathsSetting` object to specify the retrieval paths: dense vector (`dense`), sparse vector (`sparse`), and full-text search (`fulltext`). If this object is not provided, the default retrieval paths are `dense` and `fulltext`.
    // 
    // - `RRF`: Specifies the constant `k` in the scoring formula `1/(k+rank_i)`. The value of `k` must be an integer greater than 1. The format is as follows:
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
    // - `Weight`:
    // 
    //   - Two-path recall (do not specify `HybridPathsSetting`; specify only `alpha`):
    // 
    //     - The score is calculated using the formula: `alpha * dense_score + (1-alpha) * fulltext_score`. The `alpha` parameter balances the scores from the dense vector and full-text searches. Its value must be in the range [0, 1], where 0 relies solely on full-text search, and 1 relies solely on dense vector search.
    // 
    // ```
    // { 
    //    "Weight": {
    //     "alpha": 0.5
    //    }
    // }
    // ```
    // 
    // - Three-path recall:
    // 
    //   - The score is calculated using the formula: `normalized_dense * dense_score + normalized_sparse * sparse_score + normalized_fulltext * fulltext_score`. The `dense`, `sparse`, and `fulltext` parameters are the weights for the dense vector, sparse vector, and full-text searches, respectively. Their values must be 0 or greater. The system automatically normalizes the weights to sum to 1 (for example, `normalized_x = x / (dense + sparse + fulltext)`).
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
    shared_ptr<string> hybridSearchArgs_ {};
    // The metadata fields to return, separated by commas. By default, no metadata fields are returned.
    shared_ptr<string> includeMetadataFields_ {};
    // Specifies whether to include the vector in the results. The default value is `false`.
    // 
    // > - **false**: The vector is not returned.
    // >
    // > - **true**: The vector is returned.
    shared_ptr<bool> includeVector_ {};
    // The ID of the knowledge base.
    // 
    // This parameter is required.
    shared_ptr<string> kbUuid_ {};
    // The distance metric for retrieval. If unspecified, this defaults to the metric configured for the knowledge base. Only set this parameter if you have specific requirements.
    // 
    // Valid values:
    // 
    // - `l2`: Euclidean distance.
    // 
    // - `ip`: Inner product.
    // 
    // - `cosine`: Cosine similarity.
    shared_ptr<string> metrics_ {};
    // The offset for pagination.
    shared_ptr<int32_t> offset_ {};
    // The field to use for sorting the results. By default, this parameter is empty.
    // 
    // The field must be a metadata field or a default table field, such as `id`. Supported formats include:
    // 
    // You can specify a single field (for example, `chunk_id`), multiple comma-separated fields (for example, `block_id, chunk_id`), or fields with descending order (for example, `block_id DESC, chunk_id DESC`).
    shared_ptr<string> orderBy_ {};
    // The query text.
    // 
    // This parameter is required.
    shared_ptr<string> query_ {};
    // The recall window. If specified, this parameter expands the context of the retrieved results. The format is a two-element array `[A, B]`, where `-10 <= A <= 0` and `0 <= B <= 10`.
    // 
    // > - Recommended when document chunks are highly fragmented, which might cause context loss during retrieval.
    // >
    // > - Reranking occurs before windowing is applied.
    shared_ptr<string> recallWindow_ {};
    // The factor used to rerank vector search results. The value must be in the range (1, 5].
    // 
    // > - Reranking may be slow if document chunks are sparse.
    // >
    // > - The number of items to rerank, calculated as `ceil(TopK * RerankFactor)`, should not exceed 50.
    shared_ptr<double> rerankFactor_ {};
    // The number of top-ranked results to return.
    shared_ptr<int32_t> topK_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
