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
      DARABONBA_PTR_TO_JSON(RerankModel, rerankModel_);
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
      DARABONBA_PTR_FROM_JSON(RerankModel, rerankModel_);
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
          DARABONBA_PTR_TO_JSON(RerankModel, rerankModel_);
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
          DARABONBA_PTR_FROM_JSON(RerankModel, rerankModel_);
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
        class RerankModel : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RerankModel& obj) { 
            DARABONBA_PTR_TO_JSON(Instruct, instruct_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(RerankMetadataFields, rerankMetadataFields_);
          };
          friend void from_json(const Darabonba::Json& j, RerankModel& obj) { 
            DARABONBA_PTR_FROM_JSON(Instruct, instruct_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(RerankMetadataFields, rerankMetadataFields_);
          };
          RerankModel() = default ;
          RerankModel(const RerankModel &) = default ;
          RerankModel(RerankModel &&) = default ;
          RerankModel(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RerankModel() = default ;
          RerankModel& operator=(const RerankModel &) = default ;
          RerankModel& operator=(RerankModel &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->instruct_ == nullptr
        && this->name_ == nullptr && this->rerankMetadataFields_ == nullptr; };
          // instruct Field Functions 
          bool hasInstruct() const { return this->instruct_ != nullptr;};
          void deleteInstruct() { this->instruct_ = nullptr;};
          inline string getInstruct() const { DARABONBA_PTR_GET_DEFAULT(instruct_, "") };
          inline RerankModel& setInstruct(string instruct) { DARABONBA_PTR_SET_VALUE(instruct_, instruct) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline RerankModel& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // rerankMetadataFields Field Functions 
          bool hasRerankMetadataFields() const { return this->rerankMetadataFields_ != nullptr;};
          void deleteRerankMetadataFields() { this->rerankMetadataFields_ = nullptr;};
          inline string getRerankMetadataFields() const { DARABONBA_PTR_GET_DEFAULT(rerankMetadataFields_, "") };
          inline RerankModel& setRerankMetadataFields(string rerankMetadataFields) { DARABONBA_PTR_SET_VALUE(rerankMetadataFields_, rerankMetadataFields) };


        protected:
          // This parameter can be set when RerankModel.Name is set to qwen3-rerank. Specifies a custom ranking task type description that guides the model to adopt different ranking strategies.
          shared_ptr<string> instruct_ {};
          // The name of the reranking model. Valid values: qwen3-rerank, gte-rerank-v2.
          shared_ptr<string> name_ {};
          shared_ptr<string> rerankMetadataFields_ {};
        };

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
          // The number of top entities and relationship edges to return. Default value: 60.
          shared_ptr<int64_t> graphTopK_ {};
        };

        virtual bool empty() const override { return this->filter_ == nullptr
        && this->graphEnhance_ == nullptr && this->graphSearchArgs_ == nullptr && this->hybridSearch_ == nullptr && this->hybridSearchArgs_ == nullptr && this->metrics_ == nullptr
        && this->offset_ == nullptr && this->orderBy_ == nullptr && this->recallWindow_ == nullptr && this->rerankFactor_ == nullptr && this->rerankModel_ == nullptr
        && this->topK_ == nullptr && this->useFullTextRetrieval_ == nullptr; };
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


        // rerankModel Field Functions 
        bool hasRerankModel() const { return this->rerankModel_ != nullptr;};
        void deleteRerankModel() { this->rerankModel_ = nullptr;};
        inline const QueryParams::RerankModel & getRerankModel() const { DARABONBA_PTR_GET_CONST(rerankModel_, QueryParams::RerankModel) };
        inline QueryParams::RerankModel getRerankModel() { DARABONBA_PTR_GET(rerankModel_, QueryParams::RerankModel) };
        inline QueryParams& setRerankModel(const QueryParams::RerankModel & rerankModel) { DARABONBA_PTR_SET_VALUE(rerankModel_, rerankModel) };
        inline QueryParams& setRerankModel(QueryParams::RerankModel && rerankModel) { DARABONBA_PTR_SET_RVALUE(rerankModel_, rerankModel) };


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
        // The filter conditions for the data to query, in SQL WHERE clause format. This is an expression that returns a Boolean value (true or false). The conditions can be simple comparison operators such as equal to (=), not equal to (<> or !=), greater than (>), less than (<), greater than or equal to (>=), and less than or equal to (<=). They can also be more complex expressions combined with logical operators (AND, OR, NOT), as well as conditions that use keywords such as IN, BETWEEN, and LIKE.
        // 
        // > 
        // > - For detailed syntax, refer to: https://www.postgresqltutorial.com/postgresql-tutorial/postgresql-where/.
        shared_ptr<string> filter_ {};
        // Specifies whether to enable knowledge graph enhancement. Default value: false.
        shared_ptr<bool> graphEnhance_ {};
        // The number of top entities and relationship edges to return. Default value: 60.
        shared_ptr<QueryParams::GraphSearchArgs> graphSearchArgs_ {};
        // The multi-channel recall algorithm. Default value: empty (the scores from dense vectors and full-text retrieval are directly compared and sorted).
        // 
        // Valid values:
        // 
        // - RRF: reciprocal rank fusion. A parameter k controls the fusion effect. For more information, see the HybridSearchArgs configuration.
        // - Weight: weighted ranking. Parameters control the score weights of vector retrieval and full-text retrieval before sorting. For more information, see the HybridSearchArgs configuration.
        // - Cascaded: full-text retrieval is performed first, followed by vector retrieval on the full-text results.
        shared_ptr<string> hybridSearch_ {};
        // The algorithm parameters for multi-channel recall. RRF and Weight are supported. HybridPathsSetting specifies the recall paths: dense vectors (dense), sparse vectors (sparse), and full-text retrieval (fulltext). If this value is empty, dense vectors (dense) and full-text retrieval (fulltext) are used by default.
        // 
        // - RRF: specifies the k constant in the scoring algorithm `1/(k+rank_i)`. The value must be a positive integer greater than 1. Format:
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
        //    - Dual-path recall (without specifying HybridPathsSetting, only specifying alpha):
        //       - Formula: alpha * dense_score + (1-alpha) * fulltext_score. The alpha parameter specifies the score weight between dense vectors and full-text retrieval. Valid values: 0 to 1, where 0 indicates full-text retrieval only and 1 indicates dense vectors only:
        // ```
        // { 
        //    "Weight": {
        //     "alpha": 0.5
        //    }
        // }
        // ```
        //   - Three-path recall pattern:
        //      - Formula: normalized_dense * dense_score + normalized_sparse * sparse_score + normalized_fulltext * fulltext_score. dense, sparse, and fulltext represent the weights for dense vectors, sparse vectors, and full-text retrieval respectively. Valid values: greater than or equal to 0. The system automatically performs normalization on the weights to 0 to 1 (normalized_x = x / (dense + sparse + fulltext)).
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
        Darabonba::Json hybridSearchArgs_ {};
        // The method used to build the vector index. Valid values:
        // - l2: Euclidean distance.
        // - ip: inner product distance.
        // - cosine: cosine similarity.
        shared_ptr<string> metrics_ {};
        // The offset for paging query.
        shared_ptr<int32_t> offset_ {};
        // The field used for sorting. Default value: empty.
        // 
        // The field must belong to metadata or a default field in the table, such as id. Supported formats:
        // 
        // A single field, such as chunk_id.
        // Multiple fields separated by commas, such as block_id, chunk_id.
        // Descending order is supported, such as block_id DESC, chunk_id DESC.
        shared_ptr<string> orderBy_ {};
        // The recall window. If this value is not empty, the context of the retrieval results is included. The format is a two-element array: List<A, B>, where -10 <= A <= 0 and 0 <= B <= 10.
        // > - Use this parameter when document chunks are too small and retrieval may lose context information.
        // > - Reranking takes priority over windowing. Reranking is performed first, followed by windowing.
        shared_ptr<vector<int64_t>> recallWindow_ {};
        // The reranking factor. If this parameter is not empty, the vector retrieval results are reranked. Valid values: 1 < RerankFactor <= 5.
        // > - Reranking is slow when document chunks are sparse.
        // > - The recommended reranking count (TopK × Factor, rounded up) should not exceed 50.
        shared_ptr<double> rerankFactor_ {};
        // The reranking model parameters.
        shared_ptr<QueryParams::RerankModel> rerankModel_ {};
        // The number of top results to return.
        shared_ptr<int64_t> topK_ {};
        // Specifies whether to use full-text retrieval (dual-path recall). Default value: false, which indicates that only vector retrieval is used.
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
      // > The document collection is created by calling the [CreateDocumentCollection](https://help.aliyun.com/document_detail/2618448.html) operation. You can call the [ListDocumentCollections](https://help.aliyun.com/document_detail/2618452.html) operation to view existing document collections.
      // 
      // This parameter is required.
      shared_ptr<string> collection_ {};
      // The namespace.
      // 
      // > You can create a namespace by calling the [CreateNamespace](https://help.aliyun.com/document_detail/2401495.html) operation and view the list by calling the [ListNamespaces](https://help.aliyun.com/document_detail/2401502.html) operation.
      shared_ptr<string> namespace_ {};
      // The password of the namespace.
      // 
      // > This value is specified by the [CreateNamespace](https://help.aliyun.com/document_detail/2401495.html) operation.
      // 
      // This parameter is required.
      shared_ptr<string> namespacePassword_ {};
      // The filter conditions for the data to query, in SQL WHERE clause format.
      shared_ptr<SourceCollection::QueryParams> queryParams_ {};
    };

    class RerankModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RerankModel& obj) { 
        DARABONBA_PTR_TO_JSON(Instruct, instruct_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, RerankModel& obj) { 
        DARABONBA_PTR_FROM_JSON(Instruct, instruct_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      RerankModel() = default ;
      RerankModel(const RerankModel &) = default ;
      RerankModel(RerankModel &&) = default ;
      RerankModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RerankModel() = default ;
      RerankModel& operator=(const RerankModel &) = default ;
      RerankModel& operator=(RerankModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instruct_ == nullptr
        && this->name_ == nullptr; };
      // instruct Field Functions 
      bool hasInstruct() const { return this->instruct_ != nullptr;};
      void deleteInstruct() { this->instruct_ = nullptr;};
      inline string getInstruct() const { DARABONBA_PTR_GET_DEFAULT(instruct_, "") };
      inline RerankModel& setInstruct(string instruct) { DARABONBA_PTR_SET_VALUE(instruct_, instruct) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline RerankModel& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // This parameter can be set when RerankModel.Name is set to qwen3-rerank. Specifies a custom ranking task type description that guides the model to adopt different ranking strategies.
      shared_ptr<string> instruct_ {};
      // The name of the reranking model. Valid values: qwen3-rerank, gte-rerank-v2.
      shared_ptr<string> name_ {};
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
        // The weight array for each SourceCollection.
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
        // The k constant in the scoring algorithm `1/(k+rank_i)`. The value must be a positive integer greater than 1.
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
      // The configurable parameters when MergeMethod is set to RRF.
      shared_ptr<MergeMethodArgs::Rrf> rrf_ {};
      // The configurable parameters when MergeMethod is set to Weight.
      shared_ptr<MergeMethodArgs::Weight> weight_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->DBInstanceId_ == nullptr && this->mergeMethod_ == nullptr && this->mergeMethodArgs_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->rerankFactor_ == nullptr && this->rerankModel_ == nullptr && this->sourceCollection_ == nullptr && this->topK_ == nullptr; };
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


    // rerankModel Field Functions 
    bool hasRerankModel() const { return this->rerankModel_ != nullptr;};
    void deleteRerankModel() { this->rerankModel_ = nullptr;};
    inline const QueryKnowledgeBasesContentRequest::RerankModel & getRerankModel() const { DARABONBA_PTR_GET_CONST(rerankModel_, QueryKnowledgeBasesContentRequest::RerankModel) };
    inline QueryKnowledgeBasesContentRequest::RerankModel getRerankModel() { DARABONBA_PTR_GET(rerankModel_, QueryKnowledgeBasesContentRequest::RerankModel) };
    inline QueryKnowledgeBasesContentRequest& setRerankModel(const QueryKnowledgeBasesContentRequest::RerankModel & rerankModel) { DARABONBA_PTR_SET_VALUE(rerankModel_, rerankModel) };
    inline QueryKnowledgeBasesContentRequest& setRerankModel(QueryKnowledgeBasesContentRequest::RerankModel && rerankModel) { DARABONBA_PTR_SET_RVALUE(rerankModel_, rerankModel) };


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
    // The text content used for retrieval.
    // 
    // This parameter is required.
    shared_ptr<string> content_ {};
    // The instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the details of all AnalyticDB for PostgreSQL instances in a region, including instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The method used to merge results from multiple knowledge bases. Default value: RRF. Valid values:
    // - RRF
    // - Weight.
    shared_ptr<string> mergeMethod_ {};
    // The parameters for the merge method of each SourceCollection.
    shared_ptr<QueryKnowledgeBasesContentRequest::MergeMethodArgs> mergeMethodArgs_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The reranking factor. If this parameter is not empty, the vector retrieval results are reranked. Valid values: 1 < RerankFactor <= 5.
    // > - Reranking is slow when document chunks are sparse.
    // > - The recommended reranking count (TopK × Factor, rounded up) should not exceed 50.
    shared_ptr<double> rerankFactor_ {};
    // The reranking model parameters for performing an additional reranking on the overall results after multi-channel merging.
    shared_ptr<QueryKnowledgeBasesContentRequest::RerankModel> rerankModel_ {};
    // The information about the multiple collections to retrieve.
    // 
    // This parameter is required.
    shared_ptr<vector<QueryKnowledgeBasesContentRequest::SourceCollection>> sourceCollection_ {};
    // The number of top results to return after multi-channel recall merging.
    shared_ptr<int64_t> topK_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
