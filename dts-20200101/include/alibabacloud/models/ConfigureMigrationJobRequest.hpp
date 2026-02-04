// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGUREMIGRATIONJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGUREMIGRATIONJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ConfigureMigrationJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigureMigrationJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationEndpoint, destinationEndpoint_);
      DARABONBA_PTR_TO_JSON(MigrationMode, migrationMode_);
      DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_TO_JSON(MigrationJobId, migrationJobId_);
      DARABONBA_PTR_TO_JSON(MigrationJobName, migrationJobName_);
      DARABONBA_PTR_TO_JSON(MigrationObject, migrationObject_);
      DARABONBA_PTR_TO_JSON(MigrationReserved, migrationReserved_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigureMigrationJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationEndpoint, destinationEndpoint_);
      DARABONBA_PTR_FROM_JSON(MigrationMode, migrationMode_);
      DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_FROM_JSON(MigrationJobId, migrationJobId_);
      DARABONBA_PTR_FROM_JSON(MigrationJobName, migrationJobName_);
      DARABONBA_PTR_FROM_JSON(MigrationObject, migrationObject_);
      DARABONBA_PTR_FROM_JSON(MigrationReserved, migrationReserved_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ConfigureMigrationJobRequest() = default ;
    ConfigureMigrationJobRequest(const ConfigureMigrationJobRequest &) = default ;
    ConfigureMigrationJobRequest(ConfigureMigrationJobRequest &&) = default ;
    ConfigureMigrationJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigureMigrationJobRequest() = default ;
    ConfigureMigrationJobRequest& operator=(const ConfigureMigrationJobRequest &) = default ;
    ConfigureMigrationJobRequest& operator=(ConfigureMigrationJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SourceEndpoint : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceEndpoint& obj) { 
        DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_TO_JSON(EngineName, engineName_);
        DARABONBA_PTR_TO_JSON(IP, IP_);
        DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(OracleSID, oracleSID_);
        DARABONBA_PTR_TO_JSON(OwnerID, ownerID_);
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(Role, role_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, SourceEndpoint& obj) { 
        DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
        DARABONBA_PTR_FROM_JSON(IP, IP_);
        DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(OracleSID, oracleSID_);
        DARABONBA_PTR_FROM_JSON(OwnerID, ownerID_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
      };
      SourceEndpoint() = default ;
      SourceEndpoint(const SourceEndpoint &) = default ;
      SourceEndpoint(SourceEndpoint &&) = default ;
      SourceEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceEndpoint() = default ;
      SourceEndpoint& operator=(const SourceEndpoint &) = default ;
      SourceEndpoint& operator=(SourceEndpoint &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->databaseName_ == nullptr
        && this->engineName_ == nullptr && this->IP_ == nullptr && this->instanceID_ == nullptr && this->instanceType_ == nullptr && this->oracleSID_ == nullptr
        && this->ownerID_ == nullptr && this->password_ == nullptr && this->port_ == nullptr && this->region_ == nullptr && this->role_ == nullptr
        && this->userName_ == nullptr; };
      // databaseName Field Functions 
      bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
      void deleteDatabaseName() { this->databaseName_ = nullptr;};
      inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
      inline SourceEndpoint& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


      // engineName Field Functions 
      bool hasEngineName() const { return this->engineName_ != nullptr;};
      void deleteEngineName() { this->engineName_ = nullptr;};
      inline string getEngineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
      inline SourceEndpoint& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


      // IP Field Functions 
      bool hasIP() const { return this->IP_ != nullptr;};
      void deleteIP() { this->IP_ = nullptr;};
      inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
      inline SourceEndpoint& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


      // instanceID Field Functions 
      bool hasInstanceID() const { return this->instanceID_ != nullptr;};
      void deleteInstanceID() { this->instanceID_ = nullptr;};
      inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
      inline SourceEndpoint& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline SourceEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // oracleSID Field Functions 
      bool hasOracleSID() const { return this->oracleSID_ != nullptr;};
      void deleteOracleSID() { this->oracleSID_ = nullptr;};
      inline string getOracleSID() const { DARABONBA_PTR_GET_DEFAULT(oracleSID_, "") };
      inline SourceEndpoint& setOracleSID(string oracleSID) { DARABONBA_PTR_SET_VALUE(oracleSID_, oracleSID) };


      // ownerID Field Functions 
      bool hasOwnerID() const { return this->ownerID_ != nullptr;};
      void deleteOwnerID() { this->ownerID_ = nullptr;};
      inline string getOwnerID() const { DARABONBA_PTR_GET_DEFAULT(ownerID_, "") };
      inline SourceEndpoint& setOwnerID(string ownerID) { DARABONBA_PTR_SET_VALUE(ownerID_, ownerID) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline SourceEndpoint& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline SourceEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline SourceEndpoint& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline SourceEndpoint& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline SourceEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // The endpoint of the source database.
      // 
      // >  You must specify the endpoint only if the **SourceEndpoint.InstanceType** parameter is set to **LocalInstance** or **Express**.
      shared_ptr<string> databaseName_ {};
      // The instance type of the source database. Valid values:
      // 
      // *   **RDS**: ApsaraDB RDS instance
      // *   **ECS**: self-managed database that is hosted on ECS
      // *   **LocalInstance**: self-managed database with a public IP address
      // *   **Express**: self-managed database that is connected over Express Connect, VPN Gateway, or Smart Access Gateway
      // *   **dg**: self-managed database that is connected over Database Gateway
      // *   **cen**: self-managed database that is connected over Cloud Enterprise Network (CEN)
      // *   **MongoDB**: ApsaraDB for MongoDB instance
      // *   **POLARDB**: PolarDB for MySQL cluster or PolarDB for PostgreSQL cluster
      // *   **PolarDB_o**: PolarDB O Edition cluster
      shared_ptr<string> engineName_ {};
      // rm-bp1i99e8l7913****
      shared_ptr<string> IP_ {};
      // dtsl3m1213ye7l****
      shared_ptr<string> instanceID_ {};
      // The ID of the data migration instance. You can call the **DescribeMigrationJobs** operation to query the instance ID.
      // 
      // This parameter is required.
      shared_ptr<string> instanceType_ {};
      // The region ID of the source database.
      // 
      // >  If the **SourceEndpoint.InstanceType** parameter is set to **LocalInstance**, you can enter **cn-hangzhou** or the ID of the region closest to the self-managed database. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
      shared_ptr<string> oracleSID_ {};
      // The name of the source database or the authentication database.
      // 
      // > 
      // *   You must specify the database name only if the **SourceEndpoint.EngineName** parameter is set to **PostgreSQL** or **MongoDB**.
      // *   If the **SourceEndpoint.EngineName** parameter is set to **PostgreSQL**, specify the name of the source database. If the SourceEndpoint.EngineName parameter is set to **MongoDB**, specify the name of the authentication database.
      shared_ptr<string> ownerID_ {};
      // The system ID (SID) of the Oracle database.
      // 
      // >  You must specify this parameter only if the **SourceEndpoint.EngineName** parameter is set to **Oracle** and the **Oracle** database is deployed in a non-RAC architecture.
      shared_ptr<string> password_ {};
      // The engine type of the source database. Valid values: **MySQL**, **TiDB**, **SQLServer**, **PostgreSQL**, **Oracle**, **MongoDB**, **Redis**, **POLARDB**, and **polardb_pg**.
      // 
      // >  You must specify the engine type only if the **DestinationEndpoint.InstanceType** parameter is set to **RDS**, **POLARDB**, **ECS**, **LocalInstance**, or **Express**.
      shared_ptr<string> port_ {};
      // The ID of the instance that hosts the source database.
      // 
      // > 
      // *   You must specify the instance ID only if the **SourceEndpoint.InstanceType** parameter is set to **RDS**, **ECS**, **Express**, **MongoDB**, **POLARDB**, or **PolarDB_o**. For example, if the SourceEndpoint.InstanceType parameter is set to **ECS**, you must specify the ID of the ECS instance.
      // *   If the **SourceEndpoint.InstanceType** parameter is set to **Express**, you must specify the ID of the virtual private cloud (VPC).
      shared_ptr<string> region_ {};
      // The database account of the source database.
      // 
      // >  The permissions that are required for database accounts vary with the migration scenario. For more information, see [Overview of data migration scenarios](https://help.aliyun.com/document_detail/26618.html).
      shared_ptr<string> role_ {};
      // The service port number of the source database.
      // 
      // >  You must specify the service port number only if the **SourceEndpoint.InstanceType** parameter is set to **ECS**, **LocalInstance**, or **Express**.
      shared_ptr<string> userName_ {};
    };

    class MigrationMode : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MigrationMode& obj) { 
        DARABONBA_PTR_TO_JSON(DataIntialization, dataIntialization_);
        DARABONBA_PTR_TO_JSON(DataSynchronization, dataSynchronization_);
        DARABONBA_PTR_TO_JSON(StructureIntialization, structureIntialization_);
      };
      friend void from_json(const Darabonba::Json& j, MigrationMode& obj) { 
        DARABONBA_PTR_FROM_JSON(DataIntialization, dataIntialization_);
        DARABONBA_PTR_FROM_JSON(DataSynchronization, dataSynchronization_);
        DARABONBA_PTR_FROM_JSON(StructureIntialization, structureIntialization_);
      };
      MigrationMode() = default ;
      MigrationMode(const MigrationMode &) = default ;
      MigrationMode(MigrationMode &&) = default ;
      MigrationMode(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MigrationMode() = default ;
      MigrationMode& operator=(const MigrationMode &) = default ;
      MigrationMode& operator=(MigrationMode &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dataIntialization_ == nullptr
        && this->dataSynchronization_ == nullptr && this->structureIntialization_ == nullptr; };
      // dataIntialization Field Functions 
      bool hasDataIntialization() const { return this->dataIntialization_ != nullptr;};
      void deleteDataIntialization() { this->dataIntialization_ = nullptr;};
      inline bool getDataIntialization() const { DARABONBA_PTR_GET_DEFAULT(dataIntialization_, false) };
      inline MigrationMode& setDataIntialization(bool dataIntialization) { DARABONBA_PTR_SET_VALUE(dataIntialization_, dataIntialization) };


      // dataSynchronization Field Functions 
      bool hasDataSynchronization() const { return this->dataSynchronization_ != nullptr;};
      void deleteDataSynchronization() { this->dataSynchronization_ = nullptr;};
      inline bool getDataSynchronization() const { DARABONBA_PTR_GET_DEFAULT(dataSynchronization_, false) };
      inline MigrationMode& setDataSynchronization(bool dataSynchronization) { DARABONBA_PTR_SET_VALUE(dataSynchronization_, dataSynchronization) };


      // structureIntialization Field Functions 
      bool hasStructureIntialization() const { return this->structureIntialization_ != nullptr;};
      void deleteStructureIntialization() { this->structureIntialization_ = nullptr;};
      inline bool getStructureIntialization() const { DARABONBA_PTR_GET_DEFAULT(structureIntialization_, false) };
      inline MigrationMode& setStructureIntialization(bool structureIntialization) { DARABONBA_PTR_SET_VALUE(structureIntialization_, structureIntialization) };


    protected:
      // The database account of the destination database.
      // 
      // >  The permissions that are required for database accounts vary with the migration scenario. For more information, see [Overview of data migration scenarios](https://help.aliyun.com/document_detail/26618.html).
      // 
      // This parameter is required.
      shared_ptr<bool> dataIntialization_ {};
      // The password of the destination database account.
      // 
      // This parameter is required.
      shared_ptr<bool> dataSynchronization_ {};
      // The name of the destination database or the authentication database.
      // 
      // > 
      // *   You must specify the database name only if the **DestinationEndpoint.EngineName** parameter is set to **PostgreSQL**, **DRDS**, or **MongoDB**.
      // *   If the **DestinationEndpoint.EngineName** parameter is set to **PostgreSQL** or **DRDS**, specify the name of the destination database. If the DestinationEndpoint.EngineName parameter is set to **MongoDB**, specify the name of the authentication database.
      // 
      // This parameter is required.
      shared_ptr<bool> structureIntialization_ {};
    };

    class DestinationEndpoint : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DestinationEndpoint& obj) { 
        DARABONBA_PTR_TO_JSON(DataBaseName, dataBaseName_);
        DARABONBA_PTR_TO_JSON(EngineName, engineName_);
        DARABONBA_PTR_TO_JSON(IP, IP_);
        DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(OracleSID, oracleSID_);
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, DestinationEndpoint& obj) { 
        DARABONBA_PTR_FROM_JSON(DataBaseName, dataBaseName_);
        DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
        DARABONBA_PTR_FROM_JSON(IP, IP_);
        DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(OracleSID, oracleSID_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
      };
      DestinationEndpoint() = default ;
      DestinationEndpoint(const DestinationEndpoint &) = default ;
      DestinationEndpoint(DestinationEndpoint &&) = default ;
      DestinationEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DestinationEndpoint() = default ;
      DestinationEndpoint& operator=(const DestinationEndpoint &) = default ;
      DestinationEndpoint& operator=(DestinationEndpoint &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dataBaseName_ == nullptr
        && this->engineName_ == nullptr && this->IP_ == nullptr && this->instanceID_ == nullptr && this->instanceType_ == nullptr && this->oracleSID_ == nullptr
        && this->password_ == nullptr && this->port_ == nullptr && this->region_ == nullptr && this->userName_ == nullptr; };
      // dataBaseName Field Functions 
      bool hasDataBaseName() const { return this->dataBaseName_ != nullptr;};
      void deleteDataBaseName() { this->dataBaseName_ = nullptr;};
      inline string getDataBaseName() const { DARABONBA_PTR_GET_DEFAULT(dataBaseName_, "") };
      inline DestinationEndpoint& setDataBaseName(string dataBaseName) { DARABONBA_PTR_SET_VALUE(dataBaseName_, dataBaseName) };


      // engineName Field Functions 
      bool hasEngineName() const { return this->engineName_ != nullptr;};
      void deleteEngineName() { this->engineName_ = nullptr;};
      inline string getEngineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
      inline DestinationEndpoint& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


      // IP Field Functions 
      bool hasIP() const { return this->IP_ != nullptr;};
      void deleteIP() { this->IP_ = nullptr;};
      inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
      inline DestinationEndpoint& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


      // instanceID Field Functions 
      bool hasInstanceID() const { return this->instanceID_ != nullptr;};
      void deleteInstanceID() { this->instanceID_ = nullptr;};
      inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
      inline DestinationEndpoint& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline DestinationEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // oracleSID Field Functions 
      bool hasOracleSID() const { return this->oracleSID_ != nullptr;};
      void deleteOracleSID() { this->oracleSID_ = nullptr;};
      inline string getOracleSID() const { DARABONBA_PTR_GET_DEFAULT(oracleSID_, "") };
      inline DestinationEndpoint& setOracleSID(string oracleSID) { DARABONBA_PTR_SET_VALUE(oracleSID_, oracleSID) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline DestinationEndpoint& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline DestinationEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline DestinationEndpoint& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline DestinationEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // The region ID of the destination database.
      // 
      // >  If the **DestinationEndpoint.InstanceType** parameter is set to **LocalInstance**, you can enter **cn-hangzhou** or the ID of the region closest to the self-managed database. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
      shared_ptr<string> dataBaseName_ {};
      // The authorized RAM role of the source instance. You must specify the RAM role only if the source instance and the destination instance belong to different Alibaba Cloud accounts. You can use the RAM role to allow the Alibaba Cloud account that owns the destination instance to access the source instance.
      // 
      // >  For information about the permissions and authorization methods of the RAM role, see [Configure RAM authorization for cross-account data migration and synchronization](https://help.aliyun.com/document_detail/48468.html).
      shared_ptr<string> engineName_ {};
      // The ID of the instance that hosts the destination database.
      // 
      // >  You must specify the instance ID only if the **DestinationEndpoint.InstanceType** parameter is set to **RDS**, **ECS**, **MongoDB**, **Redis**, **DRDS**, **PetaData**, **OceanBase**, **POLARDB**, **PolarDB_o**, **AnalyticDB**, or **Greenplum**. For example, if the DestinationEndpoint.InstanceType parameter is set to **ECS**, you must specify the ID of the ECS instance.
      shared_ptr<string> IP_ {};
      // The ID of the Alibaba Cloud account to which the source instance belongs.
      // 
      // >  You must specify this parameter only when you configure data migration across different Alibaba Cloud accounts.
      shared_ptr<string> instanceID_ {};
      // The password of the source database account.
      // 
      // This parameter is required.
      shared_ptr<string> instanceType_ {};
      // The reserved parameter of DTS. The value is a JSON string. You can specify this parameter to meet special requirements, for example, whether to automatically start a precheck. For more information, see [MigrationReserved](https://help.aliyun.com/document_detail/176470.html).
      shared_ptr<string> oracleSID_ {};
      // The service port number of the destination database.
      // 
      // >  You must specify the service port number only if the **DestinationEndpoint.InstanceType** parameter is set to **ECS**, **LocalInstance**, or **Express**.
      shared_ptr<string> password_ {};
      // The engine type of the destination database. Valid values: **MySQL**, **DRDS**, **SQLServer**, **PostgreSQL**, **PPAS**, **MongoDB**, **Redis**, **POLARDB**, and **polardb_pg**.
      // 
      // >  You must specify the engine type only if the **DestinationEndpoint.InstanceType** parameter is set to **RDS**, **POLARDB**, **ECS**, **LocalInstance**, or **Express**.
      shared_ptr<string> port_ {};
      // The instance type of the destination database. Valid values:
      // 
      // *   **ECS**: self-managed database that is hosted on Elastic Compute Service (ECS)
      // *   **LocalInstance**: self-managed database with a public IP address
      // *   **RDS**: ApsaraDB RDS instance
      // *   **DRDS**: PolarDB-X instance
      // *   **MongoDB**: ApsaraDB for MongoDB instance
      // *   **Redis**: ApsaraDB for Redis instance
      // *   **PetaData**: HybridDB for MySQL instance
      // *   **POLARDB**: PolarDB for MySQL cluster or PolarDB for PostgreSQL cluster
      // *   **PolarDB_o**: PolarDB O Edition cluster
      // *   **AnalyticDB**: AnalyticDB for MySQL cluster V3.0 or V2.0
      // *   **Greenplum**: AnalyticDB for PostgreSQL instance
      shared_ptr<string> region_ {};
      // The endpoint of the destination database.
      // 
      // >  You must specify the endpoint only if the **DestinationEndpoint.InstanceType** parameter is set to **LocalInstance** or **Express**.
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->destinationEndpoint_ == nullptr
        && this->migrationMode_ == nullptr && this->sourceEndpoint_ == nullptr && this->accountId_ == nullptr && this->checkpoint_ == nullptr && this->migrationJobId_ == nullptr
        && this->migrationJobName_ == nullptr && this->migrationObject_ == nullptr && this->migrationReserved_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr; };
    // destinationEndpoint Field Functions 
    bool hasDestinationEndpoint() const { return this->destinationEndpoint_ != nullptr;};
    void deleteDestinationEndpoint() { this->destinationEndpoint_ = nullptr;};
    inline const ConfigureMigrationJobRequest::DestinationEndpoint & getDestinationEndpoint() const { DARABONBA_PTR_GET_CONST(destinationEndpoint_, ConfigureMigrationJobRequest::DestinationEndpoint) };
    inline ConfigureMigrationJobRequest::DestinationEndpoint getDestinationEndpoint() { DARABONBA_PTR_GET(destinationEndpoint_, ConfigureMigrationJobRequest::DestinationEndpoint) };
    inline ConfigureMigrationJobRequest& setDestinationEndpoint(const ConfigureMigrationJobRequest::DestinationEndpoint & destinationEndpoint) { DARABONBA_PTR_SET_VALUE(destinationEndpoint_, destinationEndpoint) };
    inline ConfigureMigrationJobRequest& setDestinationEndpoint(ConfigureMigrationJobRequest::DestinationEndpoint && destinationEndpoint) { DARABONBA_PTR_SET_RVALUE(destinationEndpoint_, destinationEndpoint) };


    // migrationMode Field Functions 
    bool hasMigrationMode() const { return this->migrationMode_ != nullptr;};
    void deleteMigrationMode() { this->migrationMode_ = nullptr;};
    inline const ConfigureMigrationJobRequest::MigrationMode & getMigrationMode() const { DARABONBA_PTR_GET_CONST(migrationMode_, ConfigureMigrationJobRequest::MigrationMode) };
    inline ConfigureMigrationJobRequest::MigrationMode getMigrationMode() { DARABONBA_PTR_GET(migrationMode_, ConfigureMigrationJobRequest::MigrationMode) };
    inline ConfigureMigrationJobRequest& setMigrationMode(const ConfigureMigrationJobRequest::MigrationMode & migrationMode) { DARABONBA_PTR_SET_VALUE(migrationMode_, migrationMode) };
    inline ConfigureMigrationJobRequest& setMigrationMode(ConfigureMigrationJobRequest::MigrationMode && migrationMode) { DARABONBA_PTR_SET_RVALUE(migrationMode_, migrationMode) };


    // sourceEndpoint Field Functions 
    bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
    void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
    inline const ConfigureMigrationJobRequest::SourceEndpoint & getSourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, ConfigureMigrationJobRequest::SourceEndpoint) };
    inline ConfigureMigrationJobRequest::SourceEndpoint getSourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, ConfigureMigrationJobRequest::SourceEndpoint) };
    inline ConfigureMigrationJobRequest& setSourceEndpoint(const ConfigureMigrationJobRequest::SourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
    inline ConfigureMigrationJobRequest& setSourceEndpoint(ConfigureMigrationJobRequest::SourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ConfigureMigrationJobRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // checkpoint Field Functions 
    bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
    void deleteCheckpoint() { this->checkpoint_ = nullptr;};
    inline string getCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, "") };
    inline ConfigureMigrationJobRequest& setCheckpoint(string checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


    // migrationJobId Field Functions 
    bool hasMigrationJobId() const { return this->migrationJobId_ != nullptr;};
    void deleteMigrationJobId() { this->migrationJobId_ = nullptr;};
    inline string getMigrationJobId() const { DARABONBA_PTR_GET_DEFAULT(migrationJobId_, "") };
    inline ConfigureMigrationJobRequest& setMigrationJobId(string migrationJobId) { DARABONBA_PTR_SET_VALUE(migrationJobId_, migrationJobId) };


    // migrationJobName Field Functions 
    bool hasMigrationJobName() const { return this->migrationJobName_ != nullptr;};
    void deleteMigrationJobName() { this->migrationJobName_ = nullptr;};
    inline string getMigrationJobName() const { DARABONBA_PTR_GET_DEFAULT(migrationJobName_, "") };
    inline ConfigureMigrationJobRequest& setMigrationJobName(string migrationJobName) { DARABONBA_PTR_SET_VALUE(migrationJobName_, migrationJobName) };


    // migrationObject Field Functions 
    bool hasMigrationObject() const { return this->migrationObject_ != nullptr;};
    void deleteMigrationObject() { this->migrationObject_ = nullptr;};
    inline string getMigrationObject() const { DARABONBA_PTR_GET_DEFAULT(migrationObject_, "") };
    inline ConfigureMigrationJobRequest& setMigrationObject(string migrationObject) { DARABONBA_PTR_SET_VALUE(migrationObject_, migrationObject) };


    // migrationReserved Field Functions 
    bool hasMigrationReserved() const { return this->migrationReserved_ != nullptr;};
    void deleteMigrationReserved() { this->migrationReserved_ = nullptr;};
    inline string getMigrationReserved() const { DARABONBA_PTR_GET_DEFAULT(migrationReserved_, "") };
    inline ConfigureMigrationJobRequest& setMigrationReserved(string migrationReserved) { DARABONBA_PTR_SET_VALUE(migrationReserved_, migrationReserved) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ConfigureMigrationJobRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ConfigureMigrationJobRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ConfigureMigrationJobRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    shared_ptr<ConfigureMigrationJobRequest::DestinationEndpoint> destinationEndpoint_ {};
    shared_ptr<ConfigureMigrationJobRequest::MigrationMode> migrationMode_ {};
    shared_ptr<ConfigureMigrationJobRequest::SourceEndpoint> sourceEndpoint_ {};
    // The objects that you want to migrate. The value is a JSON string and can contain regular expressions.
    // 
    // For more information, see [MigrationObject](https://help.aliyun.com/document_detail/141227.html).
    shared_ptr<string> accountId_ {};
    // Specifies whether to perform incremental data migration. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    // 
    // >  For more information about databases that support incremental data migration, see [Supported databases and migration types](https://help.aliyun.com/document_detail/26618.html).
    shared_ptr<string> checkpoint_ {};
    // system
    // 
    // This parameter is required.
    shared_ptr<string> migrationJobId_ {};
    // The ID of the region where the data migration instance resides. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    // 
    // >  The region ID of the data migration instance is the same as that of the destination database.
    // 
    // This parameter is required.
    shared_ptr<string> migrationJobName_ {};
    // Specifies whether to perform schema migration. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    // 
    // >  For more information about databases that support schema migration, see [Supported databases and migration types](https://help.aliyun.com/document_detail/26618.html).
    // 
    // This parameter is required.
    shared_ptr<string> migrationObject_ {};
    // Specifies whether to perform full data migration. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    // 
    // >  For more information about databases that support full data migration, see [Supported databases and migration types](https://help.aliyun.com/document_detail/26618.html).
    shared_ptr<string> migrationReserved_ {};
    shared_ptr<string> ownerId_ {};
    shared_ptr<string> regionId_ {};
    // Resource GroupId
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
