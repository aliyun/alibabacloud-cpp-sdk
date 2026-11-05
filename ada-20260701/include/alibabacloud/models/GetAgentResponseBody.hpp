// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ada20260701
{
namespace Models
{
  class GetAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_TO_JSON(CanDelete, canDelete_);
      DARABONBA_PTR_TO_JSON(CanModify, canModify_);
      DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_ANY_TO_JSON(KnowledgeBases, knowledgeBases_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_ANY_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Official, official_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_ANY_TO_JSON(Skills, skills_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_ANY_TO_JSON(Tools, tools_);
      DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_FROM_JSON(CanDelete, canDelete_);
      DARABONBA_PTR_FROM_JSON(CanModify, canModify_);
      DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_ANY_FROM_JSON(KnowledgeBases, knowledgeBases_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_ANY_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Official, official_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_ANY_FROM_JSON(Skills, skills_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_ANY_FROM_JSON(Tools, tools_);
      DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
    };
    GetAgentResponseBody() = default ;
    GetAgentResponseBody(const GetAgentResponseBody &) = default ;
    GetAgentResponseBody(GetAgentResponseBody &&) = default ;
    GetAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentResponseBody() = default ;
    GetAgentResponseBody& operator=(const GetAgentResponseBody &) = default ;
    GetAgentResponseBody& operator=(GetAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentVersion_ == nullptr && this->canDelete_ == nullptr && this->canModify_ == nullptr && this->createdAt_ == nullptr && this->description_ == nullptr
        && this->displayName_ == nullptr && this->knowledgeBases_ == nullptr && this->metadata_ == nullptr && this->model_ == nullptr && this->name_ == nullptr
        && this->official_ == nullptr && this->requestId_ == nullptr && this->skills_ == nullptr && this->status_ == nullptr && this->systemPrompt_ == nullptr
        && this->tools_ == nullptr && this->updatedAt_ == nullptr && this->visibility_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline GetAgentResponseBody& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentVersion Field Functions 
    bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
    void deleteAgentVersion() { this->agentVersion_ = nullptr;};
    inline int64_t getAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, 0L) };
    inline GetAgentResponseBody& setAgentVersion(int64_t agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


    // canDelete Field Functions 
    bool hasCanDelete() const { return this->canDelete_ != nullptr;};
    void deleteCanDelete() { this->canDelete_ = nullptr;};
    inline bool getCanDelete() const { DARABONBA_PTR_GET_DEFAULT(canDelete_, false) };
    inline GetAgentResponseBody& setCanDelete(bool canDelete) { DARABONBA_PTR_SET_VALUE(canDelete_, canDelete) };


    // canModify Field Functions 
    bool hasCanModify() const { return this->canModify_ != nullptr;};
    void deleteCanModify() { this->canModify_ = nullptr;};
    inline bool getCanModify() const { DARABONBA_PTR_GET_DEFAULT(canModify_, false) };
    inline GetAgentResponseBody& setCanModify(bool canModify) { DARABONBA_PTR_SET_VALUE(canModify_, canModify) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline GetAgentResponseBody& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetAgentResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetAgentResponseBody& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // knowledgeBases Field Functions 
    bool hasKnowledgeBases() const { return this->knowledgeBases_ != nullptr;};
    void deleteKnowledgeBases() { this->knowledgeBases_ = nullptr;};
    inline     const Darabonba::Json & getKnowledgeBases() const { DARABONBA_GET(knowledgeBases_) };
    Darabonba::Json & getKnowledgeBases() { DARABONBA_GET(knowledgeBases_) };
    inline GetAgentResponseBody& setKnowledgeBases(const Darabonba::Json & knowledgeBases) { DARABONBA_SET_VALUE(knowledgeBases_, knowledgeBases) };
    inline GetAgentResponseBody& setKnowledgeBases(Darabonba::Json && knowledgeBases) { DARABONBA_SET_RVALUE(knowledgeBases_, knowledgeBases) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline GetAgentResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline GetAgentResponseBody& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline     const Darabonba::Json & getModel() const { DARABONBA_GET(model_) };
    Darabonba::Json & getModel() { DARABONBA_GET(model_) };
    inline GetAgentResponseBody& setModel(const Darabonba::Json & model) { DARABONBA_SET_VALUE(model_, model) };
    inline GetAgentResponseBody& setModel(Darabonba::Json && model) { DARABONBA_SET_RVALUE(model_, model) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAgentResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // official Field Functions 
    bool hasOfficial() const { return this->official_ != nullptr;};
    void deleteOfficial() { this->official_ = nullptr;};
    inline bool getOfficial() const { DARABONBA_PTR_GET_DEFAULT(official_, false) };
    inline GetAgentResponseBody& setOfficial(bool official) { DARABONBA_PTR_SET_VALUE(official_, official) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skills Field Functions 
    bool hasSkills() const { return this->skills_ != nullptr;};
    void deleteSkills() { this->skills_ = nullptr;};
    inline     const Darabonba::Json & getSkills() const { DARABONBA_GET(skills_) };
    Darabonba::Json & getSkills() { DARABONBA_GET(skills_) };
    inline GetAgentResponseBody& setSkills(const Darabonba::Json & skills) { DARABONBA_SET_VALUE(skills_, skills) };
    inline GetAgentResponseBody& setSkills(Darabonba::Json && skills) { DARABONBA_SET_RVALUE(skills_, skills) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAgentResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // systemPrompt Field Functions 
    bool hasSystemPrompt() const { return this->systemPrompt_ != nullptr;};
    void deleteSystemPrompt() { this->systemPrompt_ = nullptr;};
    inline string getSystemPrompt() const { DARABONBA_PTR_GET_DEFAULT(systemPrompt_, "") };
    inline GetAgentResponseBody& setSystemPrompt(string systemPrompt) { DARABONBA_PTR_SET_VALUE(systemPrompt_, systemPrompt) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline     const Darabonba::Json & getTools() const { DARABONBA_GET(tools_) };
    Darabonba::Json & getTools() { DARABONBA_GET(tools_) };
    inline GetAgentResponseBody& setTools(const Darabonba::Json & tools) { DARABONBA_SET_VALUE(tools_, tools) };
    inline GetAgentResponseBody& setTools(Darabonba::Json && tools) { DARABONBA_SET_RVALUE(tools_, tools) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline int64_t getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
    inline GetAgentResponseBody& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline GetAgentResponseBody& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


  protected:
    // The agent ID.
    shared_ptr<string> agentId_ {};
    // The current configuration revision number.
    shared_ptr<int64_t> agentVersion_ {};
    // Indicates whether the current identity can delete the agent.
    shared_ptr<bool> canDelete_ {};
    // Indicates whether the current identity can modify the agent.
    shared_ptr<bool> canModify_ {};
    // The creation time. The value is a UNIX timestamp in milliseconds.
    shared_ptr<int64_t> createdAt_ {};
    // The agent description. This field may not be returned if it is not configured.
    shared_ptr<string> description_ {};
    // The display name of the agent. This field may not be returned if it is not configured.
    shared_ptr<string> displayName_ {};
    // The knowledge base reference list. The list contains at most one element.
    Darabonba::Json knowledgeBases_ {};
    // The display metadata of the agent. For specific fields, refer to the supplementary description of response parameters.
    Darabonba::Json metadata_ {};
    // The saved model configuration. This information is returned only for official agents. Object arrays are supported, and historical single objects and strings are compatible. An empty array is returned as [ \\]. Object arrays retain the original order, duplicate names, and object fields.
    Darabonba::Json model_ {};
    // The agent name.
    shared_ptr<string> name_ {};
    // Indicates whether the agent is an official agent provided by the platform.
    shared_ptr<bool> official_ {};
    // The request ID. It is used for Tracing Analysis and troubleshooting.
    shared_ptr<string> requestId_ {};
    // The skill reference list. For specific fields, refer to the supplementary description of response parameters.
    Darabonba::Json skills_ {};
    // The agent status. The default status of a newly created agent is `draft`.
    shared_ptr<string> status_ {};
    // The system prompt. This field may not be returned if it is not configured.
    shared_ptr<string> systemPrompt_ {};
    // The reference list of MCP server and connector names. For element fields, refer to the following sections.
    Darabonba::Json tools_ {};
    // The last update time. The value is a UNIX timestamp in milliseconds.
    shared_ptr<int64_t> updatedAt_ {};
    // The visibility scope of the agent. Valid values: `user` and `tenant`.
    shared_ptr<string> visibility_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ada20260701
#endif
