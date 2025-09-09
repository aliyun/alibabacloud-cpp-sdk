// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSDBINSTANCERESPONSEBODYDBINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSDBINSTANCERESPONSEBODYDBINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsDbInstanceResponseBodyDbInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsDbInstanceResponseBodyDbInstance& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDrdsDbInstanceResponseBodyDbInstance& obj) { 
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
    DescribeDrdsDbInstanceResponseBodyDbInstance() = default ;
    DescribeDrdsDbInstanceResponseBodyDbInstance(const DescribeDrdsDbInstanceResponseBodyDbInstance &) = default ;
    DescribeDrdsDbInstanceResponseBodyDbInstance(DescribeDrdsDbInstanceResponseBodyDbInstance &&) = default ;
    DescribeDrdsDbInstanceResponseBodyDbInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsDbInstanceResponseBodyDbInstance() = default ;
    DescribeDrdsDbInstanceResponseBodyDbInstance& operator=(const DescribeDrdsDbInstanceResponseBodyDbInstance &) = default ;
    DescribeDrdsDbInstanceResponseBodyDbInstance& operator=(DescribeDrdsDbInstanceResponseBodyDbInstance &&) = default ;
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
    inline DescribeDrdsDbInstanceResponseBodyDbInstance& setConnectUrl(string connectUrl) { DARABONBA_PTR_SET_VALUE(connectUrl_, connectUrl) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDrdsDbInstanceResponseBodyDbInstance& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceStatus Field Functions 
    bool hasDBInstanceStatus() const { return this->DBInstanceStatus_ != nullptr;};
    void deleteDBInstanceStatus() { this->DBInstanceStatus_ = nullptr;};
    inline string DBInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatus_, "") };
    inline DescribeDrdsDbInstanceResponseBodyDbInstance& setDBInstanceStatus(string DBInstanceStatus) { DARABONBA_PTR_SET_VALUE(DBInstanceStatus_, DBInstanceStatus) };


    // dbInstType Field Functions 
    bool hasDbInstType() const { return this->dbInstType_ != nullptr;};
    void deleteDbInstType() { this->dbInstType_ = nullptr;};
    inline string dbInstType() const { DARABONBA_PTR_GET_DEFAULT(dbInstType_, "") };
    inline DescribeDrdsDbInstanceResponseBodyDbInstance& setDbInstType(string dbInstType) { DARABONBA_PTR_SET_VALUE(dbInstType_, dbInstType) };


    // dmInstanceId Field Functions 
    bool hasDmInstanceId() const { return this->dmInstanceId_ != nullptr;};
    void deleteDmInstanceId() { this->dmInstanceId_ = nullptr;};
    inline string dmInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dmInstanceId_, "") };
    inline DescribeDrdsDbInstanceResponseBodyDbInstance& setDmInstanceId(string dmInstanceId) { DARABONBA_PTR_SET_VALUE(dmInstanceId_, dmInstanceId) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDrdsDbInstanceResponseBodyDbInstance& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeDrdsDbInstanceResponseBodyDbInstance& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDrdsDbInstanceResponseBodyDbInstance& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeDrdsDbInstanceResponseBodyDbInstance& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDrdsDbInstanceResponseBodyDbInstance& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeDrdsDbInstanceResponseBodyDbInstance& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // rdsInstType Field Functions 
    bool hasRdsInstType() const { return this->rdsInstType_ != nullptr;};
    void deleteRdsInstType() { this->rdsInstType_ = nullptr;};
    inline string rdsInstType() const { DARABONBA_PTR_GET_DEFAULT(rdsInstType_, "") };
    inline DescribeDrdsDbInstanceResponseBodyDbInstance& setRdsInstType(string rdsInstType) { DARABONBA_PTR_SET_VALUE(rdsInstType_, rdsInstType) };


    // readOnlyInstances Field Functions 
    bool hasReadOnlyInstances() const { return this->readOnlyInstances_ != nullptr;};
    void deleteReadOnlyInstances() { this->readOnlyInstances_ = nullptr;};
    inline const Models::DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances & readOnlyInstances() const { DARABONBA_PTR_GET_CONST(readOnlyInstances_, Models::DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances) };
    inline Models::DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances readOnlyInstances() { DARABONBA_PTR_GET(readOnlyInstances_, Models::DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances) };
    inline DescribeDrdsDbInstanceResponseBodyDbInstance& setReadOnlyInstances(const Models::DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances & readOnlyInstances) { DARABONBA_PTR_SET_VALUE(readOnlyInstances_, readOnlyInstances) };
    inline DescribeDrdsDbInstanceResponseBodyDbInstance& setReadOnlyInstances(Models::DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances && readOnlyInstances) { DARABONBA_PTR_SET_RVALUE(readOnlyInstances_, readOnlyInstances) };


    // readWeight Field Functions 
    bool hasReadWeight() const { return this->readWeight_ != nullptr;};
    void deleteReadWeight() { this->readWeight_ = nullptr;};
    inline int32_t readWeight() const { DARABONBA_PTR_GET_DEFAULT(readWeight_, 0) };
    inline DescribeDrdsDbInstanceResponseBodyDbInstance& setReadWeight(int32_t readWeight) { DARABONBA_PTR_SET_VALUE(readWeight_, readWeight) };


    // remainDays Field Functions 
    bool hasRemainDays() const { return this->remainDays_ != nullptr;};
    void deleteRemainDays() { this->remainDays_ = nullptr;};
    inline string remainDays() const { DARABONBA_PTR_GET_DEFAULT(remainDays_, "") };
    inline DescribeDrdsDbInstanceResponseBodyDbInstance& setRemainDays(string remainDays) { DARABONBA_PTR_SET_VALUE(remainDays_, remainDays) };


  protected:
    // The URL used to connect to the custom ApsaraDB RDS for MySQL instance.
    std::shared_ptr<string> connectUrl_ = nullptr;
    // The ID of the ApsaraDB RDS for MySQL instance.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The state of the instance.
    std::shared_ptr<string> DBInstanceStatus_ = nullptr;
    // The role of the instance. Valid values:
    // 
    // *   **Primary**: The instance is a primary instance.
    // *   **ReadOnly**: The instance is a read-only instance.
    std::shared_ptr<string> dbInstType_ = nullptr;
    // The ID of the resource.
    std::shared_ptr<string> dmInstanceId_ = nullptr;
    // The engine of the database that is run on the instance. Valid value: **MySQL**.
    std::shared_ptr<string> engine_ = nullptr;
    // The engine version of the database that is run on the instance. Valid values: **5.7**.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // The time when the custom ApsaraDB RDS for MySQL instance expires. The value of this parameter is a UNIX timestamp. Unit: seconds.
    // 
    // >  This parameter is returned only when the custom ApsaraDB RDS for MySQL instance is a subscription instance.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The type of the network. Valid values: **VPC**.
    std::shared_ptr<string> networkType_ = nullptr;
    // The billing method of the custom ApsaraDB RDS for MySQL instance. Valid values:
    // 
    // *   **Prepaid**: subscription
    // *   **Postaid**: pay-as-you-go
    std::shared_ptr<string> payType_ = nullptr;
    // The port used to connect to the custom ApsaraDB RDS for MySQL instance.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The type of the instance.
    std::shared_ptr<string> rdsInstType_ = nullptr;
    // The list of read-only ApsaraDB RDS for MySQL instances.
    std::shared_ptr<Models::DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances> readOnlyInstances_ = nullptr;
    // The read ratio of the instance.
    std::shared_ptr<int32_t> readWeight_ = nullptr;
    // The number of remaining days before the instance expires.
    std::shared_ptr<string> remainDays_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
