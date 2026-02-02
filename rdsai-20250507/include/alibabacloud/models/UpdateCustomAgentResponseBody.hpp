// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMAGENTRESPONSEBODY_HPP_
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
  class UpdateCustomAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EnableTools, enableTools_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Skills, skills_);
      DARABONBA_PTR_TO_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_PTR_TO_JSON(Tools, tools_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableTools, enableTools_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Skills, skills_);
      DARABONBA_PTR_FROM_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_PTR_FROM_JSON(Tools, tools_);
    };
    UpdateCustomAgentResponseBody() = default ;
    UpdateCustomAgentResponseBody(const UpdateCustomAgentResponseBody &) = default ;
    UpdateCustomAgentResponseBody(UpdateCustomAgentResponseBody &&) = default ;
    UpdateCustomAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCustomAgentResponseBody() = default ;
    UpdateCustomAgentResponseBody& operator=(const UpdateCustomAgentResponseBody &) = default ;
    UpdateCustomAgentResponseBody& operator=(UpdateCustomAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Skills : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Skills& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(SkillType, skillType_);
      };
      friend void from_json(const Darabonba::Json& j, Skills& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(SkillType, skillType_);
      };
      Skills() = default ;
      Skills(const Skills &) = default ;
      Skills(Skills &&) = default ;
      Skills(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Skills() = default ;
      Skills& operator=(const Skills &) = default ;
      Skills& operator=(Skills &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->skillType_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Skills& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Skills& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Skills& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // skillType Field Functions 
      bool hasSkillType() const { return this->skillType_ != nullptr;};
      void deleteSkillType() { this->skillType_ = nullptr;};
      inline string getSkillType() const { DARABONBA_PTR_GET_DEFAULT(skillType_, "") };
      inline Skills& setSkillType(string skillType) { DARABONBA_PTR_SET_VALUE(skillType_, skillType) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> skillType_ {};
    };

    virtual bool empty() const override { return this->enableTools_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr && this->skills_ == nullptr && this->systemPrompt_ == nullptr
        && this->tools_ == nullptr; };
    // enableTools Field Functions 
    bool hasEnableTools() const { return this->enableTools_ != nullptr;};
    void deleteEnableTools() { this->enableTools_ = nullptr;};
    inline string getEnableTools() const { DARABONBA_PTR_GET_DEFAULT(enableTools_, "") };
    inline UpdateCustomAgentResponseBody& setEnableTools(string enableTools) { DARABONBA_PTR_SET_VALUE(enableTools_, enableTools) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateCustomAgentResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateCustomAgentResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateCustomAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skills Field Functions 
    bool hasSkills() const { return this->skills_ != nullptr;};
    void deleteSkills() { this->skills_ = nullptr;};
    inline const vector<UpdateCustomAgentResponseBody::Skills> & getSkills() const { DARABONBA_PTR_GET_CONST(skills_, vector<UpdateCustomAgentResponseBody::Skills>) };
    inline vector<UpdateCustomAgentResponseBody::Skills> getSkills() { DARABONBA_PTR_GET(skills_, vector<UpdateCustomAgentResponseBody::Skills>) };
    inline UpdateCustomAgentResponseBody& setSkills(const vector<UpdateCustomAgentResponseBody::Skills> & skills) { DARABONBA_PTR_SET_VALUE(skills_, skills) };
    inline UpdateCustomAgentResponseBody& setSkills(vector<UpdateCustomAgentResponseBody::Skills> && skills) { DARABONBA_PTR_SET_RVALUE(skills_, skills) };


    // systemPrompt Field Functions 
    bool hasSystemPrompt() const { return this->systemPrompt_ != nullptr;};
    void deleteSystemPrompt() { this->systemPrompt_ = nullptr;};
    inline string getSystemPrompt() const { DARABONBA_PTR_GET_DEFAULT(systemPrompt_, "") };
    inline UpdateCustomAgentResponseBody& setSystemPrompt(string systemPrompt) { DARABONBA_PTR_SET_VALUE(systemPrompt_, systemPrompt) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline const vector<string> & getTools() const { DARABONBA_PTR_GET_CONST(tools_, vector<string>) };
    inline vector<string> getTools() { DARABONBA_PTR_GET(tools_, vector<string>) };
    inline UpdateCustomAgentResponseBody& setTools(const vector<string> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
    inline UpdateCustomAgentResponseBody& setTools(vector<string> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


  protected:
    // Indicates whether tools are enabled.
    shared_ptr<string> enableTools_ {};
    // The ID of the agent.
    shared_ptr<string> id_ {};
    // The name of the agent.
    shared_ptr<string> name_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<UpdateCustomAgentResponseBody::Skills>> skills_ {};
    // The system prompts.
    shared_ptr<string> systemPrompt_ {};
    // The information about the tool.
    shared_ptr<vector<string>> tools_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
