// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallableAgents, callableAgents_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_ANY_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Skills, skills_);
      DARABONBA_PTR_TO_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_PTR_TO_JSON(Tools, tools_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
      DARABONBA_PTR_TO_JSON(VisibilityScope, visibilityScope_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallableAgents, callableAgents_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_ANY_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Skills, skills_);
      DARABONBA_PTR_FROM_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_PTR_FROM_JSON(Tools, tools_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
      DARABONBA_PTR_FROM_JSON(VisibilityScope, visibilityScope_);
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
    class VisibilityScope : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VisibilityScope& obj) { 
        DARABONBA_PTR_TO_JSON(ProjectIds, projectIds_);
        DARABONBA_PTR_TO_JSON(UserIds, userIds_);
      };
      friend void from_json(const Darabonba::Json& j, VisibilityScope& obj) { 
        DARABONBA_PTR_FROM_JSON(ProjectIds, projectIds_);
        DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
      };
      VisibilityScope() = default ;
      VisibilityScope(const VisibilityScope &) = default ;
      VisibilityScope(VisibilityScope &&) = default ;
      VisibilityScope(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VisibilityScope() = default ;
      VisibilityScope& operator=(const VisibilityScope &) = default ;
      VisibilityScope& operator=(VisibilityScope &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->projectIds_ == nullptr
        && this->userIds_ == nullptr; };
      // projectIds Field Functions 
      bool hasProjectIds() const { return this->projectIds_ != nullptr;};
      void deleteProjectIds() { this->projectIds_ = nullptr;};
      inline const vector<string> & getProjectIds() const { DARABONBA_PTR_GET_CONST(projectIds_, vector<string>) };
      inline vector<string> getProjectIds() { DARABONBA_PTR_GET(projectIds_, vector<string>) };
      inline VisibilityScope& setProjectIds(const vector<string> & projectIds) { DARABONBA_PTR_SET_VALUE(projectIds_, projectIds) };
      inline VisibilityScope& setProjectIds(vector<string> && projectIds) { DARABONBA_PTR_SET_RVALUE(projectIds_, projectIds) };


      // userIds Field Functions 
      bool hasUserIds() const { return this->userIds_ != nullptr;};
      void deleteUserIds() { this->userIds_ = nullptr;};
      inline const vector<string> & getUserIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<string>) };
      inline vector<string> getUserIds() { DARABONBA_PTR_GET(userIds_, vector<string>) };
      inline VisibilityScope& setUserIds(const vector<string> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
      inline VisibilityScope& setUserIds(vector<string> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


    protected:
      shared_ptr<vector<string>> projectIds_ {};
      shared_ptr<vector<string>> userIds_ {};
    };

    virtual bool empty() const override { return this->callableAgents_ == nullptr
        && this->description_ == nullptr && this->displayName_ == nullptr && this->metadata_ == nullptr && this->model_ == nullptr && this->name_ == nullptr
        && this->skills_ == nullptr && this->systemPrompt_ == nullptr && this->tools_ == nullptr && this->visibility_ == nullptr && this->visibilityScope_ == nullptr; };
    // callableAgents Field Functions 
    bool hasCallableAgents() const { return this->callableAgents_ != nullptr;};
    void deleteCallableAgents() { this->callableAgents_ = nullptr;};
    inline const vector<string> & getCallableAgents() const { DARABONBA_PTR_GET_CONST(callableAgents_, vector<string>) };
    inline vector<string> getCallableAgents() { DARABONBA_PTR_GET(callableAgents_, vector<string>) };
    inline CreateAgentRequest& setCallableAgents(const vector<string> & callableAgents) { DARABONBA_PTR_SET_VALUE(callableAgents_, callableAgents) };
    inline CreateAgentRequest& setCallableAgents(vector<string> && callableAgents) { DARABONBA_PTR_SET_RVALUE(callableAgents_, callableAgents) };


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


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline CreateAgentRequest& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline CreateAgentRequest& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline     const Darabonba::Json & getModel() const { DARABONBA_GET(model_) };
    Darabonba::Json & getModel() { DARABONBA_GET(model_) };
    inline CreateAgentRequest& setModel(const Darabonba::Json & model) { DARABONBA_SET_VALUE(model_, model) };
    inline CreateAgentRequest& setModel(Darabonba::Json && model) { DARABONBA_SET_RVALUE(model_, model) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAgentRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // skills Field Functions 
    bool hasSkills() const { return this->skills_ != nullptr;};
    void deleteSkills() { this->skills_ = nullptr;};
    inline const vector<string> & getSkills() const { DARABONBA_PTR_GET_CONST(skills_, vector<string>) };
    inline vector<string> getSkills() { DARABONBA_PTR_GET(skills_, vector<string>) };
    inline CreateAgentRequest& setSkills(const vector<string> & skills) { DARABONBA_PTR_SET_VALUE(skills_, skills) };
    inline CreateAgentRequest& setSkills(vector<string> && skills) { DARABONBA_PTR_SET_RVALUE(skills_, skills) };


    // systemPrompt Field Functions 
    bool hasSystemPrompt() const { return this->systemPrompt_ != nullptr;};
    void deleteSystemPrompt() { this->systemPrompt_ = nullptr;};
    inline string getSystemPrompt() const { DARABONBA_PTR_GET_DEFAULT(systemPrompt_, "") };
    inline CreateAgentRequest& setSystemPrompt(string systemPrompt) { DARABONBA_PTR_SET_VALUE(systemPrompt_, systemPrompt) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline const vector<string> & getTools() const { DARABONBA_PTR_GET_CONST(tools_, vector<string>) };
    inline vector<string> getTools() { DARABONBA_PTR_GET(tools_, vector<string>) };
    inline CreateAgentRequest& setTools(const vector<string> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
    inline CreateAgentRequest& setTools(vector<string> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline CreateAgentRequest& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


    // visibilityScope Field Functions 
    bool hasVisibilityScope() const { return this->visibilityScope_ != nullptr;};
    void deleteVisibilityScope() { this->visibilityScope_ = nullptr;};
    inline const CreateAgentRequest::VisibilityScope & getVisibilityScope() const { DARABONBA_PTR_GET_CONST(visibilityScope_, CreateAgentRequest::VisibilityScope) };
    inline CreateAgentRequest::VisibilityScope getVisibilityScope() { DARABONBA_PTR_GET(visibilityScope_, CreateAgentRequest::VisibilityScope) };
    inline CreateAgentRequest& setVisibilityScope(const CreateAgentRequest::VisibilityScope & visibilityScope) { DARABONBA_PTR_SET_VALUE(visibilityScope_, visibilityScope) };
    inline CreateAgentRequest& setVisibilityScope(CreateAgentRequest::VisibilityScope && visibilityScope) { DARABONBA_PTR_SET_RVALUE(visibilityScope_, visibilityScope) };


  protected:
    shared_ptr<vector<string>> callableAgents_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> displayName_ {};
    Darabonba::Json metadata_ {};
    Darabonba::Json model_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<vector<string>> skills_ {};
    shared_ptr<string> systemPrompt_ {};
    shared_ptr<vector<string>> tools_ {};
    shared_ptr<string> visibility_ {};
    shared_ptr<CreateAgentRequest::VisibilityScope> visibilityScope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
