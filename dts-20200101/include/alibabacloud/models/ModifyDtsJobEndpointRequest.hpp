// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDTSJOBENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDTSJOBENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ModifyDtsJobEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDtsJobEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(EndpointInstanceId, endpointInstanceId_);
      DARABONBA_PTR_TO_JSON(EndpointInstanceType, endpointInstanceType_);
      DARABONBA_PTR_TO_JSON(EndpointIp, endpointIp_);
      DARABONBA_PTR_TO_JSON(EndpointPort, endpointPort_);
      DARABONBA_PTR_TO_JSON(EndpointRegionId, endpointRegionId_);
      DARABONBA_PTR_TO_JSON(ModifyAccount, modifyAccount_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(ShardPassword, shardPassword_);
      DARABONBA_PTR_TO_JSON(ShardUsername, shardUsername_);
      DARABONBA_PTR_TO_JSON(SynchronizationDirection, synchronizationDirection_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(ZeroEtlJob, zeroEtlJob_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDtsJobEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(EndpointInstanceId, endpointInstanceId_);
      DARABONBA_PTR_FROM_JSON(EndpointInstanceType, endpointInstanceType_);
      DARABONBA_PTR_FROM_JSON(EndpointIp, endpointIp_);
      DARABONBA_PTR_FROM_JSON(EndpointPort, endpointPort_);
      DARABONBA_PTR_FROM_JSON(EndpointRegionId, endpointRegionId_);
      DARABONBA_PTR_FROM_JSON(ModifyAccount, modifyAccount_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(ShardPassword, shardPassword_);
      DARABONBA_PTR_FROM_JSON(ShardUsername, shardUsername_);
      DARABONBA_PTR_FROM_JSON(SynchronizationDirection, synchronizationDirection_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(ZeroEtlJob, zeroEtlJob_);
    };
    ModifyDtsJobEndpointRequest() = default ;
    ModifyDtsJobEndpointRequest(const ModifyDtsJobEndpointRequest &) = default ;
    ModifyDtsJobEndpointRequest(ModifyDtsJobEndpointRequest &&) = default ;
    ModifyDtsJobEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDtsJobEndpointRequest() = default ;
    ModifyDtsJobEndpointRequest& operator=(const ModifyDtsJobEndpointRequest &) = default ;
    ModifyDtsJobEndpointRequest& operator=(ModifyDtsJobEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunUid_ == nullptr
        && return this->database_ == nullptr && return this->dryRun_ == nullptr && return this->dtsInstanceId_ == nullptr && return this->dtsJobId_ == nullptr && return this->endpoint_ == nullptr
        && return this->endpointInstanceId_ == nullptr && return this->endpointInstanceType_ == nullptr && return this->endpointIp_ == nullptr && return this->endpointPort_ == nullptr && return this->endpointRegionId_ == nullptr
        && return this->modifyAccount_ == nullptr && return this->password_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->roleName_ == nullptr
        && return this->shardPassword_ == nullptr && return this->shardUsername_ == nullptr && return this->synchronizationDirection_ == nullptr && return this->username_ == nullptr && return this->zeroEtlJob_ == nullptr; };
    // aliyunUid Field Functions 
    bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
    void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
    inline string aliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
    inline ModifyDtsJobEndpointRequest& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline ModifyDtsJobEndpointRequest& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyDtsJobEndpointRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // dtsInstanceId Field Functions 
    bool hasDtsInstanceId() const { return this->dtsInstanceId_ != nullptr;};
    void deleteDtsInstanceId() { this->dtsInstanceId_ = nullptr;};
    inline string dtsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceId_, "") };
    inline ModifyDtsJobEndpointRequest& setDtsInstanceId(string dtsInstanceId) { DARABONBA_PTR_SET_VALUE(dtsInstanceId_, dtsInstanceId) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string dtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline ModifyDtsJobEndpointRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline ModifyDtsJobEndpointRequest& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // endpointInstanceId Field Functions 
    bool hasEndpointInstanceId() const { return this->endpointInstanceId_ != nullptr;};
    void deleteEndpointInstanceId() { this->endpointInstanceId_ = nullptr;};
    inline string endpointInstanceId() const { DARABONBA_PTR_GET_DEFAULT(endpointInstanceId_, "") };
    inline ModifyDtsJobEndpointRequest& setEndpointInstanceId(string endpointInstanceId) { DARABONBA_PTR_SET_VALUE(endpointInstanceId_, endpointInstanceId) };


    // endpointInstanceType Field Functions 
    bool hasEndpointInstanceType() const { return this->endpointInstanceType_ != nullptr;};
    void deleteEndpointInstanceType() { this->endpointInstanceType_ = nullptr;};
    inline string endpointInstanceType() const { DARABONBA_PTR_GET_DEFAULT(endpointInstanceType_, "") };
    inline ModifyDtsJobEndpointRequest& setEndpointInstanceType(string endpointInstanceType) { DARABONBA_PTR_SET_VALUE(endpointInstanceType_, endpointInstanceType) };


    // endpointIp Field Functions 
    bool hasEndpointIp() const { return this->endpointIp_ != nullptr;};
    void deleteEndpointIp() { this->endpointIp_ = nullptr;};
    inline string endpointIp() const { DARABONBA_PTR_GET_DEFAULT(endpointIp_, "") };
    inline ModifyDtsJobEndpointRequest& setEndpointIp(string endpointIp) { DARABONBA_PTR_SET_VALUE(endpointIp_, endpointIp) };


    // endpointPort Field Functions 
    bool hasEndpointPort() const { return this->endpointPort_ != nullptr;};
    void deleteEndpointPort() { this->endpointPort_ = nullptr;};
    inline string endpointPort() const { DARABONBA_PTR_GET_DEFAULT(endpointPort_, "") };
    inline ModifyDtsJobEndpointRequest& setEndpointPort(string endpointPort) { DARABONBA_PTR_SET_VALUE(endpointPort_, endpointPort) };


    // endpointRegionId Field Functions 
    bool hasEndpointRegionId() const { return this->endpointRegionId_ != nullptr;};
    void deleteEndpointRegionId() { this->endpointRegionId_ = nullptr;};
    inline string endpointRegionId() const { DARABONBA_PTR_GET_DEFAULT(endpointRegionId_, "") };
    inline ModifyDtsJobEndpointRequest& setEndpointRegionId(string endpointRegionId) { DARABONBA_PTR_SET_VALUE(endpointRegionId_, endpointRegionId) };


    // modifyAccount Field Functions 
    bool hasModifyAccount() const { return this->modifyAccount_ != nullptr;};
    void deleteModifyAccount() { this->modifyAccount_ = nullptr;};
    inline bool modifyAccount() const { DARABONBA_PTR_GET_DEFAULT(modifyAccount_, false) };
    inline ModifyDtsJobEndpointRequest& setModifyAccount(bool modifyAccount) { DARABONBA_PTR_SET_VALUE(modifyAccount_, modifyAccount) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifyDtsJobEndpointRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDtsJobEndpointRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyDtsJobEndpointRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline ModifyDtsJobEndpointRequest& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // shardPassword Field Functions 
    bool hasShardPassword() const { return this->shardPassword_ != nullptr;};
    void deleteShardPassword() { this->shardPassword_ = nullptr;};
    inline string shardPassword() const { DARABONBA_PTR_GET_DEFAULT(shardPassword_, "") };
    inline ModifyDtsJobEndpointRequest& setShardPassword(string shardPassword) { DARABONBA_PTR_SET_VALUE(shardPassword_, shardPassword) };


    // shardUsername Field Functions 
    bool hasShardUsername() const { return this->shardUsername_ != nullptr;};
    void deleteShardUsername() { this->shardUsername_ = nullptr;};
    inline string shardUsername() const { DARABONBA_PTR_GET_DEFAULT(shardUsername_, "") };
    inline ModifyDtsJobEndpointRequest& setShardUsername(string shardUsername) { DARABONBA_PTR_SET_VALUE(shardUsername_, shardUsername) };


    // synchronizationDirection Field Functions 
    bool hasSynchronizationDirection() const { return this->synchronizationDirection_ != nullptr;};
    void deleteSynchronizationDirection() { this->synchronizationDirection_ = nullptr;};
    inline string synchronizationDirection() const { DARABONBA_PTR_GET_DEFAULT(synchronizationDirection_, "") };
    inline ModifyDtsJobEndpointRequest& setSynchronizationDirection(string synchronizationDirection) { DARABONBA_PTR_SET_VALUE(synchronizationDirection_, synchronizationDirection) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ModifyDtsJobEndpointRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // zeroEtlJob Field Functions 
    bool hasZeroEtlJob() const { return this->zeroEtlJob_ != nullptr;};
    void deleteZeroEtlJob() { this->zeroEtlJob_ = nullptr;};
    inline bool zeroEtlJob() const { DARABONBA_PTR_GET_DEFAULT(zeroEtlJob_, false) };
    inline ModifyDtsJobEndpointRequest& setZeroEtlJob(bool zeroEtlJob) { DARABONBA_PTR_SET_VALUE(zeroEtlJob_, zeroEtlJob) };


  protected:
    // The ID of the Alibaba Cloud account (primary account) to which the database instance belongs.
    // >  Passing this parameter indicates that cross-Alibaba Cloud account data synchronization will be performed, and you also need to pass the **RoleName** parameter.
    std::shared_ptr<string> aliyunUid_ = nullptr;
    // When the database type is **PostgreSQL**, **PolarDB for PostgreSQL**, or **AnalyticDB PostgreSQL**, it represents the database name; when the database type is **MongoDB**, it represents the authentication database name.
    // > This parameter is only available and must be provided when the database type is **PostgreSQL**, **PolarDB for PostgreSQL**, **AnalyticDB PostgreSQL**, or **MongoDB**.
    std::shared_ptr<string> database_ = nullptr;
    // Specifies whether to perform only a precheck. Valid values:
    // 
    // *   **true**: Yes. After the precheck is passed, the database is not changed.
    // *   **false** (default): No. After the precheck is passed, the system changes the original database of the DTS task and runs the task.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The ID of the DTS instance. If this parameter is not provided, **DtsJobId** must be specified.
    std::shared_ptr<string> dtsInstanceId_ = nullptr;
    // DTS job ID, which can be queried by calling [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html).
    // > If this parameter is not provided, **DtsInstanceId** must be filled in.
    std::shared_ptr<string> dtsJobId_ = nullptr;
    // The database instance to be modified, with values:
    // - **src**: Source database instance. - **dest**: Target database instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> endpoint_ = nullptr;
    // ID of the database instance.
    std::shared_ptr<string> endpointInstanceId_ = nullptr;
    // The type of the database. Valid values:
    // 
    // *   **rds**: ApsaraDB RDS for MySQL instance, ApsaraDB RDS for SQL Server instance, or ApsaraDB RDS for PostgreSQL instance.
    // *   **polardb**: PolarDB for MySQL cluster or PolarDB for PostgreSQL cluster.
    // *   **mongodb**: ApsaraDB for MongoDB replica set instance.
    // *   **distributed_mongodb**: ApsaraDB for MongoDB sharded cluster instance.
    // *   **greenplum**: AnalyticDB for PostgreSQL instance.
    // *   **kafka**: ApsaraMQ for Kafka instance.
    // *   **ecs**: self-managed database that is hosted on an Elastic Compute Service (ECS) instance. If you set this parameter to ecs, the database must be the supported one.
    // *   **express**: database that is connected over Express Connect. If you set this parameter to express, the database must be the supported one.
    // *   **other**: database that is connected over Internet. If you set this parameter to other, the database must be the supported one.
    // 
    // > 
    // 
    // *   The following types of databases are supported: **MySQL**, **PolarDB for MySQL**, **PostgreSQL**, **PolarDB for PostgreSQL**, **MongoDB**, **SQL Server**, **Kafka**, and **AnalyticDB for PostgreSQL**.
    // 
    // *   If the original database is an ApsaraDB for MongoDB sharded cluster instance, the new database must have the same number of shards as the original database.
    // *   If the database that you want to change is a source **PostgreSQL** database, you must make sure that the latency of the DTS instance is less than 30 seconds and no data is written to the source database during the change. Otherwise, data inconsistency may occur.
    // *   The value of this parameter is case-insensitive.
    // 
    // This parameter is required.
    std::shared_ptr<string> endpointInstanceType_ = nullptr;
    // The IP of the database instance.
    std::shared_ptr<string> endpointIp_ = nullptr;
    // port of the database instance.
    std::shared_ptr<string> endpointPort_ = nullptr;
    // The ID of the region in which the database resides.
    std::shared_ptr<string> endpointRegionId_ = nullptr;
    // Specifies whether to change the password of the database account. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> modifyAccount_ = nullptr;
    // The password of the database account.
    // 
    // >  This parameter is valid only if **ModifyAccount** is set to **true**.
    std::shared_ptr<string> password_ = nullptr;
    // The ID of the region in which the DTS instance resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Cross Alibaba Cloud account role name. When performing data synchronization across Alibaba Cloud accounts, this parameter must be passed. For the required permissions and authorization methods for this role, please refer to [How to Configure RAM Authorization for Cross-Account Data Migration or Synchronization](https://help.aliyun.com/document_detail/48468.html).
    std::shared_ptr<string> roleName_ = nullptr;
    // The account password of the shard of the ApsaraDB for MongoDB sharded cluster instance.
    // 
    // > 
    // 
    // *   This parameter is valid and required only if the source database is an ApsaraDB for MongoDB sharded cluster instance.
    // 
    // *   This parameter is valid only if **ModifyAccount** is set to **true**.
    std::shared_ptr<string> shardPassword_ = nullptr;
    // The account username of the shard of the ApsaraDB for MongoDB sharded cluster instance.
    // 
    // > 
    // 
    // *   This parameter is valid and required only if the source database is an ApsaraDB for MongoDB sharded cluster instance.
    // 
    // *   This parameter is valid only if **ModifyAccount** is set to **true**.
    std::shared_ptr<string> shardUsername_ = nullptr;
    // Synchronization direction, with values:
    // - **Forward** (default): Forward. - **Reverse**: Reverse.
    std::shared_ptr<string> synchronizationDirection_ = nullptr;
    // The database account.
    // 
    // >  This parameter is valid only if **ModifyAccount** is set to **true**.
    std::shared_ptr<string> username_ = nullptr;
    std::shared_ptr<bool> zeroEtlJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
