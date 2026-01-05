// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESERVEDINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESERVEDINSTANCESREQUEST_HPP_
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
  class DescribeReservedInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReservedInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationType, allocationType_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
      DARABONBA_PTR_TO_JSON(OfferingType, offeringType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReservedInstanceId, reservedInstanceId_);
      DARABONBA_PTR_TO_JSON(ReservedInstanceName, reservedInstanceName_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReservedInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationType, allocationType_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
      DARABONBA_PTR_FROM_JSON(OfferingType, offeringType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReservedInstanceId, reservedInstanceId_);
      DARABONBA_PTR_FROM_JSON(ReservedInstanceName, reservedInstanceName_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeReservedInstancesRequest() = default ;
    DescribeReservedInstancesRequest(const DescribeReservedInstancesRequest &) = default ;
    DescribeReservedInstancesRequest(DescribeReservedInstancesRequest &&) = default ;
    DescribeReservedInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReservedInstancesRequest() = default ;
    DescribeReservedInstancesRequest& operator=(const DescribeReservedInstancesRequest &) = default ;
    DescribeReservedInstancesRequest& operator=(DescribeReservedInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of tag N of the reserved instance. The tag key cannot be empty and can be up to 128 characters in length. It cannot start with aliyun or acs: and cannot contain http:// or https://.
      // 
      // >  If you specify a single tag to query resources, up to 1,000 resources to which the tag is added are returned. If you specify multiple tags to query resources, up to 1,000 resources to which all specified tags are added are returned. To query more than 1,000 resources that have specified tags added, call the [ListTagResources](https://help.aliyun.com/document_detail/110425.html) operation.
      shared_ptr<string> key_ {};
      // The value of tag N of the reserved instance. The tag value cannot be empty and can be up to 128 characters in length. It cannot start with `acs:` and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->allocationType_ == nullptr
        && this->instanceType_ == nullptr && this->instanceTypeFamily_ == nullptr && this->lockReason_ == nullptr && this->offeringType_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->reservedInstanceId_ == nullptr
        && this->reservedInstanceName_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->scope_ == nullptr && this->status_ == nullptr
        && this->tag_ == nullptr && this->zoneId_ == nullptr; };
    // allocationType Field Functions 
    bool hasAllocationType() const { return this->allocationType_ != nullptr;};
    void deleteAllocationType() { this->allocationType_ = nullptr;};
    inline string getAllocationType() const { DARABONBA_PTR_GET_DEFAULT(allocationType_, "") };
    inline DescribeReservedInstancesRequest& setAllocationType(string allocationType) { DARABONBA_PTR_SET_VALUE(allocationType_, allocationType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeReservedInstancesRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // instanceTypeFamily Field Functions 
    bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
    void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
    inline string getInstanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
    inline DescribeReservedInstancesRequest& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string getLockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeReservedInstancesRequest& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


    // offeringType Field Functions 
    bool hasOfferingType() const { return this->offeringType_ != nullptr;};
    void deleteOfferingType() { this->offeringType_ = nullptr;};
    inline string getOfferingType() const { DARABONBA_PTR_GET_DEFAULT(offeringType_, "") };
    inline DescribeReservedInstancesRequest& setOfferingType(string offeringType) { DARABONBA_PTR_SET_VALUE(offeringType_, offeringType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeReservedInstancesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeReservedInstancesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeReservedInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeReservedInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeReservedInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reservedInstanceId Field Functions 
    bool hasReservedInstanceId() const { return this->reservedInstanceId_ != nullptr;};
    void deleteReservedInstanceId() { this->reservedInstanceId_ = nullptr;};
    inline const vector<string> & getReservedInstanceId() const { DARABONBA_PTR_GET_CONST(reservedInstanceId_, vector<string>) };
    inline vector<string> getReservedInstanceId() { DARABONBA_PTR_GET(reservedInstanceId_, vector<string>) };
    inline DescribeReservedInstancesRequest& setReservedInstanceId(const vector<string> & reservedInstanceId) { DARABONBA_PTR_SET_VALUE(reservedInstanceId_, reservedInstanceId) };
    inline DescribeReservedInstancesRequest& setReservedInstanceId(vector<string> && reservedInstanceId) { DARABONBA_PTR_SET_RVALUE(reservedInstanceId_, reservedInstanceId) };


    // reservedInstanceName Field Functions 
    bool hasReservedInstanceName() const { return this->reservedInstanceName_ != nullptr;};
    void deleteReservedInstanceName() { this->reservedInstanceName_ = nullptr;};
    inline string getReservedInstanceName() const { DARABONBA_PTR_GET_DEFAULT(reservedInstanceName_, "") };
    inline DescribeReservedInstancesRequest& setReservedInstanceName(string reservedInstanceName) { DARABONBA_PTR_SET_VALUE(reservedInstanceName_, reservedInstanceName) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeReservedInstancesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeReservedInstancesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline DescribeReservedInstancesRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const vector<string> & getStatus() const { DARABONBA_PTR_GET_CONST(status_, vector<string>) };
    inline vector<string> getStatus() { DARABONBA_PTR_GET(status_, vector<string>) };
    inline DescribeReservedInstancesRequest& setStatus(const vector<string> & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline DescribeReservedInstancesRequest& setStatus(vector<string> && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeReservedInstancesRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeReservedInstancesRequest::Tag>) };
    inline vector<DescribeReservedInstancesRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribeReservedInstancesRequest::Tag>) };
    inline DescribeReservedInstancesRequest& setTag(const vector<DescribeReservedInstancesRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeReservedInstancesRequest& setTag(vector<DescribeReservedInstancesRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeReservedInstancesRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The allocation type of the reserved instances. Valid values:
    // 
    // *   Normal: queries all reserved instances that belong to the current account.
    // *   Shared: queries the reserved instances that are shared between the current main account and linked accounts.
    // 
    // Default value: Normal.
    shared_ptr<string> allocationType_ {};
    // The instance type of the reserved instance. For information about the valid values, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html).
    // 
    // >  Specify the instance type that you selected when you purchased the reserved instance. If the reserved instance is a regional reserved instance, it can be used to offset the bills of instance types that belong to the same instance family as the specified instance type, regardless of instance specifications.
    shared_ptr<string> instanceType_ {};
    // The instance family of the reserved instance. For information about the valid values, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html).
    shared_ptr<string> instanceTypeFamily_ {};
    // The reason why the reserved instance is locked. Valid values:
    // 
    // *   financial: The reserved instance is locked because the account has overdue payments or the service expires.
    // *   security: The reserved instance is locked due to security reasons.
    shared_ptr<string> lockReason_ {};
    // The payment option of the reserved instance. Valid values:
    // 
    // *   No Upfront
    // *   Partial Upfront
    // *   All Upfront
    shared_ptr<string> offeringType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The page number. Pages start from page 1.
    // 
    // Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 100.
    // 
    // Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID of the reserved instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The IDs of reserved instances. You can specify up to 100 IDs of reserved instances.
    shared_ptr<vector<string>> reservedInstanceId_ {};
    // The name of the reserved instance.
    // 
    // >  Only exact search is supported.
    shared_ptr<string> reservedInstanceName_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The scope level of the reserved instance. Valid values:
    // 
    // *   Region: regional
    // *   Zone: zonal
    shared_ptr<string> scope_ {};
    // The status of the reserved instances.
    shared_ptr<vector<string>> status_ {};
    // The tags of the reserved instance. You can specify up to 20 tags.
    shared_ptr<vector<DescribeReservedInstancesRequest::Tag>> tag_ {};
    // The zone ID of the reserved instance. This parameter is valid and required if you set Scope to Zone. You can call the [DescribeZones](https://help.aliyun.com/document_detail/25610.html) operation to query the most recent zone list.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
