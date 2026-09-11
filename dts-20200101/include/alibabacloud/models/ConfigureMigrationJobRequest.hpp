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
      // 待迁移的数据库名称或鉴权数据库名称。
      // > - 当**SourceEndpoint.EngineName**取值为**PostgreSQL**或**MongoDB**时，本参数才可用且必须传入。
      // - 当**SourceEndpoint.EngineName**取值为**PostgreSQL**时，传入待迁移的数据库名称；取值为**MongoDB**时，传入数据库账号的鉴权数据库名称。
      shared_ptr<string> databaseName_ {};
      // 源库的数据库类型，取值：**MySQL**、**TiDB**、**SQLServer**、**PostgreSQL**、**Oracle**、**MongoDB**、**Redis**、**POLARDB**、**polardb_pg**。
      // > 当**DestinationEndpoint.InstanceType**取值为**RDS**、**POLARDB**、**ECS**、**LocalInstance**或**Express**时，本参数才可用且必须传入。
      shared_ptr<string> engineName_ {};
      // 源库的连接地址。
      // > 当**SourceEndpoint.InstanceType**取值为**LocalInstance**或**Express**时，本参数才可用且必须传入。
      shared_ptr<string> IP_ {};
      // 源库的实例ID。
      // > - 当**SourceEndpoint.InstanceType**取值为**RDS**、**ECS**、**Express**、**MongoDB**、**POLARDB**或**PolarDB_o**时，本参数才可用且必须传入对应的实例ID（例如取值为**ECS**，则本参数传入ECS实例的ID）。
      // - 当**SourceEndpoint.InstanceType**取值为**Express**时，本参数传入VPC ID（即专有网络ID）。
      shared_ptr<string> instanceID_ {};
      // 源库的实例类型，取值：
      // - **RDS**：阿里云RDS实例。
      // - **ECS**：ECS上的自建数据库。
      // - **LocalInstance**：有公网IP的自建数据库。
      // - **Express**：通过专线/VPN网关/智能接入网关接入的自建数据库。
      // - **dg**：通过数据库网关DG接入的自建数据库。
      // - **cen**：通过云企业网CEN接入的自建数据库。
      // - **MongoDB**：阿里云MongoDB实例。
      // - **POLARDB**：阿里云PolarDB MySQL、PolarDB PostgreSQL。
      // - **PolarDB_o**：阿里云PolarDB O引擎集群。
      // 
      // This parameter is required.
      shared_ptr<string> instanceType_ {};
      // Oracle数据库的SID信息。
      // > 当**SourceEndpoint.EngineName**取值为**Oracle**，且Oracle数据库为非RAC实例时，本参数才可用且必须传入。
      shared_ptr<string> oracleSID_ {};
      // 源实例所属的阿里云账号ID。
      // > 仅在配置跨阿里云账号的数据迁移时本参数才可用，且必须传入。
      shared_ptr<string> ownerID_ {};
      // 源库数据库账号对应的密码。
      shared_ptr<string> password_ {};
      // 源库的服务端口。
      // > 当**SourceEndpoint.InstanceType**取值为**ECS**、**LocalInstance**或**Express**时，本参数才可用且必须传入。
      shared_ptr<string> port_ {};
      // 源库所属的地域ID。
      // > 当**SourceEndpoint.InstanceType**取值为**LocalInstance**时，您可以传入**cn-hangzhou**或者离自建数据库地物理距离最近的地域ID，详情请参见[支持的地域列表](https://help.aliyun.com/document_detail/141033.html)。
      shared_ptr<string> region_ {};
      // 当源实例与目标实例所属阿里云账号不同时，需传入该参数，来指定源实例的授权角色，以允许目标实例阿里云账号访问源实例的实例信息。
      // > 角色所需的权限及授权方式，请参见[跨阿里云账号数据迁移或同步时如何配置RAM授权](https://help.aliyun.com/document_detail/48468.html)。
      shared_ptr<string> role_ {};
      // 源库的数据库账号。
      // 
      // 说明 迁移不同的数据库所需的权限有所差异，详情请参见迁移方案概览中对应的配置案例。
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
      // 是否进行全量数据迁移，取值：
      // - **true**：是。
      // - **false**：否。
      // 
      // > DTS对全量数据迁移的支持情况因数据库类型不同而有所差异，详情请参见[支持的数据库和迁移类型](https://help.aliyun.com/document_detail/26618.html)。
      // 
      // This parameter is required.
      shared_ptr<bool> dataIntialization_ {};
      // 是否进行增量数据迁移，取值：
      // - **true**：是。
      // - **false**：否。
      // 
      // > DTS对增量数据迁移的支持情况因数据库类型不同而有所差异，详情请参见[支持的数据库和迁移类型](https://help.aliyun.com/document_detail/26618.html)。
      // 
      // This parameter is required.
      shared_ptr<bool> dataSynchronization_ {};
      // 是否进行结构迁移，取值：
      // - **true**：是。
      // - **false**：否。
      // 
      // > DTS对结构迁移的支持情况因数据库类型不同而有所差异，详情请参见[支持的数据库和迁移类型](https://help.aliyun.com/document_detail/26618.html)。
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
      // 待迁入的数据库名称或鉴权数据库名称。 
      // > - 当**DestinationEndpoint.EngineName**取值为**PostgreSQL**、**DRDS**或**MongoDB**时，本参数才可用且必须传入。
      // - 当**DestinationEndpoint.EngineName**取值为**PostgreSQL**或**DRDS**时，传入待迁移的数据库名称；取值为**MongoDB**时，传入数据库账号的鉴权数据库名称。
      shared_ptr<string> dataBaseName_ {};
      // 目标库的数据库类型。取值：**MySQL**、**DRDS**、**SQLServer**、**PostgreSQL**、**PPAS**、**MongoDB**、**Redis**、**POLARDB**、**polardb_pg**
      // > 当**DestinationEndpoint.InstanceType**取值为**RDS**、**POLARDB**、**ECS**、**LocalInstance**或**Express**时，本参数才可用且必须传入。
      shared_ptr<string> engineName_ {};
      // 目标库的连接地址。
      // > 当**DestinationEndpoint.InstanceType**取值为**LocalInstance**或**Express**时，本参数才可用且必须传入。
      shared_ptr<string> IP_ {};
      // 目标实例ID。
      // > 当**DestinationEndpoint.InstanceType**取值为**RDS**、**ECS**、**MongoDB**、**Redis**、**DRDS**、**PetaData**、**OceanBase**、**POLARDB**、**PolarDB_o**、**AnalyticDB**或**Greenplum**时，本参数才可用且必须传入对应的实例ID（例如取值为**ECS**，则需要传入ECS实例ID）。
      shared_ptr<string> instanceID_ {};
      // 目标库的实例类型，取值：
      // - **ECS**：ECS上的自建数据库。
      // - **LocalInstance**：有公网IP的自建数据库。
      // - **RDS**：阿里云RDS实例。
      // - **DRDS**：阿里云PolarDB-X实例。
      // - **MongoDB**：阿里云MongoDB实例。
      // - **Redis**：阿里云Redis实例。
      // - **PetaData**：阿里云HybridDB for MySQL实例。
      // - **POLARDB**：阿里云PolarDB MySQL、PolarDB PostgreSQL。
      // - **PolarDB_o**：阿里云PolarDB O引擎集群。
      // - **AnalyticDB**：阿里云云原生数据仓库AnalyticDB MySQL 3.0和2.0版本。
      // - **Greenplum**：阿里云云原生数据仓库AnalyticDB PostgreSQL。
      // 
      // This parameter is required.
      shared_ptr<string> instanceType_ {};
      // Oracle数据库的SID信息。
      // > 当**DestinationEndpoint.EngineName**取值为**Oracle**，且**Oracle**数据库为非RAC实例时，本参数才可用且必须传入。
      shared_ptr<string> oracleSID_ {};
      // 目标库数据库账号的密码。
      shared_ptr<string> password_ {};
      // 目标库的服务端口。
      // > 当**DestinationEndpoint.InstanceType**取值为**ECS**、**LocalInstance**或**Express**时，本参数才可用且必须传入。
      shared_ptr<string> port_ {};
      // 目标库所属的地域ID。
      // > 当**DestinationEndpoint.InstanceType**取值为**LocalInstance**时，您可以传入**cn-hangzhou**或者离自建数据库地物理距离最近的地域ID，详情请参见[支持的地域列表](https://help.aliyun.com/document_detail/141033.html)。
      shared_ptr<string> region_ {};
      // 目标库的数据库账号。
      // 
      // 说明 迁移不同的数据库所需的权限有所差异，详情请参见迁移方案概览中对应的配置案例。
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
    // The Alibaba Cloud account ID. You do not need to specify this parameter because it will be deprecated.
    shared_ptr<string> accountId_ {};
    // The start position of incremental data migration. The value is a UNIX timestamp in seconds.
    shared_ptr<string> checkpoint_ {};
    // The ID of the data migration instance. You can call the **DescribeMigrationJobs** operation to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> migrationJobId_ {};
    // The name of the migration task. The name can be up to 32 characters in length. Specify a descriptive name for easy identification. Uniqueness is not required.
    // 
    // This parameter is required.
    shared_ptr<string> migrationJobName_ {};
    // The objects to be migrated. The value is a JSON string that supports regular expressions. For more information, see [Migration object configuration](~141901~).
    // 
    // This parameter is required.
    shared_ptr<string> migrationObject_ {};
    // The reserved parameter of DTS. The value is a JSON string. You can specify this parameter to meet special requirements, such as whether to automatically start the precheck. For more information, see [MigrationReserved parameter description](https://help.aliyun.com/document_detail/176470.html).
    shared_ptr<string> migrationReserved_ {};
    shared_ptr<string> ownerId_ {};
    // The region ID of the data migration instance. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    // > The region ID must be the same as the region ID of the destination database.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
