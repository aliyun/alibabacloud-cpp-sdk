// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDBTOPOLOGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDBTOPOLOGYRESPONSEBODY_HPP_
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
  class GetDBTopologyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDBTopologyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBTopology, DBTopology_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDBTopologyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBTopology, DBTopology_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDBTopologyResponseBody() = default ;
    GetDBTopologyResponseBody(const GetDBTopologyResponseBody &) = default ;
    GetDBTopologyResponseBody(GetDBTopologyResponseBody &&) = default ;
    GetDBTopologyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDBTopologyResponseBody() = default ;
    GetDBTopologyResponseBody& operator=(const GetDBTopologyResponseBody &) = default ;
    GetDBTopologyResponseBody& operator=(GetDBTopologyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DBTopology : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBTopology& obj) { 
        DARABONBA_PTR_TO_JSON(Alias, alias_);
        DARABONBA_PTR_TO_JSON(DBTopologyInfoList, DBTopologyInfoList_);
        DARABONBA_PTR_TO_JSON(DbType, dbType_);
        DARABONBA_PTR_TO_JSON(EnvType, envType_);
        DARABONBA_PTR_TO_JSON(LogicDbId, logicDbId_);
        DARABONBA_PTR_TO_JSON(LogicDbName, logicDbName_);
        DARABONBA_PTR_TO_JSON(SearchName, searchName_);
      };
      friend void from_json(const Darabonba::Json& j, DBTopology& obj) { 
        DARABONBA_PTR_FROM_JSON(Alias, alias_);
        DARABONBA_PTR_FROM_JSON(DBTopologyInfoList, DBTopologyInfoList_);
        DARABONBA_PTR_FROM_JSON(DbType, dbType_);
        DARABONBA_PTR_FROM_JSON(EnvType, envType_);
        DARABONBA_PTR_FROM_JSON(LogicDbId, logicDbId_);
        DARABONBA_PTR_FROM_JSON(LogicDbName, logicDbName_);
        DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
      };
      DBTopology() = default ;
      DBTopology(const DBTopology &) = default ;
      DBTopology(DBTopology &&) = default ;
      DBTopology(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBTopology() = default ;
      DBTopology& operator=(const DBTopology &) = default ;
      DBTopology& operator=(DBTopology &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DBTopologyInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBTopologyInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
          DARABONBA_PTR_TO_JSON(DbId, dbId_);
          DARABONBA_PTR_TO_JSON(DbType, dbType_);
          DARABONBA_PTR_TO_JSON(EnvType, envType_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceResourceId, instanceResourceId_);
          DARABONBA_PTR_TO_JSON(InstanceSource, instanceSource_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_TO_JSON(SearchName, searchName_);
        };
        friend void from_json(const Darabonba::Json& j, DBTopologyInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
          DARABONBA_PTR_FROM_JSON(DbId, dbId_);
          DARABONBA_PTR_FROM_JSON(DbType, dbType_);
          DARABONBA_PTR_FROM_JSON(EnvType, envType_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceResourceId, instanceResourceId_);
          DARABONBA_PTR_FROM_JSON(InstanceSource, instanceSource_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
        };
        DBTopologyInfoList() = default ;
        DBTopologyInfoList(const DBTopologyInfoList &) = default ;
        DBTopologyInfoList(DBTopologyInfoList &&) = default ;
        DBTopologyInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBTopologyInfoList() = default ;
        DBTopologyInfoList& operator=(const DBTopologyInfoList &) = default ;
        DBTopologyInfoList& operator=(DBTopologyInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->catalogName_ == nullptr
        && this->dbId_ == nullptr && this->dbType_ == nullptr && this->envType_ == nullptr && this->instanceId_ == nullptr && this->instanceResourceId_ == nullptr
        && this->instanceSource_ == nullptr && this->regionId_ == nullptr && this->schemaName_ == nullptr && this->searchName_ == nullptr; };
        // catalogName Field Functions 
        bool hasCatalogName() const { return this->catalogName_ != nullptr;};
        void deleteCatalogName() { this->catalogName_ = nullptr;};
        inline string getCatalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
        inline DBTopologyInfoList& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


        // dbId Field Functions 
        bool hasDbId() const { return this->dbId_ != nullptr;};
        void deleteDbId() { this->dbId_ = nullptr;};
        inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
        inline DBTopologyInfoList& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


        // dbType Field Functions 
        bool hasDbType() const { return this->dbType_ != nullptr;};
        void deleteDbType() { this->dbType_ = nullptr;};
        inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
        inline DBTopologyInfoList& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


        // envType Field Functions 
        bool hasEnvType() const { return this->envType_ != nullptr;};
        void deleteEnvType() { this->envType_ = nullptr;};
        inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
        inline DBTopologyInfoList& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
        inline DBTopologyInfoList& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceResourceId Field Functions 
        bool hasInstanceResourceId() const { return this->instanceResourceId_ != nullptr;};
        void deleteInstanceResourceId() { this->instanceResourceId_ = nullptr;};
        inline string getInstanceResourceId() const { DARABONBA_PTR_GET_DEFAULT(instanceResourceId_, "") };
        inline DBTopologyInfoList& setInstanceResourceId(string instanceResourceId) { DARABONBA_PTR_SET_VALUE(instanceResourceId_, instanceResourceId) };


        // instanceSource Field Functions 
        bool hasInstanceSource() const { return this->instanceSource_ != nullptr;};
        void deleteInstanceSource() { this->instanceSource_ = nullptr;};
        inline string getInstanceSource() const { DARABONBA_PTR_GET_DEFAULT(instanceSource_, "") };
        inline DBTopologyInfoList& setInstanceSource(string instanceSource) { DARABONBA_PTR_SET_VALUE(instanceSource_, instanceSource) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline DBTopologyInfoList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline DBTopologyInfoList& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


        // searchName Field Functions 
        bool hasSearchName() const { return this->searchName_ != nullptr;};
        void deleteSearchName() { this->searchName_ = nullptr;};
        inline string getSearchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
        inline DBTopologyInfoList& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


      protected:
        // The name of the catalog to which the database belongs.
        // 
        // > If the database is a PostgreSQL database, the value of this parameter is the name of the database.
        shared_ptr<string> catalogName_ {};
        // The ID of the database for which the schema design is executed.
        shared_ptr<int64_t> dbId_ {};
        // The type of the database engine.
        shared_ptr<string> dbType_ {};
        // The type of the environment to which the database belongs. Valid values:
        // 
        // *   product: production environment
        // *   dev: development environment
        // *   pre: staging environment
        // *   test: test environment
        // *   sit: SIT environment
        // *   uat: user acceptance testing (UAT) environment
        // *   pet: stress testing environment
        // *   stag: STAG environment
        shared_ptr<string> envType_ {};
        // The ID of the instance. The valid value is returned if you call the ListInstances operation. The instance ID is not the ID of the RDS instance.
        shared_ptr<int64_t> instanceId_ {};
        // Instance resource ID.
        shared_ptr<string> instanceResourceId_ {};
        // The source of the database instance. Valid values:
        // 
        // *   **PUBLIC_OWN:** a self-managed database instance that is deployed on the Internet
        // *   **RDS:** an ApsaraDB RDS instance
        // *   **ECS_OWN:** a self-managed database that is deployed on an Elastic Compute Service (ECS) instance
        // *   **VPC_IDC:** a self-managed database instance that is deployed in a data center connected over a virtual private cloud (VPC)
        shared_ptr<string> instanceSource_ {};
        // The ID of the region in which the instance resides.
        shared_ptr<string> regionId_ {};
        // The name of the logical database.
        // 
        // > If the database is a PostgreSQL database, the value of this parameter is the name of the database schema.
        shared_ptr<string> schemaName_ {};
        // The name of the saved search.
        shared_ptr<string> searchName_ {};
      };

      virtual bool empty() const override { return this->alias_ == nullptr
        && this->DBTopologyInfoList_ == nullptr && this->dbType_ == nullptr && this->envType_ == nullptr && this->logicDbId_ == nullptr && this->logicDbName_ == nullptr
        && this->searchName_ == nullptr; };
      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
      inline DBTopology& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


      // DBTopologyInfoList Field Functions 
      bool hasDBTopologyInfoList() const { return this->DBTopologyInfoList_ != nullptr;};
      void deleteDBTopologyInfoList() { this->DBTopologyInfoList_ = nullptr;};
      inline const vector<DBTopology::DBTopologyInfoList> & getDBTopologyInfoList() const { DARABONBA_PTR_GET_CONST(DBTopologyInfoList_, vector<DBTopology::DBTopologyInfoList>) };
      inline vector<DBTopology::DBTopologyInfoList> getDBTopologyInfoList() { DARABONBA_PTR_GET(DBTopologyInfoList_, vector<DBTopology::DBTopologyInfoList>) };
      inline DBTopology& setDBTopologyInfoList(const vector<DBTopology::DBTopologyInfoList> & dBTopologyInfoList) { DARABONBA_PTR_SET_VALUE(DBTopologyInfoList_, dBTopologyInfoList) };
      inline DBTopology& setDBTopologyInfoList(vector<DBTopology::DBTopologyInfoList> && dBTopologyInfoList) { DARABONBA_PTR_SET_RVALUE(DBTopologyInfoList_, dBTopologyInfoList) };


      // dbType Field Functions 
      bool hasDbType() const { return this->dbType_ != nullptr;};
      void deleteDbType() { this->dbType_ = nullptr;};
      inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
      inline DBTopology& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


      // envType Field Functions 
      bool hasEnvType() const { return this->envType_ != nullptr;};
      void deleteEnvType() { this->envType_ = nullptr;};
      inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
      inline DBTopology& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


      // logicDbId Field Functions 
      bool hasLogicDbId() const { return this->logicDbId_ != nullptr;};
      void deleteLogicDbId() { this->logicDbId_ = nullptr;};
      inline int64_t getLogicDbId() const { DARABONBA_PTR_GET_DEFAULT(logicDbId_, 0L) };
      inline DBTopology& setLogicDbId(int64_t logicDbId) { DARABONBA_PTR_SET_VALUE(logicDbId_, logicDbId) };


      // logicDbName Field Functions 
      bool hasLogicDbName() const { return this->logicDbName_ != nullptr;};
      void deleteLogicDbName() { this->logicDbName_ = nullptr;};
      inline string getLogicDbName() const { DARABONBA_PTR_GET_DEFAULT(logicDbName_, "") };
      inline DBTopology& setLogicDbName(string logicDbName) { DARABONBA_PTR_SET_VALUE(logicDbName_, logicDbName) };


      // searchName Field Functions 
      bool hasSearchName() const { return this->searchName_ != nullptr;};
      void deleteSearchName() { this->searchName_ = nullptr;};
      inline string getSearchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
      inline DBTopology& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


    protected:
      // The alias of the access point.
      shared_ptr<string> alias_ {};
      // The list of database splitting topology information.
      shared_ptr<vector<DBTopology::DBTopologyInfoList>> DBTopologyInfoList_ {};
      // The type of the database engine.
      shared_ptr<string> dbType_ {};
      // The type of the environment in which the database instance is deployed. Valid values:
      // 
      // *   product: production environment
      // *   dev: development environment
      // *   pre: pre-release environment
      // *   test: test environment
      // *   sit: system integration testing (SIT) environment
      // *   uat: user acceptance testing (UAT) environment
      // *   pet: stress testing environment
      // *   stag: staging environment
      shared_ptr<string> envType_ {};
      // The ID of the logical database.
      shared_ptr<int64_t> logicDbId_ {};
      // Logical database name.
      shared_ptr<string> logicDbName_ {};
      // The name of the saved search.
      shared_ptr<string> searchName_ {};
    };

    virtual bool empty() const override { return this->DBTopology_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // DBTopology Field Functions 
    bool hasDBTopology() const { return this->DBTopology_ != nullptr;};
    void deleteDBTopology() { this->DBTopology_ = nullptr;};
    inline const GetDBTopologyResponseBody::DBTopology & getDBTopology() const { DARABONBA_PTR_GET_CONST(DBTopology_, GetDBTopologyResponseBody::DBTopology) };
    inline GetDBTopologyResponseBody::DBTopology getDBTopology() { DARABONBA_PTR_GET(DBTopology_, GetDBTopologyResponseBody::DBTopology) };
    inline GetDBTopologyResponseBody& setDBTopology(const GetDBTopologyResponseBody::DBTopology & dBTopology) { DARABONBA_PTR_SET_VALUE(DBTopology_, dBTopology) };
    inline GetDBTopologyResponseBody& setDBTopology(GetDBTopologyResponseBody::DBTopology && dBTopology) { DARABONBA_PTR_SET_RVALUE(DBTopology_, dBTopology) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDBTopologyResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDBTopologyResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDBTopologyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDBTopologyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The topology of the data table.
    shared_ptr<GetDBTopologyResponseBody::DBTopology> DBTopology_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**: The request is successful.
    // *   **false**: The request fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
