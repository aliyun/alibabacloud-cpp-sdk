// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings.hpp>
#include <alibabacloud/models/GetDIJobResponseBodyPagingInfoJobSettings.hpp>
#include <alibabacloud/models/GetDIJobResponseBodyPagingInfoResourceSettings.hpp>
#include <alibabacloud/models/GetDIJobResponseBodyPagingInfoSourceDataSourceSettings.hpp>
#include <alibabacloud/models/GetDIJobResponseBodyPagingInfoTableMappings.hpp>
#include <alibabacloud/models/GetDIJobResponseBodyPagingInfoTransformationRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDIJobResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDIJobResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationDataSourceSettings, destinationDataSourceSettings_);
      DARABONBA_PTR_TO_JSON(DestinationDataSourceType, destinationDataSourceType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(JobSettings, jobSettings_);
      DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(MigrationType, migrationType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ResourceSettings, resourceSettings_);
      DARABONBA_PTR_TO_JSON(SourceDataSourceSettings, sourceDataSourceSettings_);
      DARABONBA_PTR_TO_JSON(SourceDataSourceType, sourceDataSourceType_);
      DARABONBA_PTR_TO_JSON(TableMappings, tableMappings_);
      DARABONBA_PTR_TO_JSON(TransformationRules, transformationRules_);
    };
    friend void from_json(const Darabonba::Json& j, GetDIJobResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationDataSourceSettings, destinationDataSourceSettings_);
      DARABONBA_PTR_FROM_JSON(DestinationDataSourceType, destinationDataSourceType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(JobSettings, jobSettings_);
      DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(MigrationType, migrationType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ResourceSettings, resourceSettings_);
      DARABONBA_PTR_FROM_JSON(SourceDataSourceSettings, sourceDataSourceSettings_);
      DARABONBA_PTR_FROM_JSON(SourceDataSourceType, sourceDataSourceType_);
      DARABONBA_PTR_FROM_JSON(TableMappings, tableMappings_);
      DARABONBA_PTR_FROM_JSON(TransformationRules, transformationRules_);
    };
    GetDIJobResponseBodyPagingInfo() = default ;
    GetDIJobResponseBodyPagingInfo(const GetDIJobResponseBodyPagingInfo &) = default ;
    GetDIJobResponseBodyPagingInfo(GetDIJobResponseBodyPagingInfo &&) = default ;
    GetDIJobResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDIJobResponseBodyPagingInfo() = default ;
    GetDIJobResponseBodyPagingInfo& operator=(const GetDIJobResponseBodyPagingInfo &) = default ;
    GetDIJobResponseBodyPagingInfo& operator=(GetDIJobResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DIJobId_ == nullptr
        && return this->description_ == nullptr && return this->destinationDataSourceSettings_ == nullptr && return this->destinationDataSourceType_ == nullptr && return this->id_ == nullptr && return this->jobName_ == nullptr
        && return this->jobSettings_ == nullptr && return this->jobStatus_ == nullptr && return this->jobType_ == nullptr && return this->migrationType_ == nullptr && return this->projectId_ == nullptr
        && return this->resourceSettings_ == nullptr && return this->sourceDataSourceSettings_ == nullptr && return this->sourceDataSourceType_ == nullptr && return this->tableMappings_ == nullptr && return this->transformationRules_ == nullptr; };
    // DIJobId Field Functions 
    bool hasDIJobId() const { return this->DIJobId_ != nullptr;};
    void deleteDIJobId() { this->DIJobId_ = nullptr;};
    inline string DIJobId() const { DARABONBA_PTR_GET_DEFAULT(DIJobId_, "") };
    inline GetDIJobResponseBodyPagingInfo& setDIJobId(string DIJobId) { DARABONBA_PTR_SET_VALUE(DIJobId_, DIJobId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetDIJobResponseBodyPagingInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationDataSourceSettings Field Functions 
    bool hasDestinationDataSourceSettings() const { return this->destinationDataSourceSettings_ != nullptr;};
    void deleteDestinationDataSourceSettings() { this->destinationDataSourceSettings_ = nullptr;};
    inline const vector<Models::GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings> & destinationDataSourceSettings() const { DARABONBA_PTR_GET_CONST(destinationDataSourceSettings_, vector<Models::GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings>) };
    inline vector<Models::GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings> destinationDataSourceSettings() { DARABONBA_PTR_GET(destinationDataSourceSettings_, vector<Models::GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings>) };
    inline GetDIJobResponseBodyPagingInfo& setDestinationDataSourceSettings(const vector<Models::GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings> & destinationDataSourceSettings) { DARABONBA_PTR_SET_VALUE(destinationDataSourceSettings_, destinationDataSourceSettings) };
    inline GetDIJobResponseBodyPagingInfo& setDestinationDataSourceSettings(vector<Models::GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings> && destinationDataSourceSettings) { DARABONBA_PTR_SET_RVALUE(destinationDataSourceSettings_, destinationDataSourceSettings) };


    // destinationDataSourceType Field Functions 
    bool hasDestinationDataSourceType() const { return this->destinationDataSourceType_ != nullptr;};
    void deleteDestinationDataSourceType() { this->destinationDataSourceType_ = nullptr;};
    inline string destinationDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(destinationDataSourceType_, "") };
    inline GetDIJobResponseBodyPagingInfo& setDestinationDataSourceType(string destinationDataSourceType) { DARABONBA_PTR_SET_VALUE(destinationDataSourceType_, destinationDataSourceType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetDIJobResponseBodyPagingInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline GetDIJobResponseBodyPagingInfo& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // jobSettings Field Functions 
    bool hasJobSettings() const { return this->jobSettings_ != nullptr;};
    void deleteJobSettings() { this->jobSettings_ = nullptr;};
    inline const Models::GetDIJobResponseBodyPagingInfoJobSettings & jobSettings() const { DARABONBA_PTR_GET_CONST(jobSettings_, Models::GetDIJobResponseBodyPagingInfoJobSettings) };
    inline Models::GetDIJobResponseBodyPagingInfoJobSettings jobSettings() { DARABONBA_PTR_GET(jobSettings_, Models::GetDIJobResponseBodyPagingInfoJobSettings) };
    inline GetDIJobResponseBodyPagingInfo& setJobSettings(const Models::GetDIJobResponseBodyPagingInfoJobSettings & jobSettings) { DARABONBA_PTR_SET_VALUE(jobSettings_, jobSettings) };
    inline GetDIJobResponseBodyPagingInfo& setJobSettings(Models::GetDIJobResponseBodyPagingInfoJobSettings && jobSettings) { DARABONBA_PTR_SET_RVALUE(jobSettings_, jobSettings) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline string jobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
    inline GetDIJobResponseBodyPagingInfo& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline GetDIJobResponseBodyPagingInfo& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // migrationType Field Functions 
    bool hasMigrationType() const { return this->migrationType_ != nullptr;};
    void deleteMigrationType() { this->migrationType_ = nullptr;};
    inline string migrationType() const { DARABONBA_PTR_GET_DEFAULT(migrationType_, "") };
    inline GetDIJobResponseBodyPagingInfo& setMigrationType(string migrationType) { DARABONBA_PTR_SET_VALUE(migrationType_, migrationType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetDIJobResponseBodyPagingInfo& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // resourceSettings Field Functions 
    bool hasResourceSettings() const { return this->resourceSettings_ != nullptr;};
    void deleteResourceSettings() { this->resourceSettings_ = nullptr;};
    inline const Models::GetDIJobResponseBodyPagingInfoResourceSettings & resourceSettings() const { DARABONBA_PTR_GET_CONST(resourceSettings_, Models::GetDIJobResponseBodyPagingInfoResourceSettings) };
    inline Models::GetDIJobResponseBodyPagingInfoResourceSettings resourceSettings() { DARABONBA_PTR_GET(resourceSettings_, Models::GetDIJobResponseBodyPagingInfoResourceSettings) };
    inline GetDIJobResponseBodyPagingInfo& setResourceSettings(const Models::GetDIJobResponseBodyPagingInfoResourceSettings & resourceSettings) { DARABONBA_PTR_SET_VALUE(resourceSettings_, resourceSettings) };
    inline GetDIJobResponseBodyPagingInfo& setResourceSettings(Models::GetDIJobResponseBodyPagingInfoResourceSettings && resourceSettings) { DARABONBA_PTR_SET_RVALUE(resourceSettings_, resourceSettings) };


    // sourceDataSourceSettings Field Functions 
    bool hasSourceDataSourceSettings() const { return this->sourceDataSourceSettings_ != nullptr;};
    void deleteSourceDataSourceSettings() { this->sourceDataSourceSettings_ = nullptr;};
    inline const vector<Models::GetDIJobResponseBodyPagingInfoSourceDataSourceSettings> & sourceDataSourceSettings() const { DARABONBA_PTR_GET_CONST(sourceDataSourceSettings_, vector<Models::GetDIJobResponseBodyPagingInfoSourceDataSourceSettings>) };
    inline vector<Models::GetDIJobResponseBodyPagingInfoSourceDataSourceSettings> sourceDataSourceSettings() { DARABONBA_PTR_GET(sourceDataSourceSettings_, vector<Models::GetDIJobResponseBodyPagingInfoSourceDataSourceSettings>) };
    inline GetDIJobResponseBodyPagingInfo& setSourceDataSourceSettings(const vector<Models::GetDIJobResponseBodyPagingInfoSourceDataSourceSettings> & sourceDataSourceSettings) { DARABONBA_PTR_SET_VALUE(sourceDataSourceSettings_, sourceDataSourceSettings) };
    inline GetDIJobResponseBodyPagingInfo& setSourceDataSourceSettings(vector<Models::GetDIJobResponseBodyPagingInfoSourceDataSourceSettings> && sourceDataSourceSettings) { DARABONBA_PTR_SET_RVALUE(sourceDataSourceSettings_, sourceDataSourceSettings) };


    // sourceDataSourceType Field Functions 
    bool hasSourceDataSourceType() const { return this->sourceDataSourceType_ != nullptr;};
    void deleteSourceDataSourceType() { this->sourceDataSourceType_ = nullptr;};
    inline string sourceDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceDataSourceType_, "") };
    inline GetDIJobResponseBodyPagingInfo& setSourceDataSourceType(string sourceDataSourceType) { DARABONBA_PTR_SET_VALUE(sourceDataSourceType_, sourceDataSourceType) };


    // tableMappings Field Functions 
    bool hasTableMappings() const { return this->tableMappings_ != nullptr;};
    void deleteTableMappings() { this->tableMappings_ = nullptr;};
    inline const vector<Models::GetDIJobResponseBodyPagingInfoTableMappings> & tableMappings() const { DARABONBA_PTR_GET_CONST(tableMappings_, vector<Models::GetDIJobResponseBodyPagingInfoTableMappings>) };
    inline vector<Models::GetDIJobResponseBodyPagingInfoTableMappings> tableMappings() { DARABONBA_PTR_GET(tableMappings_, vector<Models::GetDIJobResponseBodyPagingInfoTableMappings>) };
    inline GetDIJobResponseBodyPagingInfo& setTableMappings(const vector<Models::GetDIJobResponseBodyPagingInfoTableMappings> & tableMappings) { DARABONBA_PTR_SET_VALUE(tableMappings_, tableMappings) };
    inline GetDIJobResponseBodyPagingInfo& setTableMappings(vector<Models::GetDIJobResponseBodyPagingInfoTableMappings> && tableMappings) { DARABONBA_PTR_SET_RVALUE(tableMappings_, tableMappings) };


    // transformationRules Field Functions 
    bool hasTransformationRules() const { return this->transformationRules_ != nullptr;};
    void deleteTransformationRules() { this->transformationRules_ = nullptr;};
    inline const vector<Models::GetDIJobResponseBodyPagingInfoTransformationRules> & transformationRules() const { DARABONBA_PTR_GET_CONST(transformationRules_, vector<Models::GetDIJobResponseBodyPagingInfoTransformationRules>) };
    inline vector<Models::GetDIJobResponseBodyPagingInfoTransformationRules> transformationRules() { DARABONBA_PTR_GET(transformationRules_, vector<Models::GetDIJobResponseBodyPagingInfoTransformationRules>) };
    inline GetDIJobResponseBodyPagingInfo& setTransformationRules(const vector<Models::GetDIJobResponseBodyPagingInfoTransformationRules> & transformationRules) { DARABONBA_PTR_SET_VALUE(transformationRules_, transformationRules) };
    inline GetDIJobResponseBodyPagingInfo& setTransformationRules(vector<Models::GetDIJobResponseBodyPagingInfoTransformationRules> && transformationRules) { DARABONBA_PTR_SET_RVALUE(transformationRules_, transformationRules) };


  protected:
    // This parameter is deprecated. Use the Id parameter instead.
    std::shared_ptr<string> DIJobId_ = nullptr;
    // The description of the synchronization task.
    std::shared_ptr<string> description_ = nullptr;
    // The properties of the destination.
    std::shared_ptr<vector<Models::GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings>> destinationDataSourceSettings_ = nullptr;
    // The destination type. Valid values: Hologres, OSS-HDFS, OSS, MaxCompute, LogHub, StarRocks, DataHub, AnalyticDB_For_MySQL, Kafka, Hive.
    std::shared_ptr<string> destinationDataSourceType_ = nullptr;
    // The ID of the synchronization task.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the synchronization task.
    std::shared_ptr<string> jobName_ = nullptr;
    // The runtime settings.
    std::shared_ptr<Models::GetDIJobResponseBodyPagingInfoJobSettings> jobSettings_ = nullptr;
    // The status of the job.
    std::shared_ptr<string> jobStatus_ = nullptr;
    // 任务类型
    // 
    // - DatabaseRealtimeMigration(整库实时):将源端多个库的多个表进行流同步，支持仅全量，仅增量，或全量+增量。
    // 
    // - DatabaseOfflineMigration(整库离线):将源端多个库的多个表进行批同步，支持仅全量，仅增量，或全量+增量。
    // 
    // - SingleTableRealtimeMigration(单表实时):将源端单个表进行流同步。
    std::shared_ptr<string> jobType_ = nullptr;
    // The synchronization type. Valid values:
    // 
    // *   FullAndRealtimeIncremental: full synchronization and real-time incremental synchronization of data in an entire database
    // *   RealtimeIncremental: real-time incremental synchronization of data in a single table
    // *   Full: full batch synchronization of data in an entire database
    // *   OfflineIncremental: batch incremental synchronization of data in an entire database
    // *   FullAndOfflineIncremental: full synchronization and batch incremental synchronization of data in an entire database
    std::shared_ptr<string> migrationType_ = nullptr;
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to query the ID.
    // 
    // This parameter indicates the DataWorks workspace to which the API operation is applied.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The resource settings.
    std::shared_ptr<Models::GetDIJobResponseBodyPagingInfoResourceSettings> resourceSettings_ = nullptr;
    // The settings of the source. Only a single source is supported.
    std::shared_ptr<vector<Models::GetDIJobResponseBodyPagingInfoSourceDataSourceSettings>> sourceDataSourceSettings_ = nullptr;
    // The source type. Valid values: PolarDB, MySQL, Kafka, LogHub, Hologres, Oracle, OceanBase, MongoDB, RedShift, Hive, SQLServer, Doris, ClickHouse.
    std::shared_ptr<string> sourceDataSourceType_ = nullptr;
    // The list of mappings between rules used to select synchronization objects in the source and transformation rules applied to the selected synchronization objects. Each entry in the list displays a mapping between a rule used to select synchronization objects and a transformation rule applied to the selected synchronization objects.
    // 
    // >  [ { "SourceObjectSelectionRules":[ { "ObjectType":"Database", "Action":"Include", "ExpressionType":"Exact", "Expression":"biz_db" }, { "ObjectType":"Schema", "Action":"Include", "ExpressionType":"Exact", "Expression":"s1" }, { "ObjectType":"Table", "Action":"Include", "ExpressionType":"Exact", "Expression":"table1" } ], "TransformationRuleNames":[ { "RuleName":"my_database_rename_rule", "RuleActionType":"Rename", "RuleTargetType":"Schema" } ] } ]
    std::shared_ptr<vector<Models::GetDIJobResponseBodyPagingInfoTableMappings>> tableMappings_ = nullptr;
    // The list of transformation rules that are applied to the synchronization objects selected from the source.
    // 
    // >  [ { "RuleName":"my_database_rename_rule", "RuleActionType":"Rename", "RuleTargetType":"Schema", "RuleExpression":"{"expression":"${srcDatasoureName}_${srcDatabaseName}"}" } ]
    std::shared_ptr<vector<Models::GetDIJobResponseBodyPagingInfoTransformationRules>> transformationRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
