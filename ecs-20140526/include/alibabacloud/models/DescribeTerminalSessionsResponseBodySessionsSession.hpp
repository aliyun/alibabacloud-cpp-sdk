// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETERMINALSESSIONSRESPONSEBODYSESSIONSSESSION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETERMINALSESSIONSRESPONSEBODYSESSIONSSESSION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeTerminalSessionsResponseBodySessionsSessionConnections.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeTerminalSessionsResponseBodySessionsSession : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTerminalSessionsResponseBodySessionsSession& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeTerminalSessionsResponseBodySessionsSession& obj) { 
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
    DescribeTerminalSessionsResponseBodySessionsSession() = default ;
    DescribeTerminalSessionsResponseBodySessionsSession(const DescribeTerminalSessionsResponseBodySessionsSession &) = default ;
    DescribeTerminalSessionsResponseBodySessionsSession(DescribeTerminalSessionsResponseBodySessionsSession &&) = default ;
    DescribeTerminalSessionsResponseBodySessionsSession(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTerminalSessionsResponseBodySessionsSession() = default ;
    DescribeTerminalSessionsResponseBodySessionsSession& operator=(const DescribeTerminalSessionsResponseBodySessionsSession &) = default ;
    DescribeTerminalSessionsResponseBodySessionsSession& operator=(DescribeTerminalSessionsResponseBodySessionsSession &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientIP_ != nullptr
        && this->connections_ != nullptr && this->creationTime_ != nullptr && this->identityType_ != nullptr && this->portNumber_ != nullptr && this->principalId_ != nullptr
        && this->sessionId_ != nullptr && this->targetServer_ != nullptr && this->username_ != nullptr; };
    // clientIP Field Functions 
    bool hasClientIP() const { return this->clientIP_ != nullptr;};
    void deleteClientIP() { this->clientIP_ = nullptr;};
    inline string clientIP() const { DARABONBA_PTR_GET_DEFAULT(clientIP_, "") };
    inline DescribeTerminalSessionsResponseBodySessionsSession& setClientIP(string clientIP) { DARABONBA_PTR_SET_VALUE(clientIP_, clientIP) };


    // connections Field Functions 
    bool hasConnections() const { return this->connections_ != nullptr;};
    void deleteConnections() { this->connections_ = nullptr;};
    inline const Models::DescribeTerminalSessionsResponseBodySessionsSessionConnections & connections() const { DARABONBA_PTR_GET_CONST(connections_, Models::DescribeTerminalSessionsResponseBodySessionsSessionConnections) };
    inline Models::DescribeTerminalSessionsResponseBodySessionsSessionConnections connections() { DARABONBA_PTR_GET(connections_, Models::DescribeTerminalSessionsResponseBodySessionsSessionConnections) };
    inline DescribeTerminalSessionsResponseBodySessionsSession& setConnections(const Models::DescribeTerminalSessionsResponseBodySessionsSessionConnections & connections) { DARABONBA_PTR_SET_VALUE(connections_, connections) };
    inline DescribeTerminalSessionsResponseBodySessionsSession& setConnections(Models::DescribeTerminalSessionsResponseBodySessionsSessionConnections && connections) { DARABONBA_PTR_SET_RVALUE(connections_, connections) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeTerminalSessionsResponseBodySessionsSession& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // identityType Field Functions 
    bool hasIdentityType() const { return this->identityType_ != nullptr;};
    void deleteIdentityType() { this->identityType_ = nullptr;};
    inline string identityType() const { DARABONBA_PTR_GET_DEFAULT(identityType_, "") };
    inline DescribeTerminalSessionsResponseBodySessionsSession& setIdentityType(string identityType) { DARABONBA_PTR_SET_VALUE(identityType_, identityType) };


    // portNumber Field Functions 
    bool hasPortNumber() const { return this->portNumber_ != nullptr;};
    void deletePortNumber() { this->portNumber_ = nullptr;};
    inline int32_t portNumber() const { DARABONBA_PTR_GET_DEFAULT(portNumber_, 0) };
    inline DescribeTerminalSessionsResponseBodySessionsSession& setPortNumber(int32_t portNumber) { DARABONBA_PTR_SET_VALUE(portNumber_, portNumber) };


    // principalId Field Functions 
    bool hasPrincipalId() const { return this->principalId_ != nullptr;};
    void deletePrincipalId() { this->principalId_ = nullptr;};
    inline string principalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
    inline DescribeTerminalSessionsResponseBodySessionsSession& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline DescribeTerminalSessionsResponseBodySessionsSession& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // targetServer Field Functions 
    bool hasTargetServer() const { return this->targetServer_ != nullptr;};
    void deleteTargetServer() { this->targetServer_ = nullptr;};
    inline string targetServer() const { DARABONBA_PTR_GET_DEFAULT(targetServer_, "") };
    inline DescribeTerminalSessionsResponseBodySessionsSession& setTargetServer(string targetServer) { DARABONBA_PTR_SET_VALUE(targetServer_, targetServer) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline DescribeTerminalSessionsResponseBodySessionsSession& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The IP address of the client used to establish connections.
    std::shared_ptr<string> clientIP_ = nullptr;
    // The information of the connections.
    std::shared_ptr<Models::DescribeTerminalSessionsResponseBodySessionsSessionConnections> connections_ = nullptr;
    // The time when the session was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The principal type. Valid values:
    // 
    // *   Account: an Alibaba Cloud account
    // *   RAMUser: a RAM user
    // *   AssumedRoleUser: a RAM role
    std::shared_ptr<string> identityType_ = nullptr;
    // The port number of the instance, which is used for data forwarding. If no port number was specified for data forwarding when the session was created, this parameter is empty.
    std::shared_ptr<int32_t> portNumber_ = nullptr;
    // The ID of the principal. Valid values based on the `IdentityType` value:
    // 
    // *   If the requester uses an Alibaba Cloud account to call the operation, the ID of the Alibaba Cloud account is returned.
    // *   If the requester uses a Resource Access Management (RAM) user to call the operation, the ID of the RAM user is returned.
    // *   If the requester uses a RAM role to call the operation, the ID of the principal that actually calls the operation is returned.
    std::shared_ptr<string> principalId_ = nullptr;
    // The session ID.
    std::shared_ptr<string> sessionId_ = nullptr;
    // The address of the service that was accessed in a virtual private cloud (VPC) from the instance.
    std::shared_ptr<string> targetServer_ = nullptr;
    // The username used to establish connections.
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
