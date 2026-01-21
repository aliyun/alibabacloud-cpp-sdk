// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHOSTACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHOSTACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class CreateHostAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHostAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HostAccountName, hostAccountName_);
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(HostShareKeyId, hostShareKeyId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PassPhrase, passPhrase_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_TO_JSON(PrivilegeType, privilegeType_);
      DARABONBA_PTR_TO_JSON(ProtocolName, protocolName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RotationMode, rotationMode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHostAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostAccountName, hostAccountName_);
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(HostShareKeyId, hostShareKeyId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PassPhrase, passPhrase_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_FROM_JSON(PrivilegeType, privilegeType_);
      DARABONBA_PTR_FROM_JSON(ProtocolName, protocolName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RotationMode, rotationMode_);
    };
    CreateHostAccountRequest() = default ;
    CreateHostAccountRequest(const CreateHostAccountRequest &) = default ;
    CreateHostAccountRequest(CreateHostAccountRequest &&) = default ;
    CreateHostAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHostAccountRequest() = default ;
    CreateHostAccountRequest& operator=(const CreateHostAccountRequest &) = default ;
    CreateHostAccountRequest& operator=(CreateHostAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostAccountName_ == nullptr
        && this->hostId_ == nullptr && this->hostShareKeyId_ == nullptr && this->instanceId_ == nullptr && this->passPhrase_ == nullptr && this->password_ == nullptr
        && this->privateKey_ == nullptr && this->privilegeType_ == nullptr && this->protocolName_ == nullptr && this->regionId_ == nullptr && this->rotationMode_ == nullptr; };
    // hostAccountName Field Functions 
    bool hasHostAccountName() const { return this->hostAccountName_ != nullptr;};
    void deleteHostAccountName() { this->hostAccountName_ = nullptr;};
    inline string getHostAccountName() const { DARABONBA_PTR_GET_DEFAULT(hostAccountName_, "") };
    inline CreateHostAccountRequest& setHostAccountName(string hostAccountName) { DARABONBA_PTR_SET_VALUE(hostAccountName_, hostAccountName) };


    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string getHostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline CreateHostAccountRequest& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // hostShareKeyId Field Functions 
    bool hasHostShareKeyId() const { return this->hostShareKeyId_ != nullptr;};
    void deleteHostShareKeyId() { this->hostShareKeyId_ = nullptr;};
    inline string getHostShareKeyId() const { DARABONBA_PTR_GET_DEFAULT(hostShareKeyId_, "") };
    inline CreateHostAccountRequest& setHostShareKeyId(string hostShareKeyId) { DARABONBA_PTR_SET_VALUE(hostShareKeyId_, hostShareKeyId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateHostAccountRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // passPhrase Field Functions 
    bool hasPassPhrase() const { return this->passPhrase_ != nullptr;};
    void deletePassPhrase() { this->passPhrase_ = nullptr;};
    inline string getPassPhrase() const { DARABONBA_PTR_GET_DEFAULT(passPhrase_, "") };
    inline CreateHostAccountRequest& setPassPhrase(string passPhrase) { DARABONBA_PTR_SET_VALUE(passPhrase_, passPhrase) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateHostAccountRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // privateKey Field Functions 
    bool hasPrivateKey() const { return this->privateKey_ != nullptr;};
    void deletePrivateKey() { this->privateKey_ = nullptr;};
    inline string getPrivateKey() const { DARABONBA_PTR_GET_DEFAULT(privateKey_, "") };
    inline CreateHostAccountRequest& setPrivateKey(string privateKey) { DARABONBA_PTR_SET_VALUE(privateKey_, privateKey) };


    // privilegeType Field Functions 
    bool hasPrivilegeType() const { return this->privilegeType_ != nullptr;};
    void deletePrivilegeType() { this->privilegeType_ = nullptr;};
    inline string getPrivilegeType() const { DARABONBA_PTR_GET_DEFAULT(privilegeType_, "") };
    inline CreateHostAccountRequest& setPrivilegeType(string privilegeType) { DARABONBA_PTR_SET_VALUE(privilegeType_, privilegeType) };


    // protocolName Field Functions 
    bool hasProtocolName() const { return this->protocolName_ != nullptr;};
    void deleteProtocolName() { this->protocolName_ = nullptr;};
    inline string getProtocolName() const { DARABONBA_PTR_GET_DEFAULT(protocolName_, "") };
    inline CreateHostAccountRequest& setProtocolName(string protocolName) { DARABONBA_PTR_SET_VALUE(protocolName_, protocolName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateHostAccountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rotationMode Field Functions 
    bool hasRotationMode() const { return this->rotationMode_ != nullptr;};
    void deleteRotationMode() { this->rotationMode_ = nullptr;};
    inline string getRotationMode() const { DARABONBA_PTR_GET_DEFAULT(rotationMode_, "") };
    inline CreateHostAccountRequest& setRotationMode(string rotationMode) { DARABONBA_PTR_SET_VALUE(rotationMode_, rotationMode) };


  protected:
    // The name of the host account. The name can be up to 128 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> hostAccountName_ {};
    // The ID of the host to which you want to add a host account.
    // 
    // >  You can call the [ListHosts](https://help.aliyun.com/document_detail/200665.html) operation to query the ID of the host.
    // 
    // This parameter is required.
    shared_ptr<string> hostId_ {};
    // The ID of the shared key.
    shared_ptr<string> hostShareKeyId_ {};
    // The ID of the bastion host in which you want to add a host account to the host.
    // 
    // >  You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the ID of the bastion host.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The passphrase for the private key of the host account.
    // 
    // > You can configure this parameter only if ProtocolName is set to SSH. You do not need to configure this parameter if ProtocolName is set to RDP.
    shared_ptr<string> passPhrase_ {};
    // The password of the host account.
    shared_ptr<string> password_ {};
    // The private key of the host account. Specify a Base64-encoded string.
    // 
    // > This parameter is valid only if ProtocolName is set to SSH. You do not need to configure this parameter if ProtocolName is set to RDP. You can configure a password and a private key for the host account at the same time. If both a password and a private key are configured for the host account, Bastionhost preferentially uses the private key for logon.
    shared_ptr<string> privateKey_ {};
    shared_ptr<string> privilegeType_ {};
    // The protocol of the host to which you want to add a host account.
    // 
    // Valid values:
    // 
    // *   SSH
    // *   RDP
    // 
    // This parameter is required.
    shared_ptr<string> protocolName_ {};
    // The region ID of the bastion host in which you want to add a host account to the host.
    // 
    // >  For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    shared_ptr<string> rotationMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
