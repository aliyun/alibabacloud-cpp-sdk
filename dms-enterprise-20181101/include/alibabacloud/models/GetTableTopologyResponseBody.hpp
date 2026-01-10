// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLETOPOLOGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTABLETOPOLOGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetTableTopologyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableTopologyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TableTopology, tableTopology_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableTopologyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TableTopology, tableTopology_);
    };
    GetTableTopologyResponseBody() = default ;
    GetTableTopologyResponseBody(const GetTableTopologyResponseBody &) = default ;
    GetTableTopologyResponseBody(GetTableTopologyResponseBody &&) = default ;
    GetTableTopologyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableTopologyResponseBody() = default ;
    GetTableTopologyResponseBody& operator=(const GetTableTopologyResponseBody &) = default ;
    GetTableTopologyResponseBody& operator=(GetTableTopologyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TableTopology : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TableTopology& obj) { 
        DARABONBA_PTR_TO_JSON(Logic, logic_);
        DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
        DARABONBA_PTR_TO_JSON(TableTopologyInfoList, tableTopologyInfoList_);
      };
      friend void from_json(const Darabonba::Json& j, TableTopology& obj) { 
        DARABONBA_PTR_FROM_JSON(Logic, logic_);
        DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        DARABONBA_PTR_FROM_JSON(TableTopologyInfoList, tableTopologyInfoList_);
      };
      TableTopology() = default ;
      TableTopology(const TableTopology &) = default ;
      TableTopology(TableTopology &&) = default ;
      TableTopology(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TableTopology() = default ;
      TableTopology& operator=(const TableTopology &) = default ;
      TableTopology& operator=(TableTopology &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TableTopologyInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TableTopologyInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(DbId, dbId_);
          DARABONBA_PTR_TO_JSON(DbName, dbName_);
          DARABONBA_PTR_TO_JSON(DbSearchName, dbSearchName_);
          DARABONBA_PTR_TO_JSON(DbType, dbType_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceResourceId, instanceResourceId_);
          DARABONBA_PTR_TO_JSON(InstanceSource, instanceSource_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(TableCount, tableCount_);
          DARABONBA_PTR_TO_JSON(TableNameExpr, tableNameExpr_);
          DARABONBA_PTR_TO_JSON(TableNameList, tableNameList_);
        };
        friend void from_json(const Darabonba::Json& j, TableTopologyInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(DbId, dbId_);
          DARABONBA_PTR_FROM_JSON(DbName, dbName_);
          DARABONBA_PTR_FROM_JSON(DbSearchName, dbSearchName_);
          DARABONBA_PTR_FROM_JSON(DbType, dbType_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceResourceId, instanceResourceId_);
          DARABONBA_PTR_FROM_JSON(InstanceSource, instanceSource_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(TableCount, tableCount_);
          DARABONBA_PTR_FROM_JSON(TableNameExpr, tableNameExpr_);
          DARABONBA_PTR_FROM_JSON(TableNameList, tableNameList_);
        };
        TableTopologyInfoList() = default ;
        TableTopologyInfoList(const TableTopologyInfoList &) = default ;
        TableTopologyInfoList(TableTopologyInfoList &&) = default ;
        TableTopologyInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TableTopologyInfoList() = default ;
        TableTopologyInfoList& operator=(const TableTopologyInfoList &) = default ;
        TableTopologyInfoList& operator=(TableTopologyInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dbId_ == nullptr
        && this->dbName_ == nullptr && this->dbSearchName_ == nullptr && this->dbType_ == nullptr && this->instanceId_ == nullptr && this->instanceResourceId_ == nullptr
        && this->instanceSource_ == nullptr && this->regionId_ == nullptr && this->tableCount_ == nullptr && this->tableNameExpr_ == nullptr && this->tableNameList_ == nullptr; };
        // dbId Field Functions 
        bool hasDbId() const { return this->dbId_ != nullptr;};
        void deleteDbId() { this->dbId_ = nullptr;};
        inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
        inline TableTopologyInfoList& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


        // dbName Field Functions 
        bool hasDbName() const { return this->dbName_ != nullptr;};
        void deleteDbName() { this->dbName_ = nullptr;};
        inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
        inline TableTopologyInfoList& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


        // dbSearchName Field Functions 
        bool hasDbSearchName() const { return this->dbSearchName_ != nullptr;};
        void deleteDbSearchName() { this->dbSearchName_ = nullptr;};
        inline string getDbSearchName() const { DARABONBA_PTR_GET_DEFAULT(dbSearchName_, "") };
        inline TableTopologyInfoList& setDbSearchName(string dbSearchName) { DARABONBA_PTR_SET_VALUE(dbSearchName_, dbSearchName) };


        // dbType Field Functions 
        bool hasDbType() const { return this->dbType_ != nullptr;};
        void deleteDbType() { this->dbType_ = nullptr;};
        inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
        inline TableTopologyInfoList& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
        inline TableTopologyInfoList& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceResourceId Field Functions 
        bool hasInstanceResourceId() const { return this->instanceResourceId_ != nullptr;};
        void deleteInstanceResourceId() { this->instanceResourceId_ = nullptr;};
        inline string getInstanceResourceId() const { DARABONBA_PTR_GET_DEFAULT(instanceResourceId_, "") };
        inline TableTopologyInfoList& setInstanceResourceId(string instanceResourceId) { DARABONBA_PTR_SET_VALUE(instanceResourceId_, instanceResourceId) };


        // instanceSource Field Functions 
        bool hasInstanceSource() const { return this->instanceSource_ != nullptr;};
        void deleteInstanceSource() { this->instanceSource_ = nullptr;};
        inline string getInstanceSource() const { DARABONBA_PTR_GET_DEFAULT(instanceSource_, "") };
        inline TableTopologyInfoList& setInstanceSource(string instanceSource) { DARABONBA_PTR_SET_VALUE(instanceSource_, instanceSource) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline TableTopologyInfoList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // tableCount Field Functions 
        bool hasTableCount() const { return this->tableCount_ != nullptr;};
        void deleteTableCount() { this->tableCount_ = nullptr;};
        inline int64_t getTableCount() const { DARABONBA_PTR_GET_DEFAULT(tableCount_, 0L) };
        inline TableTopologyInfoList& setTableCount(int64_t tableCount) { DARABONBA_PTR_SET_VALUE(tableCount_, tableCount) };


        // tableNameExpr Field Functions 
        bool hasTableNameExpr() const { return this->tableNameExpr_ != nullptr;};
        void deleteTableNameExpr() { this->tableNameExpr_ = nullptr;};
        inline string getTableNameExpr() const { DARABONBA_PTR_GET_DEFAULT(tableNameExpr_, "") };
        inline TableTopologyInfoList& setTableNameExpr(string tableNameExpr) { DARABONBA_PTR_SET_VALUE(tableNameExpr_, tableNameExpr) };


        // tableNameList Field Functions 
        bool hasTableNameList() const { return this->tableNameList_ != nullptr;};
        void deleteTableNameList() { this->tableNameList_ = nullptr;};
        inline string getTableNameList() const { DARABONBA_PTR_GET_DEFAULT(tableNameList_, "") };
        inline TableTopologyInfoList& setTableNameList(string tableNameList) { DARABONBA_PTR_SET_VALUE(tableNameList_, tableNameList) };


      protected:
        // The ID of the physical database.
        shared_ptr<int64_t> dbId_ {};
        // The name of the database.
        shared_ptr<string> dbName_ {};
        // The name that is used to search for the database.
        // > We recommend that you do not use this parameter for business development. The format of the parameter value may be modified in later versions.
        shared_ptr<string> dbSearchName_ {};
        // The database engine.
        shared_ptr<string> dbType_ {};
        // The ID of the instance to which the physical database belongs.
        shared_ptr<int64_t> instanceId_ {};
        // The ID of the resource related to the instance. The resource corresponds with the database instance type returned in the InstanceSource parameter.
        // 
        // *   **RDS**:The ID of the ApsaraDB RDS instance.
        // *   **ECS_OWN**: The ID of the Elastic Compute Service (ECS) instance.
        // *   **PUBLIC_OWN**: This parameter is left empty for self-managed database instances that are connected over the Internet.
        // *   **VPC_ID**:The ID of the virtual private cloud (VPC).
        // *   **GATEWAY**: The ID of the database gateway.
        shared_ptr<string> instanceResourceId_ {};
        // The type of the database instance. Valid values:
        // 
        // *   **RDS**: an ApsaraDB RDS instance.
        // *   **ECS_OWN**: a self-managed database that is deployed on an ECS instance
        // *   **PUBLIC_OWN**: a self-managed database instance that is connected over the Internet.
        // *   **VPC_ID**: a self-managed database instance in a VPC that is connected over Express Connect circuits.
        // *   **GATEWAY**: a database instance connected by using a database gateway.
        shared_ptr<string> instanceSource_ {};
        // The region ID of the instance.
        shared_ptr<string> regionId_ {};
        // The number of tables.
        shared_ptr<int64_t> tableCount_ {};
        // The expression of the names of logical tables.
        // 
        // **
        // 
        // **Description** This parameter is not returned for physical tables.
        shared_ptr<string> tableNameExpr_ {};
        // The names of tables.
        // 
        // > The table names are separated by commas (,).
        shared_ptr<string> tableNameList_ {};
      };

      virtual bool empty() const override { return this->logic_ == nullptr
        && this->tableGuid_ == nullptr && this->tableName_ == nullptr && this->tableTopologyInfoList_ == nullptr; };
      // logic Field Functions 
      bool hasLogic() const { return this->logic_ != nullptr;};
      void deleteLogic() { this->logic_ = nullptr;};
      inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
      inline TableTopology& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


      // tableGuid Field Functions 
      bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
      void deleteTableGuid() { this->tableGuid_ = nullptr;};
      inline string getTableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
      inline TableTopology& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline TableTopology& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      // tableTopologyInfoList Field Functions 
      bool hasTableTopologyInfoList() const { return this->tableTopologyInfoList_ != nullptr;};
      void deleteTableTopologyInfoList() { this->tableTopologyInfoList_ = nullptr;};
      inline const vector<TableTopology::TableTopologyInfoList> & getTableTopologyInfoList() const { DARABONBA_PTR_GET_CONST(tableTopologyInfoList_, vector<TableTopology::TableTopologyInfoList>) };
      inline vector<TableTopology::TableTopologyInfoList> getTableTopologyInfoList() { DARABONBA_PTR_GET(tableTopologyInfoList_, vector<TableTopology::TableTopologyInfoList>) };
      inline TableTopology& setTableTopologyInfoList(const vector<TableTopology::TableTopologyInfoList> & tableTopologyInfoList) { DARABONBA_PTR_SET_VALUE(tableTopologyInfoList_, tableTopologyInfoList) };
      inline TableTopology& setTableTopologyInfoList(vector<TableTopology::TableTopologyInfoList> && tableTopologyInfoList) { DARABONBA_PTR_SET_RVALUE(tableTopologyInfoList_, tableTopologyInfoList) };


    protected:
      // Indicates whether the table is a logical table. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> logic_ {};
      // The GUID of the table in DMS.
      shared_ptr<string> tableGuid_ {};
      // The name of the table.
      shared_ptr<string> tableName_ {};
      // Information of the topology of the table.
      shared_ptr<vector<TableTopology::TableTopologyInfoList>> tableTopologyInfoList_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->tableTopology_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetTableTopologyResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetTableTopologyResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTableTopologyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTableTopologyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tableTopology Field Functions 
    bool hasTableTopology() const { return this->tableTopology_ != nullptr;};
    void deleteTableTopology() { this->tableTopology_ = nullptr;};
    inline const GetTableTopologyResponseBody::TableTopology & getTableTopology() const { DARABONBA_PTR_GET_CONST(tableTopology_, GetTableTopologyResponseBody::TableTopology) };
    inline GetTableTopologyResponseBody::TableTopology getTableTopology() { DARABONBA_PTR_GET(tableTopology_, GetTableTopologyResponseBody::TableTopology) };
    inline GetTableTopologyResponseBody& setTableTopology(const GetTableTopologyResponseBody::TableTopology & tableTopology) { DARABONBA_PTR_SET_VALUE(tableTopology_, tableTopology) };
    inline GetTableTopologyResponseBody& setTableTopology(GetTableTopologyResponseBody::TableTopology && tableTopology) { DARABONBA_PTR_SET_RVALUE(tableTopology_, tableTopology) };


  protected:
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
    // The topology information.
    shared_ptr<GetTableTopologyResponseBody::TableTopology> tableTopology_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
