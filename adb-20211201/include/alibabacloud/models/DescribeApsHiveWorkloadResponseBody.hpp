// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSHIVEWORKLOADRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSHIVEWORKLOADRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsHiveWorkloadResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsHiveWorkloadResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApsWorkload, apsWorkload_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsHiveWorkloadResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApsWorkload, apsWorkload_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApsHiveWorkloadResponseBody() = default ;
    DescribeApsHiveWorkloadResponseBody(const DescribeApsHiveWorkloadResponseBody &) = default ;
    DescribeApsHiveWorkloadResponseBody(DescribeApsHiveWorkloadResponseBody &&) = default ;
    DescribeApsHiveWorkloadResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsHiveWorkloadResponseBody() = default ;
    DescribeApsHiveWorkloadResponseBody& operator=(const DescribeApsHiveWorkloadResponseBody &) = default ;
    DescribeApsHiveWorkloadResponseBody& operator=(DescribeApsHiveWorkloadResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApsWorkload : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApsWorkload& obj) { 
        DARABONBA_PTR_TO_JSON(AdvancedConfig, advancedConfig_);
        DARABONBA_PTR_TO_JSON(ConflictStrategy, conflictStrategy_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
        DARABONBA_PTR_TO_JSON(DatasourceName, datasourceName_);
        DARABONBA_PTR_TO_JSON(EmrClusterId, emrClusterId_);
        DARABONBA_PTR_TO_JSON(FullComputeUnit, fullComputeUnit_);
        DARABONBA_PTR_TO_JSON(MetaStoreUri, metaStoreUri_);
        DARABONBA_PTR_TO_JSON(OssLocation, ossLocation_);
        DARABONBA_PTR_TO_JSON(Parallelism, parallelism_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(SyncAllowExpression, syncAllowExpression_);
        DARABONBA_PTR_TO_JSON(SyncDenyExpression, syncDenyExpression_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        DARABONBA_PTR_TO_JSON(Vswitch, vswitch_);
        DARABONBA_PTR_TO_JSON(WorkloadId, workloadId_);
        DARABONBA_PTR_TO_JSON(WorkloadName, workloadName_);
        DARABONBA_PTR_TO_JSON(WorkloadTypeName, workloadTypeName_);
      };
      friend void from_json(const Darabonba::Json& j, ApsWorkload& obj) { 
        DARABONBA_PTR_FROM_JSON(AdvancedConfig, advancedConfig_);
        DARABONBA_PTR_FROM_JSON(ConflictStrategy, conflictStrategy_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
        DARABONBA_PTR_FROM_JSON(DatasourceName, datasourceName_);
        DARABONBA_PTR_FROM_JSON(EmrClusterId, emrClusterId_);
        DARABONBA_PTR_FROM_JSON(FullComputeUnit, fullComputeUnit_);
        DARABONBA_PTR_FROM_JSON(MetaStoreUri, metaStoreUri_);
        DARABONBA_PTR_FROM_JSON(OssLocation, ossLocation_);
        DARABONBA_PTR_FROM_JSON(Parallelism, parallelism_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(SyncAllowExpression, syncAllowExpression_);
        DARABONBA_PTR_FROM_JSON(SyncDenyExpression, syncDenyExpression_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        DARABONBA_PTR_FROM_JSON(Vswitch, vswitch_);
        DARABONBA_PTR_FROM_JSON(WorkloadId, workloadId_);
        DARABONBA_PTR_FROM_JSON(WorkloadName, workloadName_);
        DARABONBA_PTR_FROM_JSON(WorkloadTypeName, workloadTypeName_);
      };
      ApsWorkload() = default ;
      ApsWorkload(const ApsWorkload &) = default ;
      ApsWorkload(ApsWorkload &&) = default ;
      ApsWorkload(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApsWorkload() = default ;
      ApsWorkload& operator=(const ApsWorkload &) = default ;
      ApsWorkload& operator=(ApsWorkload &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->advancedConfig_ == nullptr
        && this->conflictStrategy_ == nullptr && this->createTime_ == nullptr && this->DBClusterId_ == nullptr && this->datasourceId_ == nullptr && this->datasourceName_ == nullptr
        && this->emrClusterId_ == nullptr && this->fullComputeUnit_ == nullptr && this->metaStoreUri_ == nullptr && this->ossLocation_ == nullptr && this->parallelism_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroup_ == nullptr && this->state_ == nullptr && this->syncAllowExpression_ == nullptr && this->syncDenyExpression_ == nullptr
        && this->targetType_ == nullptr && this->vswitch_ == nullptr && this->workloadId_ == nullptr && this->workloadName_ == nullptr && this->workloadTypeName_ == nullptr; };
      // advancedConfig Field Functions 
      bool hasAdvancedConfig() const { return this->advancedConfig_ != nullptr;};
      void deleteAdvancedConfig() { this->advancedConfig_ = nullptr;};
      inline string getAdvancedConfig() const { DARABONBA_PTR_GET_DEFAULT(advancedConfig_, "") };
      inline ApsWorkload& setAdvancedConfig(string advancedConfig) { DARABONBA_PTR_SET_VALUE(advancedConfig_, advancedConfig) };


      // conflictStrategy Field Functions 
      bool hasConflictStrategy() const { return this->conflictStrategy_ != nullptr;};
      void deleteConflictStrategy() { this->conflictStrategy_ = nullptr;};
      inline string getConflictStrategy() const { DARABONBA_PTR_GET_DEFAULT(conflictStrategy_, "") };
      inline ApsWorkload& setConflictStrategy(string conflictStrategy) { DARABONBA_PTR_SET_VALUE(conflictStrategy_, conflictStrategy) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ApsWorkload& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // DBClusterId Field Functions 
      bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
      void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
      inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
      inline ApsWorkload& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


      // datasourceId Field Functions 
      bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
      void deleteDatasourceId() { this->datasourceId_ = nullptr;};
      inline int64_t getDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, 0L) };
      inline ApsWorkload& setDatasourceId(int64_t datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


      // datasourceName Field Functions 
      bool hasDatasourceName() const { return this->datasourceName_ != nullptr;};
      void deleteDatasourceName() { this->datasourceName_ = nullptr;};
      inline string getDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(datasourceName_, "") };
      inline ApsWorkload& setDatasourceName(string datasourceName) { DARABONBA_PTR_SET_VALUE(datasourceName_, datasourceName) };


      // emrClusterId Field Functions 
      bool hasEmrClusterId() const { return this->emrClusterId_ != nullptr;};
      void deleteEmrClusterId() { this->emrClusterId_ = nullptr;};
      inline string getEmrClusterId() const { DARABONBA_PTR_GET_DEFAULT(emrClusterId_, "") };
      inline ApsWorkload& setEmrClusterId(string emrClusterId) { DARABONBA_PTR_SET_VALUE(emrClusterId_, emrClusterId) };


      // fullComputeUnit Field Functions 
      bool hasFullComputeUnit() const { return this->fullComputeUnit_ != nullptr;};
      void deleteFullComputeUnit() { this->fullComputeUnit_ = nullptr;};
      inline string getFullComputeUnit() const { DARABONBA_PTR_GET_DEFAULT(fullComputeUnit_, "") };
      inline ApsWorkload& setFullComputeUnit(string fullComputeUnit) { DARABONBA_PTR_SET_VALUE(fullComputeUnit_, fullComputeUnit) };


      // metaStoreUri Field Functions 
      bool hasMetaStoreUri() const { return this->metaStoreUri_ != nullptr;};
      void deleteMetaStoreUri() { this->metaStoreUri_ = nullptr;};
      inline string getMetaStoreUri() const { DARABONBA_PTR_GET_DEFAULT(metaStoreUri_, "") };
      inline ApsWorkload& setMetaStoreUri(string metaStoreUri) { DARABONBA_PTR_SET_VALUE(metaStoreUri_, metaStoreUri) };


      // ossLocation Field Functions 
      bool hasOssLocation() const { return this->ossLocation_ != nullptr;};
      void deleteOssLocation() { this->ossLocation_ = nullptr;};
      inline string getOssLocation() const { DARABONBA_PTR_GET_DEFAULT(ossLocation_, "") };
      inline ApsWorkload& setOssLocation(string ossLocation) { DARABONBA_PTR_SET_VALUE(ossLocation_, ossLocation) };


      // parallelism Field Functions 
      bool hasParallelism() const { return this->parallelism_ != nullptr;};
      void deleteParallelism() { this->parallelism_ = nullptr;};
      inline int64_t getParallelism() const { DARABONBA_PTR_GET_DEFAULT(parallelism_, 0L) };
      inline ApsWorkload& setParallelism(int64_t parallelism) { DARABONBA_PTR_SET_VALUE(parallelism_, parallelism) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ApsWorkload& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroup Field Functions 
      bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
      void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
      inline string getResourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
      inline ApsWorkload& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline ApsWorkload& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // syncAllowExpression Field Functions 
      bool hasSyncAllowExpression() const { return this->syncAllowExpression_ != nullptr;};
      void deleteSyncAllowExpression() { this->syncAllowExpression_ = nullptr;};
      inline string getSyncAllowExpression() const { DARABONBA_PTR_GET_DEFAULT(syncAllowExpression_, "") };
      inline ApsWorkload& setSyncAllowExpression(string syncAllowExpression) { DARABONBA_PTR_SET_VALUE(syncAllowExpression_, syncAllowExpression) };


      // syncDenyExpression Field Functions 
      bool hasSyncDenyExpression() const { return this->syncDenyExpression_ != nullptr;};
      void deleteSyncDenyExpression() { this->syncDenyExpression_ = nullptr;};
      inline string getSyncDenyExpression() const { DARABONBA_PTR_GET_DEFAULT(syncDenyExpression_, "") };
      inline ApsWorkload& setSyncDenyExpression(string syncDenyExpression) { DARABONBA_PTR_SET_VALUE(syncDenyExpression_, syncDenyExpression) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline ApsWorkload& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      // vswitch Field Functions 
      bool hasVswitch() const { return this->vswitch_ != nullptr;};
      void deleteVswitch() { this->vswitch_ = nullptr;};
      inline string getVswitch() const { DARABONBA_PTR_GET_DEFAULT(vswitch_, "") };
      inline ApsWorkload& setVswitch(string vswitch) { DARABONBA_PTR_SET_VALUE(vswitch_, vswitch) };


      // workloadId Field Functions 
      bool hasWorkloadId() const { return this->workloadId_ != nullptr;};
      void deleteWorkloadId() { this->workloadId_ = nullptr;};
      inline string getWorkloadId() const { DARABONBA_PTR_GET_DEFAULT(workloadId_, "") };
      inline ApsWorkload& setWorkloadId(string workloadId) { DARABONBA_PTR_SET_VALUE(workloadId_, workloadId) };


      // workloadName Field Functions 
      bool hasWorkloadName() const { return this->workloadName_ != nullptr;};
      void deleteWorkloadName() { this->workloadName_ = nullptr;};
      inline string getWorkloadName() const { DARABONBA_PTR_GET_DEFAULT(workloadName_, "") };
      inline ApsWorkload& setWorkloadName(string workloadName) { DARABONBA_PTR_SET_VALUE(workloadName_, workloadName) };


      // workloadTypeName Field Functions 
      bool hasWorkloadTypeName() const { return this->workloadTypeName_ != nullptr;};
      void deleteWorkloadTypeName() { this->workloadTypeName_ = nullptr;};
      inline string getWorkloadTypeName() const { DARABONBA_PTR_GET_DEFAULT(workloadTypeName_, "") };
      inline ApsWorkload& setWorkloadTypeName(string workloadTypeName) { DARABONBA_PTR_SET_VALUE(workloadTypeName_, workloadTypeName) };


    protected:
      // The advanced configurations.
      shared_ptr<string> advancedConfig_ {};
      // The policy to handle tables with the same name in the destination cluster.
      shared_ptr<string> conflictStrategy_ {};
      // The time when the workload was created.
      shared_ptr<string> createTime_ {};
      // The cluster ID.
      shared_ptr<string> DBClusterId_ {};
      // The data source ID.
      shared_ptr<int64_t> datasourceId_ {};
      // The name of the data source.
      shared_ptr<string> datasourceName_ {};
      // The ID of the E-MapReduce (EMR) cluster.
      shared_ptr<string> emrClusterId_ {};
      // The number of AnalyticDB compute units (ACUs) required for migration.
      shared_ptr<string> fullComputeUnit_ {};
      // The URL of the Hive Metastore.
      shared_ptr<string> metaStoreUri_ {};
      // The Object Storage Service (OSS) URL of the AnalyticDB for MySQL cluster data.
      shared_ptr<string> ossLocation_ {};
      // The number of tasks that are allowed in parallel.
      shared_ptr<int64_t> parallelism_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The resource group to which the SQL statement belongs.
      shared_ptr<string> resourceGroup_ {};
      // The status of the workload.
      shared_ptr<string> state_ {};
      // The expression that manually matches the source database table whitelist.
      shared_ptr<string> syncAllowExpression_ {};
      // Manually match the blacklist expressions for source database tables.
      shared_ptr<string> syncDenyExpression_ {};
      // The destination type.
      shared_ptr<string> targetType_ {};
      // The name of the vSwitch.
      shared_ptr<string> vswitch_ {};
      // The job ID.
      shared_ptr<string> workloadId_ {};
      // The name of the workload.
      shared_ptr<string> workloadName_ {};
      // The name of the workload.
      shared_ptr<string> workloadTypeName_ {};
    };

    virtual bool empty() const override { return this->apsWorkload_ == nullptr
        && this->requestId_ == nullptr; };
    // apsWorkload Field Functions 
    bool hasApsWorkload() const { return this->apsWorkload_ != nullptr;};
    void deleteApsWorkload() { this->apsWorkload_ = nullptr;};
    inline const DescribeApsHiveWorkloadResponseBody::ApsWorkload & getApsWorkload() const { DARABONBA_PTR_GET_CONST(apsWorkload_, DescribeApsHiveWorkloadResponseBody::ApsWorkload) };
    inline DescribeApsHiveWorkloadResponseBody::ApsWorkload getApsWorkload() { DARABONBA_PTR_GET(apsWorkload_, DescribeApsHiveWorkloadResponseBody::ApsWorkload) };
    inline DescribeApsHiveWorkloadResponseBody& setApsWorkload(const DescribeApsHiveWorkloadResponseBody::ApsWorkload & apsWorkload) { DARABONBA_PTR_SET_VALUE(apsWorkload_, apsWorkload) };
    inline DescribeApsHiveWorkloadResponseBody& setApsWorkload(DescribeApsHiveWorkloadResponseBody::ApsWorkload && apsWorkload) { DARABONBA_PTR_SET_RVALUE(apsWorkload_, apsWorkload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApsHiveWorkloadResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried job.
    shared_ptr<DescribeApsHiveWorkloadResponseBody::ApsWorkload> apsWorkload_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
