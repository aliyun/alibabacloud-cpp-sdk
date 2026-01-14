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
      // Conversation rewriting model name. The query rewriting model automatically adjusts the original prompt based on the context to improve retrieval performance. Valid value:
      // 
      // *   conv-rewrite-qwen-1.8b
      // 
      // By default, this parameter is left empty, which means conv-rewrite-qwen-1.8b is used.
      shared_ptr<string> modelName_ {};
    };

    class Rerank : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rerank& obj) { 
        DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      };
      friend void from_json(const Darabonba::Json& j, Rerank& obj) { 
        DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
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
      virtual bool empty() const override { return this->modelName_ == nullptr; };
      // modelName Field Functions 
      bool hasModelName() const { return this->modelName_ != nullptr;};
      void deleteModelName() { this->modelName_ = nullptr;};
      inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
      inline Rerank& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    protected:
      // The name of the rank model. For more information, see [Create a knowledge base](https://www.alibabacloud.com/help/en/model-studio/user-guide/rag-knowledge-base). Valid values:
      // 
      // *   gte-rerank-hybrid: Recommended official model.
      // *   gte-rerank
      shared_ptr<string> modelName_ {};
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
      shared_ptr<string> content_ {};
      shared_ptr<string> role_ {};
    };

    virtual bool empty() const override { return this->denseSimilarityTopK_ == nullptr
        && this->enableReranking_ == nullptr && this->enableRewrite_ == nullptr && this->images_ == nullptr && this->indexId_ == nullptr && this->query_ == nullptr
        && this->queryHistory_ == nullptr && this->rerank_ == nullptr && this->rerankMinScore_ == nullptr && this->rerankTopN_ == nullptr && this->rewrite_ == nullptr
        && this->saveRetrieverHistory_ == nullptr && this->searchFilters_ == nullptr && this->sparseSimilarityTopK_ == nullptr; };
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
    // Vector retrieval top K. After generating vectors based on input text, the top K chunks in the knowledge base that are most similar to the vector representation of the input text are retrieved. Valid values: 0 to 100. The sum of the `DenseSimilarityTopK` and `SparseSimilarityTopK` parameters must be less than or equal to 200.
    // 
    // Default value: 100.
    shared_ptr<int32_t> denseSimilarityTopK_ {};
    // Specifies whether to enable reranking. For more information, see [Create a knowledge base](https://www.alibabacloud.com/help/en/model-studio/user-guide/rag-knowledge-base). Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: true.
    shared_ptr<bool> enableReranking_ {};
    // Specifies whether to enable multi-round conversation rewriting. For more information, see [Create a knowledge base](https://www.alibabacloud.com/help/en/model-studio/user-guide/rag-knowledge-base). Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    shared_ptr<bool> enableRewrite_ {};
    shared_ptr<vector<string>> images_ {};
    // The primary key ID of the knowledge base, which is the `Data.Id` parameter returned by the [CreateIndex](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-createindex) operation.
    // 
    // This parameter is required.
    shared_ptr<string> indexId_ {};
    // The input query prompt. The length and characters of the query are not limited.
    shared_ptr<string> query_ {};
    shared_ptr<vector<RetrieveRequest::QueryHistory>> queryHistory_ {};
    // Ranking configurations.
    shared_ptr<vector<RetrieveRequest::Rerank>> rerank_ {};
    // Similarity Threshold The lowest similarity score of chunks that can be returned. This parameter is used to filter text chunks returned by the rank model. For more information, see [Create a knowledge base](https://www.alibabacloud.com/help/en/model-studio/user-guide/rag-knowledge-base). Valid values: [0.01-1.00]. The priority of this parameter is greater than the similarity threshold configured for the knowledge base.
    // 
    // By default, this parameter is left empty. In this case, the similarity threshold of the knowledge base is used.
    shared_ptr<float> rerankMinScore_ {};
    // The top N return data after reranking. Valid values: 1 to 20. Default value: 5.
    shared_ptr<int32_t> rerankTopN_ {};
    // Conversation rewriting configurations.
    shared_ptr<vector<RetrieveRequest::Rewrite>> rewrite_ {};
    // Specifies whether to save the retrieve test history. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    shared_ptr<bool> saveRetrieverHistory_ {};
    // Specifies complex filter conditions. For more information about the syntax of SearchFilters, see the SearchFilter syntax section of this topic.
    shared_ptr<vector<map<string, string>>> searchFilters_ {};
    // The top K of keyword retrieval. Chunks that exactly match the keywords of the input text are retrieved from the knowledge base. This filters out irrelevant chunks and boosts accuracy. Valid values: 0 to 100. The sum of the `DenseSimilarityTopK` and `SparseSimilarityTopK` parameters must be less than or equal to 200.
    // 
    // Default value: 100.
    shared_ptr<int32_t> sparseSimilarityTopK_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
