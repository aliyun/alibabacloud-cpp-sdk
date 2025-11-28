// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYKNOWLEDGEBASESCONTENTREQUESTSOURCECOLLECTIONQUERYPARAMS_HPP_
#define ALIBABACLOUD_MODELS_QUERYKNOWLEDGEBASESCONTENTREQUESTSOURCECOLLECTIONQUERYPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryKnowledgeBasesContentRequestSourceCollectionQueryParamsGraphSearchArgs.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryKnowledgeBasesContentRequestSourceCollectionQueryParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryKnowledgeBasesContentRequestSourceCollectionQueryParams& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(GraphEnhance, graphEnhance_);
      DARABONBA_PTR_TO_JSON(GraphSearchArgs, graphSearchArgs_);
      DARABONBA_PTR_TO_JSON(HybridSearch, hybridSearch_);
      DARABONBA_ANY_TO_JSON(HybridSearchArgs, hybridSearchArgs_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(RecallWindow, recallWindow_);
      DARABONBA_PTR_TO_JSON(RerankFactor, rerankFactor_);
      DARABONBA_PTR_TO_JSON(TopK, topK_);
      DARABONBA_PTR_TO_JSON(UseFullTextRetrieval, useFullTextRetrieval_);
    };
    friend void from_json(const Darabonba::Json& j, QueryKnowledgeBasesContentRequestSourceCollectionQueryParams& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(GraphEnhance, graphEnhance_);
      DARABONBA_PTR_FROM_JSON(GraphSearchArgs, graphSearchArgs_);
      DARABONBA_PTR_FROM_JSON(HybridSearch, hybridSearch_);
      DARABONBA_ANY_FROM_JSON(HybridSearchArgs, hybridSearchArgs_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(RecallWindow, recallWindow_);
      DARABONBA_PTR_FROM_JSON(RerankFactor, rerankFactor_);
      DARABONBA_PTR_FROM_JSON(TopK, topK_);
      DARABONBA_PTR_FROM_JSON(UseFullTextRetrieval, useFullTextRetrieval_);
    };
    QueryKnowledgeBasesContentRequestSourceCollectionQueryParams() = default ;
    QueryKnowledgeBasesContentRequestSourceCollectionQueryParams(const QueryKnowledgeBasesContentRequestSourceCollectionQueryParams &) = default ;
    QueryKnowledgeBasesContentRequestSourceCollectionQueryParams(QueryKnowledgeBasesContentRequestSourceCollectionQueryParams &&) = default ;
    QueryKnowledgeBasesContentRequestSourceCollectionQueryParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryKnowledgeBasesContentRequestSourceCollectionQueryParams() = default ;
    QueryKnowledgeBasesContentRequestSourceCollectionQueryParams& operator=(const QueryKnowledgeBasesContentRequestSourceCollectionQueryParams &) = default ;
    QueryKnowledgeBasesContentRequestSourceCollectionQueryParams& operator=(QueryKnowledgeBasesContentRequestSourceCollectionQueryParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filter_ == nullptr
        && return this->graphEnhance_ == nullptr && return this->graphSearchArgs_ == nullptr && return this->hybridSearch_ == nullptr && return this->hybridSearchArgs_ == nullptr && return this->metrics_ == nullptr
        && return this->offset_ == nullptr && return this->orderBy_ == nullptr && return this->recallWindow_ == nullptr && return this->rerankFactor_ == nullptr && return this->topK_ == nullptr
        && return this->useFullTextRetrieval_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string filter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline QueryKnowledgeBasesContentRequestSourceCollectionQueryParams& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // graphEnhance Field Functions 
    bool hasGraphEnhance() const { return this->graphEnhance_ != nullptr;};
    void deleteGraphEnhance() { this->graphEnhance_ = nullptr;};
    inline bool graphEnhance() const { DARABONBA_PTR_GET_DEFAULT(graphEnhance_, false) };
    inline QueryKnowledgeBasesContentRequestSourceCollectionQueryParams& setGraphEnhance(bool graphEnhance) { DARABONBA_PTR_SET_VALUE(graphEnhance_, graphEnhance) };


    // graphSearchArgs Field Functions 
    bool hasGraphSearchArgs() const { return this->graphSearchArgs_ != nullptr;};
    void deleteGraphSearchArgs() { this->graphSearchArgs_ = nullptr;};
    inline const Models::QueryKnowledgeBasesContentRequestSourceCollectionQueryParamsGraphSearchArgs & graphSearchArgs() const { DARABONBA_PTR_GET_CONST(graphSearchArgs_, Models::QueryKnowledgeBasesContentRequestSourceCollectionQueryParamsGraphSearchArgs) };
    inline Models::QueryKnowledgeBasesContentRequestSourceCollectionQueryParamsGraphSearchArgs graphSearchArgs() { DARABONBA_PTR_GET(graphSearchArgs_, Models::QueryKnowledgeBasesContentRequestSourceCollectionQueryParamsGraphSearchArgs) };
    inline QueryKnowledgeBasesContentRequestSourceCollectionQueryParams& setGraphSearchArgs(const Models::QueryKnowledgeBasesContentRequestSourceCollectionQueryParamsGraphSearchArgs & graphSearchArgs) { DARABONBA_PTR_SET_VALUE(graphSearchArgs_, graphSearchArgs) };
    inline QueryKnowledgeBasesContentRequestSourceCollectionQueryParams& setGraphSearchArgs(Models::QueryKnowledgeBasesContentRequestSourceCollectionQueryParamsGraphSearchArgs && graphSearchArgs) { DARABONBA_PTR_SET_RVALUE(graphSearchArgs_, graphSearchArgs) };


    // hybridSearch Field Functions 
    bool hasHybridSearch() const { return this->hybridSearch_ != nullptr;};
    void deleteHybridSearch() { this->hybridSearch_ = nullptr;};
    inline string hybridSearch() const { DARABONBA_PTR_GET_DEFAULT(hybridSearch_, "") };
    inline QueryKnowledgeBasesContentRequestSourceCollectionQueryParams& setHybridSearch(string hybridSearch) { DARABONBA_PTR_SET_VALUE(hybridSearch_, hybridSearch) };


    // hybridSearchArgs Field Functions 
    bool hasHybridSearchArgs() const { return this->hybridSearchArgs_ != nullptr;};
    void deleteHybridSearchArgs() { this->hybridSearchArgs_ = nullptr;};
    inline     const Darabonba::Json & hybridSearchArgs() const { DARABONBA_GET(hybridSearchArgs_) };
    Darabonba::Json & hybridSearchArgs() { DARABONBA_GET(hybridSearchArgs_) };
    inline QueryKnowledgeBasesContentRequestSourceCollectionQueryParams& setHybridSearchArgs(const Darabonba::Json & hybridSearchArgs) { DARABONBA_SET_VALUE(hybridSearchArgs_, hybridSearchArgs) };
    inline QueryKnowledgeBasesContentRequestSourceCollectionQueryParams& setHybridSearchArgs(Darabonba::Json & hybridSearchArgs) { DARABONBA_SET_RVALUE(hybridSearchArgs_, hybridSearchArgs) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline string metrics() const { DARABONBA_PTR_GET_DEFAULT(metrics_, "") };
    inline QueryKnowledgeBasesContentRequestSourceCollectionQueryParams& setMetrics(string metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline QueryKnowledgeBasesContentRequestSourceCollectionQueryParams& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline QueryKnowledgeBasesContentRequestSourceCollectionQueryParams& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // recallWindow Field Functions 
    bool hasRecallWindow() const { return this->recallWindow_ != nullptr;};
    void deleteRecallWindow() { this->recallWindow_ = nullptr;};
    inline const vector<int64_t> & recallWindow() const { DARABONBA_PTR_GET_CONST(recallWindow_, vector<int64_t>) };
    inline vector<int64_t> recallWindow() { DARABONBA_PTR_GET(recallWindow_, vector<int64_t>) };
    inline QueryKnowledgeBasesContentRequestSourceCollectionQueryParams& setRecallWindow(const vector<int64_t> & recallWindow) { DARABONBA_PTR_SET_VALUE(recallWindow_, recallWindow) };
    inline QueryKnowledgeBasesContentRequestSourceCollectionQueryParams& setRecallWindow(vector<int64_t> && recallWindow) { DARABONBA_PTR_SET_RVALUE(recallWindow_, recallWindow) };


    // rerankFactor Field Functions 
    bool hasRerankFactor() const { return this->rerankFactor_ != nullptr;};
    void deleteRerankFactor() { this->rerankFactor_ = nullptr;};
    inline double rerankFactor() const { DARABONBA_PTR_GET_DEFAULT(rerankFactor_, 0.0) };
    inline QueryKnowledgeBasesContentRequestSourceCollectionQueryParams& setRerankFactor(double rerankFactor) { DARABONBA_PTR_SET_VALUE(rerankFactor_, rerankFactor) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int64_t topK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0L) };
    inline QueryKnowledgeBasesContentRequestSourceCollectionQueryParams& setTopK(int64_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    // useFullTextRetrieval Field Functions 
    bool hasUseFullTextRetrieval() const { return this->useFullTextRetrieval_ != nullptr;};
    void deleteUseFullTextRetrieval() { this->useFullTextRetrieval_ = nullptr;};
    inline bool useFullTextRetrieval() const { DARABONBA_PTR_GET_DEFAULT(useFullTextRetrieval_, false) };
    inline QueryKnowledgeBasesContentRequestSourceCollectionQueryParams& setUseFullTextRetrieval(bool useFullTextRetrieval) { DARABONBA_PTR_SET_VALUE(useFullTextRetrieval_, useFullTextRetrieval) };


  protected:
    // The filter condition that is used to query data. Specify this parameter in a format that is the same as the WHERE clause. The parameter is an expression that returns a Boolean value of TRUE or FALSE. The condition can be a simple comparison using operators such as equal (=), not equal (<> or !=), greater than (>), less than (<), greater than or equal (>=), or less than or equal (<=). It can also be a more complex expression combining multiple conditions with logical operators (AND, OR, NOT), or use keywords such as IN, BETWEEN, and LIKE.
    // 
    // > 
    // 
    // *   For the syntax, see https://www.postgresqltutorial.com/postgresql-tutorial/postgresql-where/.
    std::shared_ptr<string> filter_ = nullptr;
    // Whether to enable knowledge graph enhancement. Default value: false.
    std::shared_ptr<bool> graphEnhance_ = nullptr;
    // Returns the top number of entities and relationship edges. Default value: 60.
    std::shared_ptr<Models::QueryKnowledgeBasesContentRequestSourceCollectionQueryParamsGraphSearchArgs> graphSearchArgs_ = nullptr;
    // The dual-path retrieval algorithm. This parameter is empty by default, which specifies that scores of vector retrieval and full-text retrieval are directly compared and sorted together.
    // 
    // Valid values:
    // 
    // *   RRF: The reciprocal rank fusion (RRF) algorithm uses a constant k to control the fusion effect. For more information, see the description of the HybridSearchArgs parameter.
    // *   Weight: This algorithm uses the alpha parameter to specify the proportion of the vector search score and the full-text search score and then sorts by weight. For more information, see the description of the HybridSearchArgs parameter.
    // *   Cascaded: This algorithm performs first full-text retrieval and then vector retrieval.
    std::shared_ptr<string> hybridSearch_ = nullptr;
    // The parameters of the dual-path retrieval algorithm. RRF and Weight are supported at this time:
    // 
    // *   RRF: Specifies the smoothing constant k in the formula to calculate the score: `1/(k + rank_i)`. The k constant must be a positive integer greater than 1. The format:
    // 
    // <!---->
    // 
    //     { 
    //        "RRF": {
    //         "k": 60
    //        }
    //     }
    // 
    // *   Weight: The score is computed as `alpha * vector_score + (1 - alpha) * text_score`. The parameter alpha controls the weighting between vector search and full-text search scores, with a valid range of [0, 1]. 0 specifies only full-text search score. 1 specifies only vector search score.
    // 
    // <!---->
    // 
    //     { 
    //        "Weight": {
    //         "alpha": 0.5
    //        }
    //     }
    Darabonba::Json hybridSearchArgs_ = nullptr;
    // The method that is used to create vector indexes. Valid values:
    // 
    // *   l2: Euclidean distance.
    // *   ip: Inner product distance.
    // *   cosine: Cosine similarity.
    std::shared_ptr<string> metrics_ = nullptr;
    // Offset for pagination.
    std::shared_ptr<int32_t> offset_ = nullptr;
    // The fields by which to sort the results. This parameter is empty by default.
    // 
    // The field must be either a metadata field or a default field in the table (e.g., id). Supported formats include:
    // 
    // Single field, such as chunk_id. Multiple fields that are separated by commas (,), such as block_id,chunk_id. Descending order is supported, such as block_id DESC,chunk_id DESC.
    std::shared_ptr<string> orderBy_ = nullptr;
    // The retrieval window. If you specify this parameter, the context of the retrieved result is added in the output. Format: List\\<A, B>. Valid values: -10<=A<=0 and 0<=B<=10.
    // 
    // > 
    // 
    // *   We recommend that you specify this parameter if the source document is segmented into large numbers of pieces, which may result in loss of contextual information during retrieval.
    // 
    // *   Perform re-ranking before windowing.
    std::shared_ptr<vector<int64_t>> recallWindow_ = nullptr;
    // The rerank factor. If you specify this parameter, the vector retrieval results are reranked once more. Valid values: 1\\<RerankFactor<=5.
    // 
    // > 
    // 
    // *   If the document is segmented into sparse parts, reranking is inefficient.
    // 
    // *   We recommend that the number of reranked results (the ceiling of TopK × RerankFactor) not exceed 50.
    std::shared_ptr<double> rerankFactor_ = nullptr;
    // The number of top results.
    std::shared_ptr<int64_t> topK_ = nullptr;
    // Specifies whether to use full-text retrieval (dual-path retrieval). The default value is false, which means only vector retrieval is used.
    std::shared_ptr<bool> useFullTextRetrieval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
