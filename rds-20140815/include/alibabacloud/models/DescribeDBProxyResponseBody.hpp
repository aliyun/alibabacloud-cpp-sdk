// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBPROXYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBPROXYRESPONSEBODY_HPP_
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
  class DescribeDBProxyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBProxyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBProxyAVZones, DBProxyAVZones_);
      DARABONBA_PTR_TO_JSON(DBProxyConnectStringItems, DBProxyConnectStringItems_);
      DARABONBA_PTR_TO_JSON(DBProxyEngineType, DBProxyEngineType_);
      DARABONBA_PTR_TO_JSON(DBProxyInstanceCurrentMinorVersion, DBProxyInstanceCurrentMinorVersion_);
      DARABONBA_PTR_TO_JSON(DBProxyInstanceLatestMinorVersion, DBProxyInstanceLatestMinorVersion_);
      DARABONBA_PTR_TO_JSON(DBProxyInstanceMinorVersions, DBProxyInstanceMinorVersions_);
      DARABONBA_PTR_TO_JSON(DBProxyInstanceName, DBProxyInstanceName_);
      DARABONBA_PTR_TO_JSON(DBProxyInstanceNum, DBProxyInstanceNum_);
      DARABONBA_PTR_TO_JSON(DBProxyInstanceSize, DBProxyInstanceSize_);
      DARABONBA_PTR_TO_JSON(DBProxyInstanceStatus, DBProxyInstanceStatus_);
      DARABONBA_PTR_TO_JSON(DBProxyInstanceType, DBProxyInstanceType_);
      DARABONBA_PTR_TO_JSON(DBProxyKindCode, DBProxyKindCode_);
      DARABONBA_PTR_TO_JSON(DBProxyNodes, DBProxyNodes_);
      DARABONBA_PTR_TO_JSON(DBProxyPersistentConnectionStatus, DBProxyPersistentConnectionStatus_);
      DARABONBA_PTR_TO_JSON(DBProxyServiceStatus, DBProxyServiceStatus_);
      DARABONBA_PTR_TO_JSON(DbProxyEndpointItems, dbProxyEndpointItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBProxyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBProxyAVZones, DBProxyAVZones_);
      DARABONBA_PTR_FROM_JSON(DBProxyConnectStringItems, DBProxyConnectStringItems_);
      DARABONBA_PTR_FROM_JSON(DBProxyEngineType, DBProxyEngineType_);
      DARABONBA_PTR_FROM_JSON(DBProxyInstanceCurrentMinorVersion, DBProxyInstanceCurrentMinorVersion_);
      DARABONBA_PTR_FROM_JSON(DBProxyInstanceLatestMinorVersion, DBProxyInstanceLatestMinorVersion_);
      DARABONBA_PTR_FROM_JSON(DBProxyInstanceMinorVersions, DBProxyInstanceMinorVersions_);
      DARABONBA_PTR_FROM_JSON(DBProxyInstanceName, DBProxyInstanceName_);
      DARABONBA_PTR_FROM_JSON(DBProxyInstanceNum, DBProxyInstanceNum_);
      DARABONBA_PTR_FROM_JSON(DBProxyInstanceSize, DBProxyInstanceSize_);
      DARABONBA_PTR_FROM_JSON(DBProxyInstanceStatus, DBProxyInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(DBProxyInstanceType, DBProxyInstanceType_);
      DARABONBA_PTR_FROM_JSON(DBProxyKindCode, DBProxyKindCode_);
      DARABONBA_PTR_FROM_JSON(DBProxyNodes, DBProxyNodes_);
      DARABONBA_PTR_FROM_JSON(DBProxyPersistentConnectionStatus, DBProxyPersistentConnectionStatus_);
      DARABONBA_PTR_FROM_JSON(DBProxyServiceStatus, DBProxyServiceStatus_);
      DARABONBA_PTR_FROM_JSON(DbProxyEndpointItems, dbProxyEndpointItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    DescribeDBProxyResponseBody() = default ;
    DescribeDBProxyResponseBody(const DescribeDBProxyResponseBody &) = default ;
    DescribeDBProxyResponseBody(DescribeDBProxyResponseBody &&) = default ;
    DescribeDBProxyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBProxyResponseBody() = default ;
    DescribeDBProxyResponseBody& operator=(const DescribeDBProxyResponseBody &) = default ;
    DescribeDBProxyResponseBody& operator=(DescribeDBProxyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DbProxyEndpointItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DbProxyEndpointItems& obj) { 
        DARABONBA_PTR_TO_JSON(DbProxyEndpointItems, dbProxyEndpointItems_);
      };
      friend void from_json(const Darabonba::Json& j, DbProxyEndpointItems& obj) { 
        DARABONBA_PTR_FROM_JSON(DbProxyEndpointItems, dbProxyEndpointItems_);
      };
      DbProxyEndpointItems() = default ;
      DbProxyEndpointItems(const DbProxyEndpointItems &) = default ;
      DbProxyEndpointItems(DbProxyEndpointItems &&) = default ;
      DbProxyEndpointItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DbProxyEndpointItems() = default ;
      DbProxyEndpointItems& operator=(const DbProxyEndpointItems &) = default ;
      DbProxyEndpointItems& operator=(DbProxyEndpointItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DbProxyEndpointItemsItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DbProxyEndpointItemsItem& obj) { 
          DARABONBA_PTR_TO_JSON(DbProxyEndpointAliases, dbProxyEndpointAliases_);
          DARABONBA_PTR_TO_JSON(DbProxyEndpointName, dbProxyEndpointName_);
          DARABONBA_PTR_TO_JSON(DbProxyEndpointType, dbProxyEndpointType_);
          DARABONBA_PTR_TO_JSON(DbProxyReadWriteMode, dbProxyReadWriteMode_);
        };
        friend void from_json(const Darabonba::Json& j, DbProxyEndpointItemsItem& obj) { 
          DARABONBA_PTR_FROM_JSON(DbProxyEndpointAliases, dbProxyEndpointAliases_);
          DARABONBA_PTR_FROM_JSON(DbProxyEndpointName, dbProxyEndpointName_);
          DARABONBA_PTR_FROM_JSON(DbProxyEndpointType, dbProxyEndpointType_);
          DARABONBA_PTR_FROM_JSON(DbProxyReadWriteMode, dbProxyReadWriteMode_);
        };
        DbProxyEndpointItemsItem() = default ;
        DbProxyEndpointItemsItem(const DbProxyEndpointItemsItem &) = default ;
        DbProxyEndpointItemsItem(DbProxyEndpointItemsItem &&) = default ;
        DbProxyEndpointItemsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DbProxyEndpointItemsItem() = default ;
        DbProxyEndpointItemsItem& operator=(const DbProxyEndpointItemsItem &) = default ;
        DbProxyEndpointItemsItem& operator=(DbProxyEndpointItemsItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dbProxyEndpointAliases_ == nullptr
        && this->dbProxyEndpointName_ == nullptr && this->dbProxyEndpointType_ == nullptr && this->dbProxyReadWriteMode_ == nullptr; };
        // dbProxyEndpointAliases Field Functions 
        bool hasDbProxyEndpointAliases() const { return this->dbProxyEndpointAliases_ != nullptr;};
        void deleteDbProxyEndpointAliases() { this->dbProxyEndpointAliases_ = nullptr;};
        inline string getDbProxyEndpointAliases() const { DARABONBA_PTR_GET_DEFAULT(dbProxyEndpointAliases_, "") };
        inline DbProxyEndpointItemsItem& setDbProxyEndpointAliases(string dbProxyEndpointAliases) { DARABONBA_PTR_SET_VALUE(dbProxyEndpointAliases_, dbProxyEndpointAliases) };


        // dbProxyEndpointName Field Functions 
        bool hasDbProxyEndpointName() const { return this->dbProxyEndpointName_ != nullptr;};
        void deleteDbProxyEndpointName() { this->dbProxyEndpointName_ = nullptr;};
        inline string getDbProxyEndpointName() const { DARABONBA_PTR_GET_DEFAULT(dbProxyEndpointName_, "") };
        inline DbProxyEndpointItemsItem& setDbProxyEndpointName(string dbProxyEndpointName) { DARABONBA_PTR_SET_VALUE(dbProxyEndpointName_, dbProxyEndpointName) };


        // dbProxyEndpointType Field Functions 
        bool hasDbProxyEndpointType() const { return this->dbProxyEndpointType_ != nullptr;};
        void deleteDbProxyEndpointType() { this->dbProxyEndpointType_ = nullptr;};
        inline string getDbProxyEndpointType() const { DARABONBA_PTR_GET_DEFAULT(dbProxyEndpointType_, "") };
        inline DbProxyEndpointItemsItem& setDbProxyEndpointType(string dbProxyEndpointType) { DARABONBA_PTR_SET_VALUE(dbProxyEndpointType_, dbProxyEndpointType) };


        // dbProxyReadWriteMode Field Functions 
        bool hasDbProxyReadWriteMode() const { return this->dbProxyReadWriteMode_ != nullptr;};
        void deleteDbProxyReadWriteMode() { this->dbProxyReadWriteMode_ = nullptr;};
        inline string getDbProxyReadWriteMode() const { DARABONBA_PTR_GET_DEFAULT(dbProxyReadWriteMode_, "") };
        inline DbProxyEndpointItemsItem& setDbProxyReadWriteMode(string dbProxyReadWriteMode) { DARABONBA_PTR_SET_VALUE(dbProxyReadWriteMode_, dbProxyReadWriteMode) };


      protected:
        // The description of the database proxy endpoint.
        shared_ptr<string> dbProxyEndpointAliases_ {};
        // The ID of the database proxy endpoint.
        shared_ptr<string> dbProxyEndpointName_ {};
        // The type of the database proxy endpoint. Valid values:
        // 
        // *   Custom: custom database proxy endpoint
        // *   RWSplit: default database proxy endpoint
        shared_ptr<string> dbProxyEndpointType_ {};
        // The read and write attributes of the database proxy endpoint.
        // 
        // *   ReadOnly
        // *   ReadWrite
        shared_ptr<string> dbProxyReadWriteMode_ {};
      };

      virtual bool empty() const override { return this->dbProxyEndpointItems_ == nullptr; };
      // dbProxyEndpointItems Field Functions 
      bool hasDbProxyEndpointItems() const { return this->dbProxyEndpointItems_ != nullptr;};
      void deleteDbProxyEndpointItems() { this->dbProxyEndpointItems_ = nullptr;};
      inline const vector<DbProxyEndpointItems::DbProxyEndpointItemsItem> & getDbProxyEndpointItems() const { DARABONBA_PTR_GET_CONST(dbProxyEndpointItems_, vector<DbProxyEndpointItems::DbProxyEndpointItemsItem>) };
      inline vector<DbProxyEndpointItems::DbProxyEndpointItemsItem> getDbProxyEndpointItems() { DARABONBA_PTR_GET(dbProxyEndpointItems_, vector<DbProxyEndpointItems::DbProxyEndpointItemsItem>) };
      inline DbProxyEndpointItems& setDbProxyEndpointItems(const vector<DbProxyEndpointItems::DbProxyEndpointItemsItem> & dbProxyEndpointItems) { DARABONBA_PTR_SET_VALUE(dbProxyEndpointItems_, dbProxyEndpointItems) };
      inline DbProxyEndpointItems& setDbProxyEndpointItems(vector<DbProxyEndpointItems::DbProxyEndpointItemsItem> && dbProxyEndpointItems) { DARABONBA_PTR_SET_RVALUE(dbProxyEndpointItems_, dbProxyEndpointItems) };


    protected:
      shared_ptr<vector<DbProxyEndpointItems::DbProxyEndpointItemsItem>> dbProxyEndpointItems_ {};
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
        // The ID of the proxy node.
        shared_ptr<string> nodeId_ {};
        // The ID of the zone in which the node is deployed.
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

    class DBProxyInstanceMinorVersions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBProxyInstanceMinorVersions& obj) { 
        DARABONBA_PTR_TO_JSON(DBProxyInstanceMinorVersions, DBProxyInstanceMinorVersions_);
      };
      friend void from_json(const Darabonba::Json& j, DBProxyInstanceMinorVersions& obj) { 
        DARABONBA_PTR_FROM_JSON(DBProxyInstanceMinorVersions, DBProxyInstanceMinorVersions_);
      };
      DBProxyInstanceMinorVersions() = default ;
      DBProxyInstanceMinorVersions(const DBProxyInstanceMinorVersions &) = default ;
      DBProxyInstanceMinorVersions(DBProxyInstanceMinorVersions &&) = default ;
      DBProxyInstanceMinorVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBProxyInstanceMinorVersions() = default ;
      DBProxyInstanceMinorVersions& operator=(const DBProxyInstanceMinorVersions &) = default ;
      DBProxyInstanceMinorVersions& operator=(DBProxyInstanceMinorVersions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->DBProxyInstanceMinorVersions_ == nullptr; };
      // DBProxyInstanceMinorVersions Field Functions 
      bool hasDBProxyInstanceMinorVersions() const { return this->DBProxyInstanceMinorVersions_ != nullptr;};
      void deleteDBProxyInstanceMinorVersions() { this->DBProxyInstanceMinorVersions_ = nullptr;};
      inline const vector<string> & getDBProxyInstanceMinorVersions() const { DARABONBA_PTR_GET_CONST(DBProxyInstanceMinorVersions_, vector<string>) };
      inline vector<string> getDBProxyInstanceMinorVersions() { DARABONBA_PTR_GET(DBProxyInstanceMinorVersions_, vector<string>) };
      inline DBProxyInstanceMinorVersions& setDBProxyInstanceMinorVersions(const vector<string> & DBProxyInstanceMinorVersions) { DARABONBA_PTR_SET_VALUE(DBProxyInstanceMinorVersions_, DBProxyInstanceMinorVersions) };
      inline DBProxyInstanceMinorVersions& setDBProxyInstanceMinorVersions(vector<string> && DBProxyInstanceMinorVersions) { DARABONBA_PTR_SET_RVALUE(DBProxyInstanceMinorVersions_, DBProxyInstanceMinorVersions) };


    protected:
      shared_ptr<vector<string>> DBProxyInstanceMinorVersions_ {};
    };

    class DBProxyConnectStringItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBProxyConnectStringItems& obj) { 
        DARABONBA_PTR_TO_JSON(DBProxyConnectStringItems, DBProxyConnectStringItems_);
      };
      friend void from_json(const Darabonba::Json& j, DBProxyConnectStringItems& obj) { 
        DARABONBA_PTR_FROM_JSON(DBProxyConnectStringItems, DBProxyConnectStringItems_);
      };
      DBProxyConnectStringItems() = default ;
      DBProxyConnectStringItems(const DBProxyConnectStringItems &) = default ;
      DBProxyConnectStringItems(DBProxyConnectStringItems &&) = default ;
      DBProxyConnectStringItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBProxyConnectStringItems() = default ;
      DBProxyConnectStringItems& operator=(const DBProxyConnectStringItems &) = default ;
      DBProxyConnectStringItems& operator=(DBProxyConnectStringItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DBProxyConnectStringItemsItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBProxyConnectStringItemsItem& obj) { 
          DARABONBA_PTR_TO_JSON(DBProxyConnectString, DBProxyConnectString_);
          DARABONBA_PTR_TO_JSON(DBProxyConnectStringNetType, DBProxyConnectStringNetType_);
          DARABONBA_PTR_TO_JSON(DBProxyConnectStringNetWorkType, DBProxyConnectStringNetWorkType_);
          DARABONBA_PTR_TO_JSON(DBProxyConnectStringPort, DBProxyConnectStringPort_);
          DARABONBA_PTR_TO_JSON(DBProxyEndpointId, DBProxyEndpointId_);
          DARABONBA_PTR_TO_JSON(DBProxyEndpointName, DBProxyEndpointName_);
          DARABONBA_PTR_TO_JSON(DBProxyVpcId, DBProxyVpcId_);
          DARABONBA_PTR_TO_JSON(DBProxyVpcInstanceId, DBProxyVpcInstanceId_);
          DARABONBA_PTR_TO_JSON(DBProxyVswitchId, DBProxyVswitchId_);
        };
        friend void from_json(const Darabonba::Json& j, DBProxyConnectStringItemsItem& obj) { 
          DARABONBA_PTR_FROM_JSON(DBProxyConnectString, DBProxyConnectString_);
          DARABONBA_PTR_FROM_JSON(DBProxyConnectStringNetType, DBProxyConnectStringNetType_);
          DARABONBA_PTR_FROM_JSON(DBProxyConnectStringNetWorkType, DBProxyConnectStringNetWorkType_);
          DARABONBA_PTR_FROM_JSON(DBProxyConnectStringPort, DBProxyConnectStringPort_);
          DARABONBA_PTR_FROM_JSON(DBProxyEndpointId, DBProxyEndpointId_);
          DARABONBA_PTR_FROM_JSON(DBProxyEndpointName, DBProxyEndpointName_);
          DARABONBA_PTR_FROM_JSON(DBProxyVpcId, DBProxyVpcId_);
          DARABONBA_PTR_FROM_JSON(DBProxyVpcInstanceId, DBProxyVpcInstanceId_);
          DARABONBA_PTR_FROM_JSON(DBProxyVswitchId, DBProxyVswitchId_);
        };
        DBProxyConnectStringItemsItem() = default ;
        DBProxyConnectStringItemsItem(const DBProxyConnectStringItemsItem &) = default ;
        DBProxyConnectStringItemsItem(DBProxyConnectStringItemsItem &&) = default ;
        DBProxyConnectStringItemsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBProxyConnectStringItemsItem() = default ;
        DBProxyConnectStringItemsItem& operator=(const DBProxyConnectStringItemsItem &) = default ;
        DBProxyConnectStringItemsItem& operator=(DBProxyConnectStringItemsItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->DBProxyConnectString_ == nullptr
        && this->DBProxyConnectStringNetType_ == nullptr && this->DBProxyConnectStringNetWorkType_ == nullptr && this->DBProxyConnectStringPort_ == nullptr && this->DBProxyEndpointId_ == nullptr && this->DBProxyEndpointName_ == nullptr
        && this->DBProxyVpcId_ == nullptr && this->DBProxyVpcInstanceId_ == nullptr && this->DBProxyVswitchId_ == nullptr; };
        // DBProxyConnectString Field Functions 
        bool hasDBProxyConnectString() const { return this->DBProxyConnectString_ != nullptr;};
        void deleteDBProxyConnectString() { this->DBProxyConnectString_ = nullptr;};
        inline string getDBProxyConnectString() const { DARABONBA_PTR_GET_DEFAULT(DBProxyConnectString_, "") };
        inline DBProxyConnectStringItemsItem& setDBProxyConnectString(string DBProxyConnectString) { DARABONBA_PTR_SET_VALUE(DBProxyConnectString_, DBProxyConnectString) };


        // DBProxyConnectStringNetType Field Functions 
        bool hasDBProxyConnectStringNetType() const { return this->DBProxyConnectStringNetType_ != nullptr;};
        void deleteDBProxyConnectStringNetType() { this->DBProxyConnectStringNetType_ = nullptr;};
        inline string getDBProxyConnectStringNetType() const { DARABONBA_PTR_GET_DEFAULT(DBProxyConnectStringNetType_, "") };
        inline DBProxyConnectStringItemsItem& setDBProxyConnectStringNetType(string DBProxyConnectStringNetType) { DARABONBA_PTR_SET_VALUE(DBProxyConnectStringNetType_, DBProxyConnectStringNetType) };


        // DBProxyConnectStringNetWorkType Field Functions 
        bool hasDBProxyConnectStringNetWorkType() const { return this->DBProxyConnectStringNetWorkType_ != nullptr;};
        void deleteDBProxyConnectStringNetWorkType() { this->DBProxyConnectStringNetWorkType_ = nullptr;};
        inline string getDBProxyConnectStringNetWorkType() const { DARABONBA_PTR_GET_DEFAULT(DBProxyConnectStringNetWorkType_, "") };
        inline DBProxyConnectStringItemsItem& setDBProxyConnectStringNetWorkType(string DBProxyConnectStringNetWorkType) { DARABONBA_PTR_SET_VALUE(DBProxyConnectStringNetWorkType_, DBProxyConnectStringNetWorkType) };


        // DBProxyConnectStringPort Field Functions 
        bool hasDBProxyConnectStringPort() const { return this->DBProxyConnectStringPort_ != nullptr;};
        void deleteDBProxyConnectStringPort() { this->DBProxyConnectStringPort_ = nullptr;};
        inline string getDBProxyConnectStringPort() const { DARABONBA_PTR_GET_DEFAULT(DBProxyConnectStringPort_, "") };
        inline DBProxyConnectStringItemsItem& setDBProxyConnectStringPort(string DBProxyConnectStringPort) { DARABONBA_PTR_SET_VALUE(DBProxyConnectStringPort_, DBProxyConnectStringPort) };


        // DBProxyEndpointId Field Functions 
        bool hasDBProxyEndpointId() const { return this->DBProxyEndpointId_ != nullptr;};
        void deleteDBProxyEndpointId() { this->DBProxyEndpointId_ = nullptr;};
        inline string getDBProxyEndpointId() const { DARABONBA_PTR_GET_DEFAULT(DBProxyEndpointId_, "") };
        inline DBProxyConnectStringItemsItem& setDBProxyEndpointId(string DBProxyEndpointId) { DARABONBA_PTR_SET_VALUE(DBProxyEndpointId_, DBProxyEndpointId) };


        // DBProxyEndpointName Field Functions 
        bool hasDBProxyEndpointName() const { return this->DBProxyEndpointName_ != nullptr;};
        void deleteDBProxyEndpointName() { this->DBProxyEndpointName_ = nullptr;};
        inline string getDBProxyEndpointName() const { DARABONBA_PTR_GET_DEFAULT(DBProxyEndpointName_, "") };
        inline DBProxyConnectStringItemsItem& setDBProxyEndpointName(string DBProxyEndpointName) { DARABONBA_PTR_SET_VALUE(DBProxyEndpointName_, DBProxyEndpointName) };


        // DBProxyVpcId Field Functions 
        bool hasDBProxyVpcId() const { return this->DBProxyVpcId_ != nullptr;};
        void deleteDBProxyVpcId() { this->DBProxyVpcId_ = nullptr;};
        inline string getDBProxyVpcId() const { DARABONBA_PTR_GET_DEFAULT(DBProxyVpcId_, "") };
        inline DBProxyConnectStringItemsItem& setDBProxyVpcId(string DBProxyVpcId) { DARABONBA_PTR_SET_VALUE(DBProxyVpcId_, DBProxyVpcId) };


        // DBProxyVpcInstanceId Field Functions 
        bool hasDBProxyVpcInstanceId() const { return this->DBProxyVpcInstanceId_ != nullptr;};
        void deleteDBProxyVpcInstanceId() { this->DBProxyVpcInstanceId_ = nullptr;};
        inline string getDBProxyVpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBProxyVpcInstanceId_, "") };
        inline DBProxyConnectStringItemsItem& setDBProxyVpcInstanceId(string DBProxyVpcInstanceId) { DARABONBA_PTR_SET_VALUE(DBProxyVpcInstanceId_, DBProxyVpcInstanceId) };


        // DBProxyVswitchId Field Functions 
        bool hasDBProxyVswitchId() const { return this->DBProxyVswitchId_ != nullptr;};
        void deleteDBProxyVswitchId() { this->DBProxyVswitchId_ = nullptr;};
        inline string getDBProxyVswitchId() const { DARABONBA_PTR_GET_DEFAULT(DBProxyVswitchId_, "") };
        inline DBProxyConnectStringItemsItem& setDBProxyVswitchId(string DBProxyVswitchId) { DARABONBA_PTR_SET_VALUE(DBProxyVswitchId_, DBProxyVswitchId) };


      protected:
        // The database proxy endpoint.
        shared_ptr<string> DBProxyConnectString_ {};
        // The network type of the database proxy endpoint. A database proxy endpoint is formerly referred to as a proxy terminal. Valid values:
        // 
        // *   OuterString: Internet
        // *   InnerString: internal network
        shared_ptr<string> DBProxyConnectStringNetType_ {};
        // The network type of the database proxy. Valid values:
        // 
        // *   0: Internet
        // *   1: classic network
        // *   2: virtual private cloud (VPC)
        shared_ptr<string> DBProxyConnectStringNetWorkType_ {};
        // The port that is associated with the database proxy endpoint.
        shared_ptr<string> DBProxyConnectStringPort_ {};
        // The ID of the backend database proxy endpoint.
        shared_ptr<string> DBProxyEndpointId_ {};
        // The name of the database proxy endpoint. The name can be replaced by the ID of the database proxy endpoint.
        shared_ptr<string> DBProxyEndpointName_ {};
        // The VPC of the database proxy.
        shared_ptr<string> DBProxyVpcId_ {};
        // The ID of the database proxy instance.
        shared_ptr<string> DBProxyVpcInstanceId_ {};
        // The vSwitch of the database proxy.
        shared_ptr<string> DBProxyVswitchId_ {};
      };

      virtual bool empty() const override { return this->DBProxyConnectStringItems_ == nullptr; };
      // DBProxyConnectStringItems Field Functions 
      bool hasDBProxyConnectStringItems() const { return this->DBProxyConnectStringItems_ != nullptr;};
      void deleteDBProxyConnectStringItems() { this->DBProxyConnectStringItems_ = nullptr;};
      inline const vector<DBProxyConnectStringItems::DBProxyConnectStringItemsItem> & getDBProxyConnectStringItems() const { DARABONBA_PTR_GET_CONST(DBProxyConnectStringItems_, vector<DBProxyConnectStringItems::DBProxyConnectStringItemsItem>) };
      inline vector<DBProxyConnectStringItems::DBProxyConnectStringItemsItem> getDBProxyConnectStringItems() { DARABONBA_PTR_GET(DBProxyConnectStringItems_, vector<DBProxyConnectStringItems::DBProxyConnectStringItemsItem>) };
      inline DBProxyConnectStringItems& setDBProxyConnectStringItems(const vector<DBProxyConnectStringItems::DBProxyConnectStringItemsItem> & dBProxyConnectStringItems) { DARABONBA_PTR_SET_VALUE(DBProxyConnectStringItems_, dBProxyConnectStringItems) };
      inline DBProxyConnectStringItems& setDBProxyConnectStringItems(vector<DBProxyConnectStringItems::DBProxyConnectStringItemsItem> && dBProxyConnectStringItems) { DARABONBA_PTR_SET_RVALUE(DBProxyConnectStringItems_, dBProxyConnectStringItems) };


    protected:
      shared_ptr<vector<DBProxyConnectStringItems::DBProxyConnectStringItemsItem>> DBProxyConnectStringItems_ {};
    };

    class DBProxyAVZones : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBProxyAVZones& obj) { 
        DARABONBA_PTR_TO_JSON(DBProxyAVZones, DBProxyAVZones_);
      };
      friend void from_json(const Darabonba::Json& j, DBProxyAVZones& obj) { 
        DARABONBA_PTR_FROM_JSON(DBProxyAVZones, DBProxyAVZones_);
      };
      DBProxyAVZones() = default ;
      DBProxyAVZones(const DBProxyAVZones &) = default ;
      DBProxyAVZones(DBProxyAVZones &&) = default ;
      DBProxyAVZones(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBProxyAVZones() = default ;
      DBProxyAVZones& operator=(const DBProxyAVZones &) = default ;
      DBProxyAVZones& operator=(DBProxyAVZones &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->DBProxyAVZones_ == nullptr; };
      // DBProxyAVZones Field Functions 
      bool hasDBProxyAVZones() const { return this->DBProxyAVZones_ != nullptr;};
      void deleteDBProxyAVZones() { this->DBProxyAVZones_ = nullptr;};
      inline const vector<string> & getDBProxyAVZones() const { DARABONBA_PTR_GET_CONST(DBProxyAVZones_, vector<string>) };
      inline vector<string> getDBProxyAVZones() { DARABONBA_PTR_GET(DBProxyAVZones_, vector<string>) };
      inline DBProxyAVZones& setDBProxyAVZones(const vector<string> & DBProxyAVZones) { DARABONBA_PTR_SET_VALUE(DBProxyAVZones_, DBProxyAVZones) };
      inline DBProxyAVZones& setDBProxyAVZones(vector<string> && DBProxyAVZones) { DARABONBA_PTR_SET_RVALUE(DBProxyAVZones_, DBProxyAVZones) };


    protected:
      shared_ptr<vector<string>> DBProxyAVZones_ {};
    };

    virtual bool empty() const override { return this->DBProxyAVZones_ == nullptr
        && this->DBProxyConnectStringItems_ == nullptr && this->DBProxyEngineType_ == nullptr && this->DBProxyInstanceCurrentMinorVersion_ == nullptr && this->DBProxyInstanceLatestMinorVersion_ == nullptr && this->DBProxyInstanceMinorVersions_ == nullptr
        && this->DBProxyInstanceName_ == nullptr && this->DBProxyInstanceNum_ == nullptr && this->DBProxyInstanceSize_ == nullptr && this->DBProxyInstanceStatus_ == nullptr && this->DBProxyInstanceType_ == nullptr
        && this->DBProxyKindCode_ == nullptr && this->DBProxyNodes_ == nullptr && this->DBProxyPersistentConnectionStatus_ == nullptr && this->DBProxyServiceStatus_ == nullptr && this->dbProxyEndpointItems_ == nullptr
        && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr; };
    // DBProxyAVZones Field Functions 
    bool hasDBProxyAVZones() const { return this->DBProxyAVZones_ != nullptr;};
    void deleteDBProxyAVZones() { this->DBProxyAVZones_ = nullptr;};
    inline const DescribeDBProxyResponseBody::DBProxyAVZones & getDBProxyAVZones() const { DARABONBA_PTR_GET_CONST(DBProxyAVZones_, DescribeDBProxyResponseBody::DBProxyAVZones) };
    inline DescribeDBProxyResponseBody::DBProxyAVZones getDBProxyAVZones() { DARABONBA_PTR_GET(DBProxyAVZones_, DescribeDBProxyResponseBody::DBProxyAVZones) };
    inline DescribeDBProxyResponseBody& setDBProxyAVZones(const DescribeDBProxyResponseBody::DBProxyAVZones & dBProxyAVZones) { DARABONBA_PTR_SET_VALUE(DBProxyAVZones_, dBProxyAVZones) };
    inline DescribeDBProxyResponseBody& setDBProxyAVZones(DescribeDBProxyResponseBody::DBProxyAVZones && dBProxyAVZones) { DARABONBA_PTR_SET_RVALUE(DBProxyAVZones_, dBProxyAVZones) };


    // DBProxyConnectStringItems Field Functions 
    bool hasDBProxyConnectStringItems() const { return this->DBProxyConnectStringItems_ != nullptr;};
    void deleteDBProxyConnectStringItems() { this->DBProxyConnectStringItems_ = nullptr;};
    inline const DescribeDBProxyResponseBody::DBProxyConnectStringItems & getDBProxyConnectStringItems() const { DARABONBA_PTR_GET_CONST(DBProxyConnectStringItems_, DescribeDBProxyResponseBody::DBProxyConnectStringItems) };
    inline DescribeDBProxyResponseBody::DBProxyConnectStringItems getDBProxyConnectStringItems() { DARABONBA_PTR_GET(DBProxyConnectStringItems_, DescribeDBProxyResponseBody::DBProxyConnectStringItems) };
    inline DescribeDBProxyResponseBody& setDBProxyConnectStringItems(const DescribeDBProxyResponseBody::DBProxyConnectStringItems & dBProxyConnectStringItems) { DARABONBA_PTR_SET_VALUE(DBProxyConnectStringItems_, dBProxyConnectStringItems) };
    inline DescribeDBProxyResponseBody& setDBProxyConnectStringItems(DescribeDBProxyResponseBody::DBProxyConnectStringItems && dBProxyConnectStringItems) { DARABONBA_PTR_SET_RVALUE(DBProxyConnectStringItems_, dBProxyConnectStringItems) };


    // DBProxyEngineType Field Functions 
    bool hasDBProxyEngineType() const { return this->DBProxyEngineType_ != nullptr;};
    void deleteDBProxyEngineType() { this->DBProxyEngineType_ = nullptr;};
    inline string getDBProxyEngineType() const { DARABONBA_PTR_GET_DEFAULT(DBProxyEngineType_, "") };
    inline DescribeDBProxyResponseBody& setDBProxyEngineType(string DBProxyEngineType) { DARABONBA_PTR_SET_VALUE(DBProxyEngineType_, DBProxyEngineType) };


    // DBProxyInstanceCurrentMinorVersion Field Functions 
    bool hasDBProxyInstanceCurrentMinorVersion() const { return this->DBProxyInstanceCurrentMinorVersion_ != nullptr;};
    void deleteDBProxyInstanceCurrentMinorVersion() { this->DBProxyInstanceCurrentMinorVersion_ = nullptr;};
    inline string getDBProxyInstanceCurrentMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(DBProxyInstanceCurrentMinorVersion_, "") };
    inline DescribeDBProxyResponseBody& setDBProxyInstanceCurrentMinorVersion(string DBProxyInstanceCurrentMinorVersion) { DARABONBA_PTR_SET_VALUE(DBProxyInstanceCurrentMinorVersion_, DBProxyInstanceCurrentMinorVersion) };


    // DBProxyInstanceLatestMinorVersion Field Functions 
    bool hasDBProxyInstanceLatestMinorVersion() const { return this->DBProxyInstanceLatestMinorVersion_ != nullptr;};
    void deleteDBProxyInstanceLatestMinorVersion() { this->DBProxyInstanceLatestMinorVersion_ = nullptr;};
    inline string getDBProxyInstanceLatestMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(DBProxyInstanceLatestMinorVersion_, "") };
    inline DescribeDBProxyResponseBody& setDBProxyInstanceLatestMinorVersion(string DBProxyInstanceLatestMinorVersion) { DARABONBA_PTR_SET_VALUE(DBProxyInstanceLatestMinorVersion_, DBProxyInstanceLatestMinorVersion) };


    // DBProxyInstanceMinorVersions Field Functions 
    bool hasDBProxyInstanceMinorVersions() const { return this->DBProxyInstanceMinorVersions_ != nullptr;};
    void deleteDBProxyInstanceMinorVersions() { this->DBProxyInstanceMinorVersions_ = nullptr;};
    inline const DescribeDBProxyResponseBody::DBProxyInstanceMinorVersions & getDBProxyInstanceMinorVersions() const { DARABONBA_PTR_GET_CONST(DBProxyInstanceMinorVersions_, DescribeDBProxyResponseBody::DBProxyInstanceMinorVersions) };
    inline DescribeDBProxyResponseBody::DBProxyInstanceMinorVersions getDBProxyInstanceMinorVersions() { DARABONBA_PTR_GET(DBProxyInstanceMinorVersions_, DescribeDBProxyResponseBody::DBProxyInstanceMinorVersions) };
    inline DescribeDBProxyResponseBody& setDBProxyInstanceMinorVersions(const DescribeDBProxyResponseBody::DBProxyInstanceMinorVersions & dBProxyInstanceMinorVersions) { DARABONBA_PTR_SET_VALUE(DBProxyInstanceMinorVersions_, dBProxyInstanceMinorVersions) };
    inline DescribeDBProxyResponseBody& setDBProxyInstanceMinorVersions(DescribeDBProxyResponseBody::DBProxyInstanceMinorVersions && dBProxyInstanceMinorVersions) { DARABONBA_PTR_SET_RVALUE(DBProxyInstanceMinorVersions_, dBProxyInstanceMinorVersions) };


    // DBProxyInstanceName Field Functions 
    bool hasDBProxyInstanceName() const { return this->DBProxyInstanceName_ != nullptr;};
    void deleteDBProxyInstanceName() { this->DBProxyInstanceName_ = nullptr;};
    inline string getDBProxyInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBProxyInstanceName_, "") };
    inline DescribeDBProxyResponseBody& setDBProxyInstanceName(string DBProxyInstanceName) { DARABONBA_PTR_SET_VALUE(DBProxyInstanceName_, DBProxyInstanceName) };


    // DBProxyInstanceNum Field Functions 
    bool hasDBProxyInstanceNum() const { return this->DBProxyInstanceNum_ != nullptr;};
    void deleteDBProxyInstanceNum() { this->DBProxyInstanceNum_ = nullptr;};
    inline int32_t getDBProxyInstanceNum() const { DARABONBA_PTR_GET_DEFAULT(DBProxyInstanceNum_, 0) };
    inline DescribeDBProxyResponseBody& setDBProxyInstanceNum(int32_t DBProxyInstanceNum) { DARABONBA_PTR_SET_VALUE(DBProxyInstanceNum_, DBProxyInstanceNum) };


    // DBProxyInstanceSize Field Functions 
    bool hasDBProxyInstanceSize() const { return this->DBProxyInstanceSize_ != nullptr;};
    void deleteDBProxyInstanceSize() { this->DBProxyInstanceSize_ = nullptr;};
    inline string getDBProxyInstanceSize() const { DARABONBA_PTR_GET_DEFAULT(DBProxyInstanceSize_, "") };
    inline DescribeDBProxyResponseBody& setDBProxyInstanceSize(string DBProxyInstanceSize) { DARABONBA_PTR_SET_VALUE(DBProxyInstanceSize_, DBProxyInstanceSize) };


    // DBProxyInstanceStatus Field Functions 
    bool hasDBProxyInstanceStatus() const { return this->DBProxyInstanceStatus_ != nullptr;};
    void deleteDBProxyInstanceStatus() { this->DBProxyInstanceStatus_ = nullptr;};
    inline string getDBProxyInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBProxyInstanceStatus_, "") };
    inline DescribeDBProxyResponseBody& setDBProxyInstanceStatus(string DBProxyInstanceStatus) { DARABONBA_PTR_SET_VALUE(DBProxyInstanceStatus_, DBProxyInstanceStatus) };


    // DBProxyInstanceType Field Functions 
    bool hasDBProxyInstanceType() const { return this->DBProxyInstanceType_ != nullptr;};
    void deleteDBProxyInstanceType() { this->DBProxyInstanceType_ = nullptr;};
    inline string getDBProxyInstanceType() const { DARABONBA_PTR_GET_DEFAULT(DBProxyInstanceType_, "") };
    inline DescribeDBProxyResponseBody& setDBProxyInstanceType(string DBProxyInstanceType) { DARABONBA_PTR_SET_VALUE(DBProxyInstanceType_, DBProxyInstanceType) };


    // DBProxyKindCode Field Functions 
    bool hasDBProxyKindCode() const { return this->DBProxyKindCode_ != nullptr;};
    void deleteDBProxyKindCode() { this->DBProxyKindCode_ = nullptr;};
    inline string getDBProxyKindCode() const { DARABONBA_PTR_GET_DEFAULT(DBProxyKindCode_, "") };
    inline DescribeDBProxyResponseBody& setDBProxyKindCode(string DBProxyKindCode) { DARABONBA_PTR_SET_VALUE(DBProxyKindCode_, DBProxyKindCode) };


    // DBProxyNodes Field Functions 
    bool hasDBProxyNodes() const { return this->DBProxyNodes_ != nullptr;};
    void deleteDBProxyNodes() { this->DBProxyNodes_ = nullptr;};
    inline const DescribeDBProxyResponseBody::DBProxyNodes & getDBProxyNodes() const { DARABONBA_PTR_GET_CONST(DBProxyNodes_, DescribeDBProxyResponseBody::DBProxyNodes) };
    inline DescribeDBProxyResponseBody::DBProxyNodes getDBProxyNodes() { DARABONBA_PTR_GET(DBProxyNodes_, DescribeDBProxyResponseBody::DBProxyNodes) };
    inline DescribeDBProxyResponseBody& setDBProxyNodes(const DescribeDBProxyResponseBody::DBProxyNodes & dBProxyNodes) { DARABONBA_PTR_SET_VALUE(DBProxyNodes_, dBProxyNodes) };
    inline DescribeDBProxyResponseBody& setDBProxyNodes(DescribeDBProxyResponseBody::DBProxyNodes && dBProxyNodes) { DARABONBA_PTR_SET_RVALUE(DBProxyNodes_, dBProxyNodes) };


    // DBProxyPersistentConnectionStatus Field Functions 
    bool hasDBProxyPersistentConnectionStatus() const { return this->DBProxyPersistentConnectionStatus_ != nullptr;};
    void deleteDBProxyPersistentConnectionStatus() { this->DBProxyPersistentConnectionStatus_ = nullptr;};
    inline string getDBProxyPersistentConnectionStatus() const { DARABONBA_PTR_GET_DEFAULT(DBProxyPersistentConnectionStatus_, "") };
    inline DescribeDBProxyResponseBody& setDBProxyPersistentConnectionStatus(string DBProxyPersistentConnectionStatus) { DARABONBA_PTR_SET_VALUE(DBProxyPersistentConnectionStatus_, DBProxyPersistentConnectionStatus) };


    // DBProxyServiceStatus Field Functions 
    bool hasDBProxyServiceStatus() const { return this->DBProxyServiceStatus_ != nullptr;};
    void deleteDBProxyServiceStatus() { this->DBProxyServiceStatus_ = nullptr;};
    inline string getDBProxyServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBProxyServiceStatus_, "") };
    inline DescribeDBProxyResponseBody& setDBProxyServiceStatus(string DBProxyServiceStatus) { DARABONBA_PTR_SET_VALUE(DBProxyServiceStatus_, DBProxyServiceStatus) };


    // dbProxyEndpointItems Field Functions 
    bool hasDbProxyEndpointItems() const { return this->dbProxyEndpointItems_ != nullptr;};
    void deleteDbProxyEndpointItems() { this->dbProxyEndpointItems_ = nullptr;};
    inline const DescribeDBProxyResponseBody::DbProxyEndpointItems & getDbProxyEndpointItems() const { DARABONBA_PTR_GET_CONST(dbProxyEndpointItems_, DescribeDBProxyResponseBody::DbProxyEndpointItems) };
    inline DescribeDBProxyResponseBody::DbProxyEndpointItems getDbProxyEndpointItems() { DARABONBA_PTR_GET(dbProxyEndpointItems_, DescribeDBProxyResponseBody::DbProxyEndpointItems) };
    inline DescribeDBProxyResponseBody& setDbProxyEndpointItems(const DescribeDBProxyResponseBody::DbProxyEndpointItems & dbProxyEndpointItems) { DARABONBA_PTR_SET_VALUE(dbProxyEndpointItems_, dbProxyEndpointItems) };
    inline DescribeDBProxyResponseBody& setDbProxyEndpointItems(DescribeDBProxyResponseBody::DbProxyEndpointItems && dbProxyEndpointItems) { DARABONBA_PTR_SET_RVALUE(dbProxyEndpointItems_, dbProxyEndpointItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBProxyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDBProxyResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The list of zones that are available for the database proxy.
    shared_ptr<DescribeDBProxyResponseBody::DBProxyAVZones> DBProxyAVZones_ {};
    // An array consisting of the information about the database proxy endpoint that is created for the instance.
    shared_ptr<DescribeDBProxyResponseBody::DBProxyConnectStringItems> DBProxyConnectStringItems_ {};
    // An internal parameter. You can ignore this parameter.
    shared_ptr<string> DBProxyEngineType_ {};
    // The version of the proxy instance.
    shared_ptr<string> DBProxyInstanceCurrentMinorVersion_ {};
    // The latest version that is available for the proxy instance.
    shared_ptr<string> DBProxyInstanceLatestMinorVersion_ {};
    shared_ptr<DescribeDBProxyResponseBody::DBProxyInstanceMinorVersions> DBProxyInstanceMinorVersions_ {};
    // The name of the proxy instance.
    shared_ptr<string> DBProxyInstanceName_ {};
    // The number of proxies that are enabled on the instance.
    shared_ptr<int32_t> DBProxyInstanceNum_ {};
    // This parameter is available only for ApsaraDB RDS for PostgreSQL instances. The specifications of the proxy instance that is enabled.
    // 
    // Format: `Number of cores/Memory capacity`.
    // 
    // For example, a value of 4/8 indicates that the proxy instance has 4 cores and 8 GB of memory.
    shared_ptr<string> DBProxyInstanceSize_ {};
    // The status of the proxy instance.
    // 
    // *   DBInstanceClassChanging: The specifications of the proxy instance are being changed.
    // *   Creating: The proxy instance is being created.
    // *   Running: The proxy instance is running.
    // *   Deleting: The proxy instance is being deleted.
    shared_ptr<string> DBProxyInstanceStatus_ {};
    // The type of the database proxy that is enabled on the instance. Valid values:
    // 
    // *   1: shared database proxy
    // *   2: dedicated database proxy
    // *   3: general-purpose database proxy
    // 
    // >  ApsaraDB RDS for PostgreSQL does not support shared database proxies.
    shared_ptr<string> DBProxyInstanceType_ {};
    // An internal parameter. You do not need to specify this parameter.
    shared_ptr<string> DBProxyKindCode_ {};
    // The proxy nodes.
    shared_ptr<DescribeDBProxyResponseBody::DBProxyNodes> DBProxyNodes_ {};
    // The status of persistence connections. Valid values:
    // 
    // *   **Enabled**
    // *   **Disabled**
    // *   **Unsupported**
    shared_ptr<string> DBProxyPersistentConnectionStatus_ {};
    // The status of the database proxy.
    // 
    // *   Shutdown: disabled
    // *   Startup: enabled
    shared_ptr<string> DBProxyServiceStatus_ {};
    // The proxy terminals of the instance.
    shared_ptr<DescribeDBProxyResponseBody::DbProxyEndpointItems> dbProxyEndpointItems_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
