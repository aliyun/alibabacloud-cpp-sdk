// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERMIGRATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERMIGRATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterMigrationResponseBodyDBClusterEndpointList.hpp>
#include <alibabacloud/models/DescribeDBClusterMigrationResponseBodyRdsEndpointList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterMigrationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterMigrationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DBClusterEndpointList, DBClusterEndpointList_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBClusterReadWriteMode, DBClusterReadWriteMode_);
      DARABONBA_PTR_TO_JSON(DelayedSeconds, delayedSeconds_);
      DARABONBA_PTR_TO_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(MigrationStatus, migrationStatus_);
      DARABONBA_PTR_TO_JSON(RdsEndpointList, rdsEndpointList_);
      DARABONBA_PTR_TO_JSON(RdsReadWriteMode, rdsReadWriteMode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceRDSDBInstanceId, sourceRDSDBInstanceId_);
      DARABONBA_PTR_TO_JSON(SrcDbType, srcDbType_);
      DARABONBA_PTR_TO_JSON(Topologies, topologies_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterMigrationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DBClusterEndpointList, DBClusterEndpointList_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBClusterReadWriteMode, DBClusterReadWriteMode_);
      DARABONBA_PTR_FROM_JSON(DelayedSeconds, delayedSeconds_);
      DARABONBA_PTR_FROM_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(MigrationStatus, migrationStatus_);
      DARABONBA_PTR_FROM_JSON(RdsEndpointList, rdsEndpointList_);
      DARABONBA_PTR_FROM_JSON(RdsReadWriteMode, rdsReadWriteMode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceRDSDBInstanceId, sourceRDSDBInstanceId_);
      DARABONBA_PTR_FROM_JSON(SrcDbType, srcDbType_);
      DARABONBA_PTR_FROM_JSON(Topologies, topologies_);
    };
    DescribeDBClusterMigrationResponseBody() = default ;
    DescribeDBClusterMigrationResponseBody(const DescribeDBClusterMigrationResponseBody &) = default ;
    DescribeDBClusterMigrationResponseBody(DescribeDBClusterMigrationResponseBody &&) = default ;
    DescribeDBClusterMigrationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterMigrationResponseBody() = default ;
    DescribeDBClusterMigrationResponseBody& operator=(const DescribeDBClusterMigrationResponseBody &) = default ;
    DescribeDBClusterMigrationResponseBody& operator=(DescribeDBClusterMigrationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->DBClusterEndpointList_ != nullptr && this->DBClusterId_ != nullptr && this->DBClusterReadWriteMode_ != nullptr && this->delayedSeconds_ != nullptr && this->dtsInstanceId_ != nullptr
        && this->expiredTime_ != nullptr && this->migrationStatus_ != nullptr && this->rdsEndpointList_ != nullptr && this->rdsReadWriteMode_ != nullptr && this->requestId_ != nullptr
        && this->sourceRDSDBInstanceId_ != nullptr && this->srcDbType_ != nullptr && this->topologies_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline DescribeDBClusterMigrationResponseBody& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // DBClusterEndpointList Field Functions 
    bool hasDBClusterEndpointList() const { return this->DBClusterEndpointList_ != nullptr;};
    void deleteDBClusterEndpointList() { this->DBClusterEndpointList_ = nullptr;};
    inline const vector<DescribeDBClusterMigrationResponseBodyDBClusterEndpointList> & DBClusterEndpointList() const { DARABONBA_PTR_GET_CONST(DBClusterEndpointList_, vector<DescribeDBClusterMigrationResponseBodyDBClusterEndpointList>) };
    inline vector<DescribeDBClusterMigrationResponseBodyDBClusterEndpointList> DBClusterEndpointList() { DARABONBA_PTR_GET(DBClusterEndpointList_, vector<DescribeDBClusterMigrationResponseBodyDBClusterEndpointList>) };
    inline DescribeDBClusterMigrationResponseBody& setDBClusterEndpointList(const vector<DescribeDBClusterMigrationResponseBodyDBClusterEndpointList> & DBClusterEndpointList) { DARABONBA_PTR_SET_VALUE(DBClusterEndpointList_, DBClusterEndpointList) };
    inline DescribeDBClusterMigrationResponseBody& setDBClusterEndpointList(vector<DescribeDBClusterMigrationResponseBodyDBClusterEndpointList> && DBClusterEndpointList) { DARABONBA_PTR_SET_RVALUE(DBClusterEndpointList_, DBClusterEndpointList) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBClusterMigrationResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBClusterReadWriteMode Field Functions 
    bool hasDBClusterReadWriteMode() const { return this->DBClusterReadWriteMode_ != nullptr;};
    void deleteDBClusterReadWriteMode() { this->DBClusterReadWriteMode_ = nullptr;};
    inline string DBClusterReadWriteMode() const { DARABONBA_PTR_GET_DEFAULT(DBClusterReadWriteMode_, "") };
    inline DescribeDBClusterMigrationResponseBody& setDBClusterReadWriteMode(string DBClusterReadWriteMode) { DARABONBA_PTR_SET_VALUE(DBClusterReadWriteMode_, DBClusterReadWriteMode) };


    // delayedSeconds Field Functions 
    bool hasDelayedSeconds() const { return this->delayedSeconds_ != nullptr;};
    void deleteDelayedSeconds() { this->delayedSeconds_ = nullptr;};
    inline int32_t delayedSeconds() const { DARABONBA_PTR_GET_DEFAULT(delayedSeconds_, 0) };
    inline DescribeDBClusterMigrationResponseBody& setDelayedSeconds(int32_t delayedSeconds) { DARABONBA_PTR_SET_VALUE(delayedSeconds_, delayedSeconds) };


    // dtsInstanceId Field Functions 
    bool hasDtsInstanceId() const { return this->dtsInstanceId_ != nullptr;};
    void deleteDtsInstanceId() { this->dtsInstanceId_ = nullptr;};
    inline string dtsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceId_, "") };
    inline DescribeDBClusterMigrationResponseBody& setDtsInstanceId(string dtsInstanceId) { DARABONBA_PTR_SET_VALUE(dtsInstanceId_, dtsInstanceId) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeDBClusterMigrationResponseBody& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // migrationStatus Field Functions 
    bool hasMigrationStatus() const { return this->migrationStatus_ != nullptr;};
    void deleteMigrationStatus() { this->migrationStatus_ = nullptr;};
    inline string migrationStatus() const { DARABONBA_PTR_GET_DEFAULT(migrationStatus_, "") };
    inline DescribeDBClusterMigrationResponseBody& setMigrationStatus(string migrationStatus) { DARABONBA_PTR_SET_VALUE(migrationStatus_, migrationStatus) };


    // rdsEndpointList Field Functions 
    bool hasRdsEndpointList() const { return this->rdsEndpointList_ != nullptr;};
    void deleteRdsEndpointList() { this->rdsEndpointList_ = nullptr;};
    inline const vector<DescribeDBClusterMigrationResponseBodyRdsEndpointList> & rdsEndpointList() const { DARABONBA_PTR_GET_CONST(rdsEndpointList_, vector<DescribeDBClusterMigrationResponseBodyRdsEndpointList>) };
    inline vector<DescribeDBClusterMigrationResponseBodyRdsEndpointList> rdsEndpointList() { DARABONBA_PTR_GET(rdsEndpointList_, vector<DescribeDBClusterMigrationResponseBodyRdsEndpointList>) };
    inline DescribeDBClusterMigrationResponseBody& setRdsEndpointList(const vector<DescribeDBClusterMigrationResponseBodyRdsEndpointList> & rdsEndpointList) { DARABONBA_PTR_SET_VALUE(rdsEndpointList_, rdsEndpointList) };
    inline DescribeDBClusterMigrationResponseBody& setRdsEndpointList(vector<DescribeDBClusterMigrationResponseBodyRdsEndpointList> && rdsEndpointList) { DARABONBA_PTR_SET_RVALUE(rdsEndpointList_, rdsEndpointList) };


    // rdsReadWriteMode Field Functions 
    bool hasRdsReadWriteMode() const { return this->rdsReadWriteMode_ != nullptr;};
    void deleteRdsReadWriteMode() { this->rdsReadWriteMode_ = nullptr;};
    inline string rdsReadWriteMode() const { DARABONBA_PTR_GET_DEFAULT(rdsReadWriteMode_, "") };
    inline DescribeDBClusterMigrationResponseBody& setRdsReadWriteMode(string rdsReadWriteMode) { DARABONBA_PTR_SET_VALUE(rdsReadWriteMode_, rdsReadWriteMode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterMigrationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceRDSDBInstanceId Field Functions 
    bool hasSourceRDSDBInstanceId() const { return this->sourceRDSDBInstanceId_ != nullptr;};
    void deleteSourceRDSDBInstanceId() { this->sourceRDSDBInstanceId_ = nullptr;};
    inline string sourceRDSDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sourceRDSDBInstanceId_, "") };
    inline DescribeDBClusterMigrationResponseBody& setSourceRDSDBInstanceId(string sourceRDSDBInstanceId) { DARABONBA_PTR_SET_VALUE(sourceRDSDBInstanceId_, sourceRDSDBInstanceId) };


    // srcDbType Field Functions 
    bool hasSrcDbType() const { return this->srcDbType_ != nullptr;};
    void deleteSrcDbType() { this->srcDbType_ = nullptr;};
    inline string srcDbType() const { DARABONBA_PTR_GET_DEFAULT(srcDbType_, "") };
    inline DescribeDBClusterMigrationResponseBody& setSrcDbType(string srcDbType) { DARABONBA_PTR_SET_VALUE(srcDbType_, srcDbType) };


    // topologies Field Functions 
    bool hasTopologies() const { return this->topologies_ != nullptr;};
    void deleteTopologies() { this->topologies_ = nullptr;};
    inline string topologies() const { DARABONBA_PTR_GET_DEFAULT(topologies_, "") };
    inline DescribeDBClusterMigrationResponseBody& setTopologies(string topologies) { DARABONBA_PTR_SET_VALUE(topologies_, topologies) };


  protected:
    // The mode of the source ApsaraDB RDS instance. Valid values:
    // 
    // *   **rw**: read and write mode
    // *   **ro**: read-only mode
    std::shared_ptr<string> comment_ = nullptr;
    // The port number.
    std::shared_ptr<vector<DescribeDBClusterMigrationResponseBodyDBClusterEndpointList>> DBClusterEndpointList_ = nullptr;
    // The replication latency between the ApsaraDB RDS instance and the PolarDB cluster. Unit: seconds.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // Details about the endpoints.
    std::shared_ptr<string> DBClusterReadWriteMode_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<int32_t> delayedSeconds_ = nullptr;
    // The network type of the endpoint. Valid values:
    // 
    // *   **Public**: the public endpoint
    // *   **Private**: the internal endpoint (VPC)
    // *   **Inner**: the internal endpoint (classic network)
    std::shared_ptr<string> dtsInstanceId_ = nullptr;
    // The mode of the PolarDB cluster. Valid values:
    // 
    // *   **rw**: read and write mode
    // *   **ro**: read-only mode
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The endpoint.
    std::shared_ptr<string> migrationStatus_ = nullptr;
    // The endpoints of the ApsaraDB RDS instance.
    std::shared_ptr<vector<DescribeDBClusterMigrationResponseBodyRdsEndpointList>> rdsEndpointList_ = nullptr;
    // The ID of the synchronous task.
    std::shared_ptr<string> rdsReadWriteMode_ = nullptr;
    // The ID of the source ApsaraDB RDS instance.
    std::shared_ptr<string> requestId_ = nullptr;
    // The endpoints of the ApsaraDB RDS instance.
    std::shared_ptr<string> sourceRDSDBInstanceId_ = nullptr;
    // The type of the source database. Valid values:
    // 
    // - **PolarDBMySQL**: The source database is a PolarDB for MySQL database when the major version of your PolarDB cluster is upgraded.
    // - **RDS**: The source database is an ApsaraDB RDS database when data is migrated from ApsaraDB RDS to PolarDB for MySQL.
    std::shared_ptr<string> srcDbType_ = nullptr;
    // The migration state of the PolarDB cluster. Valid values:
    // 
    // *   **NO_MIGRATION**: No migration task is running.
    // *   **RDS2POLARDB_CLONING**: Data is being replicated.
    // *   **RDS2POLARDB_SYNCING**: Data is being replicated. During the replication, the PolarDB cluster is running in read-only mode and the source ApsaraDB RDS instance is running in read and write mode.
    // *   **SWITCHING**: Databases are being switched.
    // *   **POLARDB2RDS_SYNCING**: Databases are switched. The PolarDB cluster is running in read and write mode and the source ApsaraDB RDS instance is running in read-only mode. In this state, you can modify the endpoints for your applications.
    // *   **ROLLBACK**: The migration is being rolled back. After the rollback is complete, the value **RDS2POLARDB_SYNCING** is returned.
    // *   **CLOSING_MIGRATION**: The migration task is being terminated.
    std::shared_ptr<string> topologies_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
