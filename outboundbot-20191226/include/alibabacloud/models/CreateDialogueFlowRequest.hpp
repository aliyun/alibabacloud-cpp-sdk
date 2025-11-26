// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIALOGUEFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIALOGUEFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateDialogueFlowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDialogueFlowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DialogueFlowType, dialogueFlowType_);
      DARABONBA_PTR_TO_JSON(DialogueName, dialogueName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDialogueFlowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DialogueFlowType, dialogueFlowType_);
      DARABONBA_PTR_FROM_JSON(DialogueName, dialogueName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
    };
    CreateDialogueFlowRequest() = default ;
    CreateDialogueFlowRequest(const CreateDialogueFlowRequest &) = default ;
    CreateDialogueFlowRequest(CreateDialogueFlowRequest &&) = default ;
    CreateDialogueFlowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDialogueFlowRequest() = default ;
    CreateDialogueFlowRequest& operator=(const CreateDialogueFlowRequest &) = default ;
    CreateDialogueFlowRequest& operator=(CreateDialogueFlowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dialogueFlowType_ == nullptr
        && return this->dialogueName_ == nullptr && return this->instanceId_ == nullptr && return this->scriptId_ == nullptr; };
    // dialogueFlowType Field Functions 
    bool hasDialogueFlowType() const { return this->dialogueFlowType_ != nullptr;};
    void deleteDialogueFlowType() { this->dialogueFlowType_ = nullptr;};
    inline string dialogueFlowType() const { DARABONBA_PTR_GET_DEFAULT(dialogueFlowType_, "") };
    inline CreateDialogueFlowRequest& setDialogueFlowType(string dialogueFlowType) { DARABONBA_PTR_SET_VALUE(dialogueFlowType_, dialogueFlowType) };


    // dialogueName Field Functions 
    bool hasDialogueName() const { return this->dialogueName_ != nullptr;};
    void deleteDialogueName() { this->dialogueName_ = nullptr;};
    inline string dialogueName() const { DARABONBA_PTR_GET_DEFAULT(dialogueName_, "") };
    inline CreateDialogueFlowRequest& setDialogueName(string dialogueName) { DARABONBA_PTR_SET_VALUE(dialogueName_, dialogueName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateDialogueFlowRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline CreateDialogueFlowRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dialogueFlowType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dialogueName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scriptId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
