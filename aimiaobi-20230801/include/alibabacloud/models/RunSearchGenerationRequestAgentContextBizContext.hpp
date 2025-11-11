// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONREQUESTAGENTCONTEXTBIZCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONREQUESTAGENTCONTEXTBIZCONTEXT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelection.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationRequestAgentContextBizContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationRequestAgentContextBizContext& obj) { 
      DARABONBA_PTR_TO_JSON(AskUser, askUser_);
      DARABONBA_PTR_TO_JSON(AskUserKeywords, askUserKeywords_);
      DARABONBA_PTR_TO_JSON(CurrentStep, currentStep_);
      DARABONBA_PTR_TO_JSON(MultimodalMediaSelection, multimodalMediaSelection_);
      DARABONBA_PTR_TO_JSON(NextStep, nextStep_);
      DARABONBA_PTR_TO_JSON(SkipCurrentSupplement, skipCurrentSupplement_);
      DARABONBA_PTR_TO_JSON(SupplementDataType, supplementDataType_);
      DARABONBA_PTR_TO_JSON(SupplementEnable, supplementEnable_);
      DARABONBA_PTR_TO_JSON(UserBack, userBack_);
      DARABONBA_PTR_TO_JSON(UserBackKeywords, userBackKeywords_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationRequestAgentContextBizContext& obj) { 
      DARABONBA_PTR_FROM_JSON(AskUser, askUser_);
      DARABONBA_PTR_FROM_JSON(AskUserKeywords, askUserKeywords_);
      DARABONBA_PTR_FROM_JSON(CurrentStep, currentStep_);
      DARABONBA_PTR_FROM_JSON(MultimodalMediaSelection, multimodalMediaSelection_);
      DARABONBA_PTR_FROM_JSON(NextStep, nextStep_);
      DARABONBA_PTR_FROM_JSON(SkipCurrentSupplement, skipCurrentSupplement_);
      DARABONBA_PTR_FROM_JSON(SupplementDataType, supplementDataType_);
      DARABONBA_PTR_FROM_JSON(SupplementEnable, supplementEnable_);
      DARABONBA_PTR_FROM_JSON(UserBack, userBack_);
      DARABONBA_PTR_FROM_JSON(UserBackKeywords, userBackKeywords_);
    };
    RunSearchGenerationRequestAgentContextBizContext() = default ;
    RunSearchGenerationRequestAgentContextBizContext(const RunSearchGenerationRequestAgentContextBizContext &) = default ;
    RunSearchGenerationRequestAgentContextBizContext(RunSearchGenerationRequestAgentContextBizContext &&) = default ;
    RunSearchGenerationRequestAgentContextBizContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationRequestAgentContextBizContext() = default ;
    RunSearchGenerationRequestAgentContextBizContext& operator=(const RunSearchGenerationRequestAgentContextBizContext &) = default ;
    RunSearchGenerationRequestAgentContextBizContext& operator=(RunSearchGenerationRequestAgentContextBizContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->askUser_ == nullptr
        && return this->askUserKeywords_ == nullptr && return this->currentStep_ == nullptr && return this->multimodalMediaSelection_ == nullptr && return this->nextStep_ == nullptr && return this->skipCurrentSupplement_ == nullptr
        && return this->supplementDataType_ == nullptr && return this->supplementEnable_ == nullptr && return this->userBack_ == nullptr && return this->userBackKeywords_ == nullptr; };
    // askUser Field Functions 
    bool hasAskUser() const { return this->askUser_ != nullptr;};
    void deleteAskUser() { this->askUser_ = nullptr;};
    inline string askUser() const { DARABONBA_PTR_GET_DEFAULT(askUser_, "") };
    inline RunSearchGenerationRequestAgentContextBizContext& setAskUser(string askUser) { DARABONBA_PTR_SET_VALUE(askUser_, askUser) };


    // askUserKeywords Field Functions 
    bool hasAskUserKeywords() const { return this->askUserKeywords_ != nullptr;};
    void deleteAskUserKeywords() { this->askUserKeywords_ = nullptr;};
    inline const vector<string> & askUserKeywords() const { DARABONBA_PTR_GET_CONST(askUserKeywords_, vector<string>) };
    inline vector<string> askUserKeywords() { DARABONBA_PTR_GET(askUserKeywords_, vector<string>) };
    inline RunSearchGenerationRequestAgentContextBizContext& setAskUserKeywords(const vector<string> & askUserKeywords) { DARABONBA_PTR_SET_VALUE(askUserKeywords_, askUserKeywords) };
    inline RunSearchGenerationRequestAgentContextBizContext& setAskUserKeywords(vector<string> && askUserKeywords) { DARABONBA_PTR_SET_RVALUE(askUserKeywords_, askUserKeywords) };


    // currentStep Field Functions 
    bool hasCurrentStep() const { return this->currentStep_ != nullptr;};
    void deleteCurrentStep() { this->currentStep_ = nullptr;};
    inline string currentStep() const { DARABONBA_PTR_GET_DEFAULT(currentStep_, "") };
    inline RunSearchGenerationRequestAgentContextBizContext& setCurrentStep(string currentStep) { DARABONBA_PTR_SET_VALUE(currentStep_, currentStep) };


    // multimodalMediaSelection Field Functions 
    bool hasMultimodalMediaSelection() const { return this->multimodalMediaSelection_ != nullptr;};
    void deleteMultimodalMediaSelection() { this->multimodalMediaSelection_ = nullptr;};
    inline const Models::RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelection & multimodalMediaSelection() const { DARABONBA_PTR_GET_CONST(multimodalMediaSelection_, Models::RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelection) };
    inline Models::RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelection multimodalMediaSelection() { DARABONBA_PTR_GET(multimodalMediaSelection_, Models::RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelection) };
    inline RunSearchGenerationRequestAgentContextBizContext& setMultimodalMediaSelection(const Models::RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelection & multimodalMediaSelection) { DARABONBA_PTR_SET_VALUE(multimodalMediaSelection_, multimodalMediaSelection) };
    inline RunSearchGenerationRequestAgentContextBizContext& setMultimodalMediaSelection(Models::RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelection && multimodalMediaSelection) { DARABONBA_PTR_SET_RVALUE(multimodalMediaSelection_, multimodalMediaSelection) };


    // nextStep Field Functions 
    bool hasNextStep() const { return this->nextStep_ != nullptr;};
    void deleteNextStep() { this->nextStep_ = nullptr;};
    inline string nextStep() const { DARABONBA_PTR_GET_DEFAULT(nextStep_, "") };
    inline RunSearchGenerationRequestAgentContextBizContext& setNextStep(string nextStep) { DARABONBA_PTR_SET_VALUE(nextStep_, nextStep) };


    // skipCurrentSupplement Field Functions 
    bool hasSkipCurrentSupplement() const { return this->skipCurrentSupplement_ != nullptr;};
    void deleteSkipCurrentSupplement() { this->skipCurrentSupplement_ = nullptr;};
    inline bool skipCurrentSupplement() const { DARABONBA_PTR_GET_DEFAULT(skipCurrentSupplement_, false) };
    inline RunSearchGenerationRequestAgentContextBizContext& setSkipCurrentSupplement(bool skipCurrentSupplement) { DARABONBA_PTR_SET_VALUE(skipCurrentSupplement_, skipCurrentSupplement) };


    // supplementDataType Field Functions 
    bool hasSupplementDataType() const { return this->supplementDataType_ != nullptr;};
    void deleteSupplementDataType() { this->supplementDataType_ = nullptr;};
    inline string supplementDataType() const { DARABONBA_PTR_GET_DEFAULT(supplementDataType_, "") };
    inline RunSearchGenerationRequestAgentContextBizContext& setSupplementDataType(string supplementDataType) { DARABONBA_PTR_SET_VALUE(supplementDataType_, supplementDataType) };


    // supplementEnable Field Functions 
    bool hasSupplementEnable() const { return this->supplementEnable_ != nullptr;};
    void deleteSupplementEnable() { this->supplementEnable_ = nullptr;};
    inline bool supplementEnable() const { DARABONBA_PTR_GET_DEFAULT(supplementEnable_, false) };
    inline RunSearchGenerationRequestAgentContextBizContext& setSupplementEnable(bool supplementEnable) { DARABONBA_PTR_SET_VALUE(supplementEnable_, supplementEnable) };


    // userBack Field Functions 
    bool hasUserBack() const { return this->userBack_ != nullptr;};
    void deleteUserBack() { this->userBack_ = nullptr;};
    inline string userBack() const { DARABONBA_PTR_GET_DEFAULT(userBack_, "") };
    inline RunSearchGenerationRequestAgentContextBizContext& setUserBack(string userBack) { DARABONBA_PTR_SET_VALUE(userBack_, userBack) };


    // userBackKeywords Field Functions 
    bool hasUserBackKeywords() const { return this->userBackKeywords_ != nullptr;};
    void deleteUserBackKeywords() { this->userBackKeywords_ = nullptr;};
    inline const vector<string> & userBackKeywords() const { DARABONBA_PTR_GET_CONST(userBackKeywords_, vector<string>) };
    inline vector<string> userBackKeywords() { DARABONBA_PTR_GET(userBackKeywords_, vector<string>) };
    inline RunSearchGenerationRequestAgentContextBizContext& setUserBackKeywords(const vector<string> & userBackKeywords) { DARABONBA_PTR_SET_VALUE(userBackKeywords_, userBackKeywords) };
    inline RunSearchGenerationRequestAgentContextBizContext& setUserBackKeywords(vector<string> && userBackKeywords) { DARABONBA_PTR_SET_RVALUE(userBackKeywords_, userBackKeywords) };


  protected:
    std::shared_ptr<string> askUser_ = nullptr;
    std::shared_ptr<vector<string>> askUserKeywords_ = nullptr;
    std::shared_ptr<string> currentStep_ = nullptr;
    std::shared_ptr<Models::RunSearchGenerationRequestAgentContextBizContextMultimodalMediaSelection> multimodalMediaSelection_ = nullptr;
    std::shared_ptr<string> nextStep_ = nullptr;
    std::shared_ptr<bool> skipCurrentSupplement_ = nullptr;
    std::shared_ptr<string> supplementDataType_ = nullptr;
    std::shared_ptr<bool> supplementEnable_ = nullptr;
    std::shared_ptr<string> userBack_ = nullptr;
    std::shared_ptr<vector<string>> userBackKeywords_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
