// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeDBInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceIds, DBInstanceIds_);
      DARABONBA_PTR_TO_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceIds, DBInstanceIds_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeDBInstancesRequest() = default ;
    DescribeDBInstancesRequest(const DescribeDBInstancesRequest &) = default ;
    DescribeDBInstancesRequest(DescribeDBInstancesRequest &&) = default ;
    DescribeDBInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesRequest() = default ;
    DescribeDBInstancesRequest& operator=(const DescribeDBInstancesRequest &) = default ;
    DescribeDBInstancesRequest& operator=(DescribeDBInstancesRequest &&) = default ;
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
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->DBInstanceDescription_ == nullptr
        && this->DBInstanceIds_ == nullptr && this->DBInstanceStatus_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->resourceOwnerId_ == nullptr && this->tag_ == nullptr; };
    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string getDBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline DescribeDBInstancesRequest& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBInstanceIds Field Functions 
    bool hasDBInstanceIds() const { return this->DBInstanceIds_ != nullptr;};
    void deleteDBInstanceIds() { this->DBInstanceIds_ = nullptr;};
    inline string getDBInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceIds_, "") };
    inline DescribeDBInstancesRequest& setDBInstanceIds(string DBInstanceIds) { DARABONBA_PTR_SET_VALUE(DBInstanceIds_, DBInstanceIds) };


    // DBInstanceStatus Field Functions 
    bool hasDBInstanceStatus() const { return this->DBInstanceStatus_ != nullptr;};
    void deleteDBInstanceStatus() { this->DBInstanceStatus_ = nullptr;};
    inline string getDBInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatus_, "") };
    inline DescribeDBInstancesRequest& setDBInstanceStatus(string DBInstanceStatus) { DARABONBA_PTR_SET_VALUE(DBInstanceStatus_, DBInstanceStatus) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeDBInstancesRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeDBInstancesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDBInstancesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeDBInstancesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeDBInstancesRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeDBInstancesRequest::Tag>) };
    inline vector<DescribeDBInstancesRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribeDBInstancesRequest::Tag>) };
    inline DescribeDBInstancesRequest& setTag(const vector<DescribeDBInstancesRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeDBInstancesRequest& setTag(vector<DescribeDBInstancesRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The description of the instance.
    shared_ptr<string> DBInstanceDescription_ {};
    // The instance ID. Separate multiple instance IDs with commas (,).
    shared_ptr<string> DBInstanceIds_ {};
    // The state of the instance. Valid values:
    // 
    // *   **CREATING**: The instance is being created.
    // *   **ACTIVATION**: The instance is running.
    // *   **RESOURCE_CHANGING**: The resource configuration of the instance is being changed.
    // *   **ORDER_PREPARING**: The order is being confirmed.
    // *   **READONLY_RESOURCE_CHANGING**: The resource configuration of the instance is being changed and the instance is write-locked.
    // *   **DELETING**: The instance is being deleted.
    shared_ptr<string> DBInstanceStatus_ {};
    // The page number.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page. Valid values:
    // 
    // *   **30** (default)
    // *   **50**
    // *   **100**
    shared_ptr<int64_t> pageSize_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<vector<DescribeDBInstancesRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
