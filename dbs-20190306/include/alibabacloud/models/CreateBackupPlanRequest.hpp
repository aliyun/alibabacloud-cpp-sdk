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
        && this->clientToken_ == nullptr && this->databaseRegion_ == nullptr && this->databaseType_ == nullptr && this->fromApp_ == nullptr && this->instanceClass_ == nullptr
        && this->instanceType_ == nullptr && this->ownerId_ == nullptr && this->payType_ == nullptr && this->period_ == nullptr && this->region_ == nullptr
        && this->resourceGroupId_ == nullptr && this->storageRegion_ == nullptr && this->storageType_ == nullptr && this->usedTime_ == nullptr; };
    // backupMethod Field Functions 
    bool hasBackupMethod() const { return this->backupMethod_ != nullptr;};
    void deleteBackupMethod() { this->backupMethod_ = nullptr;};
    inline string getBackupMethod() const { DARABONBA_PTR_GET_DEFAULT(backupMethod_, "") };
    inline CreateBackupPlanRequest& setBackupMethod(string backupMethod) { DARABONBA_PTR_SET_VALUE(backupMethod_, backupMethod) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateBackupPlanRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // databaseRegion Field Functions 
    bool hasDatabaseRegion() const { return this->databaseRegion_ != nullptr;};
    void deleteDatabaseRegion() { this->databaseRegion_ = nullptr;};
    inline string getDatabaseRegion() const { DARABONBA_PTR_GET_DEFAULT(databaseRegion_, "") };
    inline CreateBackupPlanRequest& setDatabaseRegion(string databaseRegion) { DARABONBA_PTR_SET_VALUE(databaseRegion_, databaseRegion) };


    // databaseType Field Functions 
    bool hasDatabaseType() const { return this->databaseType_ != nullptr;};
    void deleteDatabaseType() { this->databaseType_ = nullptr;};
    inline string getDatabaseType() const { DARABONBA_PTR_GET_DEFAULT(databaseType_, "") };
    inline CreateBackupPlanRequest& setDatabaseType(string databaseType) { DARABONBA_PTR_SET_VALUE(databaseType_, databaseType) };


    // fromApp Field Functions 
    bool hasFromApp() const { return this->fromApp_ != nullptr;};
    void deleteFromApp() { this->fromApp_ = nullptr;};
    inline string getFromApp() const { DARABONBA_PTR_GET_DEFAULT(fromApp_, "") };
    inline CreateBackupPlanRequest& setFromApp(string fromApp) { DARABONBA_PTR_SET_VALUE(fromApp_, fromApp) };


    // instanceClass Field Functions 
    bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
    void deleteInstanceClass() { this->instanceClass_ = nullptr;};
    inline string getInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
    inline CreateBackupPlanRequest& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateBackupPlanRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline CreateBackupPlanRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateBackupPlanRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateBackupPlanRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateBackupPlanRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateBackupPlanRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // storageRegion Field Functions 
    bool hasStorageRegion() const { return this->storageRegion_ != nullptr;};
    void deleteStorageRegion() { this->storageRegion_ = nullptr;};
    inline string getStorageRegion() const { DARABONBA_PTR_GET_DEFAULT(storageRegion_, "") };
    inline CreateBackupPlanRequest& setStorageRegion(string storageRegion) { DARABONBA_PTR_SET_VALUE(storageRegion_, storageRegion) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline CreateBackupPlanRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline int32_t getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, 0) };
    inline CreateBackupPlanRequest& setUsedTime(int32_t usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


  protected:
    // The backup method. Valid values:
    // 
    // - **logical**: logical backup
    // 
    // - **physical**: physical backup
    // 
    // This parameter is required.
    shared_ptr<string> backupMethod_ {};
    // A client token that is used to ensure the idempotence of the request.
    shared_ptr<string> clientToken_ {};
    // The region of the database.
    shared_ptr<string> databaseRegion_ {};
    // The database type. Valid values:
    // 
    // - **MySQL**
    // 
    // - **MSSQL**
    // 
    // - **Oracle**
    // 
    // - **MariaDB**
    // 
    // - **PostgreSQL**
    // 
    // - **DRDS**
    // 
    // - **MongoDB**
    // 
    // - **Redis**
    // 
    // This parameter is required.
    shared_ptr<string> databaseType_ {};
    // The source of the request. The default value is OpenAPI. You do not need to set this parameter.
    shared_ptr<string> fromApp_ {};
    // The instance class. Valid values:
    // 
    // - **micro**: Entry
    // 
    // - **small**: Basic
    // 
    // - **medium**: Standard
    // 
    // - **large**: Enhanced
    // 
    // - **xlarge**: Enhanced (no traffic limit)
    // 
    // > The higher the instance class, the better the performance of backup and recovery. For more information, see [Specifications](https://help.aliyun.com/document_detail/84372.html).
    // 
    // This parameter is required.
    shared_ptr<string> instanceClass_ {};
    // The database instance type. Valid values:
    // 
    // - **RDS**
    // 
    // - **PolarDB**
    // 
    // - **DDS**: Alibaba Cloud MongoDB
    // 
    // - **Kvstore**: Alibaba Cloud Redis
    // 
    // - **Other**: A database that is connected over the Internet.
    // 
    // - **dg**: A self-managed database without a public IP address and port that is connected through Database Gateway (DG).
    shared_ptr<string> instanceType_ {};
    shared_ptr<string> ownerId_ {};
    // The payment method. Valid value:
    // 
    // **prepay**: subscription
    shared_ptr<string> payType_ {};
    // The billing cycle of the subscription instance. Valid values:
    // 
    // - **Year**
    // 
    // - **Month**
    shared_ptr<string> period_ {};
    // The region ID of the DBS instance. This parameter is required. Call the [DescribeRegions](https://help.aliyun.com/document_detail/2869853.html) operation to view the regions that DBS supports.
    // 
    // > For more information, see [Endpoints](https://help.aliyun.com/document_detail/2869810.html).
    shared_ptr<string> region_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The storage region.
    shared_ptr<string> storageRegion_ {};
    // This parameter is not used.
    shared_ptr<string> storageType_ {};
    // The subscription duration. Valid values:
    // 
    // - If you set the **Period** parameter to **Year**, the value of **UsedTime** can be 1 to 5.
    // 
    // - If you set the **Period** parameter to **Month**, the value of **UsedTime** can be 1 to 11.
    shared_ptr<int32_t> usedTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
