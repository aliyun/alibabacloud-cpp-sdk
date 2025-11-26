// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIALOGUEFLOWSRESPONSEBODYDIALOGUEFLOWS_HPP_
#define ALIBABACLOUD_MODELS_LISTDIALOGUEFLOWSRESPONSEBODYDIALOGUEFLOWS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListDialogueFlowsResponseBodyDialogueFlows : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDialogueFlowsResponseBodyDialogueFlows& obj) { 
      DARABONBA_PTR_TO_JSON(DialogueFlowDefinition, dialogueFlowDefinition_);
      DARABONBA_PTR_TO_JSON(DialogueFlowId, dialogueFlowId_);
      DARABONBA_PTR_TO_JSON(DialogueFlowName, dialogueFlowName_);
      DARABONBA_PTR_TO_JSON(DialogueFlowType, dialogueFlowType_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(ScriptVersion, scriptVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListDialogueFlowsResponseBodyDialogueFlows& obj) { 
      DARABONBA_PTR_FROM_JSON(DialogueFlowDefinition, dialogueFlowDefinition_);
      DARABONBA_PTR_FROM_JSON(DialogueFlowId, dialogueFlowId_);
      DARABONBA_PTR_FROM_JSON(DialogueFlowName, dialogueFlowName_);
      DARABONBA_PTR_FROM_JSON(DialogueFlowType, dialogueFlowType_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(ScriptVersion, scriptVersion_);
    };
    ListDialogueFlowsResponseBodyDialogueFlows() = default ;
    ListDialogueFlowsResponseBodyDialogueFlows(const ListDialogueFlowsResponseBodyDialogueFlows &) = default ;
    ListDialogueFlowsResponseBodyDialogueFlows(ListDialogueFlowsResponseBodyDialogueFlows &&) = default ;
    ListDialogueFlowsResponseBodyDialogueFlows(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDialogueFlowsResponseBodyDialogueFlows() = default ;
    ListDialogueFlowsResponseBodyDialogueFlows& operator=(const ListDialogueFlowsResponseBodyDialogueFlows &) = default ;
    ListDialogueFlowsResponseBodyDialogueFlows& operator=(ListDialogueFlowsResponseBodyDialogueFlows &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dialogueFlowDefinition_ == nullptr
        && return this->dialogueFlowId_ == nullptr && return this->dialogueFlowName_ == nullptr && return this->dialogueFlowType_ == nullptr && return this->scriptId_ == nullptr && return this->scriptVersion_ == nullptr; };
    // dialogueFlowDefinition Field Functions 
    bool hasDialogueFlowDefinition() const { return this->dialogueFlowDefinition_ != nullptr;};
    void deleteDialogueFlowDefinition() { this->dialogueFlowDefinition_ = nullptr;};
    inline string dialogueFlowDefinition() const { DARABONBA_PTR_GET_DEFAULT(dialogueFlowDefinition_, "") };
    inline ListDialogueFlowsResponseBodyDialogueFlows& setDialogueFlowDefinition(string dialogueFlowDefinition) { DARABONBA_PTR_SET_VALUE(dialogueFlowDefinition_, dialogueFlowDefinition) };


    // dialogueFlowId Field Functions 
    bool hasDialogueFlowId() const { return this->dialogueFlowId_ != nullptr;};
    void deleteDialogueFlowId() { this->dialogueFlowId_ = nullptr;};
    inline string dialogueFlowId() const { DARABONBA_PTR_GET_DEFAULT(dialogueFlowId_, "") };
    inline ListDialogueFlowsResponseBodyDialogueFlows& setDialogueFlowId(string dialogueFlowId) { DARABONBA_PTR_SET_VALUE(dialogueFlowId_, dialogueFlowId) };


    // dialogueFlowName Field Functions 
    bool hasDialogueFlowName() const { return this->dialogueFlowName_ != nullptr;};
    void deleteDialogueFlowName() { this->dialogueFlowName_ = nullptr;};
    inline string dialogueFlowName() const { DARABONBA_PTR_GET_DEFAULT(dialogueFlowName_, "") };
    inline ListDialogueFlowsResponseBodyDialogueFlows& setDialogueFlowName(string dialogueFlowName) { DARABONBA_PTR_SET_VALUE(dialogueFlowName_, dialogueFlowName) };


    // dialogueFlowType Field Functions 
    bool hasDialogueFlowType() const { return this->dialogueFlowType_ != nullptr;};
    void deleteDialogueFlowType() { this->dialogueFlowType_ = nullptr;};
    inline string dialogueFlowType() const { DARABONBA_PTR_GET_DEFAULT(dialogueFlowType_, "") };
    inline ListDialogueFlowsResponseBodyDialogueFlows& setDialogueFlowType(string dialogueFlowType) { DARABONBA_PTR_SET_VALUE(dialogueFlowType_, dialogueFlowType) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ListDialogueFlowsResponseBodyDialogueFlows& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // scriptVersion Field Functions 
    bool hasScriptVersion() const { return this->scriptVersion_ != nullptr;};
    void deleteScriptVersion() { this->scriptVersion_ = nullptr;};
    inline string scriptVersion() const { DARABONBA_PTR_GET_DEFAULT(scriptVersion_, "") };
    inline ListDialogueFlowsResponseBodyDialogueFlows& setScriptVersion(string scriptVersion) { DARABONBA_PTR_SET_VALUE(scriptVersion_, scriptVersion) };


  protected:
    std::shared_ptr<string> dialogueFlowDefinition_ = nullptr;
    std::shared_ptr<string> dialogueFlowId_ = nullptr;
    std::shared_ptr<string> dialogueFlowName_ = nullptr;
    std::shared_ptr<string> dialogueFlowType_ = nullptr;
    std::shared_ptr<string> scriptId_ = nullptr;
    std::shared_ptr<string> scriptVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
