// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADELINDORMINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADELINDORMINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class UpgradeLindormInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeLindormInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterStorage, clusterStorage_);
      DARABONBA_PTR_TO_JSON(ColdStorage, coldStorage_);
      DARABONBA_PTR_TO_JSON(CoreSingleStorage, coreSingleStorage_);
      DARABONBA_PTR_TO_JSON(FilestoreNum, filestoreNum_);
      DARABONBA_PTR_TO_JSON(FilestoreSpec, filestoreSpec_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LindormNum, lindormNum_);
      DARABONBA_PTR_TO_JSON(LindormSpec, lindormSpec_);
      DARABONBA_PTR_TO_JSON(LogNum, logNum_);
      DARABONBA_PTR_TO_JSON(LogSingleStorage, logSingleStorage_);
      DARABONBA_PTR_TO_JSON(LogSpec, logSpec_);
      DARABONBA_PTR_TO_JSON(LtsCoreNum, ltsCoreNum_);
      DARABONBA_PTR_TO_JSON(LtsCoreSpec, ltsCoreSpec_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(SolrNum, solrNum_);
      DARABONBA_PTR_TO_JSON(SolrSpec, solrSpec_);
      DARABONBA_PTR_TO_JSON(StreamNum, streamNum_);
      DARABONBA_PTR_TO_JSON(StreamSpec, streamSpec_);
      DARABONBA_PTR_TO_JSON(TsdbNum, tsdbNum_);
      DARABONBA_PTR_TO_JSON(TsdbSpec, tsdbSpec_);
      DARABONBA_PTR_TO_JSON(UpgradeType, upgradeType_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeLindormInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterStorage, clusterStorage_);
      DARABONBA_PTR_FROM_JSON(ColdStorage, coldStorage_);
      DARABONBA_PTR_FROM_JSON(CoreSingleStorage, coreSingleStorage_);
      DARABONBA_PTR_FROM_JSON(FilestoreNum, filestoreNum_);
      DARABONBA_PTR_FROM_JSON(FilestoreSpec, filestoreSpec_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LindormNum, lindormNum_);
      DARABONBA_PTR_FROM_JSON(LindormSpec, lindormSpec_);
      DARABONBA_PTR_FROM_JSON(LogNum, logNum_);
      DARABONBA_PTR_FROM_JSON(LogSingleStorage, logSingleStorage_);
      DARABONBA_PTR_FROM_JSON(LogSpec, logSpec_);
      DARABONBA_PTR_FROM_JSON(LtsCoreNum, ltsCoreNum_);
      DARABONBA_PTR_FROM_JSON(LtsCoreSpec, ltsCoreSpec_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(SolrNum, solrNum_);
      DARABONBA_PTR_FROM_JSON(SolrSpec, solrSpec_);
      DARABONBA_PTR_FROM_JSON(StreamNum, streamNum_);
      DARABONBA_PTR_FROM_JSON(StreamSpec, streamSpec_);
      DARABONBA_PTR_FROM_JSON(TsdbNum, tsdbNum_);
      DARABONBA_PTR_FROM_JSON(TsdbSpec, tsdbSpec_);
      DARABONBA_PTR_FROM_JSON(UpgradeType, upgradeType_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    UpgradeLindormInstanceRequest() = default ;
    UpgradeLindormInstanceRequest(const UpgradeLindormInstanceRequest &) = default ;
    UpgradeLindormInstanceRequest(UpgradeLindormInstanceRequest &&) = default ;
    UpgradeLindormInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeLindormInstanceRequest() = default ;
    UpgradeLindormInstanceRequest& operator=(const UpgradeLindormInstanceRequest &) = default ;
    UpgradeLindormInstanceRequest& operator=(UpgradeLindormInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterStorage_ == nullptr
        && return this->coldStorage_ == nullptr && return this->coreSingleStorage_ == nullptr && return this->filestoreNum_ == nullptr && return this->filestoreSpec_ == nullptr && return this->instanceId_ == nullptr
        && return this->lindormNum_ == nullptr && return this->lindormSpec_ == nullptr && return this->logNum_ == nullptr && return this->logSingleStorage_ == nullptr && return this->logSpec_ == nullptr
        && return this->ltsCoreNum_ == nullptr && return this->ltsCoreSpec_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->securityToken_ == nullptr && return this->solrNum_ == nullptr && return this->solrSpec_ == nullptr
        && return this->streamNum_ == nullptr && return this->streamSpec_ == nullptr && return this->tsdbNum_ == nullptr && return this->tsdbSpec_ == nullptr && return this->upgradeType_ == nullptr
        && return this->zoneId_ == nullptr; };
    // clusterStorage Field Functions 
    bool hasClusterStorage() const { return this->clusterStorage_ != nullptr;};
    void deleteClusterStorage() { this->clusterStorage_ = nullptr;};
    inline int32_t clusterStorage() const { DARABONBA_PTR_GET_DEFAULT(clusterStorage_, 0) };
    inline UpgradeLindormInstanceRequest& setClusterStorage(int32_t clusterStorage) { DARABONBA_PTR_SET_VALUE(clusterStorage_, clusterStorage) };


    // coldStorage Field Functions 
    bool hasColdStorage() const { return this->coldStorage_ != nullptr;};
    void deleteColdStorage() { this->coldStorage_ = nullptr;};
    inline int32_t coldStorage() const { DARABONBA_PTR_GET_DEFAULT(coldStorage_, 0) };
    inline UpgradeLindormInstanceRequest& setColdStorage(int32_t coldStorage) { DARABONBA_PTR_SET_VALUE(coldStorage_, coldStorage) };


    // coreSingleStorage Field Functions 
    bool hasCoreSingleStorage() const { return this->coreSingleStorage_ != nullptr;};
    void deleteCoreSingleStorage() { this->coreSingleStorage_ = nullptr;};
    inline int32_t coreSingleStorage() const { DARABONBA_PTR_GET_DEFAULT(coreSingleStorage_, 0) };
    inline UpgradeLindormInstanceRequest& setCoreSingleStorage(int32_t coreSingleStorage) { DARABONBA_PTR_SET_VALUE(coreSingleStorage_, coreSingleStorage) };


    // filestoreNum Field Functions 
    bool hasFilestoreNum() const { return this->filestoreNum_ != nullptr;};
    void deleteFilestoreNum() { this->filestoreNum_ = nullptr;};
    inline int32_t filestoreNum() const { DARABONBA_PTR_GET_DEFAULT(filestoreNum_, 0) };
    inline UpgradeLindormInstanceRequest& setFilestoreNum(int32_t filestoreNum) { DARABONBA_PTR_SET_VALUE(filestoreNum_, filestoreNum) };


    // filestoreSpec Field Functions 
    bool hasFilestoreSpec() const { return this->filestoreSpec_ != nullptr;};
    void deleteFilestoreSpec() { this->filestoreSpec_ = nullptr;};
    inline string filestoreSpec() const { DARABONBA_PTR_GET_DEFAULT(filestoreSpec_, "") };
    inline UpgradeLindormInstanceRequest& setFilestoreSpec(string filestoreSpec) { DARABONBA_PTR_SET_VALUE(filestoreSpec_, filestoreSpec) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpgradeLindormInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lindormNum Field Functions 
    bool hasLindormNum() const { return this->lindormNum_ != nullptr;};
    void deleteLindormNum() { this->lindormNum_ = nullptr;};
    inline int32_t lindormNum() const { DARABONBA_PTR_GET_DEFAULT(lindormNum_, 0) };
    inline UpgradeLindormInstanceRequest& setLindormNum(int32_t lindormNum) { DARABONBA_PTR_SET_VALUE(lindormNum_, lindormNum) };


    // lindormSpec Field Functions 
    bool hasLindormSpec() const { return this->lindormSpec_ != nullptr;};
    void deleteLindormSpec() { this->lindormSpec_ = nullptr;};
    inline string lindormSpec() const { DARABONBA_PTR_GET_DEFAULT(lindormSpec_, "") };
    inline UpgradeLindormInstanceRequest& setLindormSpec(string lindormSpec) { DARABONBA_PTR_SET_VALUE(lindormSpec_, lindormSpec) };


    // logNum Field Functions 
    bool hasLogNum() const { return this->logNum_ != nullptr;};
    void deleteLogNum() { this->logNum_ = nullptr;};
    inline int32_t logNum() const { DARABONBA_PTR_GET_DEFAULT(logNum_, 0) };
    inline UpgradeLindormInstanceRequest& setLogNum(int32_t logNum) { DARABONBA_PTR_SET_VALUE(logNum_, logNum) };


    // logSingleStorage Field Functions 
    bool hasLogSingleStorage() const { return this->logSingleStorage_ != nullptr;};
    void deleteLogSingleStorage() { this->logSingleStorage_ = nullptr;};
    inline int32_t logSingleStorage() const { DARABONBA_PTR_GET_DEFAULT(logSingleStorage_, 0) };
    inline UpgradeLindormInstanceRequest& setLogSingleStorage(int32_t logSingleStorage) { DARABONBA_PTR_SET_VALUE(logSingleStorage_, logSingleStorage) };


    // logSpec Field Functions 
    bool hasLogSpec() const { return this->logSpec_ != nullptr;};
    void deleteLogSpec() { this->logSpec_ = nullptr;};
    inline string logSpec() const { DARABONBA_PTR_GET_DEFAULT(logSpec_, "") };
    inline UpgradeLindormInstanceRequest& setLogSpec(string logSpec) { DARABONBA_PTR_SET_VALUE(logSpec_, logSpec) };


    // ltsCoreNum Field Functions 
    bool hasLtsCoreNum() const { return this->ltsCoreNum_ != nullptr;};
    void deleteLtsCoreNum() { this->ltsCoreNum_ = nullptr;};
    inline int32_t ltsCoreNum() const { DARABONBA_PTR_GET_DEFAULT(ltsCoreNum_, 0) };
    inline UpgradeLindormInstanceRequest& setLtsCoreNum(int32_t ltsCoreNum) { DARABONBA_PTR_SET_VALUE(ltsCoreNum_, ltsCoreNum) };


    // ltsCoreSpec Field Functions 
    bool hasLtsCoreSpec() const { return this->ltsCoreSpec_ != nullptr;};
    void deleteLtsCoreSpec() { this->ltsCoreSpec_ = nullptr;};
    inline string ltsCoreSpec() const { DARABONBA_PTR_GET_DEFAULT(ltsCoreSpec_, "") };
    inline UpgradeLindormInstanceRequest& setLtsCoreSpec(string ltsCoreSpec) { DARABONBA_PTR_SET_VALUE(ltsCoreSpec_, ltsCoreSpec) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpgradeLindormInstanceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpgradeLindormInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpgradeLindormInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpgradeLindormInstanceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpgradeLindormInstanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline UpgradeLindormInstanceRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // solrNum Field Functions 
    bool hasSolrNum() const { return this->solrNum_ != nullptr;};
    void deleteSolrNum() { this->solrNum_ = nullptr;};
    inline int32_t solrNum() const { DARABONBA_PTR_GET_DEFAULT(solrNum_, 0) };
    inline UpgradeLindormInstanceRequest& setSolrNum(int32_t solrNum) { DARABONBA_PTR_SET_VALUE(solrNum_, solrNum) };


    // solrSpec Field Functions 
    bool hasSolrSpec() const { return this->solrSpec_ != nullptr;};
    void deleteSolrSpec() { this->solrSpec_ = nullptr;};
    inline string solrSpec() const { DARABONBA_PTR_GET_DEFAULT(solrSpec_, "") };
    inline UpgradeLindormInstanceRequest& setSolrSpec(string solrSpec) { DARABONBA_PTR_SET_VALUE(solrSpec_, solrSpec) };


    // streamNum Field Functions 
    bool hasStreamNum() const { return this->streamNum_ != nullptr;};
    void deleteStreamNum() { this->streamNum_ = nullptr;};
    inline int32_t streamNum() const { DARABONBA_PTR_GET_DEFAULT(streamNum_, 0) };
    inline UpgradeLindormInstanceRequest& setStreamNum(int32_t streamNum) { DARABONBA_PTR_SET_VALUE(streamNum_, streamNum) };


    // streamSpec Field Functions 
    bool hasStreamSpec() const { return this->streamSpec_ != nullptr;};
    void deleteStreamSpec() { this->streamSpec_ = nullptr;};
    inline string streamSpec() const { DARABONBA_PTR_GET_DEFAULT(streamSpec_, "") };
    inline UpgradeLindormInstanceRequest& setStreamSpec(string streamSpec) { DARABONBA_PTR_SET_VALUE(streamSpec_, streamSpec) };


    // tsdbNum Field Functions 
    bool hasTsdbNum() const { return this->tsdbNum_ != nullptr;};
    void deleteTsdbNum() { this->tsdbNum_ = nullptr;};
    inline int32_t tsdbNum() const { DARABONBA_PTR_GET_DEFAULT(tsdbNum_, 0) };
    inline UpgradeLindormInstanceRequest& setTsdbNum(int32_t tsdbNum) { DARABONBA_PTR_SET_VALUE(tsdbNum_, tsdbNum) };


    // tsdbSpec Field Functions 
    bool hasTsdbSpec() const { return this->tsdbSpec_ != nullptr;};
    void deleteTsdbSpec() { this->tsdbSpec_ = nullptr;};
    inline string tsdbSpec() const { DARABONBA_PTR_GET_DEFAULT(tsdbSpec_, "") };
    inline UpgradeLindormInstanceRequest& setTsdbSpec(string tsdbSpec) { DARABONBA_PTR_SET_VALUE(tsdbSpec_, tsdbSpec) };


    // upgradeType Field Functions 
    bool hasUpgradeType() const { return this->upgradeType_ != nullptr;};
    void deleteUpgradeType() { this->upgradeType_ = nullptr;};
    inline string upgradeType() const { DARABONBA_PTR_GET_DEFAULT(upgradeType_, "") };
    inline UpgradeLindormInstanceRequest& setUpgradeType(string upgradeType) { DARABONBA_PTR_SET_VALUE(upgradeType_, upgradeType) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline UpgradeLindormInstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The storage capacity of the instance after it is upgraded. Unit: GB. Valid values: **480** to **1017600**.
    std::shared_ptr<int32_t> clusterStorage_ = nullptr;
    // The cold storage capacity of the instance after it is upgraded. Unit: GB. Valid values: **800** to **1000000**.
    std::shared_ptr<int32_t> coldStorage_ = nullptr;
    // The storage capacity of a single core node in the instance after the instance upgraded. This parameter is available only if the instance you want to upgrade is a multi-zone instance. Unit: GB. Valid values: 400 to 64000. **This parameter is optional**.
    std::shared_ptr<int32_t> coreSingleStorage_ = nullptr;
    // The number of LindormDFS nodes in the instance after the instance is upgraded. Valid values: integers from **0** to **60**.
    std::shared_ptr<int32_t> filestoreNum_ = nullptr;
    // The specification of LindormDFS nodes in the instance after the instance is upgraded. Valid values:
    // 
    // *   **lindorm.g.xlarge**: Each node has 4 dedicated CPU cores and 16 GB of dedicated memory.
    // *   **lindorm.g.2xlarge**: Each node has 8 dedicated CPU cores and 32 GB of dedicated memory.
    // *   **lindorm.g.4xlarge**: Each node has 16 dedicated CPU cores and 64 GB of dedicated memory.
    // *   **lindorm.g.8xlarge**: Each node has 32 dedicated CPU cores and 128 GB of dedicated memory.
    std::shared_ptr<string> filestoreSpec_ = nullptr;
    // The ID of the instance that you want to upgrade, scale up, or enable cold storage. You can call the [GetLindormInstanceList](https://help.aliyun.com/document_detail/426069.html) operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The number of LindormTable nodes in the instance after the instance is upgraded. Valid values: integers from **0** to **90**.
    // 
    // > This parameter must be specified together with the LindormSpec parameter.
    std::shared_ptr<int32_t> lindormNum_ = nullptr;
    // The specification of LindormTable nodes in the instance after the instance is upgraded. Valid values:
    // 
    // *   **lindorm.c.xlarge**: Each node has 4 dedicated CPU cores and 8 GB of dedicated memory.
    // *   **lindorm.c.2xlarge**: Each node has 8 dedicated CPU cores and 16 GB of dedicated memory.
    // *   **lindorm.c.4xlarge**: Each node has 16 dedicated CPU cores and 32 GB of dedicated memory.
    // *   **lindorm.c.8xlarge**: Each node has 32 dedicated CPU cores and 64 GB of dedicated memory.
    std::shared_ptr<string> lindormSpec_ = nullptr;
    // The number of log nodes in the instance after the instance is upgraded. This parameter is available only if the instance you want to upgrade is a multi-zone instance. **This parameter is optional**.
    std::shared_ptr<int32_t> logNum_ = nullptr;
    // The storage capacity of a single log node in the instance after the instance upgraded. This parameter is available only if the instance you want to upgrade is a multi-zone instance. **This parameter is optional**.
    std::shared_ptr<int32_t> logSingleStorage_ = nullptr;
    // The specification of log nodes in the instance after the instance is upgraded. This parameter is available only if the instance you want to upgrade is a multi-zone instance. Valid values:
    // 
    // *   **lindorm.sn1.large**: Each node has 4 dedicated CPU cores and 8 GB of dedicated memory.
    // *   **lindorm.sn1.2xlarge**: Each node has 8 dedicated CPU cores and 16 GB of dedicated memory.
    // 
    // **This parameter is optional**.
    std::shared_ptr<string> logSpec_ = nullptr;
    // The number of LTS nodes in the instance after the instance is upgraded. Valid values: integers from **0** to **50**.
    std::shared_ptr<int32_t> ltsCoreNum_ = nullptr;
    // The specification of Lindorm Tunnel Service (LTS) nodes in the instance after the instance is upgraded. Valid values:
    // 
    // *   **lindorm.g.xlarge**: Each node has 4 dedicated CPU cores and 16 GB of dedicated memory.
    // *   **lindorm.g.2xlarge**: Each node has 8 dedicated CPU cores and 32 GB of dedicated memory.
    std::shared_ptr<string> ltsCoreSpec_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region in which the instance that you want to upgrade, scale up, or enable cold storage is located. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/426062.html) operation to query the region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The number of LindormSearch nodes in the instance after the instance is upgraded. Valid values: integers from **0** to **60**.
    std::shared_ptr<int32_t> solrNum_ = nullptr;
    // The specification of LindormSearch nodes in the instance after the instance is upgraded. Valid values:
    // 
    // *   **lindorm.g.xlarge**: Each node has 4 dedicated CPU cores and 16 GB of dedicated memory.
    // *   **lindorm.g.2xlarge**: Each node has 8 dedicated CPU cores and 32 GB of dedicated memory.
    // *   **lindorm.g.4xlarge**: Each node has 16 dedicated CPU cores and 64 GB of dedicated memory.
    // *   **lindorm.g.8xlarge**: Each node has 32 dedicated CPU cores and 128 GB of dedicated memory.
    std::shared_ptr<string> solrSpec_ = nullptr;
    // The number of LindormStream nodes in the instance after the instance is upgraded. Valid values: integers from **0** to **60**.
    std::shared_ptr<int32_t> streamNum_ = nullptr;
    // The specification of LindormStream nodes in the instance after the instance is upgraded. Valid values:
    // 
    // *   **lindorm.g.xlarge**: Each node has 4 dedicated CPU cores and 16 GB of dedicated memory.
    // *   **lindorm.g.2xlarge**: Each node has 8 dedicated CPU cores and 32 GB of dedicated memory.
    // *   **lindorm.g.4xlarge**: Each node has 16 dedicated CPU cores and 64 GB of dedicated memory.
    // *   **lindorm.g.8xlarge**: Each node has 32 dedicated CPU cores and 128 GB of dedicated memory.
    std::shared_ptr<string> streamSpec_ = nullptr;
    // The number of LindormTSDB nodes in the instance after the instance is upgraded. Valid values: integers from **0** to **24**.
    std::shared_ptr<int32_t> tsdbNum_ = nullptr;
    // The specification of LindormTSDB nodes in the instance after the instance is upgraded. Valid values:
    // 
    // *   **lindorm.g.xlarge**: Each node has 4 dedicated CPU cores and 16 GB of dedicated memory.
    // *   **lindorm.g.2xlarge**: Each node has 8 dedicated CPU cores and 32 GB of dedicated memory.
    // *   **lindorm.g.4xlarge**: Each node has 16 dedicated CPU cores and 64 GB of dedicated memory.
    // *   **lindorm.g.8xlarge**: Each node has 32 dedicated CPU cores and 128 GB of dedicated memory.
    std::shared_ptr<string> tsdbSpec_ = nullptr;
    // The upgrade type of the operation. For more information about upgrade types, see the UpgradeType parameters section.
    // 
    // This parameter is required.
    std::shared_ptr<string> upgradeType_ = nullptr;
    // The ID of the zone in which the instance that you want to upgrade, scale up, or enable cold storage is located. You can call the [GetLindormInstance](https://help.aliyun.com/document_detail/426067.html) operation to query the zone ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
