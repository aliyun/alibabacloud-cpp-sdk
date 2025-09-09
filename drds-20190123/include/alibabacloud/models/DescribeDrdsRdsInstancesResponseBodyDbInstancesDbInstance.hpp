// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSRDSINSTANCESRESPONSEBODYDBINSTANCESDBINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSRDSINSTANCESRESPONSEBODYDBINSTANCESDBINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectUrl, connectUrl_);
      DARABONBA_PTR_TO_JSON(DBInstanceCPU, DBInstanceCPU_);
      DARABONBA_PTR_TO_JSON(DBInstanceClassType, DBInstanceClassType_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceMemory, DBInstanceMemory_);
      DARABONBA_PTR_TO_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_TO_JSON(DbInstType, dbInstType_);
      DARABONBA_PTR_TO_JSON(DmInstanceId, dmInstanceId_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RdsInstType, rdsInstType_);
      DARABONBA_PTR_TO_JSON(ReadWeight, readWeight_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectUrl, connectUrl_);
      DARABONBA_PTR_FROM_JSON(DBInstanceCPU, DBInstanceCPU_);
      DARABONBA_PTR_FROM_JSON(DBInstanceClassType, DBInstanceClassType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceMemory, DBInstanceMemory_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_FROM_JSON(DbInstType, dbInstType_);
      DARABONBA_PTR_FROM_JSON(DmInstanceId, dmInstanceId_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RdsInstType, rdsInstType_);
      DARABONBA_PTR_FROM_JSON(ReadWeight, readWeight_);
    };
    DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance() = default ;
    DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance(const DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance &) = default ;
    DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance(DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance &&) = default ;
    DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance() = default ;
    DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance& operator=(const DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance &) = default ;
    DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance& operator=(DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectUrl_ != nullptr
        && this->DBInstanceCPU_ != nullptr && this->DBInstanceClassType_ != nullptr && this->DBInstanceId_ != nullptr && this->DBInstanceMemory_ != nullptr && this->DBInstanceStatus_ != nullptr
        && this->DBInstanceStorage_ != nullptr && this->dbInstType_ != nullptr && this->dmInstanceId_ != nullptr && this->engine_ != nullptr && this->engineVersion_ != nullptr
        && this->lockMode_ != nullptr && this->lockReason_ != nullptr && this->networkType_ != nullptr && this->payType_ != nullptr && this->port_ != nullptr
        && this->rdsInstType_ != nullptr && this->readWeight_ != nullptr; };
    // connectUrl Field Functions 
    bool hasConnectUrl() const { return this->connectUrl_ != nullptr;};
    void deleteConnectUrl() { this->connectUrl_ = nullptr;};
    inline string connectUrl() const { DARABONBA_PTR_GET_DEFAULT(connectUrl_, "") };
    inline DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance& setConnectUrl(string connectUrl) { DARABONBA_PTR_SET_VALUE(connectUrl_, connectUrl) };


    // DBInstanceCPU Field Functions 
    bool hasDBInstanceCPU() const { return this->DBInstanceCPU_ != nullptr;};
    void deleteDBInstanceCPU() { this->DBInstanceCPU_ = nullptr;};
    inline string DBInstanceCPU() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceCPU_, "") };
    inline DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance& setDBInstanceCPU(string DBInstanceCPU) { DARABONBA_PTR_SET_VALUE(DBInstanceCPU_, DBInstanceCPU) };


    // DBInstanceClassType Field Functions 
    bool hasDBInstanceClassType() const { return this->DBInstanceClassType_ != nullptr;};
    void deleteDBInstanceClassType() { this->DBInstanceClassType_ = nullptr;};
    inline string DBInstanceClassType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClassType_, "") };
    inline DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance& setDBInstanceClassType(string DBInstanceClassType) { DARABONBA_PTR_SET_VALUE(DBInstanceClassType_, DBInstanceClassType) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceMemory Field Functions 
    bool hasDBInstanceMemory() const { return this->DBInstanceMemory_ != nullptr;};
    void deleteDBInstanceMemory() { this->DBInstanceMemory_ = nullptr;};
    inline int64_t DBInstanceMemory() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceMemory_, 0L) };
    inline DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance& setDBInstanceMemory(int64_t DBInstanceMemory) { DARABONBA_PTR_SET_VALUE(DBInstanceMemory_, DBInstanceMemory) };


    // DBInstanceStatus Field Functions 
    bool hasDBInstanceStatus() const { return this->DBInstanceStatus_ != nullptr;};
    void deleteDBInstanceStatus() { this->DBInstanceStatus_ = nullptr;};
    inline string DBInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatus_, "") };
    inline DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance& setDBInstanceStatus(string DBInstanceStatus) { DARABONBA_PTR_SET_VALUE(DBInstanceStatus_, DBInstanceStatus) };


    // DBInstanceStorage Field Functions 
    bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
    void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
    inline int64_t DBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0L) };
    inline DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance& setDBInstanceStorage(int64_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


    // dbInstType Field Functions 
    bool hasDbInstType() const { return this->dbInstType_ != nullptr;};
    void deleteDbInstType() { this->dbInstType_ = nullptr;};
    inline string dbInstType() const { DARABONBA_PTR_GET_DEFAULT(dbInstType_, "") };
    inline DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance& setDbInstType(string dbInstType) { DARABONBA_PTR_SET_VALUE(dbInstType_, dbInstType) };


    // dmInstanceId Field Functions 
    bool hasDmInstanceId() const { return this->dmInstanceId_ != nullptr;};
    void deleteDmInstanceId() { this->dmInstanceId_ = nullptr;};
    inline string dmInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dmInstanceId_, "") };
    inline DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance& setDmInstanceId(string dmInstanceId) { DARABONBA_PTR_SET_VALUE(dmInstanceId_, dmInstanceId) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline int32_t lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, 0) };
    inline DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance& setLockMode(int32_t lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string lockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // rdsInstType Field Functions 
    bool hasRdsInstType() const { return this->rdsInstType_ != nullptr;};
    void deleteRdsInstType() { this->rdsInstType_ = nullptr;};
    inline string rdsInstType() const { DARABONBA_PTR_GET_DEFAULT(rdsInstType_, "") };
    inline DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance& setRdsInstType(string rdsInstType) { DARABONBA_PTR_SET_VALUE(rdsInstType_, rdsInstType) };


    // readWeight Field Functions 
    bool hasReadWeight() const { return this->readWeight_ != nullptr;};
    void deleteReadWeight() { this->readWeight_ = nullptr;};
    inline int32_t readWeight() const { DARABONBA_PTR_GET_DEFAULT(readWeight_, 0) };
    inline DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance& setReadWeight(int32_t readWeight) { DARABONBA_PTR_SET_VALUE(readWeight_, readWeight) };


  protected:
    // The internal endpoint of the custom ApsaraDB RDS for MySQL instance at the storage layer.
    std::shared_ptr<string> connectUrl_ = nullptr;
    // The number of CPU cores of the custom ApsaraDB RDS for MySQL instance at the storage layer.
    std::shared_ptr<string> DBInstanceCPU_ = nullptr;
    // The instance family of the custom ApsaraDB RDS for MySQL instance at the storage layer. Valid values:
    // 
    // *   **x**: general-purpose instance family
    // *   **d**: dedicated instance family
    // *   **h**: dedicated host instance family
    std::shared_ptr<string> DBInstanceClassType_ = nullptr;
    // The ID of the custom ApsaraDB RDS for MySQL instance at the storage layer.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The memory size of the custom ApsaraDB RDS for MySQL instance at the storage layer. Unit: MB.
    std::shared_ptr<int64_t> DBInstanceMemory_ = nullptr;
    // The status of the custom ApsaraDB RDS for MySQL instance at the storage layer. Valid values:
    // 
    // *   0: The instance is being created.
    // *   1: The instance is running.
    // *   3: The instance is being deleted.
    // *   5: The instance is being restarted.
    // *   6: The instance is being upgraded or downgraded.
    // *   7: The instance is being backed up.
    // *   8: The network type of the instance is being changed.
    // *   9: The instance is being migrated.
    // *   11: The data stored on the instance is being migrated.
    // *   12: A disaster recovery instance is being generated.
    // *   13: Data is being imported to the instance.
    // *   14: Data is being imported from another RDS instance to the instance.
    // *   15: A switchover is being performed.
    // *   16: A temporary instance is being created.
    // *   17: The network of the instance is being created.
    // *   18: The instance is being cloned.
    // *   19: The link is being changed.
    // *   20: The read-only RDS instances of the instance are being migrated.
    std::shared_ptr<string> DBInstanceStatus_ = nullptr;
    // The storage space of the custom ApsaraDB RDS for MySQL instance at the storage layer. Unit: GB.
    std::shared_ptr<int64_t> DBInstanceStorage_ = nullptr;
    // The type of the instance at the storage layer. The value is RDS.
    std::shared_ptr<string> dbInstType_ = nullptr;
    // The ID of the resource.
    std::shared_ptr<string> dmInstanceId_ = nullptr;
    // The engine type of the custom ApsaraDB RDS for MySQL instance at the storage layer. The value is MySQL.
    std::shared_ptr<string> engine_ = nullptr;
    // The engine version of the custom ApsaraDB RDS for MySQL instance at the storage layer. The value is 8.0.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // The lock mode of the RDS instance. Valid values:
    // 
    // 0: The instance is not locked.
    // 
    // 1: The instance is manually locked.
    // 
    // 2: The instance is automatically locked if the instance expires.
    // 
    // 3: The instance is automatically locked if the instance is rolled back.
    // 
    // 4: The instance is automatically locked if the storage space of the instance reaches the upper limit.
    // 
    // 5: The instance is automatically locked if the storage space of the read-only instances reaches the upper limit.
    std::shared_ptr<int32_t> lockMode_ = nullptr;
    // The reason why the RDS instance is locked.
    std::shared_ptr<string> lockReason_ = nullptr;
    // The network type of the custom ApsaraDB RDS for MySQL instance at the storage layer. The value is VPC.
    std::shared_ptr<string> networkType_ = nullptr;
    // The billing method of the custom ApsaraDB RDS for MySQL instance at the storage layer. Valid values:
    // 
    // *   Postpaid: pay-as-you-go
    // *   Prepaid: subscription
    std::shared_ptr<string> payType_ = nullptr;
    // The port used to connect to the instance over an internal network.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The type of the custom ApsaraDB RDS for MySQL instance at the storage layer. Valid values:
    // 
    // *   Primary: primary instance
    // *   Readonly: read-only instance
    std::shared_ptr<string> rdsInstType_ = nullptr;
    // The read and write weights of the custom ApsaraDB RDS for MySQL instance at the storage layer.
    std::shared_ptr<int32_t> readWeight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
