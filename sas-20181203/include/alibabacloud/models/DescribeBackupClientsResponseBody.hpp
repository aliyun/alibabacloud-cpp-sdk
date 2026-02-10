// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPCLIENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPCLIENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBackupClientsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupClientsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Clients, clients_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupClientsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Clients, clients_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBackupClientsResponseBody() = default ;
    DescribeBackupClientsResponseBody(const DescribeBackupClientsResponseBody &) = default ;
    DescribeBackupClientsResponseBody(DescribeBackupClientsResponseBody &&) = default ;
    DescribeBackupClientsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupClientsResponseBody() = default ;
    DescribeBackupClientsResponseBody& operator=(const DescribeBackupClientsResponseBody &) = default ;
    DescribeBackupClientsResponseBody& operator=(DescribeBackupClientsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Clients : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Clients& obj) { 
        DARABONBA_PTR_TO_JSON(ClientId, clientId_);
        DARABONBA_PTR_TO_JSON(ClientStatus, clientStatus_);
        DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, Clients& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
        DARABONBA_PTR_FROM_JSON(ClientStatus, clientStatus_);
        DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      Clients() = default ;
      Clients(const Clients &) = default ;
      Clients(Clients &&) = default ;
      Clients(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Clients() = default ;
      Clients& operator=(const Clients &) = default ;
      Clients& operator=(Clients &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientId_ == nullptr
        && this->clientStatus_ == nullptr && this->clientVersion_ == nullptr && this->instanceId_ == nullptr && this->uuid_ == nullptr; };
      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline Clients& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // clientStatus Field Functions 
      bool hasClientStatus() const { return this->clientStatus_ != nullptr;};
      void deleteClientStatus() { this->clientStatus_ = nullptr;};
      inline string getClientStatus() const { DARABONBA_PTR_GET_DEFAULT(clientStatus_, "") };
      inline Clients& setClientStatus(string clientStatus) { DARABONBA_PTR_SET_VALUE(clientStatus_, clientStatus) };


      // clientVersion Field Functions 
      bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
      void deleteClientVersion() { this->clientVersion_ = nullptr;};
      inline string getClientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
      inline Clients& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Clients& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Clients& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The ID of the anti-ransomware agent.
      shared_ptr<string> clientId_ {};
      // The status of the anti-ransomware agent.
      // 
      // Valid values:
      // 
      // *   **INSTALLING**: The agent is being installed.
      // *   **ONLINE**: The agent is online.
      // *   **UNINSTALLING**: The agent is being uninstalled.
      // *   **NOT_INSTALLED**: The agent is not installed.
      // *   **ACTIVATED**: The agent is enabled.
      // *   **CLIENT_CONNECTION_ERROR**: A connection error occurs on the agent.
      shared_ptr<string> clientStatus_ {};
      // The version of the anti-ransomware agent.
      shared_ptr<string> clientVersion_ {};
      // The ID of the ECS instance on which the anti-ransomware agent is installed.
      shared_ptr<string> instanceId_ {};
      // The UUID of the Elastic Compute Service (ECS) instance on which the anti-ransomware agent is installed.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->clients_ == nullptr
        && this->requestId_ == nullptr; };
    // clients Field Functions 
    bool hasClients() const { return this->clients_ != nullptr;};
    void deleteClients() { this->clients_ = nullptr;};
    inline const vector<DescribeBackupClientsResponseBody::Clients> & getClients() const { DARABONBA_PTR_GET_CONST(clients_, vector<DescribeBackupClientsResponseBody::Clients>) };
    inline vector<DescribeBackupClientsResponseBody::Clients> getClients() { DARABONBA_PTR_GET(clients_, vector<DescribeBackupClientsResponseBody::Clients>) };
    inline DescribeBackupClientsResponseBody& setClients(const vector<DescribeBackupClientsResponseBody::Clients> & clients) { DARABONBA_PTR_SET_VALUE(clients_, clients) };
    inline DescribeBackupClientsResponseBody& setClients(vector<DescribeBackupClientsResponseBody::Clients> && clients) { DARABONBA_PTR_SET_RVALUE(clients_, clients) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupClientsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the information about the anti-ransomware agent.
    shared_ptr<vector<DescribeBackupClientsResponseBody::Clients>> clients_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
