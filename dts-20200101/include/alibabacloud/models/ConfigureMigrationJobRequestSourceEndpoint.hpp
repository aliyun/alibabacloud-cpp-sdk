// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGUREMIGRATIONJOBREQUESTSOURCEENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_CONFIGUREMIGRATIONJOBREQUESTSOURCEENDPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ConfigureMigrationJobRequestSourceEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigureMigrationJobRequestSourceEndpoint& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ConfigureMigrationJobRequestSourceEndpoint& obj) { 
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
    ConfigureMigrationJobRequestSourceEndpoint() = default ;
    ConfigureMigrationJobRequestSourceEndpoint(const ConfigureMigrationJobRequestSourceEndpoint &) = default ;
    ConfigureMigrationJobRequestSourceEndpoint(ConfigureMigrationJobRequestSourceEndpoint &&) = default ;
    ConfigureMigrationJobRequestSourceEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigureMigrationJobRequestSourceEndpoint() = default ;
    ConfigureMigrationJobRequestSourceEndpoint& operator=(const ConfigureMigrationJobRequestSourceEndpoint &) = default ;
    ConfigureMigrationJobRequestSourceEndpoint& operator=(ConfigureMigrationJobRequestSourceEndpoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseName_ == nullptr
        && return this->engineName_ == nullptr && return this->IP_ == nullptr && return this->instanceID_ == nullptr && return this->instanceType_ == nullptr && return this->oracleSID_ == nullptr
        && return this->ownerID_ == nullptr && return this->password_ == nullptr && return this->port_ == nullptr && return this->region_ == nullptr && return this->role_ == nullptr
        && return this->userName_ == nullptr; };
    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline ConfigureMigrationJobRequestSourceEndpoint& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // engineName Field Functions 
    bool hasEngineName() const { return this->engineName_ != nullptr;};
    void deleteEngineName() { this->engineName_ = nullptr;};
    inline string engineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
    inline ConfigureMigrationJobRequestSourceEndpoint& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


    // IP Field Functions 
    bool hasIP() const { return this->IP_ != nullptr;};
    void deleteIP() { this->IP_ = nullptr;};
    inline string IP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
    inline ConfigureMigrationJobRequestSourceEndpoint& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


    // instanceID Field Functions 
    bool hasInstanceID() const { return this->instanceID_ != nullptr;};
    void deleteInstanceID() { this->instanceID_ = nullptr;};
    inline string instanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
    inline ConfigureMigrationJobRequestSourceEndpoint& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ConfigureMigrationJobRequestSourceEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // oracleSID Field Functions 
    bool hasOracleSID() const { return this->oracleSID_ != nullptr;};
    void deleteOracleSID() { this->oracleSID_ = nullptr;};
    inline string oracleSID() const { DARABONBA_PTR_GET_DEFAULT(oracleSID_, "") };
    inline ConfigureMigrationJobRequestSourceEndpoint& setOracleSID(string oracleSID) { DARABONBA_PTR_SET_VALUE(oracleSID_, oracleSID) };


    // ownerID Field Functions 
    bool hasOwnerID() const { return this->ownerID_ != nullptr;};
    void deleteOwnerID() { this->ownerID_ = nullptr;};
    inline string ownerID() const { DARABONBA_PTR_GET_DEFAULT(ownerID_, "") };
    inline ConfigureMigrationJobRequestSourceEndpoint& setOwnerID(string ownerID) { DARABONBA_PTR_SET_VALUE(ownerID_, ownerID) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ConfigureMigrationJobRequestSourceEndpoint& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline ConfigureMigrationJobRequestSourceEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ConfigureMigrationJobRequestSourceEndpoint& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline ConfigureMigrationJobRequestSourceEndpoint& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ConfigureMigrationJobRequestSourceEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The endpoint of the source database.
    // 
    // >  You must specify the endpoint only if the **SourceEndpoint.InstanceType** parameter is set to **LocalInstance** or **Express**.
    std::shared_ptr<string> databaseName_ = nullptr;
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
    std::shared_ptr<string> engineName_ = nullptr;
    // rm-bp1i99e8l7913****
    std::shared_ptr<string> IP_ = nullptr;
    // dtsl3m1213ye7l****
    std::shared_ptr<string> instanceID_ = nullptr;
    // The ID of the data migration instance. You can call the **DescribeMigrationJobs** operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The region ID of the source database.
    // 
    // >  If the **SourceEndpoint.InstanceType** parameter is set to **LocalInstance**, you can enter **cn-hangzhou** or the ID of the region closest to the self-managed database. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    std::shared_ptr<string> oracleSID_ = nullptr;
    // The name of the source database or the authentication database.
    // 
    // > 
    // *   You must specify the database name only if the **SourceEndpoint.EngineName** parameter is set to **PostgreSQL** or **MongoDB**.
    // *   If the **SourceEndpoint.EngineName** parameter is set to **PostgreSQL**, specify the name of the source database. If the SourceEndpoint.EngineName parameter is set to **MongoDB**, specify the name of the authentication database.
    std::shared_ptr<string> ownerID_ = nullptr;
    // The system ID (SID) of the Oracle database.
    // 
    // >  You must specify this parameter only if the **SourceEndpoint.EngineName** parameter is set to **Oracle** and the **Oracle** database is deployed in a non-RAC architecture.
    std::shared_ptr<string> password_ = nullptr;
    // The engine type of the source database. Valid values: **MySQL**, **TiDB**, **SQLServer**, **PostgreSQL**, **Oracle**, **MongoDB**, **Redis**, **POLARDB**, and **polardb_pg**.
    // 
    // >  You must specify the engine type only if the **DestinationEndpoint.InstanceType** parameter is set to **RDS**, **POLARDB**, **ECS**, **LocalInstance**, or **Express**.
    std::shared_ptr<string> port_ = nullptr;
    // The ID of the instance that hosts the source database.
    // 
    // > 
    // *   You must specify the instance ID only if the **SourceEndpoint.InstanceType** parameter is set to **RDS**, **ECS**, **Express**, **MongoDB**, **POLARDB**, or **PolarDB_o**. For example, if the SourceEndpoint.InstanceType parameter is set to **ECS**, you must specify the ID of the ECS instance.
    // *   If the **SourceEndpoint.InstanceType** parameter is set to **Express**, you must specify the ID of the virtual private cloud (VPC).
    std::shared_ptr<string> region_ = nullptr;
    // The database account of the source database.
    // 
    // >  The permissions that are required for database accounts vary with the migration scenario. For more information, see [Overview of data migration scenarios](https://help.aliyun.com/document_detail/26618.html).
    std::shared_ptr<string> role_ = nullptr;
    // The service port number of the source database.
    // 
    // >  You must specify the service port number only if the **SourceEndpoint.InstanceType** parameter is set to **ECS**, **LocalInstance**, or **Express**.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
