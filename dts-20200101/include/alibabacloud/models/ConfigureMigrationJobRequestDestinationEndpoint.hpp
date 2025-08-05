// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGUREMIGRATIONJOBREQUESTDESTINATIONENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_CONFIGUREMIGRATIONJOBREQUESTDESTINATIONENDPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ConfigureMigrationJobRequestDestinationEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigureMigrationJobRequestDestinationEndpoint& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ConfigureMigrationJobRequestDestinationEndpoint& obj) { 
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
    ConfigureMigrationJobRequestDestinationEndpoint() = default ;
    ConfigureMigrationJobRequestDestinationEndpoint(const ConfigureMigrationJobRequestDestinationEndpoint &) = default ;
    ConfigureMigrationJobRequestDestinationEndpoint(ConfigureMigrationJobRequestDestinationEndpoint &&) = default ;
    ConfigureMigrationJobRequestDestinationEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigureMigrationJobRequestDestinationEndpoint() = default ;
    ConfigureMigrationJobRequestDestinationEndpoint& operator=(const ConfigureMigrationJobRequestDestinationEndpoint &) = default ;
    ConfigureMigrationJobRequestDestinationEndpoint& operator=(ConfigureMigrationJobRequestDestinationEndpoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataBaseName_ != nullptr
        && this->engineName_ != nullptr && this->IP_ != nullptr && this->instanceID_ != nullptr && this->instanceType_ != nullptr && this->oracleSID_ != nullptr
        && this->password_ != nullptr && this->port_ != nullptr && this->region_ != nullptr && this->userName_ != nullptr; };
    // dataBaseName Field Functions 
    bool hasDataBaseName() const { return this->dataBaseName_ != nullptr;};
    void deleteDataBaseName() { this->dataBaseName_ = nullptr;};
    inline string dataBaseName() const { DARABONBA_PTR_GET_DEFAULT(dataBaseName_, "") };
    inline ConfigureMigrationJobRequestDestinationEndpoint& setDataBaseName(string dataBaseName) { DARABONBA_PTR_SET_VALUE(dataBaseName_, dataBaseName) };


    // engineName Field Functions 
    bool hasEngineName() const { return this->engineName_ != nullptr;};
    void deleteEngineName() { this->engineName_ = nullptr;};
    inline string engineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
    inline ConfigureMigrationJobRequestDestinationEndpoint& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


    // IP Field Functions 
    bool hasIP() const { return this->IP_ != nullptr;};
    void deleteIP() { this->IP_ = nullptr;};
    inline string IP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
    inline ConfigureMigrationJobRequestDestinationEndpoint& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


    // instanceID Field Functions 
    bool hasInstanceID() const { return this->instanceID_ != nullptr;};
    void deleteInstanceID() { this->instanceID_ = nullptr;};
    inline string instanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
    inline ConfigureMigrationJobRequestDestinationEndpoint& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ConfigureMigrationJobRequestDestinationEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // oracleSID Field Functions 
    bool hasOracleSID() const { return this->oracleSID_ != nullptr;};
    void deleteOracleSID() { this->oracleSID_ = nullptr;};
    inline string oracleSID() const { DARABONBA_PTR_GET_DEFAULT(oracleSID_, "") };
    inline ConfigureMigrationJobRequestDestinationEndpoint& setOracleSID(string oracleSID) { DARABONBA_PTR_SET_VALUE(oracleSID_, oracleSID) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ConfigureMigrationJobRequestDestinationEndpoint& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline ConfigureMigrationJobRequestDestinationEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ConfigureMigrationJobRequestDestinationEndpoint& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ConfigureMigrationJobRequestDestinationEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The region ID of the destination database.
    // 
    // >  If the **DestinationEndpoint.InstanceType** parameter is set to **LocalInstance**, you can enter **cn-hangzhou** or the ID of the region closest to the self-managed database. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    std::shared_ptr<string> dataBaseName_ = nullptr;
    // The authorized RAM role of the source instance. You must specify the RAM role only if the source instance and the destination instance belong to different Alibaba Cloud accounts. You can use the RAM role to allow the Alibaba Cloud account that owns the destination instance to access the source instance.
    // 
    // >  For information about the permissions and authorization methods of the RAM role, see [Configure RAM authorization for cross-account data migration and synchronization](https://help.aliyun.com/document_detail/48468.html).
    std::shared_ptr<string> engineName_ = nullptr;
    // The ID of the instance that hosts the destination database.
    // 
    // >  You must specify the instance ID only if the **DestinationEndpoint.InstanceType** parameter is set to **RDS**, **ECS**, **MongoDB**, **Redis**, **DRDS**, **PetaData**, **OceanBase**, **POLARDB**, **PolarDB_o**, **AnalyticDB**, or **Greenplum**. For example, if the DestinationEndpoint.InstanceType parameter is set to **ECS**, you must specify the ID of the ECS instance.
    std::shared_ptr<string> IP_ = nullptr;
    // The ID of the Alibaba Cloud account to which the source instance belongs.
    // 
    // >  You must specify this parameter only when you configure data migration across different Alibaba Cloud accounts.
    std::shared_ptr<string> instanceID_ = nullptr;
    // The password of the source database account.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The reserved parameter of DTS. The value is a JSON string. You can specify this parameter to meet special requirements, for example, whether to automatically start a precheck. For more information, see [MigrationReserved](https://help.aliyun.com/document_detail/176470.html).
    std::shared_ptr<string> oracleSID_ = nullptr;
    // The service port number of the destination database.
    // 
    // >  You must specify the service port number only if the **DestinationEndpoint.InstanceType** parameter is set to **ECS**, **LocalInstance**, or **Express**.
    std::shared_ptr<string> password_ = nullptr;
    // The engine type of the destination database. Valid values: **MySQL**, **DRDS**, **SQLServer**, **PostgreSQL**, **PPAS**, **MongoDB**, **Redis**, **POLARDB**, and **polardb_pg**.
    // 
    // >  You must specify the engine type only if the **DestinationEndpoint.InstanceType** parameter is set to **RDS**, **POLARDB**, **ECS**, **LocalInstance**, or **Express**.
    std::shared_ptr<string> port_ = nullptr;
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
    std::shared_ptr<string> region_ = nullptr;
    // The endpoint of the destination database.
    // 
    // >  You must specify the endpoint only if the **DestinationEndpoint.InstanceType** parameter is set to **LocalInstance** or **Express**.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
