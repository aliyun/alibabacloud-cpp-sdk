// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHOSTACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHOSTACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ModifyHostAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHostAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HostAccountId, hostAccountId_);
      DARABONBA_PTR_TO_JSON(HostAccountName, hostAccountName_);
      DARABONBA_PTR_TO_JSON(HostShareKeyId, hostShareKeyId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PassPhrase, passPhrase_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_TO_JSON(PrivilegeType, privilegeType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RotationMode, rotationMode_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHostAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostAccountId, hostAccountId_);
      DARABONBA_PTR_FROM_JSON(HostAccountName, hostAccountName_);
      DARABONBA_PTR_FROM_JSON(HostShareKeyId, hostShareKeyId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PassPhrase, passPhrase_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_FROM_JSON(PrivilegeType, privilegeType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RotationMode, rotationMode_);
    };
    ModifyHostAccountRequest() = default ;
    ModifyHostAccountRequest(const ModifyHostAccountRequest &) = default ;
    ModifyHostAccountRequest(ModifyHostAccountRequest &&) = default ;
    ModifyHostAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHostAccountRequest() = default ;
    ModifyHostAccountRequest& operator=(const ModifyHostAccountRequest &) = default ;
    ModifyHostAccountRequest& operator=(ModifyHostAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostAccountId_ == nullptr
        && this->hostAccountName_ == nullptr && this->hostShareKeyId_ == nullptr && this->instanceId_ == nullptr && this->passPhrase_ == nullptr && this->password_ == nullptr
        && this->privateKey_ == nullptr && this->privilegeType_ == nullptr && this->regionId_ == nullptr && this->rotationMode_ == nullptr; };
    // hostAccountId Field Functions 
    bool hasHostAccountId() const { return this->hostAccountId_ != nullptr;};
    void deleteHostAccountId() { this->hostAccountId_ = nullptr;};
    inline string getHostAccountId() const { DARABONBA_PTR_GET_DEFAULT(hostAccountId_, "") };
    inline ModifyHostAccountRequest& setHostAccountId(string hostAccountId) { DARABONBA_PTR_SET_VALUE(hostAccountId_, hostAccountId) };


    // hostAccountName Field Functions 
    bool hasHostAccountName() const { return this->hostAccountName_ != nullptr;};
    void deleteHostAccountName() { this->hostAccountName_ = nullptr;};
    inline string getHostAccountName() const { DARABONBA_PTR_GET_DEFAULT(hostAccountName_, "") };
    inline ModifyHostAccountRequest& setHostAccountName(string hostAccountName) { DARABONBA_PTR_SET_VALUE(hostAccountName_, hostAccountName) };


    // hostShareKeyId Field Functions 
    bool hasHostShareKeyId() const { return this->hostShareKeyId_ != nullptr;};
    void deleteHostShareKeyId() { this->hostShareKeyId_ = nullptr;};
    inline string getHostShareKeyId() const { DARABONBA_PTR_GET_DEFAULT(hostShareKeyId_, "") };
    inline ModifyHostAccountRequest& setHostShareKeyId(string hostShareKeyId) { DARABONBA_PTR_SET_VALUE(hostShareKeyId_, hostShareKeyId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyHostAccountRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // passPhrase Field Functions 
    bool hasPassPhrase() const { return this->passPhrase_ != nullptr;};
    void deletePassPhrase() { this->passPhrase_ = nullptr;};
    inline string getPassPhrase() const { DARABONBA_PTR_GET_DEFAULT(passPhrase_, "") };
    inline ModifyHostAccountRequest& setPassPhrase(string passPhrase) { DARABONBA_PTR_SET_VALUE(passPhrase_, passPhrase) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifyHostAccountRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // privateKey Field Functions 
    bool hasPrivateKey() const { return this->privateKey_ != nullptr;};
    void deletePrivateKey() { this->privateKey_ = nullptr;};
    inline string getPrivateKey() const { DARABONBA_PTR_GET_DEFAULT(privateKey_, "") };
    inline ModifyHostAccountRequest& setPrivateKey(string privateKey) { DARABONBA_PTR_SET_VALUE(privateKey_, privateKey) };


    // privilegeType Field Functions 
    bool hasPrivilegeType() const { return this->privilegeType_ != nullptr;};
    void deletePrivilegeType() { this->privilegeType_ = nullptr;};
    inline string getPrivilegeType() const { DARABONBA_PTR_GET_DEFAULT(privilegeType_, "") };
    inline ModifyHostAccountRequest& setPrivilegeType(string privilegeType) { DARABONBA_PTR_SET_VALUE(privilegeType_, privilegeType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyHostAccountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rotationMode Field Functions 
    bool hasRotationMode() const { return this->rotationMode_ != nullptr;};
    void deleteRotationMode() { this->rotationMode_ = nullptr;};
    inline string getRotationMode() const { DARABONBA_PTR_GET_DEFAULT(rotationMode_, "") };
    inline ModifyHostAccountRequest& setRotationMode(string rotationMode) { DARABONBA_PTR_SET_VALUE(rotationMode_, rotationMode) };


  protected:
    // The ID of the host account whose information you want to modify.
    // 
    // > You can call the [ListHostAccounts](https://help.aliyun.com/document_detail/204372.html) operation to query the ID of the host account.
    // 
    // This parameter is required.
    shared_ptr<string> hostAccountId_ {};
    // The new name of the host account. The name can be up to 128 characters in length.
    shared_ptr<string> hostAccountName_ {};
    // The ID of the shared key that is associated with the host.
    // 
    // >  You can call the [ListHostShareKeys](https://help.aliyun.com/document_detail/462973.html) operation to query the shared key ID.
    shared_ptr<string> hostShareKeyId_ {};
    // The ID of the bastion host in which you want to modify the information about the host account.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the ID of the bastion host.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The passphrase for the new private key of the host account.
    // 
    // >  This parameter is valid only if the protocol used by the host is SSH. You do not need to configure this parameter if the protocol used by the host is Remote Desktop Protocol (RDP).
    shared_ptr<string> passPhrase_ {};
    // The new password of the host account.
    shared_ptr<string> password_ {};
    // The new private key of the host account. Specify a Base64-encoded string.
    // 
    // >  This parameter takes effect only if the protocol used by the host is SSH. You do not need to configure this parameter if the protocol used by the host is Remote Desktop Protocol (RDP). You can call the [GetHostAccount](https://help.aliyun.com/document_detail/204391.html) operation to query the protocol used by the host. You can configure a password and a private key for the host account at the same time. If both a password and a private key are configured for the host account, Bastionhost preferentially uses the private key for logon.
    shared_ptr<string> privateKey_ {};
    shared_ptr<string> privilegeType_ {};
    // The region ID of the bastion host in which you want to query the details of the host account.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    shared_ptr<string> rotationMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
