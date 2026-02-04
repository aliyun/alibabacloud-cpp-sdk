// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGURESYNCHRONIZATIONJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGURESYNCHRONIZATIONJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ConfigureSynchronizationJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigureSynchronizationJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationEndpoint, destinationEndpoint_);
      DARABONBA_PTR_TO_JSON(PartitionKey, partitionKey_);
      DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_TO_JSON(DataInitialization, dataInitialization_);
      DARABONBA_PTR_TO_JSON(MigrationReserved, migrationReserved_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StructureInitialization, structureInitialization_);
      DARABONBA_PTR_TO_JSON(SynchronizationDirection, synchronizationDirection_);
      DARABONBA_PTR_TO_JSON(SynchronizationJobId, synchronizationJobId_);
      DARABONBA_PTR_TO_JSON(SynchronizationJobName, synchronizationJobName_);
      DARABONBA_PTR_TO_JSON(SynchronizationObjects, synchronizationObjects_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigureSynchronizationJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationEndpoint, destinationEndpoint_);
      DARABONBA_PTR_FROM_JSON(PartitionKey, partitionKey_);
      DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_FROM_JSON(DataInitialization, dataInitialization_);
      DARABONBA_PTR_FROM_JSON(MigrationReserved, migrationReserved_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StructureInitialization, structureInitialization_);
      DARABONBA_PTR_FROM_JSON(SynchronizationDirection, synchronizationDirection_);
      DARABONBA_PTR_FROM_JSON(SynchronizationJobId, synchronizationJobId_);
      DARABONBA_PTR_FROM_JSON(SynchronizationJobName, synchronizationJobName_);
      DARABONBA_PTR_FROM_JSON(SynchronizationObjects, synchronizationObjects_);
    };
    ConfigureSynchronizationJobRequest() = default ;
    ConfigureSynchronizationJobRequest(const ConfigureSynchronizationJobRequest &) = default ;
    ConfigureSynchronizationJobRequest(ConfigureSynchronizationJobRequest &&) = default ;
    ConfigureSynchronizationJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigureSynchronizationJobRequest() = default ;
    ConfigureSynchronizationJobRequest& operator=(const ConfigureSynchronizationJobRequest &) = default ;
    ConfigureSynchronizationJobRequest& operator=(ConfigureSynchronizationJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SourceEndpoint : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceEndpoint& obj) { 
        DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_TO_JSON(IP, IP_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(OwnerID, ownerID_);
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Role, role_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, SourceEndpoint& obj) { 
        DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_FROM_JSON(IP, IP_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(OwnerID, ownerID_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
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
        && this->IP_ == nullptr && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->ownerID_ == nullptr && this->password_ == nullptr
        && this->port_ == nullptr && this->role_ == nullptr && this->userName_ == nullptr; };
      // databaseName Field Functions 
      bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
      void deleteDatabaseName() { this->databaseName_ = nullptr;};
      inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
      inline SourceEndpoint& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


      // IP Field Functions 
      bool hasIP() const { return this->IP_ != nullptr;};
      void deleteIP() { this->IP_ = nullptr;};
      inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
      inline SourceEndpoint& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline SourceEndpoint& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline SourceEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


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
      // The name of the database to which the synchronization object in the source instance belongs.
      shared_ptr<string> databaseName_ {};
      // The IP address of the source database.
      // 
      // >  You must specify this parameter only if the **SourceEndpoint.InstanceType** parameter is set to **ECS**, **Express**, **dg**, or **cen**.
      shared_ptr<string> IP_ {};
      // The ID of the source instance.
      shared_ptr<string> instanceId_ {};
      // The type of the source instance. Valid values:
      // 
      // *   **RDS**: ApsaraDB RDS instance
      // *   **Redis**: ApsaraDB for Redis instance
      // *   **PolarDB**: PolarDB for MySQL cluster or PolarDB O Edition cluster
      // *   **ECS**: self-managed database that is hosted on Elastic Compute Service (ECS)
      // *   **Express**: self-managed database that is connected over Express Connect
      // *   **dg**: self-managed database that is connected over Database Gateway
      // *   **cen**: self-managed database that is connected over Cloud Enterprise Network (CEN)
      // 
      // >  The default value is **RDS**.
      shared_ptr<string> instanceType_ {};
      // The ID of the Alibaba Cloud account that owns the source RDS instance.
      // 
      // >  You can specify this parameter to synchronize data across different Alibaba Cloud accounts. In this case, you also need to specify the **SourceEndpoint.Role** parameter.
      shared_ptr<string> ownerID_ {};
      // The password of the source database account.
      // 
      // >  You must specify this parameter only if the **SourceEndpoint.InstanceType** parameter is set to **ECS**, **Express**, **dg**, or **cen**.
      shared_ptr<string> password_ {};
      // The service port number of the source database.
      // 
      // >  You must specify this parameter only if the **SourceEndpoint.InstanceType** parameter is set to **ECS**, **Express**, **dg**, or **cen**.
      shared_ptr<string> port_ {};
      // The name of the RAM role configured for the Alibaba Cloud account that owns the source instance.
      // 
      // >  You must specify this parameter when you synchronize data across different Alibaba Cloud accounts. For information about the permissions and authorization methods of the RAM role, see [Configure RAM authorization for cross-account data migration and synchronization](https://help.aliyun.com/document_detail/48468.html).
      shared_ptr<string> role_ {};
      // The database account of the source database.
      // 
      // > 
      // *   You must specify this parameter only if the **SourceEndpoint.InstanceType** parameter is set to **ECS**, **Express**, **dg**, or **cen**.
      // *   If the **SourceEndpoint.InstanceType** parameter is set to **Redis**, you do not need to specify the database account.
      // *   The permissions that are required for database accounts vary with the synchronization scenario. For more information, see [Overview of data synchronization scenarios](https://help.aliyun.com/document_detail/140954.html).
      shared_ptr<string> userName_ {};
    };

    class PartitionKey : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PartitionKey& obj) { 
        DARABONBA_PTR_TO_JSON(ModifyTime_Day, modifyTimeDay_);
        DARABONBA_PTR_TO_JSON(ModifyTime_Hour, modifyTimeHour_);
        DARABONBA_PTR_TO_JSON(ModifyTime_Minute, modifyTimeMinute_);
        DARABONBA_PTR_TO_JSON(ModifyTime_Month, modifyTimeMonth_);
        DARABONBA_PTR_TO_JSON(ModifyTime_Year, modifyTimeYear_);
      };
      friend void from_json(const Darabonba::Json& j, PartitionKey& obj) { 
        DARABONBA_PTR_FROM_JSON(ModifyTime_Day, modifyTimeDay_);
        DARABONBA_PTR_FROM_JSON(ModifyTime_Hour, modifyTimeHour_);
        DARABONBA_PTR_FROM_JSON(ModifyTime_Minute, modifyTimeMinute_);
        DARABONBA_PTR_FROM_JSON(ModifyTime_Month, modifyTimeMonth_);
        DARABONBA_PTR_FROM_JSON(ModifyTime_Year, modifyTimeYear_);
      };
      PartitionKey() = default ;
      PartitionKey(const PartitionKey &) = default ;
      PartitionKey(PartitionKey &&) = default ;
      PartitionKey(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PartitionKey() = default ;
      PartitionKey& operator=(const PartitionKey &) = default ;
      PartitionKey& operator=(PartitionKey &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->modifyTimeDay_ == nullptr
        && this->modifyTimeHour_ == nullptr && this->modifyTimeMinute_ == nullptr && this->modifyTimeMonth_ == nullptr && this->modifyTimeYear_ == nullptr; };
      // modifyTimeDay Field Functions 
      bool hasModifyTimeDay() const { return this->modifyTimeDay_ != nullptr;};
      void deleteModifyTimeDay() { this->modifyTimeDay_ = nullptr;};
      inline bool getModifyTimeDay() const { DARABONBA_PTR_GET_DEFAULT(modifyTimeDay_, false) };
      inline PartitionKey& setModifyTimeDay(bool modifyTimeDay) { DARABONBA_PTR_SET_VALUE(modifyTimeDay_, modifyTimeDay) };


      // modifyTimeHour Field Functions 
      bool hasModifyTimeHour() const { return this->modifyTimeHour_ != nullptr;};
      void deleteModifyTimeHour() { this->modifyTimeHour_ = nullptr;};
      inline bool getModifyTimeHour() const { DARABONBA_PTR_GET_DEFAULT(modifyTimeHour_, false) };
      inline PartitionKey& setModifyTimeHour(bool modifyTimeHour) { DARABONBA_PTR_SET_VALUE(modifyTimeHour_, modifyTimeHour) };


      // modifyTimeMinute Field Functions 
      bool hasModifyTimeMinute() const { return this->modifyTimeMinute_ != nullptr;};
      void deleteModifyTimeMinute() { this->modifyTimeMinute_ = nullptr;};
      inline bool getModifyTimeMinute() const { DARABONBA_PTR_GET_DEFAULT(modifyTimeMinute_, false) };
      inline PartitionKey& setModifyTimeMinute(bool modifyTimeMinute) { DARABONBA_PTR_SET_VALUE(modifyTimeMinute_, modifyTimeMinute) };


      // modifyTimeMonth Field Functions 
      bool hasModifyTimeMonth() const { return this->modifyTimeMonth_ != nullptr;};
      void deleteModifyTimeMonth() { this->modifyTimeMonth_ = nullptr;};
      inline bool getModifyTimeMonth() const { DARABONBA_PTR_GET_DEFAULT(modifyTimeMonth_, false) };
      inline PartitionKey& setModifyTimeMonth(bool modifyTimeMonth) { DARABONBA_PTR_SET_VALUE(modifyTimeMonth_, modifyTimeMonth) };


      // modifyTimeYear Field Functions 
      bool hasModifyTimeYear() const { return this->modifyTimeYear_ != nullptr;};
      void deleteModifyTimeYear() { this->modifyTimeYear_ = nullptr;};
      inline bool getModifyTimeYear() const { DARABONBA_PTR_GET_DEFAULT(modifyTimeYear_, false) };
      inline PartitionKey& setModifyTimeYear(bool modifyTimeYear) { DARABONBA_PTR_SET_VALUE(modifyTimeYear_, modifyTimeYear) };


    protected:
      // Specifies whether the incremental data table contains partitions defined by the modifytime_day field. Valid values: **true** and **false**.
      // 
      // >  This parameter is available only if the **DestinationEndpoint.InstanceType** parameter is set to **MaxCompute**.
      shared_ptr<bool> modifyTimeDay_ {};
      // Specifies whether the incremental data table contains partitions defined by the modifytime_hour field. Valid values: **true** and **false**.
      // 
      // >  This parameter is available only if the **DestinationEndpoint.InstanceType** parameter is set to **MaxCompute**.
      shared_ptr<bool> modifyTimeHour_ {};
      // Specifies whether the incremental data table contains partitions defined by the modifytime_minute field. Valid values: **true** and **false**.
      // 
      // >  This parameter is available only if the **DestinationEndpoint.InstanceType** parameter is set to **MaxCompute**.
      shared_ptr<bool> modifyTimeMinute_ {};
      // Specifies whether the incremental data table contains partitions defined by the modifytime_month field. Valid values: **true** and **false**.
      // 
      // >  This parameter is available only if the **DestinationEndpoint.InstanceType** parameter is set to **MaxCompute**.
      shared_ptr<bool> modifyTimeMonth_ {};
      // Specifies whether the incremental data table contains partitions defined by the modifytime_year field. Valid values: **true** and **false**.
      // 
      // >  This parameter is available only if the **DestinationEndpoint.InstanceType** parameter is set to **MaxCompute**.
      shared_ptr<bool> modifyTimeYear_ {};
    };

    class DestinationEndpoint : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DestinationEndpoint& obj) { 
        DARABONBA_PTR_TO_JSON(DataBaseName, dataBaseName_);
        DARABONBA_PTR_TO_JSON(IP, IP_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, DestinationEndpoint& obj) { 
        DARABONBA_PTR_FROM_JSON(DataBaseName, dataBaseName_);
        DARABONBA_PTR_FROM_JSON(IP, IP_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
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
        && this->IP_ == nullptr && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->password_ == nullptr && this->port_ == nullptr
        && this->userName_ == nullptr; };
      // dataBaseName Field Functions 
      bool hasDataBaseName() const { return this->dataBaseName_ != nullptr;};
      void deleteDataBaseName() { this->dataBaseName_ = nullptr;};
      inline string getDataBaseName() const { DARABONBA_PTR_GET_DEFAULT(dataBaseName_, "") };
      inline DestinationEndpoint& setDataBaseName(string dataBaseName) { DARABONBA_PTR_SET_VALUE(dataBaseName_, dataBaseName) };


      // IP Field Functions 
      bool hasIP() const { return this->IP_ != nullptr;};
      void deleteIP() { this->IP_ = nullptr;};
      inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
      inline DestinationEndpoint& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline DestinationEndpoint& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline DestinationEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


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


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline DestinationEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // The name of the database to which the synchronization object in the destination instance belongs.
      shared_ptr<string> dataBaseName_ {};
      // The IP address of the destination database.
      // 
      // >  You must specify this parameter only if the **DestinationEndpoint.InstanceType** parameter is set to **Express**, **dg**, or **cen**.
      shared_ptr<string> IP_ {};
      // The ID of the destination instance.
      // 
      // >  If the **DestinationEndpoint.InstanceType** parameter is set to **MaxCompute** or **DataHub**, you must specify the name of the MaxCompute project or the DataHub project.
      // 
      // If the destination instance is an AnalyticDB for MySQL cluster, specify the ID of the AnalyticDB for MySQL cluster.
      shared_ptr<string> instanceId_ {};
      // The type of the destination instance. Valid values:
      // 
      // *   **Redis**: ApsaraDB for Redis instance
      // *   **RDS**: ApsaraDB RDS instance
      // *   **PolarDB**: PolarDB for MySQL cluster or PolarDB O Edition cluster
      // *   **ECS**: self-managed database that is hosted on ECS
      // *   **Express**: self-managed database that is connected over Express Connect
      // *   **DataHub**: DataHub project
      // *   **MaxCompute**: MaxCompute project
      // *   **AnalyticDB**: AnalyticDB for MySQL cluster V3.0 or V2.0
      // *   **Greenplum**: AnalyticDB for PostgreSQL instance
      // 
      // >  The default value is **RDS**.
      shared_ptr<string> instanceType_ {};
      // The password of the destination database account.
      // 
      // > 
      // *   If the **DestinationEndpoint.InstanceType** parameter is set to **ECS**, **Express**, **dg**, or **cen**, you must specify the DestinationEndpoint.Password parameter.
      shared_ptr<string> password_ {};
      // The service port number of the destination database.
      // 
      // >  You must specify this parameter only if the **DestinationEndpoint.InstanceType** parameter is set to **ECS**, **Express**, **dg**, or **cen**.
      shared_ptr<string> port_ {};
      // The database account of the destination database.
      // 
      // > 
      // *   The permissions that are required for database accounts vary with the synchronization scenario. For more information, see [Overview of data synchronization scenarios](https://help.aliyun.com/document_detail/140954.html).
      // *   If the **DestinationEndpoint.InstanceType** parameter is set to **ECS**, **Express**, **dg**, or **cen**, you must specify the DestinationEndpoint.UserName parameter.
      // *   If the **DestinationEndpoint.InstanceType** parameter is set to RDS and the database version is MySQL 5.5 or MySQL 5.6, you do not need to specify the DestinationEndpoint.UserName and **DestinationEndpoint.Password** parameters.
      // *   If the **DestinationEndpoint.InstanceType** parameter is set to **Redis**, you do not need to specify the DestinationEndpoint.UserName parameter.
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->destinationEndpoint_ == nullptr
        && this->partitionKey_ == nullptr && this->sourceEndpoint_ == nullptr && this->accountId_ == nullptr && this->checkpoint_ == nullptr && this->dataInitialization_ == nullptr
        && this->migrationReserved_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->structureInitialization_ == nullptr
        && this->synchronizationDirection_ == nullptr && this->synchronizationJobId_ == nullptr && this->synchronizationJobName_ == nullptr && this->synchronizationObjects_ == nullptr; };
    // destinationEndpoint Field Functions 
    bool hasDestinationEndpoint() const { return this->destinationEndpoint_ != nullptr;};
    void deleteDestinationEndpoint() { this->destinationEndpoint_ = nullptr;};
    inline const ConfigureSynchronizationJobRequest::DestinationEndpoint & getDestinationEndpoint() const { DARABONBA_PTR_GET_CONST(destinationEndpoint_, ConfigureSynchronizationJobRequest::DestinationEndpoint) };
    inline ConfigureSynchronizationJobRequest::DestinationEndpoint getDestinationEndpoint() { DARABONBA_PTR_GET(destinationEndpoint_, ConfigureSynchronizationJobRequest::DestinationEndpoint) };
    inline ConfigureSynchronizationJobRequest& setDestinationEndpoint(const ConfigureSynchronizationJobRequest::DestinationEndpoint & destinationEndpoint) { DARABONBA_PTR_SET_VALUE(destinationEndpoint_, destinationEndpoint) };
    inline ConfigureSynchronizationJobRequest& setDestinationEndpoint(ConfigureSynchronizationJobRequest::DestinationEndpoint && destinationEndpoint) { DARABONBA_PTR_SET_RVALUE(destinationEndpoint_, destinationEndpoint) };


    // partitionKey Field Functions 
    bool hasPartitionKey() const { return this->partitionKey_ != nullptr;};
    void deletePartitionKey() { this->partitionKey_ = nullptr;};
    inline const ConfigureSynchronizationJobRequest::PartitionKey & getPartitionKey() const { DARABONBA_PTR_GET_CONST(partitionKey_, ConfigureSynchronizationJobRequest::PartitionKey) };
    inline ConfigureSynchronizationJobRequest::PartitionKey getPartitionKey() { DARABONBA_PTR_GET(partitionKey_, ConfigureSynchronizationJobRequest::PartitionKey) };
    inline ConfigureSynchronizationJobRequest& setPartitionKey(const ConfigureSynchronizationJobRequest::PartitionKey & partitionKey) { DARABONBA_PTR_SET_VALUE(partitionKey_, partitionKey) };
    inline ConfigureSynchronizationJobRequest& setPartitionKey(ConfigureSynchronizationJobRequest::PartitionKey && partitionKey) { DARABONBA_PTR_SET_RVALUE(partitionKey_, partitionKey) };


    // sourceEndpoint Field Functions 
    bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
    void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
    inline const ConfigureSynchronizationJobRequest::SourceEndpoint & getSourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, ConfigureSynchronizationJobRequest::SourceEndpoint) };
    inline ConfigureSynchronizationJobRequest::SourceEndpoint getSourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, ConfigureSynchronizationJobRequest::SourceEndpoint) };
    inline ConfigureSynchronizationJobRequest& setSourceEndpoint(const ConfigureSynchronizationJobRequest::SourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
    inline ConfigureSynchronizationJobRequest& setSourceEndpoint(ConfigureSynchronizationJobRequest::SourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ConfigureSynchronizationJobRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // checkpoint Field Functions 
    bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
    void deleteCheckpoint() { this->checkpoint_ = nullptr;};
    inline string getCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, "") };
    inline ConfigureSynchronizationJobRequest& setCheckpoint(string checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


    // dataInitialization Field Functions 
    bool hasDataInitialization() const { return this->dataInitialization_ != nullptr;};
    void deleteDataInitialization() { this->dataInitialization_ = nullptr;};
    inline bool getDataInitialization() const { DARABONBA_PTR_GET_DEFAULT(dataInitialization_, false) };
    inline ConfigureSynchronizationJobRequest& setDataInitialization(bool dataInitialization) { DARABONBA_PTR_SET_VALUE(dataInitialization_, dataInitialization) };


    // migrationReserved Field Functions 
    bool hasMigrationReserved() const { return this->migrationReserved_ != nullptr;};
    void deleteMigrationReserved() { this->migrationReserved_ = nullptr;};
    inline string getMigrationReserved() const { DARABONBA_PTR_GET_DEFAULT(migrationReserved_, "") };
    inline ConfigureSynchronizationJobRequest& setMigrationReserved(string migrationReserved) { DARABONBA_PTR_SET_VALUE(migrationReserved_, migrationReserved) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ConfigureSynchronizationJobRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ConfigureSynchronizationJobRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ConfigureSynchronizationJobRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // structureInitialization Field Functions 
    bool hasStructureInitialization() const { return this->structureInitialization_ != nullptr;};
    void deleteStructureInitialization() { this->structureInitialization_ = nullptr;};
    inline bool getStructureInitialization() const { DARABONBA_PTR_GET_DEFAULT(structureInitialization_, false) };
    inline ConfigureSynchronizationJobRequest& setStructureInitialization(bool structureInitialization) { DARABONBA_PTR_SET_VALUE(structureInitialization_, structureInitialization) };


    // synchronizationDirection Field Functions 
    bool hasSynchronizationDirection() const { return this->synchronizationDirection_ != nullptr;};
    void deleteSynchronizationDirection() { this->synchronizationDirection_ = nullptr;};
    inline string getSynchronizationDirection() const { DARABONBA_PTR_GET_DEFAULT(synchronizationDirection_, "") };
    inline ConfigureSynchronizationJobRequest& setSynchronizationDirection(string synchronizationDirection) { DARABONBA_PTR_SET_VALUE(synchronizationDirection_, synchronizationDirection) };


    // synchronizationJobId Field Functions 
    bool hasSynchronizationJobId() const { return this->synchronizationJobId_ != nullptr;};
    void deleteSynchronizationJobId() { this->synchronizationJobId_ = nullptr;};
    inline string getSynchronizationJobId() const { DARABONBA_PTR_GET_DEFAULT(synchronizationJobId_, "") };
    inline ConfigureSynchronizationJobRequest& setSynchronizationJobId(string synchronizationJobId) { DARABONBA_PTR_SET_VALUE(synchronizationJobId_, synchronizationJobId) };


    // synchronizationJobName Field Functions 
    bool hasSynchronizationJobName() const { return this->synchronizationJobName_ != nullptr;};
    void deleteSynchronizationJobName() { this->synchronizationJobName_ = nullptr;};
    inline string getSynchronizationJobName() const { DARABONBA_PTR_GET_DEFAULT(synchronizationJobName_, "") };
    inline ConfigureSynchronizationJobRequest& setSynchronizationJobName(string synchronizationJobName) { DARABONBA_PTR_SET_VALUE(synchronizationJobName_, synchronizationJobName) };


    // synchronizationObjects Field Functions 
    bool hasSynchronizationObjects() const { return this->synchronizationObjects_ != nullptr;};
    void deleteSynchronizationObjects() { this->synchronizationObjects_ = nullptr;};
    inline string getSynchronizationObjects() const { DARABONBA_PTR_GET_DEFAULT(synchronizationObjects_, "") };
    inline ConfigureSynchronizationJobRequest& setSynchronizationObjects(string synchronizationObjects) { DARABONBA_PTR_SET_VALUE(synchronizationObjects_, synchronizationObjects) };


  protected:
    shared_ptr<ConfigureSynchronizationJobRequest::DestinationEndpoint> destinationEndpoint_ {};
    shared_ptr<ConfigureSynchronizationJobRequest::PartitionKey> partitionKey_ {};
    shared_ptr<ConfigureSynchronizationJobRequest::SourceEndpoint> sourceEndpoint_ {};
    // The ID of the Alibaba Cloud account. You do not need to specify this parameter because this parameter will be removed in the future.
    shared_ptr<string> accountId_ {};
    // The synchronization checkpoint.
    shared_ptr<string> checkpoint_ {};
    // Specifies whether to perform initial full data synchronization. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    // 
    // >  Default value: **true**.
    // 
    // This parameter is required.
    shared_ptr<bool> dataInitialization_ {};
    // The reserved parameter of DTS. The value is a JSON string. You can specify this parameter to meet special requirements, for example, whether to automatically start a precheck. For more information, see [MigrationReserved](https://help.aliyun.com/document_detail/176470.html).
    // 
    // >  This parameter can be used for data synchronization between ApsaraDB for Redis Enterprise Edition instances. For more information, see [Use OpenAPI Explorer to configure one-way or two-way data synchronization between ApsaraDB for Redis Enterprise Edition instances](https://help.aliyun.com/document_detail/155967.html).
    shared_ptr<string> migrationReserved_ {};
    shared_ptr<string> ownerId_ {};
    shared_ptr<string> regionId_ {};
    // 资源组ID。
    shared_ptr<string> resourceGroupId_ {};
    // Specifies whether to perform initial schema synchronization. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    // 
    // >  Default value: **true**.
    // 
    // This parameter is required.
    shared_ptr<bool> structureInitialization_ {};
    // The synchronization direction. Valid values:
    // 
    // *   **Forward**
    // *   **Reverse**
    // 
    // > 
    // *   Default value: **Forward**.
    // *   The value **Reverse** takes effect only if the topology of the data synchronization instance is two-way synchronization.
    shared_ptr<string> synchronizationDirection_ {};
    // The ID of the data synchronization instance. You can call the [DescribeSynchronizationJobs](https://help.aliyun.com/document_detail/49454.html) operation to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> synchronizationJobId_ {};
    // The name of the data synchronization task.
    // 
    // >  We recommend that you specify an informative name for easy identification. You do not need to use a unique task name.
    shared_ptr<string> synchronizationJobName_ {};
    // The objects that you want to synchronize. The value is a JSON string and can contain regular expressions. For more information, see [SynchronizationObjects](https://help.aliyun.com/document_detail/141901.html).
    // 
    // This parameter is required.
    shared_ptr<string> synchronizationObjects_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
