// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETERMINALSESSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETERMINALSESSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeTerminalSessionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTerminalSessionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Sessions, sessions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTerminalSessionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Sessions, sessions_);
    };
    DescribeTerminalSessionsResponseBody() = default ;
    DescribeTerminalSessionsResponseBody(const DescribeTerminalSessionsResponseBody &) = default ;
    DescribeTerminalSessionsResponseBody(DescribeTerminalSessionsResponseBody &&) = default ;
    DescribeTerminalSessionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTerminalSessionsResponseBody() = default ;
    DescribeTerminalSessionsResponseBody& operator=(const DescribeTerminalSessionsResponseBody &) = default ;
    DescribeTerminalSessionsResponseBody& operator=(DescribeTerminalSessionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Sessions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Sessions& obj) { 
        DARABONBA_PTR_TO_JSON(Session, session_);
      };
      friend void from_json(const Darabonba::Json& j, Sessions& obj) { 
        DARABONBA_PTR_FROM_JSON(Session, session_);
      };
      Sessions() = default ;
      Sessions(const Sessions &) = default ;
      Sessions(Sessions &&) = default ;
      Sessions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Sessions() = default ;
      Sessions& operator=(const Sessions &) = default ;
      Sessions& operator=(Sessions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Session : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Session& obj) { 
          DARABONBA_PTR_TO_JSON(ClientIP, clientIP_);
          DARABONBA_PTR_TO_JSON(Connections, connections_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(IdentityType, identityType_);
          DARABONBA_PTR_TO_JSON(PortNumber, portNumber_);
          DARABONBA_PTR_TO_JSON(PrincipalId, principalId_);
          DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
          DARABONBA_PTR_TO_JSON(TargetServer, targetServer_);
          DARABONBA_PTR_TO_JSON(Username, username_);
        };
        friend void from_json(const Darabonba::Json& j, Session& obj) { 
          DARABONBA_PTR_FROM_JSON(ClientIP, clientIP_);
          DARABONBA_PTR_FROM_JSON(Connections, connections_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(IdentityType, identityType_);
          DARABONBA_PTR_FROM_JSON(PortNumber, portNumber_);
          DARABONBA_PTR_FROM_JSON(PrincipalId, principalId_);
          DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
          DARABONBA_PTR_FROM_JSON(TargetServer, targetServer_);
          DARABONBA_PTR_FROM_JSON(Username, username_);
        };
        Session() = default ;
        Session(const Session &) = default ;
        Session(Session &&) = default ;
        Session(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Session() = default ;
        Session& operator=(const Session &) = default ;
        Session& operator=(Session &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Connections : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Connections& obj) { 
            DARABONBA_PTR_TO_JSON(Connection, connection_);
          };
          friend void from_json(const Darabonba::Json& j, Connections& obj) { 
            DARABONBA_PTR_FROM_JSON(Connection, connection_);
          };
          Connections() = default ;
          Connections(const Connections &) = default ;
          Connections(Connections &&) = default ;
          Connections(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Connections() = default ;
          Connections& operator=(const Connections &) = default ;
          Connections& operator=(Connections &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Connection : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Connection& obj) { 
              DARABONBA_PTR_TO_JSON(ClosedReason, closedReason_);
              DARABONBA_PTR_TO_JSON(EndTime, endTime_);
              DARABONBA_PTR_TO_JSON(FailedDetail, failedDetail_);
              DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
              DARABONBA_PTR_TO_JSON(StartTime, startTime_);
              DARABONBA_PTR_TO_JSON(Status, status_);
            };
            friend void from_json(const Darabonba::Json& j, Connection& obj) { 
              DARABONBA_PTR_FROM_JSON(ClosedReason, closedReason_);
              DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
              DARABONBA_PTR_FROM_JSON(FailedDetail, failedDetail_);
              DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
              DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
            };
            Connection() = default ;
            Connection(const Connection &) = default ;
            Connection(Connection &&) = default ;
            Connection(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Connection() = default ;
            Connection& operator=(const Connection &) = default ;
            Connection& operator=(Connection &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->closedReason_ == nullptr
        && this->endTime_ == nullptr && this->failedDetail_ == nullptr && this->instanceId_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr; };
            // closedReason Field Functions 
            bool hasClosedReason() const { return this->closedReason_ != nullptr;};
            void deleteClosedReason() { this->closedReason_ = nullptr;};
            inline string getClosedReason() const { DARABONBA_PTR_GET_DEFAULT(closedReason_, "") };
            inline Connection& setClosedReason(string closedReason) { DARABONBA_PTR_SET_VALUE(closedReason_, closedReason) };


            // endTime Field Functions 
            bool hasEndTime() const { return this->endTime_ != nullptr;};
            void deleteEndTime() { this->endTime_ = nullptr;};
            inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
            inline Connection& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


            // failedDetail Field Functions 
            bool hasFailedDetail() const { return this->failedDetail_ != nullptr;};
            void deleteFailedDetail() { this->failedDetail_ = nullptr;};
            inline string getFailedDetail() const { DARABONBA_PTR_GET_DEFAULT(failedDetail_, "") };
            inline Connection& setFailedDetail(string failedDetail) { DARABONBA_PTR_SET_VALUE(failedDetail_, failedDetail) };


            // instanceId Field Functions 
            bool hasInstanceId() const { return this->instanceId_ != nullptr;};
            void deleteInstanceId() { this->instanceId_ = nullptr;};
            inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
            inline Connection& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


            // startTime Field Functions 
            bool hasStartTime() const { return this->startTime_ != nullptr;};
            void deleteStartTime() { this->startTime_ = nullptr;};
            inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
            inline Connection& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
            inline Connection& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          protected:
            shared_ptr<string> closedReason_ {};
            shared_ptr<string> endTime_ {};
            shared_ptr<string> failedDetail_ {};
            shared_ptr<string> instanceId_ {};
            shared_ptr<string> startTime_ {};
            shared_ptr<string> status_ {};
          };

          virtual bool empty() const override { return this->connection_ == nullptr; };
          // connection Field Functions 
          bool hasConnection() const { return this->connection_ != nullptr;};
          void deleteConnection() { this->connection_ = nullptr;};
          inline const vector<Connections::Connection> & getConnection() const { DARABONBA_PTR_GET_CONST(connection_, vector<Connections::Connection>) };
          inline vector<Connections::Connection> getConnection() { DARABONBA_PTR_GET(connection_, vector<Connections::Connection>) };
          inline Connections& setConnection(const vector<Connections::Connection> & connection) { DARABONBA_PTR_SET_VALUE(connection_, connection) };
          inline Connections& setConnection(vector<Connections::Connection> && connection) { DARABONBA_PTR_SET_RVALUE(connection_, connection) };


        protected:
          shared_ptr<vector<Connections::Connection>> connection_ {};
        };

        virtual bool empty() const override { return this->clientIP_ == nullptr
        && this->connections_ == nullptr && this->creationTime_ == nullptr && this->identityType_ == nullptr && this->portNumber_ == nullptr && this->principalId_ == nullptr
        && this->sessionId_ == nullptr && this->targetServer_ == nullptr && this->username_ == nullptr; };
        // clientIP Field Functions 
        bool hasClientIP() const { return this->clientIP_ != nullptr;};
        void deleteClientIP() { this->clientIP_ = nullptr;};
        inline string getClientIP() const { DARABONBA_PTR_GET_DEFAULT(clientIP_, "") };
        inline Session& setClientIP(string clientIP) { DARABONBA_PTR_SET_VALUE(clientIP_, clientIP) };


        // connections Field Functions 
        bool hasConnections() const { return this->connections_ != nullptr;};
        void deleteConnections() { this->connections_ = nullptr;};
        inline const Session::Connections & getConnections() const { DARABONBA_PTR_GET_CONST(connections_, Session::Connections) };
        inline Session::Connections getConnections() { DARABONBA_PTR_GET(connections_, Session::Connections) };
        inline Session& setConnections(const Session::Connections & connections) { DARABONBA_PTR_SET_VALUE(connections_, connections) };
        inline Session& setConnections(Session::Connections && connections) { DARABONBA_PTR_SET_RVALUE(connections_, connections) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Session& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // identityType Field Functions 
        bool hasIdentityType() const { return this->identityType_ != nullptr;};
        void deleteIdentityType() { this->identityType_ = nullptr;};
        inline string getIdentityType() const { DARABONBA_PTR_GET_DEFAULT(identityType_, "") };
        inline Session& setIdentityType(string identityType) { DARABONBA_PTR_SET_VALUE(identityType_, identityType) };


        // portNumber Field Functions 
        bool hasPortNumber() const { return this->portNumber_ != nullptr;};
        void deletePortNumber() { this->portNumber_ = nullptr;};
        inline int32_t getPortNumber() const { DARABONBA_PTR_GET_DEFAULT(portNumber_, 0) };
        inline Session& setPortNumber(int32_t portNumber) { DARABONBA_PTR_SET_VALUE(portNumber_, portNumber) };


        // principalId Field Functions 
        bool hasPrincipalId() const { return this->principalId_ != nullptr;};
        void deletePrincipalId() { this->principalId_ = nullptr;};
        inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
        inline Session& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


        // sessionId Field Functions 
        bool hasSessionId() const { return this->sessionId_ != nullptr;};
        void deleteSessionId() { this->sessionId_ = nullptr;};
        inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
        inline Session& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


        // targetServer Field Functions 
        bool hasTargetServer() const { return this->targetServer_ != nullptr;};
        void deleteTargetServer() { this->targetServer_ = nullptr;};
        inline string getTargetServer() const { DARABONBA_PTR_GET_DEFAULT(targetServer_, "") };
        inline Session& setTargetServer(string targetServer) { DARABONBA_PTR_SET_VALUE(targetServer_, targetServer) };


        // username Field Functions 
        bool hasUsername() const { return this->username_ != nullptr;};
        void deleteUsername() { this->username_ = nullptr;};
        inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
        inline Session& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


      protected:
        shared_ptr<string> clientIP_ {};
        shared_ptr<Session::Connections> connections_ {};
        shared_ptr<string> creationTime_ {};
        shared_ptr<string> identityType_ {};
        shared_ptr<int32_t> portNumber_ {};
        shared_ptr<string> principalId_ {};
        shared_ptr<string> sessionId_ {};
        shared_ptr<string> targetServer_ {};
        shared_ptr<string> username_ {};
      };

      virtual bool empty() const override { return this->session_ == nullptr; };
      // session Field Functions 
      bool hasSession() const { return this->session_ != nullptr;};
      void deleteSession() { this->session_ = nullptr;};
      inline const vector<Sessions::Session> & getSession() const { DARABONBA_PTR_GET_CONST(session_, vector<Sessions::Session>) };
      inline vector<Sessions::Session> getSession() { DARABONBA_PTR_GET(session_, vector<Sessions::Session>) };
      inline Sessions& setSession(const vector<Sessions::Session> & session) { DARABONBA_PTR_SET_VALUE(session_, session) };
      inline Sessions& setSession(vector<Sessions::Session> && session) { DARABONBA_PTR_SET_RVALUE(session_, session) };


    protected:
      shared_ptr<vector<Sessions::Session>> session_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->sessions_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeTerminalSessionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTerminalSessionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessions Field Functions 
    bool hasSessions() const { return this->sessions_ != nullptr;};
    void deleteSessions() { this->sessions_ = nullptr;};
    inline const DescribeTerminalSessionsResponseBody::Sessions & getSessions() const { DARABONBA_PTR_GET_CONST(sessions_, DescribeTerminalSessionsResponseBody::Sessions) };
    inline DescribeTerminalSessionsResponseBody::Sessions getSessions() { DARABONBA_PTR_GET(sessions_, DescribeTerminalSessionsResponseBody::Sessions) };
    inline DescribeTerminalSessionsResponseBody& setSessions(const DescribeTerminalSessionsResponseBody::Sessions & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
    inline DescribeTerminalSessionsResponseBody& setSessions(DescribeTerminalSessionsResponseBody::Sessions && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeTerminalSessionsResponseBody::Sessions> sessions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
