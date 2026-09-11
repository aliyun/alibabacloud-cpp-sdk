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
      DARABONBA_PTR_TO_JSON(EndpointPrimaryVswId, endpointPrimaryVswId_);
      DARABONBA_PTR_TO_JSON(EndpointRegionId, endpointRegionId_);
      DARABONBA_PTR_TO_JSON(EndpointSecondaryVswId, endpointSecondaryVswId_);
      DARABONBA_PTR_TO_JSON(EndpointVpcId, endpointVpcId_);
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
      DARABONBA_PTR_FROM_JSON(EndpointPrimaryVswId, endpointPrimaryVswId_);
      DARABONBA_PTR_FROM_JSON(EndpointRegionId, endpointRegionId_);
      DARABONBA_PTR_FROM_JSON(EndpointSecondaryVswId, endpointSecondaryVswId_);
      DARABONBA_PTR_FROM_JSON(EndpointVpcId, endpointVpcId_);
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
        && this->database_ == nullptr && this->dryRun_ == nullptr && this->dtsInstanceId_ == nullptr && this->dtsJobId_ == nullptr && this->endpoint_ == nullptr
        && this->endpointInstanceId_ == nullptr && this->endpointInstanceType_ == nullptr && this->endpointIp_ == nullptr && this->endpointPort_ == nullptr && this->endpointPrimaryVswId_ == nullptr
        && this->endpointRegionId_ == nullptr && this->endpointSecondaryVswId_ == nullptr && this->endpointVpcId_ == nullptr && this->modifyAccount_ == nullptr && this->password_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->roleName_ == nullptr && this->shardPassword_ == nullptr && this->shardUsername_ == nullptr
        && this->synchronizationDirection_ == nullptr && this->username_ == nullptr && this->zeroEtlJob_ == nullptr; };
    // aliyunUid Field Functions 
    bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
    void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
    inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
    inline ModifyDtsJobEndpointRequest& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline ModifyDtsJobEndpointRequest& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyDtsJobEndpointRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // dtsInstanceId Field Functions 
    bool hasDtsInstanceId() const { return this->dtsInstanceId_ != nullptr;};
    void deleteDtsInstanceId() { this->dtsInstanceId_ = nullptr;};
    inline string getDtsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceId_, "") };
    inline ModifyDtsJobEndpointRequest& setDtsInstanceId(string dtsInstanceId) { DARABONBA_PTR_SET_VALUE(dtsInstanceId_, dtsInstanceId) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline ModifyDtsJobEndpointRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline ModifyDtsJobEndpointRequest& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // endpointInstanceId Field Functions 
    bool hasEndpointInstanceId() const { return this->endpointInstanceId_ != nullptr;};
    void deleteEndpointInstanceId() { this->endpointInstanceId_ = nullptr;};
    inline string getEndpointInstanceId() const { DARABONBA_PTR_GET_DEFAULT(endpointInstanceId_, "") };
    inline ModifyDtsJobEndpointRequest& setEndpointInstanceId(string endpointInstanceId) { DARABONBA_PTR_SET_VALUE(endpointInstanceId_, endpointInstanceId) };


    // endpointInstanceType Field Functions 
    bool hasEndpointInstanceType() const { return this->endpointInstanceType_ != nullptr;};
    void deleteEndpointInstanceType() { this->endpointInstanceType_ = nullptr;};
    inline string getEndpointInstanceType() const { DARABONBA_PTR_GET_DEFAULT(endpointInstanceType_, "") };
    inline ModifyDtsJobEndpointRequest& setEndpointInstanceType(string endpointInstanceType) { DARABONBA_PTR_SET_VALUE(endpointInstanceType_, endpointInstanceType) };


    // endpointIp Field Functions 
    bool hasEndpointIp() const { return this->endpointIp_ != nullptr;};
    void deleteEndpointIp() { this->endpointIp_ = nullptr;};
    inline string getEndpointIp() const { DARABONBA_PTR_GET_DEFAULT(endpointIp_, "") };
    inline ModifyDtsJobEndpointRequest& setEndpointIp(string endpointIp) { DARABONBA_PTR_SET_VALUE(endpointIp_, endpointIp) };


    // endpointPort Field Functions 
    bool hasEndpointPort() const { return this->endpointPort_ != nullptr;};
    void deleteEndpointPort() { this->endpointPort_ = nullptr;};
    inline string getEndpointPort() const { DARABONBA_PTR_GET_DEFAULT(endpointPort_, "") };
    inline ModifyDtsJobEndpointRequest& setEndpointPort(string endpointPort) { DARABONBA_PTR_SET_VALUE(endpointPort_, endpointPort) };


    // endpointPrimaryVswId Field Functions 
    bool hasEndpointPrimaryVswId() const { return this->endpointPrimaryVswId_ != nullptr;};
    void deleteEndpointPrimaryVswId() { this->endpointPrimaryVswId_ = nullptr;};
    inline string getEndpointPrimaryVswId() const { DARABONBA_PTR_GET_DEFAULT(endpointPrimaryVswId_, "") };
    inline ModifyDtsJobEndpointRequest& setEndpointPrimaryVswId(string endpointPrimaryVswId) { DARABONBA_PTR_SET_VALUE(endpointPrimaryVswId_, endpointPrimaryVswId) };


    // endpointRegionId Field Functions 
    bool hasEndpointRegionId() const { return this->endpointRegionId_ != nullptr;};
    void deleteEndpointRegionId() { this->endpointRegionId_ = nullptr;};
    inline string getEndpointRegionId() const { DARABONBA_PTR_GET_DEFAULT(endpointRegionId_, "") };
    inline ModifyDtsJobEndpointRequest& setEndpointRegionId(string endpointRegionId) { DARABONBA_PTR_SET_VALUE(endpointRegionId_, endpointRegionId) };


    // endpointSecondaryVswId Field Functions 
    bool hasEndpointSecondaryVswId() const { return this->endpointSecondaryVswId_ != nullptr;};
    void deleteEndpointSecondaryVswId() { this->endpointSecondaryVswId_ = nullptr;};
    inline string getEndpointSecondaryVswId() const { DARABONBA_PTR_GET_DEFAULT(endpointSecondaryVswId_, "") };
    inline ModifyDtsJobEndpointRequest& setEndpointSecondaryVswId(string endpointSecondaryVswId) { DARABONBA_PTR_SET_VALUE(endpointSecondaryVswId_, endpointSecondaryVswId) };


    // endpointVpcId Field Functions 
    bool hasEndpointVpcId() const { return this->endpointVpcId_ != nullptr;};
    void deleteEndpointVpcId() { this->endpointVpcId_ = nullptr;};
    inline string getEndpointVpcId() const { DARABONBA_PTR_GET_DEFAULT(endpointVpcId_, "") };
    inline ModifyDtsJobEndpointRequest& setEndpointVpcId(string endpointVpcId) { DARABONBA_PTR_SET_VALUE(endpointVpcId_, endpointVpcId) };


    // modifyAccount Field Functions 
    bool hasModifyAccount() const { return this->modifyAccount_ != nullptr;};
    void deleteModifyAccount() { this->modifyAccount_ = nullptr;};
    inline bool getModifyAccount() const { DARABONBA_PTR_GET_DEFAULT(modifyAccount_, false) };
    inline ModifyDtsJobEndpointRequest& setModifyAccount(bool modifyAccount) { DARABONBA_PTR_SET_VALUE(modifyAccount_, modifyAccount) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifyDtsJobEndpointRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDtsJobEndpointRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyDtsJobEndpointRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline ModifyDtsJobEndpointRequest& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // shardPassword Field Functions 
    bool hasShardPassword() const { return this->shardPassword_ != nullptr;};
    void deleteShardPassword() { this->shardPassword_ = nullptr;};
    inline string getShardPassword() const { DARABONBA_PTR_GET_DEFAULT(shardPassword_, "") };
    inline ModifyDtsJobEndpointRequest& setShardPassword(string shardPassword) { DARABONBA_PTR_SET_VALUE(shardPassword_, shardPassword) };


    // shardUsername Field Functions 
    bool hasShardUsername() const { return this->shardUsername_ != nullptr;};
    void deleteShardUsername() { this->shardUsername_ = nullptr;};
    inline string getShardUsername() const { DARABONBA_PTR_GET_DEFAULT(shardUsername_, "") };
    inline ModifyDtsJobEndpointRequest& setShardUsername(string shardUsername) { DARABONBA_PTR_SET_VALUE(shardUsername_, shardUsername) };


    // synchronizationDirection Field Functions 
    bool hasSynchronizationDirection() const { return this->synchronizationDirection_ != nullptr;};
    void deleteSynchronizationDirection() { this->synchronizationDirection_ = nullptr;};
    inline string getSynchronizationDirection() const { DARABONBA_PTR_GET_DEFAULT(synchronizationDirection_, "") };
    inline ModifyDtsJobEndpointRequest& setSynchronizationDirection(string synchronizationDirection) { DARABONBA_PTR_SET_VALUE(synchronizationDirection_, synchronizationDirection) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ModifyDtsJobEndpointRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // zeroEtlJob Field Functions 
    bool hasZeroEtlJob() const { return this->zeroEtlJob_ != nullptr;};
    void deleteZeroEtlJob() { this->zeroEtlJob_ = nullptr;};
    inline bool getZeroEtlJob() const { DARABONBA_PTR_GET_DEFAULT(zeroEtlJob_, false) };
    inline ModifyDtsJobEndpointRequest& setZeroEtlJob(bool zeroEtlJob) { DARABONBA_PTR_SET_VALUE(zeroEtlJob_, zeroEtlJob) };


  protected:
    // The ID of the Alibaba Cloud account that owns the database instance.
    // 
    // > Specifying this parameter indicates cross-account data synchronization. You must also specify the **RoleName** parameter.
    shared_ptr<string> aliyunUid_ {};
    // The database name when the database type is **PostgreSQL**, **PolarDB for PostgreSQL**, or **AnalyticDB PostgreSQL**. The authentication database name when the database type is **MongoDB**.
    // 
    // > This parameter is available and required only when the database type is **PostgreSQL**, **PolarDB for PostgreSQL**, **AnalyticDB PostgreSQL**, or **MongoDB**.
    shared_ptr<string> database_ {};
    // Specifies whether to perform only a dry run. Valid values:
    // 
    // - **true**: Yes. After the dry run succeeds, the instance is not modified.
    // - **false** (default): No. After the dry run succeeds, the database instance of the DTS task is modified and the task runs.
    shared_ptr<bool> dryRun_ {};
    // The ID of the DTS instance.
    // > If you do not specify this parameter, you must specify **DtsJobId**.
    shared_ptr<string> dtsInstanceId_ {};
    // The ID of the DTS task. You can call [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) to query the task ID.
    // 
    // > If you do not specify this parameter, you must specify **DtsInstanceId**.
    shared_ptr<string> dtsJobId_ {};
    // The database instance to be modified. Valid values:
    // 
    // - **src**: source instance.
    // - **dest**: destination instance.
    // 
    // This parameter is required.
    shared_ptr<string> endpoint_ {};
    // The ID of the database instance.
    shared_ptr<string> endpointInstanceId_ {};
    // The type of the database instance. Valid values:
    // 
    // - **rds**: ApsaraDB RDS for MySQL or ApsaraDB RDS for PostgreSQL.
    // - **polardb**: PolarDB for MySQL or PolarDB for PostgreSQL.
    // - **mongodb**: when used as the source, ApsaraDB for MongoDB (replica set architecture). When used as the destination, ApsaraDB for MongoDB (replica set or sharded cluster architecture).
    // - **distributed_mongodb**: supported only as the source of a distributed instance. Indicates ApsaraDB for MongoDB (sharded cluster architecture).
    // 
    // > The incremental node of a distributed instance must obtain data changes from the source through Oplog.
    // 
    // - **greenplum**: cloud-native data warehouse AnalyticDB for PostgreSQL.
    // - **kafka**: ApsaraMQ for Kafka.
    // - **ecs**: self-managed database on an ECS instance (only supported database types).
    // - **express**: database connected over Express Connect (only supported database types).
    // - **other**: database connected over the Internet (only supported database types).
    // 
    // > - Currently supported database types include **MySQL**, **PolarDB for MySQL**, **PostgreSQL**, **PolarDB for PostgreSQL**, **MongoDB**, **Kafka**, and **AnalyticDB PostgreSQL**.
    // - If the database is MongoDB (sharded cluster), the number of shards in the new database must be the same as that in the original MongoDB (sharded cluster).
    // - If the source instance is to be modified and the database type is **PostgreSQL**, make sure that the latency of the DTS instance is less than 30 seconds and stop writing data to the source. Otherwise, inconsistent data may occur.
    // - The parameter values are case-insensitive.
    // 
    // This parameter is required.
    shared_ptr<string> endpointInstanceType_ {};
    // The IP address of the database instance.
    shared_ptr<string> endpointIp_ {};
    // The port of the database instance.
    shared_ptr<string> endpointPort_ {};
    // The primary vSwitch for Express Connect access.
    shared_ptr<string> endpointPrimaryVswId_ {};
    // The region to which the database instance belongs.
    shared_ptr<string> endpointRegionId_ {};
    // The secondary vSwitch for Express Connect access.
    shared_ptr<string> endpointSecondaryVswId_ {};
    // The VPC ID for Express Connect access.
    shared_ptr<string> endpointVpcId_ {};
    // Specifies whether to modify the account and password. Valid values:
    // 
    // - **true**: Yes.
    // - **false** (default): No.
    shared_ptr<bool> modifyAccount_ {};
    // The database password.
    // 
    // > This parameter takes effect only when **ModifyAccount** is set to **true**.
    shared_ptr<string> password_ {};
    // The region to which the DTS instance belongs.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The name of the RAM role for cross-account access.
    // 
    // > Specify this parameter when performing cross-account data synchronization. For the required permissions and authorization method of this role, see [Configure RAM authorization for cross-account data migration or synchronization](https://help.aliyun.com/document_detail/48468.html).
    shared_ptr<string> roleName_ {};
    // The password of the shard in the MongoDB sharded cluster instance.
    // 
    // > - This parameter is available and required only when the source database instance is ApsaraDB for MongoDB (sharded cluster architecture).
    // - This parameter takes effect only when **ModifyAccount** is set to **true**.
    shared_ptr<string> shardPassword_ {};
    // The account of the shard in the MongoDB sharded cluster instance.
    // 
    // > - This parameter is available and required only when the source database instance is ApsaraDB for MongoDB (sharded cluster architecture).
    // - This parameter takes effect only when **ModifyAccount** is set to **true**.
    shared_ptr<string> shardUsername_ {};
    // The synchronization direction. Valid values:
    // 
    // - **Forward** (default): forward.
    // - **Reverse**: reverse.
    shared_ptr<string> synchronizationDirection_ {};
    // The database account.
    // 
    // > This parameter takes effect only when **ModifyAccount** is set to **true**.
    shared_ptr<string> username_ {};
    // Specifies whether this is a seamless integration (zero-ETL) node. Valid values:
    // - **true**: Yes.
    // - **false**: No.
    shared_ptr<bool> zeroEtlJob_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
