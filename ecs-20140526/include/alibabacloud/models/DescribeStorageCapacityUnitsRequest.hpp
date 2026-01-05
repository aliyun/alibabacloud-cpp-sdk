// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTORAGECAPACITYUNITSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTORAGECAPACITYUNITSREQUEST_HPP_
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
  class DescribeStorageCapacityUnitsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStorageCapacityUnitsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationType, allocationType_);
      DARABONBA_PTR_TO_JSON(Capacity, capacity_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageCapacityUnitId, storageCapacityUnitId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStorageCapacityUnitsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationType, allocationType_);
      DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageCapacityUnitId, storageCapacityUnitId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeStorageCapacityUnitsRequest() = default ;
    DescribeStorageCapacityUnitsRequest(const DescribeStorageCapacityUnitsRequest &) = default ;
    DescribeStorageCapacityUnitsRequest(DescribeStorageCapacityUnitsRequest &&) = default ;
    DescribeStorageCapacityUnitsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStorageCapacityUnitsRequest() = default ;
    DescribeStorageCapacityUnitsRequest& operator=(const DescribeStorageCapacityUnitsRequest &) = default ;
    DescribeStorageCapacityUnitsRequest& operator=(DescribeStorageCapacityUnitsRequest &&) = default ;
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
      // The key of tag N to be added to the SCU.
      shared_ptr<string> key_ {};
      // The value of tag N to be added to the SCU.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->allocationType_ == nullptr
        && this->capacity_ == nullptr && this->name_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->status_ == nullptr
        && this->storageCapacityUnitId_ == nullptr && this->tag_ == nullptr; };
    // allocationType Field Functions 
    bool hasAllocationType() const { return this->allocationType_ != nullptr;};
    void deleteAllocationType() { this->allocationType_ = nullptr;};
    inline string getAllocationType() const { DARABONBA_PTR_GET_DEFAULT(allocationType_, "") };
    inline DescribeStorageCapacityUnitsRequest& setAllocationType(string allocationType) { DARABONBA_PTR_SET_VALUE(allocationType_, allocationType) };


    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline int32_t getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0) };
    inline DescribeStorageCapacityUnitsRequest& setCapacity(int32_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeStorageCapacityUnitsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeStorageCapacityUnitsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeStorageCapacityUnitsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeStorageCapacityUnitsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeStorageCapacityUnitsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeStorageCapacityUnitsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeStorageCapacityUnitsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeStorageCapacityUnitsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const vector<string> & getStatus() const { DARABONBA_PTR_GET_CONST(status_, vector<string>) };
    inline vector<string> getStatus() { DARABONBA_PTR_GET(status_, vector<string>) };
    inline DescribeStorageCapacityUnitsRequest& setStatus(const vector<string> & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline DescribeStorageCapacityUnitsRequest& setStatus(vector<string> && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // storageCapacityUnitId Field Functions 
    bool hasStorageCapacityUnitId() const { return this->storageCapacityUnitId_ != nullptr;};
    void deleteStorageCapacityUnitId() { this->storageCapacityUnitId_ = nullptr;};
    inline const vector<string> & getStorageCapacityUnitId() const { DARABONBA_PTR_GET_CONST(storageCapacityUnitId_, vector<string>) };
    inline vector<string> getStorageCapacityUnitId() { DARABONBA_PTR_GET(storageCapacityUnitId_, vector<string>) };
    inline DescribeStorageCapacityUnitsRequest& setStorageCapacityUnitId(const vector<string> & storageCapacityUnitId) { DARABONBA_PTR_SET_VALUE(storageCapacityUnitId_, storageCapacityUnitId) };
    inline DescribeStorageCapacityUnitsRequest& setStorageCapacityUnitId(vector<string> && storageCapacityUnitId) { DARABONBA_PTR_SET_RVALUE(storageCapacityUnitId_, storageCapacityUnitId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeStorageCapacityUnitsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeStorageCapacityUnitsRequest::Tag>) };
    inline vector<DescribeStorageCapacityUnitsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribeStorageCapacityUnitsRequest::Tag>) };
    inline DescribeStorageCapacityUnitsRequest& setTag(const vector<DescribeStorageCapacityUnitsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeStorageCapacityUnitsRequest& setTag(vector<DescribeStorageCapacityUnitsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The allocation type. Valid values:
    // 
    // *   Normal: queries SCUs that belong to the current Alibaba Cloud account.
    // *   Shared: queries SCUs shared between the Alibaba Cloud account and RAM users.
    // 
    // Default value: Normal.
    shared_ptr<string> allocationType_ {};
    // The capacity of the SCU. Unit: GiB. Valid values: 20, 40, 100, 200, 500, 1024, 2048, 5120, 10240, 20480, and 51200.
    shared_ptr<int32_t> capacity_ {};
    // The name of the SCU. The name must be 2 to 128 characters in length. It must start with a letter but cannot start with `http://` or `https://`. It can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    shared_ptr<string> name_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The number of the page to return.
    // 
    // Pages start from page 1.
    // 
    // Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    // 
    // Valid values: 1 to 100.
    // 
    // Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID of the SCU. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The states of SCUs. The array is 1 to 4 in length.
    shared_ptr<vector<string>> status_ {};
    // The IDs of the SCUs. You can specify 1 to 100 SCU IDs.
    shared_ptr<vector<string>> storageCapacityUnitId_ {};
    // The tags to add to the SCU. You can add up to 20 tags.
    shared_ptr<vector<DescribeStorageCapacityUnitsRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
