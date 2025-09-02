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
namespace DataworksPublic20200518
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
      DARABONBA_PTR_TO_JSON(MigrationType, migrationType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ResourceSettings, resourceSettings_);
      DARABONBA_PTR_TO_JSON(SourceDataSourceSettings, sourceDataSourceSettings_);
      DARABONBA_PTR_TO_JSON(SourceDataSourceType, sourceDataSourceType_);
      DARABONBA_PTR_TO_JSON(SystemDebug, systemDebug_);
      DARABONBA_PTR_TO_JSON(TableMappings, tableMappings_);
      DARABONBA_PTR_TO_JSON(TransformationRules, transformationRules_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDIJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationDataSourceSettings, destinationDataSourceSettings_);
      DARABONBA_PTR_FROM_JSON(DestinationDataSourceType, destinationDataSourceType_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(JobSettings, jobSettings_);
      DARABONBA_PTR_FROM_JSON(MigrationType, migrationType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ResourceSettings, resourceSettings_);
      DARABONBA_PTR_FROM_JSON(SourceDataSourceSettings, sourceDataSourceSettings_);
      DARABONBA_PTR_FROM_JSON(SourceDataSourceType, sourceDataSourceType_);
      DARABONBA_PTR_FROM_JSON(SystemDebug, systemDebug_);
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
        && this->destinationDataSourceSettings_ != nullptr && this->destinationDataSourceType_ != nullptr && this->jobName_ != nullptr && this->jobSettings_ != nullptr && this->migrationType_ != nullptr
        && this->projectId_ != nullptr && this->resourceSettings_ != nullptr && this->sourceDataSourceSettings_ != nullptr && this->sourceDataSourceType_ != nullptr && this->systemDebug_ != nullptr
        && this->tableMappings_ != nullptr && this->transformationRules_ != nullptr; };
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


    // migrationType Field Functions 
    bool hasMigrationType() const { return this->migrationType_ != nullptr;};
    void deleteMigrationType() { this->migrationType_ = nullptr;};
    inline string migrationType() const { DARABONBA_PTR_GET_DEFAULT(migrationType_, "") };
    inline CreateDIJobRequest& setMigrationType(string migrationType) { DARABONBA_PTR_SET_VALUE(migrationType_, migrationType) };


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


    // systemDebug Field Functions 
    bool hasSystemDebug() const { return this->systemDebug_ != nullptr;};
    void deleteSystemDebug() { this->systemDebug_ = nullptr;};
    inline string systemDebug() const { DARABONBA_PTR_GET_DEFAULT(systemDebug_, "") };
    inline CreateDIJobRequest& setSystemDebug(string systemDebug) { DARABONBA_PTR_SET_VALUE(systemDebug_, systemDebug) };


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
    // The description of the synchronization task.
    std::shared_ptr<string> description_ = nullptr;
    // The settings of the destination. Only a single destination is supported.
    std::shared_ptr<vector<CreateDIJobRequestDestinationDataSourceSettings>> destinationDataSourceSettings_ = nullptr;
    // The destination type. Valid values: Hologres and Hive.
    std::shared_ptr<string> destinationDataSourceType_ = nullptr;
    // The name of the synchronization task.
    std::shared_ptr<string> jobName_ = nullptr;
    // The settings for the dimension of the synchronization task. The settings include processing policies for DDL messages, policies for data type mappings between source fields and destination fields, and runtime parameters of the synchronization task.
    std::shared_ptr<CreateDIJobRequestJobSettings> jobSettings_ = nullptr;
    // The synchronization type. Valid values:
    // 
    // *   FullAndRealtimeIncremental (one-time full synchronization and real-time incremental synchronization)
    // *   RealtimeIncremental (real-time incremental synchronization)
    // *   Full (full synchronization)
    // *   OfflineIncremental (batch incremental synchronization)
    // *   FullAndOfflineIncremental (one-time full synchronization and batch incremental synchronization)
    std::shared_ptr<string> migrationType_ = nullptr;
    // The DataWorks workspace ID. You can call the [ListProjects](https://help.aliyun.com/document_detail/178393.html) operation to obtain the ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The resource settings.
    std::shared_ptr<CreateDIJobRequestResourceSettings> resourceSettings_ = nullptr;
    // The settings of the source. Only a single source is supported.
    std::shared_ptr<vector<CreateDIJobRequestSourceDataSourceSettings>> sourceDataSourceSettings_ = nullptr;
    // The source type. Set this parameter to MySQL.
    std::shared_ptr<string> sourceDataSourceType_ = nullptr;
    // Specifies whether to perform system debugging. Valid values: true and false. Default value: false.
    std::shared_ptr<string> systemDebug_ = nullptr;
    // The list of mappings between rules used to select synchronization objects in the source and transformation rules applied to the selected synchronization objects. Each entry in the list displays a mapping between a rule used to select synchronization objects and a transformation rule applied to the selected synchronization objects.
    std::shared_ptr<vector<CreateDIJobRequestTableMappings>> tableMappings_ = nullptr;
    // The list of transformation rules that you want to apply to the synchronization objects selected from the source. Each entry in the list defines a transformation rule.
    std::shared_ptr<vector<CreateDIJobRequestTransformationRules>> transformationRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
