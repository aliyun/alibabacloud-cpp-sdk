// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRIEVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RETRIEVEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class RetrieveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetrieveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DenseSimilarityTopK, denseSimilarityTopK_);
      DARABONBA_PTR_TO_JSON(EnableReranking, enableReranking_);
      DARABONBA_PTR_TO_JSON(EnableRewrite, enableRewrite_);
      DARABONBA_PTR_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(IndexId, indexId_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(QueryHistory, queryHistory_);
      DARABONBA_PTR_TO_JSON(Rerank, rerank_);
      DARABONBA_PTR_TO_JSON(RerankMinScore, rerankMinScore_);
      DARABONBA_PTR_TO_JSON(RerankTopN, rerankTopN_);
      DARABONBA_PTR_TO_JSON(Rewrite, rewrite_);
      DARABONBA_PTR_TO_JSON(SaveRetrieverHistory, saveRetrieverHistory_);
      DARABONBA_PTR_TO_JSON(SearchFilters, searchFilters_);
      DARABONBA_PTR_TO_JSON(SparseSimilarityTopK, sparseSimilarityTopK_);
    };
    friend void from_json(const Darabonba::Json& j, RetrieveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DenseSimilarityTopK, denseSimilarityTopK_);
      DARABONBA_PTR_FROM_JSON(EnableReranking, enableReranking_);
      DARABONBA_PTR_FROM_JSON(EnableRewrite, enableRewrite_);
      DARABONBA_PTR_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(IndexId, indexId_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(QueryHistory, queryHistory_);
      DARABONBA_PTR_FROM_JSON(Rerank, rerank_);
      DARABONBA_PTR_FROM_JSON(RerankMinScore, rerankMinScore_);
      DARABONBA_PTR_FROM_JSON(RerankTopN, rerankTopN_);
      DARABONBA_PTR_FROM_JSON(Rewrite, rewrite_);
      DARABONBA_PTR_FROM_JSON(SaveRetrieverHistory, saveRetrieverHistory_);
      DARABONBA_PTR_FROM_JSON(SearchFilters, searchFilters_);
      DARABONBA_PTR_FROM_JSON(SparseSimilarityTopK, sparseSimilarityTopK_);
    };
    RetrieveRequest() = default ;
    RetrieveRequest(const RetrieveRequest &) = default ;
    RetrieveRequest(RetrieveRequest &&) = default ;
    RetrieveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetrieveRequest() = default ;
    RetrieveRequest& operator=(const RetrieveRequest &) = default ;
    RetrieveRequest& operator=(RetrieveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rewrite : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rewrite& obj) { 
        DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      };
      friend void from_json(const Darabonba::Json& j, Rewrite& obj) { 
        DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      };
      Rewrite() = default ;
      Rewrite(const Rewrite &) = default ;
      Rewrite(Rewrite &&) = default ;
      Rewrite(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rewrite() = default ;
      Rewrite& operator=(const Rewrite &) = default ;
      Rewrite& operator=(Rewrite &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->modelName_ == nullptr; };
      // modelName Field Functions 
      bool hasModelName() const { return this->modelName_ != nullptr;};
      void deleteModelName() { this->modelName_ = nullptr;};
      inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
      inline Rewrite& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    protected:
      // Specifies the model for conversational query rewriting, which automatically rewrites the original query based on the conversation context to improve retrieval results. Valid value:
      // 
      // - `conv-rewrite-qwen-1.8b`: The only model currently supported for this feature.
      // 
      // If this parameter is not specified, `conv-rewrite-qwen-1.8b` is used by default.
      shared_ptr<string> modelName_ {};
    };

    class Rerank : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rerank& obj) { 
        DARABONBA_PTR_TO_JSON(ModelName, modelName_);
        DARABONBA_PTR_TO_JSON(RerankInstruct, rerankInstruct_);
        DARABONBA_PTR_TO_JSON(RerankMode, rerankMode_);
      };
      friend void from_json(const Darabonba::Json& j, Rerank& obj) { 
        DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
        DARABONBA_PTR_FROM_JSON(RerankInstruct, rerankInstruct_);
        DARABONBA_PTR_FROM_JSON(RerankMode, rerankMode_);
      };
      Rerank() = default ;
      Rerank(const Rerank &) = default ;
      Rerank(Rerank &&) = default ;
      Rerank(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rerank() = default ;
      Rerank& operator=(const Rerank &) = default ;
      Rerank& operator=(Rerank &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->modelName_ == nullptr
        && this->rerankInstruct_ == nullptr && this->rerankMode_ == nullptr; };
      // modelName Field Functions 
      bool hasModelName() const { return this->modelName_ != nullptr;};
      void deleteModelName() { this->modelName_ = nullptr;};
      inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
      inline Rerank& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


      // rerankInstruct Field Functions 
      bool hasRerankInstruct() const { return this->rerankInstruct_ != nullptr;};
      void deleteRerankInstruct() { this->rerankInstruct_ = nullptr;};
      inline string getRerankInstruct() const { DARABONBA_PTR_GET_DEFAULT(rerankInstruct_, "") };
      inline Rerank& setRerankInstruct(string rerankInstruct) { DARABONBA_PTR_SET_VALUE(rerankInstruct_, rerankInstruct) };


      // rerankMode Field Functions 
      bool hasRerankMode() const { return this->rerankMode_ != nullptr;};
      void deleteRerankMode() { this->rerankMode_ = nullptr;};
      inline string getRerankMode() const { DARABONBA_PTR_GET_DEFAULT(rerankMode_, "") };
      inline Rerank& setRerankMode(string rerankMode) { DARABONBA_PTR_SET_VALUE(rerankMode_, rerankMode) };


    protected:
      // The reranking model to use. Specifying a model here overrides the default model selected when the knowledge base was created. Valid values:
      // 
      // <props="china">
      // 
      // - `qwen3-rerank-hybrid`: Performs reranking by using the qwen3-rerank (hybrid) model.
      // 
      // - `qwen3-rerank`: Performs reranking by using the qwen3-rerank model.
      // 
      // - `gte-rerank-hybrid`: Performs reranking by using the gte-rerank (hybrid) model.
      // 
      // - `gte-rerank`: Performs reranking by using the gte-rerank model.
      // 
      // 
      // 
      // <props="intl">
      // 
      // - `gte-rerank-hybrid`: Performs reranking by using the gte-rerank (hybrid) model.
      // 
      // - `gte-rerank`: Performs reranking by using the gte-rerank model.
      // 
      // 
      // 
      // If you do not specify this parameter, the model configured for the knowledge base is used.
      // 
      // <props="china">
      // 
      // > Use `qwen3-rerank` for semantic ranking only. We recommend `qwen3-rerank-hybrid` if you require both semantic ranking and text matching features for higher relevance.
      // 
      // 
      // 
      // <props="intl">
      // 
      // > Use `gte-rerank` for semantic ranking only. We recommend `gte-rerank-hybrid` if you require both semantic ranking and text matching features for higher relevance.
      // 
      // 
      // 
      // <props="china">
      // 
      // > The `gte-rerank-hybrid` and `gte-rerank` models are no longer updated and are not recommended for use.
      shared_ptr<string> modelName_ {};
      // <props="intl">
      // 
      // This parameter is not yet available. Do not specify a value for it.
      // 
      // 
      // 
      // <props="china">
      // 
      // A natural language instruction to fine-tune the behavior of the reranking model.
      // 
      // >Notice: 
      // 
      // This parameter takes effect only when `RerankMode` is set to `custom`.
      shared_ptr<string> rerankInstruct_ {};
      // <props="china">
      // 
      // Specifies the instruction intervention mode for the reranking model. This mode determines the model\\"s scoring preference.
      // 
      // **Valid values:**
      // 
      // - `qa`: (Default) Q\\&A mode. The model assigns higher scores to candidates that directly answer the query. Recommended for Q\\&A scenarios.
      // 
      // - `similar`: Similarity mode. The model assigns higher scores to candidates with high content similarity to the query. Recommended for match-based retrieval scenarios.
      // 
      // - `custom`: Custom mode. The model\\"s ranking behavior is determined by the instructions in the `RerankInstruct` parameter.
      // 
      // 
      // 
      // <props="intl">
      // 
      // This parameter is not yet available. Do not specify a value for it.
      shared_ptr<string> rerankMode_ {};
    };

    class QueryHistory : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QueryHistory& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(role, role_);
      };
      friend void from_json(const Darabonba::Json& j, QueryHistory& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(role, role_);
      };
      QueryHistory() = default ;
      QueryHistory(const QueryHistory &) = default ;
      QueryHistory(QueryHistory &&) = default ;
      QueryHistory(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QueryHistory() = default ;
      QueryHistory& operator=(const QueryHistory &) = default ;
      QueryHistory& operator=(QueryHistory &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->role_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline QueryHistory& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline QueryHistory& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    protected:
      // The content of the message for the specified `role`.
      shared_ptr<string> content_ {};
      // The role of the entity that sent the message.
      // 
      // Valid values:
      // 
      // - `user`: Indicates that the `content` is from the end user.
      // 
      // - `assistant`: Indicates that the `content` is a response from the Model Studio application.
      shared_ptr<string> role_ {};
    };

    class Extra : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Extra& obj) { 
        DARABONBA_PTR_TO_JSON(uniqueId, uniqueId_);
      };
      friend void from_json(const Darabonba::Json& j, Extra& obj) { 
        DARABONBA_PTR_FROM_JSON(uniqueId, uniqueId_);
      };
      Extra() = default ;
      Extra(const Extra &) = default ;
      Extra(Extra &&) = default ;
      Extra(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Extra() = default ;
      Extra& operator=(const Extra &) = default ;
      Extra& operator=(Extra &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->uniqueId_ == nullptr; };
      // uniqueId Field Functions 
      bool hasUniqueId() const { return this->uniqueId_ != nullptr;};
      void deleteUniqueId() { this->uniqueId_ = nullptr;};
      inline string getUniqueId() const { DARABONBA_PTR_GET_DEFAULT(uniqueId_, "") };
      inline Extra& setUniqueId(string uniqueId) { DARABONBA_PTR_SET_VALUE(uniqueId_, uniqueId) };


    protected:
      shared_ptr<string> uniqueId_ {};
    };

    virtual bool empty() const override { return this->denseSimilarityTopK_ == nullptr
        && this->enableReranking_ == nullptr && this->enableRewrite_ == nullptr && this->extra_ == nullptr && this->images_ == nullptr && this->indexId_ == nullptr
        && this->query_ == nullptr && this->queryHistory_ == nullptr && this->rerank_ == nullptr && this->rerankMinScore_ == nullptr && this->rerankTopN_ == nullptr
        && this->rewrite_ == nullptr && this->saveRetrieverHistory_ == nullptr && this->searchFilters_ == nullptr && this->sparseSimilarityTopK_ == nullptr; };
    // denseSimilarityTopK Field Functions 
    bool hasDenseSimilarityTopK() const { return this->denseSimilarityTopK_ != nullptr;};
    void deleteDenseSimilarityTopK() { this->denseSimilarityTopK_ = nullptr;};
    inline int32_t getDenseSimilarityTopK() const { DARABONBA_PTR_GET_DEFAULT(denseSimilarityTopK_, 0) };
    inline RetrieveRequest& setDenseSimilarityTopK(int32_t denseSimilarityTopK) { DARABONBA_PTR_SET_VALUE(denseSimilarityTopK_, denseSimilarityTopK) };


    // enableReranking Field Functions 
    bool hasEnableReranking() const { return this->enableReranking_ != nullptr;};
    void deleteEnableReranking() { this->enableReranking_ = nullptr;};
    inline bool getEnableReranking() const { DARABONBA_PTR_GET_DEFAULT(enableReranking_, false) };
    inline RetrieveRequest& setEnableReranking(bool enableReranking) { DARABONBA_PTR_SET_VALUE(enableReranking_, enableReranking) };


    // enableRewrite Field Functions 
    bool hasEnableRewrite() const { return this->enableRewrite_ != nullptr;};
    void deleteEnableRewrite() { this->enableRewrite_ = nullptr;};
    inline bool getEnableRewrite() const { DARABONBA_PTR_GET_DEFAULT(enableRewrite_, false) };
    inline RetrieveRequest& setEnableRewrite(bool enableRewrite) { DARABONBA_PTR_SET_VALUE(enableRewrite_, enableRewrite) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline const RetrieveRequest::Extra & getExtra() const { DARABONBA_PTR_GET_CONST(extra_, RetrieveRequest::Extra) };
    inline RetrieveRequest::Extra getExtra() { DARABONBA_PTR_GET(extra_, RetrieveRequest::Extra) };
    inline RetrieveRequest& setExtra(const RetrieveRequest::Extra & extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };
    inline RetrieveRequest& setExtra(RetrieveRequest::Extra && extra) { DARABONBA_PTR_SET_RVALUE(extra_, extra) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<string> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<string>) };
    inline vector<string> getImages() { DARABONBA_PTR_GET(images_, vector<string>) };
    inline RetrieveRequest& setImages(const vector<string> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline RetrieveRequest& setImages(vector<string> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // indexId Field Functions 
    bool hasIndexId() const { return this->indexId_ != nullptr;};
    void deleteIndexId() { this->indexId_ = nullptr;};
    inline string getIndexId() const { DARABONBA_PTR_GET_DEFAULT(indexId_, "") };
    inline RetrieveRequest& setIndexId(string indexId) { DARABONBA_PTR_SET_VALUE(indexId_, indexId) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline RetrieveRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // queryHistory Field Functions 
    bool hasQueryHistory() const { return this->queryHistory_ != nullptr;};
    void deleteQueryHistory() { this->queryHistory_ = nullptr;};
    inline const vector<RetrieveRequest::QueryHistory> & getQueryHistory() const { DARABONBA_PTR_GET_CONST(queryHistory_, vector<RetrieveRequest::QueryHistory>) };
    inline vector<RetrieveRequest::QueryHistory> getQueryHistory() { DARABONBA_PTR_GET(queryHistory_, vector<RetrieveRequest::QueryHistory>) };
    inline RetrieveRequest& setQueryHistory(const vector<RetrieveRequest::QueryHistory> & queryHistory) { DARABONBA_PTR_SET_VALUE(queryHistory_, queryHistory) };
    inline RetrieveRequest& setQueryHistory(vector<RetrieveRequest::QueryHistory> && queryHistory) { DARABONBA_PTR_SET_RVALUE(queryHistory_, queryHistory) };


    // rerank Field Functions 
    bool hasRerank() const { return this->rerank_ != nullptr;};
    void deleteRerank() { this->rerank_ = nullptr;};
    inline const vector<RetrieveRequest::Rerank> & getRerank() const { DARABONBA_PTR_GET_CONST(rerank_, vector<RetrieveRequest::Rerank>) };
    inline vector<RetrieveRequest::Rerank> getRerank() { DARABONBA_PTR_GET(rerank_, vector<RetrieveRequest::Rerank>) };
    inline RetrieveRequest& setRerank(const vector<RetrieveRequest::Rerank> & rerank) { DARABONBA_PTR_SET_VALUE(rerank_, rerank) };
    inline RetrieveRequest& setRerank(vector<RetrieveRequest::Rerank> && rerank) { DARABONBA_PTR_SET_RVALUE(rerank_, rerank) };


    // rerankMinScore Field Functions 
    bool hasRerankMinScore() const { return this->rerankMinScore_ != nullptr;};
    void deleteRerankMinScore() { this->rerankMinScore_ = nullptr;};
    inline float getRerankMinScore() const { DARABONBA_PTR_GET_DEFAULT(rerankMinScore_, 0.0) };
    inline RetrieveRequest& setRerankMinScore(float rerankMinScore) { DARABONBA_PTR_SET_VALUE(rerankMinScore_, rerankMinScore) };


    // rerankTopN Field Functions 
    bool hasRerankTopN() const { return this->rerankTopN_ != nullptr;};
    void deleteRerankTopN() { this->rerankTopN_ = nullptr;};
    inline int32_t getRerankTopN() const { DARABONBA_PTR_GET_DEFAULT(rerankTopN_, 0) };
    inline RetrieveRequest& setRerankTopN(int32_t rerankTopN) { DARABONBA_PTR_SET_VALUE(rerankTopN_, rerankTopN) };


    // rewrite Field Functions 
    bool hasRewrite() const { return this->rewrite_ != nullptr;};
    void deleteRewrite() { this->rewrite_ = nullptr;};
    inline const vector<RetrieveRequest::Rewrite> & getRewrite() const { DARABONBA_PTR_GET_CONST(rewrite_, vector<RetrieveRequest::Rewrite>) };
    inline vector<RetrieveRequest::Rewrite> getRewrite() { DARABONBA_PTR_GET(rewrite_, vector<RetrieveRequest::Rewrite>) };
    inline RetrieveRequest& setRewrite(const vector<RetrieveRequest::Rewrite> & rewrite) { DARABONBA_PTR_SET_VALUE(rewrite_, rewrite) };
    inline RetrieveRequest& setRewrite(vector<RetrieveRequest::Rewrite> && rewrite) { DARABONBA_PTR_SET_RVALUE(rewrite_, rewrite) };


    // saveRetrieverHistory Field Functions 
    bool hasSaveRetrieverHistory() const { return this->saveRetrieverHistory_ != nullptr;};
    void deleteSaveRetrieverHistory() { this->saveRetrieverHistory_ = nullptr;};
    inline bool getSaveRetrieverHistory() const { DARABONBA_PTR_GET_DEFAULT(saveRetrieverHistory_, false) };
    inline RetrieveRequest& setSaveRetrieverHistory(bool saveRetrieverHistory) { DARABONBA_PTR_SET_VALUE(saveRetrieverHistory_, saveRetrieverHistory) };


    // searchFilters Field Functions 
    bool hasSearchFilters() const { return this->searchFilters_ != nullptr;};
    void deleteSearchFilters() { this->searchFilters_ = nullptr;};
    inline const vector<map<string, string>> & getSearchFilters() const { DARABONBA_PTR_GET_CONST(searchFilters_, vector<map<string, string>>) };
    inline vector<map<string, string>> getSearchFilters() { DARABONBA_PTR_GET(searchFilters_, vector<map<string, string>>) };
    inline RetrieveRequest& setSearchFilters(const vector<map<string, string>> & searchFilters) { DARABONBA_PTR_SET_VALUE(searchFilters_, searchFilters) };
    inline RetrieveRequest& setSearchFilters(vector<map<string, string>> && searchFilters) { DARABONBA_PTR_SET_RVALUE(searchFilters_, searchFilters) };


    // sparseSimilarityTopK Field Functions 
    bool hasSparseSimilarityTopK() const { return this->sparseSimilarityTopK_ != nullptr;};
    void deleteSparseSimilarityTopK() { this->sparseSimilarityTopK_ = nullptr;};
    inline int32_t getSparseSimilarityTopK() const { DARABONBA_PTR_GET_DEFAULT(sparseSimilarityTopK_, 0) };
    inline RetrieveRequest& setSparseSimilarityTopK(int32_t sparseSimilarityTopK) { DARABONBA_PTR_SET_VALUE(sparseSimilarityTopK_, sparseSimilarityTopK) };


  protected:
    // The number of top-K similar text chunks to retrieve using vector retrieval. This is achieved by generating a vector representation of the query and searching the knowledge base for the K text chunks with the most similar vectors. The value must be an integer from 0 to 100. The sum of `DenseSimilarityTopK` and `SparseSimilarityTopK` must not exceed 200.
    // 
    // Default value: 100.
    shared_ptr<int32_t> denseSimilarityTopK_ {};
    // Specifies whether to enable reranking. For more information, see [Knowledge base](https://help.aliyun.com/document_detail/2807740.html). Valid values:
    // 
    // - `true`: Enables reranking.
    // 
    // - `false`: Disables reranking.
    // 
    // Default value: `true`.
    shared_ptr<bool> enableReranking_ {};
    // Specifies whether to enable <props="china">[conversational query rewriting](https://help.aliyun.com/model-studio/use-cases/rag-optimization#b7031e2ad6cji)<props="intl">[conversational query rewriting](https://www.alibabacloud.com/help/model-studio/use-cases/rag-optimization#b7031e2ad6cji).
    // Valid values:
    // 
    // - `true`: Enables conversational query rewriting.
    // 
    // - `false`: Disables conversational query rewriting.
    // 
    // Default value: `false`.
    shared_ptr<bool> enableRewrite_ {};
    shared_ptr<RetrieveRequest::Extra> extra_ {};
    // The URLs of images to include in the query.
    shared_ptr<vector<string>> images_ {};
    // The ID of the knowledge base. This is the `Data.Id` value returned by the `CreateIndex` operation.
    // 
    // > - Ensure the specified knowledge base exists and has not been deleted.
    // 
    // This parameter is required.
    shared_ptr<string> indexId_ {};
    // The query, which is the original user prompt. There are no limits on the length of the query.
    shared_ptr<string> query_ {};
    // The conversation history, used for <props="china">[conversational query rewriting](https://help.aliyun.com/model-studio/use-cases/rag-optimization#b7031e2ad6cji)<props="intl">[conversational query rewriting](https://www.alibabacloud.com/help/model-studio/use-cases/rag-optimization#b7031e2ad6cji). This parameter is effective only when `EnableRewrite` is set to `true`.
    shared_ptr<vector<RetrieveRequest::QueryHistory>> queryHistory_ {};
    // The reranking configurations.
    shared_ptr<vector<RetrieveRequest::Rerank>> rerank_ {};
    // The similarity threshold for reranking. Only text chunks with a similarity score greater than this value are returned. The value must be between 0.01 and 1.00, inclusive. This parameter overrides the similarity threshold setting of the knowledge base.
    // 
    // If not specified, the threshold configured for the knowledge base is used.
    shared_ptr<float> rerankMinScore_ {};
    // The number of top-ranked text chunks to return after reranking. The value must be an integer from 1 to 20. Default value: 5.
    shared_ptr<int32_t> rerankTopN_ {};
    // Configuration for conversational query rewriting.
    shared_ptr<vector<RetrieveRequest::Rewrite>> rewrite_ {};
    // Specifies whether to save the retrieval history for testing purposes. Valid values:
    // 
    // - `true`: Saves the retrieval history.
    // 
    // - `false`: Does not save the retrieval history.
    // 
    // Default value: `false`.
    shared_ptr<bool> saveRetrieverHistory_ {};
    // Specifies custom retrieval conditions, such as tags, to filter semantic retrieval results and exclude irrelevant information.
    // The filtering logic is applied only when the `is_displayed_chunk_content` parameter is set to `true`. For more information, see [SearchFilters for a knowledge base](https://help.aliyun.com/document_detail/2869641.html).
    shared_ptr<vector<map<string, string>>> searchFilters_ {};
    // The number of top-K text chunks to retrieve using keyword retrieval. This feature finds text chunks in the knowledge base that exactly match the keywords in the query. It helps filter out irrelevant text chunks and provide more accurate results.
    // The value must be an integer from 0 to 100.
    // The sum of `DenseSimilarityTopK` and `SparseSimilarityTopK` must not exceed 200.
    // 
    // Default value: 100.
    shared_ptr<int32_t> sparseSimilarityTopK_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
