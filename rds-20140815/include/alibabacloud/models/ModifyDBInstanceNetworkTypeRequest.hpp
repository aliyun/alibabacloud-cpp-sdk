// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCENETWORKTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCENETWORKTYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDBInstanceNetworkTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceNetworkTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClassicExpiredDays, classicExpiredDays_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(ReadWriteSplittingClassicExpiredDays, readWriteSplittingClassicExpiredDays_);
      DARABONBA_PTR_TO_JSON(ReadWriteSplittingPrivateIpAddress, readWriteSplittingPrivateIpAddress_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RetainClassic, retainClassic_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceNetworkTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassicExpiredDays, classicExpiredDays_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(ReadWriteSplittingClassicExpiredDays, readWriteSplittingClassicExpiredDays_);
      DARABONBA_PTR_FROM_JSON(ReadWriteSplittingPrivateIpAddress, readWriteSplittingPrivateIpAddress_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RetainClassic, retainClassic_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    ModifyDBInstanceNetworkTypeRequest() = default ;
    ModifyDBInstanceNetworkTypeRequest(const ModifyDBInstanceNetworkTypeRequest &) = default ;
    ModifyDBInstanceNetworkTypeRequest(ModifyDBInstanceNetworkTypeRequest &&) = default ;
    ModifyDBInstanceNetworkTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceNetworkTypeRequest() = default ;
    ModifyDBInstanceNetworkTypeRequest& operator=(const ModifyDBInstanceNetworkTypeRequest &) = default ;
    ModifyDBInstanceNetworkTypeRequest& operator=(ModifyDBInstanceNetworkTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classicExpiredDays_ == nullptr
        && this->DBInstanceId_ == nullptr && this->instanceNetworkType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->privateIpAddress_ == nullptr
        && this->readWriteSplittingClassicExpiredDays_ == nullptr && this->readWriteSplittingPrivateIpAddress_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->retainClassic_ == nullptr
        && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr; };
    // classicExpiredDays Field Functions 
    bool hasClassicExpiredDays() const { return this->classicExpiredDays_ != nullptr;};
    void deleteClassicExpiredDays() { this->classicExpiredDays_ = nullptr;};
    inline string getClassicExpiredDays() const { DARABONBA_PTR_GET_DEFAULT(classicExpiredDays_, "") };
    inline ModifyDBInstanceNetworkTypeRequest& setClassicExpiredDays(string classicExpiredDays) { DARABONBA_PTR_SET_VALUE(classicExpiredDays_, classicExpiredDays) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBInstanceNetworkTypeRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string getInstanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline ModifyDBInstanceNetworkTypeRequest& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBInstanceNetworkTypeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBInstanceNetworkTypeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline ModifyDBInstanceNetworkTypeRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // readWriteSplittingClassicExpiredDays Field Functions 
    bool hasReadWriteSplittingClassicExpiredDays() const { return this->readWriteSplittingClassicExpiredDays_ != nullptr;};
    void deleteReadWriteSplittingClassicExpiredDays() { this->readWriteSplittingClassicExpiredDays_ = nullptr;};
    inline int32_t getReadWriteSplittingClassicExpiredDays() const { DARABONBA_PTR_GET_DEFAULT(readWriteSplittingClassicExpiredDays_, 0) };
    inline ModifyDBInstanceNetworkTypeRequest& setReadWriteSplittingClassicExpiredDays(int32_t readWriteSplittingClassicExpiredDays) { DARABONBA_PTR_SET_VALUE(readWriteSplittingClassicExpiredDays_, readWriteSplittingClassicExpiredDays) };


    // readWriteSplittingPrivateIpAddress Field Functions 
    bool hasReadWriteSplittingPrivateIpAddress() const { return this->readWriteSplittingPrivateIpAddress_ != nullptr;};
    void deleteReadWriteSplittingPrivateIpAddress() { this->readWriteSplittingPrivateIpAddress_ = nullptr;};
    inline string getReadWriteSplittingPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(readWriteSplittingPrivateIpAddress_, "") };
    inline ModifyDBInstanceNetworkTypeRequest& setReadWriteSplittingPrivateIpAddress(string readWriteSplittingPrivateIpAddress) { DARABONBA_PTR_SET_VALUE(readWriteSplittingPrivateIpAddress_, readWriteSplittingPrivateIpAddress) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBInstanceNetworkTypeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBInstanceNetworkTypeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // retainClassic Field Functions 
    bool hasRetainClassic() const { return this->retainClassic_ != nullptr;};
    void deleteRetainClassic() { this->retainClassic_ = nullptr;};
    inline string getRetainClassic() const { DARABONBA_PTR_GET_DEFAULT(retainClassic_, "") };
    inline ModifyDBInstanceNetworkTypeRequest& setRetainClassic(string retainClassic) { DARABONBA_PTR_SET_VALUE(retainClassic_, retainClassic) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline ModifyDBInstanceNetworkTypeRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ModifyDBInstanceNetworkTypeRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The number of days for which you want to retain the classic network endpoint. Valid values: **1 to 120**. Default value: **7**.
    // 
    // > If you set the **RetainClassic** parameter to **True**, you must also specify this parameter.
    shared_ptr<string> classicExpiredDays_ {};
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The network type after the modification. Set the value to **VPC**.
    // 
    // This parameter is required.
    shared_ptr<string> instanceNetworkType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The internal IP address of the instance. The internal IP address must be within the CIDR block supported by the specified vSwitch. The system automatically assigns a private IP address to an instance based on the values of **VPCId** and **VSwitchId**.
    shared_ptr<string> privateIpAddress_ {};
    // The number of days for which you want to retain the read/write splitting endpoint of the classic network type. Valid values: **1 to 120**. Default value: **7**.
    // 
    // >  This parameter takes effect only when a read/write splitting endpoint of the classic network type exists and the **RetainClassic** parameter is set to **True**.
    shared_ptr<int32_t> readWriteSplittingClassicExpiredDays_ {};
    // The internal IP address that corresponds to the read/write splitting endpoint of the instance. The internal IP address must be within the CIDR block supported by the specified vSwitch. The system automatically assigns a private IP address to an instance based on the values of **VPCId** and **VSwitchId**.
    // 
    // >  This parameter is valid when a read/write splitting endpoint of the classic network type exists.
    shared_ptr<string> readWriteSplittingPrivateIpAddress_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to retain the classic network endpoint. Valid values:
    // 
    // *   **True**: retains the classic network endpoint.
    // *   **False** (default): does not retain the classic network endpoint.
    shared_ptr<string> retainClassic_ {};
    // The VPC ID.
    shared_ptr<string> VPCId_ {};
    // The ID of the vSwitch. This parameter is required if the **VPCId** parameter is specified.
    shared_ptr<string> vSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
