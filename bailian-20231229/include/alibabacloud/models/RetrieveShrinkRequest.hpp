// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRIEVESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RETRIEVESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class RetrieveShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetrieveShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DenseSimilarityTopK, denseSimilarityTopK_);
      DARABONBA_PTR_TO_JSON(EnableReranking, enableReranking_);
      DARABONBA_PTR_TO_JSON(EnableRewrite, enableRewrite_);
      DARABONBA_PTR_TO_JSON(Images, imagesShrink_);
      DARABONBA_PTR_TO_JSON(IndexId, indexId_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(QueryHistory, queryHistoryShrink_);
      DARABONBA_PTR_TO_JSON(Rerank, rerankShrink_);
      DARABONBA_PTR_TO_JSON(RerankMinScore, rerankMinScore_);
      DARABONBA_PTR_TO_JSON(RerankTopN, rerankTopN_);
      DARABONBA_PTR_TO_JSON(Rewrite, rewriteShrink_);
      DARABONBA_PTR_TO_JSON(SaveRetrieverHistory, saveRetrieverHistory_);
      DARABONBA_PTR_TO_JSON(SearchFilters, searchFiltersShrink_);
      DARABONBA_PTR_TO_JSON(SparseSimilarityTopK, sparseSimilarityTopK_);
    };
    friend void from_json(const Darabonba::Json& j, RetrieveShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DenseSimilarityTopK, denseSimilarityTopK_);
      DARABONBA_PTR_FROM_JSON(EnableReranking, enableReranking_);
      DARABONBA_PTR_FROM_JSON(EnableRewrite, enableRewrite_);
      DARABONBA_PTR_FROM_JSON(Images, imagesShrink_);
      DARABONBA_PTR_FROM_JSON(IndexId, indexId_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(QueryHistory, queryHistoryShrink_);
      DARABONBA_PTR_FROM_JSON(Rerank, rerankShrink_);
      DARABONBA_PTR_FROM_JSON(RerankMinScore, rerankMinScore_);
      DARABONBA_PTR_FROM_JSON(RerankTopN, rerankTopN_);
      DARABONBA_PTR_FROM_JSON(Rewrite, rewriteShrink_);
      DARABONBA_PTR_FROM_JSON(SaveRetrieverHistory, saveRetrieverHistory_);
      DARABONBA_PTR_FROM_JSON(SearchFilters, searchFiltersShrink_);
      DARABONBA_PTR_FROM_JSON(SparseSimilarityTopK, sparseSimilarityTopK_);
    };
    RetrieveShrinkRequest() = default ;
    RetrieveShrinkRequest(const RetrieveShrinkRequest &) = default ;
    RetrieveShrinkRequest(RetrieveShrinkRequest &&) = default ;
    RetrieveShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetrieveShrinkRequest() = default ;
    RetrieveShrinkRequest& operator=(const RetrieveShrinkRequest &) = default ;
    RetrieveShrinkRequest& operator=(RetrieveShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->denseSimilarityTopK_ == nullptr
        && this->enableReranking_ == nullptr && this->enableRewrite_ == nullptr && this->imagesShrink_ == nullptr && this->indexId_ == nullptr && this->query_ == nullptr
        && this->queryHistoryShrink_ == nullptr && this->rerankShrink_ == nullptr && this->rerankMinScore_ == nullptr && this->rerankTopN_ == nullptr && this->rewriteShrink_ == nullptr
        && this->saveRetrieverHistory_ == nullptr && this->searchFiltersShrink_ == nullptr && this->sparseSimilarityTopK_ == nullptr; };
    // denseSimilarityTopK Field Functions 
    bool hasDenseSimilarityTopK() const { return this->denseSimilarityTopK_ != nullptr;};
    void deleteDenseSimilarityTopK() { this->denseSimilarityTopK_ = nullptr;};
    inline int32_t getDenseSimilarityTopK() const { DARABONBA_PTR_GET_DEFAULT(denseSimilarityTopK_, 0) };
    inline RetrieveShrinkRequest& setDenseSimilarityTopK(int32_t denseSimilarityTopK) { DARABONBA_PTR_SET_VALUE(denseSimilarityTopK_, denseSimilarityTopK) };


    // enableReranking Field Functions 
    bool hasEnableReranking() const { return this->enableReranking_ != nullptr;};
    void deleteEnableReranking() { this->enableReranking_ = nullptr;};
    inline bool getEnableReranking() const { DARABONBA_PTR_GET_DEFAULT(enableReranking_, false) };
    inline RetrieveShrinkRequest& setEnableReranking(bool enableReranking) { DARABONBA_PTR_SET_VALUE(enableReranking_, enableReranking) };


    // enableRewrite Field Functions 
    bool hasEnableRewrite() const { return this->enableRewrite_ != nullptr;};
    void deleteEnableRewrite() { this->enableRewrite_ = nullptr;};
    inline bool getEnableRewrite() const { DARABONBA_PTR_GET_DEFAULT(enableRewrite_, false) };
    inline RetrieveShrinkRequest& setEnableRewrite(bool enableRewrite) { DARABONBA_PTR_SET_VALUE(enableRewrite_, enableRewrite) };


    // imagesShrink Field Functions 
    bool hasImagesShrink() const { return this->imagesShrink_ != nullptr;};
    void deleteImagesShrink() { this->imagesShrink_ = nullptr;};
    inline string getImagesShrink() const { DARABONBA_PTR_GET_DEFAULT(imagesShrink_, "") };
    inline RetrieveShrinkRequest& setImagesShrink(string imagesShrink) { DARABONBA_PTR_SET_VALUE(imagesShrink_, imagesShrink) };


    // indexId Field Functions 
    bool hasIndexId() const { return this->indexId_ != nullptr;};
    void deleteIndexId() { this->indexId_ = nullptr;};
    inline string getIndexId() const { DARABONBA_PTR_GET_DEFAULT(indexId_, "") };
    inline RetrieveShrinkRequest& setIndexId(string indexId) { DARABONBA_PTR_SET_VALUE(indexId_, indexId) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline RetrieveShrinkRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // queryHistoryShrink Field Functions 
    bool hasQueryHistoryShrink() const { return this->queryHistoryShrink_ != nullptr;};
    void deleteQueryHistoryShrink() { this->queryHistoryShrink_ = nullptr;};
    inline string getQueryHistoryShrink() const { DARABONBA_PTR_GET_DEFAULT(queryHistoryShrink_, "") };
    inline RetrieveShrinkRequest& setQueryHistoryShrink(string queryHistoryShrink) { DARABONBA_PTR_SET_VALUE(queryHistoryShrink_, queryHistoryShrink) };


    // rerankShrink Field Functions 
    bool hasRerankShrink() const { return this->rerankShrink_ != nullptr;};
    void deleteRerankShrink() { this->rerankShrink_ = nullptr;};
    inline string getRerankShrink() const { DARABONBA_PTR_GET_DEFAULT(rerankShrink_, "") };
    inline RetrieveShrinkRequest& setRerankShrink(string rerankShrink) { DARABONBA_PTR_SET_VALUE(rerankShrink_, rerankShrink) };


    // rerankMinScore Field Functions 
    bool hasRerankMinScore() const { return this->rerankMinScore_ != nullptr;};
    void deleteRerankMinScore() { this->rerankMinScore_ = nullptr;};
    inline float getRerankMinScore() const { DARABONBA_PTR_GET_DEFAULT(rerankMinScore_, 0.0) };
    inline RetrieveShrinkRequest& setRerankMinScore(float rerankMinScore) { DARABONBA_PTR_SET_VALUE(rerankMinScore_, rerankMinScore) };


    // rerankTopN Field Functions 
    bool hasRerankTopN() const { return this->rerankTopN_ != nullptr;};
    void deleteRerankTopN() { this->rerankTopN_ = nullptr;};
    inline int32_t getRerankTopN() const { DARABONBA_PTR_GET_DEFAULT(rerankTopN_, 0) };
    inline RetrieveShrinkRequest& setRerankTopN(int32_t rerankTopN) { DARABONBA_PTR_SET_VALUE(rerankTopN_, rerankTopN) };


    // rewriteShrink Field Functions 
    bool hasRewriteShrink() const { return this->rewriteShrink_ != nullptr;};
    void deleteRewriteShrink() { this->rewriteShrink_ = nullptr;};
    inline string getRewriteShrink() const { DARABONBA_PTR_GET_DEFAULT(rewriteShrink_, "") };
    inline RetrieveShrinkRequest& setRewriteShrink(string rewriteShrink) { DARABONBA_PTR_SET_VALUE(rewriteShrink_, rewriteShrink) };


    // saveRetrieverHistory Field Functions 
    bool hasSaveRetrieverHistory() const { return this->saveRetrieverHistory_ != nullptr;};
    void deleteSaveRetrieverHistory() { this->saveRetrieverHistory_ = nullptr;};
    inline bool getSaveRetrieverHistory() const { DARABONBA_PTR_GET_DEFAULT(saveRetrieverHistory_, false) };
    inline RetrieveShrinkRequest& setSaveRetrieverHistory(bool saveRetrieverHistory) { DARABONBA_PTR_SET_VALUE(saveRetrieverHistory_, saveRetrieverHistory) };


    // searchFiltersShrink Field Functions 
    bool hasSearchFiltersShrink() const { return this->searchFiltersShrink_ != nullptr;};
    void deleteSearchFiltersShrink() { this->searchFiltersShrink_ = nullptr;};
    inline string getSearchFiltersShrink() const { DARABONBA_PTR_GET_DEFAULT(searchFiltersShrink_, "") };
    inline RetrieveShrinkRequest& setSearchFiltersShrink(string searchFiltersShrink) { DARABONBA_PTR_SET_VALUE(searchFiltersShrink_, searchFiltersShrink) };


    // sparseSimilarityTopK Field Functions 
    bool hasSparseSimilarityTopK() const { return this->sparseSimilarityTopK_ != nullptr;};
    void deleteSparseSimilarityTopK() { this->sparseSimilarityTopK_ = nullptr;};
    inline int32_t getSparseSimilarityTopK() const { DARABONBA_PTR_GET_DEFAULT(sparseSimilarityTopK_, 0) };
    inline RetrieveShrinkRequest& setSparseSimilarityTopK(int32_t sparseSimilarityTopK) { DARABONBA_PTR_SET_VALUE(sparseSimilarityTopK_, sparseSimilarityTopK) };


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
    shared_ptr<string> imagesShrink_ {};
    // The primary key ID of the knowledge base, which is the `Data.Id` parameter returned by the [CreateIndex](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-createindex) operation.
    // 
    // This parameter is required.
    shared_ptr<string> indexId_ {};
    // The input query prompt. The length and characters of the query are not limited.
    shared_ptr<string> query_ {};
    shared_ptr<string> queryHistoryShrink_ {};
    // Ranking configurations.
    shared_ptr<string> rerankShrink_ {};
    // Similarity Threshold The lowest similarity score of chunks that can be returned. This parameter is used to filter text chunks returned by the rank model. For more information, see [Create a knowledge base](https://www.alibabacloud.com/help/en/model-studio/user-guide/rag-knowledge-base). Valid values: [0.01-1.00]. The priority of this parameter is greater than the similarity threshold configured for the knowledge base.
    // 
    // By default, this parameter is left empty. In this case, the similarity threshold of the knowledge base is used.
    shared_ptr<float> rerankMinScore_ {};
    // The top N return data after reranking. Valid values: 1 to 20. Default value: 5.
    shared_ptr<int32_t> rerankTopN_ {};
    // Conversation rewriting configurations.
    shared_ptr<string> rewriteShrink_ {};
    // Specifies whether to save the retrieve test history. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    shared_ptr<bool> saveRetrieverHistory_ {};
    // Specifies complex filter conditions. For more information about the syntax of SearchFilters, see the SearchFilter syntax section of this topic.
    shared_ptr<string> searchFiltersShrink_ {};
    // The top K of keyword retrieval. Chunks that exactly match the keywords of the input text are retrieved from the knowledge base. This filters out irrelevant chunks and boosts accuracy. Valid values: 0 to 100. The sum of the `DenseSimilarityTopK` and `SparseSimilarityTopK` parameters must be less than or equal to 200.
    // 
    // Default value: 100.
    shared_ptr<int32_t> sparseSimilarityTopK_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
