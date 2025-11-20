// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHANARESTORESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHANARESTORESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeHanaRestoresRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHanaRestoresRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RestoreId, restoreId_);
      DARABONBA_PTR_TO_JSON(RestoreStatus, restoreStatus_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHanaRestoresRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RestoreId, restoreId_);
      DARABONBA_PTR_FROM_JSON(RestoreStatus, restoreStatus_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    DescribeHanaRestoresRequest() = default ;
    DescribeHanaRestoresRequest(const DescribeHanaRestoresRequest &) = default ;
    DescribeHanaRestoresRequest(DescribeHanaRestoresRequest &&) = default ;
    DescribeHanaRestoresRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHanaRestoresRequest() = default ;
    DescribeHanaRestoresRequest& operator=(const DescribeHanaRestoresRequest &) = default ;
    DescribeHanaRestoresRequest& operator=(DescribeHanaRestoresRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupId_ == nullptr
        && return this->clusterId_ == nullptr && return this->databaseName_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->restoreId_ == nullptr && return this->restoreStatus_ == nullptr && return this->vaultId_ == nullptr; };
    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline int64_t backupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, 0L) };
    inline DescribeHanaRestoresRequest& setBackupId(int64_t backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeHanaRestoresRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline DescribeHanaRestoresRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeHanaRestoresRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeHanaRestoresRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeHanaRestoresRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // restoreId Field Functions 
    bool hasRestoreId() const { return this->restoreId_ != nullptr;};
    void deleteRestoreId() { this->restoreId_ = nullptr;};
    inline string restoreId() const { DARABONBA_PTR_GET_DEFAULT(restoreId_, "") };
    inline DescribeHanaRestoresRequest& setRestoreId(string restoreId) { DARABONBA_PTR_SET_VALUE(restoreId_, restoreId) };


    // restoreStatus Field Functions 
    bool hasRestoreStatus() const { return this->restoreStatus_ != nullptr;};
    void deleteRestoreStatus() { this->restoreStatus_ = nullptr;};
    inline string restoreStatus() const { DARABONBA_PTR_GET_DEFAULT(restoreStatus_, "") };
    inline DescribeHanaRestoresRequest& setRestoreStatus(string restoreStatus) { DARABONBA_PTR_SET_VALUE(restoreStatus_, restoreStatus) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline DescribeHanaRestoresRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The backup ID.
    std::shared_ptr<int64_t> backupId_ = nullptr;
    // The ID of the SAP HANA instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The database name.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: 1 to 99. Default value: 10.\\`
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the restore job.
    std::shared_ptr<string> restoreId_ = nullptr;
    // The status of the restore job. Valid values:
    // 
    // *   **RUNNING**: The job is running.
    // *   **COMPLETE**: The job is completed.
    // *   **PARTIAL_COMPLETE**: The job is partially completed.
    // *   **FAILED**: The job failed.
    // *   **CANCELED**: The job is canceled.
    // *   **EXPIRED**: The job timed out.
    std::shared_ptr<string> restoreStatus_ = nullptr;
    // The ID of the backup vault.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
