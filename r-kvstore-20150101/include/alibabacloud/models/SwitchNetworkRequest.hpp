// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHNETWORKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SWITCHNETWORKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class SwitchNetworkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchNetworkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClassicExpiredDays, classicExpiredDays_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RetainClassic, retainClassic_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(TargetNetworkType, targetNetworkType_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchNetworkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassicExpiredDays, classicExpiredDays_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RetainClassic, retainClassic_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(TargetNetworkType, targetNetworkType_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    SwitchNetworkRequest() = default ;
    SwitchNetworkRequest(const SwitchNetworkRequest &) = default ;
    SwitchNetworkRequest(SwitchNetworkRequest &&) = default ;
    SwitchNetworkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchNetworkRequest() = default ;
    SwitchNetworkRequest& operator=(const SwitchNetworkRequest &) = default ;
    SwitchNetworkRequest& operator=(SwitchNetworkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classicExpiredDays_ == nullptr
        && this->instanceId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->retainClassic_ == nullptr && this->securityToken_ == nullptr && this->targetNetworkType_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
    // classicExpiredDays Field Functions 
    bool hasClassicExpiredDays() const { return this->classicExpiredDays_ != nullptr;};
    void deleteClassicExpiredDays() { this->classicExpiredDays_ = nullptr;};
    inline string getClassicExpiredDays() const { DARABONBA_PTR_GET_DEFAULT(classicExpiredDays_, "") };
    inline SwitchNetworkRequest& setClassicExpiredDays(string classicExpiredDays) { DARABONBA_PTR_SET_VALUE(classicExpiredDays_, classicExpiredDays) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SwitchNetworkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline SwitchNetworkRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SwitchNetworkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SwitchNetworkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SwitchNetworkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // retainClassic Field Functions 
    bool hasRetainClassic() const { return this->retainClassic_ != nullptr;};
    void deleteRetainClassic() { this->retainClassic_ = nullptr;};
    inline string getRetainClassic() const { DARABONBA_PTR_GET_DEFAULT(retainClassic_, "") };
    inline SwitchNetworkRequest& setRetainClassic(string retainClassic) { DARABONBA_PTR_SET_VALUE(retainClassic_, retainClassic) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline SwitchNetworkRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // targetNetworkType Field Functions 
    bool hasTargetNetworkType() const { return this->targetNetworkType_ != nullptr;};
    void deleteTargetNetworkType() { this->targetNetworkType_ = nullptr;};
    inline string getTargetNetworkType() const { DARABONBA_PTR_GET_DEFAULT(targetNetworkType_, "") };
    inline SwitchNetworkRequest& setTargetNetworkType(string targetNetworkType) { DARABONBA_PTR_SET_VALUE(targetNetworkType_, targetNetworkType) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline SwitchNetworkRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline SwitchNetworkRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The retention period of the classic network endpoint. Valid values: **14**, **30**, **60**, and **120**. Unit: days.
    // 
    // > 
    // 
    // *   This parameter is available and required only when the **RetainClassic** parameter is set to **True**.
    // 
    // *   After you complete the switchover operation, you can also call the [ModifyInstanceNetExpireTime](https://help.aliyun.com/document_detail/473793.html) operation to modify the retention period of the classic network endpoint.
    shared_ptr<string> classicExpiredDays_ {};
    // The ID of the instance. You can call the [DescribeInstances](https://help.aliyun.com/document_detail/473778.html) operation to query the ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to retain the original classic network endpoint after you switch the instance from classic network to VPC. Default value: False. Valid values:
    // 
    // *   **True**: retains the classic network endpoint.
    // *   **False**: does not retain the classic network endpoint.
    // 
    // > This parameter is available only when the network type of the instance is classic network.
    shared_ptr<string> retainClassic_ {};
    shared_ptr<string> securityToken_ {};
    // The network type to which you want to switch. If you want to switch to VPC network, Set the value to **VPC**.
    shared_ptr<string> targetNetworkType_ {};
    // The ID of the vSwitch that belongs to the VPC to which you want to switch. You can call the [DescribeVpcs](https://help.aliyun.com/document_detail/35739.html) operation to query the vSwitch ID.
    // 
    // >  The vSwitch and the instance must be deployed in the same zone.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the VPC to which you want to switch. You can call the [DescribeVpcs](https://help.aliyun.com/document_detail/35739.html) operation to query the VPC ID.
    // 
    // > 
    // 
    // *   The VPC and the instance must be deployed in the same region.
    // 
    // *   After you set this parameter, you must also set the **VSwitchId** parameter.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
