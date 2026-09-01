// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANSWERKNOWLEDGEBASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ANSWERKNOWLEDGEBASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class AnswerKnowledgeBaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnswerKnowledgeBaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(MaxContextChars, maxContextChars_);
      DARABONBA_PTR_TO_JSON(QueryText, queryText_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RerankEnabled, rerankEnabled_);
      DARABONBA_PTR_TO_JSON(ReturnSources, returnSources_);
      DARABONBA_PTR_TO_JSON(ScoreThreshold, scoreThreshold_);
      DARABONBA_PTR_TO_JSON(SearchMode, searchMode_);
      DARABONBA_PTR_TO_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_PTR_TO_JSON(TopK, topK_);
      DARABONBA_PTR_TO_JSON(UserInstructions, userInstructions_);
    };
    friend void from_json(const Darabonba::Json& j, AnswerKnowledgeBaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(MaxContextChars, maxContextChars_);
      DARABONBA_PTR_FROM_JSON(QueryText, queryText_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RerankEnabled, rerankEnabled_);
      DARABONBA_PTR_FROM_JSON(ReturnSources, returnSources_);
      DARABONBA_PTR_FROM_JSON(ScoreThreshold, scoreThreshold_);
      DARABONBA_PTR_FROM_JSON(SearchMode, searchMode_);
      DARABONBA_PTR_FROM_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_PTR_FROM_JSON(TopK, topK_);
      DARABONBA_PTR_FROM_JSON(UserInstructions, userInstructions_);
    };
    AnswerKnowledgeBaseRequest() = default ;
    AnswerKnowledgeBaseRequest(const AnswerKnowledgeBaseRequest &) = default ;
    AnswerKnowledgeBaseRequest(AnswerKnowledgeBaseRequest &&) = default ;
    AnswerKnowledgeBaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnswerKnowledgeBaseRequest() = default ;
    AnswerKnowledgeBaseRequest& operator=(const AnswerKnowledgeBaseRequest &) = default ;
    AnswerKnowledgeBaseRequest& operator=(AnswerKnowledgeBaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->knowledgeBaseId_ == nullptr
        && this->maxContextChars_ == nullptr && this->queryText_ == nullptr && this->regionId_ == nullptr && this->rerankEnabled_ == nullptr && this->returnSources_ == nullptr
        && this->scoreThreshold_ == nullptr && this->searchMode_ == nullptr && this->systemPrompt_ == nullptr && this->topK_ == nullptr && this->userInstructions_ == nullptr; };
    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline AnswerKnowledgeBaseRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // maxContextChars Field Functions 
    bool hasMaxContextChars() const { return this->maxContextChars_ != nullptr;};
    void deleteMaxContextChars() { this->maxContextChars_ = nullptr;};
    inline int32_t getMaxContextChars() const { DARABONBA_PTR_GET_DEFAULT(maxContextChars_, 0) };
    inline AnswerKnowledgeBaseRequest& setMaxContextChars(int32_t maxContextChars) { DARABONBA_PTR_SET_VALUE(maxContextChars_, maxContextChars) };


    // queryText Field Functions 
    bool hasQueryText() const { return this->queryText_ != nullptr;};
    void deleteQueryText() { this->queryText_ = nullptr;};
    inline string getQueryText() const { DARABONBA_PTR_GET_DEFAULT(queryText_, "") };
    inline AnswerKnowledgeBaseRequest& setQueryText(string queryText) { DARABONBA_PTR_SET_VALUE(queryText_, queryText) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AnswerKnowledgeBaseRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rerankEnabled Field Functions 
    bool hasRerankEnabled() const { return this->rerankEnabled_ != nullptr;};
    void deleteRerankEnabled() { this->rerankEnabled_ = nullptr;};
    inline bool getRerankEnabled() const { DARABONBA_PTR_GET_DEFAULT(rerankEnabled_, false) };
    inline AnswerKnowledgeBaseRequest& setRerankEnabled(bool rerankEnabled) { DARABONBA_PTR_SET_VALUE(rerankEnabled_, rerankEnabled) };


    // returnSources Field Functions 
    bool hasReturnSources() const { return this->returnSources_ != nullptr;};
    void deleteReturnSources() { this->returnSources_ = nullptr;};
    inline bool getReturnSources() const { DARABONBA_PTR_GET_DEFAULT(returnSources_, false) };
    inline AnswerKnowledgeBaseRequest& setReturnSources(bool returnSources) { DARABONBA_PTR_SET_VALUE(returnSources_, returnSources) };


    // scoreThreshold Field Functions 
    bool hasScoreThreshold() const { return this->scoreThreshold_ != nullptr;};
    void deleteScoreThreshold() { this->scoreThreshold_ = nullptr;};
    inline double getScoreThreshold() const { DARABONBA_PTR_GET_DEFAULT(scoreThreshold_, 0.0) };
    inline AnswerKnowledgeBaseRequest& setScoreThreshold(double scoreThreshold) { DARABONBA_PTR_SET_VALUE(scoreThreshold_, scoreThreshold) };


    // searchMode Field Functions 
    bool hasSearchMode() const { return this->searchMode_ != nullptr;};
    void deleteSearchMode() { this->searchMode_ = nullptr;};
    inline string getSearchMode() const { DARABONBA_PTR_GET_DEFAULT(searchMode_, "") };
    inline AnswerKnowledgeBaseRequest& setSearchMode(string searchMode) { DARABONBA_PTR_SET_VALUE(searchMode_, searchMode) };


    // systemPrompt Field Functions 
    bool hasSystemPrompt() const { return this->systemPrompt_ != nullptr;};
    void deleteSystemPrompt() { this->systemPrompt_ = nullptr;};
    inline string getSystemPrompt() const { DARABONBA_PTR_GET_DEFAULT(systemPrompt_, "") };
    inline AnswerKnowledgeBaseRequest& setSystemPrompt(string systemPrompt) { DARABONBA_PTR_SET_VALUE(systemPrompt_, systemPrompt) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline AnswerKnowledgeBaseRequest& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    // userInstructions Field Functions 
    bool hasUserInstructions() const { return this->userInstructions_ != nullptr;};
    void deleteUserInstructions() { this->userInstructions_ = nullptr;};
    inline string getUserInstructions() const { DARABONBA_PTR_GET_DEFAULT(userInstructions_, "") };
    inline AnswerKnowledgeBaseRequest& setUserInstructions(string userInstructions) { DARABONBA_PTR_SET_VALUE(userInstructions_, userInstructions) };


  protected:
    // The unique ID of the knowledge base.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
    // The maximum number of context characters. Valid values: 1000 to 32000.
    shared_ptr<int32_t> maxContextChars_ {};
    // The user query text.
    // 
    // This parameter is required.
    shared_ptr<string> queryText_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Specifies whether to enable reranking. Default value: false.
    shared_ptr<bool> rerankEnabled_ {};
    // Specifies whether to return citation sources. Default value: true.
    shared_ptr<bool> returnSources_ {};
    // The similarity score threshold.
    shared_ptr<double> scoreThreshold_ {};
    // The search mode. Valid values: knn, rrf, precise, semantic, and balanced.
    shared_ptr<string> searchMode_ {};
    // The system prompt.
    shared_ptr<string> systemPrompt_ {};
    // The number of results to recall during retrieval.
    shared_ptr<int32_t> topK_ {};
    // The supplementary user instructions.
    shared_ptr<string> userInstructions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
