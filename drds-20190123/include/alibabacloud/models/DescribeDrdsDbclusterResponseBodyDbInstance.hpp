// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSDBCLUSTERRESPONSEBODYDBINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSDBCLUSTERRESPONSEBODYDBINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes.hpp>
#include <alibabacloud/models/DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsDBClusterResponseBodyDbInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsDBClusterResponseBodyDbInstance& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_TO_JSON(DBNodes, DBNodes_);
      DARABONBA_PTR_TO_JSON(DbInstType, dbInstType_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RdsInstType, rdsInstType_);
      DARABONBA_PTR_TO_JSON(ReadMode, readMode_);
      DARABONBA_PTR_TO_JSON(RemainDays, remainDays_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsDBClusterResponseBodyDbInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(DBNodes, DBNodes_);
      DARABONBA_PTR_FROM_JSON(DbInstType, dbInstType_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RdsInstType, rdsInstType_);
      DARABONBA_PTR_FROM_JSON(ReadMode, readMode_);
      DARABONBA_PTR_FROM_JSON(RemainDays, remainDays_);
    };
    DescribeDrdsDBClusterResponseBodyDbInstance() = default ;
    DescribeDrdsDBClusterResponseBodyDbInstance(const DescribeDrdsDBClusterResponseBodyDbInstance &) = default ;
    DescribeDrdsDBClusterResponseBodyDbInstance(DescribeDrdsDBClusterResponseBodyDbInstance &&) = default ;
    DescribeDrdsDBClusterResponseBodyDbInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsDBClusterResponseBodyDbInstance() = default ;
    DescribeDrdsDBClusterResponseBodyDbInstance& operator=(const DescribeDrdsDBClusterResponseBodyDbInstance &) = default ;
    DescribeDrdsDBClusterResponseBodyDbInstance& operator=(DescribeDrdsDBClusterResponseBodyDbInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceId_ != nullptr
        && this->DBInstanceStatus_ != nullptr && this->DBNodes_ != nullptr && this->dbInstType_ != nullptr && this->endpoints_ != nullptr && this->engine_ != nullptr
        && this->engineVersion_ != nullptr && this->expireTime_ != nullptr && this->networkType_ != nullptr && this->payType_ != nullptr && this->port_ != nullptr
        && this->rdsInstType_ != nullptr && this->readMode_ != nullptr && this->remainDays_ != nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDrdsDBClusterResponseBodyDbInstance& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceStatus Field Functions 
    bool hasDBInstanceStatus() const { return this->DBInstanceStatus_ != nullptr;};
    void deleteDBInstanceStatus() { this->DBInstanceStatus_ = nullptr;};
    inline string DBInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatus_, "") };
    inline DescribeDrdsDBClusterResponseBodyDbInstance& setDBInstanceStatus(string DBInstanceStatus) { DARABONBA_PTR_SET_VALUE(DBInstanceStatus_, DBInstanceStatus) };


    // DBNodes Field Functions 
    bool hasDBNodes() const { return this->DBNodes_ != nullptr;};
    void deleteDBNodes() { this->DBNodes_ = nullptr;};
    inline const Models::DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes & DBNodes() const { DARABONBA_PTR_GET_CONST(DBNodes_, Models::DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes) };
    inline Models::DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes DBNodes() { DARABONBA_PTR_GET(DBNodes_, Models::DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes) };
    inline DescribeDrdsDBClusterResponseBodyDbInstance& setDBNodes(const Models::DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes & DBNodes) { DARABONBA_PTR_SET_VALUE(DBNodes_, DBNodes) };
    inline DescribeDrdsDBClusterResponseBodyDbInstance& setDBNodes(Models::DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes && DBNodes) { DARABONBA_PTR_SET_RVALUE(DBNodes_, DBNodes) };


    // dbInstType Field Functions 
    bool hasDbInstType() const { return this->dbInstType_ != nullptr;};
    void deleteDbInstType() { this->dbInstType_ = nullptr;};
    inline string dbInstType() const { DARABONBA_PTR_GET_DEFAULT(dbInstType_, "") };
    inline DescribeDrdsDBClusterResponseBodyDbInstance& setDbInstType(string dbInstType) { DARABONBA_PTR_SET_VALUE(dbInstType_, dbInstType) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const Models::DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints & endpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, Models::DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints) };
    inline Models::DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints endpoints() { DARABONBA_PTR_GET(endpoints_, Models::DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints) };
    inline DescribeDrdsDBClusterResponseBodyDbInstance& setEndpoints(const Models::DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline DescribeDrdsDBClusterResponseBodyDbInstance& setEndpoints(Models::DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDrdsDBClusterResponseBodyDbInstance& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeDrdsDBClusterResponseBodyDbInstance& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDrdsDBClusterResponseBodyDbInstance& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeDrdsDBClusterResponseBodyDbInstance& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDrdsDBClusterResponseBodyDbInstance& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeDrdsDBClusterResponseBodyDbInstance& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // rdsInstType Field Functions 
    bool hasRdsInstType() const { return this->rdsInstType_ != nullptr;};
    void deleteRdsInstType() { this->rdsInstType_ = nullptr;};
    inline string rdsInstType() const { DARABONBA_PTR_GET_DEFAULT(rdsInstType_, "") };
    inline DescribeDrdsDBClusterResponseBodyDbInstance& setRdsInstType(string rdsInstType) { DARABONBA_PTR_SET_VALUE(rdsInstType_, rdsInstType) };


    // readMode Field Functions 
    bool hasReadMode() const { return this->readMode_ != nullptr;};
    void deleteReadMode() { this->readMode_ = nullptr;};
    inline string readMode() const { DARABONBA_PTR_GET_DEFAULT(readMode_, "") };
    inline DescribeDrdsDBClusterResponseBodyDbInstance& setReadMode(string readMode) { DARABONBA_PTR_SET_VALUE(readMode_, readMode) };


    // remainDays Field Functions 
    bool hasRemainDays() const { return this->remainDays_ != nullptr;};
    void deleteRemainDays() { this->remainDays_ = nullptr;};
    inline string remainDays() const { DARABONBA_PTR_GET_DEFAULT(remainDays_, "") };
    inline DescribeDrdsDBClusterResponseBodyDbInstance& setRemainDays(string remainDays) { DARABONBA_PTR_SET_VALUE(remainDays_, remainDays) };


  protected:
    // The ID of the PolarDB cluster.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The status of the PolarDB instance.
    std::shared_ptr<string> DBInstanceStatus_ = nullptr;
    // The information about the nodes in the PolarDB Cluster.
    std::shared_ptr<Models::DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes> DBNodes_ = nullptr;
    // The type of storage used by the DRDS database.
    std::shared_ptr<string> dbInstType_ = nullptr;
    // The endpoint of the PolarDB read /write splitting endpoint
    std::shared_ptr<Models::DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints> endpoints_ = nullptr;
    // The type of the DRDS database storage engine.
    std::shared_ptr<string> engine_ = nullptr;
    // The version of the DRDS database storage engine.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // The time when the PolarDB cluster expires.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The network type of the PolarDB cluster.
    std::shared_ptr<string> networkType_ = nullptr;
    // The billing method of the PolarDB cluster.
    std::shared_ptr<string> payType_ = nullptr;
    // The PolarDB access port.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The type of RDS instance. PolarDB cluster does not support this parameter.
    std::shared_ptr<string> rdsInstType_ = nullptr;
    // This parameter specifies the Read mode when the database storage type is PolarDB.
    // 
    // Valid values:
    // 
    // *   **DEFAULT**: the default mode (that is, all read traffic is sent to the PolarDB read /write node).
    // *   **CUSTOM**: Custom mode (you can customize the ratio of traffic sent to read /write nodes and read-only nodes).
    // *   **BALANCE**: read balancing mode (the read traffic is automatically distributed by the read load module of the PolarDB cluster, which can also be understood as the read traffic being evenly distributed to each node).
    std::shared_ptr<string> readMode_ = nullptr;
    // The number of days remaining on the PolarDB for MySQL instance.
    std::shared_ptr<string> remainDays_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
