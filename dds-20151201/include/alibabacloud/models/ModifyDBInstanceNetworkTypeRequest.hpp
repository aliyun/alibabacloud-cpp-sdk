// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCENETWORKTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCENETWORKTYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class ModifyDBInstanceNetworkTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceNetworkTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClassicExpiredDays, classicExpiredDays_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RetainClassic, retainClassic_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceNetworkTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassicExpiredDays, classicExpiredDays_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RetainClassic, retainClassic_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
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
        && this->DBInstanceId_ == nullptr && this->networkType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->retainClassic_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
    // classicExpiredDays Field Functions 
    bool hasClassicExpiredDays() const { return this->classicExpiredDays_ != nullptr;};
    void deleteClassicExpiredDays() { this->classicExpiredDays_ = nullptr;};
    inline int32_t getClassicExpiredDays() const { DARABONBA_PTR_GET_DEFAULT(classicExpiredDays_, 0) };
    inline ModifyDBInstanceNetworkTypeRequest& setClassicExpiredDays(int32_t classicExpiredDays) { DARABONBA_PTR_SET_VALUE(classicExpiredDays_, classicExpiredDays) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBInstanceNetworkTypeRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline ModifyDBInstanceNetworkTypeRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


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


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ModifyDBInstanceNetworkTypeRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ModifyDBInstanceNetworkTypeRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ModifyDBInstanceNetworkTypeRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The retention period of the original classic network address when you change the network type to VPC. Valid values: **14**, **30**, **60**, and **120**. Unit: days.
    // 
    // > This parameter is required when the **NetworkType** parameter is set to **VPC** and the **RetainClassic** parameter is set to **True**.
    shared_ptr<int32_t> classicExpiredDays_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The network type to switch to. Valid value:
    // 
    // *   **VPC**
    // 
    // This parameter is required.
    shared_ptr<string> networkType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to retain the original classic network address when you change the network type to VPC. Valid values:
    // 
    // *   **True**: retains the original classic network address.
    // *   **False**: does not retain the original classic network address.
    // 
    // > 
    // 
    // *   This parameter is required when the **NetworkType** parameter is set to **VPC**.
    // 
    // *   If you set this parameter to **True**, you must also specify the **ClassicExpiredDays** parameter.
    shared_ptr<string> retainClassic_ {};
    // The ID of the vSwitch in the VPC.
    // 
    // > This parameter is required when the **NetworkType** parameter is set to **VPC**.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the VPC.
    // 
    // > This parameter is required when the **NetworkType** parameter is set to **VPC**.
    shared_ptr<string> vpcId_ {};
    // 可用区ID，您可以通过调用[DescribeRegions](https://help.aliyun.com/document_detail/61933.html)接口查询可用区ID。
    // 
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
