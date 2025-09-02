// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDIJobResponseBodyDataDestinationDataSourceSettings.hpp>
#include <alibabacloud/models/GetDIJobResponseBodyDataJobSettings.hpp>
#include <alibabacloud/models/GetDIJobResponseBodyDataResourceSettings.hpp>
#include <map>
#include <alibabacloud/models/GetDIJobResponseBodyDataSourceDataSourceSettings.hpp>
#include <alibabacloud/models/GetDIJobResponseBodyDataTableMappings.hpp>
#include <alibabacloud/models/GetDIJobResponseBodyDataTransformationRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDIJobResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDIJobResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(CreatedUid, createdUid_);
      DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationDataSourceSettings, destinationDataSourceSettings_);
      DARABONBA_PTR_TO_JSON(DestinationDataSourceType, destinationDataSourceType_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(JobSettings, jobSettings_);
      DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(MigrationType, migrationType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ResourceSettings, resourceSettings_);
      DARABONBA_PTR_TO_JSON(RunStats, runStats_);
      DARABONBA_PTR_TO_JSON(SourceDataSourceSettings, sourceDataSourceSettings_);
      DARABONBA_PTR_TO_JSON(SourceDataSourceType, sourceDataSourceType_);
      DARABONBA_PTR_TO_JSON(StartedTime, startedTime_);
      DARABONBA_PTR_TO_JSON(StartedUid, startedUid_);
      DARABONBA_PTR_TO_JSON(TableMappings, tableMappings_);
      DARABONBA_PTR_TO_JSON(TransformationRules, transformationRules_);
      DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_TO_JSON(UpdatedUid, updatedUid_);
    };
    friend void from_json(const Darabonba::Json& j, GetDIJobResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(CreatedUid, createdUid_);
      DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationDataSourceSettings, destinationDataSourceSettings_);
      DARABONBA_PTR_FROM_JSON(DestinationDataSourceType, destinationDataSourceType_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(JobSettings, jobSettings_);
      DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(MigrationType, migrationType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ResourceSettings, resourceSettings_);
      DARABONBA_PTR_FROM_JSON(RunStats, runStats_);
      DARABONBA_PTR_FROM_JSON(SourceDataSourceSettings, sourceDataSourceSettings_);
      DARABONBA_PTR_FROM_JSON(SourceDataSourceType, sourceDataSourceType_);
      DARABONBA_PTR_FROM_JSON(StartedTime, startedTime_);
      DARABONBA_PTR_FROM_JSON(StartedUid, startedUid_);
      DARABONBA_PTR_FROM_JSON(TableMappings, tableMappings_);
      DARABONBA_PTR_FROM_JSON(TransformationRules, transformationRules_);
      DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_FROM_JSON(UpdatedUid, updatedUid_);
    };
    GetDIJobResponseBodyData() = default ;
    GetDIJobResponseBodyData(const GetDIJobResponseBodyData &) = default ;
    GetDIJobResponseBodyData(GetDIJobResponseBodyData &&) = default ;
    GetDIJobResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDIJobResponseBodyData() = default ;
    GetDIJobResponseBodyData& operator=(const GetDIJobResponseBodyData &) = default ;
    GetDIJobResponseBodyData& operator=(GetDIJobResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createdTime_ != nullptr
        && this->createdUid_ != nullptr && this->DIJobId_ != nullptr && this->description_ != nullptr && this->destinationDataSourceSettings_ != nullptr && this->destinationDataSourceType_ != nullptr
        && this->errorMessage_ != nullptr && this->jobName_ != nullptr && this->jobSettings_ != nullptr && this->jobStatus_ != nullptr && this->migrationType_ != nullptr
        && this->projectId_ != nullptr && this->resourceSettings_ != nullptr && this->runStats_ != nullptr && this->sourceDataSourceSettings_ != nullptr && this->sourceDataSourceType_ != nullptr
        && this->startedTime_ != nullptr && this->startedUid_ != nullptr && this->tableMappings_ != nullptr && this->transformationRules_ != nullptr && this->updatedTime_ != nullptr
        && this->updatedUid_ != nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline GetDIJobResponseBodyData& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // createdUid Field Functions 
    bool hasCreatedUid() const { return this->createdUid_ != nullptr;};
    void deleteCreatedUid() { this->createdUid_ = nullptr;};
    inline string createdUid() const { DARABONBA_PTR_GET_DEFAULT(createdUid_, "") };
    inline GetDIJobResponseBodyData& setCreatedUid(string createdUid) { DARABONBA_PTR_SET_VALUE(createdUid_, createdUid) };


    // DIJobId Field Functions 
    bool hasDIJobId() const { return this->DIJobId_ != nullptr;};
    void deleteDIJobId() { this->DIJobId_ = nullptr;};
    inline int64_t DIJobId() const { DARABONBA_PTR_GET_DEFAULT(DIJobId_, 0L) };
    inline GetDIJobResponseBodyData& setDIJobId(int64_t DIJobId) { DARABONBA_PTR_SET_VALUE(DIJobId_, DIJobId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetDIJobResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationDataSourceSettings Field Functions 
    bool hasDestinationDataSourceSettings() const { return this->destinationDataSourceSettings_ != nullptr;};
    void deleteDestinationDataSourceSettings() { this->destinationDataSourceSettings_ = nullptr;};
    inline const vector<Models::GetDIJobResponseBodyDataDestinationDataSourceSettings> & destinationDataSourceSettings() const { DARABONBA_PTR_GET_CONST(destinationDataSourceSettings_, vector<Models::GetDIJobResponseBodyDataDestinationDataSourceSettings>) };
    inline vector<Models::GetDIJobResponseBodyDataDestinationDataSourceSettings> destinationDataSourceSettings() { DARABONBA_PTR_GET(destinationDataSourceSettings_, vector<Models::GetDIJobResponseBodyDataDestinationDataSourceSettings>) };
    inline GetDIJobResponseBodyData& setDestinationDataSourceSettings(const vector<Models::GetDIJobResponseBodyDataDestinationDataSourceSettings> & destinationDataSourceSettings) { DARABONBA_PTR_SET_VALUE(destinationDataSourceSettings_, destinationDataSourceSettings) };
    inline GetDIJobResponseBodyData& setDestinationDataSourceSettings(vector<Models::GetDIJobResponseBodyDataDestinationDataSourceSettings> && destinationDataSourceSettings) { DARABONBA_PTR_SET_RVALUE(destinationDataSourceSettings_, destinationDataSourceSettings) };


    // destinationDataSourceType Field Functions 
    bool hasDestinationDataSourceType() const { return this->destinationDataSourceType_ != nullptr;};
    void deleteDestinationDataSourceType() { this->destinationDataSourceType_ = nullptr;};
    inline string destinationDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(destinationDataSourceType_, "") };
    inline GetDIJobResponseBodyData& setDestinationDataSourceType(string destinationDataSourceType) { DARABONBA_PTR_SET_VALUE(destinationDataSourceType_, destinationDataSourceType) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDIJobResponseBodyData& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline GetDIJobResponseBodyData& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // jobSettings Field Functions 
    bool hasJobSettings() const { return this->jobSettings_ != nullptr;};
    void deleteJobSettings() { this->jobSettings_ = nullptr;};
    inline const Models::GetDIJobResponseBodyDataJobSettings & jobSettings() const { DARABONBA_PTR_GET_CONST(jobSettings_, Models::GetDIJobResponseBodyDataJobSettings) };
    inline Models::GetDIJobResponseBodyDataJobSettings jobSettings() { DARABONBA_PTR_GET(jobSettings_, Models::GetDIJobResponseBodyDataJobSettings) };
    inline GetDIJobResponseBodyData& setJobSettings(const Models::GetDIJobResponseBodyDataJobSettings & jobSettings) { DARABONBA_PTR_SET_VALUE(jobSettings_, jobSettings) };
    inline GetDIJobResponseBodyData& setJobSettings(Models::GetDIJobResponseBodyDataJobSettings && jobSettings) { DARABONBA_PTR_SET_RVALUE(jobSettings_, jobSettings) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline string jobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
    inline GetDIJobResponseBodyData& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // migrationType Field Functions 
    bool hasMigrationType() const { return this->migrationType_ != nullptr;};
    void deleteMigrationType() { this->migrationType_ = nullptr;};
    inline string migrationType() const { DARABONBA_PTR_GET_DEFAULT(migrationType_, "") };
    inline GetDIJobResponseBodyData& setMigrationType(string migrationType) { DARABONBA_PTR_SET_VALUE(migrationType_, migrationType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetDIJobResponseBodyData& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // resourceSettings Field Functions 
    bool hasResourceSettings() const { return this->resourceSettings_ != nullptr;};
    void deleteResourceSettings() { this->resourceSettings_ = nullptr;};
    inline const Models::GetDIJobResponseBodyDataResourceSettings & resourceSettings() const { DARABONBA_PTR_GET_CONST(resourceSettings_, Models::GetDIJobResponseBodyDataResourceSettings) };
    inline Models::GetDIJobResponseBodyDataResourceSettings resourceSettings() { DARABONBA_PTR_GET(resourceSettings_, Models::GetDIJobResponseBodyDataResourceSettings) };
    inline GetDIJobResponseBodyData& setResourceSettings(const Models::GetDIJobResponseBodyDataResourceSettings & resourceSettings) { DARABONBA_PTR_SET_VALUE(resourceSettings_, resourceSettings) };
    inline GetDIJobResponseBodyData& setResourceSettings(Models::GetDIJobResponseBodyDataResourceSettings && resourceSettings) { DARABONBA_PTR_SET_RVALUE(resourceSettings_, resourceSettings) };


    // runStats Field Functions 
    bool hasRunStats() const { return this->runStats_ != nullptr;};
    void deleteRunStats() { this->runStats_ = nullptr;};
    inline const map<string, string> & runStats() const { DARABONBA_PTR_GET_CONST(runStats_, map<string, string>) };
    inline map<string, string> runStats() { DARABONBA_PTR_GET(runStats_, map<string, string>) };
    inline GetDIJobResponseBodyData& setRunStats(const map<string, string> & runStats) { DARABONBA_PTR_SET_VALUE(runStats_, runStats) };
    inline GetDIJobResponseBodyData& setRunStats(map<string, string> && runStats) { DARABONBA_PTR_SET_RVALUE(runStats_, runStats) };


    // sourceDataSourceSettings Field Functions 
    bool hasSourceDataSourceSettings() const { return this->sourceDataSourceSettings_ != nullptr;};
    void deleteSourceDataSourceSettings() { this->sourceDataSourceSettings_ = nullptr;};
    inline const vector<Models::GetDIJobResponseBodyDataSourceDataSourceSettings> & sourceDataSourceSettings() const { DARABONBA_PTR_GET_CONST(sourceDataSourceSettings_, vector<Models::GetDIJobResponseBodyDataSourceDataSourceSettings>) };
    inline vector<Models::GetDIJobResponseBodyDataSourceDataSourceSettings> sourceDataSourceSettings() { DARABONBA_PTR_GET(sourceDataSourceSettings_, vector<Models::GetDIJobResponseBodyDataSourceDataSourceSettings>) };
    inline GetDIJobResponseBodyData& setSourceDataSourceSettings(const vector<Models::GetDIJobResponseBodyDataSourceDataSourceSettings> & sourceDataSourceSettings) { DARABONBA_PTR_SET_VALUE(sourceDataSourceSettings_, sourceDataSourceSettings) };
    inline GetDIJobResponseBodyData& setSourceDataSourceSettings(vector<Models::GetDIJobResponseBodyDataSourceDataSourceSettings> && sourceDataSourceSettings) { DARABONBA_PTR_SET_RVALUE(sourceDataSourceSettings_, sourceDataSourceSettings) };


    // sourceDataSourceType Field Functions 
    bool hasSourceDataSourceType() const { return this->sourceDataSourceType_ != nullptr;};
    void deleteSourceDataSourceType() { this->sourceDataSourceType_ = nullptr;};
    inline string sourceDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceDataSourceType_, "") };
    inline GetDIJobResponseBodyData& setSourceDataSourceType(string sourceDataSourceType) { DARABONBA_PTR_SET_VALUE(sourceDataSourceType_, sourceDataSourceType) };


    // startedTime Field Functions 
    bool hasStartedTime() const { return this->startedTime_ != nullptr;};
    void deleteStartedTime() { this->startedTime_ = nullptr;};
    inline int64_t startedTime() const { DARABONBA_PTR_GET_DEFAULT(startedTime_, 0L) };
    inline GetDIJobResponseBodyData& setStartedTime(int64_t startedTime) { DARABONBA_PTR_SET_VALUE(startedTime_, startedTime) };


    // startedUid Field Functions 
    bool hasStartedUid() const { return this->startedUid_ != nullptr;};
    void deleteStartedUid() { this->startedUid_ = nullptr;};
    inline string startedUid() const { DARABONBA_PTR_GET_DEFAULT(startedUid_, "") };
    inline GetDIJobResponseBodyData& setStartedUid(string startedUid) { DARABONBA_PTR_SET_VALUE(startedUid_, startedUid) };


    // tableMappings Field Functions 
    bool hasTableMappings() const { return this->tableMappings_ != nullptr;};
    void deleteTableMappings() { this->tableMappings_ = nullptr;};
    inline const vector<Models::GetDIJobResponseBodyDataTableMappings> & tableMappings() const { DARABONBA_PTR_GET_CONST(tableMappings_, vector<Models::GetDIJobResponseBodyDataTableMappings>) };
    inline vector<Models::GetDIJobResponseBodyDataTableMappings> tableMappings() { DARABONBA_PTR_GET(tableMappings_, vector<Models::GetDIJobResponseBodyDataTableMappings>) };
    inline GetDIJobResponseBodyData& setTableMappings(const vector<Models::GetDIJobResponseBodyDataTableMappings> & tableMappings) { DARABONBA_PTR_SET_VALUE(tableMappings_, tableMappings) };
    inline GetDIJobResponseBodyData& setTableMappings(vector<Models::GetDIJobResponseBodyDataTableMappings> && tableMappings) { DARABONBA_PTR_SET_RVALUE(tableMappings_, tableMappings) };


    // transformationRules Field Functions 
    bool hasTransformationRules() const { return this->transformationRules_ != nullptr;};
    void deleteTransformationRules() { this->transformationRules_ = nullptr;};
    inline const vector<Models::GetDIJobResponseBodyDataTransformationRules> & transformationRules() const { DARABONBA_PTR_GET_CONST(transformationRules_, vector<Models::GetDIJobResponseBodyDataTransformationRules>) };
    inline vector<Models::GetDIJobResponseBodyDataTransformationRules> transformationRules() { DARABONBA_PTR_GET(transformationRules_, vector<Models::GetDIJobResponseBodyDataTransformationRules>) };
    inline GetDIJobResponseBodyData& setTransformationRules(const vector<Models::GetDIJobResponseBodyDataTransformationRules> & transformationRules) { DARABONBA_PTR_SET_VALUE(transformationRules_, transformationRules) };
    inline GetDIJobResponseBodyData& setTransformationRules(vector<Models::GetDIJobResponseBodyDataTransformationRules> && transformationRules) { DARABONBA_PTR_SET_RVALUE(transformationRules_, transformationRules) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline int64_t updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
    inline GetDIJobResponseBodyData& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    // updatedUid Field Functions 
    bool hasUpdatedUid() const { return this->updatedUid_ != nullptr;};
    void deleteUpdatedUid() { this->updatedUid_ = nullptr;};
    inline string updatedUid() const { DARABONBA_PTR_GET_DEFAULT(updatedUid_, "") };
    inline GetDIJobResponseBodyData& setUpdatedUid(string updatedUid) { DARABONBA_PTR_SET_VALUE(updatedUid_, updatedUid) };


  protected:
    // The timestamp when the synchronization task was created. The timestamp is accurate to the second.
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    // The ID of the user who creates the synchronization task.
    std::shared_ptr<string> createdUid_ = nullptr;
    // The ID of the synchronization task.
    std::shared_ptr<int64_t> DIJobId_ = nullptr;
    // The description of the synchronization task.
    std::shared_ptr<string> description_ = nullptr;
    // The settings of the destination. Only a single destination is supported.
    std::shared_ptr<vector<Models::GetDIJobResponseBodyDataDestinationDataSourceSettings>> destinationDataSourceSettings_ = nullptr;
    // The destination type. Valid values: Hologres and Hive.
    std::shared_ptr<string> destinationDataSourceType_ = nullptr;
    // The error message returned if the value of the JobStatus parameter is Failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The name of the synchronization task.
    std::shared_ptr<string> jobName_ = nullptr;
    // The settings for the dimension of the synchronization task. The settings include processing policies for DDL messages, policies for data type mappings between source fields and destination fields, and runtime parameters of the synchronization task.
    std::shared_ptr<Models::GetDIJobResponseBodyDataJobSettings> jobSettings_ = nullptr;
    // The status of the synchronization task. Valid values:
    // 
    // *   Finished
    // *   Initialized
    // *   Stopped
    // *   Failed
    // *   Running
    // *   Stopping
    std::shared_ptr<string> jobStatus_ = nullptr;
    // The synchronization type. Valid values:
    // 
    // *   FullAndRealtimeIncremental: one-time full synchronization and real-time incremental synchronization
    // *   RealtimeIncremental: real-time incremental synchronization
    // *   Full: full synchronization
    // *   OfflineIncremental: batch incremental synchronization
    // *   FullAndOfflineIncremental: one-time full synchronization and batch incremental synchronization
    std::shared_ptr<string> migrationType_ = nullptr;
    // The workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The resource settings.
    std::shared_ptr<Models::GetDIJobResponseBodyDataResourceSettings> resourceSettings_ = nullptr;
    // The information about the running of the synchronization task.
    std::shared_ptr<map<string, string>> runStats_ = nullptr;
    // The settings of the source. Only a single source is supported.
    std::shared_ptr<vector<Models::GetDIJobResponseBodyDataSourceDataSourceSettings>> sourceDataSourceSettings_ = nullptr;
    // The source type. The value MySQL is returned.
    std::shared_ptr<string> sourceDataSourceType_ = nullptr;
    // The timestamp when the synchronization task was last started. The timestamp is accurate to the second.
    std::shared_ptr<int64_t> startedTime_ = nullptr;
    // The ID of the user who last starts the synchronization task.
    std::shared_ptr<string> startedUid_ = nullptr;
    // The list of mappings between rules used to select synchronization objects in the source and transformation rules applied to the selected synchronization objects. Each entry in the list displays a mapping between a rule used to select synchronization objects and a transformation rule applied to the selected synchronization objects.
    std::shared_ptr<vector<Models::GetDIJobResponseBodyDataTableMappings>> tableMappings_ = nullptr;
    // The list of transformation rules that are applied to the synchronization objects selected from the source. Each entry in the list defines a transformation rule.
    std::shared_ptr<vector<Models::GetDIJobResponseBodyDataTransformationRules>> transformationRules_ = nullptr;
    // The timestamp when the synchronization task was last modified. The timestamp is accurate to the second.
    std::shared_ptr<int64_t> updatedTime_ = nullptr;
    // The ID of the user who last modifies the synchronization task.
    std::shared_ptr<string> updatedUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
