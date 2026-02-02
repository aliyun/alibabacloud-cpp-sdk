// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMAGENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMAGENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class CreateCustomAgentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomAgentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableTools, enableTools_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SkillIds, skillIdsShrink_);
      DARABONBA_PTR_TO_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_PTR_TO_JSON(Tools, toolsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomAgentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableTools, enableTools_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SkillIds, skillIdsShrink_);
      DARABONBA_PTR_FROM_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_PTR_FROM_JSON(Tools, toolsShrink_);
    };
    CreateCustomAgentShrinkRequest() = default ;
    CreateCustomAgentShrinkRequest(const CreateCustomAgentShrinkRequest &) = default ;
    CreateCustomAgentShrinkRequest(CreateCustomAgentShrinkRequest &&) = default ;
    CreateCustomAgentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomAgentShrinkRequest() = default ;
    CreateCustomAgentShrinkRequest& operator=(const CreateCustomAgentShrinkRequest &) = default ;
    CreateCustomAgentShrinkRequest& operator=(CreateCustomAgentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableTools_ == nullptr
        && this->name_ == nullptr && this->skillIdsShrink_ == nullptr && this->systemPrompt_ == nullptr && this->toolsShrink_ == nullptr; };
    // enableTools Field Functions 
    bool hasEnableTools() const { return this->enableTools_ != nullptr;};
    void deleteEnableTools() { this->enableTools_ = nullptr;};
    inline bool getEnableTools() const { DARABONBA_PTR_GET_DEFAULT(enableTools_, false) };
    inline CreateCustomAgentShrinkRequest& setEnableTools(bool enableTools) { DARABONBA_PTR_SET_VALUE(enableTools_, enableTools) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCustomAgentShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // skillIdsShrink Field Functions 
    bool hasSkillIdsShrink() const { return this->skillIdsShrink_ != nullptr;};
    void deleteSkillIdsShrink() { this->skillIdsShrink_ = nullptr;};
    inline string getSkillIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(skillIdsShrink_, "") };
    inline CreateCustomAgentShrinkRequest& setSkillIdsShrink(string skillIdsShrink) { DARABONBA_PTR_SET_VALUE(skillIdsShrink_, skillIdsShrink) };


    // systemPrompt Field Functions 
    bool hasSystemPrompt() const { return this->systemPrompt_ != nullptr;};
    void deleteSystemPrompt() { this->systemPrompt_ = nullptr;};
    inline string getSystemPrompt() const { DARABONBA_PTR_GET_DEFAULT(systemPrompt_, "") };
    inline CreateCustomAgentShrinkRequest& setSystemPrompt(string systemPrompt) { DARABONBA_PTR_SET_VALUE(systemPrompt_, systemPrompt) };


    // toolsShrink Field Functions 
    bool hasToolsShrink() const { return this->toolsShrink_ != nullptr;};
    void deleteToolsShrink() { this->toolsShrink_ = nullptr;};
    inline string getToolsShrink() const { DARABONBA_PTR_GET_DEFAULT(toolsShrink_, "") };
    inline CreateCustomAgentShrinkRequest& setToolsShrink(string toolsShrink) { DARABONBA_PTR_SET_VALUE(toolsShrink_, toolsShrink) };


  protected:
    // The system prompts.
    shared_ptr<bool> enableTools_ {};
    // The operation that you want to perform. Set the value to **CreateCustomAgent**.
    shared_ptr<string> name_ {};
    shared_ptr<string> skillIdsShrink_ {};
    // The name of the dedicated agent.
    // 
    // This parameter is required.
    shared_ptr<string> systemPrompt_ {};
    // Specifies whether to enable tools.
    shared_ptr<string> toolsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
