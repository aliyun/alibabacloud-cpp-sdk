// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTTERMINALSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTTERMINALSESSIONREQUEST_HPP_
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
  class StartTerminalSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartTerminalSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CommandLine, commandLine_);
      DARABONBA_PTR_TO_JSON(ConnectionType, connectionType_);
      DARABONBA_PTR_TO_JSON(EncryptionOptions, encryptionOptions_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PasswordName, passwordName_);
      DARABONBA_PTR_TO_JSON(PortNumber, portNumber_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TargetServer, targetServer_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, StartTerminalSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CommandLine, commandLine_);
      DARABONBA_PTR_FROM_JSON(ConnectionType, connectionType_);
      DARABONBA_PTR_FROM_JSON(EncryptionOptions, encryptionOptions_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PasswordName, passwordName_);
      DARABONBA_PTR_FROM_JSON(PortNumber, portNumber_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TargetServer, targetServer_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    StartTerminalSessionRequest() = default ;
    StartTerminalSessionRequest(const StartTerminalSessionRequest &) = default ;
    StartTerminalSessionRequest(StartTerminalSessionRequest &&) = default ;
    StartTerminalSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartTerminalSessionRequest() = default ;
    StartTerminalSessionRequest& operator=(const StartTerminalSessionRequest &) = default ;
    StartTerminalSessionRequest& operator=(StartTerminalSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EncryptionOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EncryptionOptions& obj) { 
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
      };
      friend void from_json(const Darabonba::Json& j, EncryptionOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(KMSKeyId, KMSKeyId_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
      };
      EncryptionOptions() = default ;
      EncryptionOptions(const EncryptionOptions &) = default ;
      EncryptionOptions(EncryptionOptions &&) = default ;
      EncryptionOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EncryptionOptions() = default ;
      EncryptionOptions& operator=(const EncryptionOptions &) = default ;
      EncryptionOptions& operator=(EncryptionOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enabled_ == nullptr
        && this->KMSKeyId_ == nullptr && this->mode_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline EncryptionOptions& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // KMSKeyId Field Functions 
      bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
      void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
      inline string getKMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
      inline EncryptionOptions& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline EncryptionOptions& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    protected:
      shared_ptr<bool> enabled_ {};
      shared_ptr<string> KMSKeyId_ {};
      shared_ptr<string> mode_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->commandLine_ == nullptr && this->connectionType_ == nullptr && this->encryptionOptions_ == nullptr && this->instanceId_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->passwordName_ == nullptr && this->portNumber_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->targetServer_ == nullptr && this->username_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline StartTerminalSessionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // commandLine Field Functions 
    bool hasCommandLine() const { return this->commandLine_ != nullptr;};
    void deleteCommandLine() { this->commandLine_ = nullptr;};
    inline string getCommandLine() const { DARABONBA_PTR_GET_DEFAULT(commandLine_, "") };
    inline StartTerminalSessionRequest& setCommandLine(string commandLine) { DARABONBA_PTR_SET_VALUE(commandLine_, commandLine) };


    // connectionType Field Functions 
    bool hasConnectionType() const { return this->connectionType_ != nullptr;};
    void deleteConnectionType() { this->connectionType_ = nullptr;};
    inline string getConnectionType() const { DARABONBA_PTR_GET_DEFAULT(connectionType_, "") };
    inline StartTerminalSessionRequest& setConnectionType(string connectionType) { DARABONBA_PTR_SET_VALUE(connectionType_, connectionType) };


    // encryptionOptions Field Functions 
    bool hasEncryptionOptions() const { return this->encryptionOptions_ != nullptr;};
    void deleteEncryptionOptions() { this->encryptionOptions_ = nullptr;};
    inline const StartTerminalSessionRequest::EncryptionOptions & getEncryptionOptions() const { DARABONBA_PTR_GET_CONST(encryptionOptions_, StartTerminalSessionRequest::EncryptionOptions) };
    inline StartTerminalSessionRequest::EncryptionOptions getEncryptionOptions() { DARABONBA_PTR_GET(encryptionOptions_, StartTerminalSessionRequest::EncryptionOptions) };
    inline StartTerminalSessionRequest& setEncryptionOptions(const StartTerminalSessionRequest::EncryptionOptions & encryptionOptions) { DARABONBA_PTR_SET_VALUE(encryptionOptions_, encryptionOptions) };
    inline StartTerminalSessionRequest& setEncryptionOptions(StartTerminalSessionRequest::EncryptionOptions && encryptionOptions) { DARABONBA_PTR_SET_RVALUE(encryptionOptions_, encryptionOptions) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const vector<string> & getInstanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, vector<string>) };
    inline vector<string> getInstanceId() { DARABONBA_PTR_GET(instanceId_, vector<string>) };
    inline StartTerminalSessionRequest& setInstanceId(const vector<string> & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline StartTerminalSessionRequest& setInstanceId(vector<string> && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline StartTerminalSessionRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline StartTerminalSessionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // passwordName Field Functions 
    bool hasPasswordName() const { return this->passwordName_ != nullptr;};
    void deletePasswordName() { this->passwordName_ = nullptr;};
    inline string getPasswordName() const { DARABONBA_PTR_GET_DEFAULT(passwordName_, "") };
    inline StartTerminalSessionRequest& setPasswordName(string passwordName) { DARABONBA_PTR_SET_VALUE(passwordName_, passwordName) };


    // portNumber Field Functions 
    bool hasPortNumber() const { return this->portNumber_ != nullptr;};
    void deletePortNumber() { this->portNumber_ = nullptr;};
    inline int32_t getPortNumber() const { DARABONBA_PTR_GET_DEFAULT(portNumber_, 0) };
    inline StartTerminalSessionRequest& setPortNumber(int32_t portNumber) { DARABONBA_PTR_SET_VALUE(portNumber_, portNumber) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StartTerminalSessionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline StartTerminalSessionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline StartTerminalSessionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // targetServer Field Functions 
    bool hasTargetServer() const { return this->targetServer_ != nullptr;};
    void deleteTargetServer() { this->targetServer_ = nullptr;};
    inline string getTargetServer() const { DARABONBA_PTR_GET_DEFAULT(targetServer_, "") };
    inline StartTerminalSessionRequest& setTargetServer(string targetServer) { DARABONBA_PTR_SET_VALUE(targetServer_, targetServer) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline StartTerminalSessionRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    shared_ptr<string> clientToken_ {};
    // The command to run after the session is initiated. The command length cannot exceed 512 characters.
    // 
    // >  If you specify the `CommandLine` parameter, you cannot specify the `PortNumber` or `TargetServer` parameter.
    shared_ptr<string> commandLine_ {};
    // The network type of the WebSocket URL required to connect to the instance. Valid values:
    // 
    // *   Internet (default)
    // *   Intranet
    shared_ptr<string> connectionType_ {};
    shared_ptr<StartTerminalSessionRequest::EncryptionOptions> encryptionOptions_ {};
    // The instance IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> instanceId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> passwordName_ {};
    // The port number of the ECS instance. The port is used to forward data. After this parameter is configured, Cloud Assistant Agent forwards data to the specified port. For example, you can set this parameter to 22 for data forwarding over SSH.
    // 
    // This parameter is empty by default, which indicates that no port is configured to forward data.
    shared_ptr<int32_t> portNumber_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The IP address of the instance. You can use the IP address to access the destination service in a virtual private cloud (VPC).
    // 
    // >  If this parameter is not empty, `PortNumber` specifies the port number that is used by the managed instance to access the destination service in the VPC.
    shared_ptr<string> targetServer_ {};
    // The username used for connection establishment.
    shared_ptr<string> username_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
