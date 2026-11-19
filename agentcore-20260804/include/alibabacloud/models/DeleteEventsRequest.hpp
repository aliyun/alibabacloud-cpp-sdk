// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEVENTSREQUEST_HPP_
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
  class DeleteEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DeleteEventsRequest() = default ;
    DeleteEventsRequest(const DeleteEventsRequest &) = default ;
    DeleteEventsRequest(DeleteEventsRequest &&) = default ;
    DeleteEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEventsRequest() = default ;
    DeleteEventsRequest& operator=(const DeleteEventsRequest &) = default ;
    DeleteEventsRequest& operator=(DeleteEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(eventIds, eventIds_);
        DARABONBA_PTR_TO_JSON(scope, scope_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(eventIds, eventIds_);
        DARABONBA_PTR_FROM_JSON(scope, scope_);
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
      class Scope : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Scope& obj) { 
          DARABONBA_PTR_TO_JSON(agentId, agentId_);
          DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
          DARABONBA_PTR_TO_JSON(teamId, teamId_);
          DARABONBA_PTR_TO_JSON(userId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, Scope& obj) { 
          DARABONBA_PTR_FROM_JSON(agentId, agentId_);
          DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
          DARABONBA_PTR_FROM_JSON(teamId, teamId_);
          DARABONBA_PTR_FROM_JSON(userId, userId_);
        };
        Scope() = default ;
        Scope(const Scope &) = default ;
        Scope(Scope &&) = default ;
        Scope(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Scope() = default ;
        Scope& operator=(const Scope &) = default ;
        Scope& operator=(Scope &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentId_ == nullptr
        && this->sessionId_ == nullptr && this->teamId_ == nullptr && this->userId_ == nullptr; };
        // agentId Field Functions 
        bool hasAgentId() const { return this->agentId_ != nullptr;};
        void deleteAgentId() { this->agentId_ = nullptr;};
        inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
        inline Scope& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


        // sessionId Field Functions 
        bool hasSessionId() const { return this->sessionId_ != nullptr;};
        void deleteSessionId() { this->sessionId_ = nullptr;};
        inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
        inline Scope& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


        // teamId Field Functions 
        bool hasTeamId() const { return this->teamId_ != nullptr;};
        void deleteTeamId() { this->teamId_ = nullptr;};
        inline string getTeamId() const { DARABONBA_PTR_GET_DEFAULT(teamId_, "") };
        inline Scope& setTeamId(string teamId) { DARABONBA_PTR_SET_VALUE(teamId_, teamId) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Scope& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // The business agent ID.
        shared_ptr<string> agentId_ {};
        // The ID of the precisely located session.
        // 
        // This parameter is required.
        shared_ptr<string> sessionId_ {};
        // The business team ID.
        shared_ptr<string> teamId_ {};
        // The business user ID. This is not the platform tenant identity.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->eventIds_ == nullptr
        && this->scope_ == nullptr; };
      // eventIds Field Functions 
      bool hasEventIds() const { return this->eventIds_ != nullptr;};
      void deleteEventIds() { this->eventIds_ = nullptr;};
      inline const vector<string> & getEventIds() const { DARABONBA_PTR_GET_CONST(eventIds_, vector<string>) };
      inline vector<string> getEventIds() { DARABONBA_PTR_GET(eventIds_, vector<string>) };
      inline Body& setEventIds(const vector<string> & eventIds) { DARABONBA_PTR_SET_VALUE(eventIds_, eventIds) };
      inline Body& setEventIds(vector<string> && eventIds) { DARABONBA_PTR_SET_RVALUE(eventIds_, eventIds) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline const Body::Scope & getScope() const { DARABONBA_PTR_GET_CONST(scope_, Body::Scope) };
      inline Body::Scope getScope() { DARABONBA_PTR_GET(scope_, Body::Scope) };
      inline Body& setScope(const Body::Scope & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
      inline Body& setScope(Body::Scope && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


    protected:
      // A list of 1 to 100 unique event IDs. Only events owned by the current session are deleted.
      // 
      // This parameter is required.
      shared_ptr<vector<string>> eventIds_ {};
      // The scope for precise session location.
      // 
      // This parameter is required.
      shared_ptr<Body::Scope> scope_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeleteEventsRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, DeleteEventsRequest::Body) };
    inline DeleteEventsRequest::Body getBody() { DARABONBA_PTR_GET(body_, DeleteEventsRequest::Body) };
    inline DeleteEventsRequest& setBody(const DeleteEventsRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DeleteEventsRequest& setBody(DeleteEventsRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The JSON request body.
    // 
    // This parameter is required.
    shared_ptr<DeleteEventsRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
