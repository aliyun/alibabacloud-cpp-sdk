// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETEAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETEAMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class UpdateTeamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTeamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTeamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    UpdateTeamRequest() = default ;
    UpdateTeamRequest(const UpdateTeamRequest &) = default ;
    UpdateTeamRequest(UpdateTeamRequest &&) = default ;
    UpdateTeamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTeamRequest() = default ;
    UpdateTeamRequest& operator=(const UpdateTeamRequest &) = default ;
    UpdateTeamRequest& operator=(UpdateTeamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(agents, agents_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(users, users_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(agents, agents_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(users, users_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Users : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Users& obj) { 
          DARABONBA_PTR_TO_JSON(teamRole, teamRole_);
          DARABONBA_PTR_TO_JSON(userId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, Users& obj) { 
          DARABONBA_PTR_FROM_JSON(teamRole, teamRole_);
          DARABONBA_PTR_FROM_JSON(userId, userId_);
        };
        Users() = default ;
        Users(const Users &) = default ;
        Users(Users &&) = default ;
        Users(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Users() = default ;
        Users& operator=(const Users &) = default ;
        Users& operator=(Users &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->teamRole_ == nullptr
        && this->userId_ == nullptr; };
        // teamRole Field Functions 
        bool hasTeamRole() const { return this->teamRole_ != nullptr;};
        void deleteTeamRole() { this->teamRole_ = nullptr;};
        inline string getTeamRole() const { DARABONBA_PTR_GET_DEFAULT(teamRole_, "") };
        inline Users& setTeamRole(string teamRole) { DARABONBA_PTR_SET_VALUE(teamRole_, teamRole) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Users& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> teamRole_ {};
        shared_ptr<string> userId_ {};
      };

      class Agents : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Agents& obj) { 
          DARABONBA_PTR_TO_JSON(agentId, agentId_);
          DARABONBA_PTR_TO_JSON(teamRole, teamRole_);
        };
        friend void from_json(const Darabonba::Json& j, Agents& obj) { 
          DARABONBA_PTR_FROM_JSON(agentId, agentId_);
          DARABONBA_PTR_FROM_JSON(teamRole, teamRole_);
        };
        Agents() = default ;
        Agents(const Agents &) = default ;
        Agents(Agents &&) = default ;
        Agents(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Agents() = default ;
        Agents& operator=(const Agents &) = default ;
        Agents& operator=(Agents &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentId_ == nullptr
        && this->teamRole_ == nullptr; };
        // agentId Field Functions 
        bool hasAgentId() const { return this->agentId_ != nullptr;};
        void deleteAgentId() { this->agentId_ = nullptr;};
        inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
        inline Agents& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


        // teamRole Field Functions 
        bool hasTeamRole() const { return this->teamRole_ != nullptr;};
        void deleteTeamRole() { this->teamRole_ = nullptr;};
        inline string getTeamRole() const { DARABONBA_PTR_GET_DEFAULT(teamRole_, "") };
        inline Agents& setTeamRole(string teamRole) { DARABONBA_PTR_SET_VALUE(teamRole_, teamRole) };


      protected:
        shared_ptr<string> agentId_ {};
        shared_ptr<string> teamRole_ {};
      };

      virtual bool empty() const override { return this->agents_ == nullptr
        && this->description_ == nullptr && this->users_ == nullptr; };
      // agents Field Functions 
      bool hasAgents() const { return this->agents_ != nullptr;};
      void deleteAgents() { this->agents_ = nullptr;};
      inline const vector<Body::Agents> & getAgents() const { DARABONBA_PTR_GET_CONST(agents_, vector<Body::Agents>) };
      inline vector<Body::Agents> getAgents() { DARABONBA_PTR_GET(agents_, vector<Body::Agents>) };
      inline Body& setAgents(const vector<Body::Agents> & agents) { DARABONBA_PTR_SET_VALUE(agents_, agents) };
      inline Body& setAgents(vector<Body::Agents> && agents) { DARABONBA_PTR_SET_RVALUE(agents_, agents) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Body& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // users Field Functions 
      bool hasUsers() const { return this->users_ != nullptr;};
      void deleteUsers() { this->users_ = nullptr;};
      inline const vector<Body::Users> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<Body::Users>) };
      inline vector<Body::Users> getUsers() { DARABONBA_PTR_GET(users_, vector<Body::Users>) };
      inline Body& setUsers(const vector<Body::Users> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
      inline Body& setUsers(vector<Body::Users> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


    protected:
      shared_ptr<vector<Body::Agents>> agents_ {};
      shared_ptr<string> description_ {};
      shared_ptr<vector<Body::Users>> users_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->clientToken_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateTeamRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateTeamRequest::Body) };
    inline UpdateTeamRequest::Body getBody() { DARABONBA_PTR_GET(body_, UpdateTeamRequest::Body) };
    inline UpdateTeamRequest& setBody(const UpdateTeamRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateTeamRequest& setBody(UpdateTeamRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateTeamRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    shared_ptr<UpdateTeamRequest::Body> body_ {};
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
