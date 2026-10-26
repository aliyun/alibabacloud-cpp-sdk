// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETALISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETALISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeMetaListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetaListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupSetID, backupSetID_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(GetDbName, getDbName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Pattern, pattern_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_TO_JSON(RestoreType, restoreType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetaListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupSetID, backupSetID_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(GetDbName, getDbName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_FROM_JSON(RestoreType, restoreType_);
    };
    DescribeMetaListRequest() = default ;
    DescribeMetaListRequest(const DescribeMetaListRequest &) = default ;
    DescribeMetaListRequest(DescribeMetaListRequest &&) = default ;
    DescribeMetaListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetaListRequest() = default ;
    DescribeMetaListRequest& operator=(const DescribeMetaListRequest &) = default ;
    DescribeMetaListRequest& operator=(DescribeMetaListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupSetID_ == nullptr
        && this->clientToken_ == nullptr && this->DBInstanceId_ == nullptr && this->getDbName_ == nullptr && this->ownerId_ == nullptr && this->pageIndex_ == nullptr
        && this->pageSize_ == nullptr && this->pattern_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->restoreTime_ == nullptr && this->restoreType_ == nullptr; };
    // backupSetID Field Functions 
    bool hasBackupSetID() const { return this->backupSetID_ != nullptr;};
    void deleteBackupSetID() { this->backupSetID_ = nullptr;};
    inline int64_t getBackupSetID() const { DARABONBA_PTR_GET_DEFAULT(backupSetID_, 0L) };
    inline DescribeMetaListRequest& setBackupSetID(int64_t backupSetID) { DARABONBA_PTR_SET_VALUE(backupSetID_, backupSetID) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeMetaListRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeMetaListRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // getDbName Field Functions 
    bool hasGetDbName() const { return this->getDbName_ != nullptr;};
    void deleteGetDbName() { this->getDbName_ = nullptr;};
    inline string getGetDbName() const { DARABONBA_PTR_GET_DEFAULT(getDbName_, "") };
    inline DescribeMetaListRequest& setGetDbName(string getDbName) { DARABONBA_PTR_SET_VALUE(getDbName_, getDbName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeMetaListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline DescribeMetaListRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeMetaListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pattern Field Functions 
    bool hasPattern() const { return this->pattern_ != nullptr;};
    void deletePattern() { this->pattern_ = nullptr;};
    inline string getPattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
    inline DescribeMetaListRequest& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeMetaListRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeMetaListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeMetaListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // restoreTime Field Functions 
    bool hasRestoreTime() const { return this->restoreTime_ != nullptr;};
    void deleteRestoreTime() { this->restoreTime_ = nullptr;};
    inline string getRestoreTime() const { DARABONBA_PTR_GET_DEFAULT(restoreTime_, "") };
    inline DescribeMetaListRequest& setRestoreTime(string restoreTime) { DARABONBA_PTR_SET_VALUE(restoreTime_, restoreTime) };


    // restoreType Field Functions 
    bool hasRestoreType() const { return this->restoreType_ != nullptr;};
    void deleteRestoreType() { this->restoreType_ = nullptr;};
    inline string getRestoreType() const { DARABONBA_PTR_GET_DEFAULT(restoreType_, "") };
    inline DescribeMetaListRequest& setRestoreType(string restoreType) { DARABONBA_PTR_SET_VALUE(restoreType_, restoreType) };


  protected:
    // The ID of the backup set that is used for the query when the restoration method is based on a backup set. You can call the DescribeBackups operation to query the ID.
    // > This parameter is required when **RestoreType** is set to **BackupSetID**.
    shared_ptr<int64_t> backupSetID_ {};
    // The client token that is used to ensure the idempotence of the request and prevent duplicate submissions. You can use the client to generate the value, but you must ensure that it is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // Instance ID of the instance. You can call the DescribeDBInstances operation to query instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The name of the database to query. Exact match is used. The specific database name and all tables in the database are returned.
    // > If this parameter is left empty, a list of all databases is returned.
    shared_ptr<string> getDbName_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The page number. Valid values: any integer greater than **0** and less than or equal to the maximum value of the Integer type. Default value: **1**.
    // > This parameter takes effect only when it is specified together with **PageSize**.
    shared_ptr<int32_t> pageIndex_ {};
    // The number of entries per page. Default value: **1**.
    // > This parameter takes effect only when it is specified together with **PageIndex**.
    shared_ptr<int32_t> pageSize_ {};
    // The name of the database to query. Fuzzy match is used. Only the matched database names are returned, and table names are not returned.
    // > For example, if you specify `test`, `testdb1` and `testdb2` are matched. After you determine the target database name, you can specify the exact database name in the **GetDbName** parameter to view the information about all tables in the target database.
    shared_ptr<string> pattern_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The point in time to which you want to restore data. The specified point in time must be earlier than the current time. Specify the time in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format. The time must be in UTC. You can call the DescribeBackups operation to query the time.
    // > This parameter is required when **RestoreType** is set to **RestoreTime**.
    shared_ptr<string> restoreTime_ {};
    // The restoration method. Valid values:
    // 
    // * **BackupSetID**: restores data based on a backup set. If you set this parameter to BackupSetID, you must also specify the **BackupSetID** parameter.
    // * **RestoreTime**: restores data to a specific point in time. If you set this parameter to RestoreTime, you must also specify the **RestoreTime** parameter.
    // 
    // Default value: **BackupSetID**.
    shared_ptr<string> restoreType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
