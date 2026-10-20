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
    // The top K value for AISearch. The system generates a vector for the input text and retrieves the top K text chunks in the knowledge base that are most similar to the vector representation. Valid values: 0 to 100.
    // The sum of DenseSimilarityTopK and SparseSimilarityTopK must be less than or equal to 200.
    // 
    // Default value: 100.
    shared_ptr<int32_t> denseSimilarityTopK_ {};
    // Specifies whether to enable reranking. For more information, see [Knowledge base](https://help.aliyun.com/document_detail/2807740.html). Valid values:
    // - true: Enabled.
    // - false: Disabled.
    // 
    // Default value: true.
    shared_ptr<bool> enableReranking_ {};
    // Specifies whether to enable <props="china">[multi-turn conversation rewriting](https://help.aliyun.com/model-studio/use-cases/rag-optimization#b7031e2ad6cji)<props="intl">[multi-turn conversation rewriting](https://www.alibabacloud.com/help/model-studio/use-cases/rag-optimization#b7031e2ad6cji).
    // Valid values:
    // - true: Enabled.
    // - false: Disabled.
    // 
    // Default value: false.
    shared_ptr<bool> enableRewrite_ {};
    shared_ptr<string> extraShrink_ {};
    // The URLs of the images passed in the query.
    shared_ptr<string> imagesShrink_ {};
    // The ID of the knowledge base, which is the Data.Id returned by the CreateIndex operation.
    // 
    // > - Make sure that the corresponding knowledge base is created and not deleted.
    // 
    // This parameter is required.
    shared_ptr<string> indexId_ {};
    // The input text, which is the original input prompt. The length and characters of Query are not limited.
    shared_ptr<string> query_ {};
    // <props="china">[Multi-turn conversation rewriting](https://help.aliyun.com/model-studio/use-cases/rag-optimization#b7031e2ad6cji)<props="intl">[Multi-turn conversation rewriting](https://www.alibabacloud.com/help/model-studio/use-cases/rag-optimization#b7031e2ad6cji) allows you to pass in your own managed conversation history. This parameter takes effect only when EnableRewrite is set to **true**. Otherwise, it does not take effect even if you specify it.
    shared_ptr<string> queryHistoryShrink_ {};
    // The reranking configuration.
    shared_ptr<string> rerankShrink_ {};
    // The similarity threshold. This threshold specifies the minimum similarity score allowed for recalled text chunks and is used to filter the text chunks returned by the ranking model. Only text chunks with a score greater than this value are recalled. Valid values: 0.01 to 1.00. This parameter has a higher priority than the similarity threshold configured for the knowledge base.
    // 
    // If no specific value is specified, the similarity threshold configured for the knowledge base is used by default.
    shared_ptr<float> rerankMinScore_ {};
    // The top N text chunks to return after reranking. Valid values: 1 to 20. Default value: 5.
    shared_ptr<int32_t> rerankTopN_ {};
    // The multi-turn conversation rewriting configuration.
    shared_ptr<string> rewriteShrink_ {};
    // Specifies whether to save the historical text chunk recall test data. Valid values:
    // - true: Save.
    // - false: Do not save.
    // 
    // Default value: false.
    shared_ptr<bool> saveRetrieverHistory_ {};
    // The personalized retrieval conditions, such as tags, configured by using SearchFilter to filter semantic retrieval results and exclude information irrelevant to the query.
    // The filtering logic takes effect when the is_displayed_chunk_content parameter is set to true. For more information, see [Knowledge base SearchFilters](https://help.aliyun.com/document_detail/2869641.html).
    shared_ptr<string> searchFiltersShrink_ {};
    // The top K value for keyword retrieval. The system retrieves chunks from the knowledge base that are an exact match for the keywords in the input text. This helps you filter out irrelevant text chunks and provides more accurate results.
    // Valid values: 0 to 100.
    // The sum of DenseSimilarityTopK and SparseSimilarityTopK must be less than or equal to 200.
    // 
    // Default value: 100.
    shared_ptr<int32_t> sparseSimilarityTopK_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
