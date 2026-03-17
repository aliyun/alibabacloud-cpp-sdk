// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESMARTACCESSGATEWAYSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESMARTACCESSGATEWAYSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DescribeSmartAccessGatewaysRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSmartAccessGatewaysRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclIds, aclIds_);
      DARABONBA_PTR_TO_JSON(AssociatedCcnId, associatedCcnId_);
      DARABONBA_PTR_TO_JSON(AssociatedCcnName, associatedCcnName_);
      DARABONBA_PTR_TO_JSON(BusinessState, businessState_);
      DARABONBA_PTR_TO_JSON(CanAssociateQos, canAssociateQos_);
      DARABONBA_PTR_TO_JSON(HardwareType, hardwareType_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_TO_JSON(SmartAGIds, smartAGIds_);
      DARABONBA_PTR_TO_JSON(SoftwareVersion, softwareVersion_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UnboundAclIds, unboundAclIds_);
      DARABONBA_PTR_TO_JSON(VersionComparator, versionComparator_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSmartAccessGatewaysRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclIds, aclIds_);
      DARABONBA_PTR_FROM_JSON(AssociatedCcnId, associatedCcnId_);
      DARABONBA_PTR_FROM_JSON(AssociatedCcnName, associatedCcnName_);
      DARABONBA_PTR_FROM_JSON(BusinessState, businessState_);
      DARABONBA_PTR_FROM_JSON(CanAssociateQos, canAssociateQos_);
      DARABONBA_PTR_FROM_JSON(HardwareType, hardwareType_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_FROM_JSON(SmartAGIds, smartAGIds_);
      DARABONBA_PTR_FROM_JSON(SoftwareVersion, softwareVersion_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UnboundAclIds, unboundAclIds_);
      DARABONBA_PTR_FROM_JSON(VersionComparator, versionComparator_);
    };
    DescribeSmartAccessGatewaysRequest() = default ;
    DescribeSmartAccessGatewaysRequest(const DescribeSmartAccessGatewaysRequest &) = default ;
    DescribeSmartAccessGatewaysRequest(DescribeSmartAccessGatewaysRequest &&) = default ;
    DescribeSmartAccessGatewaysRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSmartAccessGatewaysRequest() = default ;
    DescribeSmartAccessGatewaysRequest& operator=(const DescribeSmartAccessGatewaysRequest &) = default ;
    DescribeSmartAccessGatewaysRequest& operator=(DescribeSmartAccessGatewaysRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclIds_ == nullptr
        && this->associatedCcnId_ == nullptr && this->associatedCcnName_ == nullptr && this->businessState_ == nullptr && this->canAssociateQos_ == nullptr && this->hardwareType_ == nullptr
        && this->instanceType_ == nullptr && this->name_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->serialNumber_ == nullptr && this->smartAGId_ == nullptr && this->smartAGIds_ == nullptr && this->softwareVersion_ == nullptr && this->status_ == nullptr
        && this->unboundAclIds_ == nullptr && this->versionComparator_ == nullptr; };
    // aclIds Field Functions 
    bool hasAclIds() const { return this->aclIds_ != nullptr;};
    void deleteAclIds() { this->aclIds_ = nullptr;};
    inline string getAclIds() const { DARABONBA_PTR_GET_DEFAULT(aclIds_, "") };
    inline DescribeSmartAccessGatewaysRequest& setAclIds(string aclIds) { DARABONBA_PTR_SET_VALUE(aclIds_, aclIds) };


    // associatedCcnId Field Functions 
    bool hasAssociatedCcnId() const { return this->associatedCcnId_ != nullptr;};
    void deleteAssociatedCcnId() { this->associatedCcnId_ = nullptr;};
    inline string getAssociatedCcnId() const { DARABONBA_PTR_GET_DEFAULT(associatedCcnId_, "") };
    inline DescribeSmartAccessGatewaysRequest& setAssociatedCcnId(string associatedCcnId) { DARABONBA_PTR_SET_VALUE(associatedCcnId_, associatedCcnId) };


    // associatedCcnName Field Functions 
    bool hasAssociatedCcnName() const { return this->associatedCcnName_ != nullptr;};
    void deleteAssociatedCcnName() { this->associatedCcnName_ = nullptr;};
    inline string getAssociatedCcnName() const { DARABONBA_PTR_GET_DEFAULT(associatedCcnName_, "") };
    inline DescribeSmartAccessGatewaysRequest& setAssociatedCcnName(string associatedCcnName) { DARABONBA_PTR_SET_VALUE(associatedCcnName_, associatedCcnName) };


    // businessState Field Functions 
    bool hasBusinessState() const { return this->businessState_ != nullptr;};
    void deleteBusinessState() { this->businessState_ = nullptr;};
    inline string getBusinessState() const { DARABONBA_PTR_GET_DEFAULT(businessState_, "") };
    inline DescribeSmartAccessGatewaysRequest& setBusinessState(string businessState) { DARABONBA_PTR_SET_VALUE(businessState_, businessState) };


    // canAssociateQos Field Functions 
    bool hasCanAssociateQos() const { return this->canAssociateQos_ != nullptr;};
    void deleteCanAssociateQos() { this->canAssociateQos_ = nullptr;};
    inline bool getCanAssociateQos() const { DARABONBA_PTR_GET_DEFAULT(canAssociateQos_, false) };
    inline DescribeSmartAccessGatewaysRequest& setCanAssociateQos(bool canAssociateQos) { DARABONBA_PTR_SET_VALUE(canAssociateQos_, canAssociateQos) };


    // hardwareType Field Functions 
    bool hasHardwareType() const { return this->hardwareType_ != nullptr;};
    void deleteHardwareType() { this->hardwareType_ = nullptr;};
    inline string getHardwareType() const { DARABONBA_PTR_GET_DEFAULT(hardwareType_, "") };
    inline DescribeSmartAccessGatewaysRequest& setHardwareType(string hardwareType) { DARABONBA_PTR_SET_VALUE(hardwareType_, hardwareType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeSmartAccessGatewaysRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSmartAccessGatewaysRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeSmartAccessGatewaysRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeSmartAccessGatewaysRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSmartAccessGatewaysRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSmartAccessGatewaysRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSmartAccessGatewaysRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeSmartAccessGatewaysRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeSmartAccessGatewaysRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeSmartAccessGatewaysRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline DescribeSmartAccessGatewaysRequest& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // smartAGId Field Functions 
    bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
    void deleteSmartAGId() { this->smartAGId_ = nullptr;};
    inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
    inline DescribeSmartAccessGatewaysRequest& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


    // smartAGIds Field Functions 
    bool hasSmartAGIds() const { return this->smartAGIds_ != nullptr;};
    void deleteSmartAGIds() { this->smartAGIds_ = nullptr;};
    inline const vector<string> & getSmartAGIds() const { DARABONBA_PTR_GET_CONST(smartAGIds_, vector<string>) };
    inline vector<string> getSmartAGIds() { DARABONBA_PTR_GET(smartAGIds_, vector<string>) };
    inline DescribeSmartAccessGatewaysRequest& setSmartAGIds(const vector<string> & smartAGIds) { DARABONBA_PTR_SET_VALUE(smartAGIds_, smartAGIds) };
    inline DescribeSmartAccessGatewaysRequest& setSmartAGIds(vector<string> && smartAGIds) { DARABONBA_PTR_SET_RVALUE(smartAGIds_, smartAGIds) };


    // softwareVersion Field Functions 
    bool hasSoftwareVersion() const { return this->softwareVersion_ != nullptr;};
    void deleteSoftwareVersion() { this->softwareVersion_ = nullptr;};
    inline string getSoftwareVersion() const { DARABONBA_PTR_GET_DEFAULT(softwareVersion_, "") };
    inline DescribeSmartAccessGatewaysRequest& setSoftwareVersion(string softwareVersion) { DARABONBA_PTR_SET_VALUE(softwareVersion_, softwareVersion) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSmartAccessGatewaysRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // unboundAclIds Field Functions 
    bool hasUnboundAclIds() const { return this->unboundAclIds_ != nullptr;};
    void deleteUnboundAclIds() { this->unboundAclIds_ = nullptr;};
    inline string getUnboundAclIds() const { DARABONBA_PTR_GET_DEFAULT(unboundAclIds_, "") };
    inline DescribeSmartAccessGatewaysRequest& setUnboundAclIds(string unboundAclIds) { DARABONBA_PTR_SET_VALUE(unboundAclIds_, unboundAclIds) };


    // versionComparator Field Functions 
    bool hasVersionComparator() const { return this->versionComparator_ != nullptr;};
    void deleteVersionComparator() { this->versionComparator_ = nullptr;};
    inline string getVersionComparator() const { DARABONBA_PTR_GET_DEFAULT(versionComparator_, "") };
    inline DescribeSmartAccessGatewaysRequest& setVersionComparator(string versionComparator) { DARABONBA_PTR_SET_VALUE(versionComparator_, versionComparator) };


  protected:
    // The ID of the ACL with which the SAG instance is associated.
    shared_ptr<string> aclIds_ {};
    // The ID of the CCN instance with which the SAG instance is associated.
    shared_ptr<string> associatedCcnId_ {};
    // The name of the associated CCN instance.
    // 
    // The name must be 2 to 100 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). It must start with a letter.
    shared_ptr<string> associatedCcnName_ {};
    // The business status of the SAG instance. Valid values:
    // 
    // *   **Normal**: running as expected.
    // *   **Arrearage**: locked due to overdue payments.
    shared_ptr<string> businessState_ {};
    // Specifies whether the SAG instance can be associated with a quality of service (QoS) policy. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    // 
    // Specifies whether to query SAG instances that cannot be associated with QoS policies.
    shared_ptr<bool> canAssociateQos_ {};
    // The model of SAG device. Valid values:
    // 
    // *   **sag-1000**
    // *   **sag-100wm**
    shared_ptr<string> hardwareType_ {};
    // The type of the SAG instance. Valid values:
    // 
    // *   **software**: an SAG app instance
    // *   **hardware**: an SAG CPE instance
    shared_ptr<string> instanceType_ {};
    // The name of the SAG instance.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, underscores (_), and hyphens (-). The name must start with a letter.
    shared_ptr<string> name_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The number of the page to return. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Default value: **10**. Valid values: **1** to **50**.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the region where the SAG instance is deployed.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the SAG instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The serial number of the SAG device.
    shared_ptr<string> serialNumber_ {};
    // The ID of the SAG instance.
    shared_ptr<string> smartAGId_ {};
    // The IDs of the SAG instances.
    shared_ptr<vector<string>> smartAGIds_ {};
    // The software version of the SAG device.
    shared_ptr<string> softwareVersion_ {};
    // The status of the SAG instance. Valid values:
    // 
    // *   **Ordered**: Your order has been placed.
    // *   **Delivered**: Your order has been shipped.
    // *   **Received**: You have received the SAG device.
    // *   **Returning**: The order is being returned.
    // *   **Active**: The SAG device is active.
    // *   **init**: The SAG device is being initialized.
    // *   **Offline**: The SAG device is disconnected.
    shared_ptr<string> status_ {};
    // The ID of the ACL rule.
    // 
    // Specifies that the SAG instance which is not associated with the ACL is queried. Separate ACL IDs with commas (,).
    shared_ptr<string> unboundAclIds_ {};
    // The version filter. Valid values:
    // 
    // *   **greater**: later than the current version
    // *   **less**: earlier than the current version
    // *   **equals**: equal to the current version
    shared_ptr<string> versionComparator_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
