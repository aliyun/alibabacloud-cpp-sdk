// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDIJobRequestDestinationDataSourceSettings.hpp>
#include <alibabacloud/models/CreateDIJobRequestJobSettings.hpp>
#include <alibabacloud/models/CreateDIJobRequestResourceSettings.hpp>
#include <alibabacloud/models/CreateDIJobRequestSourceDataSourceSettings.hpp>
#include <alibabacloud/models/CreateDIJobRequestTableMappings.hpp>
#include <alibabacloud/models/CreateDIJobRequestTransformationRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDIJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDIJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationDataSourceSettings, destinationDataSourceSettings_);
      DARABONBA_PTR_TO_JSON(DestinationDataSourceType, destinationDataSourceType_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(JobSettings, jobSettings_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(MigrationType, migrationType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ResourceSettings, resourceSettings_);
      DARABONBA_PTR_TO_JSON(SourceDataSourceSettings, sourceDataSourceSettings_);
      DARABONBA_PTR_TO_JSON(SourceDataSourceType, sourceDataSourceType_);
      DARABONBA_PTR_TO_JSON(TableMappings, tableMappings_);
      DARABONBA_PTR_TO_JSON(TransformationRules, transformationRules_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDIJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationDataSourceSettings, destinationDataSourceSettings_);
      DARABONBA_PTR_FROM_JSON(DestinationDataSourceType, destinationDataSourceType_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(JobSettings, jobSettings_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(MigrationType, migrationType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ResourceSettings, resourceSettings_);
      DARABONBA_PTR_FROM_JSON(SourceDataSourceSettings, sourceDataSourceSettings_);
      DARABONBA_PTR_FROM_JSON(SourceDataSourceType, sourceDataSourceType_);
      DARABONBA_PTR_FROM_JSON(TableMappings, tableMappings_);
      DARABONBA_PTR_FROM_JSON(TransformationRules, transformationRules_);
    };
    CreateDIJobRequest() = default ;
    CreateDIJobRequest(const CreateDIJobRequest &) = default ;
    CreateDIJobRequest(CreateDIJobRequest &&) = default ;
    CreateDIJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDIJobRequest() = default ;
    CreateDIJobRequest& operator=(const CreateDIJobRequest &) = default ;
    CreateDIJobRequest& operator=(CreateDIJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->destinationDataSourceSettings_ != nullptr && this->destinationDataSourceType_ != nullptr && this->jobName_ != nullptr && this->jobSettings_ != nullptr && this->jobType_ != nullptr
        && this->migrationType_ != nullptr && this->name_ != nullptr && this->projectId_ != nullptr && this->resourceSettings_ != nullptr && this->sourceDataSourceSettings_ != nullptr
        && this->sourceDataSourceType_ != nullptr && this->tableMappings_ != nullptr && this->transformationRules_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDIJobRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationDataSourceSettings Field Functions 
    bool hasDestinationDataSourceSettings() const { return this->destinationDataSourceSettings_ != nullptr;};
    void deleteDestinationDataSourceSettings() { this->destinationDataSourceSettings_ = nullptr;};
    inline const vector<CreateDIJobRequestDestinationDataSourceSettings> & destinationDataSourceSettings() const { DARABONBA_PTR_GET_CONST(destinationDataSourceSettings_, vector<CreateDIJobRequestDestinationDataSourceSettings>) };
    inline vector<CreateDIJobRequestDestinationDataSourceSettings> destinationDataSourceSettings() { DARABONBA_PTR_GET(destinationDataSourceSettings_, vector<CreateDIJobRequestDestinationDataSourceSettings>) };
    inline CreateDIJobRequest& setDestinationDataSourceSettings(const vector<CreateDIJobRequestDestinationDataSourceSettings> & destinationDataSourceSettings) { DARABONBA_PTR_SET_VALUE(destinationDataSourceSettings_, destinationDataSourceSettings) };
    inline CreateDIJobRequest& setDestinationDataSourceSettings(vector<CreateDIJobRequestDestinationDataSourceSettings> && destinationDataSourceSettings) { DARABONBA_PTR_SET_RVALUE(destinationDataSourceSettings_, destinationDataSourceSettings) };


    // destinationDataSourceType Field Functions 
    bool hasDestinationDataSourceType() const { return this->destinationDataSourceType_ != nullptr;};
    void deleteDestinationDataSourceType() { this->destinationDataSourceType_ = nullptr;};
    inline string destinationDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(destinationDataSourceType_, "") };
    inline CreateDIJobRequest& setDestinationDataSourceType(string destinationDataSourceType) { DARABONBA_PTR_SET_VALUE(destinationDataSourceType_, destinationDataSourceType) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline CreateDIJobRequest& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // jobSettings Field Functions 
    bool hasJobSettings() const { return this->jobSettings_ != nullptr;};
    void deleteJobSettings() { this->jobSettings_ = nullptr;};
    inline const CreateDIJobRequestJobSettings & jobSettings() const { DARABONBA_PTR_GET_CONST(jobSettings_, CreateDIJobRequestJobSettings) };
    inline CreateDIJobRequestJobSettings jobSettings() { DARABONBA_PTR_GET(jobSettings_, CreateDIJobRequestJobSettings) };
    inline CreateDIJobRequest& setJobSettings(const CreateDIJobRequestJobSettings & jobSettings) { DARABONBA_PTR_SET_VALUE(jobSettings_, jobSettings) };
    inline CreateDIJobRequest& setJobSettings(CreateDIJobRequestJobSettings && jobSettings) { DARABONBA_PTR_SET_RVALUE(jobSettings_, jobSettings) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline CreateDIJobRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // migrationType Field Functions 
    bool hasMigrationType() const { return this->migrationType_ != nullptr;};
    void deleteMigrationType() { this->migrationType_ = nullptr;};
    inline string migrationType() const { DARABONBA_PTR_GET_DEFAULT(migrationType_, "") };
    inline CreateDIJobRequest& setMigrationType(string migrationType) { DARABONBA_PTR_SET_VALUE(migrationType_, migrationType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDIJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateDIJobRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // resourceSettings Field Functions 
    bool hasResourceSettings() const { return this->resourceSettings_ != nullptr;};
    void deleteResourceSettings() { this->resourceSettings_ = nullptr;};
    inline const CreateDIJobRequestResourceSettings & resourceSettings() const { DARABONBA_PTR_GET_CONST(resourceSettings_, CreateDIJobRequestResourceSettings) };
    inline CreateDIJobRequestResourceSettings resourceSettings() { DARABONBA_PTR_GET(resourceSettings_, CreateDIJobRequestResourceSettings) };
    inline CreateDIJobRequest& setResourceSettings(const CreateDIJobRequestResourceSettings & resourceSettings) { DARABONBA_PTR_SET_VALUE(resourceSettings_, resourceSettings) };
    inline CreateDIJobRequest& setResourceSettings(CreateDIJobRequestResourceSettings && resourceSettings) { DARABONBA_PTR_SET_RVALUE(resourceSettings_, resourceSettings) };


    // sourceDataSourceSettings Field Functions 
    bool hasSourceDataSourceSettings() const { return this->sourceDataSourceSettings_ != nullptr;};
    void deleteSourceDataSourceSettings() { this->sourceDataSourceSettings_ = nullptr;};
    inline const vector<CreateDIJobRequestSourceDataSourceSettings> & sourceDataSourceSettings() const { DARABONBA_PTR_GET_CONST(sourceDataSourceSettings_, vector<CreateDIJobRequestSourceDataSourceSettings>) };
    inline vector<CreateDIJobRequestSourceDataSourceSettings> sourceDataSourceSettings() { DARABONBA_PTR_GET(sourceDataSourceSettings_, vector<CreateDIJobRequestSourceDataSourceSettings>) };
    inline CreateDIJobRequest& setSourceDataSourceSettings(const vector<CreateDIJobRequestSourceDataSourceSettings> & sourceDataSourceSettings) { DARABONBA_PTR_SET_VALUE(sourceDataSourceSettings_, sourceDataSourceSettings) };
    inline CreateDIJobRequest& setSourceDataSourceSettings(vector<CreateDIJobRequestSourceDataSourceSettings> && sourceDataSourceSettings) { DARABONBA_PTR_SET_RVALUE(sourceDataSourceSettings_, sourceDataSourceSettings) };


    // sourceDataSourceType Field Functions 
    bool hasSourceDataSourceType() const { return this->sourceDataSourceType_ != nullptr;};
    void deleteSourceDataSourceType() { this->sourceDataSourceType_ = nullptr;};
    inline string sourceDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceDataSourceType_, "") };
    inline CreateDIJobRequest& setSourceDataSourceType(string sourceDataSourceType) { DARABONBA_PTR_SET_VALUE(sourceDataSourceType_, sourceDataSourceType) };


    // tableMappings Field Functions 
    bool hasTableMappings() const { return this->tableMappings_ != nullptr;};
    void deleteTableMappings() { this->tableMappings_ = nullptr;};
    inline const vector<CreateDIJobRequestTableMappings> & tableMappings() const { DARABONBA_PTR_GET_CONST(tableMappings_, vector<CreateDIJobRequestTableMappings>) };
    inline vector<CreateDIJobRequestTableMappings> tableMappings() { DARABONBA_PTR_GET(tableMappings_, vector<CreateDIJobRequestTableMappings>) };
    inline CreateDIJobRequest& setTableMappings(const vector<CreateDIJobRequestTableMappings> & tableMappings) { DARABONBA_PTR_SET_VALUE(tableMappings_, tableMappings) };
    inline CreateDIJobRequest& setTableMappings(vector<CreateDIJobRequestTableMappings> && tableMappings) { DARABONBA_PTR_SET_RVALUE(tableMappings_, tableMappings) };


    // transformationRules Field Functions 
    bool hasTransformationRules() const { return this->transformationRules_ != nullptr;};
    void deleteTransformationRules() { this->transformationRules_ = nullptr;};
    inline const vector<CreateDIJobRequestTransformationRules> & transformationRules() const { DARABONBA_PTR_GET_CONST(transformationRules_, vector<CreateDIJobRequestTransformationRules>) };
    inline vector<CreateDIJobRequestTransformationRules> transformationRules() { DARABONBA_PTR_GET(transformationRules_, vector<CreateDIJobRequestTransformationRules>) };
    inline CreateDIJobRequest& setTransformationRules(const vector<CreateDIJobRequestTransformationRules> & transformationRules) { DARABONBA_PTR_SET_VALUE(transformationRules_, transformationRules) };
    inline CreateDIJobRequest& setTransformationRules(vector<CreateDIJobRequestTransformationRules> && transformationRules) { DARABONBA_PTR_SET_RVALUE(transformationRules_, transformationRules) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<CreateDIJobRequestDestinationDataSourceSettings>> destinationDataSourceSettings_ = nullptr;
    // The destination type. Valid values: Hologres, OSS-HDFS, OSS, MaxCompute, LogHub, StarRocks, DataHub, AnalyticDB for MySQL, Kafka, and Hive.
    // 
    // This parameter is required.
    std::shared_ptr<string> destinationDataSourceType_ = nullptr;
    // This parameter is deprecated and is replaced by the Name parameter.
    std::shared_ptr<string> jobName_ = nullptr;
    std::shared_ptr<CreateDIJobRequestJobSettings> jobSettings_ = nullptr;
    // The type of the synchronization task. Valid values:
    // 
    // *   DatabaseRealtimeMigration: A real-time synchronization task used to synchronize only full data, only incremental data, or full and incremental data in multiple tables of multiple databases in the source.
    // *   DatabaseOfflineMigration: A batch synchronization task used to synchronize only full data, only incremental data, or full and incremental data in multiple tables of multiple databases in the source.
    // *   SingleTableRealtimeMigration: A real-time synchronization task used to synchronize data only in a single table in the source.
    std::shared_ptr<string> jobType_ = nullptr;
    // The synchronization type. Valid values:
    // 
    // *   FullAndRealtimeIncremental
    // *   RealtimeIncremental
    // *   Full
    // *   OfflineIncremental
    // *   FullAndOfflineIncremental
    // 
    // This parameter is required.
    std::shared_ptr<string> migrationType_ = nullptr;
    // The name of the synchronization task.
    std::shared_ptr<string> name_ = nullptr;
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to obtain the ID.
    // 
    // You must configure this parameter to specify the DataWorks workspace to which the API operation is applied.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreateDIJobRequestResourceSettings> resourceSettings_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<CreateDIJobRequestSourceDataSourceSettings>> sourceDataSourceSettings_ = nullptr;
    // The source type. Valid values: PolarDB, MySQL, Kafka, LogHub, Hologres, Oracle, OceanBase, MongoDB, Redshift, Hive, SQL Server, Doris, and ClickHouse.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceDataSourceType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<CreateDIJobRequestTableMappings>> tableMappings_ = nullptr;
    std::shared_ptr<vector<CreateDIJobRequestTransformationRules>> transformationRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
