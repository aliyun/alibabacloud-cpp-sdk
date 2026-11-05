// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ada20260701
{
namespace Models
{
  class CreateAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_ANY_TO_JSON(KnowledgeBases, knowledgeBases_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_ANY_TO_JSON(Skills, skills_);
      DARABONBA_PTR_TO_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_ANY_TO_JSON(Tools, tools_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_ANY_FROM_JSON(KnowledgeBases, knowledgeBases_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_ANY_FROM_JSON(Skills, skills_);
      DARABONBA_PTR_FROM_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_ANY_FROM_JSON(Tools, tools_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
    };
    CreateAgentRequest() = default ;
    CreateAgentRequest(const CreateAgentRequest &) = default ;
    CreateAgentRequest(CreateAgentRequest &&) = default ;
    CreateAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentRequest() = default ;
    CreateAgentRequest& operator=(const CreateAgentRequest &) = default ;
    CreateAgentRequest& operator=(CreateAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->displayName_ == nullptr && this->knowledgeBases_ == nullptr && this->name_ == nullptr && this->skills_ == nullptr && this->systemPrompt_ == nullptr
        && this->tools_ == nullptr && this->visibility_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAgentRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateAgentRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // knowledgeBases Field Functions 
    bool hasKnowledgeBases() const { return this->knowledgeBases_ != nullptr;};
    void deleteKnowledgeBases() { this->knowledgeBases_ = nullptr;};
    inline     const Darabonba::Json & getKnowledgeBases() const { DARABONBA_GET(knowledgeBases_) };
    Darabonba::Json & getKnowledgeBases() { DARABONBA_GET(knowledgeBases_) };
    inline CreateAgentRequest& setKnowledgeBases(const Darabonba::Json & knowledgeBases) { DARABONBA_SET_VALUE(knowledgeBases_, knowledgeBases) };
    inline CreateAgentRequest& setKnowledgeBases(Darabonba::Json && knowledgeBases) { DARABONBA_SET_RVALUE(knowledgeBases_, knowledgeBases) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAgentRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // skills Field Functions 
    bool hasSkills() const { return this->skills_ != nullptr;};
    void deleteSkills() { this->skills_ = nullptr;};
    inline     const Darabonba::Json & getSkills() const { DARABONBA_GET(skills_) };
    Darabonba::Json & getSkills() { DARABONBA_GET(skills_) };
    inline CreateAgentRequest& setSkills(const Darabonba::Json & skills) { DARABONBA_SET_VALUE(skills_, skills) };
    inline CreateAgentRequest& setSkills(Darabonba::Json && skills) { DARABONBA_SET_RVALUE(skills_, skills) };


    // systemPrompt Field Functions 
    bool hasSystemPrompt() const { return this->systemPrompt_ != nullptr;};
    void deleteSystemPrompt() { this->systemPrompt_ = nullptr;};
    inline string getSystemPrompt() const { DARABONBA_PTR_GET_DEFAULT(systemPrompt_, "") };
    inline CreateAgentRequest& setSystemPrompt(string systemPrompt) { DARABONBA_PTR_SET_VALUE(systemPrompt_, systemPrompt) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline     const Darabonba::Json & getTools() const { DARABONBA_GET(tools_) };
    Darabonba::Json & getTools() { DARABONBA_GET(tools_) };
    inline CreateAgentRequest& setTools(const Darabonba::Json & tools) { DARABONBA_SET_VALUE(tools_, tools) };
    inline CreateAgentRequest& setTools(Darabonba::Json && tools) { DARABONBA_SET_RVALUE(tools_, tools) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline CreateAgentRequest& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


  protected:
    // The description of the agent.
    shared_ptr<string> description_ {};
    // The display name of the agent.
    shared_ptr<string> displayName_ {};
    // The list of knowledge base references, which can contain at most one element.
    Darabonba::Json knowledgeBases_ {};
    // The name of the agent, which is also the unique identifier that cannot be modified after creation.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The list of skill references. For specific fields, refer to the supplementary description of request parameters.
    Darabonba::Json skills_ {};
    // The system prompt.
    shared_ptr<string> systemPrompt_ {};
    // The list of MCP server and connector name references. The same array supports both types of entries. Specify only one type of reference for each entry. For MCP, omitting items indicates all public tools, and historically specified items retain their original values.
    Darabonba::Json tools_ {};
    // The visibility scope of the agent. Valid values: `user` and `tenant`. Default value: `user`.
    shared_ptr<string> visibility_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ada20260701
#endif
