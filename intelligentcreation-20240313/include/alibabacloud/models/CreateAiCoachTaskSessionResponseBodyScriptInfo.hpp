// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAICOACHTASKSESSIONRESPONSEBODYSCRIPTINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATEAICOACHTASKSESSIONRESPONSEBODYSCRIPTINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class CreateAICoachTaskSessionResponseBodyScriptInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAICoachTaskSessionResponseBodyScriptInfo& obj) { 
      DARABONBA_PTR_TO_JSON(agentIconUrl, agentIconUrl_);
      DARABONBA_PTR_TO_JSON(characterName, characterName_);
      DARABONBA_PTR_TO_JSON(dialogueTextFlag, dialogueTextFlag_);
      DARABONBA_PTR_TO_JSON(dialogueTipFlag, dialogueTipFlag_);
      DARABONBA_PTR_TO_JSON(initiator, initiator_);
      DARABONBA_PTR_TO_JSON(inputTypeList, inputTypeList_);
      DARABONBA_PTR_TO_JSON(maxDuration, maxDuration_);
      DARABONBA_PTR_TO_JSON(scriptDesc, scriptDesc_);
      DARABONBA_PTR_TO_JSON(scriptName, scriptName_);
      DARABONBA_PTR_TO_JSON(scriptRecordId, scriptRecordId_);
      DARABONBA_PTR_TO_JSON(scriptType, scriptType_);
      DARABONBA_PTR_TO_JSON(sparringTipContent, sparringTipContent_);
      DARABONBA_PTR_TO_JSON(sparringTipTitle, sparringTipTitle_);
      DARABONBA_PTR_TO_JSON(studentThinkTimeFlag, studentThinkTimeFlag_);
      DARABONBA_PTR_TO_JSON(studentThinkTimeLimit, studentThinkTimeLimit_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAICoachTaskSessionResponseBodyScriptInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(agentIconUrl, agentIconUrl_);
      DARABONBA_PTR_FROM_JSON(characterName, characterName_);
      DARABONBA_PTR_FROM_JSON(dialogueTextFlag, dialogueTextFlag_);
      DARABONBA_PTR_FROM_JSON(dialogueTipFlag, dialogueTipFlag_);
      DARABONBA_PTR_FROM_JSON(initiator, initiator_);
      DARABONBA_PTR_FROM_JSON(inputTypeList, inputTypeList_);
      DARABONBA_PTR_FROM_JSON(maxDuration, maxDuration_);
      DARABONBA_PTR_FROM_JSON(scriptDesc, scriptDesc_);
      DARABONBA_PTR_FROM_JSON(scriptName, scriptName_);
      DARABONBA_PTR_FROM_JSON(scriptRecordId, scriptRecordId_);
      DARABONBA_PTR_FROM_JSON(scriptType, scriptType_);
      DARABONBA_PTR_FROM_JSON(sparringTipContent, sparringTipContent_);
      DARABONBA_PTR_FROM_JSON(sparringTipTitle, sparringTipTitle_);
      DARABONBA_PTR_FROM_JSON(studentThinkTimeFlag, studentThinkTimeFlag_);
      DARABONBA_PTR_FROM_JSON(studentThinkTimeLimit, studentThinkTimeLimit_);
    };
    CreateAICoachTaskSessionResponseBodyScriptInfo() = default ;
    CreateAICoachTaskSessionResponseBodyScriptInfo(const CreateAICoachTaskSessionResponseBodyScriptInfo &) = default ;
    CreateAICoachTaskSessionResponseBodyScriptInfo(CreateAICoachTaskSessionResponseBodyScriptInfo &&) = default ;
    CreateAICoachTaskSessionResponseBodyScriptInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAICoachTaskSessionResponseBodyScriptInfo() = default ;
    CreateAICoachTaskSessionResponseBodyScriptInfo& operator=(const CreateAICoachTaskSessionResponseBodyScriptInfo &) = default ;
    CreateAICoachTaskSessionResponseBodyScriptInfo& operator=(CreateAICoachTaskSessionResponseBodyScriptInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentIconUrl_ == nullptr
        && return this->characterName_ == nullptr && return this->dialogueTextFlag_ == nullptr && return this->dialogueTipFlag_ == nullptr && return this->initiator_ == nullptr && return this->inputTypeList_ == nullptr
        && return this->maxDuration_ == nullptr && return this->scriptDesc_ == nullptr && return this->scriptName_ == nullptr && return this->scriptRecordId_ == nullptr && return this->scriptType_ == nullptr
        && return this->sparringTipContent_ == nullptr && return this->sparringTipTitle_ == nullptr && return this->studentThinkTimeFlag_ == nullptr && return this->studentThinkTimeLimit_ == nullptr; };
    // agentIconUrl Field Functions 
    bool hasAgentIconUrl() const { return this->agentIconUrl_ != nullptr;};
    void deleteAgentIconUrl() { this->agentIconUrl_ = nullptr;};
    inline string agentIconUrl() const { DARABONBA_PTR_GET_DEFAULT(agentIconUrl_, "") };
    inline CreateAICoachTaskSessionResponseBodyScriptInfo& setAgentIconUrl(string agentIconUrl) { DARABONBA_PTR_SET_VALUE(agentIconUrl_, agentIconUrl) };


    // characterName Field Functions 
    bool hasCharacterName() const { return this->characterName_ != nullptr;};
    void deleteCharacterName() { this->characterName_ = nullptr;};
    inline string characterName() const { DARABONBA_PTR_GET_DEFAULT(characterName_, "") };
    inline CreateAICoachTaskSessionResponseBodyScriptInfo& setCharacterName(string characterName) { DARABONBA_PTR_SET_VALUE(characterName_, characterName) };


    // dialogueTextFlag Field Functions 
    bool hasDialogueTextFlag() const { return this->dialogueTextFlag_ != nullptr;};
    void deleteDialogueTextFlag() { this->dialogueTextFlag_ = nullptr;};
    inline bool dialogueTextFlag() const { DARABONBA_PTR_GET_DEFAULT(dialogueTextFlag_, false) };
    inline CreateAICoachTaskSessionResponseBodyScriptInfo& setDialogueTextFlag(bool dialogueTextFlag) { DARABONBA_PTR_SET_VALUE(dialogueTextFlag_, dialogueTextFlag) };


    // dialogueTipFlag Field Functions 
    bool hasDialogueTipFlag() const { return this->dialogueTipFlag_ != nullptr;};
    void deleteDialogueTipFlag() { this->dialogueTipFlag_ = nullptr;};
    inline bool dialogueTipFlag() const { DARABONBA_PTR_GET_DEFAULT(dialogueTipFlag_, false) };
    inline CreateAICoachTaskSessionResponseBodyScriptInfo& setDialogueTipFlag(bool dialogueTipFlag) { DARABONBA_PTR_SET_VALUE(dialogueTipFlag_, dialogueTipFlag) };


    // initiator Field Functions 
    bool hasInitiator() const { return this->initiator_ != nullptr;};
    void deleteInitiator() { this->initiator_ = nullptr;};
    inline string initiator() const { DARABONBA_PTR_GET_DEFAULT(initiator_, "") };
    inline CreateAICoachTaskSessionResponseBodyScriptInfo& setInitiator(string initiator) { DARABONBA_PTR_SET_VALUE(initiator_, initiator) };


    // inputTypeList Field Functions 
    bool hasInputTypeList() const { return this->inputTypeList_ != nullptr;};
    void deleteInputTypeList() { this->inputTypeList_ = nullptr;};
    inline const vector<string> & inputTypeList() const { DARABONBA_PTR_GET_CONST(inputTypeList_, vector<string>) };
    inline vector<string> inputTypeList() { DARABONBA_PTR_GET(inputTypeList_, vector<string>) };
    inline CreateAICoachTaskSessionResponseBodyScriptInfo& setInputTypeList(const vector<string> & inputTypeList) { DARABONBA_PTR_SET_VALUE(inputTypeList_, inputTypeList) };
    inline CreateAICoachTaskSessionResponseBodyScriptInfo& setInputTypeList(vector<string> && inputTypeList) { DARABONBA_PTR_SET_RVALUE(inputTypeList_, inputTypeList) };


    // maxDuration Field Functions 
    bool hasMaxDuration() const { return this->maxDuration_ != nullptr;};
    void deleteMaxDuration() { this->maxDuration_ = nullptr;};
    inline int64_t maxDuration() const { DARABONBA_PTR_GET_DEFAULT(maxDuration_, 0L) };
    inline CreateAICoachTaskSessionResponseBodyScriptInfo& setMaxDuration(int64_t maxDuration) { DARABONBA_PTR_SET_VALUE(maxDuration_, maxDuration) };


    // scriptDesc Field Functions 
    bool hasScriptDesc() const { return this->scriptDesc_ != nullptr;};
    void deleteScriptDesc() { this->scriptDesc_ = nullptr;};
    inline string scriptDesc() const { DARABONBA_PTR_GET_DEFAULT(scriptDesc_, "") };
    inline CreateAICoachTaskSessionResponseBodyScriptInfo& setScriptDesc(string scriptDesc) { DARABONBA_PTR_SET_VALUE(scriptDesc_, scriptDesc) };


    // scriptName Field Functions 
    bool hasScriptName() const { return this->scriptName_ != nullptr;};
    void deleteScriptName() { this->scriptName_ = nullptr;};
    inline string scriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
    inline CreateAICoachTaskSessionResponseBodyScriptInfo& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


    // scriptRecordId Field Functions 
    bool hasScriptRecordId() const { return this->scriptRecordId_ != nullptr;};
    void deleteScriptRecordId() { this->scriptRecordId_ = nullptr;};
    inline string scriptRecordId() const { DARABONBA_PTR_GET_DEFAULT(scriptRecordId_, "") };
    inline CreateAICoachTaskSessionResponseBodyScriptInfo& setScriptRecordId(string scriptRecordId) { DARABONBA_PTR_SET_VALUE(scriptRecordId_, scriptRecordId) };


    // scriptType Field Functions 
    bool hasScriptType() const { return this->scriptType_ != nullptr;};
    void deleteScriptType() { this->scriptType_ = nullptr;};
    inline int64_t scriptType() const { DARABONBA_PTR_GET_DEFAULT(scriptType_, 0L) };
    inline CreateAICoachTaskSessionResponseBodyScriptInfo& setScriptType(int64_t scriptType) { DARABONBA_PTR_SET_VALUE(scriptType_, scriptType) };


    // sparringTipContent Field Functions 
    bool hasSparringTipContent() const { return this->sparringTipContent_ != nullptr;};
    void deleteSparringTipContent() { this->sparringTipContent_ = nullptr;};
    inline string sparringTipContent() const { DARABONBA_PTR_GET_DEFAULT(sparringTipContent_, "") };
    inline CreateAICoachTaskSessionResponseBodyScriptInfo& setSparringTipContent(string sparringTipContent) { DARABONBA_PTR_SET_VALUE(sparringTipContent_, sparringTipContent) };


    // sparringTipTitle Field Functions 
    bool hasSparringTipTitle() const { return this->sparringTipTitle_ != nullptr;};
    void deleteSparringTipTitle() { this->sparringTipTitle_ = nullptr;};
    inline string sparringTipTitle() const { DARABONBA_PTR_GET_DEFAULT(sparringTipTitle_, "") };
    inline CreateAICoachTaskSessionResponseBodyScriptInfo& setSparringTipTitle(string sparringTipTitle) { DARABONBA_PTR_SET_VALUE(sparringTipTitle_, sparringTipTitle) };


    // studentThinkTimeFlag Field Functions 
    bool hasStudentThinkTimeFlag() const { return this->studentThinkTimeFlag_ != nullptr;};
    void deleteStudentThinkTimeFlag() { this->studentThinkTimeFlag_ = nullptr;};
    inline bool studentThinkTimeFlag() const { DARABONBA_PTR_GET_DEFAULT(studentThinkTimeFlag_, false) };
    inline CreateAICoachTaskSessionResponseBodyScriptInfo& setStudentThinkTimeFlag(bool studentThinkTimeFlag) { DARABONBA_PTR_SET_VALUE(studentThinkTimeFlag_, studentThinkTimeFlag) };


    // studentThinkTimeLimit Field Functions 
    bool hasStudentThinkTimeLimit() const { return this->studentThinkTimeLimit_ != nullptr;};
    void deleteStudentThinkTimeLimit() { this->studentThinkTimeLimit_ = nullptr;};
    inline int64_t studentThinkTimeLimit() const { DARABONBA_PTR_GET_DEFAULT(studentThinkTimeLimit_, 0L) };
    inline CreateAICoachTaskSessionResponseBodyScriptInfo& setStudentThinkTimeLimit(int64_t studentThinkTimeLimit) { DARABONBA_PTR_SET_VALUE(studentThinkTimeLimit_, studentThinkTimeLimit) };


  protected:
    std::shared_ptr<string> agentIconUrl_ = nullptr;
    std::shared_ptr<string> characterName_ = nullptr;
    std::shared_ptr<bool> dialogueTextFlag_ = nullptr;
    std::shared_ptr<bool> dialogueTipFlag_ = nullptr;
    std::shared_ptr<string> initiator_ = nullptr;
    std::shared_ptr<vector<string>> inputTypeList_ = nullptr;
    std::shared_ptr<int64_t> maxDuration_ = nullptr;
    std::shared_ptr<string> scriptDesc_ = nullptr;
    std::shared_ptr<string> scriptName_ = nullptr;
    std::shared_ptr<string> scriptRecordId_ = nullptr;
    std::shared_ptr<int64_t> scriptType_ = nullptr;
    std::shared_ptr<string> sparringTipContent_ = nullptr;
    std::shared_ptr<string> sparringTipTitle_ = nullptr;
    std::shared_ptr<bool> studentThinkTimeFlag_ = nullptr;
    std::shared_ptr<int64_t> studentThinkTimeLimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
