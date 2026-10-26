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
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
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
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
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
        && this->privateKey_ == nullptr && this->privilegeType_ == nullptr && this->projectId_ == nullptr && this->regionId_ == nullptr && this->rotationMode_ == nullptr; };
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


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ModifyHostAccountRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


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
    // The ID of the host account to modify.
    // 
    // > You can call the [ListHostAccounts](https://help.aliyun.com/document_detail/204372.html) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> hostAccountId_ {};
    // The new name of the host account. The name can be up to 128 characters in length.
    shared_ptr<string> hostAccountName_ {};
    // The ID of the shared key for the host.
    // > You can call the [ListHostShareKeys](https://help.aliyun.com/document_detail/462973.html) operation to obtain this ID.
    shared_ptr<string> hostShareKeyId_ {};
    // The ID of the bastion host instance where the host account to modify resides.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to obtain the bastion host instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The new passphrase of the private key for the host account.
    // 
    // > This parameter takes effect only when the protocol of the host account is SSH. If the protocol is RDP, you do not need to configure this parameter.
    shared_ptr<string> passPhrase_ {};
    // The new password of the host account.
    shared_ptr<string> password_ {};
    // The new private key of the host account. The private key is a Base64-encoded string.
    // 
    // > This parameter takes effect only when the protocol of the host account is SSH. If the protocol is RDP, you do not need to configure this parameter. You can call the [GetHostAccount](https://help.aliyun.com/document_detail/204391.html) operation to query the protocol used by the host account. You can configure both a password and a private key for the host account. When connecting to an asset, the bastion host preferentially uses the private key.
    shared_ptr<string> privateKey_ {};
    // The privilege type of the account. Valid values:
    // - **Privileged**: privileged account.
    // - **Normal**: standard account.
    // >Only supported in V3.2.47 and later.
    shared_ptr<string> privilegeType_ {};
    // The ID of the project to which the host of the host account belongs.
    shared_ptr<int64_t> projectId_ {};
    // The region ID of the bastion host instance where the host account to query resides.
    // 
    // > For the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The password rotation mode of the account. Valid values:
    // - **Privileged**: uses a privileged account to rotate the password.
    // - **Self**: does not use a privileged account to rotate the password.
    // >Only supported in V3.2.47 and later.
    shared_ptr<string> rotationMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
