// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSDBINSTANCESRESPONSEBODYDBINSTANCESDBINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSDBINSTANCESRESPONSEBODYDBINSTANCESDBINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectUrl, connectUrl_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_TO_JSON(DbInstType, dbInstType_);
      DARABONBA_PTR_TO_JSON(DmInstanceId, dmInstanceId_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RdsInstType, rdsInstType_);
      DARABONBA_PTR_TO_JSON(ReadOnlyInstances, readOnlyInstances_);
      DARABONBA_PTR_TO_JSON(ReadWeight, readWeight_);
      DARABONBA_PTR_TO_JSON(RemainDays, remainDays_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectUrl, connectUrl_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(DbInstType, dbInstType_);
      DARABONBA_PTR_FROM_JSON(DmInstanceId, dmInstanceId_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RdsInstType, rdsInstType_);
      DARABONBA_PTR_FROM_JSON(ReadOnlyInstances, readOnlyInstances_);
      DARABONBA_PTR_FROM_JSON(ReadWeight, readWeight_);
      DARABONBA_PTR_FROM_JSON(RemainDays, remainDays_);
    };
    DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance() = default ;
    DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance(const DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance &) = default ;
    DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance(DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance &&) = default ;
    DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance() = default ;
    DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance& operator=(const DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance &) = default ;
    DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance& operator=(DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectUrl_ != nullptr
        && this->DBInstanceId_ != nullptr && this->DBInstanceStatus_ != nullptr && this->dbInstType_ != nullptr && this->dmInstanceId_ != nullptr && this->engine_ != nullptr
        && this->engineVersion_ != nullptr && this->expireTime_ != nullptr && this->networkType_ != nullptr && this->payType_ != nullptr && this->port_ != nullptr
        && this->rdsInstType_ != nullptr && this->readOnlyInstances_ != nullptr && this->readWeight_ != nullptr && this->remainDays_ != nullptr; };
    // connectUrl Field Functions 
    bool hasConnectUrl() const { return this->connectUrl_ != nullptr;};
    void deleteConnectUrl() { this->connectUrl_ = nullptr;};
    inline string connectUrl() const { DARABONBA_PTR_GET_DEFAULT(connectUrl_, "") };
    inline DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance& setConnectUrl(string connectUrl) { DARABONBA_PTR_SET_VALUE(connectUrl_, connectUrl) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceStatus Field Functions 
    bool hasDBInstanceStatus() const { return this->DBInstanceStatus_ != nullptr;};
    void deleteDBInstanceStatus() { this->DBInstanceStatus_ = nullptr;};
    inline string DBInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatus_, "") };
    inline DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance& setDBInstanceStatus(string DBInstanceStatus) { DARABONBA_PTR_SET_VALUE(DBInstanceStatus_, DBInstanceStatus) };


    // dbInstType Field Functions 
    bool hasDbInstType() const { return this->dbInstType_ != nullptr;};
    void deleteDbInstType() { this->dbInstType_ = nullptr;};
    inline string dbInstType() const { DARABONBA_PTR_GET_DEFAULT(dbInstType_, "") };
    inline DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance& setDbInstType(string dbInstType) { DARABONBA_PTR_SET_VALUE(dbInstType_, dbInstType) };


    // dmInstanceId Field Functions 
    bool hasDmInstanceId() const { return this->dmInstanceId_ != nullptr;};
    void deleteDmInstanceId() { this->dmInstanceId_ = nullptr;};
    inline string dmInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dmInstanceId_, "") };
    inline DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance& setDmInstanceId(string dmInstanceId) { DARABONBA_PTR_SET_VALUE(dmInstanceId_, dmInstanceId) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // rdsInstType Field Functions 
    bool hasRdsInstType() const { return this->rdsInstType_ != nullptr;};
    void deleteRdsInstType() { this->rdsInstType_ = nullptr;};
    inline string rdsInstType() const { DARABONBA_PTR_GET_DEFAULT(rdsInstType_, "") };
    inline DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance& setRdsInstType(string rdsInstType) { DARABONBA_PTR_SET_VALUE(rdsInstType_, rdsInstType) };


    // readOnlyInstances Field Functions 
    bool hasReadOnlyInstances() const { return this->readOnlyInstances_ != nullptr;};
    void deleteReadOnlyInstances() { this->readOnlyInstances_ = nullptr;};
    inline const Models::DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances & readOnlyInstances() const { DARABONBA_PTR_GET_CONST(readOnlyInstances_, Models::DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances) };
    inline Models::DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances readOnlyInstances() { DARABONBA_PTR_GET(readOnlyInstances_, Models::DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances) };
    inline DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance& setReadOnlyInstances(const Models::DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances & readOnlyInstances) { DARABONBA_PTR_SET_VALUE(readOnlyInstances_, readOnlyInstances) };
    inline DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance& setReadOnlyInstances(Models::DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances && readOnlyInstances) { DARABONBA_PTR_SET_RVALUE(readOnlyInstances_, readOnlyInstances) };


    // readWeight Field Functions 
    bool hasReadWeight() const { return this->readWeight_ != nullptr;};
    void deleteReadWeight() { this->readWeight_ = nullptr;};
    inline int32_t readWeight() const { DARABONBA_PTR_GET_DEFAULT(readWeight_, 0) };
    inline DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance& setReadWeight(int32_t readWeight) { DARABONBA_PTR_SET_VALUE(readWeight_, readWeight) };


    // remainDays Field Functions 
    bool hasRemainDays() const { return this->remainDays_ != nullptr;};
    void deleteRemainDays() { this->remainDays_ = nullptr;};
    inline int32_t remainDays() const { DARABONBA_PTR_GET_DEFAULT(remainDays_, 0) };
    inline DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance& setRemainDays(int32_t remainDays) { DARABONBA_PTR_SET_VALUE(remainDays_, remainDays) };


  protected:
    // Indicates the endpoint that is used to connect to an ApsaraDB RDS for MySQL instance that is used to store the data of the specified database.
    std::shared_ptr<string> connectUrl_ = nullptr;
    // Indicates the ID of the ApsaraDB RDS for MySQL instance that is used to store the data of the specified database.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // Indicates the state of the ApsaraDB RDS for MySQL instance that is used to store the data of the specified database. Valid values:
    // 
    // *   **0**: The ApsaraDB RDS for MySQL instance is being created.
    // *   **1**: The ApsaraDB RDS for MySQL instance is running.
    // *   **3**: The ApsaraDB RDS for MySQL instance is being deleted.
    // *   **5**: The ApsaraDB RDS for MySQL instance is being restarted.
    // *   **6**: The ApsaraDB RDS for MySQL instance is being upgraded or downgraded.
    // *   **7**: The ApsaraDB RDS for MySQL instance is being backed up.
    // *   **8**: The network type of the ApsaraDB RDS for MySQL instance is being changed.
    // *   **9**: The ApsaraDB RDS for MySQL instance is being migrated.
    // *   **11**: The data of the ApsaraDB RDS for MySQL instance is being migrated.
    // *   **12**: A disaster-recovery instance is being generated.
    // *   **13**: Data is being imported to the ApsaraDB RDS for MySQL instance.
    // *   **14**: Data is being imported to the ApsaraDB RDS for MySQL instance from an another ApsaraDB RDS for MySQL instance.
    // *   **15**: A failover is being performed.
    // *   **16**: A temporary instance is being created.
    // *   **17**: A network is being created for the ApsaraDB RDS for MySQL instance.
    // *   **18**: The ApsaraDB RDS for MySQL instance is being cloned.
    // *   **19**: The link is being changed.
    // *   **20**: The read-only instances of the ApsaraDB RDS for MySQL instance are being migrated.
    std::shared_ptr<string> DBInstanceStatus_ = nullptr;
    // Indicates the type of the ApsaraDB RDS for MySQL instance that is used to store the data of the specified database. The value is set to RDS.
    std::shared_ptr<string> dbInstType_ = nullptr;
    // Indicates the ID of a resource.
    std::shared_ptr<string> dmInstanceId_ = nullptr;
    // Indicates the engine of the ApsaraDB RDS for MySQL instance that is used to store the data of the specified database.
    std::shared_ptr<string> engine_ = nullptr;
    // Indicates the engine version of the ApsaraDB RDS for MySQL instance that is used to store the data of the specified database.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // Indicates the point in time when the ApsaraDB RDS for MySQL instance that is used to store the data of the specified database expires.
    std::shared_ptr<string> expireTime_ = nullptr;
    // Indicates the network type of the ApsaraDB RDS for MySQL instance.
    std::shared_ptr<string> networkType_ = nullptr;
    // Indicates the billing method of the ApsaraDB RDS for MySQL instance that is used to store the data of the specified database. Valid values:
    // 
    // *   **drdsPre**: The instance uses the subscription billing method.
    // *   **drdsPost**: The instance uses the pay-as-you-go billing method.
    std::shared_ptr<string> payType_ = nullptr;
    // Indicates the port that is used to connect to the ApsaraDB RDS for MySQL instance that is used to store the data of the specified database.
    std::shared_ptr<int32_t> port_ = nullptr;
    // Indicates whether the ApsaraDB RDS for MySQL instance that is used to store the data of the specified database is a primary instance or a read-only instance.
    // 
    // *   **Primary**: The instance is a primary instance.
    // *   **Readonly**: The instance is a read-only instance.
    std::shared_ptr<string> rdsInstType_ = nullptr;
    // Indicates information about the read-only instances of the ApsaraDB RDS for MySQL instance that is used to store the data of the specified database.
    std::shared_ptr<Models::DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances> readOnlyInstances_ = nullptr;
    // Indicates the read weight of the read-only instance.
    std::shared_ptr<int32_t> readWeight_ = nullptr;
    // Indicates the number of remaining days before a subscription instance expires.
    std::shared_ptr<int32_t> remainDays_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
