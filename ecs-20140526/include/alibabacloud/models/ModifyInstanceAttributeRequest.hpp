// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyInstanceAttributeRequestCpuOptions.hpp>
#include <alibabacloud/models/ModifyInstanceAttributeRequestPrivateDnsNameOptions.hpp>
#include <alibabacloud/models/ModifyInstanceAttributeRequestRemoteConnectionOptions.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyInstanceAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CpuOptions, cpuOptions_);
      DARABONBA_PTR_TO_JSON(CreditSpecification, creditSpecification_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableJumboFrame, enableJumboFrame_);
      DARABONBA_PTR_TO_JSON(EnableNetworkEncryption, enableNetworkEncryption_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceQueueNumber, networkInterfaceQueueNumber_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PrivateDnsNameOptions, privateDnsNameOptions_);
      DARABONBA_PTR_TO_JSON(Recyclable, recyclable_);
      DARABONBA_PTR_TO_JSON(RemoteConnectionOptions, remoteConnectionOptions_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CpuOptions, cpuOptions_);
      DARABONBA_PTR_FROM_JSON(CreditSpecification, creditSpecification_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableJumboFrame, enableJumboFrame_);
      DARABONBA_PTR_FROM_JSON(EnableNetworkEncryption, enableNetworkEncryption_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceQueueNumber, networkInterfaceQueueNumber_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PrivateDnsNameOptions, privateDnsNameOptions_);
      DARABONBA_PTR_FROM_JSON(Recyclable, recyclable_);
      DARABONBA_PTR_FROM_JSON(RemoteConnectionOptions, remoteConnectionOptions_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    ModifyInstanceAttributeRequest() = default ;
    ModifyInstanceAttributeRequest(const ModifyInstanceAttributeRequest &) = default ;
    ModifyInstanceAttributeRequest(ModifyInstanceAttributeRequest &&) = default ;
    ModifyInstanceAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceAttributeRequest() = default ;
    ModifyInstanceAttributeRequest& operator=(const ModifyInstanceAttributeRequest &) = default ;
    ModifyInstanceAttributeRequest& operator=(ModifyInstanceAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cpuOptions_ != nullptr
        && this->creditSpecification_ != nullptr && this->deletionProtection_ != nullptr && this->description_ != nullptr && this->enableJumboFrame_ != nullptr && this->enableNetworkEncryption_ != nullptr
        && this->hostName_ != nullptr && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->networkInterfaceQueueNumber_ != nullptr && this->ownerAccount_ != nullptr
        && this->ownerId_ != nullptr && this->password_ != nullptr && this->privateDnsNameOptions_ != nullptr && this->recyclable_ != nullptr && this->remoteConnectionOptions_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->securityGroupIds_ != nullptr && this->userData_ != nullptr; };
    // cpuOptions Field Functions 
    bool hasCpuOptions() const { return this->cpuOptions_ != nullptr;};
    void deleteCpuOptions() { this->cpuOptions_ = nullptr;};
    inline const ModifyInstanceAttributeRequestCpuOptions & cpuOptions() const { DARABONBA_PTR_GET_CONST(cpuOptions_, ModifyInstanceAttributeRequestCpuOptions) };
    inline ModifyInstanceAttributeRequestCpuOptions cpuOptions() { DARABONBA_PTR_GET(cpuOptions_, ModifyInstanceAttributeRequestCpuOptions) };
    inline ModifyInstanceAttributeRequest& setCpuOptions(const ModifyInstanceAttributeRequestCpuOptions & cpuOptions) { DARABONBA_PTR_SET_VALUE(cpuOptions_, cpuOptions) };
    inline ModifyInstanceAttributeRequest& setCpuOptions(ModifyInstanceAttributeRequestCpuOptions && cpuOptions) { DARABONBA_PTR_SET_RVALUE(cpuOptions_, cpuOptions) };


    // creditSpecification Field Functions 
    bool hasCreditSpecification() const { return this->creditSpecification_ != nullptr;};
    void deleteCreditSpecification() { this->creditSpecification_ = nullptr;};
    inline string creditSpecification() const { DARABONBA_PTR_GET_DEFAULT(creditSpecification_, "") };
    inline ModifyInstanceAttributeRequest& setCreditSpecification(string creditSpecification) { DARABONBA_PTR_SET_VALUE(creditSpecification_, creditSpecification) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline ModifyInstanceAttributeRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyInstanceAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableJumboFrame Field Functions 
    bool hasEnableJumboFrame() const { return this->enableJumboFrame_ != nullptr;};
    void deleteEnableJumboFrame() { this->enableJumboFrame_ = nullptr;};
    inline bool enableJumboFrame() const { DARABONBA_PTR_GET_DEFAULT(enableJumboFrame_, false) };
    inline ModifyInstanceAttributeRequest& setEnableJumboFrame(bool enableJumboFrame) { DARABONBA_PTR_SET_VALUE(enableJumboFrame_, enableJumboFrame) };


    // enableNetworkEncryption Field Functions 
    bool hasEnableNetworkEncryption() const { return this->enableNetworkEncryption_ != nullptr;};
    void deleteEnableNetworkEncryption() { this->enableNetworkEncryption_ = nullptr;};
    inline bool enableNetworkEncryption() const { DARABONBA_PTR_GET_DEFAULT(enableNetworkEncryption_, false) };
    inline ModifyInstanceAttributeRequest& setEnableNetworkEncryption(bool enableNetworkEncryption) { DARABONBA_PTR_SET_VALUE(enableNetworkEncryption_, enableNetworkEncryption) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline ModifyInstanceAttributeRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceAttributeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ModifyInstanceAttributeRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // networkInterfaceQueueNumber Field Functions 
    bool hasNetworkInterfaceQueueNumber() const { return this->networkInterfaceQueueNumber_ != nullptr;};
    void deleteNetworkInterfaceQueueNumber() { this->networkInterfaceQueueNumber_ = nullptr;};
    inline int32_t networkInterfaceQueueNumber() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceQueueNumber_, 0) };
    inline ModifyInstanceAttributeRequest& setNetworkInterfaceQueueNumber(int32_t networkInterfaceQueueNumber) { DARABONBA_PTR_SET_VALUE(networkInterfaceQueueNumber_, networkInterfaceQueueNumber) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyInstanceAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyInstanceAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifyInstanceAttributeRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // privateDnsNameOptions Field Functions 
    bool hasPrivateDnsNameOptions() const { return this->privateDnsNameOptions_ != nullptr;};
    void deletePrivateDnsNameOptions() { this->privateDnsNameOptions_ = nullptr;};
    inline const ModifyInstanceAttributeRequestPrivateDnsNameOptions & privateDnsNameOptions() const { DARABONBA_PTR_GET_CONST(privateDnsNameOptions_, ModifyInstanceAttributeRequestPrivateDnsNameOptions) };
    inline ModifyInstanceAttributeRequestPrivateDnsNameOptions privateDnsNameOptions() { DARABONBA_PTR_GET(privateDnsNameOptions_, ModifyInstanceAttributeRequestPrivateDnsNameOptions) };
    inline ModifyInstanceAttributeRequest& setPrivateDnsNameOptions(const ModifyInstanceAttributeRequestPrivateDnsNameOptions & privateDnsNameOptions) { DARABONBA_PTR_SET_VALUE(privateDnsNameOptions_, privateDnsNameOptions) };
    inline ModifyInstanceAttributeRequest& setPrivateDnsNameOptions(ModifyInstanceAttributeRequestPrivateDnsNameOptions && privateDnsNameOptions) { DARABONBA_PTR_SET_RVALUE(privateDnsNameOptions_, privateDnsNameOptions) };


    // recyclable Field Functions 
    bool hasRecyclable() const { return this->recyclable_ != nullptr;};
    void deleteRecyclable() { this->recyclable_ = nullptr;};
    inline bool recyclable() const { DARABONBA_PTR_GET_DEFAULT(recyclable_, false) };
    inline ModifyInstanceAttributeRequest& setRecyclable(bool recyclable) { DARABONBA_PTR_SET_VALUE(recyclable_, recyclable) };


    // remoteConnectionOptions Field Functions 
    bool hasRemoteConnectionOptions() const { return this->remoteConnectionOptions_ != nullptr;};
    void deleteRemoteConnectionOptions() { this->remoteConnectionOptions_ = nullptr;};
    inline const ModifyInstanceAttributeRequestRemoteConnectionOptions & remoteConnectionOptions() const { DARABONBA_PTR_GET_CONST(remoteConnectionOptions_, ModifyInstanceAttributeRequestRemoteConnectionOptions) };
    inline ModifyInstanceAttributeRequestRemoteConnectionOptions remoteConnectionOptions() { DARABONBA_PTR_GET(remoteConnectionOptions_, ModifyInstanceAttributeRequestRemoteConnectionOptions) };
    inline ModifyInstanceAttributeRequest& setRemoteConnectionOptions(const ModifyInstanceAttributeRequestRemoteConnectionOptions & remoteConnectionOptions) { DARABONBA_PTR_SET_VALUE(remoteConnectionOptions_, remoteConnectionOptions) };
    inline ModifyInstanceAttributeRequest& setRemoteConnectionOptions(ModifyInstanceAttributeRequestRemoteConnectionOptions && remoteConnectionOptions) { DARABONBA_PTR_SET_RVALUE(remoteConnectionOptions_, remoteConnectionOptions) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyInstanceAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyInstanceAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline ModifyInstanceAttributeRequest& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline ModifyInstanceAttributeRequest& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline ModifyInstanceAttributeRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    std::shared_ptr<ModifyInstanceAttributeRequestCpuOptions> cpuOptions_ = nullptr;
    // The performance mode of the burstable instance. Valid values:
    // 
    // *   Standard
    // *   Unlimited
    // 
    // For more information about the performance modes of burstable instances, see [Overview](https://help.aliyun.com/document_detail/59977.html).
    std::shared_ptr<string> creditSpecification_ = nullptr;
    // The release protection attribute of the instance. This parameter specifies whether you can use the ECS console or call the [DeleteInstance](https://help.aliyun.com/document_detail/25507.html) operation to release the instance.
    // 
    // >  This parameter is applicable only to pay-as-you-go instances. The release protection attribute can protect instances against manual releases, but not against automatic releases.
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // The description of the instance. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to enable the Jumbo Frames feature for the instance. Valid values:
    // 
    // *   true: The Jumbo Frame feature is enabled for the instance.
    // *   false: The Jumbo Frame feature is disabled for the instance.
    // 
    // Take note of the following items:
    // 
    // *   The instance must be in the Running (`Running`) or Stopped (`Stopped`) state.
    // *   The instance must reside in a VPC.
    // *   After the Jumbo Frames feature is enabled, the MTU value of the instance is set to 8500. After the Jumbo Frames feature is disabled, the MTU value of the instance is set to 1500. You can enable the Jumbo Frames feature only for specific instance types. For more information, see [Jumbo Frames](https://help.aliyun.com/document_detail/200512.html).
    std::shared_ptr<bool> enableJumboFrame_ = nullptr;
    std::shared_ptr<bool> enableNetworkEncryption_ = nullptr;
    // The hostname of the instance. Take note of the following items:
    // 
    // *   The instance cannot be in the Creating (`Pending`) or Starting (`Starting`) state. Otherwise, the new hostname and the configurations in the `/etc/hosts` file may not take effect. You can call the [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) operation to query the status of the instance.
    // *   The parameter takes effect after the instance is restarted. You can restart an instance in the ECS console. For more information, see [Restart an instance](https://help.aliyun.com/document_detail/25440.html). You can also call the [RebootInstance](https://help.aliyun.com/document_detail/25502.html) operation to restart the instance. The parameter cannot take effect if you restart an instance within the operating system.
    // 
    // The following limits apply to the hostnames of instances that run different operating systems:
    // 
    // *   For Windows Server, the hostname must be 2 to 15 characters in length and can contain letters, digits, and hyphens (-). The hostname cannot start or end with a hyphen (-), contain consecutive hyphens (-), or contain only digits.
    // *   For other operating systems such as Linux, the hostname must be 2 to 64 characters in length. You can use periods (.) to separate a hostname into multiple segments. Each segment can contain letters, digits, and hyphens (-). The hostname cannot contain consecutive periods (.) or hyphens (-). The hostname cannot start or end with a period (.) or a hyphen (-).
    std::shared_ptr<string> hostName_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the instance. The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with `http://` or `https://`. The name can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    std::shared_ptr<string> instanceName_ = nullptr;
    // The number of queues supported by the primary elastic network interface (ENI) of the instance. Take note of the following items:
    // 
    // *   The instance must be in the Stopped (`Stopped`) state.
    // *   The number of queues supported by an ENI cannot exceed the maximum number of queues that the instance type allows for each ENI. The total number of queues on all ENIs on the instance cannot exceed the queue quota that the instance type supports. To query the maximum number of queues that an instance type allows for each ENI and the queue quota for the instance type, call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) operation.
    // *   If you set this parameter to -1, the value is reset to the default value for the instance type. To query the default number of queues of an ENI of each instance type, call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) operation.
    std::shared_ptr<int32_t> networkInterfaceQueueNumber_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The password of the instance. The password must be 8 to 30 characters in length and contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. Special characters include **( ) \\` ~ ! @ # $ % ^ & \\* - _ + = | { } [ ] : ; \\" < > , . ? /** The password of a Windows instance cannot start with a forward slash (/). Take note of the following items:
    // 
    // *   The instance cannot be in the Starting (`Starting`) state.
    // *   The parameter takes effect after the instance is restarted. You can restart an instance in the ECS console. For more information, see [Restart an instance](https://help.aliyun.com/document_detail/25440.html). You can also call the [RebootInstance](https://help.aliyun.com/document_detail/25502.html) operation to restart the instance. The parameter cannot take effect if you restart an instance within the operating system.
    // 
    // >  For security reasons, we recommend that you use HTTPS to send requests if `Password` is specified.
    std::shared_ptr<string> password_ = nullptr;
    // The private domain name options of the ECS instance.
    // 
    // For information about private domain name resolution, see [ECS private DNS resolution](https://help.aliyun.com/document_detail/2844797.html).
    std::shared_ptr<ModifyInstanceAttributeRequestPrivateDnsNameOptions> privateDnsNameOptions_ = nullptr;
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<bool> recyclable_ = nullptr;
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<ModifyInstanceAttributeRequestRemoteConnectionOptions> remoteConnectionOptions_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The IDs of the new security groups to which to assign the instance. Take note of the following items:
    // 
    // *   The security group IDs in the array cannot be duplicate. The length of the array is related to the quota of security groups to which the instance can be assigned. For more information, see the [Security group limits](~~25412#SecurityGroupQuota1~~) section in the "Limits and quotas" topic.
    // *   The instance is moved from the current security groups to the replacement security groups. If you want the instance to remain in the current security groups, add the IDs of the current security groups to the array.
    // *   You can move the instance to security groups of a different type. However, the array cannot contain the IDs of both basic and advanced security groups.
    // *   The security groups and the instance must belong to the same VPC.
    // *   Security groups of instances in the classic network cannot be changed.
    // 
    // >  New security groups become valid for the instance after a short delay.
    std::shared_ptr<vector<string>> securityGroupIds_ = nullptr;
    // The user data of the instance. We recommend that you encode the data in Base64. Take note of the following items:
    // 
    // *   The instance must meet the limits for user data. For more information, see [Initialize an instance by using instance user data](https://help.aliyun.com/document_detail/49121.html).
    // *   After you restart the instance, the new user data is displayed but not run as scripts.
    // 
    // >  The maximum size of the raw data before encoding is 32 KB. We recommend that you do not pass in confidential information such as passwords and private keys in plaintext. If you must pass in confidential information, we recommend that you encrypt and Base64-encode the information before you pass it in. Then, you can decode and decrypt the information in the same way within the instance.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
