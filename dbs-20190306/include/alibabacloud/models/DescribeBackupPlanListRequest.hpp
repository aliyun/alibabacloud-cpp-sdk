// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeBackupPlanListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPlanListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_TO_JSON(BackupPlanName, backupPlanName_);
      DARABONBA_PTR_TO_JSON(BackupPlanStatus, backupPlanStatus_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPlanListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_FROM_JSON(BackupPlanName, backupPlanName_);
      DARABONBA_PTR_FROM_JSON(BackupPlanStatus, backupPlanStatus_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    DescribeBackupPlanListRequest() = default ;
    DescribeBackupPlanListRequest(const DescribeBackupPlanListRequest &) = default ;
    DescribeBackupPlanListRequest(DescribeBackupPlanListRequest &&) = default ;
    DescribeBackupPlanListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPlanListRequest() = default ;
    DescribeBackupPlanListRequest& operator=(const DescribeBackupPlanListRequest &) = default ;
    DescribeBackupPlanListRequest& operator=(DescribeBackupPlanListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupPlanId_ == nullptr
        && return this->backupPlanName_ == nullptr && return this->backupPlanStatus_ == nullptr && return this->clientToken_ == nullptr && return this->ownerId_ == nullptr && return this->pageNum_ == nullptr
        && return this->pageSize_ == nullptr && return this->region_ == nullptr && return this->resourceGroupId_ == nullptr; };
    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string backupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline DescribeBackupPlanListRequest& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // backupPlanName Field Functions 
    bool hasBackupPlanName() const { return this->backupPlanName_ != nullptr;};
    void deleteBackupPlanName() { this->backupPlanName_ = nullptr;};
    inline string backupPlanName() const { DARABONBA_PTR_GET_DEFAULT(backupPlanName_, "") };
    inline DescribeBackupPlanListRequest& setBackupPlanName(string backupPlanName) { DARABONBA_PTR_SET_VALUE(backupPlanName_, backupPlanName) };


    // backupPlanStatus Field Functions 
    bool hasBackupPlanStatus() const { return this->backupPlanStatus_ != nullptr;};
    void deleteBackupPlanStatus() { this->backupPlanStatus_ = nullptr;};
    inline string backupPlanStatus() const { DARABONBA_PTR_GET_DEFAULT(backupPlanStatus_, "") };
    inline DescribeBackupPlanListRequest& setBackupPlanStatus(string backupPlanStatus) { DARABONBA_PTR_SET_VALUE(backupPlanStatus_, backupPlanStatus) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeBackupPlanListRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline DescribeBackupPlanListRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeBackupPlanListRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBackupPlanListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeBackupPlanListRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeBackupPlanListRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The ID of the backup schedule. You can query multiple backup schedule IDs. Separate multiple IDs with commas (,).
    std::shared_ptr<string> backupPlanId_ = nullptr;
    // Backup plan name.
    std::shared_ptr<string> backupPlanName_ = nullptr;
    // Backup plan status, the values are as follows:
    // 
    // * **wait**: Not configured
    // * **init**: Not started (pre-check failed)
    // * **running**: Running
    // * **stop**: Failed
    // * **pause**: Paused
    // * **locked**: Locked
    // * **check_pass**: Pre-check passed
    std::shared_ptr<string> backupPlanStatus_ = nullptr;
    // Used to ensure the idempotence of the request, preventing duplicate submissions.
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    // Page number, must be greater than or equal to 0 and not exceed the maximum value of Integer. The default value is 0.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // Number of records per page, the value should be between 1 and 100.
    // 
    // > The default is **30**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // DBS region, you can view the supported DBS regions by calling the [DescribeRegions](https://help.aliyun.com/document_detail/2869853.html) interface.
    std::shared_ptr<string> region_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
