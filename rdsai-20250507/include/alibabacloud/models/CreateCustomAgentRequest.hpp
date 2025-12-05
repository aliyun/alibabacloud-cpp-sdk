// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMAGENTREQUEST_HPP_
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
  class CreateCustomAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableTools, enableTools_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_PTR_TO_JSON(Tools, tools_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableTools, enableTools_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_PTR_FROM_JSON(Tools, tools_);
    };
    CreateCustomAgentRequest() = default ;
    CreateCustomAgentRequest(const CreateCustomAgentRequest &) = default ;
    CreateCustomAgentRequest(CreateCustomAgentRequest &&) = default ;
    CreateCustomAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomAgentRequest() = default ;
    CreateCustomAgentRequest& operator=(const CreateCustomAgentRequest &) = default ;
    CreateCustomAgentRequest& operator=(CreateCustomAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableTools_ == nullptr
        && return this->name_ == nullptr && return this->systemPrompt_ == nullptr && return this->tools_ == nullptr; };
    // enableTools Field Functions 
    bool hasEnableTools() const { return this->enableTools_ != nullptr;};
    void deleteEnableTools() { this->enableTools_ = nullptr;};
    inline bool enableTools() const { DARABONBA_PTR_GET_DEFAULT(enableTools_, false) };
    inline CreateCustomAgentRequest& setEnableTools(bool enableTools) { DARABONBA_PTR_SET_VALUE(enableTools_, enableTools) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCustomAgentRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // systemPrompt Field Functions 
    bool hasSystemPrompt() const { return this->systemPrompt_ != nullptr;};
    void deleteSystemPrompt() { this->systemPrompt_ = nullptr;};
    inline string systemPrompt() const { DARABONBA_PTR_GET_DEFAULT(systemPrompt_, "") };
    inline CreateCustomAgentRequest& setSystemPrompt(string systemPrompt) { DARABONBA_PTR_SET_VALUE(systemPrompt_, systemPrompt) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline const vector<string> & tools() const { DARABONBA_PTR_GET_CONST(tools_, vector<string>) };
    inline vector<string> tools() { DARABONBA_PTR_GET(tools_, vector<string>) };
    inline CreateCustomAgentRequest& setTools(const vector<string> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
    inline CreateCustomAgentRequest& setTools(vector<string> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


  protected:
    std::shared_ptr<bool> enableTools_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> systemPrompt_ = nullptr;
    std::shared_ptr<vector<string>> tools_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
