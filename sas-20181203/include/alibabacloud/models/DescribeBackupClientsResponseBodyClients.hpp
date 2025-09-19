// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPCLIENTSRESPONSEBODYCLIENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPCLIENTSRESPONSEBODYCLIENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBackupClientsResponseBodyClients : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupClientsResponseBodyClients& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientStatus, clientStatus_);
      DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupClientsResponseBodyClients& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientStatus, clientStatus_);
      DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeBackupClientsResponseBodyClients() = default ;
    DescribeBackupClientsResponseBodyClients(const DescribeBackupClientsResponseBodyClients &) = default ;
    DescribeBackupClientsResponseBodyClients(DescribeBackupClientsResponseBodyClients &&) = default ;
    DescribeBackupClientsResponseBodyClients(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupClientsResponseBodyClients() = default ;
    DescribeBackupClientsResponseBodyClients& operator=(const DescribeBackupClientsResponseBodyClients &) = default ;
    DescribeBackupClientsResponseBodyClients& operator=(DescribeBackupClientsResponseBodyClients &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientId_ != nullptr
        && this->clientStatus_ != nullptr && this->clientVersion_ != nullptr && this->instanceId_ != nullptr && this->uuid_ != nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline DescribeBackupClientsResponseBodyClients& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientStatus Field Functions 
    bool hasClientStatus() const { return this->clientStatus_ != nullptr;};
    void deleteClientStatus() { this->clientStatus_ = nullptr;};
    inline string clientStatus() const { DARABONBA_PTR_GET_DEFAULT(clientStatus_, "") };
    inline DescribeBackupClientsResponseBodyClients& setClientStatus(string clientStatus) { DARABONBA_PTR_SET_VALUE(clientStatus_, clientStatus) };


    // clientVersion Field Functions 
    bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
    void deleteClientVersion() { this->clientVersion_ = nullptr;};
    inline string clientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
    inline DescribeBackupClientsResponseBodyClients& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeBackupClientsResponseBodyClients& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeBackupClientsResponseBodyClients& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The ID of the anti-ransomware agent.
    std::shared_ptr<string> clientId_ = nullptr;
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
    std::shared_ptr<string> clientStatus_ = nullptr;
    // The version of the anti-ransomware agent.
    std::shared_ptr<string> clientVersion_ = nullptr;
    // The ID of the ECS instance on which the anti-ransomware agent is installed.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The UUID of the Elastic Compute Service (ECS) instance on which the anti-ransomware agent is installed.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
