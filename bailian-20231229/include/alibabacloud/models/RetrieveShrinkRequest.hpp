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
      DARABONBA_PTR_TO_JSON(Extra, extraShrink_);
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
      DARABONBA_PTR_FROM_JSON(Extra, extraShrink_);
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
        && this->enableReranking_ == nullptr && this->enableRewrite_ == nullptr && this->extraShrink_ == nullptr && this->imagesShrink_ == nullptr && this->indexId_ == nullptr
        && this->query_ == nullptr && this->queryHistoryShrink_ == nullptr && this->rerankShrink_ == nullptr && this->rerankMinScore_ == nullptr && this->rerankTopN_ == nullptr
        && this->rewriteShrink_ == nullptr && this->saveRetrieverHistory_ == nullptr && this->searchFiltersShrink_ == nullptr && this->sparseSimilarityTopK_ == nullptr; };
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


    // extraShrink Field Functions 
    bool hasExtraShrink() const { return this->extraShrink_ != nullptr;};
    void deleteExtraShrink() { this->extraShrink_ = nullptr;};
    inline string getExtraShrink() const { DARABONBA_PTR_GET_DEFAULT(extraShrink_, "") };
    inline RetrieveShrinkRequest& setExtraShrink(string extraShrink) { DARABONBA_PTR_SET_VALUE(extraShrink_, extraShrink) };


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
    shared_ptr<string> extraShrink_ {};
    // The URLs of images to include in the query.
    shared_ptr<string> imagesShrink_ {};
    // The ID of the knowledge base. This is the `Data.Id` value returned by the `CreateIndex` operation.
    // 
    // > - Ensure the specified knowledge base exists and has not been deleted.
    // 
    // This parameter is required.
    shared_ptr<string> indexId_ {};
    // The query, which is the original user prompt. There are no limits on the length of the query.
    shared_ptr<string> query_ {};
    // The conversation history, used for <props="china">[conversational query rewriting](https://help.aliyun.com/model-studio/use-cases/rag-optimization#b7031e2ad6cji)<props="intl">[conversational query rewriting](https://www.alibabacloud.com/help/model-studio/use-cases/rag-optimization#b7031e2ad6cji). This parameter is effective only when `EnableRewrite` is set to `true`.
    shared_ptr<string> queryHistoryShrink_ {};
    // The reranking configurations.
    shared_ptr<string> rerankShrink_ {};
    // The similarity threshold for reranking. Only text chunks with a similarity score greater than this value are returned. The value must be between 0.01 and 1.00, inclusive. This parameter overrides the similarity threshold setting of the knowledge base.
    // 
    // If not specified, the threshold configured for the knowledge base is used.
    shared_ptr<float> rerankMinScore_ {};
    // The number of top-ranked text chunks to return after reranking. The value must be an integer from 1 to 20. Default value: 5.
    shared_ptr<int32_t> rerankTopN_ {};
    // Configuration for conversational query rewriting.
    shared_ptr<string> rewriteShrink_ {};
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
    shared_ptr<string> searchFiltersShrink_ {};
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
