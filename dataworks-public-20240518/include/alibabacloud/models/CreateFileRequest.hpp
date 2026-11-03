// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedSettings, advancedSettings_);
      DARABONBA_PTR_TO_JSON(ApplyScheduleImmediately, applyScheduleImmediately_);
      DARABONBA_PTR_TO_JSON(AutoParsing, autoParsing_);
      DARABONBA_PTR_TO_JSON(AutoRerunIntervalMillis, autoRerunIntervalMillis_);
      DARABONBA_PTR_TO_JSON(AutoRerunTimes, autoRerunTimes_);
      DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(CreateFolderIfNotExists, createFolderIfNotExists_);
      DARABONBA_PTR_TO_JSON(CronExpress, cronExpress_);
      DARABONBA_PTR_TO_JSON(CycleType, cycleType_);
      DARABONBA_PTR_TO_JSON(DependentNodeIdList, dependentNodeIdList_);
      DARABONBA_PTR_TO_JSON(DependentType, dependentType_);
      DARABONBA_PTR_TO_JSON(EndEffectDate, endEffectDate_);
      DARABONBA_PTR_TO_JSON(FileDescription, fileDescription_);
      DARABONBA_PTR_TO_JSON(FileFolderPath, fileFolderPath_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(IgnoreParentSkipRunningProperty, ignoreParentSkipRunningProperty_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InputList, inputList_);
      DARABONBA_PTR_TO_JSON(InputParameters, inputParameters_);
      DARABONBA_PTR_TO_JSON(OutputList, outputList_);
      DARABONBA_PTR_TO_JSON(OutputParameters, outputParameters_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ParaValue, paraValue_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectIdentifier, projectIdentifier_);
      DARABONBA_PTR_TO_JSON(RerunMode, rerunMode_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupIdentifier, resourceGroupIdentifier_);
      DARABONBA_PTR_TO_JSON(SchedulerType, schedulerType_);
      DARABONBA_PTR_TO_JSON(StartEffectDate, startEffectDate_);
      DARABONBA_PTR_TO_JSON(StartImmediately, startImmediately_);
      DARABONBA_PTR_TO_JSON(Stop, stop_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedSettings, advancedSettings_);
      DARABONBA_PTR_FROM_JSON(ApplyScheduleImmediately, applyScheduleImmediately_);
      DARABONBA_PTR_FROM_JSON(AutoParsing, autoParsing_);
      DARABONBA_PTR_FROM_JSON(AutoRerunIntervalMillis, autoRerunIntervalMillis_);
      DARABONBA_PTR_FROM_JSON(AutoRerunTimes, autoRerunTimes_);
      DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(CreateFolderIfNotExists, createFolderIfNotExists_);
      DARABONBA_PTR_FROM_JSON(CronExpress, cronExpress_);
      DARABONBA_PTR_FROM_JSON(CycleType, cycleType_);
      DARABONBA_PTR_FROM_JSON(DependentNodeIdList, dependentNodeIdList_);
      DARABONBA_PTR_FROM_JSON(DependentType, dependentType_);
      DARABONBA_PTR_FROM_JSON(EndEffectDate, endEffectDate_);
      DARABONBA_PTR_FROM_JSON(FileDescription, fileDescription_);
      DARABONBA_PTR_FROM_JSON(FileFolderPath, fileFolderPath_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(IgnoreParentSkipRunningProperty, ignoreParentSkipRunningProperty_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InputList, inputList_);
      DARABONBA_PTR_FROM_JSON(InputParameters, inputParameters_);
      DARABONBA_PTR_FROM_JSON(OutputList, outputList_);
      DARABONBA_PTR_FROM_JSON(OutputParameters, outputParameters_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ParaValue, paraValue_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectIdentifier, projectIdentifier_);
      DARABONBA_PTR_FROM_JSON(RerunMode, rerunMode_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupIdentifier, resourceGroupIdentifier_);
      DARABONBA_PTR_FROM_JSON(SchedulerType, schedulerType_);
      DARABONBA_PTR_FROM_JSON(StartEffectDate, startEffectDate_);
      DARABONBA_PTR_FROM_JSON(StartImmediately, startImmediately_);
      DARABONBA_PTR_FROM_JSON(Stop, stop_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    CreateFileRequest() = default ;
    CreateFileRequest(const CreateFileRequest &) = default ;
    CreateFileRequest(CreateFileRequest &&) = default ;
    CreateFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFileRequest() = default ;
    CreateFileRequest& operator=(const CreateFileRequest &) = default ;
    CreateFileRequest& operator=(CreateFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advancedSettings_ == nullptr
        && this->applyScheduleImmediately_ == nullptr && this->autoParsing_ == nullptr && this->autoRerunIntervalMillis_ == nullptr && this->autoRerunTimes_ == nullptr && this->connectionName_ == nullptr
        && this->content_ == nullptr && this->createFolderIfNotExists_ == nullptr && this->cronExpress_ == nullptr && this->cycleType_ == nullptr && this->dependentNodeIdList_ == nullptr
        && this->dependentType_ == nullptr && this->endEffectDate_ == nullptr && this->fileDescription_ == nullptr && this->fileFolderPath_ == nullptr && this->fileName_ == nullptr
        && this->fileType_ == nullptr && this->ignoreParentSkipRunningProperty_ == nullptr && this->imageId_ == nullptr && this->inputList_ == nullptr && this->inputParameters_ == nullptr
        && this->outputList_ == nullptr && this->outputParameters_ == nullptr && this->owner_ == nullptr && this->paraValue_ == nullptr && this->projectId_ == nullptr
        && this->projectIdentifier_ == nullptr && this->rerunMode_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceGroupIdentifier_ == nullptr && this->schedulerType_ == nullptr
        && this->startEffectDate_ == nullptr && this->startImmediately_ == nullptr && this->stop_ == nullptr && this->timeout_ == nullptr; };
    // advancedSettings Field Functions 
    bool hasAdvancedSettings() const { return this->advancedSettings_ != nullptr;};
    void deleteAdvancedSettings() { this->advancedSettings_ = nullptr;};
    inline string getAdvancedSettings() const { DARABONBA_PTR_GET_DEFAULT(advancedSettings_, "") };
    inline CreateFileRequest& setAdvancedSettings(string advancedSettings) { DARABONBA_PTR_SET_VALUE(advancedSettings_, advancedSettings) };


    // applyScheduleImmediately Field Functions 
    bool hasApplyScheduleImmediately() const { return this->applyScheduleImmediately_ != nullptr;};
    void deleteApplyScheduleImmediately() { this->applyScheduleImmediately_ = nullptr;};
    inline bool getApplyScheduleImmediately() const { DARABONBA_PTR_GET_DEFAULT(applyScheduleImmediately_, false) };
    inline CreateFileRequest& setApplyScheduleImmediately(bool applyScheduleImmediately) { DARABONBA_PTR_SET_VALUE(applyScheduleImmediately_, applyScheduleImmediately) };


    // autoParsing Field Functions 
    bool hasAutoParsing() const { return this->autoParsing_ != nullptr;};
    void deleteAutoParsing() { this->autoParsing_ = nullptr;};
    inline bool getAutoParsing() const { DARABONBA_PTR_GET_DEFAULT(autoParsing_, false) };
    inline CreateFileRequest& setAutoParsing(bool autoParsing) { DARABONBA_PTR_SET_VALUE(autoParsing_, autoParsing) };


    // autoRerunIntervalMillis Field Functions 
    bool hasAutoRerunIntervalMillis() const { return this->autoRerunIntervalMillis_ != nullptr;};
    void deleteAutoRerunIntervalMillis() { this->autoRerunIntervalMillis_ = nullptr;};
    inline int32_t getAutoRerunIntervalMillis() const { DARABONBA_PTR_GET_DEFAULT(autoRerunIntervalMillis_, 0) };
    inline CreateFileRequest& setAutoRerunIntervalMillis(int32_t autoRerunIntervalMillis) { DARABONBA_PTR_SET_VALUE(autoRerunIntervalMillis_, autoRerunIntervalMillis) };


    // autoRerunTimes Field Functions 
    bool hasAutoRerunTimes() const { return this->autoRerunTimes_ != nullptr;};
    void deleteAutoRerunTimes() { this->autoRerunTimes_ = nullptr;};
    inline int32_t getAutoRerunTimes() const { DARABONBA_PTR_GET_DEFAULT(autoRerunTimes_, 0) };
    inline CreateFileRequest& setAutoRerunTimes(int32_t autoRerunTimes) { DARABONBA_PTR_SET_VALUE(autoRerunTimes_, autoRerunTimes) };


    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string getConnectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline CreateFileRequest& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateFileRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // createFolderIfNotExists Field Functions 
    bool hasCreateFolderIfNotExists() const { return this->createFolderIfNotExists_ != nullptr;};
    void deleteCreateFolderIfNotExists() { this->createFolderIfNotExists_ = nullptr;};
    inline bool getCreateFolderIfNotExists() const { DARABONBA_PTR_GET_DEFAULT(createFolderIfNotExists_, false) };
    inline CreateFileRequest& setCreateFolderIfNotExists(bool createFolderIfNotExists) { DARABONBA_PTR_SET_VALUE(createFolderIfNotExists_, createFolderIfNotExists) };


    // cronExpress Field Functions 
    bool hasCronExpress() const { return this->cronExpress_ != nullptr;};
    void deleteCronExpress() { this->cronExpress_ = nullptr;};
    inline string getCronExpress() const { DARABONBA_PTR_GET_DEFAULT(cronExpress_, "") };
    inline CreateFileRequest& setCronExpress(string cronExpress) { DARABONBA_PTR_SET_VALUE(cronExpress_, cronExpress) };


    // cycleType Field Functions 
    bool hasCycleType() const { return this->cycleType_ != nullptr;};
    void deleteCycleType() { this->cycleType_ = nullptr;};
    inline string getCycleType() const { DARABONBA_PTR_GET_DEFAULT(cycleType_, "") };
    inline CreateFileRequest& setCycleType(string cycleType) { DARABONBA_PTR_SET_VALUE(cycleType_, cycleType) };


    // dependentNodeIdList Field Functions 
    bool hasDependentNodeIdList() const { return this->dependentNodeIdList_ != nullptr;};
    void deleteDependentNodeIdList() { this->dependentNodeIdList_ = nullptr;};
    inline string getDependentNodeIdList() const { DARABONBA_PTR_GET_DEFAULT(dependentNodeIdList_, "") };
    inline CreateFileRequest& setDependentNodeIdList(string dependentNodeIdList) { DARABONBA_PTR_SET_VALUE(dependentNodeIdList_, dependentNodeIdList) };


    // dependentType Field Functions 
    bool hasDependentType() const { return this->dependentType_ != nullptr;};
    void deleteDependentType() { this->dependentType_ = nullptr;};
    inline string getDependentType() const { DARABONBA_PTR_GET_DEFAULT(dependentType_, "") };
    inline CreateFileRequest& setDependentType(string dependentType) { DARABONBA_PTR_SET_VALUE(dependentType_, dependentType) };


    // endEffectDate Field Functions 
    bool hasEndEffectDate() const { return this->endEffectDate_ != nullptr;};
    void deleteEndEffectDate() { this->endEffectDate_ = nullptr;};
    inline int64_t getEndEffectDate() const { DARABONBA_PTR_GET_DEFAULT(endEffectDate_, 0L) };
    inline CreateFileRequest& setEndEffectDate(int64_t endEffectDate) { DARABONBA_PTR_SET_VALUE(endEffectDate_, endEffectDate) };


    // fileDescription Field Functions 
    bool hasFileDescription() const { return this->fileDescription_ != nullptr;};
    void deleteFileDescription() { this->fileDescription_ = nullptr;};
    inline string getFileDescription() const { DARABONBA_PTR_GET_DEFAULT(fileDescription_, "") };
    inline CreateFileRequest& setFileDescription(string fileDescription) { DARABONBA_PTR_SET_VALUE(fileDescription_, fileDescription) };


    // fileFolderPath Field Functions 
    bool hasFileFolderPath() const { return this->fileFolderPath_ != nullptr;};
    void deleteFileFolderPath() { this->fileFolderPath_ = nullptr;};
    inline string getFileFolderPath() const { DARABONBA_PTR_GET_DEFAULT(fileFolderPath_, "") };
    inline CreateFileRequest& setFileFolderPath(string fileFolderPath) { DARABONBA_PTR_SET_VALUE(fileFolderPath_, fileFolderPath) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreateFileRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline int32_t getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0) };
    inline CreateFileRequest& setFileType(int32_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // ignoreParentSkipRunningProperty Field Functions 
    bool hasIgnoreParentSkipRunningProperty() const { return this->ignoreParentSkipRunningProperty_ != nullptr;};
    void deleteIgnoreParentSkipRunningProperty() { this->ignoreParentSkipRunningProperty_ = nullptr;};
    inline bool getIgnoreParentSkipRunningProperty() const { DARABONBA_PTR_GET_DEFAULT(ignoreParentSkipRunningProperty_, false) };
    inline CreateFileRequest& setIgnoreParentSkipRunningProperty(bool ignoreParentSkipRunningProperty) { DARABONBA_PTR_SET_VALUE(ignoreParentSkipRunningProperty_, ignoreParentSkipRunningProperty) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateFileRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // inputList Field Functions 
    bool hasInputList() const { return this->inputList_ != nullptr;};
    void deleteInputList() { this->inputList_ = nullptr;};
    inline string getInputList() const { DARABONBA_PTR_GET_DEFAULT(inputList_, "") };
    inline CreateFileRequest& setInputList(string inputList) { DARABONBA_PTR_SET_VALUE(inputList_, inputList) };


    // inputParameters Field Functions 
    bool hasInputParameters() const { return this->inputParameters_ != nullptr;};
    void deleteInputParameters() { this->inputParameters_ = nullptr;};
    inline string getInputParameters() const { DARABONBA_PTR_GET_DEFAULT(inputParameters_, "") };
    inline CreateFileRequest& setInputParameters(string inputParameters) { DARABONBA_PTR_SET_VALUE(inputParameters_, inputParameters) };


    // outputList Field Functions 
    bool hasOutputList() const { return this->outputList_ != nullptr;};
    void deleteOutputList() { this->outputList_ = nullptr;};
    inline string getOutputList() const { DARABONBA_PTR_GET_DEFAULT(outputList_, "") };
    inline CreateFileRequest& setOutputList(string outputList) { DARABONBA_PTR_SET_VALUE(outputList_, outputList) };


    // outputParameters Field Functions 
    bool hasOutputParameters() const { return this->outputParameters_ != nullptr;};
    void deleteOutputParameters() { this->outputParameters_ = nullptr;};
    inline string getOutputParameters() const { DARABONBA_PTR_GET_DEFAULT(outputParameters_, "") };
    inline CreateFileRequest& setOutputParameters(string outputParameters) { DARABONBA_PTR_SET_VALUE(outputParameters_, outputParameters) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline CreateFileRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // paraValue Field Functions 
    bool hasParaValue() const { return this->paraValue_ != nullptr;};
    void deleteParaValue() { this->paraValue_ = nullptr;};
    inline string getParaValue() const { DARABONBA_PTR_GET_DEFAULT(paraValue_, "") };
    inline CreateFileRequest& setParaValue(string paraValue) { DARABONBA_PTR_SET_VALUE(paraValue_, paraValue) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateFileRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectIdentifier Field Functions 
    bool hasProjectIdentifier() const { return this->projectIdentifier_ != nullptr;};
    void deleteProjectIdentifier() { this->projectIdentifier_ = nullptr;};
    inline string getProjectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(projectIdentifier_, "") };
    inline CreateFileRequest& setProjectIdentifier(string projectIdentifier) { DARABONBA_PTR_SET_VALUE(projectIdentifier_, projectIdentifier) };


    // rerunMode Field Functions 
    bool hasRerunMode() const { return this->rerunMode_ != nullptr;};
    void deleteRerunMode() { this->rerunMode_ = nullptr;};
    inline string getRerunMode() const { DARABONBA_PTR_GET_DEFAULT(rerunMode_, "") };
    inline CreateFileRequest& setRerunMode(string rerunMode) { DARABONBA_PTR_SET_VALUE(rerunMode_, rerunMode) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline int64_t getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, 0L) };
    inline CreateFileRequest& setResourceGroupId(int64_t resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceGroupIdentifier Field Functions 
    bool hasResourceGroupIdentifier() const { return this->resourceGroupIdentifier_ != nullptr;};
    void deleteResourceGroupIdentifier() { this->resourceGroupIdentifier_ = nullptr;};
    inline string getResourceGroupIdentifier() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdentifier_, "") };
    inline CreateFileRequest& setResourceGroupIdentifier(string resourceGroupIdentifier) { DARABONBA_PTR_SET_VALUE(resourceGroupIdentifier_, resourceGroupIdentifier) };


    // schedulerType Field Functions 
    bool hasSchedulerType() const { return this->schedulerType_ != nullptr;};
    void deleteSchedulerType() { this->schedulerType_ = nullptr;};
    inline string getSchedulerType() const { DARABONBA_PTR_GET_DEFAULT(schedulerType_, "") };
    inline CreateFileRequest& setSchedulerType(string schedulerType) { DARABONBA_PTR_SET_VALUE(schedulerType_, schedulerType) };


    // startEffectDate Field Functions 
    bool hasStartEffectDate() const { return this->startEffectDate_ != nullptr;};
    void deleteStartEffectDate() { this->startEffectDate_ = nullptr;};
    inline int64_t getStartEffectDate() const { DARABONBA_PTR_GET_DEFAULT(startEffectDate_, 0L) };
    inline CreateFileRequest& setStartEffectDate(int64_t startEffectDate) { DARABONBA_PTR_SET_VALUE(startEffectDate_, startEffectDate) };


    // startImmediately Field Functions 
    bool hasStartImmediately() const { return this->startImmediately_ != nullptr;};
    void deleteStartImmediately() { this->startImmediately_ = nullptr;};
    inline bool getStartImmediately() const { DARABONBA_PTR_GET_DEFAULT(startImmediately_, false) };
    inline CreateFileRequest& setStartImmediately(bool startImmediately) { DARABONBA_PTR_SET_VALUE(startImmediately_, startImmediately) };


    // stop Field Functions 
    bool hasStop() const { return this->stop_ != nullptr;};
    void deleteStop() { this->stop_ = nullptr;};
    inline bool getStop() const { DARABONBA_PTR_GET_DEFAULT(stop_, false) };
    inline CreateFileRequest& setStop(bool stop) { DARABONBA_PTR_SET_VALUE(stop_, stop) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline CreateFileRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The advanced settings of the task.
    // 
    // This parameter corresponds to the **Advanced Settings** in the right-side navigation pane of the edit page for EMR Spark Streaming and EMR Streaming SQL Data Studio tasks in the [DataWorks console](https://workbench.data.aliyun.com/console).
    // 
    // Currently, only EMR Spark Streaming and EMR Streaming SQL tasks support this parameter, and the parameter value must be in JSON format.
    shared_ptr<string> advancedSettings_ {};
    // Specifies whether the scheduling configuration takes effect immediately after the file is published.
    shared_ptr<bool> applyScheduleImmediately_ {};
    // Specifies whether to enable automatic parsing for the file. Valid values:
    // - true: Automatically parses the code in the file.
    // - false: Does not automatically parse the code in the file.
    // 
    // This parameter corresponds to the code parsing setting in **Schedule Settings > Scheduling Dependencies** for a Data Studio task in the [DataWorks console](https://workbench.data.aliyun.com/console).
    shared_ptr<bool> autoParsing_ {};
    // The interval between automatic reruns after a failure, in milliseconds.
    // Maximum value: 1800000 (30 minutes).
    // 
    // This parameter corresponds to the **Rerun Interval** setting in **Schedule Settings > Time Attributes > Automatic Rerun after Failure** for a Data Studio task in the [DataWorks console](https://workbench.data.aliyun.com/console).
    // The time unit for **Rerun Interval** in the console is minutes. Convert the time accordingly when you call this operation.
    shared_ptr<int32_t> autoRerunIntervalMillis_ {};
    // The maximum number of automatic reruns after an error occurs.
    // Maximum value: 10.
    shared_ptr<int32_t> autoRerunTimes_ {};
    // The data source connected when the task is run after the file is published as a task.
    // 
    // You can call the [UpdateDataSource](https://help.aliyun.com/document_detail/211432.html) operation to obtain the list of available data sources in the workspace.
    shared_ptr<string> connectionName_ {};
    // The code content of the file. The code format varies based on the code type (fileType) of the file.
    // You can find a task of the corresponding type in Operation Center, right-click the task, and select View Code to view the specific code format.
    shared_ptr<string> content_ {};
    // Specifies whether to automatically create the directory specified by the FileFolderPath parameter if the directory does not exist. Valid values:
    // 
    // - true: Automatically creates the directory if it does not exist.
    // - false: The call fails if the directory does not exist.
    shared_ptr<bool> createFolderIfNotExists_ {};
    // The cron expression for periodic scheduling. This parameter corresponds to the **Schedule Settings > Time Property > Cron Expression** setting for a Data Studio task in the [DataWorks console](https://workbench.data.aliyun.com/console). After you configure the **Scheduling Cycle** and **timed scheduling time**, DataWorks automatically generates the corresponding cron expression.
    // 
    // Examples:
    // - timed scheduling at 05:30 every day: `00 30 05 * * ?`
    // 
    // - timed scheduling at the 15th minute of every hour: `00 15 00-23/1 * * ?`
    // 
    // - Schedule the task every 10 minutes: `00 00/10 * * * ?`
    // 
    // - Schedule the task every 10 minutes from 08:00 to 17:00 every day: `00 00-59/10 8-17 * * * ?`
    // 
    // - Automatically schedule the task at 00:20 on the 1st day of every month: `00 20 00 1 * ?`
    // 
    // - Schedule the task every 3 months starting from 00:10 on January 1: `00 10 00 1 1-12/3 ?`
    // 
    // - Automatically schedule the task at 00:05 every Tuesday and Friday: `00 05 00 * * 2,5`
    // 
    // Due to the rules of the DataWorks scheduling system, cron expressions have the following limits:
    // 
    // - The minimum scheduling interval is 5 minutes.
    // 
    // - The earliest scheduling time every day is 00:05.
    shared_ptr<string> cronExpress_ {};
    // The type of the scheduling cycle. Valid values: NOT_DAY (minutes and hours) and DAY (days, weeks, and months).
    // 
    // This parameter corresponds to the **Schedule Settings > Time Attributes > Schedule Cycle** setting for a Data Studio task in the [DataWorks console](https://workbench.data.aliyun.com/console).
    shared_ptr<string> cycleType_ {};
    // The IDs of the nodes on which the current file depends when the DependentType parameter settings are USER_DEFINE. Separate multiple node IDs with commas (,).
    // 
    // This parameter corresponds to the Settings when you set **Schedule Settings > Scheduling Dependencies** to **Cross-cycle Dependencies (formerly Previous Cycle)** and select **Other Nodes** for a Data Studio task in the [DataWorks console](https://workbench.data.aliyun.com/console).
    shared_ptr<string> dependentNodeIdList_ {};
    // The dependency on the previous cycle. Valid values:
    // 
    // - SELF: Depends on the current node.
    // - CHILD: Depends on the first-level child nodes.
    // - USER_DEFINE: Depends on other nodes.
    // - NONE: Does not depend on the previous cycle.   
    // - USER_DEFINE_AND_SELF: Depends on a combination of the current node and other nodes across cycles.
    // - CHILD_AND_SELF: Depends on a combination of the first-level child nodes and the current node across cycles.
    shared_ptr<string> dependentType_ {};
    // The timestamp in milliseconds when automatic scheduling stops.
    // 
    // This parameter corresponds to the end time in milliseconds configured in **Schedule Settings > Time Attributes > Effective Date** for a Data Studio task in the [DataWorks console](https://workbench.data.aliyun.com/console).
    shared_ptr<int64_t> endEffectDate_ {};
    // The description of the file.
    shared_ptr<string> fileDescription_ {};
    // The file path.
    shared_ptr<string> fileFolderPath_ {};
    // The name of the file.
    // 
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    // The code type of the file.
    // Different file types have different code formats. For more information, see [DataWorks node types](https://help.aliyun.com/document_detail/600169.html).
    // You can call the [ListFileType](https://help.aliyun.com/document_detail/212428.html) operation to query the code type of the file.
    // 
    // This parameter is required.
    shared_ptr<int32_t> fileType_ {};
    // Specifies whether to inherit the dry-run property from the previous cycle. Valid values:
    // 
    // - true: Inherits the dry-run property from the previous cycle.
    // 
    // - false: Does not inherit the dry-run property from the previous cycle.
    shared_ptr<bool> ignoreParentSkipRunningProperty_ {};
    // The ID of the custom image.
    shared_ptr<string> imageId_ {};
    // The output names of the upstream files on which the current file depends. Separate multiple output names with commas (,).
    // 
    // This parameter corresponds to the **Output Name of Upstream Node** setting in **Schedule Settings > Scheduling Dependencies** for a Data Studio task in the [DataWorks console](https://workbench.data.aliyun.com/console).
    shared_ptr<string> inputList_ {};
    // The context input parameters of the node. The parameter value is in JSON format. For the included fields, refer to the structure of the InputContextParameterList parameter in the response of the [GetFile](https://help.aliyun.com/document_detail/173954.html) operation.
    // 
    // This parameter corresponds to the **Schedule Settings > Node Context Parameters > Input Parameters of Current Node** setting for a Data Studio task in the [DataWorks console](https://workbench.data.aliyun.com/console).
    shared_ptr<string> inputParameters_ {};
    // The output of the file.
    // 
    // This parameter corresponds to the **Output Name of Current Node** setting in **Schedule Settings > Scheduling Dependencies** for a Data Studio task in the [DataWorks console](https://workbench.data.aliyun.com/console).
    shared_ptr<string> outputList_ {};
    // The context output parameters of the node. The parameter value is in JSON format. For the included fields, refer to the structure of the OutputContextParameterList parameter in the response of the [GetFile](https://help.aliyun.com/document_detail/173954.html) operation.
    // 
    // This parameter corresponds to the **Schedule Settings > Node Context Parameters > Output Parameters of Current Node** setting for a Data Studio task in the [DataWorks console](https://workbench.data.aliyun.com/console).
    shared_ptr<string> outputParameters_ {};
    // The Alibaba Cloud user ID of the file owner. If this parameter is left empty,
    // the Alibaba Cloud user ID of the caller is used by default.
    shared_ptr<string> owner_ {};
    // The scheduling parameters. Separate multiple parameters with spaces.
    // 
    // This parameter corresponds to the **Schedule Settings > Scheduling Parameters** setting for a Data Studio task in the [DataWorks console](https://workbench.data.aliyun.com/console). For more information, see [Scheduling parameters](https://help.aliyun.com/document_detail/137548.html).
    shared_ptr<string> paraValue_ {};
    // The ID of the DataWorks workspace. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace Management page to obtain the workspace ID.
    // You must specify either this parameter or the ProjectIdentifier parameter to determine the DataWorks workspace for this API call.
    shared_ptr<int64_t> projectId_ {};
    // The name of the DataWorks workspace. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace Management page to obtain the workspace name.
    // 
    // You must specify either this parameter or the ProjectId parameter to determine the DataWorks workspace for this API call.
    shared_ptr<string> projectIdentifier_ {};
    // The rerun policy. Valid values:
    // - ALL_ALLOWED: The task can be rerun after it succeeds or fails.
    // - FAILURE_ALLOWED: The task cannot be rerun after it succeeds, but can be rerun after it fails.
    // - ALL_DENIED: The task cannot be rerun regardless of whether it succeeds or fails.
    // 
    // This parameter corresponds to the **Rerun Policy** setting in **Schedule Settings > Time Attributes > Rerun Policy** for a Data Studio task in the [DataWorks console](https://workbench.data.aliyun.com/console).
    shared_ptr<string> rerunMode_ {};
    // **[Deprecated]** Do not use this field.
    shared_ptr<int64_t> resourceGroupId_ {};
    // The resource group used to run the task after the file is published as a task. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console),
    // go to the Workspace Management page, and click **Resource Groups** in the left-side navigation pane to obtain the ID of the resource group bound to the current workspace.
    shared_ptr<string> resourceGroupIdentifier_ {};
    // The scheduling type. Valid values:
    // 
    // - NORMAL: Normal scheduling task.
    // - MANUAL: Manual task. It is not run on a daily schedule and corresponds to a node in a manual business flow.
    // - PAUSE: Paused task.
    // - SKIP: Dry-run task. It is run on a daily schedule, but its status is directly set to successful when the scheduling is triggered.
    shared_ptr<string> schedulerType_ {};
    // The timestamp in milliseconds when automatic scheduling starts.
    // 
    // This parameter corresponds to the start time in milliseconds configured in **Schedule Settings > Time Attributes > Effective Date** for a Data Studio task in the [DataWorks console](https://workbench.data.aliyun.com/console).
    shared_ptr<int64_t> startEffectDate_ {};
    // Specifies whether to start the task immediately after it is published.
    // 
    // This parameter corresponds to the **Configuration > Time Attributes > Start Mode** setting in the right-side navigation pane of the edit page for EMR Spark Streaming and EMR Streaming SQL Data Studio tasks in the [DataWorks console](https://workbench.data.aliyun.com/console).
    shared_ptr<bool> startImmediately_ {};
    // Specifies whether to pause scheduling. Valid values:
    // - true: Pauses scheduling.
    // - false: Does not pause scheduling.
    // 
    // This parameter corresponds to setting **Schedule Settings > Time Attributes > Schedule Type** to **Pause Scheduling** for a Data Studio task in the [DataWorks console](https://workbench.data.aliyun.com/console).
    shared_ptr<bool> stop_ {};
    // The timeout definition in the scheduling configuration.
    shared_ptr<int32_t> timeout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
