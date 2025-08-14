// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTCONFIGLLMCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTCONFIGLLMCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AIAgentConfigLlmConfigFunctionMap.hpp>
#include <alibabacloud/models/AIAgentConfigLlmConfigLlmHistory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentConfigLlmConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentConfigLlmConfig& obj) { 
      DARABONBA_PTR_TO_JSON(BailianAppParams, bailianAppParams_);
      DARABONBA_PTR_TO_JSON(FunctionMap, functionMap_);
      DARABONBA_PTR_TO_JSON(LlmCompleteReply, llmCompleteReply_);
      DARABONBA_PTR_TO_JSON(LlmHistory, llmHistory_);
      DARABONBA_PTR_TO_JSON(LlmHistoryLimit, llmHistoryLimit_);
      DARABONBA_PTR_TO_JSON(LlmSystemPrompt, llmSystemPrompt_);
      DARABONBA_PTR_TO_JSON(OpenAIExtraQuery, openAIExtraQuery_);
      DARABONBA_PTR_TO_JSON(OutputMaxDelay, outputMaxDelay_);
      DARABONBA_PTR_TO_JSON(OutputMinLength, outputMinLength_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentConfigLlmConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(BailianAppParams, bailianAppParams_);
      DARABONBA_PTR_FROM_JSON(FunctionMap, functionMap_);
      DARABONBA_PTR_FROM_JSON(LlmCompleteReply, llmCompleteReply_);
      DARABONBA_PTR_FROM_JSON(LlmHistory, llmHistory_);
      DARABONBA_PTR_FROM_JSON(LlmHistoryLimit, llmHistoryLimit_);
      DARABONBA_PTR_FROM_JSON(LlmSystemPrompt, llmSystemPrompt_);
      DARABONBA_PTR_FROM_JSON(OpenAIExtraQuery, openAIExtraQuery_);
      DARABONBA_PTR_FROM_JSON(OutputMaxDelay, outputMaxDelay_);
      DARABONBA_PTR_FROM_JSON(OutputMinLength, outputMinLength_);
    };
    AIAgentConfigLlmConfig() = default ;
    AIAgentConfigLlmConfig(const AIAgentConfigLlmConfig &) = default ;
    AIAgentConfigLlmConfig(AIAgentConfigLlmConfig &&) = default ;
    AIAgentConfigLlmConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentConfigLlmConfig() = default ;
    AIAgentConfigLlmConfig& operator=(const AIAgentConfigLlmConfig &) = default ;
    AIAgentConfigLlmConfig& operator=(AIAgentConfigLlmConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bailianAppParams_ != nullptr
        && this->functionMap_ != nullptr && this->llmCompleteReply_ != nullptr && this->llmHistory_ != nullptr && this->llmHistoryLimit_ != nullptr && this->llmSystemPrompt_ != nullptr
        && this->openAIExtraQuery_ != nullptr && this->outputMaxDelay_ != nullptr && this->outputMinLength_ != nullptr; };
    // bailianAppParams Field Functions 
    bool hasBailianAppParams() const { return this->bailianAppParams_ != nullptr;};
    void deleteBailianAppParams() { this->bailianAppParams_ = nullptr;};
    inline string bailianAppParams() const { DARABONBA_PTR_GET_DEFAULT(bailianAppParams_, "") };
    inline AIAgentConfigLlmConfig& setBailianAppParams(string bailianAppParams) { DARABONBA_PTR_SET_VALUE(bailianAppParams_, bailianAppParams) };


    // functionMap Field Functions 
    bool hasFunctionMap() const { return this->functionMap_ != nullptr;};
    void deleteFunctionMap() { this->functionMap_ = nullptr;};
    inline const vector<Models::AIAgentConfigLlmConfigFunctionMap> & functionMap() const { DARABONBA_PTR_GET_CONST(functionMap_, vector<Models::AIAgentConfigLlmConfigFunctionMap>) };
    inline vector<Models::AIAgentConfigLlmConfigFunctionMap> functionMap() { DARABONBA_PTR_GET(functionMap_, vector<Models::AIAgentConfigLlmConfigFunctionMap>) };
    inline AIAgentConfigLlmConfig& setFunctionMap(const vector<Models::AIAgentConfigLlmConfigFunctionMap> & functionMap) { DARABONBA_PTR_SET_VALUE(functionMap_, functionMap) };
    inline AIAgentConfigLlmConfig& setFunctionMap(vector<Models::AIAgentConfigLlmConfigFunctionMap> && functionMap) { DARABONBA_PTR_SET_RVALUE(functionMap_, functionMap) };


    // llmCompleteReply Field Functions 
    bool hasLlmCompleteReply() const { return this->llmCompleteReply_ != nullptr;};
    void deleteLlmCompleteReply() { this->llmCompleteReply_ = nullptr;};
    inline bool llmCompleteReply() const { DARABONBA_PTR_GET_DEFAULT(llmCompleteReply_, false) };
    inline AIAgentConfigLlmConfig& setLlmCompleteReply(bool llmCompleteReply) { DARABONBA_PTR_SET_VALUE(llmCompleteReply_, llmCompleteReply) };


    // llmHistory Field Functions 
    bool hasLlmHistory() const { return this->llmHistory_ != nullptr;};
    void deleteLlmHistory() { this->llmHistory_ = nullptr;};
    inline const vector<Models::AIAgentConfigLlmConfigLlmHistory> & llmHistory() const { DARABONBA_PTR_GET_CONST(llmHistory_, vector<Models::AIAgentConfigLlmConfigLlmHistory>) };
    inline vector<Models::AIAgentConfigLlmConfigLlmHistory> llmHistory() { DARABONBA_PTR_GET(llmHistory_, vector<Models::AIAgentConfigLlmConfigLlmHistory>) };
    inline AIAgentConfigLlmConfig& setLlmHistory(const vector<Models::AIAgentConfigLlmConfigLlmHistory> & llmHistory) { DARABONBA_PTR_SET_VALUE(llmHistory_, llmHistory) };
    inline AIAgentConfigLlmConfig& setLlmHistory(vector<Models::AIAgentConfigLlmConfigLlmHistory> && llmHistory) { DARABONBA_PTR_SET_RVALUE(llmHistory_, llmHistory) };


    // llmHistoryLimit Field Functions 
    bool hasLlmHistoryLimit() const { return this->llmHistoryLimit_ != nullptr;};
    void deleteLlmHistoryLimit() { this->llmHistoryLimit_ = nullptr;};
    inline int32_t llmHistoryLimit() const { DARABONBA_PTR_GET_DEFAULT(llmHistoryLimit_, 0) };
    inline AIAgentConfigLlmConfig& setLlmHistoryLimit(int32_t llmHistoryLimit) { DARABONBA_PTR_SET_VALUE(llmHistoryLimit_, llmHistoryLimit) };


    // llmSystemPrompt Field Functions 
    bool hasLlmSystemPrompt() const { return this->llmSystemPrompt_ != nullptr;};
    void deleteLlmSystemPrompt() { this->llmSystemPrompt_ = nullptr;};
    inline string llmSystemPrompt() const { DARABONBA_PTR_GET_DEFAULT(llmSystemPrompt_, "") };
    inline AIAgentConfigLlmConfig& setLlmSystemPrompt(string llmSystemPrompt) { DARABONBA_PTR_SET_VALUE(llmSystemPrompt_, llmSystemPrompt) };


    // openAIExtraQuery Field Functions 
    bool hasOpenAIExtraQuery() const { return this->openAIExtraQuery_ != nullptr;};
    void deleteOpenAIExtraQuery() { this->openAIExtraQuery_ = nullptr;};
    inline string openAIExtraQuery() const { DARABONBA_PTR_GET_DEFAULT(openAIExtraQuery_, "") };
    inline AIAgentConfigLlmConfig& setOpenAIExtraQuery(string openAIExtraQuery) { DARABONBA_PTR_SET_VALUE(openAIExtraQuery_, openAIExtraQuery) };


    // outputMaxDelay Field Functions 
    bool hasOutputMaxDelay() const { return this->outputMaxDelay_ != nullptr;};
    void deleteOutputMaxDelay() { this->outputMaxDelay_ = nullptr;};
    inline int32_t outputMaxDelay() const { DARABONBA_PTR_GET_DEFAULT(outputMaxDelay_, 0) };
    inline AIAgentConfigLlmConfig& setOutputMaxDelay(int32_t outputMaxDelay) { DARABONBA_PTR_SET_VALUE(outputMaxDelay_, outputMaxDelay) };


    // outputMinLength Field Functions 
    bool hasOutputMinLength() const { return this->outputMinLength_ != nullptr;};
    void deleteOutputMinLength() { this->outputMinLength_ = nullptr;};
    inline int32_t outputMinLength() const { DARABONBA_PTR_GET_DEFAULT(outputMinLength_, 0) };
    inline AIAgentConfigLlmConfig& setOutputMinLength(int32_t outputMinLength) { DARABONBA_PTR_SET_VALUE(outputMinLength_, outputMinLength) };


  protected:
    std::shared_ptr<string> bailianAppParams_ = nullptr;
    std::shared_ptr<vector<Models::AIAgentConfigLlmConfigFunctionMap>> functionMap_ = nullptr;
    std::shared_ptr<bool> llmCompleteReply_ = nullptr;
    std::shared_ptr<vector<Models::AIAgentConfigLlmConfigLlmHistory>> llmHistory_ = nullptr;
    std::shared_ptr<int32_t> llmHistoryLimit_ = nullptr;
    std::shared_ptr<string> llmSystemPrompt_ = nullptr;
    std::shared_ptr<string> openAIExtraQuery_ = nullptr;
    std::shared_ptr<int32_t> outputMaxDelay_ = nullptr;
    std::shared_ptr<int32_t> outputMinLength_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
