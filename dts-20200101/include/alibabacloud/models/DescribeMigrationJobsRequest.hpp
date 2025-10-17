// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMigrationJobsRequestTag.hpp>
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
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->migrationJobName_ == nullptr && return this->ownerId_ == nullptr && return this->pageNum_ == nullptr && return this->pageSize_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->tag_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline DescribeMigrationJobsRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // migrationJobName Field Functions 
    bool hasMigrationJobName() const { return this->migrationJobName_ != nullptr;};
    void deleteMigrationJobName() { this->migrationJobName_ = nullptr;};
    inline string migrationJobName() const { DARABONBA_PTR_GET_DEFAULT(migrationJobName_, "") };
    inline DescribeMigrationJobsRequest& setMigrationJobName(string migrationJobName) { DARABONBA_PTR_SET_VALUE(migrationJobName_, migrationJobName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline DescribeMigrationJobsRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeMigrationJobsRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeMigrationJobsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeMigrationJobsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeMigrationJobsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeMigrationJobsRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeMigrationJobsRequestTag>) };
    inline vector<DescribeMigrationJobsRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeMigrationJobsRequestTag>) };
    inline DescribeMigrationJobsRequest& setTag(const vector<DescribeMigrationJobsRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeMigrationJobsRequest& setTag(vector<DescribeMigrationJobsRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The ID of the Alibaba Cloud account. You do not need to specify this parameter because this parameter will be removed in the future.
    std::shared_ptr<string> accountId_ = nullptr;
    // The name of the data migration task.
    // 
    // >  Fuzzy match is supported.
    std::shared_ptr<string> migrationJobName_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    // The number of the page to return. The value must be an integer that is greater than **0** and does not exceed the maximum value of the Integer data type. Default value: **1**.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries to return on each page. Valid values: **30**, **50**, and **100**. Default value: **30**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the region where the data migration instances reside. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tag of the data migration instance, used as a filter. When this is not empty, only the instance tasks with this tag will be returned.
    std::shared_ptr<vector<DescribeMigrationJobsRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
