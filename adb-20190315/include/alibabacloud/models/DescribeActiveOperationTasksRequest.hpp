// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACTIVEOPERATIONTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACTIVEOPERATIONTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeActiveOperationTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeActiveOperationTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowCancel, allowCancel_);
      DARABONBA_PTR_TO_JSON(AllowChange, allowChange_);
      DARABONBA_PTR_TO_JSON(ChangeLevel, changeLevel_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(InsName, insName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeActiveOperationTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowCancel, allowCancel_);
      DARABONBA_PTR_FROM_JSON(AllowChange, allowChange_);
      DARABONBA_PTR_FROM_JSON(ChangeLevel, changeLevel_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(InsName, insName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    DescribeActiveOperationTasksRequest() = default ;
    DescribeActiveOperationTasksRequest(const DescribeActiveOperationTasksRequest &) = default ;
    DescribeActiveOperationTasksRequest(DescribeActiveOperationTasksRequest &&) = default ;
    DescribeActiveOperationTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeActiveOperationTasksRequest() = default ;
    DescribeActiveOperationTasksRequest& operator=(const DescribeActiveOperationTasksRequest &) = default ;
    DescribeActiveOperationTasksRequest& operator=(DescribeActiveOperationTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowCancel_ != nullptr
        && this->allowChange_ != nullptr && this->changeLevel_ != nullptr && this->dbType_ != nullptr && this->insName_ != nullptr && this->ownerAccount_ != nullptr
        && this->ownerId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->productId_ != nullptr && this->region_ != nullptr
        && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->securityToken_ != nullptr && this->status_ != nullptr
        && this->taskType_ != nullptr; };
    // allowCancel Field Functions 
    bool hasAllowCancel() const { return this->allowCancel_ != nullptr;};
    void deleteAllowCancel() { this->allowCancel_ = nullptr;};
    inline int32_t allowCancel() const { DARABONBA_PTR_GET_DEFAULT(allowCancel_, 0) };
    inline DescribeActiveOperationTasksRequest& setAllowCancel(int32_t allowCancel) { DARABONBA_PTR_SET_VALUE(allowCancel_, allowCancel) };


    // allowChange Field Functions 
    bool hasAllowChange() const { return this->allowChange_ != nullptr;};
    void deleteAllowChange() { this->allowChange_ = nullptr;};
    inline int32_t allowChange() const { DARABONBA_PTR_GET_DEFAULT(allowChange_, 0) };
    inline DescribeActiveOperationTasksRequest& setAllowChange(int32_t allowChange) { DARABONBA_PTR_SET_VALUE(allowChange_, allowChange) };


    // changeLevel Field Functions 
    bool hasChangeLevel() const { return this->changeLevel_ != nullptr;};
    void deleteChangeLevel() { this->changeLevel_ = nullptr;};
    inline string changeLevel() const { DARABONBA_PTR_GET_DEFAULT(changeLevel_, "") };
    inline DescribeActiveOperationTasksRequest& setChangeLevel(string changeLevel) { DARABONBA_PTR_SET_VALUE(changeLevel_, changeLevel) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline DescribeActiveOperationTasksRequest& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // insName Field Functions 
    bool hasInsName() const { return this->insName_ != nullptr;};
    void deleteInsName() { this->insName_ = nullptr;};
    inline string insName() const { DARABONBA_PTR_GET_DEFAULT(insName_, "") };
    inline DescribeActiveOperationTasksRequest& setInsName(string insName) { DARABONBA_PTR_SET_VALUE(insName_, insName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeActiveOperationTasksRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeActiveOperationTasksRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeActiveOperationTasksRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeActiveOperationTasksRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline DescribeActiveOperationTasksRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeActiveOperationTasksRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeActiveOperationTasksRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeActiveOperationTasksRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeActiveOperationTasksRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeActiveOperationTasksRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeActiveOperationTasksRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeActiveOperationTasksRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // Specifies whether the O\\&M task can be canceled. Valid values:
    // 
    // *   \\-1: yes for all O\\&M tasks.
    // *   0: no.
    // *   1: yes.
    std::shared_ptr<int32_t> allowCancel_ = nullptr;
    // Specifies whether the execution time of the O\\&M task can be changed. Valid values:
    // 
    // *   \\-1: yes for all O\\&M tasks.
    // *   0: no.
    // *   1: yes.
    std::shared_ptr<int32_t> allowChange_ = nullptr;
    // The trigger level of the O\\&M task. Default value: all. Valid values:
    // 
    // *   all: all task levels.
    // *   S0: exception fixing.
    // *   S1: system O\\&M.
    std::shared_ptr<string> changeLevel_ = nullptr;
    // The database type.
    std::shared_ptr<string> dbType_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> insName_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 25.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The product ID.
    std::shared_ptr<string> productId_ = nullptr;
    // The region information.
    std::shared_ptr<string> region_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The status of the O\\&M task. Valid values:
    // 
    // *   \\-1: all statuses.
    // *   3: pending.
    // *   4: executing.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The type of the O\\&M tasks that you want to query. Set the value to all to query all O\\&M tasks configured by the Alibaba Cloud account.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
