// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPSHIVEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPSHIVEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateApsHiveJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApsHiveJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedConfig, advancedConfig_);
      DARABONBA_PTR_TO_JSON(ConflictStrategy, conflictStrategy_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_TO_JSON(FullComputeUnit, fullComputeUnit_);
      DARABONBA_PTR_TO_JSON(OssLocation, ossLocation_);
      DARABONBA_PTR_TO_JSON(Parallelism, parallelism_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_TO_JSON(SyncAllowExpression, syncAllowExpression_);
      DARABONBA_PTR_TO_JSON(SyncDenyExpression, syncDenyExpression_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(WorkloadName, workloadName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApsHiveJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedConfig, advancedConfig_);
      DARABONBA_PTR_FROM_JSON(ConflictStrategy, conflictStrategy_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_FROM_JSON(FullComputeUnit, fullComputeUnit_);
      DARABONBA_PTR_FROM_JSON(OssLocation, ossLocation_);
      DARABONBA_PTR_FROM_JSON(Parallelism, parallelism_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_FROM_JSON(SyncAllowExpression, syncAllowExpression_);
      DARABONBA_PTR_FROM_JSON(SyncDenyExpression, syncDenyExpression_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(WorkloadName, workloadName_);
    };
    CreateApsHiveJobRequest() = default ;
    CreateApsHiveJobRequest(const CreateApsHiveJobRequest &) = default ;
    CreateApsHiveJobRequest(CreateApsHiveJobRequest &&) = default ;
    CreateApsHiveJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApsHiveJobRequest() = default ;
    CreateApsHiveJobRequest& operator=(const CreateApsHiveJobRequest &) = default ;
    CreateApsHiveJobRequest& operator=(CreateApsHiveJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advancedConfig_ == nullptr
        && return this->conflictStrategy_ == nullptr && return this->DBClusterId_ == nullptr && return this->datasourceId_ == nullptr && return this->fullComputeUnit_ == nullptr && return this->ossLocation_ == nullptr
        && return this->parallelism_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroup_ == nullptr && return this->syncAllowExpression_ == nullptr && return this->syncDenyExpression_ == nullptr
        && return this->targetType_ == nullptr && return this->workloadName_ == nullptr; };
    // advancedConfig Field Functions 
    bool hasAdvancedConfig() const { return this->advancedConfig_ != nullptr;};
    void deleteAdvancedConfig() { this->advancedConfig_ = nullptr;};
    inline string advancedConfig() const { DARABONBA_PTR_GET_DEFAULT(advancedConfig_, "") };
    inline CreateApsHiveJobRequest& setAdvancedConfig(string advancedConfig) { DARABONBA_PTR_SET_VALUE(advancedConfig_, advancedConfig) };


    // conflictStrategy Field Functions 
    bool hasConflictStrategy() const { return this->conflictStrategy_ != nullptr;};
    void deleteConflictStrategy() { this->conflictStrategy_ = nullptr;};
    inline string conflictStrategy() const { DARABONBA_PTR_GET_DEFAULT(conflictStrategy_, "") };
    inline CreateApsHiveJobRequest& setConflictStrategy(string conflictStrategy) { DARABONBA_PTR_SET_VALUE(conflictStrategy_, conflictStrategy) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateApsHiveJobRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // datasourceId Field Functions 
    bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
    void deleteDatasourceId() { this->datasourceId_ = nullptr;};
    inline int64_t datasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, 0L) };
    inline CreateApsHiveJobRequest& setDatasourceId(int64_t datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


    // fullComputeUnit Field Functions 
    bool hasFullComputeUnit() const { return this->fullComputeUnit_ != nullptr;};
    void deleteFullComputeUnit() { this->fullComputeUnit_ = nullptr;};
    inline string fullComputeUnit() const { DARABONBA_PTR_GET_DEFAULT(fullComputeUnit_, "") };
    inline CreateApsHiveJobRequest& setFullComputeUnit(string fullComputeUnit) { DARABONBA_PTR_SET_VALUE(fullComputeUnit_, fullComputeUnit) };


    // ossLocation Field Functions 
    bool hasOssLocation() const { return this->ossLocation_ != nullptr;};
    void deleteOssLocation() { this->ossLocation_ = nullptr;};
    inline string ossLocation() const { DARABONBA_PTR_GET_DEFAULT(ossLocation_, "") };
    inline CreateApsHiveJobRequest& setOssLocation(string ossLocation) { DARABONBA_PTR_SET_VALUE(ossLocation_, ossLocation) };


    // parallelism Field Functions 
    bool hasParallelism() const { return this->parallelism_ != nullptr;};
    void deleteParallelism() { this->parallelism_ = nullptr;};
    inline int32_t parallelism() const { DARABONBA_PTR_GET_DEFAULT(parallelism_, 0) };
    inline CreateApsHiveJobRequest& setParallelism(int32_t parallelism) { DARABONBA_PTR_SET_VALUE(parallelism_, parallelism) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateApsHiveJobRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline string resourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
    inline CreateApsHiveJobRequest& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


    // syncAllowExpression Field Functions 
    bool hasSyncAllowExpression() const { return this->syncAllowExpression_ != nullptr;};
    void deleteSyncAllowExpression() { this->syncAllowExpression_ = nullptr;};
    inline string syncAllowExpression() const { DARABONBA_PTR_GET_DEFAULT(syncAllowExpression_, "") };
    inline CreateApsHiveJobRequest& setSyncAllowExpression(string syncAllowExpression) { DARABONBA_PTR_SET_VALUE(syncAllowExpression_, syncAllowExpression) };


    // syncDenyExpression Field Functions 
    bool hasSyncDenyExpression() const { return this->syncDenyExpression_ != nullptr;};
    void deleteSyncDenyExpression() { this->syncDenyExpression_ = nullptr;};
    inline string syncDenyExpression() const { DARABONBA_PTR_GET_DEFAULT(syncDenyExpression_, "") };
    inline CreateApsHiveJobRequest& setSyncDenyExpression(string syncDenyExpression) { DARABONBA_PTR_SET_VALUE(syncDenyExpression_, syncDenyExpression) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline CreateApsHiveJobRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // workloadName Field Functions 
    bool hasWorkloadName() const { return this->workloadName_ != nullptr;};
    void deleteWorkloadName() { this->workloadName_ = nullptr;};
    inline string workloadName() const { DARABONBA_PTR_GET_DEFAULT(workloadName_, "") };
    inline CreateApsHiveJobRequest& setWorkloadName(string workloadName) { DARABONBA_PTR_SET_VALUE(workloadName_, workloadName) };


  protected:
    // The advanced configurations.
    std::shared_ptr<string> advancedConfig_ = nullptr;
    // The policy to handle tables with the same name in the destination cluster.
    std::shared_ptr<string> conflictStrategy_ = nullptr;
    // The ID of the AnalyticDB for MySQL cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The data source ID.
    std::shared_ptr<int64_t> datasourceId_ = nullptr;
    // The number of AnalyticDB compute units (ACUs) required for data migration.
    // 
    // This parameter is required.
    std::shared_ptr<string> fullComputeUnit_ = nullptr;
    // The path of the destination data lakehouse in an Object Storage Service (OSS) bucket.
    // 
    // This parameter is required.
    std::shared_ptr<string> ossLocation_ = nullptr;
    // The number of tasks that are allowed in parallel.
    std::shared_ptr<int32_t> parallelism_ = nullptr;
    // The region ID.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/143074.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the resource group.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceGroup_ = nullptr;
    // The expression that allows objects to be synchronized.
    std::shared_ptr<string> syncAllowExpression_ = nullptr;
    // The expression that denies objects to be synchronized.
    std::shared_ptr<string> syncDenyExpression_ = nullptr;
    // The destination type.
    std::shared_ptr<string> targetType_ = nullptr;
    // The name of the workload.
    // 
    // This parameter is required.
    std::shared_ptr<string> workloadName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
