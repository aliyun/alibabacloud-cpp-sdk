// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMAGENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMAGENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class UpdateCustomAgentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomAgentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomAgentId, customAgentId_);
      DARABONBA_PTR_TO_JSON(EnableTools, enableTools_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SkillIds, skillIdsShrink_);
      DARABONBA_PTR_TO_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_PTR_TO_JSON(Tools, toolsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomAgentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomAgentId, customAgentId_);
      DARABONBA_PTR_FROM_JSON(EnableTools, enableTools_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SkillIds, skillIdsShrink_);
      DARABONBA_PTR_FROM_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_PTR_FROM_JSON(Tools, toolsShrink_);
    };
    UpdateCustomAgentShrinkRequest() = default ;
    UpdateCustomAgentShrinkRequest(const UpdateCustomAgentShrinkRequest &) = default ;
    UpdateCustomAgentShrinkRequest(UpdateCustomAgentShrinkRequest &&) = default ;
    UpdateCustomAgentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCustomAgentShrinkRequest() = default ;
    UpdateCustomAgentShrinkRequest& operator=(const UpdateCustomAgentShrinkRequest &) = default ;
    UpdateCustomAgentShrinkRequest& operator=(UpdateCustomAgentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customAgentId_ == nullptr
        && this->enableTools_ == nullptr && this->name_ == nullptr && this->skillIdsShrink_ == nullptr && this->systemPrompt_ == nullptr && this->toolsShrink_ == nullptr; };
    // customAgentId Field Functions 
    bool hasCustomAgentId() const { return this->customAgentId_ != nullptr;};
    void deleteCustomAgentId() { this->customAgentId_ = nullptr;};
    inline string getCustomAgentId() const { DARABONBA_PTR_GET_DEFAULT(customAgentId_, "") };
    inline UpdateCustomAgentShrinkRequest& setCustomAgentId(string customAgentId) { DARABONBA_PTR_SET_VALUE(customAgentId_, customAgentId) };


    // enableTools Field Functions 
    bool hasEnableTools() const { return this->enableTools_ != nullptr;};
    void deleteEnableTools() { this->enableTools_ = nullptr;};
    inline bool getEnableTools() const { DARABONBA_PTR_GET_DEFAULT(enableTools_, false) };
    inline UpdateCustomAgentShrinkRequest& setEnableTools(bool enableTools) { DARABONBA_PTR_SET_VALUE(enableTools_, enableTools) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateCustomAgentShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // skillIdsShrink Field Functions 
    bool hasSkillIdsShrink() const { return this->skillIdsShrink_ != nullptr;};
    void deleteSkillIdsShrink() { this->skillIdsShrink_ = nullptr;};
    inline string getSkillIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(skillIdsShrink_, "") };
    inline UpdateCustomAgentShrinkRequest& setSkillIdsShrink(string skillIdsShrink) { DARABONBA_PTR_SET_VALUE(skillIdsShrink_, skillIdsShrink) };


    // systemPrompt Field Functions 
    bool hasSystemPrompt() const { return this->systemPrompt_ != nullptr;};
    void deleteSystemPrompt() { this->systemPrompt_ = nullptr;};
    inline string getSystemPrompt() const { DARABONBA_PTR_GET_DEFAULT(systemPrompt_, "") };
    inline UpdateCustomAgentShrinkRequest& setSystemPrompt(string systemPrompt) { DARABONBA_PTR_SET_VALUE(systemPrompt_, systemPrompt) };


    // toolsShrink Field Functions 
    bool hasToolsShrink() const { return this->toolsShrink_ != nullptr;};
    void deleteToolsShrink() { this->toolsShrink_ = nullptr;};
    inline string getToolsShrink() const { DARABONBA_PTR_GET_DEFAULT(toolsShrink_, "") };
    inline UpdateCustomAgentShrinkRequest& setToolsShrink(string toolsShrink) { DARABONBA_PTR_SET_VALUE(toolsShrink_, toolsShrink) };


  protected:
    // The operation that you want to perform. Set the value to **UpdateCustomAgent**.
    // 
    // This parameter is required.
    shared_ptr<string> customAgentId_ {};
    // The system prompts.
    shared_ptr<bool> enableTools_ {};
    // The ID of the agent.
    shared_ptr<string> name_ {};
    shared_ptr<string> skillIdsShrink_ {};
    // The name of the agent.
    shared_ptr<string> systemPrompt_ {};
    // Specifies whether to enable tools.
    shared_ptr<string> toolsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
