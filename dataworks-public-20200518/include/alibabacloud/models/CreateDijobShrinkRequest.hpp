// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreateDIJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDIJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationDataSourceSettings, destinationDataSourceSettingsShrink_);
      DARABONBA_PTR_TO_JSON(DestinationDataSourceType, destinationDataSourceType_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(JobSettings, jobSettingsShrink_);
      DARABONBA_PTR_TO_JSON(MigrationType, migrationType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ResourceSettings, resourceSettingsShrink_);
      DARABONBA_PTR_TO_JSON(SourceDataSourceSettings, sourceDataSourceSettingsShrink_);
      DARABONBA_PTR_TO_JSON(SourceDataSourceType, sourceDataSourceType_);
      DARABONBA_PTR_TO_JSON(SystemDebug, systemDebug_);
      DARABONBA_PTR_TO_JSON(TableMappings, tableMappingsShrink_);
      DARABONBA_PTR_TO_JSON(TransformationRules, transformationRulesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDIJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationDataSourceSettings, destinationDataSourceSettingsShrink_);
      DARABONBA_PTR_FROM_JSON(DestinationDataSourceType, destinationDataSourceType_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(JobSettings, jobSettingsShrink_);
      DARABONBA_PTR_FROM_JSON(MigrationType, migrationType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ResourceSettings, resourceSettingsShrink_);
      DARABONBA_PTR_FROM_JSON(SourceDataSourceSettings, sourceDataSourceSettingsShrink_);
      DARABONBA_PTR_FROM_JSON(SourceDataSourceType, sourceDataSourceType_);
      DARABONBA_PTR_FROM_JSON(SystemDebug, systemDebug_);
      DARABONBA_PTR_FROM_JSON(TableMappings, tableMappingsShrink_);
      DARABONBA_PTR_FROM_JSON(TransformationRules, transformationRulesShrink_);
    };
    CreateDIJobShrinkRequest() = default ;
    CreateDIJobShrinkRequest(const CreateDIJobShrinkRequest &) = default ;
    CreateDIJobShrinkRequest(CreateDIJobShrinkRequest &&) = default ;
    CreateDIJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDIJobShrinkRequest() = default ;
    CreateDIJobShrinkRequest& operator=(const CreateDIJobShrinkRequest &) = default ;
    CreateDIJobShrinkRequest& operator=(CreateDIJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->destinationDataSourceSettingsShrink_ != nullptr && this->destinationDataSourceType_ != nullptr && this->jobName_ != nullptr && this->jobSettingsShrink_ != nullptr && this->migrationType_ != nullptr
        && this->projectId_ != nullptr && this->resourceSettingsShrink_ != nullptr && this->sourceDataSourceSettingsShrink_ != nullptr && this->sourceDataSourceType_ != nullptr && this->systemDebug_ != nullptr
        && this->tableMappingsShrink_ != nullptr && this->transformationRulesShrink_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDIJobShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationDataSourceSettingsShrink Field Functions 
    bool hasDestinationDataSourceSettingsShrink() const { return this->destinationDataSourceSettingsShrink_ != nullptr;};
    void deleteDestinationDataSourceSettingsShrink() { this->destinationDataSourceSettingsShrink_ = nullptr;};
    inline string destinationDataSourceSettingsShrink() const { DARABONBA_PTR_GET_DEFAULT(destinationDataSourceSettingsShrink_, "") };
    inline CreateDIJobShrinkRequest& setDestinationDataSourceSettingsShrink(string destinationDataSourceSettingsShrink) { DARABONBA_PTR_SET_VALUE(destinationDataSourceSettingsShrink_, destinationDataSourceSettingsShrink) };


    // destinationDataSourceType Field Functions 
    bool hasDestinationDataSourceType() const { return this->destinationDataSourceType_ != nullptr;};
    void deleteDestinationDataSourceType() { this->destinationDataSourceType_ = nullptr;};
    inline string destinationDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(destinationDataSourceType_, "") };
    inline CreateDIJobShrinkRequest& setDestinationDataSourceType(string destinationDataSourceType) { DARABONBA_PTR_SET_VALUE(destinationDataSourceType_, destinationDataSourceType) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline CreateDIJobShrinkRequest& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // jobSettingsShrink Field Functions 
    bool hasJobSettingsShrink() const { return this->jobSettingsShrink_ != nullptr;};
    void deleteJobSettingsShrink() { this->jobSettingsShrink_ = nullptr;};
    inline string jobSettingsShrink() const { DARABONBA_PTR_GET_DEFAULT(jobSettingsShrink_, "") };
    inline CreateDIJobShrinkRequest& setJobSettingsShrink(string jobSettingsShrink) { DARABONBA_PTR_SET_VALUE(jobSettingsShrink_, jobSettingsShrink) };


    // migrationType Field Functions 
    bool hasMigrationType() const { return this->migrationType_ != nullptr;};
    void deleteMigrationType() { this->migrationType_ = nullptr;};
    inline string migrationType() const { DARABONBA_PTR_GET_DEFAULT(migrationType_, "") };
    inline CreateDIJobShrinkRequest& setMigrationType(string migrationType) { DARABONBA_PTR_SET_VALUE(migrationType_, migrationType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateDIJobShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // resourceSettingsShrink Field Functions 
    bool hasResourceSettingsShrink() const { return this->resourceSettingsShrink_ != nullptr;};
    void deleteResourceSettingsShrink() { this->resourceSettingsShrink_ = nullptr;};
    inline string resourceSettingsShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceSettingsShrink_, "") };
    inline CreateDIJobShrinkRequest& setResourceSettingsShrink(string resourceSettingsShrink) { DARABONBA_PTR_SET_VALUE(resourceSettingsShrink_, resourceSettingsShrink) };


    // sourceDataSourceSettingsShrink Field Functions 
    bool hasSourceDataSourceSettingsShrink() const { return this->sourceDataSourceSettingsShrink_ != nullptr;};
    void deleteSourceDataSourceSettingsShrink() { this->sourceDataSourceSettingsShrink_ = nullptr;};
    inline string sourceDataSourceSettingsShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceDataSourceSettingsShrink_, "") };
    inline CreateDIJobShrinkRequest& setSourceDataSourceSettingsShrink(string sourceDataSourceSettingsShrink) { DARABONBA_PTR_SET_VALUE(sourceDataSourceSettingsShrink_, sourceDataSourceSettingsShrink) };


    // sourceDataSourceType Field Functions 
    bool hasSourceDataSourceType() const { return this->sourceDataSourceType_ != nullptr;};
    void deleteSourceDataSourceType() { this->sourceDataSourceType_ = nullptr;};
    inline string sourceDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceDataSourceType_, "") };
    inline CreateDIJobShrinkRequest& setSourceDataSourceType(string sourceDataSourceType) { DARABONBA_PTR_SET_VALUE(sourceDataSourceType_, sourceDataSourceType) };


    // systemDebug Field Functions 
    bool hasSystemDebug() const { return this->systemDebug_ != nullptr;};
    void deleteSystemDebug() { this->systemDebug_ = nullptr;};
    inline string systemDebug() const { DARABONBA_PTR_GET_DEFAULT(systemDebug_, "") };
    inline CreateDIJobShrinkRequest& setSystemDebug(string systemDebug) { DARABONBA_PTR_SET_VALUE(systemDebug_, systemDebug) };


    // tableMappingsShrink Field Functions 
    bool hasTableMappingsShrink() const { return this->tableMappingsShrink_ != nullptr;};
    void deleteTableMappingsShrink() { this->tableMappingsShrink_ = nullptr;};
    inline string tableMappingsShrink() const { DARABONBA_PTR_GET_DEFAULT(tableMappingsShrink_, "") };
    inline CreateDIJobShrinkRequest& setTableMappingsShrink(string tableMappingsShrink) { DARABONBA_PTR_SET_VALUE(tableMappingsShrink_, tableMappingsShrink) };


    // transformationRulesShrink Field Functions 
    bool hasTransformationRulesShrink() const { return this->transformationRulesShrink_ != nullptr;};
    void deleteTransformationRulesShrink() { this->transformationRulesShrink_ = nullptr;};
    inline string transformationRulesShrink() const { DARABONBA_PTR_GET_DEFAULT(transformationRulesShrink_, "") };
    inline CreateDIJobShrinkRequest& setTransformationRulesShrink(string transformationRulesShrink) { DARABONBA_PTR_SET_VALUE(transformationRulesShrink_, transformationRulesShrink) };


  protected:
    // The description of the synchronization task.
    std::shared_ptr<string> description_ = nullptr;
    // The settings of the destination. Only a single destination is supported.
    std::shared_ptr<string> destinationDataSourceSettingsShrink_ = nullptr;
    // The destination type. Valid values: Hologres and Hive.
    std::shared_ptr<string> destinationDataSourceType_ = nullptr;
    // The name of the synchronization task.
    std::shared_ptr<string> jobName_ = nullptr;
    // The settings for the dimension of the synchronization task. The settings include processing policies for DDL messages, policies for data type mappings between source fields and destination fields, and runtime parameters of the synchronization task.
    std::shared_ptr<string> jobSettingsShrink_ = nullptr;
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
    std::shared_ptr<string> resourceSettingsShrink_ = nullptr;
    // The settings of the source. Only a single source is supported.
    std::shared_ptr<string> sourceDataSourceSettingsShrink_ = nullptr;
    // The source type. Set this parameter to MySQL.
    std::shared_ptr<string> sourceDataSourceType_ = nullptr;
    // Specifies whether to perform system debugging. Valid values: true and false. Default value: false.
    std::shared_ptr<string> systemDebug_ = nullptr;
    // The list of mappings between rules used to select synchronization objects in the source and transformation rules applied to the selected synchronization objects. Each entry in the list displays a mapping between a rule used to select synchronization objects and a transformation rule applied to the selected synchronization objects.
    std::shared_ptr<string> tableMappingsShrink_ = nullptr;
    // The list of transformation rules that you want to apply to the synchronization objects selected from the source. Each entry in the list defines a transformation rule.
    std::shared_ptr<string> transformationRulesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
