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
      DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_TO_JSON(BackupPlanName, backupPlanName_);
      DARABONBA_PTR_TO_JSON(BackupPlanStatus, backupPlanStatus_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ShowBackupStrategyInfo, showBackupStrategyInfo_);
      DARABONBA_PTR_TO_JSON(ShowRecoverTimeRange, showRecoverTimeRange_);
      DARABONBA_PTR_TO_JSON(ShowStorageStrategyInfo, showStorageStrategyInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPlanListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_FROM_JSON(BackupPlanName, backupPlanName_);
      DARABONBA_PTR_FROM_JSON(BackupPlanStatus, backupPlanStatus_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ShowBackupStrategyInfo, showBackupStrategyInfo_);
      DARABONBA_PTR_FROM_JSON(ShowRecoverTimeRange, showRecoverTimeRange_);
      DARABONBA_PTR_FROM_JSON(ShowStorageStrategyInfo, showStorageStrategyInfo_);
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
    virtual bool empty() const override { return this->backupMethod_ == nullptr
        && this->backupPlanId_ == nullptr && this->backupPlanName_ == nullptr && this->backupPlanStatus_ == nullptr && this->clientToken_ == nullptr && this->ownerId_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->region_ == nullptr && this->resourceGroupId_ == nullptr && this->showBackupStrategyInfo_ == nullptr
        && this->showRecoverTimeRange_ == nullptr && this->showStorageStrategyInfo_ == nullptr; };
    // backupMethod Field Functions 
    bool hasBackupMethod() const { return this->backupMethod_ != nullptr;};
    void deleteBackupMethod() { this->backupMethod_ = nullptr;};
    inline string getBackupMethod() const { DARABONBA_PTR_GET_DEFAULT(backupMethod_, "") };
    inline DescribeBackupPlanListRequest& setBackupMethod(string backupMethod) { DARABONBA_PTR_SET_VALUE(backupMethod_, backupMethod) };


    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string getBackupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline DescribeBackupPlanListRequest& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // backupPlanName Field Functions 
    bool hasBackupPlanName() const { return this->backupPlanName_ != nullptr;};
    void deleteBackupPlanName() { this->backupPlanName_ = nullptr;};
    inline string getBackupPlanName() const { DARABONBA_PTR_GET_DEFAULT(backupPlanName_, "") };
    inline DescribeBackupPlanListRequest& setBackupPlanName(string backupPlanName) { DARABONBA_PTR_SET_VALUE(backupPlanName_, backupPlanName) };


    // backupPlanStatus Field Functions 
    bool hasBackupPlanStatus() const { return this->backupPlanStatus_ != nullptr;};
    void deleteBackupPlanStatus() { this->backupPlanStatus_ = nullptr;};
    inline string getBackupPlanStatus() const { DARABONBA_PTR_GET_DEFAULT(backupPlanStatus_, "") };
    inline DescribeBackupPlanListRequest& setBackupPlanStatus(string backupPlanStatus) { DARABONBA_PTR_SET_VALUE(backupPlanStatus_, backupPlanStatus) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeBackupPlanListRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline DescribeBackupPlanListRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeBackupPlanListRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBackupPlanListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeBackupPlanListRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeBackupPlanListRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // showBackupStrategyInfo Field Functions 
    bool hasShowBackupStrategyInfo() const { return this->showBackupStrategyInfo_ != nullptr;};
    void deleteShowBackupStrategyInfo() { this->showBackupStrategyInfo_ = nullptr;};
    inline bool getShowBackupStrategyInfo() const { DARABONBA_PTR_GET_DEFAULT(showBackupStrategyInfo_, false) };
    inline DescribeBackupPlanListRequest& setShowBackupStrategyInfo(bool showBackupStrategyInfo) { DARABONBA_PTR_SET_VALUE(showBackupStrategyInfo_, showBackupStrategyInfo) };


    // showRecoverTimeRange Field Functions 
    bool hasShowRecoverTimeRange() const { return this->showRecoverTimeRange_ != nullptr;};
    void deleteShowRecoverTimeRange() { this->showRecoverTimeRange_ = nullptr;};
    inline bool getShowRecoverTimeRange() const { DARABONBA_PTR_GET_DEFAULT(showRecoverTimeRange_, false) };
    inline DescribeBackupPlanListRequest& setShowRecoverTimeRange(bool showRecoverTimeRange) { DARABONBA_PTR_SET_VALUE(showRecoverTimeRange_, showRecoverTimeRange) };


    // showStorageStrategyInfo Field Functions 
    bool hasShowStorageStrategyInfo() const { return this->showStorageStrategyInfo_ != nullptr;};
    void deleteShowStorageStrategyInfo() { this->showStorageStrategyInfo_ = nullptr;};
    inline bool getShowStorageStrategyInfo() const { DARABONBA_PTR_GET_DEFAULT(showStorageStrategyInfo_, false) };
    inline DescribeBackupPlanListRequest& setShowStorageStrategyInfo(bool showStorageStrategyInfo) { DARABONBA_PTR_SET_VALUE(showStorageStrategyInfo_, showStorageStrategyInfo) };


  protected:
    shared_ptr<string> backupMethod_ {};
    // Backup plan ID. To list multiple backup plans, separate IDs with commas.
    shared_ptr<string> backupPlanId_ {};
    // Backup plan name.
    shared_ptr<string> backupPlanName_ {};
    // Backup plan status. Valid values:
    // 
    // - **wait**: Not configured.
    // 
    // - **init**: Not started (precheck failed).
    // 
    // - **running**: Running.
    // 
    // - **stop**: Failed.
    // 
    // - **pause**: Paused.
    // 
    // - **locked**: Locked.
    // 
    // - **check_pass**: Precheck passed.
    shared_ptr<string> backupPlanStatus_ {};
    // A client token used to ensure idempotence and prevent duplicate requests.
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> ownerId_ {};
    // Page number. Valid values: integers greater than or equal to 0 and less than or equal to the maximum integer value. Default value: 0.
    shared_ptr<int32_t> pageNum_ {};
    // Number of records per page. Valid values: 1 to 100.
    // 
    // > Default value: **30**.
    shared_ptr<int32_t> pageSize_ {};
    // DBS region. Call [DescribeRegions](https://help.aliyun.com/document_detail/2869853.html) to view supported regions.
    shared_ptr<string> region_ {};
    // Resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<bool> showBackupStrategyInfo_ {};
    shared_ptr<bool> showRecoverTimeRange_ {};
    shared_ptr<bool> showStorageStrategyInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
