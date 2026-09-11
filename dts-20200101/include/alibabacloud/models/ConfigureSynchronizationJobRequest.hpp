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
      // 源实例中的同步对象所属数据库名称。
      shared_ptr<string> databaseName_ {};
      // 源库的IP地址。
      // > 当**SourceEndpoint.InstanceType**取值为**ECS**、**Express**、**dg**或**cen**时，本参数才可用且必须传入。
      shared_ptr<string> IP_ {};
      // 源实例ID。
      shared_ptr<string> instanceId_ {};
      // 源实例类型，取值为：
      // 
      // - **RDS**：阿里云RDS实例。
      // - **Redis**：阿里云Redis实例。
      // - **PolarDB**：阿里云PolarDB集群（仅支持MySQL或兼容Oracle语法的引擎）。
      // - **ECS**：ECS上的自建数据库。
      // - **Express**：通过专线接入的自建数据库。
      // - **dg**：通过数据库网关DG接入的自建数据库。
      // - **cen**：通过云企业网CEN接入的自建数据库。
      // 
      // > 默认取值为**RDS**。
      shared_ptr<string> instanceType_ {};
      // 源RDS实例所属的阿里云账号ID。
      // > 传入本参数即代表执行跨阿里云账号的数据同步，同时您还需要传入**SourceEndpoint.Role**参数。
      shared_ptr<string> ownerID_ {};
      // 源库数据库账号密码。
      // > 当**SourceEndpoint.InstanceType**取值为**ECS**、**Express**、**dg**或**cen**时，本参数必须传入。
      shared_ptr<string> password_ {};
      // 源库的数据库服务端口。
      // > 当**SourceEndpoint.InstanceType**取值为**ECS**、**Express**、**dg**或**cen**时，本参数才可用且必须传入。
      shared_ptr<string> port_ {};
      // 源实例所属云账号配置的角色名称。
      // > 执行跨阿里云账号的数据同步时须传入本参数，该角色所需的权限及授权方式请参见[跨阿里云账号数据迁移或同步时如何配置RAM授权](https://help.aliyun.com/document_detail/48468.html)。
      shared_ptr<string> role_ {};
      // 源库的数据库账号。
      // > - 当**SourceEndpoint.InstanceType**取值为**ECS**、**Express**、**dg**或**cen**时，本参数才可用且必须传入。
      // - 当**SourceEndpoint.InstanceType**取值为**Redis**时，本参数无需传入。
      // - 同步不同的数据库所需的权限有所差异，详情请参见[DTS数据同步方案概览](https://help.aliyun.com/document_detail/140954.html)中对应的配置案例。
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
      // 设置增量日志表是否包含以增量更新时间对应日期信息定义的分区，取值：**true**或**false**。
      // > 当**DestinationEndpoint.InstanceType**参数取值为**Maxcompute**时，本参数才可用。
      shared_ptr<bool> modifyTimeDay_ {};
      // 设置增量日志表是否包含以增量更新时间对应小时信息定义的分区，取值：**true**或**false**。
      // > 当**DestinationEndpoint.InstanceType**参数取值为**Maxcompute**时，本参数才可用。
      shared_ptr<bool> modifyTimeHour_ {};
      // 设置增量日志表是否包含以增量更新时间对应分钟信息定义的分区，取值：**true**或**false**。
      // 
      // > 当**DestinationEndpoint.InstanceType**参数取值为**Maxcompute**时，本参数才可用。
      shared_ptr<bool> modifyTimeMinute_ {};
      // 设置增量日志表是否包含以增量更新时间对应月份信息定义的分区，取值：**true**或**false**。
      // > 当**DestinationEndpoint.InstanceType**参数取值为**Maxcompute**时，本参数才可用。
      shared_ptr<bool> modifyTimeMonth_ {};
      // 设置增量日志表是否包含以增量更新时间对应年份信息定义的分区，取值：**true**或**false**。
      // > 当**DestinationEndpoint.InstanceType**参数取值为**Maxcompute**时，本参数才可用。
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
      // 目标实例中的同步对象所属数据库名称。
      shared_ptr<string> dataBaseName_ {};
      // 目标库的IP地址。
      // > 当**DestinationEndpoint.InstanceType**取值为**Express**、**dg**或**cen**时，本参数必须传入本参数才可用且必须传入。
      shared_ptr<string> IP_ {};
      // 同步目标实例的实例ID
      // > 当**DestinationEndpoint.InstanceType**取值为**MaxCompute**或**DataHub**时，本参数传入MaxCompute实例或DataHub的Project名称。
      // 当目标实例为阿里云分析型数据库MySQL版时，传入分析型数据库MySQL版的集群ID。
      shared_ptr<string> instanceId_ {};
      // 目标实例类型，取值为：
      // 
      // - **Redis**：阿里云Redis实例。
      // - **RDS**：阿里云RDS实例。
      // - **PolarDB**：阿里云PolarDB集群（仅支持MySQL或兼容Oracle语法的引擎）。
      // - **ECS**：ECS上的自建数据库。
      // - **Express**：通过专线接入的本地数据库。
      // - **DataHub**：阿里云DataHub实例。
      // - **MaxCompute**：阿里云MaxCompute实例。
      // - **AnalyticDB**：云原生数据仓库AnalyticDB MySQL  3.0和2.0版本。
      // - **Greenplum**：云原生数据仓库ADB PostgreSQL版（原分析型数据库PostgreSQL版）。
      // 
      // > 默认取值为**RDS**。
      shared_ptr<string> instanceType_ {};
      // 目标库数据库账号密码。
      // 
      // > - 当**DestinationEndpoint.InstanceType**取值为**ECS**、**Express**、**dg**或**cen**时，本参数必须传入。
      shared_ptr<string> password_ {};
      // 目标库的数据库服务端口。
      // > 当**DestinationEndpoint.InstanceType**取值为**ECS**、**Express**、**dg**或**cen**时，本参数才可用且必须传入。
      shared_ptr<string> port_ {};
      // 目标库的数据库账号。
      // > - 同步不同的数据库所需的权限有所差异，详情请参见[DTS数据同步方案概览](https://help.aliyun.com/document_detail/140954.html)中对应的配置案例。
      // - 当**DestinationEndpoint.InstanceType**取值为**ECS**、**Express**、**dg**或**cen**时，本参数必须传入。
      // - 当**DestinationEndpoint.InstanceType**取值为RDS且数据库版本为MySQL 5.5或MySQL 5.6，无需传入本参数和**DestinationEndpoint.Password**参数。
      // - 当**DestinationEndpoint.InstanceType**取值为**Redis**时，无需传入本参数。
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
    // The ID of the Alibaba Cloud account. You do not need to specify this parameter because it will be discontinued.
    shared_ptr<string> accountId_ {};
    // The synchronization checkpoint.
    shared_ptr<string> checkpoint_ {};
    // Specifies whether to perform initial full data synchronization. Valid values:
    // 
    // - **true**: yes.
    // - **false**: no.
    // 
    // > Default value: **true**.
    // 
    // This parameter is required.
    shared_ptr<bool> dataInitialization_ {};
    // The reserved parameter of DTS. The value is a JSON string. You can specify this parameter to meet special requirements, such as specifying whether to automatically start the precheck. For more information, see [MigrationReserved parameter description](https://help.aliyun.com/document_detail/176470.html).
    // > For example, you can use this parameter for data synchronization between ApsaraDB for Redis Enhanced Edition (Tair) instances. For more information, see [Use OpenAPI to configure one-way or bidirectional data synchronization between ApsaraDB for Redis Enhanced Edition instances](https://help.aliyun.com/document_detail/155967.html).
    shared_ptr<string> migrationReserved_ {};
    shared_ptr<string> ownerId_ {};
    // The ID of the region where the data synchronization instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // Specifies whether to perform initial schema synchronization. Valid values:
    // - **true**: yes.
    // - **false**: no.
    // 
    // > Default value: **true**.
    // 
    // This parameter is required.
    shared_ptr<bool> structureInitialization_ {};
    // The synchronization direction. Valid values:
    // - **Forward**: forward.
    // - **Reverse**: reverse.
    // 
    // > - Default value: **Forward**.
    // - This parameter takes effect only if you set it to **Reverse** and the synchronization topology of the data synchronization instance is two-way synchronization.
    shared_ptr<string> synchronizationDirection_ {};
    // The ID of the data synchronization instance. You can call the [DescribeSynchronizationJobs](https://help.aliyun.com/document_detail/49454.html) operation to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> synchronizationJobId_ {};
    // The name of the synchronization task.
    // > Specify a descriptive name that makes it easy to identify the task. It does not need to be unique.
    shared_ptr<string> synchronizationJobName_ {};
    // The objects to be synchronized. The value is a JSON string and supports certain regular expressions. For more information, see [Synchronization object configuration](https://help.aliyun.com/document_detail/141901.html).
    // 
    // This parameter is required.
    shared_ptr<string> synchronizationObjects_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
