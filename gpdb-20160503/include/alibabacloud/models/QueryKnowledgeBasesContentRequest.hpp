// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYKNOWLEDGEBASESCONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYKNOWLEDGEBASESCONTENTREQUEST_HPP_
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
  class QueryKnowledgeBasesContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryKnowledgeBasesContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(MergeMethod, mergeMethod_);
      DARABONBA_PTR_TO_JSON(MergeMethodArgs, mergeMethodArgs_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RerankFactor, rerankFactor_);
      DARABONBA_PTR_TO_JSON(SourceCollection, sourceCollection_);
      DARABONBA_PTR_TO_JSON(TopK, topK_);
    };
    friend void from_json(const Darabonba::Json& j, QueryKnowledgeBasesContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(MergeMethod, mergeMethod_);
      DARABONBA_PTR_FROM_JSON(MergeMethodArgs, mergeMethodArgs_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RerankFactor, rerankFactor_);
      DARABONBA_PTR_FROM_JSON(SourceCollection, sourceCollection_);
      DARABONBA_PTR_FROM_JSON(TopK, topK_);
    };
    QueryKnowledgeBasesContentRequest() = default ;
    QueryKnowledgeBasesContentRequest(const QueryKnowledgeBasesContentRequest &) = default ;
    QueryKnowledgeBasesContentRequest(QueryKnowledgeBasesContentRequest &&) = default ;
    QueryKnowledgeBasesContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryKnowledgeBasesContentRequest() = default ;
    QueryKnowledgeBasesContentRequest& operator=(const QueryKnowledgeBasesContentRequest &) = default ;
    QueryKnowledgeBasesContentRequest& operator=(QueryKnowledgeBasesContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SourceCollection : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceCollection& obj) { 
        DARABONBA_PTR_TO_JSON(Collection, collection_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(NamespacePassword, namespacePassword_);
        DARABONBA_PTR_TO_JSON(QueryParams, queryParams_);
      };
      friend void from_json(const Darabonba::Json& j, SourceCollection& obj) { 
        DARABONBA_PTR_FROM_JSON(Collection, collection_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(NamespacePassword, namespacePassword_);
        DARABONBA_PTR_FROM_JSON(QueryParams, queryParams_);
      };
      SourceCollection() = default ;
      SourceCollection(const SourceCollection &) = default ;
      SourceCollection(SourceCollection &&) = default ;
      SourceCollection(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceCollection() = default ;
      SourceCollection& operator=(const SourceCollection &) = default ;
      SourceCollection& operator=(SourceCollection &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class QueryParams : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QueryParams& obj) { 
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
        friend void from_json(const Darabonba::Json& j, QueryParams& obj) { 
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
        QueryParams() = default ;
        QueryParams(const QueryParams &) = default ;
        QueryParams(QueryParams &&) = default ;
        QueryParams(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QueryParams() = default ;
        QueryParams& operator=(const QueryParams &) = default ;
        QueryParams& operator=(QueryParams &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class GraphSearchArgs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const GraphSearchArgs& obj) { 
            DARABONBA_PTR_TO_JSON(GraphTopK, graphTopK_);
          };
          friend void from_json(const Darabonba::Json& j, GraphSearchArgs& obj) { 
            DARABONBA_PTR_FROM_JSON(GraphTopK, graphTopK_);
          };
          GraphSearchArgs() = default ;
          GraphSearchArgs(const GraphSearchArgs &) = default ;
          GraphSearchArgs(GraphSearchArgs &&) = default ;
          GraphSearchArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~GraphSearchArgs() = default ;
          GraphSearchArgs& operator=(const GraphSearchArgs &) = default ;
          GraphSearchArgs& operator=(GraphSearchArgs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->graphTopK_ == nullptr; };
          // graphTopK Field Functions 
          bool hasGraphTopK() const { return this->graphTopK_ != nullptr;};
          void deleteGraphTopK() { this->graphTopK_ = nullptr;};
          inline int64_t getGraphTopK() const { DARABONBA_PTR_GET_DEFAULT(graphTopK_, 0L) };
          inline GraphSearchArgs& setGraphTopK(int64_t graphTopK) { DARABONBA_PTR_SET_VALUE(graphTopK_, graphTopK) };


        protected:
          // Returns the top number of entities and relationship edges. Default value: 60.
          shared_ptr<int64_t> graphTopK_ {};
        };

        virtual bool empty() const override { return this->filter_ == nullptr
        && this->graphEnhance_ == nullptr && this->graphSearchArgs_ == nullptr && this->hybridSearch_ == nullptr && this->hybridSearchArgs_ == nullptr && this->metrics_ == nullptr
        && this->offset_ == nullptr && this->orderBy_ == nullptr && this->recallWindow_ == nullptr && this->rerankFactor_ == nullptr && this->topK_ == nullptr
        && this->useFullTextRetrieval_ == nullptr; };
        // filter Field Functions 
        bool hasFilter() const { return this->filter_ != nullptr;};
        void deleteFilter() { this->filter_ = nullptr;};
        inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
        inline QueryParams& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


        // graphEnhance Field Functions 
        bool hasGraphEnhance() const { return this->graphEnhance_ != nullptr;};
        void deleteGraphEnhance() { this->graphEnhance_ = nullptr;};
        inline bool getGraphEnhance() const { DARABONBA_PTR_GET_DEFAULT(graphEnhance_, false) };
        inline QueryParams& setGraphEnhance(bool graphEnhance) { DARABONBA_PTR_SET_VALUE(graphEnhance_, graphEnhance) };


        // graphSearchArgs Field Functions 
        bool hasGraphSearchArgs() const { return this->graphSearchArgs_ != nullptr;};
        void deleteGraphSearchArgs() { this->graphSearchArgs_ = nullptr;};
        inline const QueryParams::GraphSearchArgs & getGraphSearchArgs() const { DARABONBA_PTR_GET_CONST(graphSearchArgs_, QueryParams::GraphSearchArgs) };
        inline QueryParams::GraphSearchArgs getGraphSearchArgs() { DARABONBA_PTR_GET(graphSearchArgs_, QueryParams::GraphSearchArgs) };
        inline QueryParams& setGraphSearchArgs(const QueryParams::GraphSearchArgs & graphSearchArgs) { DARABONBA_PTR_SET_VALUE(graphSearchArgs_, graphSearchArgs) };
        inline QueryParams& setGraphSearchArgs(QueryParams::GraphSearchArgs && graphSearchArgs) { DARABONBA_PTR_SET_RVALUE(graphSearchArgs_, graphSearchArgs) };


        // hybridSearch Field Functions 
        bool hasHybridSearch() const { return this->hybridSearch_ != nullptr;};
        void deleteHybridSearch() { this->hybridSearch_ = nullptr;};
        inline string getHybridSearch() const { DARABONBA_PTR_GET_DEFAULT(hybridSearch_, "") };
        inline QueryParams& setHybridSearch(string hybridSearch) { DARABONBA_PTR_SET_VALUE(hybridSearch_, hybridSearch) };


        // hybridSearchArgs Field Functions 
        bool hasHybridSearchArgs() const { return this->hybridSearchArgs_ != nullptr;};
        void deleteHybridSearchArgs() { this->hybridSearchArgs_ = nullptr;};
        inline         const Darabonba::Json & getHybridSearchArgs() const { DARABONBA_GET(hybridSearchArgs_) };
        Darabonba::Json & getHybridSearchArgs() { DARABONBA_GET(hybridSearchArgs_) };
        inline QueryParams& setHybridSearchArgs(const Darabonba::Json & hybridSearchArgs) { DARABONBA_SET_VALUE(hybridSearchArgs_, hybridSearchArgs) };
        inline QueryParams& setHybridSearchArgs(Darabonba::Json && hybridSearchArgs) { DARABONBA_SET_RVALUE(hybridSearchArgs_, hybridSearchArgs) };


        // metrics Field Functions 
        bool hasMetrics() const { return this->metrics_ != nullptr;};
        void deleteMetrics() { this->metrics_ = nullptr;};
        inline string getMetrics() const { DARABONBA_PTR_GET_DEFAULT(metrics_, "") };
        inline QueryParams& setMetrics(string metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };


        // offset Field Functions 
        bool hasOffset() const { return this->offset_ != nullptr;};
        void deleteOffset() { this->offset_ = nullptr;};
        inline int32_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
        inline QueryParams& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


        // orderBy Field Functions 
        bool hasOrderBy() const { return this->orderBy_ != nullptr;};
        void deleteOrderBy() { this->orderBy_ = nullptr;};
        inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
        inline QueryParams& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


        // recallWindow Field Functions 
        bool hasRecallWindow() const { return this->recallWindow_ != nullptr;};
        void deleteRecallWindow() { this->recallWindow_ = nullptr;};
        inline const vector<int64_t> & getRecallWindow() const { DARABONBA_PTR_GET_CONST(recallWindow_, vector<int64_t>) };
        inline vector<int64_t> getRecallWindow() { DARABONBA_PTR_GET(recallWindow_, vector<int64_t>) };
        inline QueryParams& setRecallWindow(const vector<int64_t> & recallWindow) { DARABONBA_PTR_SET_VALUE(recallWindow_, recallWindow) };
        inline QueryParams& setRecallWindow(vector<int64_t> && recallWindow) { DARABONBA_PTR_SET_RVALUE(recallWindow_, recallWindow) };


        // rerankFactor Field Functions 
        bool hasRerankFactor() const { return this->rerankFactor_ != nullptr;};
        void deleteRerankFactor() { this->rerankFactor_ = nullptr;};
        inline double getRerankFactor() const { DARABONBA_PTR_GET_DEFAULT(rerankFactor_, 0.0) };
        inline QueryParams& setRerankFactor(double rerankFactor) { DARABONBA_PTR_SET_VALUE(rerankFactor_, rerankFactor) };


        // topK Field Functions 
        bool hasTopK() const { return this->topK_ != nullptr;};
        void deleteTopK() { this->topK_ = nullptr;};
        inline int64_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0L) };
        inline QueryParams& setTopK(int64_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


        // useFullTextRetrieval Field Functions 
        bool hasUseFullTextRetrieval() const { return this->useFullTextRetrieval_ != nullptr;};
        void deleteUseFullTextRetrieval() { this->useFullTextRetrieval_ = nullptr;};
        inline bool getUseFullTextRetrieval() const { DARABONBA_PTR_GET_DEFAULT(useFullTextRetrieval_, false) };
        inline QueryParams& setUseFullTextRetrieval(bool useFullTextRetrieval) { DARABONBA_PTR_SET_VALUE(useFullTextRetrieval_, useFullTextRetrieval) };


      protected:
        // The filter condition that is used to query data. Specify this parameter in a format that is the same as the WHERE clause. The parameter is an expression that returns a Boolean value of TRUE or FALSE. The condition can be a simple comparison using operators such as equal (=), not equal (<> or !=), greater than (>), less than (<), greater than or equal (>=), or less than or equal (<=). It can also be a more complex expression combining multiple conditions with logical operators (AND, OR, NOT), or use keywords such as IN, BETWEEN, and LIKE.
        // 
        // > 
        // 
        // *   For the syntax, see https://www.postgresqltutorial.com/postgresql-tutorial/postgresql-where/.
        shared_ptr<string> filter_ {};
        // Whether to enable knowledge graph enhancement. Default value: false.
        shared_ptr<bool> graphEnhance_ {};
        // Returns the top number of entities and relationship edges. Default value: 60.
        shared_ptr<QueryParams::GraphSearchArgs> graphSearchArgs_ {};
        // The dual-path retrieval algorithm. This parameter is empty by default, which specifies that scores of vector retrieval and full-text retrieval are directly compared and sorted together.
        // 
        // Valid values:
        // 
        // *   RRF: The reciprocal rank fusion (RRF) algorithm uses a constant k to control the fusion effect. For more information, see the description of the HybridSearchArgs parameter.
        // *   Weight: This algorithm uses the alpha parameter to specify the proportion of the vector search score and the full-text search score and then sorts by weight. For more information, see the description of the HybridSearchArgs parameter.
        // *   Cascaded: This algorithm performs first full-text retrieval and then vector retrieval.
        shared_ptr<string> hybridSearch_ {};
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
        Darabonba::Json hybridSearchArgs_ {};
        // The method that is used to create vector indexes. Valid values:
        // 
        // *   l2: Euclidean distance.
        // *   ip: Inner product distance.
        // *   cosine: Cosine similarity.
        shared_ptr<string> metrics_ {};
        // Offset for pagination.
        shared_ptr<int32_t> offset_ {};
        // The fields by which to sort the results. This parameter is empty by default.
        // 
        // The field must be either a metadata field or a default field in the table (e.g., id). Supported formats include:
        // 
        // Single field, such as chunk_id. Multiple fields that are separated by commas (,), such as block_id,chunk_id. Descending order is supported, such as block_id DESC,chunk_id DESC.
        shared_ptr<string> orderBy_ {};
        // The retrieval window. If you specify this parameter, the context of the retrieved result is added in the output. Format: List\\<A, B>. Valid values: -10<=A<=0 and 0<=B<=10.
        // 
        // > 
        // 
        // *   We recommend that you specify this parameter if the source document is segmented into large numbers of pieces, which may result in loss of contextual information during retrieval.
        // 
        // *   Perform re-ranking before windowing.
        shared_ptr<vector<int64_t>> recallWindow_ {};
        // The rerank factor. If you specify this parameter, the vector retrieval results are reranked once more. Valid values: 1\\<RerankFactor<=5.
        // 
        // > 
        // 
        // *   If the document is segmented into sparse parts, reranking is inefficient.
        // 
        // *   We recommend that the number of reranked results (the ceiling of TopK × RerankFactor) not exceed 50.
        shared_ptr<double> rerankFactor_ {};
        // The number of top results.
        shared_ptr<int64_t> topK_ {};
        // Specifies whether to use full-text retrieval (dual-path retrieval). The default value is false, which means only vector retrieval is used.
        shared_ptr<bool> useFullTextRetrieval_ {};
      };

      virtual bool empty() const override { return this->collection_ == nullptr
        && this->namespace_ == nullptr && this->namespacePassword_ == nullptr && this->queryParams_ == nullptr; };
      // collection Field Functions 
      bool hasCollection() const { return this->collection_ != nullptr;};
      void deleteCollection() { this->collection_ = nullptr;};
      inline string getCollection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
      inline SourceCollection& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline SourceCollection& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // namespacePassword Field Functions 
      bool hasNamespacePassword() const { return this->namespacePassword_ != nullptr;};
      void deleteNamespacePassword() { this->namespacePassword_ = nullptr;};
      inline string getNamespacePassword() const { DARABONBA_PTR_GET_DEFAULT(namespacePassword_, "") };
      inline SourceCollection& setNamespacePassword(string namespacePassword) { DARABONBA_PTR_SET_VALUE(namespacePassword_, namespacePassword) };


      // queryParams Field Functions 
      bool hasQueryParams() const { return this->queryParams_ != nullptr;};
      void deleteQueryParams() { this->queryParams_ = nullptr;};
      inline const SourceCollection::QueryParams & getQueryParams() const { DARABONBA_PTR_GET_CONST(queryParams_, SourceCollection::QueryParams) };
      inline SourceCollection::QueryParams getQueryParams() { DARABONBA_PTR_GET(queryParams_, SourceCollection::QueryParams) };
      inline SourceCollection& setQueryParams(const SourceCollection::QueryParams & queryParams) { DARABONBA_PTR_SET_VALUE(queryParams_, queryParams) };
      inline SourceCollection& setQueryParams(SourceCollection::QueryParams && queryParams) { DARABONBA_PTR_SET_RVALUE(queryParams_, queryParams) };


    protected:
      // The name of the document collection.
      // 
      // >  You can call the [CreateDocumentCollection](https://help.aliyun.com/document_detail/2618448.html) operation to create a document collection and call the [ListDocumentCollections](https://help.aliyun.com/document_detail/2618452.html) operation to query a list of document collections.
      // 
      // This parameter is required.
      shared_ptr<string> collection_ {};
      // The namespace.
      // 
      // >  You can call the [CreateNamespace](https://help.aliyun.com/document_detail/2401495.html) operation to create a namespace and call the [ListNamespaces](https://help.aliyun.com/document_detail/2401502.html) operation to query a list of namespaces.
      shared_ptr<string> namespace_ {};
      // The password of the namespace.
      // 
      // >  The value of this parameter is specified when you call the [CreateNamespace](https://help.aliyun.com/document_detail/2401495.html) operation.
      // 
      // This parameter is required.
      shared_ptr<string> namespacePassword_ {};
      // The condition that is used to filter the data to be updated. Specify this parameter in a format that is the same as the WHERE clause.
      shared_ptr<SourceCollection::QueryParams> queryParams_ {};
    };

    class MergeMethodArgs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MergeMethodArgs& obj) { 
        DARABONBA_PTR_TO_JSON(Rrf, rrf_);
        DARABONBA_PTR_TO_JSON(Weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, MergeMethodArgs& obj) { 
        DARABONBA_PTR_FROM_JSON(Rrf, rrf_);
        DARABONBA_PTR_FROM_JSON(Weight, weight_);
      };
      MergeMethodArgs() = default ;
      MergeMethodArgs(const MergeMethodArgs &) = default ;
      MergeMethodArgs(MergeMethodArgs &&) = default ;
      MergeMethodArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MergeMethodArgs() = default ;
      MergeMethodArgs& operator=(const MergeMethodArgs &) = default ;
      MergeMethodArgs& operator=(MergeMethodArgs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Weight : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Weight& obj) { 
          DARABONBA_PTR_TO_JSON(Weights, weights_);
        };
        friend void from_json(const Darabonba::Json& j, Weight& obj) { 
          DARABONBA_PTR_FROM_JSON(Weights, weights_);
        };
        Weight() = default ;
        Weight(const Weight &) = default ;
        Weight(Weight &&) = default ;
        Weight(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Weight() = default ;
        Weight& operator=(const Weight &) = default ;
        Weight& operator=(Weight &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->weights_ == nullptr; };
        // weights Field Functions 
        bool hasWeights() const { return this->weights_ != nullptr;};
        void deleteWeights() { this->weights_ = nullptr;};
        inline const vector<double> & getWeights() const { DARABONBA_PTR_GET_CONST(weights_, vector<double>) };
        inline vector<double> getWeights() { DARABONBA_PTR_GET(weights_, vector<double>) };
        inline Weight& setWeights(const vector<double> & weights) { DARABONBA_PTR_SET_VALUE(weights_, weights) };
        inline Weight& setWeights(vector<double> && weights) { DARABONBA_PTR_SET_RVALUE(weights_, weights) };


      protected:
        // An array of weights for each SourceCollection.
        shared_ptr<vector<double>> weights_ {};
      };

      class Rrf : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rrf& obj) { 
          DARABONBA_PTR_TO_JSON(K, k_);
        };
        friend void from_json(const Darabonba::Json& j, Rrf& obj) { 
          DARABONBA_PTR_FROM_JSON(K, k_);
        };
        Rrf() = default ;
        Rrf(const Rrf &) = default ;
        Rrf(Rrf &&) = default ;
        Rrf(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Rrf() = default ;
        Rrf& operator=(const Rrf &) = default ;
        Rrf& operator=(Rrf &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->k_ == nullptr; };
        // k Field Functions 
        bool hasK() const { return this->k_ != nullptr;};
        void deleteK() { this->k_ = nullptr;};
        inline int64_t getK() const { DARABONBA_PTR_GET_DEFAULT(k_, 0L) };
        inline Rrf& setK(int64_t k) { DARABONBA_PTR_SET_VALUE(k_, k) };


      protected:
        // The smoothing constant k in the formula to calculate the score: 1/(k + rank_i). The k constant must be a positive integer greater than 1.
        shared_ptr<int64_t> k_ {};
      };

      virtual bool empty() const override { return this->rrf_ == nullptr
        && this->weight_ == nullptr; };
      // rrf Field Functions 
      bool hasRrf() const { return this->rrf_ != nullptr;};
      void deleteRrf() { this->rrf_ = nullptr;};
      inline const MergeMethodArgs::Rrf & getRrf() const { DARABONBA_PTR_GET_CONST(rrf_, MergeMethodArgs::Rrf) };
      inline MergeMethodArgs::Rrf getRrf() { DARABONBA_PTR_GET(rrf_, MergeMethodArgs::Rrf) };
      inline MergeMethodArgs& setRrf(const MergeMethodArgs::Rrf & rrf) { DARABONBA_PTR_SET_VALUE(rrf_, rrf) };
      inline MergeMethodArgs& setRrf(MergeMethodArgs::Rrf && rrf) { DARABONBA_PTR_SET_RVALUE(rrf_, rrf) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline const MergeMethodArgs::Weight & getWeight() const { DARABONBA_PTR_GET_CONST(weight_, MergeMethodArgs::Weight) };
      inline MergeMethodArgs::Weight getWeight() { DARABONBA_PTR_GET(weight_, MergeMethodArgs::Weight) };
      inline MergeMethodArgs& setWeight(const MergeMethodArgs::Weight & weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };
      inline MergeMethodArgs& setWeight(MergeMethodArgs::Weight && weight) { DARABONBA_PTR_SET_RVALUE(weight_, weight) };


    protected:
      // The parameter that can be configured when the MergeMethod parameter is set to RRF.
      shared_ptr<MergeMethodArgs::Rrf> rrf_ {};
      // The parameter that you can configure when you set the MergeMethod parameter to Weight.
      shared_ptr<MergeMethodArgs::Weight> weight_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->DBInstanceId_ == nullptr && this->mergeMethod_ == nullptr && this->mergeMethodArgs_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->rerankFactor_ == nullptr && this->sourceCollection_ == nullptr && this->topK_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline QueryKnowledgeBasesContentRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline QueryKnowledgeBasesContentRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // mergeMethod Field Functions 
    bool hasMergeMethod() const { return this->mergeMethod_ != nullptr;};
    void deleteMergeMethod() { this->mergeMethod_ = nullptr;};
    inline string getMergeMethod() const { DARABONBA_PTR_GET_DEFAULT(mergeMethod_, "") };
    inline QueryKnowledgeBasesContentRequest& setMergeMethod(string mergeMethod) { DARABONBA_PTR_SET_VALUE(mergeMethod_, mergeMethod) };


    // mergeMethodArgs Field Functions 
    bool hasMergeMethodArgs() const { return this->mergeMethodArgs_ != nullptr;};
    void deleteMergeMethodArgs() { this->mergeMethodArgs_ = nullptr;};
    inline const QueryKnowledgeBasesContentRequest::MergeMethodArgs & getMergeMethodArgs() const { DARABONBA_PTR_GET_CONST(mergeMethodArgs_, QueryKnowledgeBasesContentRequest::MergeMethodArgs) };
    inline QueryKnowledgeBasesContentRequest::MergeMethodArgs getMergeMethodArgs() { DARABONBA_PTR_GET(mergeMethodArgs_, QueryKnowledgeBasesContentRequest::MergeMethodArgs) };
    inline QueryKnowledgeBasesContentRequest& setMergeMethodArgs(const QueryKnowledgeBasesContentRequest::MergeMethodArgs & mergeMethodArgs) { DARABONBA_PTR_SET_VALUE(mergeMethodArgs_, mergeMethodArgs) };
    inline QueryKnowledgeBasesContentRequest& setMergeMethodArgs(QueryKnowledgeBasesContentRequest::MergeMethodArgs && mergeMethodArgs) { DARABONBA_PTR_SET_RVALUE(mergeMethodArgs_, mergeMethodArgs) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryKnowledgeBasesContentRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryKnowledgeBasesContentRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rerankFactor Field Functions 
    bool hasRerankFactor() const { return this->rerankFactor_ != nullptr;};
    void deleteRerankFactor() { this->rerankFactor_ = nullptr;};
    inline double getRerankFactor() const { DARABONBA_PTR_GET_DEFAULT(rerankFactor_, 0.0) };
    inline QueryKnowledgeBasesContentRequest& setRerankFactor(double rerankFactor) { DARABONBA_PTR_SET_VALUE(rerankFactor_, rerankFactor) };


    // sourceCollection Field Functions 
    bool hasSourceCollection() const { return this->sourceCollection_ != nullptr;};
    void deleteSourceCollection() { this->sourceCollection_ = nullptr;};
    inline const vector<QueryKnowledgeBasesContentRequest::SourceCollection> & getSourceCollection() const { DARABONBA_PTR_GET_CONST(sourceCollection_, vector<QueryKnowledgeBasesContentRequest::SourceCollection>) };
    inline vector<QueryKnowledgeBasesContentRequest::SourceCollection> getSourceCollection() { DARABONBA_PTR_GET(sourceCollection_, vector<QueryKnowledgeBasesContentRequest::SourceCollection>) };
    inline QueryKnowledgeBasesContentRequest& setSourceCollection(const vector<QueryKnowledgeBasesContentRequest::SourceCollection> & sourceCollection) { DARABONBA_PTR_SET_VALUE(sourceCollection_, sourceCollection) };
    inline QueryKnowledgeBasesContentRequest& setSourceCollection(vector<QueryKnowledgeBasesContentRequest::SourceCollection> && sourceCollection) { DARABONBA_PTR_SET_RVALUE(sourceCollection_, sourceCollection) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int64_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0L) };
    inline QueryKnowledgeBasesContentRequest& setTopK(int64_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


  protected:
    // The text content for retrieval.
    // 
    // This parameter is required.
    shared_ptr<string> content_ {};
    // The cluster ID.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the information about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The method used to merge multiple knowledge bases. Default value: RRF. Valid values:
    // 
    // *   RRF
    // *   Weight
    shared_ptr<string> mergeMethod_ {};
    // The parameters of the merge method for each SourceCollection.
    shared_ptr<QueryKnowledgeBasesContentRequest::MergeMethodArgs> mergeMethodArgs_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The rerank factor. If you specify this parameter, the vector retrieval results are reranked once more. Valid values: 1\\<RerankFactor<=5.
    // 
    // > 
    // 
    // *   If the document is segmented into sparse parts, reranking is inefficient.
    // 
    // *   We recommend that the number of reranked results (the ceiling of TopK × RerankFactor) not exceed 50.
    shared_ptr<double> rerankFactor_ {};
    // The information about collections to retrieve from.
    // 
    // This parameter is required.
    shared_ptr<vector<QueryKnowledgeBasesContentRequest::SourceCollection>> sourceCollection_ {};
    // Set the number of top results to be returned after merging results from multiple path retrieval.
    shared_ptr<int64_t> topK_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
