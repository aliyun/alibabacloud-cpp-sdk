// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeMigrationJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrationJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(MigrationJobName, migrationJobName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrationJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(MigrationJobName, migrationJobName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeMigrationJobsRequest() = default ;
    DescribeMigrationJobsRequest(const DescribeMigrationJobsRequest &) = default ;
    DescribeMigrationJobsRequest(DescribeMigrationJobsRequest &&) = default ;
    DescribeMigrationJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrationJobsRequest() = default ;
    DescribeMigrationJobsRequest& operator=(const DescribeMigrationJobsRequest &) = default ;
    DescribeMigrationJobsRequest& operator=(DescribeMigrationJobsRequest &&) = default ;
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
      // The tag key. You can call the [ListTagResources](https://help.aliyun.com/document_detail/191187.html) operation to query tag keys.
      // 
      // > - N specifies the serial number of the tag key. For example, Tag.1.Key specifies the key of the first tag, and Tag.2.Key specifies the key of the second tag. You can specify 1 to 20 tag keys at a time.
      // - This parameter cannot be set to an empty string.
      // 
      // This parameter is required.
      shared_ptr<string> key_ {};
      // The tag value. You can call the [ListTagResources](https://help.aliyun.com/document_detail/191187.html) operation to query tag values.
      // >- N specifies the serial number of the tag value. For example, Tag.1.Value specifies the value of the first tag, and Tag.2.Value specifies the value of the second tag. You can specify 1 to 20 tag values at a time.
      // - An empty string is allowed.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->migrationJobName_ == nullptr && this->ownerId_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->tag_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline DescribeMigrationJobsRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // migrationJobName Field Functions 
    bool hasMigrationJobName() const { return this->migrationJobName_ != nullptr;};
    void deleteMigrationJobName() { this->migrationJobName_ = nullptr;};
    inline string getMigrationJobName() const { DARABONBA_PTR_GET_DEFAULT(migrationJobName_, "") };
    inline DescribeMigrationJobsRequest& setMigrationJobName(string migrationJobName) { DARABONBA_PTR_SET_VALUE(migrationJobName_, migrationJobName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline DescribeMigrationJobsRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeMigrationJobsRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeMigrationJobsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeMigrationJobsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeMigrationJobsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeMigrationJobsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeMigrationJobsRequest::Tag>) };
    inline vector<DescribeMigrationJobsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribeMigrationJobsRequest::Tag>) };
    inline DescribeMigrationJobsRequest& setTag(const vector<DescribeMigrationJobsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeMigrationJobsRequest& setTag(vector<DescribeMigrationJobsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The ID of the Alibaba Cloud account. You do not need to specify this parameter. This parameter will be deprecated.
    shared_ptr<string> accountId_ {};
    // The name of the migration instance.
    // > Fuzzy match is supported.
    shared_ptr<string> migrationJobName_ {};
    shared_ptr<string> ownerId_ {};
    // The page number. The value must be greater than **0** and must not exceed the maximum value of the Integer data type. Default value: **1**.
    shared_ptr<int32_t> pageNum_ {};
    // The number of data migration instances to display per page. Valid values: **10**, **20**, and **30**. Default value: **30**. Maximum value: **30**.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the region where the data migration instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The tags of the data migration instance, used as filter conditions. When this parameter is not empty, only instance tasks that have the specified tags are returned.
    shared_ptr<vector<DescribeMigrationJobsRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
