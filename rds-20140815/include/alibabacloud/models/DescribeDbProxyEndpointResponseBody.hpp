// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBPROXYENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBPROXYENDPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBProxyEndpointResponseBodyDBProxyNodes.hpp>
#include <alibabacloud/models/DescribeDBProxyEndpointResponseBodyEndpointConnectItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBProxyEndpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBProxyEndpointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CausalConsistReadTimeout, causalConsistReadTimeout_);
      DARABONBA_PTR_TO_JSON(DBProxyConnectString, DBProxyConnectString_);
      DARABONBA_PTR_TO_JSON(DBProxyConnectStringNetType, DBProxyConnectStringNetType_);
      DARABONBA_PTR_TO_JSON(DBProxyConnectStringPort, DBProxyConnectStringPort_);
      DARABONBA_PTR_TO_JSON(DBProxyEndpointId, DBProxyEndpointId_);
      DARABONBA_PTR_TO_JSON(DBProxyEndpointMinSlaveCount, DBProxyEndpointMinSlaveCount_);
      DARABONBA_PTR_TO_JSON(DBProxyEngineType, DBProxyEngineType_);
      DARABONBA_PTR_TO_JSON(DBProxyFeatures, DBProxyFeatures_);
      DARABONBA_PTR_TO_JSON(DBProxyNodes, DBProxyNodes_);
      DARABONBA_PTR_TO_JSON(DbProxyEndpointAliases, dbProxyEndpointAliases_);
      DARABONBA_PTR_TO_JSON(DbProxyEndpointReadWriteMode, dbProxyEndpointReadWriteMode_);
      DARABONBA_PTR_TO_JSON(DbProxyEndpointVpcId, dbProxyEndpointVpcId_);
      DARABONBA_PTR_TO_JSON(DbProxyEndpointVswitchId, dbProxyEndpointVswitchId_);
      DARABONBA_PTR_TO_JSON(DbProxyEndpointZoneId, dbProxyEndpointZoneId_);
      DARABONBA_PTR_TO_JSON(EndpointConnectItems, endpointConnectItems_);
      DARABONBA_PTR_TO_JSON(ReadOnlyInstanceDistributionType, readOnlyInstanceDistributionType_);
      DARABONBA_PTR_TO_JSON(ReadOnlyInstanceMaxDelayTime, readOnlyInstanceMaxDelayTime_);
      DARABONBA_PTR_TO_JSON(ReadOnlyInstanceWeight, readOnlyInstanceWeight_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBProxyEndpointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CausalConsistReadTimeout, causalConsistReadTimeout_);
      DARABONBA_PTR_FROM_JSON(DBProxyConnectString, DBProxyConnectString_);
      DARABONBA_PTR_FROM_JSON(DBProxyConnectStringNetType, DBProxyConnectStringNetType_);
      DARABONBA_PTR_FROM_JSON(DBProxyConnectStringPort, DBProxyConnectStringPort_);
      DARABONBA_PTR_FROM_JSON(DBProxyEndpointId, DBProxyEndpointId_);
      DARABONBA_PTR_FROM_JSON(DBProxyEndpointMinSlaveCount, DBProxyEndpointMinSlaveCount_);
      DARABONBA_PTR_FROM_JSON(DBProxyEngineType, DBProxyEngineType_);
      DARABONBA_PTR_FROM_JSON(DBProxyFeatures, DBProxyFeatures_);
      DARABONBA_PTR_FROM_JSON(DBProxyNodes, DBProxyNodes_);
      DARABONBA_PTR_FROM_JSON(DbProxyEndpointAliases, dbProxyEndpointAliases_);
      DARABONBA_PTR_FROM_JSON(DbProxyEndpointReadWriteMode, dbProxyEndpointReadWriteMode_);
      DARABONBA_PTR_FROM_JSON(DbProxyEndpointVpcId, dbProxyEndpointVpcId_);
      DARABONBA_PTR_FROM_JSON(DbProxyEndpointVswitchId, dbProxyEndpointVswitchId_);
      DARABONBA_PTR_FROM_JSON(DbProxyEndpointZoneId, dbProxyEndpointZoneId_);
      DARABONBA_PTR_FROM_JSON(EndpointConnectItems, endpointConnectItems_);
      DARABONBA_PTR_FROM_JSON(ReadOnlyInstanceDistributionType, readOnlyInstanceDistributionType_);
      DARABONBA_PTR_FROM_JSON(ReadOnlyInstanceMaxDelayTime, readOnlyInstanceMaxDelayTime_);
      DARABONBA_PTR_FROM_JSON(ReadOnlyInstanceWeight, readOnlyInstanceWeight_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBProxyEndpointResponseBody() = default ;
    DescribeDBProxyEndpointResponseBody(const DescribeDBProxyEndpointResponseBody &) = default ;
    DescribeDBProxyEndpointResponseBody(DescribeDBProxyEndpointResponseBody &&) = default ;
    DescribeDBProxyEndpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBProxyEndpointResponseBody() = default ;
    DescribeDBProxyEndpointResponseBody& operator=(const DescribeDBProxyEndpointResponseBody &) = default ;
    DescribeDBProxyEndpointResponseBody& operator=(DescribeDBProxyEndpointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->causalConsistReadTimeout_ == nullptr
        && return this->DBProxyConnectString_ == nullptr && return this->DBProxyConnectStringNetType_ == nullptr && return this->DBProxyConnectStringPort_ == nullptr && return this->DBProxyEndpointId_ == nullptr && return this->DBProxyEndpointMinSlaveCount_ == nullptr
        && return this->DBProxyEngineType_ == nullptr && return this->DBProxyFeatures_ == nullptr && return this->DBProxyNodes_ == nullptr && return this->dbProxyEndpointAliases_ == nullptr && return this->dbProxyEndpointReadWriteMode_ == nullptr
        && return this->dbProxyEndpointVpcId_ == nullptr && return this->dbProxyEndpointVswitchId_ == nullptr && return this->dbProxyEndpointZoneId_ == nullptr && return this->endpointConnectItems_ == nullptr && return this->readOnlyInstanceDistributionType_ == nullptr
        && return this->readOnlyInstanceMaxDelayTime_ == nullptr && return this->readOnlyInstanceWeight_ == nullptr && return this->requestId_ == nullptr; };
    // causalConsistReadTimeout Field Functions 
    bool hasCausalConsistReadTimeout() const { return this->causalConsistReadTimeout_ != nullptr;};
    void deleteCausalConsistReadTimeout() { this->causalConsistReadTimeout_ = nullptr;};
    inline string causalConsistReadTimeout() const { DARABONBA_PTR_GET_DEFAULT(causalConsistReadTimeout_, "") };
    inline DescribeDBProxyEndpointResponseBody& setCausalConsistReadTimeout(string causalConsistReadTimeout) { DARABONBA_PTR_SET_VALUE(causalConsistReadTimeout_, causalConsistReadTimeout) };


    // DBProxyConnectString Field Functions 
    bool hasDBProxyConnectString() const { return this->DBProxyConnectString_ != nullptr;};
    void deleteDBProxyConnectString() { this->DBProxyConnectString_ = nullptr;};
    inline string DBProxyConnectString() const { DARABONBA_PTR_GET_DEFAULT(DBProxyConnectString_, "") };
    inline DescribeDBProxyEndpointResponseBody& setDBProxyConnectString(string DBProxyConnectString) { DARABONBA_PTR_SET_VALUE(DBProxyConnectString_, DBProxyConnectString) };


    // DBProxyConnectStringNetType Field Functions 
    bool hasDBProxyConnectStringNetType() const { return this->DBProxyConnectStringNetType_ != nullptr;};
    void deleteDBProxyConnectStringNetType() { this->DBProxyConnectStringNetType_ = nullptr;};
    inline string DBProxyConnectStringNetType() const { DARABONBA_PTR_GET_DEFAULT(DBProxyConnectStringNetType_, "") };
    inline DescribeDBProxyEndpointResponseBody& setDBProxyConnectStringNetType(string DBProxyConnectStringNetType) { DARABONBA_PTR_SET_VALUE(DBProxyConnectStringNetType_, DBProxyConnectStringNetType) };


    // DBProxyConnectStringPort Field Functions 
    bool hasDBProxyConnectStringPort() const { return this->DBProxyConnectStringPort_ != nullptr;};
    void deleteDBProxyConnectStringPort() { this->DBProxyConnectStringPort_ = nullptr;};
    inline string DBProxyConnectStringPort() const { DARABONBA_PTR_GET_DEFAULT(DBProxyConnectStringPort_, "") };
    inline DescribeDBProxyEndpointResponseBody& setDBProxyConnectStringPort(string DBProxyConnectStringPort) { DARABONBA_PTR_SET_VALUE(DBProxyConnectStringPort_, DBProxyConnectStringPort) };


    // DBProxyEndpointId Field Functions 
    bool hasDBProxyEndpointId() const { return this->DBProxyEndpointId_ != nullptr;};
    void deleteDBProxyEndpointId() { this->DBProxyEndpointId_ = nullptr;};
    inline string DBProxyEndpointId() const { DARABONBA_PTR_GET_DEFAULT(DBProxyEndpointId_, "") };
    inline DescribeDBProxyEndpointResponseBody& setDBProxyEndpointId(string DBProxyEndpointId) { DARABONBA_PTR_SET_VALUE(DBProxyEndpointId_, DBProxyEndpointId) };


    // DBProxyEndpointMinSlaveCount Field Functions 
    bool hasDBProxyEndpointMinSlaveCount() const { return this->DBProxyEndpointMinSlaveCount_ != nullptr;};
    void deleteDBProxyEndpointMinSlaveCount() { this->DBProxyEndpointMinSlaveCount_ = nullptr;};
    inline string DBProxyEndpointMinSlaveCount() const { DARABONBA_PTR_GET_DEFAULT(DBProxyEndpointMinSlaveCount_, "") };
    inline DescribeDBProxyEndpointResponseBody& setDBProxyEndpointMinSlaveCount(string DBProxyEndpointMinSlaveCount) { DARABONBA_PTR_SET_VALUE(DBProxyEndpointMinSlaveCount_, DBProxyEndpointMinSlaveCount) };


    // DBProxyEngineType Field Functions 
    bool hasDBProxyEngineType() const { return this->DBProxyEngineType_ != nullptr;};
    void deleteDBProxyEngineType() { this->DBProxyEngineType_ = nullptr;};
    inline string DBProxyEngineType() const { DARABONBA_PTR_GET_DEFAULT(DBProxyEngineType_, "") };
    inline DescribeDBProxyEndpointResponseBody& setDBProxyEngineType(string DBProxyEngineType) { DARABONBA_PTR_SET_VALUE(DBProxyEngineType_, DBProxyEngineType) };


    // DBProxyFeatures Field Functions 
    bool hasDBProxyFeatures() const { return this->DBProxyFeatures_ != nullptr;};
    void deleteDBProxyFeatures() { this->DBProxyFeatures_ = nullptr;};
    inline string DBProxyFeatures() const { DARABONBA_PTR_GET_DEFAULT(DBProxyFeatures_, "") };
    inline DescribeDBProxyEndpointResponseBody& setDBProxyFeatures(string DBProxyFeatures) { DARABONBA_PTR_SET_VALUE(DBProxyFeatures_, DBProxyFeatures) };


    // DBProxyNodes Field Functions 
    bool hasDBProxyNodes() const { return this->DBProxyNodes_ != nullptr;};
    void deleteDBProxyNodes() { this->DBProxyNodes_ = nullptr;};
    inline const DescribeDBProxyEndpointResponseBodyDBProxyNodes & DBProxyNodes() const { DARABONBA_PTR_GET_CONST(DBProxyNodes_, DescribeDBProxyEndpointResponseBodyDBProxyNodes) };
    inline DescribeDBProxyEndpointResponseBodyDBProxyNodes DBProxyNodes() { DARABONBA_PTR_GET(DBProxyNodes_, DescribeDBProxyEndpointResponseBodyDBProxyNodes) };
    inline DescribeDBProxyEndpointResponseBody& setDBProxyNodes(const DescribeDBProxyEndpointResponseBodyDBProxyNodes & DBProxyNodes) { DARABONBA_PTR_SET_VALUE(DBProxyNodes_, DBProxyNodes) };
    inline DescribeDBProxyEndpointResponseBody& setDBProxyNodes(DescribeDBProxyEndpointResponseBodyDBProxyNodes && DBProxyNodes) { DARABONBA_PTR_SET_RVALUE(DBProxyNodes_, DBProxyNodes) };


    // dbProxyEndpointAliases Field Functions 
    bool hasDbProxyEndpointAliases() const { return this->dbProxyEndpointAliases_ != nullptr;};
    void deleteDbProxyEndpointAliases() { this->dbProxyEndpointAliases_ = nullptr;};
    inline string dbProxyEndpointAliases() const { DARABONBA_PTR_GET_DEFAULT(dbProxyEndpointAliases_, "") };
    inline DescribeDBProxyEndpointResponseBody& setDbProxyEndpointAliases(string dbProxyEndpointAliases) { DARABONBA_PTR_SET_VALUE(dbProxyEndpointAliases_, dbProxyEndpointAliases) };


    // dbProxyEndpointReadWriteMode Field Functions 
    bool hasDbProxyEndpointReadWriteMode() const { return this->dbProxyEndpointReadWriteMode_ != nullptr;};
    void deleteDbProxyEndpointReadWriteMode() { this->dbProxyEndpointReadWriteMode_ = nullptr;};
    inline string dbProxyEndpointReadWriteMode() const { DARABONBA_PTR_GET_DEFAULT(dbProxyEndpointReadWriteMode_, "") };
    inline DescribeDBProxyEndpointResponseBody& setDbProxyEndpointReadWriteMode(string dbProxyEndpointReadWriteMode) { DARABONBA_PTR_SET_VALUE(dbProxyEndpointReadWriteMode_, dbProxyEndpointReadWriteMode) };


    // dbProxyEndpointVpcId Field Functions 
    bool hasDbProxyEndpointVpcId() const { return this->dbProxyEndpointVpcId_ != nullptr;};
    void deleteDbProxyEndpointVpcId() { this->dbProxyEndpointVpcId_ = nullptr;};
    inline string dbProxyEndpointVpcId() const { DARABONBA_PTR_GET_DEFAULT(dbProxyEndpointVpcId_, "") };
    inline DescribeDBProxyEndpointResponseBody& setDbProxyEndpointVpcId(string dbProxyEndpointVpcId) { DARABONBA_PTR_SET_VALUE(dbProxyEndpointVpcId_, dbProxyEndpointVpcId) };


    // dbProxyEndpointVswitchId Field Functions 
    bool hasDbProxyEndpointVswitchId() const { return this->dbProxyEndpointVswitchId_ != nullptr;};
    void deleteDbProxyEndpointVswitchId() { this->dbProxyEndpointVswitchId_ = nullptr;};
    inline string dbProxyEndpointVswitchId() const { DARABONBA_PTR_GET_DEFAULT(dbProxyEndpointVswitchId_, "") };
    inline DescribeDBProxyEndpointResponseBody& setDbProxyEndpointVswitchId(string dbProxyEndpointVswitchId) { DARABONBA_PTR_SET_VALUE(dbProxyEndpointVswitchId_, dbProxyEndpointVswitchId) };


    // dbProxyEndpointZoneId Field Functions 
    bool hasDbProxyEndpointZoneId() const { return this->dbProxyEndpointZoneId_ != nullptr;};
    void deleteDbProxyEndpointZoneId() { this->dbProxyEndpointZoneId_ = nullptr;};
    inline string dbProxyEndpointZoneId() const { DARABONBA_PTR_GET_DEFAULT(dbProxyEndpointZoneId_, "") };
    inline DescribeDBProxyEndpointResponseBody& setDbProxyEndpointZoneId(string dbProxyEndpointZoneId) { DARABONBA_PTR_SET_VALUE(dbProxyEndpointZoneId_, dbProxyEndpointZoneId) };


    // endpointConnectItems Field Functions 
    bool hasEndpointConnectItems() const { return this->endpointConnectItems_ != nullptr;};
    void deleteEndpointConnectItems() { this->endpointConnectItems_ = nullptr;};
    inline const DescribeDBProxyEndpointResponseBodyEndpointConnectItems & endpointConnectItems() const { DARABONBA_PTR_GET_CONST(endpointConnectItems_, DescribeDBProxyEndpointResponseBodyEndpointConnectItems) };
    inline DescribeDBProxyEndpointResponseBodyEndpointConnectItems endpointConnectItems() { DARABONBA_PTR_GET(endpointConnectItems_, DescribeDBProxyEndpointResponseBodyEndpointConnectItems) };
    inline DescribeDBProxyEndpointResponseBody& setEndpointConnectItems(const DescribeDBProxyEndpointResponseBodyEndpointConnectItems & endpointConnectItems) { DARABONBA_PTR_SET_VALUE(endpointConnectItems_, endpointConnectItems) };
    inline DescribeDBProxyEndpointResponseBody& setEndpointConnectItems(DescribeDBProxyEndpointResponseBodyEndpointConnectItems && endpointConnectItems) { DARABONBA_PTR_SET_RVALUE(endpointConnectItems_, endpointConnectItems) };


    // readOnlyInstanceDistributionType Field Functions 
    bool hasReadOnlyInstanceDistributionType() const { return this->readOnlyInstanceDistributionType_ != nullptr;};
    void deleteReadOnlyInstanceDistributionType() { this->readOnlyInstanceDistributionType_ = nullptr;};
    inline string readOnlyInstanceDistributionType() const { DARABONBA_PTR_GET_DEFAULT(readOnlyInstanceDistributionType_, "") };
    inline DescribeDBProxyEndpointResponseBody& setReadOnlyInstanceDistributionType(string readOnlyInstanceDistributionType) { DARABONBA_PTR_SET_VALUE(readOnlyInstanceDistributionType_, readOnlyInstanceDistributionType) };


    // readOnlyInstanceMaxDelayTime Field Functions 
    bool hasReadOnlyInstanceMaxDelayTime() const { return this->readOnlyInstanceMaxDelayTime_ != nullptr;};
    void deleteReadOnlyInstanceMaxDelayTime() { this->readOnlyInstanceMaxDelayTime_ = nullptr;};
    inline string readOnlyInstanceMaxDelayTime() const { DARABONBA_PTR_GET_DEFAULT(readOnlyInstanceMaxDelayTime_, "") };
    inline DescribeDBProxyEndpointResponseBody& setReadOnlyInstanceMaxDelayTime(string readOnlyInstanceMaxDelayTime) { DARABONBA_PTR_SET_VALUE(readOnlyInstanceMaxDelayTime_, readOnlyInstanceMaxDelayTime) };


    // readOnlyInstanceWeight Field Functions 
    bool hasReadOnlyInstanceWeight() const { return this->readOnlyInstanceWeight_ != nullptr;};
    void deleteReadOnlyInstanceWeight() { this->readOnlyInstanceWeight_ = nullptr;};
    inline string readOnlyInstanceWeight() const { DARABONBA_PTR_GET_DEFAULT(readOnlyInstanceWeight_, "") };
    inline DescribeDBProxyEndpointResponseBody& setReadOnlyInstanceWeight(string readOnlyInstanceWeight) { DARABONBA_PTR_SET_VALUE(readOnlyInstanceWeight_, readOnlyInstanceWeight) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBProxyEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The timeout period for consistency reads. Unit: milliseconds. Default value: **10**. Valid values: **0** to **60000**.
    std::shared_ptr<string> causalConsistReadTimeout_ = nullptr;
    // The proxy endpoint queried.
    std::shared_ptr<string> DBProxyConnectString_ = nullptr;
    // The network type of the proxy endpoint. Valid values:
    // 
    // *   **InnerString**: internal network
    // *   **OuterString**: Internet
    std::shared_ptr<string> DBProxyConnectStringNetType_ = nullptr;
    // The port number that is associated with the proxy endpoint.
    std::shared_ptr<string> DBProxyConnectStringPort_ = nullptr;
    // The ID of the proxy endpoint.
    std::shared_ptr<string> DBProxyEndpointId_ = nullptr;
    // The minimum number of reserved instances.
    std::shared_ptr<string> DBProxyEndpointMinSlaveCount_ = nullptr;
    // An internal parameter. You can ignore this parameter.
    std::shared_ptr<string> DBProxyEngineType_ = nullptr;
    // The configuration of the proxy terminal. The value of this parameter is a JSON string that consists of the following parameters:
    // 
    // *   **TransactionReadSqlRouteOptimizeStatus**: the status of the transaction splitting feature. Valid values: **0** and **1**. The value 0 indicates that the feature is disabled. The value 1 indicates that the feature is enabled.
    // *   **ConnectionPersist**: the status of the connection pooling feature. Valid values: **0**, **1**, and **2**. The value 0 indicates that the connection pooling feature is disabled. The value 1 indicates that the session-level connection pooling feature is enabled. The value 2 indicates that the transaction-level connection pooling feature is enabled.
    // *   **ReadWriteSpliting**: the status of the read/write splitting feature. Valid values: **0** and **1**. The value 0 indicates that the feature is disabled. The value 1 indicates that the feature is enabled.
    // *   **AZProximityAccess**: the status of the nearest access feature. Valid values: **0** and **1**. The value 0 indicates that the feature is disabled. The value 1 indicates that the feature is enabled.
    // *   **CausalConsistRead**: the read consistency settings. Valid values: **0**, **1**, and **2**. The value 0 indicates eventual consistency. The value 1 indicates session consistency. The value 2 indicates global consistency.
    // *   **PinPreparedStmt**: an internal parameter that is available only for ApsaraDB RDS for PostgrSQL instances.
    // 
    // >  If the instance runs PostgreSQL, you can change only the value of the **ReadWriteSpliting** field. The **TransactionReadSqlRouteOptimizeStatus** and **PinPreparedStmt** fields are set to their default values 1.
    std::shared_ptr<string> DBProxyFeatures_ = nullptr;
    // The proxy nodes that are associated with the proxy terminal.
    std::shared_ptr<DescribeDBProxyEndpointResponseBodyDBProxyNodes> DBProxyNodes_ = nullptr;
    // The description of the proxy terminal.
    std::shared_ptr<string> dbProxyEndpointAliases_ = nullptr;
    // The read and write attributes of the proxy terminal. Valid values:
    // 
    // *   **ReadWrite**: The proxy terminal supports read and write requests.
    // *   **ReadOnly**: The proxy terminal supports only read requests.
    std::shared_ptr<string> dbProxyEndpointReadWriteMode_ = nullptr;
    // The virtual private cloud (VPC) ID of the proxy.
    std::shared_ptr<string> dbProxyEndpointVpcId_ = nullptr;
    // The vSwitch ID of the proxy terminal.
    std::shared_ptr<string> dbProxyEndpointVswitchId_ = nullptr;
    // The zone ID of the proxy terminal.
    std::shared_ptr<string> dbProxyEndpointZoneId_ = nullptr;
    // An array that consists of the information about the proxy endpoint.
    std::shared_ptr<DescribeDBProxyEndpointResponseBodyEndpointConnectItems> endpointConnectItems_ = nullptr;
    // The method that is used to assign read weights. For more information, see [Modify the latency threshold and read weights of ApsaraDB RDS for MySQL instances](https://help.aliyun.com/document_detail/96076.html). Valid values:
    // 
    // *   **Standard**: The system automatically assigns read weights to the instance and its read-only instances based on the specifications of these instances.
    // *   **Custom**: You must manually assign read weights to the instance and its read-only instances.
    std::shared_ptr<string> readOnlyInstanceDistributionType_ = nullptr;
    // The latency threshold that is allowed for read/write splitting. If the latency on a read-only instance exceeds the specified threshold, ApsaraDB RDS no longer forwards read requests to the read-only instance.
    std::shared_ptr<string> readOnlyInstanceMaxDelayTime_ = nullptr;
    // The read weights of the instance and its read-only instances. The value of this parameter is a JSON string that consists of the following parameters:
    // 
    // *   **DBInstanceId**: the ID of the instance.
    // *   **DBInstanceType**: the role of the instance. Valid values: **Master** and **ReadOnly**.
    // *   **NodeID**: The IDs of the primary and secondary nodes of the cluster. An instance that runs RDS Cluster Edition refers to a cluster.
    // *   **NodeType**: The node type. Valid values: **Primary** and **Secondary**.
    // *   **Weight**: the read weight of the instance. The read weight increases in increments of **100** and cannot exceed **10000**.
    std::shared_ptr<string> readOnlyInstanceWeight_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
