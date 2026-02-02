// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class UpdateCustomAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomAgentId, customAgentId_);
      DARABONBA_PTR_TO_JSON(EnableTools, enableTools_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SkillIds, skillIds_);
      DARABONBA_PTR_TO_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_PTR_TO_JSON(Tools, tools_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomAgentId, customAgentId_);
      DARABONBA_PTR_FROM_JSON(EnableTools, enableTools_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SkillIds, skillIds_);
      DARABONBA_PTR_FROM_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_PTR_FROM_JSON(Tools, tools_);
    };
    UpdateCustomAgentRequest() = default ;
    UpdateCustomAgentRequest(const UpdateCustomAgentRequest &) = default ;
    UpdateCustomAgentRequest(UpdateCustomAgentRequest &&) = default ;
    UpdateCustomAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCustomAgentRequest() = default ;
    UpdateCustomAgentRequest& operator=(const UpdateCustomAgentRequest &) = default ;
    UpdateCustomAgentRequest& operator=(UpdateCustomAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customAgentId_ == nullptr
        && this->enableTools_ == nullptr && this->name_ == nullptr && this->skillIds_ == nullptr && this->systemPrompt_ == nullptr && this->tools_ == nullptr; };
    // customAgentId Field Functions 
    bool hasCustomAgentId() const { return this->customAgentId_ != nullptr;};
    void deleteCustomAgentId() { this->customAgentId_ = nullptr;};
    inline string getCustomAgentId() const { DARABONBA_PTR_GET_DEFAULT(customAgentId_, "") };
    inline UpdateCustomAgentRequest& setCustomAgentId(string customAgentId) { DARABONBA_PTR_SET_VALUE(customAgentId_, customAgentId) };


    // enableTools Field Functions 
    bool hasEnableTools() const { return this->enableTools_ != nullptr;};
    void deleteEnableTools() { this->enableTools_ = nullptr;};
    inline bool getEnableTools() const { DARABONBA_PTR_GET_DEFAULT(enableTools_, false) };
    inline UpdateCustomAgentRequest& setEnableTools(bool enableTools) { DARABONBA_PTR_SET_VALUE(enableTools_, enableTools) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateCustomAgentRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // skillIds Field Functions 
    bool hasSkillIds() const { return this->skillIds_ != nullptr;};
    void deleteSkillIds() { this->skillIds_ = nullptr;};
    inline const vector<string> & getSkillIds() const { DARABONBA_PTR_GET_CONST(skillIds_, vector<string>) };
    inline vector<string> getSkillIds() { DARABONBA_PTR_GET(skillIds_, vector<string>) };
    inline UpdateCustomAgentRequest& setSkillIds(const vector<string> & skillIds) { DARABONBA_PTR_SET_VALUE(skillIds_, skillIds) };
    inline UpdateCustomAgentRequest& setSkillIds(vector<string> && skillIds) { DARABONBA_PTR_SET_RVALUE(skillIds_, skillIds) };


    // systemPrompt Field Functions 
    bool hasSystemPrompt() const { return this->systemPrompt_ != nullptr;};
    void deleteSystemPrompt() { this->systemPrompt_ = nullptr;};
    inline string getSystemPrompt() const { DARABONBA_PTR_GET_DEFAULT(systemPrompt_, "") };
    inline UpdateCustomAgentRequest& setSystemPrompt(string systemPrompt) { DARABONBA_PTR_SET_VALUE(systemPrompt_, systemPrompt) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline const vector<string> & getTools() const { DARABONBA_PTR_GET_CONST(tools_, vector<string>) };
    inline vector<string> getTools() { DARABONBA_PTR_GET(tools_, vector<string>) };
    inline UpdateCustomAgentRequest& setTools(const vector<string> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
    inline UpdateCustomAgentRequest& setTools(vector<string> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


  protected:
    // The operation that you want to perform. Set the value to **UpdateCustomAgent**.
    // 
    // This parameter is required.
    shared_ptr<string> customAgentId_ {};
    // The system prompts.
    shared_ptr<bool> enableTools_ {};
    // The ID of the agent.
    shared_ptr<string> name_ {};
    shared_ptr<vector<string>> skillIds_ {};
    // The name of the agent.
    shared_ptr<string> systemPrompt_ {};
    // Specifies whether to enable tools.
    shared_ptr<vector<string>> tools_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
