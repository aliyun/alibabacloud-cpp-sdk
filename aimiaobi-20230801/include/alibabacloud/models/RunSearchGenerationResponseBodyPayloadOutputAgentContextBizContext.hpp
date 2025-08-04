// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent.hpp>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextTokenCalculate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext& obj) { 
      DARABONBA_PTR_TO_JSON(AskUser, askUser_);
      DARABONBA_PTR_TO_JSON(AskUserKeywords, askUserKeywords_);
      DARABONBA_PTR_TO_JSON(CurrentStep, currentStep_);
      DARABONBA_PTR_TO_JSON(GeneratedContent, generatedContent_);
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(NextStep, nextStep_);
      DARABONBA_PTR_TO_JSON(RecommendSearchQueryList, recommendSearchQueryList_);
      DARABONBA_PTR_TO_JSON(SearchKeywords, searchKeywords_);
      DARABONBA_PTR_TO_JSON(SearchQueryList, searchQueryList_);
      DARABONBA_PTR_TO_JSON(SupplementDataType, supplementDataType_);
      DARABONBA_PTR_TO_JSON(SupplementEnable, supplementEnable_);
      DARABONBA_PTR_TO_JSON(TokenCalculate, tokenCalculate_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext& obj) { 
      DARABONBA_PTR_FROM_JSON(AskUser, askUser_);
      DARABONBA_PTR_FROM_JSON(AskUserKeywords, askUserKeywords_);
      DARABONBA_PTR_FROM_JSON(CurrentStep, currentStep_);
      DARABONBA_PTR_FROM_JSON(GeneratedContent, generatedContent_);
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(NextStep, nextStep_);
      DARABONBA_PTR_FROM_JSON(RecommendSearchQueryList, recommendSearchQueryList_);
      DARABONBA_PTR_FROM_JSON(SearchKeywords, searchKeywords_);
      DARABONBA_PTR_FROM_JSON(SearchQueryList, searchQueryList_);
      DARABONBA_PTR_FROM_JSON(SupplementDataType, supplementDataType_);
      DARABONBA_PTR_FROM_JSON(SupplementEnable, supplementEnable_);
      DARABONBA_PTR_FROM_JSON(TokenCalculate, tokenCalculate_);
    };
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext &&) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext& operator=(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext& operator=(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->askUser_ != nullptr
        && this->askUserKeywords_ != nullptr && this->currentStep_ != nullptr && this->generatedContent_ != nullptr && this->modelId_ != nullptr && this->nextStep_ != nullptr
        && this->recommendSearchQueryList_ != nullptr && this->searchKeywords_ != nullptr && this->searchQueryList_ != nullptr && this->supplementDataType_ != nullptr && this->supplementEnable_ != nullptr
        && this->tokenCalculate_ != nullptr; };
    // askUser Field Functions 
    bool hasAskUser() const { return this->askUser_ != nullptr;};
    void deleteAskUser() { this->askUser_ = nullptr;};
    inline string askUser() const { DARABONBA_PTR_GET_DEFAULT(askUser_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext& setAskUser(string askUser) { DARABONBA_PTR_SET_VALUE(askUser_, askUser) };


    // askUserKeywords Field Functions 
    bool hasAskUserKeywords() const { return this->askUserKeywords_ != nullptr;};
    void deleteAskUserKeywords() { this->askUserKeywords_ = nullptr;};
    inline const vector<string> & askUserKeywords() const { DARABONBA_PTR_GET_CONST(askUserKeywords_, vector<string>) };
    inline vector<string> askUserKeywords() { DARABONBA_PTR_GET(askUserKeywords_, vector<string>) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext& setAskUserKeywords(const vector<string> & askUserKeywords) { DARABONBA_PTR_SET_VALUE(askUserKeywords_, askUserKeywords) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext& setAskUserKeywords(vector<string> && askUserKeywords) { DARABONBA_PTR_SET_RVALUE(askUserKeywords_, askUserKeywords) };


    // currentStep Field Functions 
    bool hasCurrentStep() const { return this->currentStep_ != nullptr;};
    void deleteCurrentStep() { this->currentStep_ = nullptr;};
    inline string currentStep() const { DARABONBA_PTR_GET_DEFAULT(currentStep_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext& setCurrentStep(string currentStep) { DARABONBA_PTR_SET_VALUE(currentStep_, currentStep) };


    // generatedContent Field Functions 
    bool hasGeneratedContent() const { return this->generatedContent_ != nullptr;};
    void deleteGeneratedContent() { this->generatedContent_ = nullptr;};
    inline const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent & generatedContent() const { DARABONBA_PTR_GET_CONST(generatedContent_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent) };
    inline Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent generatedContent() { DARABONBA_PTR_GET(generatedContent_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext& setGeneratedContent(const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent & generatedContent) { DARABONBA_PTR_SET_VALUE(generatedContent_, generatedContent) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext& setGeneratedContent(Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent && generatedContent) { DARABONBA_PTR_SET_RVALUE(generatedContent_, generatedContent) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // nextStep Field Functions 
    bool hasNextStep() const { return this->nextStep_ != nullptr;};
    void deleteNextStep() { this->nextStep_ = nullptr;};
    inline string nextStep() const { DARABONBA_PTR_GET_DEFAULT(nextStep_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext& setNextStep(string nextStep) { DARABONBA_PTR_SET_VALUE(nextStep_, nextStep) };


    // recommendSearchQueryList Field Functions 
    bool hasRecommendSearchQueryList() const { return this->recommendSearchQueryList_ != nullptr;};
    void deleteRecommendSearchQueryList() { this->recommendSearchQueryList_ = nullptr;};
    inline const vector<string> & recommendSearchQueryList() const { DARABONBA_PTR_GET_CONST(recommendSearchQueryList_, vector<string>) };
    inline vector<string> recommendSearchQueryList() { DARABONBA_PTR_GET(recommendSearchQueryList_, vector<string>) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext& setRecommendSearchQueryList(const vector<string> & recommendSearchQueryList) { DARABONBA_PTR_SET_VALUE(recommendSearchQueryList_, recommendSearchQueryList) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext& setRecommendSearchQueryList(vector<string> && recommendSearchQueryList) { DARABONBA_PTR_SET_RVALUE(recommendSearchQueryList_, recommendSearchQueryList) };


    // searchKeywords Field Functions 
    bool hasSearchKeywords() const { return this->searchKeywords_ != nullptr;};
    void deleteSearchKeywords() { this->searchKeywords_ = nullptr;};
    inline const vector<string> & searchKeywords() const { DARABONBA_PTR_GET_CONST(searchKeywords_, vector<string>) };
    inline vector<string> searchKeywords() { DARABONBA_PTR_GET(searchKeywords_, vector<string>) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext& setSearchKeywords(const vector<string> & searchKeywords) { DARABONBA_PTR_SET_VALUE(searchKeywords_, searchKeywords) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext& setSearchKeywords(vector<string> && searchKeywords) { DARABONBA_PTR_SET_RVALUE(searchKeywords_, searchKeywords) };


    // searchQueryList Field Functions 
    bool hasSearchQueryList() const { return this->searchQueryList_ != nullptr;};
    void deleteSearchQueryList() { this->searchQueryList_ = nullptr;};
    inline const vector<string> & searchQueryList() const { DARABONBA_PTR_GET_CONST(searchQueryList_, vector<string>) };
    inline vector<string> searchQueryList() { DARABONBA_PTR_GET(searchQueryList_, vector<string>) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext& setSearchQueryList(const vector<string> & searchQueryList) { DARABONBA_PTR_SET_VALUE(searchQueryList_, searchQueryList) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext& setSearchQueryList(vector<string> && searchQueryList) { DARABONBA_PTR_SET_RVALUE(searchQueryList_, searchQueryList) };


    // supplementDataType Field Functions 
    bool hasSupplementDataType() const { return this->supplementDataType_ != nullptr;};
    void deleteSupplementDataType() { this->supplementDataType_ = nullptr;};
    inline string supplementDataType() const { DARABONBA_PTR_GET_DEFAULT(supplementDataType_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext& setSupplementDataType(string supplementDataType) { DARABONBA_PTR_SET_VALUE(supplementDataType_, supplementDataType) };


    // supplementEnable Field Functions 
    bool hasSupplementEnable() const { return this->supplementEnable_ != nullptr;};
    void deleteSupplementEnable() { this->supplementEnable_ = nullptr;};
    inline bool supplementEnable() const { DARABONBA_PTR_GET_DEFAULT(supplementEnable_, false) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext& setSupplementEnable(bool supplementEnable) { DARABONBA_PTR_SET_VALUE(supplementEnable_, supplementEnable) };


    // tokenCalculate Field Functions 
    bool hasTokenCalculate() const { return this->tokenCalculate_ != nullptr;};
    void deleteTokenCalculate() { this->tokenCalculate_ = nullptr;};
    inline const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextTokenCalculate & tokenCalculate() const { DARABONBA_PTR_GET_CONST(tokenCalculate_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextTokenCalculate) };
    inline Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextTokenCalculate tokenCalculate() { DARABONBA_PTR_GET(tokenCalculate_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextTokenCalculate) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext& setTokenCalculate(const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextTokenCalculate & tokenCalculate) { DARABONBA_PTR_SET_VALUE(tokenCalculate_, tokenCalculate) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext& setTokenCalculate(Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextTokenCalculate && tokenCalculate) { DARABONBA_PTR_SET_RVALUE(tokenCalculate_, tokenCalculate) };


  protected:
    std::shared_ptr<string> askUser_ = nullptr;
    std::shared_ptr<vector<string>> askUserKeywords_ = nullptr;
    std::shared_ptr<string> currentStep_ = nullptr;
    std::shared_ptr<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContent> generatedContent_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> nextStep_ = nullptr;
    std::shared_ptr<vector<string>> recommendSearchQueryList_ = nullptr;
    std::shared_ptr<vector<string>> searchKeywords_ = nullptr;
    std::shared_ptr<vector<string>> searchQueryList_ = nullptr;
    std::shared_ptr<string> supplementDataType_ = nullptr;
    std::shared_ptr<bool> supplementEnable_ = nullptr;
    std::shared_ptr<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextTokenCalculate> tokenCalculate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
