// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBPROXYENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBPROXYENDPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class EndpointConnectItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EndpointConnectItems& obj) { 
        DARABONBA_PTR_TO_JSON(EndpointConnectItems, endpointConnectItems_);
      };
      friend void from_json(const Darabonba::Json& j, EndpointConnectItems& obj) { 
        DARABONBA_PTR_FROM_JSON(EndpointConnectItems, endpointConnectItems_);
      };
      EndpointConnectItems() = default ;
      EndpointConnectItems(const EndpointConnectItems &) = default ;
      EndpointConnectItems(EndpointConnectItems &&) = default ;
      EndpointConnectItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EndpointConnectItems() = default ;
      EndpointConnectItems& operator=(const EndpointConnectItems &) = default ;
      EndpointConnectItems& operator=(EndpointConnectItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EndpointConnectItemsItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EndpointConnectItemsItem& obj) { 
          DARABONBA_PTR_TO_JSON(DbProxyEndpointConnectString, dbProxyEndpointConnectString_);
          DARABONBA_PTR_TO_JSON(DbProxyEndpointNetType, dbProxyEndpointNetType_);
          DARABONBA_PTR_TO_JSON(DbProxyEndpointPort, dbProxyEndpointPort_);
        };
        friend void from_json(const Darabonba::Json& j, EndpointConnectItemsItem& obj) { 
          DARABONBA_PTR_FROM_JSON(DbProxyEndpointConnectString, dbProxyEndpointConnectString_);
          DARABONBA_PTR_FROM_JSON(DbProxyEndpointNetType, dbProxyEndpointNetType_);
          DARABONBA_PTR_FROM_JSON(DbProxyEndpointPort, dbProxyEndpointPort_);
        };
        EndpointConnectItemsItem() = default ;
        EndpointConnectItemsItem(const EndpointConnectItemsItem &) = default ;
        EndpointConnectItemsItem(EndpointConnectItemsItem &&) = default ;
        EndpointConnectItemsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EndpointConnectItemsItem() = default ;
        EndpointConnectItemsItem& operator=(const EndpointConnectItemsItem &) = default ;
        EndpointConnectItemsItem& operator=(EndpointConnectItemsItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dbProxyEndpointConnectString_ == nullptr
        && this->dbProxyEndpointNetType_ == nullptr && this->dbProxyEndpointPort_ == nullptr; };
        // dbProxyEndpointConnectString Field Functions 
        bool hasDbProxyEndpointConnectString() const { return this->dbProxyEndpointConnectString_ != nullptr;};
        void deleteDbProxyEndpointConnectString() { this->dbProxyEndpointConnectString_ = nullptr;};
        inline string getDbProxyEndpointConnectString() const { DARABONBA_PTR_GET_DEFAULT(dbProxyEndpointConnectString_, "") };
        inline EndpointConnectItemsItem& setDbProxyEndpointConnectString(string dbProxyEndpointConnectString) { DARABONBA_PTR_SET_VALUE(dbProxyEndpointConnectString_, dbProxyEndpointConnectString) };


        // dbProxyEndpointNetType Field Functions 
        bool hasDbProxyEndpointNetType() const { return this->dbProxyEndpointNetType_ != nullptr;};
        void deleteDbProxyEndpointNetType() { this->dbProxyEndpointNetType_ = nullptr;};
        inline string getDbProxyEndpointNetType() const { DARABONBA_PTR_GET_DEFAULT(dbProxyEndpointNetType_, "") };
        inline EndpointConnectItemsItem& setDbProxyEndpointNetType(string dbProxyEndpointNetType) { DARABONBA_PTR_SET_VALUE(dbProxyEndpointNetType_, dbProxyEndpointNetType) };


        // dbProxyEndpointPort Field Functions 
        bool hasDbProxyEndpointPort() const { return this->dbProxyEndpointPort_ != nullptr;};
        void deleteDbProxyEndpointPort() { this->dbProxyEndpointPort_ = nullptr;};
        inline string getDbProxyEndpointPort() const { DARABONBA_PTR_GET_DEFAULT(dbProxyEndpointPort_, "") };
        inline EndpointConnectItemsItem& setDbProxyEndpointPort(string dbProxyEndpointPort) { DARABONBA_PTR_SET_VALUE(dbProxyEndpointPort_, dbProxyEndpointPort) };


      protected:
        // The proxy endpoint queried.
        shared_ptr<string> dbProxyEndpointConnectString_ {};
        // The network type of the instance. Valid values:
        // 
        // *   **0**: Internet
        // *   **1**: classic network
        // *   **2**: virtual private cloud (VPC)
        shared_ptr<string> dbProxyEndpointNetType_ {};
        // The port number that is associated with the proxy endpoint. Default value: **3306**.
        shared_ptr<string> dbProxyEndpointPort_ {};
      };

      virtual bool empty() const override { return this->endpointConnectItems_ == nullptr; };
      // endpointConnectItems Field Functions 
      bool hasEndpointConnectItems() const { return this->endpointConnectItems_ != nullptr;};
      void deleteEndpointConnectItems() { this->endpointConnectItems_ = nullptr;};
      inline const vector<EndpointConnectItems::EndpointConnectItemsItem> & getEndpointConnectItems() const { DARABONBA_PTR_GET_CONST(endpointConnectItems_, vector<EndpointConnectItems::EndpointConnectItemsItem>) };
      inline vector<EndpointConnectItems::EndpointConnectItemsItem> getEndpointConnectItems() { DARABONBA_PTR_GET(endpointConnectItems_, vector<EndpointConnectItems::EndpointConnectItemsItem>) };
      inline EndpointConnectItems& setEndpointConnectItems(const vector<EndpointConnectItems::EndpointConnectItemsItem> & endpointConnectItems) { DARABONBA_PTR_SET_VALUE(endpointConnectItems_, endpointConnectItems) };
      inline EndpointConnectItems& setEndpointConnectItems(vector<EndpointConnectItems::EndpointConnectItemsItem> && endpointConnectItems) { DARABONBA_PTR_SET_RVALUE(endpointConnectItems_, endpointConnectItems) };


    protected:
      shared_ptr<vector<EndpointConnectItems::EndpointConnectItemsItem>> endpointConnectItems_ {};
    };

    class DBProxyNodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBProxyNodes& obj) { 
        DARABONBA_PTR_TO_JSON(DBProxyNodes, DBProxyNodes_);
      };
      friend void from_json(const Darabonba::Json& j, DBProxyNodes& obj) { 
        DARABONBA_PTR_FROM_JSON(DBProxyNodes, DBProxyNodes_);
      };
      DBProxyNodes() = default ;
      DBProxyNodes(const DBProxyNodes &) = default ;
      DBProxyNodes(DBProxyNodes &&) = default ;
      DBProxyNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBProxyNodes() = default ;
      DBProxyNodes& operator=(const DBProxyNodes &) = default ;
      DBProxyNodes& operator=(DBProxyNodes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DBProxyNodesItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBProxyNodesItem& obj) { 
          DARABONBA_PTR_TO_JSON(cpuCores, cpuCores_);
          DARABONBA_PTR_TO_JSON(nodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, DBProxyNodesItem& obj) { 
          DARABONBA_PTR_FROM_JSON(cpuCores, cpuCores_);
          DARABONBA_PTR_FROM_JSON(nodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
        };
        DBProxyNodesItem() = default ;
        DBProxyNodesItem(const DBProxyNodesItem &) = default ;
        DBProxyNodesItem(DBProxyNodesItem &&) = default ;
        DBProxyNodesItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBProxyNodesItem() = default ;
        DBProxyNodesItem& operator=(const DBProxyNodesItem &) = default ;
        DBProxyNodesItem& operator=(DBProxyNodesItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cpuCores_ == nullptr
        && this->nodeId_ == nullptr && this->zoneId_ == nullptr; };
        // cpuCores Field Functions 
        bool hasCpuCores() const { return this->cpuCores_ != nullptr;};
        void deleteCpuCores() { this->cpuCores_ = nullptr;};
        inline string getCpuCores() const { DARABONBA_PTR_GET_DEFAULT(cpuCores_, "") };
        inline DBProxyNodesItem& setCpuCores(string cpuCores) { DARABONBA_PTR_SET_VALUE(cpuCores_, cpuCores) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline DBProxyNodesItem& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline DBProxyNodesItem& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The number of CPU cores of the node.
        shared_ptr<string> cpuCores_ {};
        // The ID of the node in the zone.
        shared_ptr<string> nodeId_ {};
        // The zone ID of the node.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->DBProxyNodes_ == nullptr; };
      // DBProxyNodes Field Functions 
      bool hasDBProxyNodes() const { return this->DBProxyNodes_ != nullptr;};
      void deleteDBProxyNodes() { this->DBProxyNodes_ = nullptr;};
      inline const vector<DBProxyNodes::DBProxyNodesItem> & getDBProxyNodes() const { DARABONBA_PTR_GET_CONST(DBProxyNodes_, vector<DBProxyNodes::DBProxyNodesItem>) };
      inline vector<DBProxyNodes::DBProxyNodesItem> getDBProxyNodes() { DARABONBA_PTR_GET(DBProxyNodes_, vector<DBProxyNodes::DBProxyNodesItem>) };
      inline DBProxyNodes& setDBProxyNodes(const vector<DBProxyNodes::DBProxyNodesItem> & dBProxyNodes) { DARABONBA_PTR_SET_VALUE(DBProxyNodes_, dBProxyNodes) };
      inline DBProxyNodes& setDBProxyNodes(vector<DBProxyNodes::DBProxyNodesItem> && dBProxyNodes) { DARABONBA_PTR_SET_RVALUE(DBProxyNodes_, dBProxyNodes) };


    protected:
      shared_ptr<vector<DBProxyNodes::DBProxyNodesItem>> DBProxyNodes_ {};
    };

    virtual bool empty() const override { return this->causalConsistReadTimeout_ == nullptr
        && this->DBProxyConnectString_ == nullptr && this->DBProxyConnectStringNetType_ == nullptr && this->DBProxyConnectStringPort_ == nullptr && this->DBProxyEndpointId_ == nullptr && this->DBProxyEndpointMinSlaveCount_ == nullptr
        && this->DBProxyEngineType_ == nullptr && this->DBProxyFeatures_ == nullptr && this->DBProxyNodes_ == nullptr && this->dbProxyEndpointAliases_ == nullptr && this->dbProxyEndpointReadWriteMode_ == nullptr
        && this->dbProxyEndpointVpcId_ == nullptr && this->dbProxyEndpointVswitchId_ == nullptr && this->dbProxyEndpointZoneId_ == nullptr && this->endpointConnectItems_ == nullptr && this->readOnlyInstanceDistributionType_ == nullptr
        && this->readOnlyInstanceMaxDelayTime_ == nullptr && this->readOnlyInstanceWeight_ == nullptr && this->requestId_ == nullptr; };
    // causalConsistReadTimeout Field Functions 
    bool hasCausalConsistReadTimeout() const { return this->causalConsistReadTimeout_ != nullptr;};
    void deleteCausalConsistReadTimeout() { this->causalConsistReadTimeout_ = nullptr;};
    inline string getCausalConsistReadTimeout() const { DARABONBA_PTR_GET_DEFAULT(causalConsistReadTimeout_, "") };
    inline DescribeDBProxyEndpointResponseBody& setCausalConsistReadTimeout(string causalConsistReadTimeout) { DARABONBA_PTR_SET_VALUE(causalConsistReadTimeout_, causalConsistReadTimeout) };


    // DBProxyConnectString Field Functions 
    bool hasDBProxyConnectString() const { return this->DBProxyConnectString_ != nullptr;};
    void deleteDBProxyConnectString() { this->DBProxyConnectString_ = nullptr;};
    inline string getDBProxyConnectString() const { DARABONBA_PTR_GET_DEFAULT(DBProxyConnectString_, "") };
    inline DescribeDBProxyEndpointResponseBody& setDBProxyConnectString(string DBProxyConnectString) { DARABONBA_PTR_SET_VALUE(DBProxyConnectString_, DBProxyConnectString) };


    // DBProxyConnectStringNetType Field Functions 
    bool hasDBProxyConnectStringNetType() const { return this->DBProxyConnectStringNetType_ != nullptr;};
    void deleteDBProxyConnectStringNetType() { this->DBProxyConnectStringNetType_ = nullptr;};
    inline string getDBProxyConnectStringNetType() const { DARABONBA_PTR_GET_DEFAULT(DBProxyConnectStringNetType_, "") };
    inline DescribeDBProxyEndpointResponseBody& setDBProxyConnectStringNetType(string DBProxyConnectStringNetType) { DARABONBA_PTR_SET_VALUE(DBProxyConnectStringNetType_, DBProxyConnectStringNetType) };


    // DBProxyConnectStringPort Field Functions 
    bool hasDBProxyConnectStringPort() const { return this->DBProxyConnectStringPort_ != nullptr;};
    void deleteDBProxyConnectStringPort() { this->DBProxyConnectStringPort_ = nullptr;};
    inline string getDBProxyConnectStringPort() const { DARABONBA_PTR_GET_DEFAULT(DBProxyConnectStringPort_, "") };
    inline DescribeDBProxyEndpointResponseBody& setDBProxyConnectStringPort(string DBProxyConnectStringPort) { DARABONBA_PTR_SET_VALUE(DBProxyConnectStringPort_, DBProxyConnectStringPort) };


    // DBProxyEndpointId Field Functions 
    bool hasDBProxyEndpointId() const { return this->DBProxyEndpointId_ != nullptr;};
    void deleteDBProxyEndpointId() { this->DBProxyEndpointId_ = nullptr;};
    inline string getDBProxyEndpointId() const { DARABONBA_PTR_GET_DEFAULT(DBProxyEndpointId_, "") };
    inline DescribeDBProxyEndpointResponseBody& setDBProxyEndpointId(string DBProxyEndpointId) { DARABONBA_PTR_SET_VALUE(DBProxyEndpointId_, DBProxyEndpointId) };


    // DBProxyEndpointMinSlaveCount Field Functions 
    bool hasDBProxyEndpointMinSlaveCount() const { return this->DBProxyEndpointMinSlaveCount_ != nullptr;};
    void deleteDBProxyEndpointMinSlaveCount() { this->DBProxyEndpointMinSlaveCount_ = nullptr;};
    inline string getDBProxyEndpointMinSlaveCount() const { DARABONBA_PTR_GET_DEFAULT(DBProxyEndpointMinSlaveCount_, "") };
    inline DescribeDBProxyEndpointResponseBody& setDBProxyEndpointMinSlaveCount(string DBProxyEndpointMinSlaveCount) { DARABONBA_PTR_SET_VALUE(DBProxyEndpointMinSlaveCount_, DBProxyEndpointMinSlaveCount) };


    // DBProxyEngineType Field Functions 
    bool hasDBProxyEngineType() const { return this->DBProxyEngineType_ != nullptr;};
    void deleteDBProxyEngineType() { this->DBProxyEngineType_ = nullptr;};
    inline string getDBProxyEngineType() const { DARABONBA_PTR_GET_DEFAULT(DBProxyEngineType_, "") };
    inline DescribeDBProxyEndpointResponseBody& setDBProxyEngineType(string DBProxyEngineType) { DARABONBA_PTR_SET_VALUE(DBProxyEngineType_, DBProxyEngineType) };


    // DBProxyFeatures Field Functions 
    bool hasDBProxyFeatures() const { return this->DBProxyFeatures_ != nullptr;};
    void deleteDBProxyFeatures() { this->DBProxyFeatures_ = nullptr;};
    inline string getDBProxyFeatures() const { DARABONBA_PTR_GET_DEFAULT(DBProxyFeatures_, "") };
    inline DescribeDBProxyEndpointResponseBody& setDBProxyFeatures(string DBProxyFeatures) { DARABONBA_PTR_SET_VALUE(DBProxyFeatures_, DBProxyFeatures) };


    // DBProxyNodes Field Functions 
    bool hasDBProxyNodes() const { return this->DBProxyNodes_ != nullptr;};
    void deleteDBProxyNodes() { this->DBProxyNodes_ = nullptr;};
    inline const DescribeDBProxyEndpointResponseBody::DBProxyNodes & getDBProxyNodes() const { DARABONBA_PTR_GET_CONST(DBProxyNodes_, DescribeDBProxyEndpointResponseBody::DBProxyNodes) };
    inline DescribeDBProxyEndpointResponseBody::DBProxyNodes getDBProxyNodes() { DARABONBA_PTR_GET(DBProxyNodes_, DescribeDBProxyEndpointResponseBody::DBProxyNodes) };
    inline DescribeDBProxyEndpointResponseBody& setDBProxyNodes(const DescribeDBProxyEndpointResponseBody::DBProxyNodes & dBProxyNodes) { DARABONBA_PTR_SET_VALUE(DBProxyNodes_, dBProxyNodes) };
    inline DescribeDBProxyEndpointResponseBody& setDBProxyNodes(DescribeDBProxyEndpointResponseBody::DBProxyNodes && dBProxyNodes) { DARABONBA_PTR_SET_RVALUE(DBProxyNodes_, dBProxyNodes) };


    // dbProxyEndpointAliases Field Functions 
    bool hasDbProxyEndpointAliases() const { return this->dbProxyEndpointAliases_ != nullptr;};
    void deleteDbProxyEndpointAliases() { this->dbProxyEndpointAliases_ = nullptr;};
    inline string getDbProxyEndpointAliases() const { DARABONBA_PTR_GET_DEFAULT(dbProxyEndpointAliases_, "") };
    inline DescribeDBProxyEndpointResponseBody& setDbProxyEndpointAliases(string dbProxyEndpointAliases) { DARABONBA_PTR_SET_VALUE(dbProxyEndpointAliases_, dbProxyEndpointAliases) };


    // dbProxyEndpointReadWriteMode Field Functions 
    bool hasDbProxyEndpointReadWriteMode() const { return this->dbProxyEndpointReadWriteMode_ != nullptr;};
    void deleteDbProxyEndpointReadWriteMode() { this->dbProxyEndpointReadWriteMode_ = nullptr;};
    inline string getDbProxyEndpointReadWriteMode() const { DARABONBA_PTR_GET_DEFAULT(dbProxyEndpointReadWriteMode_, "") };
    inline DescribeDBProxyEndpointResponseBody& setDbProxyEndpointReadWriteMode(string dbProxyEndpointReadWriteMode) { DARABONBA_PTR_SET_VALUE(dbProxyEndpointReadWriteMode_, dbProxyEndpointReadWriteMode) };


    // dbProxyEndpointVpcId Field Functions 
    bool hasDbProxyEndpointVpcId() const { return this->dbProxyEndpointVpcId_ != nullptr;};
    void deleteDbProxyEndpointVpcId() { this->dbProxyEndpointVpcId_ = nullptr;};
    inline string getDbProxyEndpointVpcId() const { DARABONBA_PTR_GET_DEFAULT(dbProxyEndpointVpcId_, "") };
    inline DescribeDBProxyEndpointResponseBody& setDbProxyEndpointVpcId(string dbProxyEndpointVpcId) { DARABONBA_PTR_SET_VALUE(dbProxyEndpointVpcId_, dbProxyEndpointVpcId) };


    // dbProxyEndpointVswitchId Field Functions 
    bool hasDbProxyEndpointVswitchId() const { return this->dbProxyEndpointVswitchId_ != nullptr;};
    void deleteDbProxyEndpointVswitchId() { this->dbProxyEndpointVswitchId_ = nullptr;};
    inline string getDbProxyEndpointVswitchId() const { DARABONBA_PTR_GET_DEFAULT(dbProxyEndpointVswitchId_, "") };
    inline DescribeDBProxyEndpointResponseBody& setDbProxyEndpointVswitchId(string dbProxyEndpointVswitchId) { DARABONBA_PTR_SET_VALUE(dbProxyEndpointVswitchId_, dbProxyEndpointVswitchId) };


    // dbProxyEndpointZoneId Field Functions 
    bool hasDbProxyEndpointZoneId() const { return this->dbProxyEndpointZoneId_ != nullptr;};
    void deleteDbProxyEndpointZoneId() { this->dbProxyEndpointZoneId_ = nullptr;};
    inline string getDbProxyEndpointZoneId() const { DARABONBA_PTR_GET_DEFAULT(dbProxyEndpointZoneId_, "") };
    inline DescribeDBProxyEndpointResponseBody& setDbProxyEndpointZoneId(string dbProxyEndpointZoneId) { DARABONBA_PTR_SET_VALUE(dbProxyEndpointZoneId_, dbProxyEndpointZoneId) };


    // endpointConnectItems Field Functions 
    bool hasEndpointConnectItems() const { return this->endpointConnectItems_ != nullptr;};
    void deleteEndpointConnectItems() { this->endpointConnectItems_ = nullptr;};
    inline const DescribeDBProxyEndpointResponseBody::EndpointConnectItems & getEndpointConnectItems() const { DARABONBA_PTR_GET_CONST(endpointConnectItems_, DescribeDBProxyEndpointResponseBody::EndpointConnectItems) };
    inline DescribeDBProxyEndpointResponseBody::EndpointConnectItems getEndpointConnectItems() { DARABONBA_PTR_GET(endpointConnectItems_, DescribeDBProxyEndpointResponseBody::EndpointConnectItems) };
    inline DescribeDBProxyEndpointResponseBody& setEndpointConnectItems(const DescribeDBProxyEndpointResponseBody::EndpointConnectItems & endpointConnectItems) { DARABONBA_PTR_SET_VALUE(endpointConnectItems_, endpointConnectItems) };
    inline DescribeDBProxyEndpointResponseBody& setEndpointConnectItems(DescribeDBProxyEndpointResponseBody::EndpointConnectItems && endpointConnectItems) { DARABONBA_PTR_SET_RVALUE(endpointConnectItems_, endpointConnectItems) };


    // readOnlyInstanceDistributionType Field Functions 
    bool hasReadOnlyInstanceDistributionType() const { return this->readOnlyInstanceDistributionType_ != nullptr;};
    void deleteReadOnlyInstanceDistributionType() { this->readOnlyInstanceDistributionType_ = nullptr;};
    inline string getReadOnlyInstanceDistributionType() const { DARABONBA_PTR_GET_DEFAULT(readOnlyInstanceDistributionType_, "") };
    inline DescribeDBProxyEndpointResponseBody& setReadOnlyInstanceDistributionType(string readOnlyInstanceDistributionType) { DARABONBA_PTR_SET_VALUE(readOnlyInstanceDistributionType_, readOnlyInstanceDistributionType) };


    // readOnlyInstanceMaxDelayTime Field Functions 
    bool hasReadOnlyInstanceMaxDelayTime() const { return this->readOnlyInstanceMaxDelayTime_ != nullptr;};
    void deleteReadOnlyInstanceMaxDelayTime() { this->readOnlyInstanceMaxDelayTime_ = nullptr;};
    inline string getReadOnlyInstanceMaxDelayTime() const { DARABONBA_PTR_GET_DEFAULT(readOnlyInstanceMaxDelayTime_, "") };
    inline DescribeDBProxyEndpointResponseBody& setReadOnlyInstanceMaxDelayTime(string readOnlyInstanceMaxDelayTime) { DARABONBA_PTR_SET_VALUE(readOnlyInstanceMaxDelayTime_, readOnlyInstanceMaxDelayTime) };


    // readOnlyInstanceWeight Field Functions 
    bool hasReadOnlyInstanceWeight() const { return this->readOnlyInstanceWeight_ != nullptr;};
    void deleteReadOnlyInstanceWeight() { this->readOnlyInstanceWeight_ = nullptr;};
    inline string getReadOnlyInstanceWeight() const { DARABONBA_PTR_GET_DEFAULT(readOnlyInstanceWeight_, "") };
    inline DescribeDBProxyEndpointResponseBody& setReadOnlyInstanceWeight(string readOnlyInstanceWeight) { DARABONBA_PTR_SET_VALUE(readOnlyInstanceWeight_, readOnlyInstanceWeight) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBProxyEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The timeout period for consistency reads. Unit: milliseconds. Default value: **10**. Valid values: **0** to **60000**.
    shared_ptr<string> causalConsistReadTimeout_ {};
    // The proxy endpoint queried.
    shared_ptr<string> DBProxyConnectString_ {};
    // The network type of the proxy endpoint. Valid values:
    // 
    // *   **InnerString**: internal network
    // *   **OuterString**: Internet
    shared_ptr<string> DBProxyConnectStringNetType_ {};
    // The port number that is associated with the proxy endpoint.
    shared_ptr<string> DBProxyConnectStringPort_ {};
    // The ID of the proxy endpoint.
    shared_ptr<string> DBProxyEndpointId_ {};
    // The minimum number of reserved instances.
    shared_ptr<string> DBProxyEndpointMinSlaveCount_ {};
    // An internal parameter. You can ignore this parameter.
    shared_ptr<string> DBProxyEngineType_ {};
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
    shared_ptr<string> DBProxyFeatures_ {};
    // The proxy nodes that are associated with the proxy terminal.
    shared_ptr<DescribeDBProxyEndpointResponseBody::DBProxyNodes> DBProxyNodes_ {};
    // The description of the proxy terminal.
    shared_ptr<string> dbProxyEndpointAliases_ {};
    // The read and write attributes of the proxy terminal. Valid values:
    // 
    // *   **ReadWrite**: The proxy terminal supports read and write requests.
    // *   **ReadOnly**: The proxy terminal supports only read requests.
    shared_ptr<string> dbProxyEndpointReadWriteMode_ {};
    // The virtual private cloud (VPC) ID of the proxy.
    shared_ptr<string> dbProxyEndpointVpcId_ {};
    // The vSwitch ID of the proxy terminal.
    shared_ptr<string> dbProxyEndpointVswitchId_ {};
    // The zone ID of the proxy terminal.
    shared_ptr<string> dbProxyEndpointZoneId_ {};
    // An array that consists of the information about the proxy endpoint.
    shared_ptr<DescribeDBProxyEndpointResponseBody::EndpointConnectItems> endpointConnectItems_ {};
    // The method that is used to assign read weights. For more information, see [Modify the latency threshold and read weights of ApsaraDB RDS for MySQL instances](https://help.aliyun.com/document_detail/96076.html). Valid values:
    // 
    // *   **Standard**: The system automatically assigns read weights to the instance and its read-only instances based on the specifications of these instances.
    // *   **Custom**: You must manually assign read weights to the instance and its read-only instances.
    shared_ptr<string> readOnlyInstanceDistributionType_ {};
    // The latency threshold that is allowed for read/write splitting. If the latency on a read-only instance exceeds the specified threshold, ApsaraDB RDS no longer forwards read requests to the read-only instance.
    shared_ptr<string> readOnlyInstanceMaxDelayTime_ {};
    // The read weights of the instance and its read-only instances. The value of this parameter is a JSON string that consists of the following parameters:
    // 
    // *   **DBInstanceId**: the ID of the instance.
    // *   **DBInstanceType**: the role of the instance. Valid values: **Master** and **ReadOnly**.
    // *   **NodeID**: The IDs of the primary and secondary nodes of the cluster. An instance that runs RDS Cluster Edition refers to a cluster.
    // *   **NodeType**: The node type. Valid values: **Primary** and **Secondary**.
    // *   **Weight**: the read weight of the instance. The read weight increases in increments of **100** and cannot exceed **10000**.
    shared_ptr<string> readOnlyInstanceWeight_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
