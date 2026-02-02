// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMAGENTRESPONSEBODY_HPP_
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
  class GetCustomAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_TO_JSON(EnableTools, enableTools_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Skills, skills_);
      DARABONBA_PTR_TO_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_PTR_TO_JSON(Tools, tools_);
      DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(EnableTools, enableTools_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Skills, skills_);
      DARABONBA_PTR_FROM_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_PTR_FROM_JSON(Tools, tools_);
      DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
    };
    GetCustomAgentResponseBody() = default ;
    GetCustomAgentResponseBody(const GetCustomAgentResponseBody &) = default ;
    GetCustomAgentResponseBody(GetCustomAgentResponseBody &&) = default ;
    GetCustomAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomAgentResponseBody() = default ;
    GetCustomAgentResponseBody& operator=(const GetCustomAgentResponseBody &) = default ;
    GetCustomAgentResponseBody& operator=(GetCustomAgentResponseBody &&) = default ;
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

    virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->enableTools_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr && this->skills_ == nullptr
        && this->systemPrompt_ == nullptr && this->tools_ == nullptr && this->updatedAt_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline GetCustomAgentResponseBody& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // enableTools Field Functions 
    bool hasEnableTools() const { return this->enableTools_ != nullptr;};
    void deleteEnableTools() { this->enableTools_ = nullptr;};
    inline bool getEnableTools() const { DARABONBA_PTR_GET_DEFAULT(enableTools_, false) };
    inline GetCustomAgentResponseBody& setEnableTools(bool enableTools) { DARABONBA_PTR_SET_VALUE(enableTools_, enableTools) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetCustomAgentResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetCustomAgentResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCustomAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skills Field Functions 
    bool hasSkills() const { return this->skills_ != nullptr;};
    void deleteSkills() { this->skills_ = nullptr;};
    inline const vector<GetCustomAgentResponseBody::Skills> & getSkills() const { DARABONBA_PTR_GET_CONST(skills_, vector<GetCustomAgentResponseBody::Skills>) };
    inline vector<GetCustomAgentResponseBody::Skills> getSkills() { DARABONBA_PTR_GET(skills_, vector<GetCustomAgentResponseBody::Skills>) };
    inline GetCustomAgentResponseBody& setSkills(const vector<GetCustomAgentResponseBody::Skills> & skills) { DARABONBA_PTR_SET_VALUE(skills_, skills) };
    inline GetCustomAgentResponseBody& setSkills(vector<GetCustomAgentResponseBody::Skills> && skills) { DARABONBA_PTR_SET_RVALUE(skills_, skills) };


    // systemPrompt Field Functions 
    bool hasSystemPrompt() const { return this->systemPrompt_ != nullptr;};
    void deleteSystemPrompt() { this->systemPrompt_ = nullptr;};
    inline string getSystemPrompt() const { DARABONBA_PTR_GET_DEFAULT(systemPrompt_, "") };
    inline GetCustomAgentResponseBody& setSystemPrompt(string systemPrompt) { DARABONBA_PTR_SET_VALUE(systemPrompt_, systemPrompt) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline const vector<string> & getTools() const { DARABONBA_PTR_GET_CONST(tools_, vector<string>) };
    inline vector<string> getTools() { DARABONBA_PTR_GET(tools_, vector<string>) };
    inline GetCustomAgentResponseBody& setTools(const vector<string> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
    inline GetCustomAgentResponseBody& setTools(vector<string> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline GetCustomAgentResponseBody& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    // The creation time of the agent.
    shared_ptr<string> createdAt_ {};
    // Indicates whether tools are enabled.
    shared_ptr<bool> enableTools_ {};
    // The ID of the backup set.
    shared_ptr<string> id_ {};
    // The name of the dedicated agent.
    shared_ptr<string> name_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetCustomAgentResponseBody::Skills>> skills_ {};
    // The system prompts.
    shared_ptr<string> systemPrompt_ {};
    // The details of the tools.
    shared_ptr<vector<string>> tools_ {};
    // The modification time of the agent.
    shared_ptr<string> updatedAt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
