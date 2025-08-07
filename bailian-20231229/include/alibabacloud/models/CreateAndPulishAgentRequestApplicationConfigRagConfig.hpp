// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANDPULISHAGENTREQUESTAPPLICATIONCONFIGRAGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEANDPULISHAGENTREQUESTAPPLICATIONCONFIGRAGCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class CreateAndPulishAgentRequestApplicationConfigRagConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAndPulishAgentRequestApplicationConfigRagConfig& obj) { 
      DARABONBA_PTR_TO_JSON(answerScope, answerScope_);
      DARABONBA_PTR_TO_JSON(enableCitation, enableCitation_);
      DARABONBA_PTR_TO_JSON(enableSearch, enableSearch_);
      DARABONBA_PTR_TO_JSON(enableWebSearch, enableWebSearch_);
      DARABONBA_PTR_TO_JSON(fixedReplyDetail, fixedReplyDetail_);
      DARABONBA_PTR_TO_JSON(knowledgeBaseCodeList, knowledgeBaseCodeList_);
      DARABONBA_PTR_TO_JSON(promptStrategy, promptStrategy_);
      DARABONBA_PTR_TO_JSON(ragRejectType, ragRejectType_);
      DARABONBA_PTR_TO_JSON(rejectFilterPrompt, rejectFilterPrompt_);
      DARABONBA_PTR_TO_JSON(rejectFilterType, rejectFilterType_);
      DARABONBA_PTR_TO_JSON(retrieveMaxLength, retrieveMaxLength_);
      DARABONBA_PTR_TO_JSON(topK, topK_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAndPulishAgentRequestApplicationConfigRagConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(answerScope, answerScope_);
      DARABONBA_PTR_FROM_JSON(enableCitation, enableCitation_);
      DARABONBA_PTR_FROM_JSON(enableSearch, enableSearch_);
      DARABONBA_PTR_FROM_JSON(enableWebSearch, enableWebSearch_);
      DARABONBA_PTR_FROM_JSON(fixedReplyDetail, fixedReplyDetail_);
      DARABONBA_PTR_FROM_JSON(knowledgeBaseCodeList, knowledgeBaseCodeList_);
      DARABONBA_PTR_FROM_JSON(promptStrategy, promptStrategy_);
      DARABONBA_PTR_FROM_JSON(ragRejectType, ragRejectType_);
      DARABONBA_PTR_FROM_JSON(rejectFilterPrompt, rejectFilterPrompt_);
      DARABONBA_PTR_FROM_JSON(rejectFilterType, rejectFilterType_);
      DARABONBA_PTR_FROM_JSON(retrieveMaxLength, retrieveMaxLength_);
      DARABONBA_PTR_FROM_JSON(topK, topK_);
    };
    CreateAndPulishAgentRequestApplicationConfigRagConfig() = default ;
    CreateAndPulishAgentRequestApplicationConfigRagConfig(const CreateAndPulishAgentRequestApplicationConfigRagConfig &) = default ;
    CreateAndPulishAgentRequestApplicationConfigRagConfig(CreateAndPulishAgentRequestApplicationConfigRagConfig &&) = default ;
    CreateAndPulishAgentRequestApplicationConfigRagConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAndPulishAgentRequestApplicationConfigRagConfig() = default ;
    CreateAndPulishAgentRequestApplicationConfigRagConfig& operator=(const CreateAndPulishAgentRequestApplicationConfigRagConfig &) = default ;
    CreateAndPulishAgentRequestApplicationConfigRagConfig& operator=(CreateAndPulishAgentRequestApplicationConfigRagConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->answerScope_ != nullptr
        && this->enableCitation_ != nullptr && this->enableSearch_ != nullptr && this->enableWebSearch_ != nullptr && this->fixedReplyDetail_ != nullptr && this->knowledgeBaseCodeList_ != nullptr
        && this->promptStrategy_ != nullptr && this->ragRejectType_ != nullptr && this->rejectFilterPrompt_ != nullptr && this->rejectFilterType_ != nullptr && this->retrieveMaxLength_ != nullptr
        && this->topK_ != nullptr; };
    // answerScope Field Functions 
    bool hasAnswerScope() const { return this->answerScope_ != nullptr;};
    void deleteAnswerScope() { this->answerScope_ = nullptr;};
    inline string answerScope() const { DARABONBA_PTR_GET_DEFAULT(answerScope_, "") };
    inline CreateAndPulishAgentRequestApplicationConfigRagConfig& setAnswerScope(string answerScope) { DARABONBA_PTR_SET_VALUE(answerScope_, answerScope) };


    // enableCitation Field Functions 
    bool hasEnableCitation() const { return this->enableCitation_ != nullptr;};
    void deleteEnableCitation() { this->enableCitation_ = nullptr;};
    inline bool enableCitation() const { DARABONBA_PTR_GET_DEFAULT(enableCitation_, false) };
    inline CreateAndPulishAgentRequestApplicationConfigRagConfig& setEnableCitation(bool enableCitation) { DARABONBA_PTR_SET_VALUE(enableCitation_, enableCitation) };


    // enableSearch Field Functions 
    bool hasEnableSearch() const { return this->enableSearch_ != nullptr;};
    void deleteEnableSearch() { this->enableSearch_ = nullptr;};
    inline bool enableSearch() const { DARABONBA_PTR_GET_DEFAULT(enableSearch_, false) };
    inline CreateAndPulishAgentRequestApplicationConfigRagConfig& setEnableSearch(bool enableSearch) { DARABONBA_PTR_SET_VALUE(enableSearch_, enableSearch) };


    // enableWebSearch Field Functions 
    bool hasEnableWebSearch() const { return this->enableWebSearch_ != nullptr;};
    void deleteEnableWebSearch() { this->enableWebSearch_ = nullptr;};
    inline bool enableWebSearch() const { DARABONBA_PTR_GET_DEFAULT(enableWebSearch_, false) };
    inline CreateAndPulishAgentRequestApplicationConfigRagConfig& setEnableWebSearch(bool enableWebSearch) { DARABONBA_PTR_SET_VALUE(enableWebSearch_, enableWebSearch) };


    // fixedReplyDetail Field Functions 
    bool hasFixedReplyDetail() const { return this->fixedReplyDetail_ != nullptr;};
    void deleteFixedReplyDetail() { this->fixedReplyDetail_ = nullptr;};
    inline string fixedReplyDetail() const { DARABONBA_PTR_GET_DEFAULT(fixedReplyDetail_, "") };
    inline CreateAndPulishAgentRequestApplicationConfigRagConfig& setFixedReplyDetail(string fixedReplyDetail) { DARABONBA_PTR_SET_VALUE(fixedReplyDetail_, fixedReplyDetail) };


    // knowledgeBaseCodeList Field Functions 
    bool hasKnowledgeBaseCodeList() const { return this->knowledgeBaseCodeList_ != nullptr;};
    void deleteKnowledgeBaseCodeList() { this->knowledgeBaseCodeList_ = nullptr;};
    inline const vector<string> & knowledgeBaseCodeList() const { DARABONBA_PTR_GET_CONST(knowledgeBaseCodeList_, vector<string>) };
    inline vector<string> knowledgeBaseCodeList() { DARABONBA_PTR_GET(knowledgeBaseCodeList_, vector<string>) };
    inline CreateAndPulishAgentRequestApplicationConfigRagConfig& setKnowledgeBaseCodeList(const vector<string> & knowledgeBaseCodeList) { DARABONBA_PTR_SET_VALUE(knowledgeBaseCodeList_, knowledgeBaseCodeList) };
    inline CreateAndPulishAgentRequestApplicationConfigRagConfig& setKnowledgeBaseCodeList(vector<string> && knowledgeBaseCodeList) { DARABONBA_PTR_SET_RVALUE(knowledgeBaseCodeList_, knowledgeBaseCodeList) };


    // promptStrategy Field Functions 
    bool hasPromptStrategy() const { return this->promptStrategy_ != nullptr;};
    void deletePromptStrategy() { this->promptStrategy_ = nullptr;};
    inline string promptStrategy() const { DARABONBA_PTR_GET_DEFAULT(promptStrategy_, "") };
    inline CreateAndPulishAgentRequestApplicationConfigRagConfig& setPromptStrategy(string promptStrategy) { DARABONBA_PTR_SET_VALUE(promptStrategy_, promptStrategy) };


    // ragRejectType Field Functions 
    bool hasRagRejectType() const { return this->ragRejectType_ != nullptr;};
    void deleteRagRejectType() { this->ragRejectType_ = nullptr;};
    inline string ragRejectType() const { DARABONBA_PTR_GET_DEFAULT(ragRejectType_, "") };
    inline CreateAndPulishAgentRequestApplicationConfigRagConfig& setRagRejectType(string ragRejectType) { DARABONBA_PTR_SET_VALUE(ragRejectType_, ragRejectType) };


    // rejectFilterPrompt Field Functions 
    bool hasRejectFilterPrompt() const { return this->rejectFilterPrompt_ != nullptr;};
    void deleteRejectFilterPrompt() { this->rejectFilterPrompt_ = nullptr;};
    inline string rejectFilterPrompt() const { DARABONBA_PTR_GET_DEFAULT(rejectFilterPrompt_, "") };
    inline CreateAndPulishAgentRequestApplicationConfigRagConfig& setRejectFilterPrompt(string rejectFilterPrompt) { DARABONBA_PTR_SET_VALUE(rejectFilterPrompt_, rejectFilterPrompt) };


    // rejectFilterType Field Functions 
    bool hasRejectFilterType() const { return this->rejectFilterType_ != nullptr;};
    void deleteRejectFilterType() { this->rejectFilterType_ = nullptr;};
    inline string rejectFilterType() const { DARABONBA_PTR_GET_DEFAULT(rejectFilterType_, "") };
    inline CreateAndPulishAgentRequestApplicationConfigRagConfig& setRejectFilterType(string rejectFilterType) { DARABONBA_PTR_SET_VALUE(rejectFilterType_, rejectFilterType) };


    // retrieveMaxLength Field Functions 
    bool hasRetrieveMaxLength() const { return this->retrieveMaxLength_ != nullptr;};
    void deleteRetrieveMaxLength() { this->retrieveMaxLength_ = nullptr;};
    inline int32_t retrieveMaxLength() const { DARABONBA_PTR_GET_DEFAULT(retrieveMaxLength_, 0) };
    inline CreateAndPulishAgentRequestApplicationConfigRagConfig& setRetrieveMaxLength(int32_t retrieveMaxLength) { DARABONBA_PTR_SET_VALUE(retrieveMaxLength_, retrieveMaxLength) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t topK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline CreateAndPulishAgentRequestApplicationConfigRagConfig& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


  protected:
    std::shared_ptr<string> answerScope_ = nullptr;
    std::shared_ptr<bool> enableCitation_ = nullptr;
    std::shared_ptr<bool> enableSearch_ = nullptr;
    std::shared_ptr<bool> enableWebSearch_ = nullptr;
    std::shared_ptr<string> fixedReplyDetail_ = nullptr;
    std::shared_ptr<vector<string>> knowledgeBaseCodeList_ = nullptr;
    std::shared_ptr<string> promptStrategy_ = nullptr;
    std::shared_ptr<string> ragRejectType_ = nullptr;
    std::shared_ptr<string> rejectFilterPrompt_ = nullptr;
    std::shared_ptr<string> rejectFilterType_ = nullptr;
    std::shared_ptr<int32_t> retrieveMaxLength_ = nullptr;
    std::shared_ptr<int32_t> topK_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
