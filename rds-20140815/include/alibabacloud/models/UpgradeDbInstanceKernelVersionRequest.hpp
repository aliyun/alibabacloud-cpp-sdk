// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEDBINSTANCEKERNELVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEDBINSTANCEKERNELVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class UpgradeDBInstanceKernelVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeDBInstanceKernelVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_TO_JSON(TargetMinorVersion, targetMinorVersion_);
      DARABONBA_PTR_TO_JSON(UpgradeTime, upgradeTime_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeDBInstanceKernelVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_FROM_JSON(TargetMinorVersion, targetMinorVersion_);
      DARABONBA_PTR_FROM_JSON(UpgradeTime, upgradeTime_);
    };
    UpgradeDBInstanceKernelVersionRequest() = default ;
    UpgradeDBInstanceKernelVersionRequest(const UpgradeDBInstanceKernelVersionRequest &) = default ;
    UpgradeDBInstanceKernelVersionRequest(UpgradeDBInstanceKernelVersionRequest &&) = default ;
    UpgradeDBInstanceKernelVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeDBInstanceKernelVersionRequest() = default ;
    UpgradeDBInstanceKernelVersionRequest& operator=(const UpgradeDBInstanceKernelVersionRequest &) = default ;
    UpgradeDBInstanceKernelVersionRequest& operator=(UpgradeDBInstanceKernelVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->ownerId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->switchTime_ == nullptr && return this->targetMinorVersion_ == nullptr
        && return this->upgradeTime_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline UpgradeDBInstanceKernelVersionRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpgradeDBInstanceKernelVersionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpgradeDBInstanceKernelVersionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpgradeDBInstanceKernelVersionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // switchTime Field Functions 
    bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
    void deleteSwitchTime() { this->switchTime_ = nullptr;};
    inline string switchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, "") };
    inline UpgradeDBInstanceKernelVersionRequest& setSwitchTime(string switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


    // targetMinorVersion Field Functions 
    bool hasTargetMinorVersion() const { return this->targetMinorVersion_ != nullptr;};
    void deleteTargetMinorVersion() { this->targetMinorVersion_ = nullptr;};
    inline string targetMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(targetMinorVersion_, "") };
    inline UpgradeDBInstanceKernelVersionRequest& setTargetMinorVersion(string targetMinorVersion) { DARABONBA_PTR_SET_VALUE(targetMinorVersion_, targetMinorVersion) };


    // upgradeTime Field Functions 
    bool hasUpgradeTime() const { return this->upgradeTime_ != nullptr;};
    void deleteUpgradeTime() { this->upgradeTime_ = nullptr;};
    inline string upgradeTime() const { DARABONBA_PTR_GET_DEFAULT(upgradeTime_, "") };
    inline UpgradeDBInstanceKernelVersionRequest& setUpgradeTime(string upgradeTime) { DARABONBA_PTR_SET_VALUE(upgradeTime_, upgradeTime) };


  protected:
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // > *   If your instance runs PostgreSQL, you must make sure that the instance uses **cloud disks**. If the instance uses local disks, you must call the [RestartDBInstance](https://help.aliyun.com/document_detail/26230.html) operation to restart the instance. The system automatically updates the minor engine version of the instance to the latest version during the restart.
    // > *   If your instance runs SQL Server, you must make sure that the instance runs SQL Server 2019.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The update time. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // > This parameter takes effect only when you set **UpgradeTime** to **SpecifyTime**.
    std::shared_ptr<string> switchTime_ = nullptr;
    // The minor engine version to which you want to update. Format:
    // 
    // *   **PostgreSQL**: `rds_postgres_<Major engine version>00_<Minor engine version>`. Example: `rds_postgres_1200_20200830`.
    // 
    // *   **MySQL**: `<RDS edition and MySQL version>_<Minor engine version>`. Examples: `rds_20200229`, `xcluster_20200229`, and `xcluster80_20200229`. The following RDS editions and MySQL versions are supported:
    // 
    //     *   **rds**: RDS Basic Edition or RDS High-availability Edition
    //     *   **xcluster**: MySQL 5.7 on RDS Enterprise Edition
    //     *   **xcluster80**: MySQL 8.0 on RDS Enterprise Edition
    // 
    // *   **SQLServer**: `<Minor engine version>`. Example: `15.0.4073.23`.
    // 
    // If you do not specify this parameter, the instance is updated to the latest minor engine version.
    // 
    // >  For more information about minor engine versions, see [Release notes of AliPG](https://help.aliyun.com/document_detail/126002.html), [Release notes of AliSQL](https://help.aliyun.com/document_detail/96060.html), and [Release notes of minor engine versions of ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/213577.html).
    std::shared_ptr<string> targetMinorVersion_ = nullptr;
    // The time when the update takes effect. Valid values:
    // 
    // *   **Immediate** (default): The update takes effect immediately.
    // *   **MaintainTime**: The update takes effect during the maintenance window that you specify. For more information about how to change the maintenance window, see ModifyDBInstanceMaintainTime.
    // *   **SpecifyTime**: The update takes effect at the point in time you specify.
    std::shared_ptr<string> upgradeTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
