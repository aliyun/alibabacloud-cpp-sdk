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
        && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->switchTime_ == nullptr && this->targetMinorVersion_ == nullptr
        && this->upgradeTime_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline UpgradeDBInstanceKernelVersionRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpgradeDBInstanceKernelVersionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpgradeDBInstanceKernelVersionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpgradeDBInstanceKernelVersionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // switchTime Field Functions 
    bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
    void deleteSwitchTime() { this->switchTime_ = nullptr;};
    inline string getSwitchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, "") };
    inline UpgradeDBInstanceKernelVersionRequest& setSwitchTime(string switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


    // targetMinorVersion Field Functions 
    bool hasTargetMinorVersion() const { return this->targetMinorVersion_ != nullptr;};
    void deleteTargetMinorVersion() { this->targetMinorVersion_ = nullptr;};
    inline string getTargetMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(targetMinorVersion_, "") };
    inline UpgradeDBInstanceKernelVersionRequest& setTargetMinorVersion(string targetMinorVersion) { DARABONBA_PTR_SET_VALUE(targetMinorVersion_, targetMinorVersion) };


    // upgradeTime Field Functions 
    bool hasUpgradeTime() const { return this->upgradeTime_ != nullptr;};
    void deleteUpgradeTime() { this->upgradeTime_ = nullptr;};
    inline string getUpgradeTime() const { DARABONBA_PTR_GET_DEFAULT(upgradeTime_, "") };
    inline UpgradeDBInstanceKernelVersionRequest& setUpgradeTime(string upgradeTime) { DARABONBA_PTR_SET_VALUE(upgradeTime_, upgradeTime) };


  protected:
    // The ID of the instance. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // > * The storage type of the ApsaraDB RDS for PostgreSQL instance must be **cloud disk**. You can call the [restart the instance](https://help.aliyun.com/document_detail/26230.html) operation to restart an instance with Premium Local SSDs to automatically upgrade the instance to the latest minor engine version.
    // > * Only ApsaraDB RDS for SQL Server 2019 instances support minor engine version upgrades.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The specified time when the upgrade is performed. Specify the time in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format. The time must be in UTC.
    // >This parameter takes effect only when **UpgradeTime** is set to **SpecifyTime**.
    shared_ptr<string> switchTime_ {};
    // The target minor database version. Format:
    // * **PostgreSQL**: `rds_postgres_<Major version number>00_<Minor version number>`. Example: `rds_postgres_1200_20200830` for PostgreSQL 12 version 20200830.
    // * **MySQL**: `<Instance edition>_<Minor version number>`. Examples: `rds_20200229`, `xcluster_20200229`, and `xcluster80_20200229`. The instance editions are as follows:
    //     * **rds**: high availability series or Basic Edition.
    //     * **xcluster**: MySQL 5.7 RDS Enterprise Edition.
    //     * **xcluster80**: MySQL 8.0 RDS Enterprise Edition.
    // * **SQL Server**: `<Minor version number>`. Example: `15.0.4073.23`.
    // 
    // If you do not specify this parameter, the instance is upgraded to the latest minor database version by default.
    // > For more information about minor database versions, see [Release notes for minor engine versions of ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/126002.html), [Release notes for minor engine versions of ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/96060.html), and [Release notes for minor engine versions of ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/213577.html).
    shared_ptr<string> targetMinorVersion_ {};
    // The time when the upgrade is performed. Valid values:
    // 
    // * **Immediate**: The upgrade is immediately performed. This is the default value.
    // * **MaintainTime**: The upgrade is performed within the specified maintenance window. For more information about how to modify the maintenance window, see ModifyDBInstanceMaintainTime.
    // * **SpecifyTime**: The upgrade is performed at the specified time.
    shared_ptr<string> upgradeTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
