// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSDBINSTANCERESPONSEBODYDBINSTANCEREADONLYINSTANCESREADONLYINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSDBINSTANCERESPONSEBODYDBINSTANCEREADONLYINSTANCESREADONLYINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance& obj) { 
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
      DARABONBA_PTR_TO_JSON(ReadWeight, readWeight_);
      DARABONBA_PTR_TO_JSON(RemainDays, remainDays_);
      DARABONBA_PTR_TO_JSON(VersionAction, versionAction_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance& obj) { 
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
      DARABONBA_PTR_FROM_JSON(ReadWeight, readWeight_);
      DARABONBA_PTR_FROM_JSON(RemainDays, remainDays_);
      DARABONBA_PTR_FROM_JSON(VersionAction, versionAction_);
    };
    DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance() = default ;
    DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance(const DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance &) = default ;
    DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance(DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance &&) = default ;
    DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance() = default ;
    DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance& operator=(const DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance &) = default ;
    DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance& operator=(DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectUrl_ != nullptr
        && this->DBInstanceId_ != nullptr && this->DBInstanceStatus_ != nullptr && this->dbInstType_ != nullptr && this->dmInstanceId_ != nullptr && this->engine_ != nullptr
        && this->engineVersion_ != nullptr && this->expireTime_ != nullptr && this->networkType_ != nullptr && this->payType_ != nullptr && this->port_ != nullptr
        && this->rdsInstType_ != nullptr && this->readWeight_ != nullptr && this->remainDays_ != nullptr && this->versionAction_ != nullptr; };
    // connectUrl Field Functions 
    bool hasConnectUrl() const { return this->connectUrl_ != nullptr;};
    void deleteConnectUrl() { this->connectUrl_ = nullptr;};
    inline string connectUrl() const { DARABONBA_PTR_GET_DEFAULT(connectUrl_, "") };
    inline DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance& setConnectUrl(string connectUrl) { DARABONBA_PTR_SET_VALUE(connectUrl_, connectUrl) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceStatus Field Functions 
    bool hasDBInstanceStatus() const { return this->DBInstanceStatus_ != nullptr;};
    void deleteDBInstanceStatus() { this->DBInstanceStatus_ = nullptr;};
    inline string DBInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatus_, "") };
    inline DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance& setDBInstanceStatus(string DBInstanceStatus) { DARABONBA_PTR_SET_VALUE(DBInstanceStatus_, DBInstanceStatus) };


    // dbInstType Field Functions 
    bool hasDbInstType() const { return this->dbInstType_ != nullptr;};
    void deleteDbInstType() { this->dbInstType_ = nullptr;};
    inline string dbInstType() const { DARABONBA_PTR_GET_DEFAULT(dbInstType_, "") };
    inline DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance& setDbInstType(string dbInstType) { DARABONBA_PTR_SET_VALUE(dbInstType_, dbInstType) };


    // dmInstanceId Field Functions 
    bool hasDmInstanceId() const { return this->dmInstanceId_ != nullptr;};
    void deleteDmInstanceId() { this->dmInstanceId_ = nullptr;};
    inline string dmInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dmInstanceId_, "") };
    inline DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance& setDmInstanceId(string dmInstanceId) { DARABONBA_PTR_SET_VALUE(dmInstanceId_, dmInstanceId) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // rdsInstType Field Functions 
    bool hasRdsInstType() const { return this->rdsInstType_ != nullptr;};
    void deleteRdsInstType() { this->rdsInstType_ = nullptr;};
    inline string rdsInstType() const { DARABONBA_PTR_GET_DEFAULT(rdsInstType_, "") };
    inline DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance& setRdsInstType(string rdsInstType) { DARABONBA_PTR_SET_VALUE(rdsInstType_, rdsInstType) };


    // readWeight Field Functions 
    bool hasReadWeight() const { return this->readWeight_ != nullptr;};
    void deleteReadWeight() { this->readWeight_ = nullptr;};
    inline int32_t readWeight() const { DARABONBA_PTR_GET_DEFAULT(readWeight_, 0) };
    inline DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance& setReadWeight(int32_t readWeight) { DARABONBA_PTR_SET_VALUE(readWeight_, readWeight) };


    // remainDays Field Functions 
    bool hasRemainDays() const { return this->remainDays_ != nullptr;};
    void deleteRemainDays() { this->remainDays_ = nullptr;};
    inline string remainDays() const { DARABONBA_PTR_GET_DEFAULT(remainDays_, "") };
    inline DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance& setRemainDays(string remainDays) { DARABONBA_PTR_SET_VALUE(remainDays_, remainDays) };


    // versionAction Field Functions 
    bool hasVersionAction() const { return this->versionAction_ != nullptr;};
    void deleteVersionAction() { this->versionAction_ = nullptr;};
    inline int32_t versionAction() const { DARABONBA_PTR_GET_DEFAULT(versionAction_, 0) };
    inline DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance& setVersionAction(int32_t versionAction) { DARABONBA_PTR_SET_VALUE(versionAction_, versionAction) };


  protected:
    // The URL used to connect to the read-only instance.
    std::shared_ptr<string> connectUrl_ = nullptr;
    // The ID of the read-only instance.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The state of the read-only instance.
    std::shared_ptr<string> DBInstanceStatus_ = nullptr;
    // The role of the read-only instance.
    std::shared_ptr<string> dbInstType_ = nullptr;
    // The ID of the resource.
    std::shared_ptr<string> dmInstanceId_ = nullptr;
    // The engine of the database that is run on the read-only instance.
    std::shared_ptr<string> engine_ = nullptr;
    // The engine version of the database that is run on the read-only instance.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // The timestamp that indicates when the read-only instance expires.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The network type of the read-only instance.
    std::shared_ptr<string> networkType_ = nullptr;
    // The billing method of the read-only instance.
    std::shared_ptr<string> payType_ = nullptr;
    // The port used to connect to the read-only instance.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The type of the ApsaraDB RDS for MySQL instance.
    std::shared_ptr<string> rdsInstType_ = nullptr;
    // The read ratio of the read-only instance.
    std::shared_ptr<int32_t> readWeight_ = nullptr;
    // The number of remaining days before the read-only instance expires.
    std::shared_ptr<string> remainDays_ = nullptr;
    // This parameter is unavailable for read-only instances.
    std::shared_ptr<int32_t> versionAction_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
