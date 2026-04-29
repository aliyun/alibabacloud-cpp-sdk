// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLARCLAWAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLARCLAWAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreatePolarClawAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolarClawAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Agent, agent_);
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolarClawAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Agent, agent_);
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Workspace, workspace_);
    };
    CreatePolarClawAgentResponseBody() = default ;
    CreatePolarClawAgentResponseBody(const CreatePolarClawAgentResponseBody &) = default ;
    CreatePolarClawAgentResponseBody(CreatePolarClawAgentResponseBody &&) = default ;
    CreatePolarClawAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolarClawAgentResponseBody() = default ;
    CreatePolarClawAgentResponseBody& operator=(const CreatePolarClawAgentResponseBody &) = default ;
    CreatePolarClawAgentResponseBody& operator=(CreatePolarClawAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Agent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Agent& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Identity, identity_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Workspace, workspace_);
      };
      friend void from_json(const Darabonba::Json& j, Agent& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Identity, identity_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Workspace, workspace_);
      };
      Agent() = default ;
      Agent(const Agent &) = default ;
      Agent(Agent &&) = default ;
      Agent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Agent() = default ;
      Agent& operator=(const Agent &) = default ;
      Agent& operator=(Agent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Identity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Identity& obj) { 
          DARABONBA_PTR_TO_JSON(Avatar, avatar_);
          DARABONBA_PTR_TO_JSON(AvatarUrl, avatarUrl_);
          DARABONBA_PTR_TO_JSON(Emoji, emoji_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Theme, theme_);
        };
        friend void from_json(const Darabonba::Json& j, Identity& obj) { 
          DARABONBA_PTR_FROM_JSON(Avatar, avatar_);
          DARABONBA_PTR_FROM_JSON(AvatarUrl, avatarUrl_);
          DARABONBA_PTR_FROM_JSON(Emoji, emoji_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Theme, theme_);
        };
        Identity() = default ;
        Identity(const Identity &) = default ;
        Identity(Identity &&) = default ;
        Identity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Identity() = default ;
        Identity& operator=(const Identity &) = default ;
        Identity& operator=(Identity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->avatar_ == nullptr
        && this->avatarUrl_ == nullptr && this->emoji_ == nullptr && this->name_ == nullptr && this->theme_ == nullptr; };
        // avatar Field Functions 
        bool hasAvatar() const { return this->avatar_ != nullptr;};
        void deleteAvatar() { this->avatar_ = nullptr;};
        inline string getAvatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
        inline Identity& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


        // avatarUrl Field Functions 
        bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
        void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
        inline string getAvatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
        inline Identity& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


        // emoji Field Functions 
        bool hasEmoji() const { return this->emoji_ != nullptr;};
        void deleteEmoji() { this->emoji_ = nullptr;};
        inline string getEmoji() const { DARABONBA_PTR_GET_DEFAULT(emoji_, "") };
        inline Identity& setEmoji(string emoji) { DARABONBA_PTR_SET_VALUE(emoji_, emoji) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Identity& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // theme Field Functions 
        bool hasTheme() const { return this->theme_ != nullptr;};
        void deleteTheme() { this->theme_ = nullptr;};
        inline string getTheme() const { DARABONBA_PTR_GET_DEFAULT(theme_, "") };
        inline Identity& setTheme(string theme) { DARABONBA_PTR_SET_VALUE(theme_, theme) };


      protected:
        shared_ptr<string> avatar_ {};
        shared_ptr<string> avatarUrl_ {};
        shared_ptr<string> emoji_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> theme_ {};
      };

      virtual bool empty() const override { return this->id_ == nullptr
        && this->identity_ == nullptr && this->name_ == nullptr && this->workspace_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Agent& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // identity Field Functions 
      bool hasIdentity() const { return this->identity_ != nullptr;};
      void deleteIdentity() { this->identity_ = nullptr;};
      inline const Agent::Identity & getIdentity() const { DARABONBA_PTR_GET_CONST(identity_, Agent::Identity) };
      inline Agent::Identity getIdentity() { DARABONBA_PTR_GET(identity_, Agent::Identity) };
      inline Agent& setIdentity(const Agent::Identity & identity) { DARABONBA_PTR_SET_VALUE(identity_, identity) };
      inline Agent& setIdentity(Agent::Identity && identity) { DARABONBA_PTR_SET_RVALUE(identity_, identity) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Agent& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // workspace Field Functions 
      bool hasWorkspace() const { return this->workspace_ != nullptr;};
      void deleteWorkspace() { this->workspace_ = nullptr;};
      inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
      inline Agent& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


    protected:
      // Agent ID
      shared_ptr<string> id_ {};
      shared_ptr<Agent::Identity> identity_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> workspace_ {};
    };

    virtual bool empty() const override { return this->agent_ == nullptr
        && this->agentId_ == nullptr && this->applicationId_ == nullptr && this->code_ == nullptr && this->message_ == nullptr && this->name_ == nullptr
        && this->requestId_ == nullptr && this->workspace_ == nullptr; };
    // agent Field Functions 
    bool hasAgent() const { return this->agent_ != nullptr;};
    void deleteAgent() { this->agent_ = nullptr;};
    inline const CreatePolarClawAgentResponseBody::Agent & getAgent() const { DARABONBA_PTR_GET_CONST(agent_, CreatePolarClawAgentResponseBody::Agent) };
    inline CreatePolarClawAgentResponseBody::Agent getAgent() { DARABONBA_PTR_GET(agent_, CreatePolarClawAgentResponseBody::Agent) };
    inline CreatePolarClawAgentResponseBody& setAgent(const CreatePolarClawAgentResponseBody::Agent & agent) { DARABONBA_PTR_SET_VALUE(agent_, agent) };
    inline CreatePolarClawAgentResponseBody& setAgent(CreatePolarClawAgentResponseBody::Agent && agent) { DARABONBA_PTR_SET_RVALUE(agent_, agent) };


    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline CreatePolarClawAgentResponseBody& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline CreatePolarClawAgentResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline CreatePolarClawAgentResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreatePolarClawAgentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePolarClawAgentResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePolarClawAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline CreatePolarClawAgentResponseBody& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    shared_ptr<CreatePolarClawAgentResponseBody::Agent> agent_ {};
    // Agent ID
    shared_ptr<string> agentId_ {};
    shared_ptr<string> applicationId_ {};
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
