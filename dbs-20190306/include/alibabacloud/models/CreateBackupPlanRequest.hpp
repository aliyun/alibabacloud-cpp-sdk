// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBACKUPPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBACKUPPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class CreateBackupPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBackupPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DatabaseRegion, databaseRegion_);
      DARABONBA_PTR_TO_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_TO_JSON(FromApp, fromApp_);
      DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StorageRegion, storageRegion_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBackupPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DatabaseRegion, databaseRegion_);
      DARABONBA_PTR_FROM_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_FROM_JSON(FromApp, fromApp_);
      DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StorageRegion, storageRegion_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
    };
    CreateBackupPlanRequest() = default ;
    CreateBackupPlanRequest(const CreateBackupPlanRequest &) = default ;
    CreateBackupPlanRequest(CreateBackupPlanRequest &&) = default ;
    CreateBackupPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBackupPlanRequest() = default ;
    CreateBackupPlanRequest& operator=(const CreateBackupPlanRequest &) = default ;
    CreateBackupPlanRequest& operator=(CreateBackupPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupMethod_ == nullptr
        && return this->clientToken_ == nullptr && return this->databaseRegion_ == nullptr && return this->databaseType_ == nullptr && return this->fromApp_ == nullptr && return this->instanceClass_ == nullptr
        && return this->instanceType_ == nullptr && return this->ownerId_ == nullptr && return this->payType_ == nullptr && return this->period_ == nullptr && return this->region_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->storageRegion_ == nullptr && return this->storageType_ == nullptr && return this->usedTime_ == nullptr; };
    // backupMethod Field Functions 
    bool hasBackupMethod() const { return this->backupMethod_ != nullptr;};
    void deleteBackupMethod() { this->backupMethod_ = nullptr;};
    inline string backupMethod() const { DARABONBA_PTR_GET_DEFAULT(backupMethod_, "") };
    inline CreateBackupPlanRequest& setBackupMethod(string backupMethod) { DARABONBA_PTR_SET_VALUE(backupMethod_, backupMethod) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateBackupPlanRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // databaseRegion Field Functions 
    bool hasDatabaseRegion() const { return this->databaseRegion_ != nullptr;};
    void deleteDatabaseRegion() { this->databaseRegion_ = nullptr;};
    inline string databaseRegion() const { DARABONBA_PTR_GET_DEFAULT(databaseRegion_, "") };
    inline CreateBackupPlanRequest& setDatabaseRegion(string databaseRegion) { DARABONBA_PTR_SET_VALUE(databaseRegion_, databaseRegion) };


    // databaseType Field Functions 
    bool hasDatabaseType() const { return this->databaseType_ != nullptr;};
    void deleteDatabaseType() { this->databaseType_ = nullptr;};
    inline string databaseType() const { DARABONBA_PTR_GET_DEFAULT(databaseType_, "") };
    inline CreateBackupPlanRequest& setDatabaseType(string databaseType) { DARABONBA_PTR_SET_VALUE(databaseType_, databaseType) };


    // fromApp Field Functions 
    bool hasFromApp() const { return this->fromApp_ != nullptr;};
    void deleteFromApp() { this->fromApp_ = nullptr;};
    inline string fromApp() const { DARABONBA_PTR_GET_DEFAULT(fromApp_, "") };
    inline CreateBackupPlanRequest& setFromApp(string fromApp) { DARABONBA_PTR_SET_VALUE(fromApp_, fromApp) };


    // instanceClass Field Functions 
    bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
    void deleteInstanceClass() { this->instanceClass_ = nullptr;};
    inline string instanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
    inline CreateBackupPlanRequest& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateBackupPlanRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline CreateBackupPlanRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateBackupPlanRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateBackupPlanRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateBackupPlanRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateBackupPlanRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // storageRegion Field Functions 
    bool hasStorageRegion() const { return this->storageRegion_ != nullptr;};
    void deleteStorageRegion() { this->storageRegion_ = nullptr;};
    inline string storageRegion() const { DARABONBA_PTR_GET_DEFAULT(storageRegion_, "") };
    inline CreateBackupPlanRequest& setStorageRegion(string storageRegion) { DARABONBA_PTR_SET_VALUE(storageRegion_, storageRegion) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline CreateBackupPlanRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline int32_t usedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, 0) };
    inline CreateBackupPlanRequest& setUsedTime(int32_t usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


  protected:
    // The backup method of the backup schedule. Valid values:
    // 
    // *   **logical**: logical backup
    // *   **physical**: physical backup
    // *   **duplication**: dump backup
    // 
    // This parameter is required.
    std::shared_ptr<string> backupMethod_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The region in which the database you want to back up resides.
    // 
    // > This parameter is required if the **PayType** parameter is set to **postpay**.
    std::shared_ptr<string> databaseRegion_ = nullptr;
    // The type of the source database. Valid values:
    // 
    // *   **MySQL**
    // *   **MSSQL**
    // *   **Oracle**
    // *   **MariaDB**
    // *   **PostgreSQL**
    // *   **DRDS**
    // *   **MongoDB**
    // *   **Redis**
    // 
    // This parameter is required.
    std::shared_ptr<string> databaseType_ = nullptr;
    // The source of the request. The default value is OpenAPI and cannot be changed.
    std::shared_ptr<string> fromApp_ = nullptr;
    // The type of the backup schedule. Valid values:
    // 
    // *   **micro**
    // *   **small**
    // *   **medium**
    // *   **large**
    // *   **xlarge**
    // 
    // >  A backup schedule type with higher specifications offers higher backup and restoration performance. For more information, see [Select a backup schedule type](https://help.aliyun.com/document_detail/84372.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceClass_ = nullptr;
    // The type of the source database instance. Valid values:
    // 
    // *   **RDS**: ApsaraDB RDS.
    // *   **PolarDB**: PolarDB.
    // *   **DDS**: ApsaraDB for MongoDB.
    // *   **Kvstore**: ApsaraDB for Redis.
    // *   **Other**: Database connected by using an IP address and a port number.
    // *   **dg**: Self-managed database that has no public IP address or port number and is connected over Database Gateway.
    // 
    // >  If **PayType** is set to **postpay**, this parameter is required.
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    // The billing method of the backup schedule. Valid values:
    // 
    // *   **postpay**: pay-as-you-go
    // *   **prepay**: subscription
    // 
    // > The default value is **prepay**. If the **BackupMethod** parameter is set to **duplication**, **postpay** is supported.
    std::shared_ptr<string> payType_ = nullptr;
    // The unit of the subscription period. Valid values:
    // 
    // *   **Year**: yearly subscription
    // *   **Month**: monthly subscription
    std::shared_ptr<string> period_ = nullptr;
    // The ID of the region in which you can activate Data Disaster Recovery. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/2869853.html) operation to query the regions supported by Data Disaster Recovery.
    // 
    // >  For more information, see [Endpoints](https://help.aliyun.com/document_detail/2869810.html).
    std::shared_ptr<string> region_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The region in which you want to store the backup data.
    // 
    // > This parameter is required if the **PayType** parameter is set to **postpay**.
    std::shared_ptr<string> storageRegion_ = nullptr;
    // This parameter is unavailable.
    std::shared_ptr<string> storageType_ = nullptr;
    // The subscription period. Valid values:
    // 
    // *   If **Period** is set to **Year**, the valid values of **UsedTime** range from 1 to 5.
    // *   If **Period** is set to **Month**, the valid values of **UsedTime** range from 1 to 11.
    std::shared_ptr<int32_t> usedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
