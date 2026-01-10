// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERMAPPLYORDERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPERMAPPLYORDERDETAILRESPONSEBODY_HPP_
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
  class GetPermApplyOrderDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPermApplyOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(PermApplyOrderDetail, permApplyOrderDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetPermApplyOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(PermApplyOrderDetail, permApplyOrderDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetPermApplyOrderDetailResponseBody() = default ;
    GetPermApplyOrderDetailResponseBody(const GetPermApplyOrderDetailResponseBody &) = default ;
    GetPermApplyOrderDetailResponseBody(GetPermApplyOrderDetailResponseBody &&) = default ;
    GetPermApplyOrderDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPermApplyOrderDetailResponseBody() = default ;
    GetPermApplyOrderDetailResponseBody& operator=(const GetPermApplyOrderDetailResponseBody &) = default ;
    GetPermApplyOrderDetailResponseBody& operator=(GetPermApplyOrderDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PermApplyOrderDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PermApplyOrderDetail& obj) { 
        DARABONBA_PTR_TO_JSON(ApplyType, applyType_);
        DARABONBA_PTR_TO_JSON(PermType, permType_);
        DARABONBA_PTR_TO_JSON(Resources, resources_);
        DARABONBA_PTR_TO_JSON(Seconds, seconds_);
      };
      friend void from_json(const Darabonba::Json& j, PermApplyOrderDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplyType, applyType_);
        DARABONBA_PTR_FROM_JSON(PermType, permType_);
        DARABONBA_PTR_FROM_JSON(Resources, resources_);
        DARABONBA_PTR_FROM_JSON(Seconds, seconds_);
      };
      PermApplyOrderDetail() = default ;
      PermApplyOrderDetail(const PermApplyOrderDetail &) = default ;
      PermApplyOrderDetail(PermApplyOrderDetail &&) = default ;
      PermApplyOrderDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PermApplyOrderDetail() = default ;
      PermApplyOrderDetail& operator=(const PermApplyOrderDetail &) = default ;
      PermApplyOrderDetail& operator=(PermApplyOrderDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Resources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Resources& obj) { 
          DARABONBA_PTR_TO_JSON(ColumnInfo, columnInfo_);
          DARABONBA_PTR_TO_JSON(DatabaseInfo, databaseInfo_);
          DARABONBA_PTR_TO_JSON(InstanceInfo, instanceInfo_);
          DARABONBA_PTR_TO_JSON(RowInfo, rowInfo_);
          DARABONBA_PTR_TO_JSON(RowValueInfo, rowValueInfo_);
          DARABONBA_PTR_TO_JSON(TableInfo, tableInfo_);
        };
        friend void from_json(const Darabonba::Json& j, Resources& obj) { 
          DARABONBA_PTR_FROM_JSON(ColumnInfo, columnInfo_);
          DARABONBA_PTR_FROM_JSON(DatabaseInfo, databaseInfo_);
          DARABONBA_PTR_FROM_JSON(InstanceInfo, instanceInfo_);
          DARABONBA_PTR_FROM_JSON(RowInfo, rowInfo_);
          DARABONBA_PTR_FROM_JSON(RowValueInfo, rowValueInfo_);
          DARABONBA_PTR_FROM_JSON(TableInfo, tableInfo_);
        };
        Resources() = default ;
        Resources(const Resources &) = default ;
        Resources(Resources &&) = default ;
        Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Resources() = default ;
        Resources& operator=(const Resources &) = default ;
        Resources& operator=(Resources &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TableInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TableInfo& obj) { 
            DARABONBA_PTR_TO_JSON(TableName, tableName_);
          };
          friend void from_json(const Darabonba::Json& j, TableInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(TableName, tableName_);
          };
          TableInfo() = default ;
          TableInfo(const TableInfo &) = default ;
          TableInfo(TableInfo &&) = default ;
          TableInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TableInfo() = default ;
          TableInfo& operator=(const TableInfo &) = default ;
          TableInfo& operator=(TableInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->tableName_ == nullptr; };
          // tableName Field Functions 
          bool hasTableName() const { return this->tableName_ != nullptr;};
          void deleteTableName() { this->tableName_ = nullptr;};
          inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
          inline TableInfo& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        protected:
          // The name of the table.
          shared_ptr<string> tableName_ {};
        };

        class RowValueInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RowValueInfo& obj) { 
            DARABONBA_PTR_TO_JSON(RowValue, rowValue_);
          };
          friend void from_json(const Darabonba::Json& j, RowValueInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(RowValue, rowValue_);
          };
          RowValueInfo() = default ;
          RowValueInfo(const RowValueInfo &) = default ;
          RowValueInfo(RowValueInfo &&) = default ;
          RowValueInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RowValueInfo() = default ;
          RowValueInfo& operator=(const RowValueInfo &) = default ;
          RowValueInfo& operator=(RowValueInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->rowValue_ == nullptr; };
          // rowValue Field Functions 
          bool hasRowValue() const { return this->rowValue_ != nullptr;};
          void deleteRowValue() { this->rowValue_ = nullptr;};
          inline string getRowValue() const { DARABONBA_PTR_GET_DEFAULT(rowValue_, "") };
          inline RowValueInfo& setRowValue(string rowValue) { DARABONBA_PTR_SET_VALUE(rowValue_, rowValue) };


        protected:
          shared_ptr<string> rowValue_ {};
        };

        class RowInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RowInfo& obj) { 
            DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
            DARABONBA_PTR_TO_JSON(DbId, dbId_);
            DARABONBA_PTR_TO_JSON(Logic, logic_);
            DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
            DARABONBA_PTR_TO_JSON(RowGroupId, rowGroupId_);
            DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
            DARABONBA_PTR_TO_JSON(TableName, tableName_);
          };
          friend void from_json(const Darabonba::Json& j, RowInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
            DARABONBA_PTR_FROM_JSON(DbId, dbId_);
            DARABONBA_PTR_FROM_JSON(Logic, logic_);
            DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
            DARABONBA_PTR_FROM_JSON(RowGroupId, rowGroupId_);
            DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
            DARABONBA_PTR_FROM_JSON(TableName, tableName_);
          };
          RowInfo() = default ;
          RowInfo(const RowInfo &) = default ;
          RowInfo(RowInfo &&) = default ;
          RowInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RowInfo() = default ;
          RowInfo& operator=(const RowInfo &) = default ;
          RowInfo& operator=(RowInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->columnName_ == nullptr
        && this->dbId_ == nullptr && this->logic_ == nullptr && this->matchMode_ == nullptr && this->rowGroupId_ == nullptr && this->schemaName_ == nullptr
        && this->tableName_ == nullptr; };
          // columnName Field Functions 
          bool hasColumnName() const { return this->columnName_ != nullptr;};
          void deleteColumnName() { this->columnName_ = nullptr;};
          inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
          inline RowInfo& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


          // dbId Field Functions 
          bool hasDbId() const { return this->dbId_ != nullptr;};
          void deleteDbId() { this->dbId_ = nullptr;};
          inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
          inline RowInfo& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


          // logic Field Functions 
          bool hasLogic() const { return this->logic_ != nullptr;};
          void deleteLogic() { this->logic_ = nullptr;};
          inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
          inline RowInfo& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


          // matchMode Field Functions 
          bool hasMatchMode() const { return this->matchMode_ != nullptr;};
          void deleteMatchMode() { this->matchMode_ = nullptr;};
          inline string getMatchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
          inline RowInfo& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


          // rowGroupId Field Functions 
          bool hasRowGroupId() const { return this->rowGroupId_ != nullptr;};
          void deleteRowGroupId() { this->rowGroupId_ = nullptr;};
          inline int64_t getRowGroupId() const { DARABONBA_PTR_GET_DEFAULT(rowGroupId_, 0L) };
          inline RowInfo& setRowGroupId(int64_t rowGroupId) { DARABONBA_PTR_SET_VALUE(rowGroupId_, rowGroupId) };


          // schemaName Field Functions 
          bool hasSchemaName() const { return this->schemaName_ != nullptr;};
          void deleteSchemaName() { this->schemaName_ = nullptr;};
          inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
          inline RowInfo& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


          // tableName Field Functions 
          bool hasTableName() const { return this->tableName_ != nullptr;};
          void deleteTableName() { this->tableName_ = nullptr;};
          inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
          inline RowInfo& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        protected:
          shared_ptr<string> columnName_ {};
          shared_ptr<int64_t> dbId_ {};
          shared_ptr<bool> logic_ {};
          shared_ptr<string> matchMode_ {};
          shared_ptr<int64_t> rowGroupId_ {};
          shared_ptr<string> schemaName_ {};
          shared_ptr<string> tableName_ {};
        };

        class InstanceInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InstanceInfo& obj) { 
            DARABONBA_PTR_TO_JSON(DbType, dbType_);
            DARABONBA_PTR_TO_JSON(DbaId, dbaId_);
            DARABONBA_PTR_TO_JSON(DbaNickName, dbaNickName_);
            DARABONBA_PTR_TO_JSON(EnvType, envType_);
            DARABONBA_PTR_TO_JSON(Host, host_);
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(OwnerIds, ownerIds_);
            DARABONBA_PTR_TO_JSON(OwnerNickName, ownerNickName_);
            DARABONBA_PTR_TO_JSON(Port, port_);
            DARABONBA_PTR_TO_JSON(SearchName, searchName_);
          };
          friend void from_json(const Darabonba::Json& j, InstanceInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(DbType, dbType_);
            DARABONBA_PTR_FROM_JSON(DbaId, dbaId_);
            DARABONBA_PTR_FROM_JSON(DbaNickName, dbaNickName_);
            DARABONBA_PTR_FROM_JSON(EnvType, envType_);
            DARABONBA_PTR_FROM_JSON(Host, host_);
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(OwnerIds, ownerIds_);
            DARABONBA_PTR_FROM_JSON(OwnerNickName, ownerNickName_);
            DARABONBA_PTR_FROM_JSON(Port, port_);
            DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
          };
          InstanceInfo() = default ;
          InstanceInfo(const InstanceInfo &) = default ;
          InstanceInfo(InstanceInfo &&) = default ;
          InstanceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InstanceInfo() = default ;
          InstanceInfo& operator=(const InstanceInfo &) = default ;
          InstanceInfo& operator=(InstanceInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dbType_ == nullptr
        && this->dbaId_ == nullptr && this->dbaNickName_ == nullptr && this->envType_ == nullptr && this->host_ == nullptr && this->instanceId_ == nullptr
        && this->ownerIds_ == nullptr && this->ownerNickName_ == nullptr && this->port_ == nullptr && this->searchName_ == nullptr; };
          // dbType Field Functions 
          bool hasDbType() const { return this->dbType_ != nullptr;};
          void deleteDbType() { this->dbType_ = nullptr;};
          inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
          inline InstanceInfo& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


          // dbaId Field Functions 
          bool hasDbaId() const { return this->dbaId_ != nullptr;};
          void deleteDbaId() { this->dbaId_ = nullptr;};
          inline int64_t getDbaId() const { DARABONBA_PTR_GET_DEFAULT(dbaId_, 0L) };
          inline InstanceInfo& setDbaId(int64_t dbaId) { DARABONBA_PTR_SET_VALUE(dbaId_, dbaId) };


          // dbaNickName Field Functions 
          bool hasDbaNickName() const { return this->dbaNickName_ != nullptr;};
          void deleteDbaNickName() { this->dbaNickName_ = nullptr;};
          inline string getDbaNickName() const { DARABONBA_PTR_GET_DEFAULT(dbaNickName_, "") };
          inline InstanceInfo& setDbaNickName(string dbaNickName) { DARABONBA_PTR_SET_VALUE(dbaNickName_, dbaNickName) };


          // envType Field Functions 
          bool hasEnvType() const { return this->envType_ != nullptr;};
          void deleteEnvType() { this->envType_ = nullptr;};
          inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
          inline InstanceInfo& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


          // host Field Functions 
          bool hasHost() const { return this->host_ != nullptr;};
          void deleteHost() { this->host_ = nullptr;};
          inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
          inline InstanceInfo& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline InstanceInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // ownerIds Field Functions 
          bool hasOwnerIds() const { return this->ownerIds_ != nullptr;};
          void deleteOwnerIds() { this->ownerIds_ = nullptr;};
          inline const vector<int64_t> & getOwnerIds() const { DARABONBA_PTR_GET_CONST(ownerIds_, vector<int64_t>) };
          inline vector<int64_t> getOwnerIds() { DARABONBA_PTR_GET(ownerIds_, vector<int64_t>) };
          inline InstanceInfo& setOwnerIds(const vector<int64_t> & ownerIds) { DARABONBA_PTR_SET_VALUE(ownerIds_, ownerIds) };
          inline InstanceInfo& setOwnerIds(vector<int64_t> && ownerIds) { DARABONBA_PTR_SET_RVALUE(ownerIds_, ownerIds) };


          // ownerNickName Field Functions 
          bool hasOwnerNickName() const { return this->ownerNickName_ != nullptr;};
          void deleteOwnerNickName() { this->ownerNickName_ = nullptr;};
          inline const vector<string> & getOwnerNickName() const { DARABONBA_PTR_GET_CONST(ownerNickName_, vector<string>) };
          inline vector<string> getOwnerNickName() { DARABONBA_PTR_GET(ownerNickName_, vector<string>) };
          inline InstanceInfo& setOwnerNickName(const vector<string> & ownerNickName) { DARABONBA_PTR_SET_VALUE(ownerNickName_, ownerNickName) };
          inline InstanceInfo& setOwnerNickName(vector<string> && ownerNickName) { DARABONBA_PTR_SET_RVALUE(ownerNickName_, ownerNickName) };


          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline int64_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0L) };
          inline InstanceInfo& setPort(int64_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // searchName Field Functions 
          bool hasSearchName() const { return this->searchName_ != nullptr;};
          void deleteSearchName() { this->searchName_ = nullptr;};
          inline string getSearchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
          inline InstanceInfo& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


        protected:
          // The type of the database engine.
          shared_ptr<string> dbType_ {};
          // The ID of the database administrator (DBA) of the instance.
          shared_ptr<int64_t> dbaId_ {};
          // The nickname of the DBA of the instance.
          shared_ptr<string> dbaNickName_ {};
          // The type of the environment to which the instance belongs. For more information, see [Change the environment type of an instance](https://help.aliyun.com/document_detail/163309.html).
          shared_ptr<string> envType_ {};
          // The endpoint of the instance.
          shared_ptr<string> host_ {};
          // The ID of the instance.
          shared_ptr<string> instanceId_ {};
          // The IDs of the owners of the instance.
          shared_ptr<vector<int64_t>> ownerIds_ {};
          // The nicknames of the owners of the instance.
          shared_ptr<vector<string>> ownerNickName_ {};
          // The port that is used to connect to the instance.
          shared_ptr<int64_t> port_ {};
          // The name that is used to search for the instance.
          shared_ptr<string> searchName_ {};
        };

        class DatabaseInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DatabaseInfo& obj) { 
            DARABONBA_PTR_TO_JSON(DbId, dbId_);
            DARABONBA_PTR_TO_JSON(DbType, dbType_);
            DARABONBA_PTR_TO_JSON(EnvType, envType_);
            DARABONBA_PTR_TO_JSON(Logic, logic_);
            DARABONBA_PTR_TO_JSON(OwnerIds, ownerIds_);
            DARABONBA_PTR_TO_JSON(OwnerNickNames, ownerNickNames_);
            DARABONBA_PTR_TO_JSON(SearchName, searchName_);
          };
          friend void from_json(const Darabonba::Json& j, DatabaseInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(DbId, dbId_);
            DARABONBA_PTR_FROM_JSON(DbType, dbType_);
            DARABONBA_PTR_FROM_JSON(EnvType, envType_);
            DARABONBA_PTR_FROM_JSON(Logic, logic_);
            DARABONBA_PTR_FROM_JSON(OwnerIds, ownerIds_);
            DARABONBA_PTR_FROM_JSON(OwnerNickNames, ownerNickNames_);
            DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
          };
          DatabaseInfo() = default ;
          DatabaseInfo(const DatabaseInfo &) = default ;
          DatabaseInfo(DatabaseInfo &&) = default ;
          DatabaseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DatabaseInfo() = default ;
          DatabaseInfo& operator=(const DatabaseInfo &) = default ;
          DatabaseInfo& operator=(DatabaseInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dbId_ == nullptr
        && this->dbType_ == nullptr && this->envType_ == nullptr && this->logic_ == nullptr && this->ownerIds_ == nullptr && this->ownerNickNames_ == nullptr
        && this->searchName_ == nullptr; };
          // dbId Field Functions 
          bool hasDbId() const { return this->dbId_ != nullptr;};
          void deleteDbId() { this->dbId_ = nullptr;};
          inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
          inline DatabaseInfo& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


          // dbType Field Functions 
          bool hasDbType() const { return this->dbType_ != nullptr;};
          void deleteDbType() { this->dbType_ = nullptr;};
          inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
          inline DatabaseInfo& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


          // envType Field Functions 
          bool hasEnvType() const { return this->envType_ != nullptr;};
          void deleteEnvType() { this->envType_ = nullptr;};
          inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
          inline DatabaseInfo& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


          // logic Field Functions 
          bool hasLogic() const { return this->logic_ != nullptr;};
          void deleteLogic() { this->logic_ = nullptr;};
          inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
          inline DatabaseInfo& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


          // ownerIds Field Functions 
          bool hasOwnerIds() const { return this->ownerIds_ != nullptr;};
          void deleteOwnerIds() { this->ownerIds_ = nullptr;};
          inline const vector<int64_t> & getOwnerIds() const { DARABONBA_PTR_GET_CONST(ownerIds_, vector<int64_t>) };
          inline vector<int64_t> getOwnerIds() { DARABONBA_PTR_GET(ownerIds_, vector<int64_t>) };
          inline DatabaseInfo& setOwnerIds(const vector<int64_t> & ownerIds) { DARABONBA_PTR_SET_VALUE(ownerIds_, ownerIds) };
          inline DatabaseInfo& setOwnerIds(vector<int64_t> && ownerIds) { DARABONBA_PTR_SET_RVALUE(ownerIds_, ownerIds) };


          // ownerNickNames Field Functions 
          bool hasOwnerNickNames() const { return this->ownerNickNames_ != nullptr;};
          void deleteOwnerNickNames() { this->ownerNickNames_ = nullptr;};
          inline const vector<string> & getOwnerNickNames() const { DARABONBA_PTR_GET_CONST(ownerNickNames_, vector<string>) };
          inline vector<string> getOwnerNickNames() { DARABONBA_PTR_GET(ownerNickNames_, vector<string>) };
          inline DatabaseInfo& setOwnerNickNames(const vector<string> & ownerNickNames) { DARABONBA_PTR_SET_VALUE(ownerNickNames_, ownerNickNames) };
          inline DatabaseInfo& setOwnerNickNames(vector<string> && ownerNickNames) { DARABONBA_PTR_SET_RVALUE(ownerNickNames_, ownerNickNames) };


          // searchName Field Functions 
          bool hasSearchName() const { return this->searchName_ != nullptr;};
          void deleteSearchName() { this->searchName_ = nullptr;};
          inline string getSearchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
          inline DatabaseInfo& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


        protected:
          // The database ID.
          shared_ptr<int64_t> dbId_ {};
          // The type of the database engine.
          shared_ptr<string> dbType_ {};
          // The type of the environment to which the instance belongs. For more information, see [Change the environment type of an instance](https://help.aliyun.com/document_detail/163309.html).
          shared_ptr<string> envType_ {};
          // Indicates whether the database is a logical database. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> logic_ {};
          // The IDs of the owners of the database.
          shared_ptr<vector<int64_t>> ownerIds_ {};
          // The nicknames of the owners of the database.
          shared_ptr<vector<string>> ownerNickNames_ {};
          // The name that is used to search for the database.
          shared_ptr<string> searchName_ {};
        };

        class ColumnInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ColumnInfo& obj) { 
            DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
            DARABONBA_PTR_TO_JSON(TableName, tableName_);
          };
          friend void from_json(const Darabonba::Json& j, ColumnInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
            DARABONBA_PTR_FROM_JSON(TableName, tableName_);
          };
          ColumnInfo() = default ;
          ColumnInfo(const ColumnInfo &) = default ;
          ColumnInfo(ColumnInfo &&) = default ;
          ColumnInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ColumnInfo() = default ;
          ColumnInfo& operator=(const ColumnInfo &) = default ;
          ColumnInfo& operator=(ColumnInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->columnName_ == nullptr
        && this->tableName_ == nullptr; };
          // columnName Field Functions 
          bool hasColumnName() const { return this->columnName_ != nullptr;};
          void deleteColumnName() { this->columnName_ = nullptr;};
          inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
          inline ColumnInfo& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


          // tableName Field Functions 
          bool hasTableName() const { return this->tableName_ != nullptr;};
          void deleteTableName() { this->tableName_ = nullptr;};
          inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
          inline ColumnInfo& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        protected:
          // The name of the column.
          shared_ptr<string> columnName_ {};
          // The name of the table.
          shared_ptr<string> tableName_ {};
        };

        virtual bool empty() const override { return this->columnInfo_ == nullptr
        && this->databaseInfo_ == nullptr && this->instanceInfo_ == nullptr && this->rowInfo_ == nullptr && this->rowValueInfo_ == nullptr && this->tableInfo_ == nullptr; };
        // columnInfo Field Functions 
        bool hasColumnInfo() const { return this->columnInfo_ != nullptr;};
        void deleteColumnInfo() { this->columnInfo_ = nullptr;};
        inline const Resources::ColumnInfo & getColumnInfo() const { DARABONBA_PTR_GET_CONST(columnInfo_, Resources::ColumnInfo) };
        inline Resources::ColumnInfo getColumnInfo() { DARABONBA_PTR_GET(columnInfo_, Resources::ColumnInfo) };
        inline Resources& setColumnInfo(const Resources::ColumnInfo & columnInfo) { DARABONBA_PTR_SET_VALUE(columnInfo_, columnInfo) };
        inline Resources& setColumnInfo(Resources::ColumnInfo && columnInfo) { DARABONBA_PTR_SET_RVALUE(columnInfo_, columnInfo) };


        // databaseInfo Field Functions 
        bool hasDatabaseInfo() const { return this->databaseInfo_ != nullptr;};
        void deleteDatabaseInfo() { this->databaseInfo_ = nullptr;};
        inline const Resources::DatabaseInfo & getDatabaseInfo() const { DARABONBA_PTR_GET_CONST(databaseInfo_, Resources::DatabaseInfo) };
        inline Resources::DatabaseInfo getDatabaseInfo() { DARABONBA_PTR_GET(databaseInfo_, Resources::DatabaseInfo) };
        inline Resources& setDatabaseInfo(const Resources::DatabaseInfo & databaseInfo) { DARABONBA_PTR_SET_VALUE(databaseInfo_, databaseInfo) };
        inline Resources& setDatabaseInfo(Resources::DatabaseInfo && databaseInfo) { DARABONBA_PTR_SET_RVALUE(databaseInfo_, databaseInfo) };


        // instanceInfo Field Functions 
        bool hasInstanceInfo() const { return this->instanceInfo_ != nullptr;};
        void deleteInstanceInfo() { this->instanceInfo_ = nullptr;};
        inline const Resources::InstanceInfo & getInstanceInfo() const { DARABONBA_PTR_GET_CONST(instanceInfo_, Resources::InstanceInfo) };
        inline Resources::InstanceInfo getInstanceInfo() { DARABONBA_PTR_GET(instanceInfo_, Resources::InstanceInfo) };
        inline Resources& setInstanceInfo(const Resources::InstanceInfo & instanceInfo) { DARABONBA_PTR_SET_VALUE(instanceInfo_, instanceInfo) };
        inline Resources& setInstanceInfo(Resources::InstanceInfo && instanceInfo) { DARABONBA_PTR_SET_RVALUE(instanceInfo_, instanceInfo) };


        // rowInfo Field Functions 
        bool hasRowInfo() const { return this->rowInfo_ != nullptr;};
        void deleteRowInfo() { this->rowInfo_ = nullptr;};
        inline const Resources::RowInfo & getRowInfo() const { DARABONBA_PTR_GET_CONST(rowInfo_, Resources::RowInfo) };
        inline Resources::RowInfo getRowInfo() { DARABONBA_PTR_GET(rowInfo_, Resources::RowInfo) };
        inline Resources& setRowInfo(const Resources::RowInfo & rowInfo) { DARABONBA_PTR_SET_VALUE(rowInfo_, rowInfo) };
        inline Resources& setRowInfo(Resources::RowInfo && rowInfo) { DARABONBA_PTR_SET_RVALUE(rowInfo_, rowInfo) };


        // rowValueInfo Field Functions 
        bool hasRowValueInfo() const { return this->rowValueInfo_ != nullptr;};
        void deleteRowValueInfo() { this->rowValueInfo_ = nullptr;};
        inline const Resources::RowValueInfo & getRowValueInfo() const { DARABONBA_PTR_GET_CONST(rowValueInfo_, Resources::RowValueInfo) };
        inline Resources::RowValueInfo getRowValueInfo() { DARABONBA_PTR_GET(rowValueInfo_, Resources::RowValueInfo) };
        inline Resources& setRowValueInfo(const Resources::RowValueInfo & rowValueInfo) { DARABONBA_PTR_SET_VALUE(rowValueInfo_, rowValueInfo) };
        inline Resources& setRowValueInfo(Resources::RowValueInfo && rowValueInfo) { DARABONBA_PTR_SET_RVALUE(rowValueInfo_, rowValueInfo) };


        // tableInfo Field Functions 
        bool hasTableInfo() const { return this->tableInfo_ != nullptr;};
        void deleteTableInfo() { this->tableInfo_ = nullptr;};
        inline const Resources::TableInfo & getTableInfo() const { DARABONBA_PTR_GET_CONST(tableInfo_, Resources::TableInfo) };
        inline Resources::TableInfo getTableInfo() { DARABONBA_PTR_GET(tableInfo_, Resources::TableInfo) };
        inline Resources& setTableInfo(const Resources::TableInfo & tableInfo) { DARABONBA_PTR_SET_VALUE(tableInfo_, tableInfo) };
        inline Resources& setTableInfo(Resources::TableInfo && tableInfo) { DARABONBA_PTR_SET_RVALUE(tableInfo_, tableInfo) };


      protected:
        // The information about the column.
        shared_ptr<Resources::ColumnInfo> columnInfo_ {};
        // The information about the database.
        shared_ptr<Resources::DatabaseInfo> databaseInfo_ {};
        // The information about the instance.
        shared_ptr<Resources::InstanceInfo> instanceInfo_ {};
        shared_ptr<Resources::RowInfo> rowInfo_ {};
        shared_ptr<Resources::RowValueInfo> rowValueInfo_ {};
        // The information about the table.
        shared_ptr<Resources::TableInfo> tableInfo_ {};
      };

      virtual bool empty() const override { return this->applyType_ == nullptr
        && this->permType_ == nullptr && this->resources_ == nullptr && this->seconds_ == nullptr; };
      // applyType Field Functions 
      bool hasApplyType() const { return this->applyType_ != nullptr;};
      void deleteApplyType() { this->applyType_ = nullptr;};
      inline string getApplyType() const { DARABONBA_PTR_GET_DEFAULT(applyType_, "") };
      inline PermApplyOrderDetail& setApplyType(string applyType) { DARABONBA_PTR_SET_VALUE(applyType_, applyType) };


      // permType Field Functions 
      bool hasPermType() const { return this->permType_ != nullptr;};
      void deletePermType() { this->permType_ = nullptr;};
      inline int64_t getPermType() const { DARABONBA_PTR_GET_DEFAULT(permType_, 0L) };
      inline PermApplyOrderDetail& setPermType(int64_t permType) { DARABONBA_PTR_SET_VALUE(permType_, permType) };


      // resources Field Functions 
      bool hasResources() const { return this->resources_ != nullptr;};
      void deleteResources() { this->resources_ = nullptr;};
      inline const vector<PermApplyOrderDetail::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<PermApplyOrderDetail::Resources>) };
      inline vector<PermApplyOrderDetail::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<PermApplyOrderDetail::Resources>) };
      inline PermApplyOrderDetail& setResources(const vector<PermApplyOrderDetail::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
      inline PermApplyOrderDetail& setResources(vector<PermApplyOrderDetail::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


      // seconds Field Functions 
      bool hasSeconds() const { return this->seconds_ != nullptr;};
      void deleteSeconds() { this->seconds_ = nullptr;};
      inline int64_t getSeconds() const { DARABONBA_PTR_GET_DEFAULT(seconds_, 0L) };
      inline PermApplyOrderDetail& setSeconds(int64_t seconds) { DARABONBA_PTR_SET_VALUE(seconds_, seconds) };


    protected:
      // The type of objects on which you apply for permissions. Valid values:
      // 
      // *   **DB**: database
      // *   **TAB**: table
      // *   **COL**: column
      // *   **INSTANT**: instance
      shared_ptr<string> applyType_ {};
      // The type of the permissions that you apply for. Valid values:
      // 
      // *   **1**: the permissions to query information.
      // *   **2**: the permissions to export information.
      // *   **3**: the permissions to query and export information.
      // *   **4**: the permissions to modify information.
      // *   **5**: the permissions to query and modify information.
      // *   **6**: the permissions to export and modify information.
      // *   **7**: the permissions to query, export, and modify information.
      // *   **8**: the permissions to log on to the database.
      shared_ptr<int64_t> permType_ {};
      // The list of resources.
      shared_ptr<vector<PermApplyOrderDetail::Resources>> resources_ {};
      // The validity duration of the permissions. Unit: seconds.
      shared_ptr<int64_t> seconds_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->permApplyOrderDetail_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetPermApplyOrderDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetPermApplyOrderDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // permApplyOrderDetail Field Functions 
    bool hasPermApplyOrderDetail() const { return this->permApplyOrderDetail_ != nullptr;};
    void deletePermApplyOrderDetail() { this->permApplyOrderDetail_ = nullptr;};
    inline const GetPermApplyOrderDetailResponseBody::PermApplyOrderDetail & getPermApplyOrderDetail() const { DARABONBA_PTR_GET_CONST(permApplyOrderDetail_, GetPermApplyOrderDetailResponseBody::PermApplyOrderDetail) };
    inline GetPermApplyOrderDetailResponseBody::PermApplyOrderDetail getPermApplyOrderDetail() { DARABONBA_PTR_GET(permApplyOrderDetail_, GetPermApplyOrderDetailResponseBody::PermApplyOrderDetail) };
    inline GetPermApplyOrderDetailResponseBody& setPermApplyOrderDetail(const GetPermApplyOrderDetailResponseBody::PermApplyOrderDetail & permApplyOrderDetail) { DARABONBA_PTR_SET_VALUE(permApplyOrderDetail_, permApplyOrderDetail) };
    inline GetPermApplyOrderDetailResponseBody& setPermApplyOrderDetail(GetPermApplyOrderDetailResponseBody::PermApplyOrderDetail && permApplyOrderDetail) { DARABONBA_PTR_SET_RVALUE(permApplyOrderDetail_, permApplyOrderDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPermApplyOrderDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetPermApplyOrderDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The details of the permission application ticket.
    shared_ptr<GetPermApplyOrderDetailResponseBody::PermApplyOrderDetail> permApplyOrderDetail_ {};
    // The request ID. You can use the ID to query logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
