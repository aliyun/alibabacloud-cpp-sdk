// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDIALOGUEFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDIALOGUEFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyDialogueFlowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDialogueFlowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DialogueFlowDefinition, dialogueFlowDefinition_);
      DARABONBA_PTR_TO_JSON(DialogueFlowId, dialogueFlowId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsDrafted, isDrafted_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDialogueFlowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DialogueFlowDefinition, dialogueFlowDefinition_);
      DARABONBA_PTR_FROM_JSON(DialogueFlowId, dialogueFlowId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsDrafted, isDrafted_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
    };
    ModifyDialogueFlowRequest() = default ;
    ModifyDialogueFlowRequest(const ModifyDialogueFlowRequest &) = default ;
    ModifyDialogueFlowRequest(ModifyDialogueFlowRequest &&) = default ;
    ModifyDialogueFlowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDialogueFlowRequest() = default ;
    ModifyDialogueFlowRequest& operator=(const ModifyDialogueFlowRequest &) = default ;
    ModifyDialogueFlowRequest& operator=(ModifyDialogueFlowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dialogueFlowDefinition_ == nullptr
        && return this->dialogueFlowId_ == nullptr && return this->instanceId_ == nullptr && return this->isDrafted_ == nullptr && return this->scriptId_ == nullptr; };
    // dialogueFlowDefinition Field Functions 
    bool hasDialogueFlowDefinition() const { return this->dialogueFlowDefinition_ != nullptr;};
    void deleteDialogueFlowDefinition() { this->dialogueFlowDefinition_ = nullptr;};
    inline string dialogueFlowDefinition() const { DARABONBA_PTR_GET_DEFAULT(dialogueFlowDefinition_, "") };
    inline ModifyDialogueFlowRequest& setDialogueFlowDefinition(string dialogueFlowDefinition) { DARABONBA_PTR_SET_VALUE(dialogueFlowDefinition_, dialogueFlowDefinition) };


    // dialogueFlowId Field Functions 
    bool hasDialogueFlowId() const { return this->dialogueFlowId_ != nullptr;};
    void deleteDialogueFlowId() { this->dialogueFlowId_ = nullptr;};
    inline string dialogueFlowId() const { DARABONBA_PTR_GET_DEFAULT(dialogueFlowId_, "") };
    inline ModifyDialogueFlowRequest& setDialogueFlowId(string dialogueFlowId) { DARABONBA_PTR_SET_VALUE(dialogueFlowId_, dialogueFlowId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyDialogueFlowRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isDrafted Field Functions 
    bool hasIsDrafted() const { return this->isDrafted_ != nullptr;};
    void deleteIsDrafted() { this->isDrafted_ = nullptr;};
    inline bool isDrafted() const { DARABONBA_PTR_GET_DEFAULT(isDrafted_, false) };
    inline ModifyDialogueFlowRequest& setIsDrafted(bool isDrafted) { DARABONBA_PTR_SET_VALUE(isDrafted_, isDrafted) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ModifyDialogueFlowRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dialogueFlowDefinition_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dialogueFlowId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<bool> isDrafted_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scriptId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
