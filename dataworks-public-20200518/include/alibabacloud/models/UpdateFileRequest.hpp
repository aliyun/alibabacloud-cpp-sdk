// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedSettings, advancedSettings_);
      DARABONBA_PTR_TO_JSON(ApplyScheduleImmediately, applyScheduleImmediately_);
      DARABONBA_PTR_TO_JSON(AutoParsing, autoParsing_);
      DARABONBA_PTR_TO_JSON(AutoRerunIntervalMillis, autoRerunIntervalMillis_);
      DARABONBA_PTR_TO_JSON(AutoRerunTimes, autoRerunTimes_);
      DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(CronExpress, cronExpress_);
      DARABONBA_PTR_TO_JSON(CycleType, cycleType_);
      DARABONBA_PTR_TO_JSON(DependentNodeIdList, dependentNodeIdList_);
      DARABONBA_PTR_TO_JSON(DependentType, dependentType_);
      DARABONBA_PTR_TO_JSON(EndEffectDate, endEffectDate_);
      DARABONBA_PTR_TO_JSON(FileDescription, fileDescription_);
      DARABONBA_PTR_TO_JSON(FileFolderPath, fileFolderPath_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
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
      DARABONBA_PTR_TO_JSON(ResourceGroupIdentifier, resourceGroupIdentifier_);
      DARABONBA_PTR_TO_JSON(SchedulerType, schedulerType_);
      DARABONBA_PTR_TO_JSON(StartEffectDate, startEffectDate_);
      DARABONBA_PTR_TO_JSON(StartImmediately, startImmediately_);
      DARABONBA_PTR_TO_JSON(Stop, stop_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedSettings, advancedSettings_);
      DARABONBA_PTR_FROM_JSON(ApplyScheduleImmediately, applyScheduleImmediately_);
      DARABONBA_PTR_FROM_JSON(AutoParsing, autoParsing_);
      DARABONBA_PTR_FROM_JSON(AutoRerunIntervalMillis, autoRerunIntervalMillis_);
      DARABONBA_PTR_FROM_JSON(AutoRerunTimes, autoRerunTimes_);
      DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(CronExpress, cronExpress_);
      DARABONBA_PTR_FROM_JSON(CycleType, cycleType_);
      DARABONBA_PTR_FROM_JSON(DependentNodeIdList, dependentNodeIdList_);
      DARABONBA_PTR_FROM_JSON(DependentType, dependentType_);
      DARABONBA_PTR_FROM_JSON(EndEffectDate, endEffectDate_);
      DARABONBA_PTR_FROM_JSON(FileDescription, fileDescription_);
      DARABONBA_PTR_FROM_JSON(FileFolderPath, fileFolderPath_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
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
      DARABONBA_PTR_FROM_JSON(ResourceGroupIdentifier, resourceGroupIdentifier_);
      DARABONBA_PTR_FROM_JSON(SchedulerType, schedulerType_);
      DARABONBA_PTR_FROM_JSON(StartEffectDate, startEffectDate_);
      DARABONBA_PTR_FROM_JSON(StartImmediately, startImmediately_);
      DARABONBA_PTR_FROM_JSON(Stop, stop_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    UpdateFileRequest() = default ;
    UpdateFileRequest(const UpdateFileRequest &) = default ;
    UpdateFileRequest(UpdateFileRequest &&) = default ;
    UpdateFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFileRequest() = default ;
    UpdateFileRequest& operator=(const UpdateFileRequest &) = default ;
    UpdateFileRequest& operator=(UpdateFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advancedSettings_ == nullptr
        && this->applyScheduleImmediately_ == nullptr && this->autoParsing_ == nullptr && this->autoRerunIntervalMillis_ == nullptr && this->autoRerunTimes_ == nullptr && this->connectionName_ == nullptr
        && this->content_ == nullptr && this->cronExpress_ == nullptr && this->cycleType_ == nullptr && this->dependentNodeIdList_ == nullptr && this->dependentType_ == nullptr
        && this->endEffectDate_ == nullptr && this->fileDescription_ == nullptr && this->fileFolderPath_ == nullptr && this->fileId_ == nullptr && this->fileName_ == nullptr
        && this->ignoreParentSkipRunningProperty_ == nullptr && this->imageId_ == nullptr && this->inputList_ == nullptr && this->inputParameters_ == nullptr && this->outputList_ == nullptr
        && this->outputParameters_ == nullptr && this->owner_ == nullptr && this->paraValue_ == nullptr && this->projectId_ == nullptr && this->projectIdentifier_ == nullptr
        && this->rerunMode_ == nullptr && this->resourceGroupIdentifier_ == nullptr && this->schedulerType_ == nullptr && this->startEffectDate_ == nullptr && this->startImmediately_ == nullptr
        && this->stop_ == nullptr && this->timeout_ == nullptr; };
    // advancedSettings Field Functions 
    bool hasAdvancedSettings() const { return this->advancedSettings_ != nullptr;};
    void deleteAdvancedSettings() { this->advancedSettings_ = nullptr;};
    inline string getAdvancedSettings() const { DARABONBA_PTR_GET_DEFAULT(advancedSettings_, "") };
    inline UpdateFileRequest& setAdvancedSettings(string advancedSettings) { DARABONBA_PTR_SET_VALUE(advancedSettings_, advancedSettings) };


    // applyScheduleImmediately Field Functions 
    bool hasApplyScheduleImmediately() const { return this->applyScheduleImmediately_ != nullptr;};
    void deleteApplyScheduleImmediately() { this->applyScheduleImmediately_ = nullptr;};
    inline bool getApplyScheduleImmediately() const { DARABONBA_PTR_GET_DEFAULT(applyScheduleImmediately_, false) };
    inline UpdateFileRequest& setApplyScheduleImmediately(bool applyScheduleImmediately) { DARABONBA_PTR_SET_VALUE(applyScheduleImmediately_, applyScheduleImmediately) };


    // autoParsing Field Functions 
    bool hasAutoParsing() const { return this->autoParsing_ != nullptr;};
    void deleteAutoParsing() { this->autoParsing_ = nullptr;};
    inline bool getAutoParsing() const { DARABONBA_PTR_GET_DEFAULT(autoParsing_, false) };
    inline UpdateFileRequest& setAutoParsing(bool autoParsing) { DARABONBA_PTR_SET_VALUE(autoParsing_, autoParsing) };


    // autoRerunIntervalMillis Field Functions 
    bool hasAutoRerunIntervalMillis() const { return this->autoRerunIntervalMillis_ != nullptr;};
    void deleteAutoRerunIntervalMillis() { this->autoRerunIntervalMillis_ = nullptr;};
    inline int32_t getAutoRerunIntervalMillis() const { DARABONBA_PTR_GET_DEFAULT(autoRerunIntervalMillis_, 0) };
    inline UpdateFileRequest& setAutoRerunIntervalMillis(int32_t autoRerunIntervalMillis) { DARABONBA_PTR_SET_VALUE(autoRerunIntervalMillis_, autoRerunIntervalMillis) };


    // autoRerunTimes Field Functions 
    bool hasAutoRerunTimes() const { return this->autoRerunTimes_ != nullptr;};
    void deleteAutoRerunTimes() { this->autoRerunTimes_ = nullptr;};
    inline int32_t getAutoRerunTimes() const { DARABONBA_PTR_GET_DEFAULT(autoRerunTimes_, 0) };
    inline UpdateFileRequest& setAutoRerunTimes(int32_t autoRerunTimes) { DARABONBA_PTR_SET_VALUE(autoRerunTimes_, autoRerunTimes) };


    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string getConnectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline UpdateFileRequest& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateFileRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // cronExpress Field Functions 
    bool hasCronExpress() const { return this->cronExpress_ != nullptr;};
    void deleteCronExpress() { this->cronExpress_ = nullptr;};
    inline string getCronExpress() const { DARABONBA_PTR_GET_DEFAULT(cronExpress_, "") };
    inline UpdateFileRequest& setCronExpress(string cronExpress) { DARABONBA_PTR_SET_VALUE(cronExpress_, cronExpress) };


    // cycleType Field Functions 
    bool hasCycleType() const { return this->cycleType_ != nullptr;};
    void deleteCycleType() { this->cycleType_ = nullptr;};
    inline string getCycleType() const { DARABONBA_PTR_GET_DEFAULT(cycleType_, "") };
    inline UpdateFileRequest& setCycleType(string cycleType) { DARABONBA_PTR_SET_VALUE(cycleType_, cycleType) };


    // dependentNodeIdList Field Functions 
    bool hasDependentNodeIdList() const { return this->dependentNodeIdList_ != nullptr;};
    void deleteDependentNodeIdList() { this->dependentNodeIdList_ = nullptr;};
    inline string getDependentNodeIdList() const { DARABONBA_PTR_GET_DEFAULT(dependentNodeIdList_, "") };
    inline UpdateFileRequest& setDependentNodeIdList(string dependentNodeIdList) { DARABONBA_PTR_SET_VALUE(dependentNodeIdList_, dependentNodeIdList) };


    // dependentType Field Functions 
    bool hasDependentType() const { return this->dependentType_ != nullptr;};
    void deleteDependentType() { this->dependentType_ = nullptr;};
    inline string getDependentType() const { DARABONBA_PTR_GET_DEFAULT(dependentType_, "") };
    inline UpdateFileRequest& setDependentType(string dependentType) { DARABONBA_PTR_SET_VALUE(dependentType_, dependentType) };


    // endEffectDate Field Functions 
    bool hasEndEffectDate() const { return this->endEffectDate_ != nullptr;};
    void deleteEndEffectDate() { this->endEffectDate_ = nullptr;};
    inline int64_t getEndEffectDate() const { DARABONBA_PTR_GET_DEFAULT(endEffectDate_, 0L) };
    inline UpdateFileRequest& setEndEffectDate(int64_t endEffectDate) { DARABONBA_PTR_SET_VALUE(endEffectDate_, endEffectDate) };


    // fileDescription Field Functions 
    bool hasFileDescription() const { return this->fileDescription_ != nullptr;};
    void deleteFileDescription() { this->fileDescription_ = nullptr;};
    inline string getFileDescription() const { DARABONBA_PTR_GET_DEFAULT(fileDescription_, "") };
    inline UpdateFileRequest& setFileDescription(string fileDescription) { DARABONBA_PTR_SET_VALUE(fileDescription_, fileDescription) };


    // fileFolderPath Field Functions 
    bool hasFileFolderPath() const { return this->fileFolderPath_ != nullptr;};
    void deleteFileFolderPath() { this->fileFolderPath_ = nullptr;};
    inline string getFileFolderPath() const { DARABONBA_PTR_GET_DEFAULT(fileFolderPath_, "") };
    inline UpdateFileRequest& setFileFolderPath(string fileFolderPath) { DARABONBA_PTR_SET_VALUE(fileFolderPath_, fileFolderPath) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline UpdateFileRequest& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline UpdateFileRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // ignoreParentSkipRunningProperty Field Functions 
    bool hasIgnoreParentSkipRunningProperty() const { return this->ignoreParentSkipRunningProperty_ != nullptr;};
    void deleteIgnoreParentSkipRunningProperty() { this->ignoreParentSkipRunningProperty_ = nullptr;};
    inline bool getIgnoreParentSkipRunningProperty() const { DARABONBA_PTR_GET_DEFAULT(ignoreParentSkipRunningProperty_, false) };
    inline UpdateFileRequest& setIgnoreParentSkipRunningProperty(bool ignoreParentSkipRunningProperty) { DARABONBA_PTR_SET_VALUE(ignoreParentSkipRunningProperty_, ignoreParentSkipRunningProperty) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline UpdateFileRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // inputList Field Functions 
    bool hasInputList() const { return this->inputList_ != nullptr;};
    void deleteInputList() { this->inputList_ = nullptr;};
    inline string getInputList() const { DARABONBA_PTR_GET_DEFAULT(inputList_, "") };
    inline UpdateFileRequest& setInputList(string inputList) { DARABONBA_PTR_SET_VALUE(inputList_, inputList) };


    // inputParameters Field Functions 
    bool hasInputParameters() const { return this->inputParameters_ != nullptr;};
    void deleteInputParameters() { this->inputParameters_ = nullptr;};
    inline string getInputParameters() const { DARABONBA_PTR_GET_DEFAULT(inputParameters_, "") };
    inline UpdateFileRequest& setInputParameters(string inputParameters) { DARABONBA_PTR_SET_VALUE(inputParameters_, inputParameters) };


    // outputList Field Functions 
    bool hasOutputList() const { return this->outputList_ != nullptr;};
    void deleteOutputList() { this->outputList_ = nullptr;};
    inline string getOutputList() const { DARABONBA_PTR_GET_DEFAULT(outputList_, "") };
    inline UpdateFileRequest& setOutputList(string outputList) { DARABONBA_PTR_SET_VALUE(outputList_, outputList) };


    // outputParameters Field Functions 
    bool hasOutputParameters() const { return this->outputParameters_ != nullptr;};
    void deleteOutputParameters() { this->outputParameters_ = nullptr;};
    inline string getOutputParameters() const { DARABONBA_PTR_GET_DEFAULT(outputParameters_, "") };
    inline UpdateFileRequest& setOutputParameters(string outputParameters) { DARABONBA_PTR_SET_VALUE(outputParameters_, outputParameters) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline UpdateFileRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // paraValue Field Functions 
    bool hasParaValue() const { return this->paraValue_ != nullptr;};
    void deleteParaValue() { this->paraValue_ = nullptr;};
    inline string getParaValue() const { DARABONBA_PTR_GET_DEFAULT(paraValue_, "") };
    inline UpdateFileRequest& setParaValue(string paraValue) { DARABONBA_PTR_SET_VALUE(paraValue_, paraValue) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateFileRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectIdentifier Field Functions 
    bool hasProjectIdentifier() const { return this->projectIdentifier_ != nullptr;};
    void deleteProjectIdentifier() { this->projectIdentifier_ = nullptr;};
    inline string getProjectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(projectIdentifier_, "") };
    inline UpdateFileRequest& setProjectIdentifier(string projectIdentifier) { DARABONBA_PTR_SET_VALUE(projectIdentifier_, projectIdentifier) };


    // rerunMode Field Functions 
    bool hasRerunMode() const { return this->rerunMode_ != nullptr;};
    void deleteRerunMode() { this->rerunMode_ = nullptr;};
    inline string getRerunMode() const { DARABONBA_PTR_GET_DEFAULT(rerunMode_, "") };
    inline UpdateFileRequest& setRerunMode(string rerunMode) { DARABONBA_PTR_SET_VALUE(rerunMode_, rerunMode) };


    // resourceGroupIdentifier Field Functions 
    bool hasResourceGroupIdentifier() const { return this->resourceGroupIdentifier_ != nullptr;};
    void deleteResourceGroupIdentifier() { this->resourceGroupIdentifier_ = nullptr;};
    inline string getResourceGroupIdentifier() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdentifier_, "") };
    inline UpdateFileRequest& setResourceGroupIdentifier(string resourceGroupIdentifier) { DARABONBA_PTR_SET_VALUE(resourceGroupIdentifier_, resourceGroupIdentifier) };


    // schedulerType Field Functions 
    bool hasSchedulerType() const { return this->schedulerType_ != nullptr;};
    void deleteSchedulerType() { this->schedulerType_ = nullptr;};
    inline string getSchedulerType() const { DARABONBA_PTR_GET_DEFAULT(schedulerType_, "") };
    inline UpdateFileRequest& setSchedulerType(string schedulerType) { DARABONBA_PTR_SET_VALUE(schedulerType_, schedulerType) };


    // startEffectDate Field Functions 
    bool hasStartEffectDate() const { return this->startEffectDate_ != nullptr;};
    void deleteStartEffectDate() { this->startEffectDate_ = nullptr;};
    inline int64_t getStartEffectDate() const { DARABONBA_PTR_GET_DEFAULT(startEffectDate_, 0L) };
    inline UpdateFileRequest& setStartEffectDate(int64_t startEffectDate) { DARABONBA_PTR_SET_VALUE(startEffectDate_, startEffectDate) };


    // startImmediately Field Functions 
    bool hasStartImmediately() const { return this->startImmediately_ != nullptr;};
    void deleteStartImmediately() { this->startImmediately_ = nullptr;};
    inline bool getStartImmediately() const { DARABONBA_PTR_GET_DEFAULT(startImmediately_, false) };
    inline UpdateFileRequest& setStartImmediately(bool startImmediately) { DARABONBA_PTR_SET_VALUE(startImmediately_, startImmediately) };


    // stop Field Functions 
    bool hasStop() const { return this->stop_ != nullptr;};
    void deleteStop() { this->stop_ = nullptr;};
    inline bool getStop() const { DARABONBA_PTR_GET_DEFAULT(stop_, false) };
    inline UpdateFileRequest& setStop(bool stop) { DARABONBA_PTR_SET_VALUE(stop_, stop) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline UpdateFileRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The advanced settings of the node.
    // 
    // This parameter corresponds to the Advanced Settings in the right-side navigation pane on the editing page for EMR Spark Streaming and EMR Streaming SQL data development nodes in the [DataWorks console](https://workbench.data.aliyun.com/console).
    // 
    // Currently, only EMR Spark Streaming and EMR Streaming SQL nodes support this parameter. The parameter value is in JSON format.
    shared_ptr<string> advancedSettings_ {};
    // Specifies whether the scheduling configuration takes effect immediately after publishing.
    shared_ptr<bool> applyScheduleImmediately_ {};
    // Specifies whether to enable the automatic parsing feature for the file. Valid values:
    // - true: The file automatically parses code.
    // - false: The file does not automatically parse code.
    // 
    // This parameter corresponds to the Code Parsing setting when you select Same Cycle under Scheduling Configuration > Scheduling Dependency for a data development node in the [DataWorks console](https://workbench.data.aliyun.com/console).
    shared_ptr<bool> autoParsing_ {};
    // The interval between automatic reruns upon an error, in milliseconds. The maximum value is 1800000 milliseconds (30 minutes).
    // 
    // This parameter corresponds to the Rerun Interval setting under Scheduling Configuration > Time Properties > Auto Rerun upon Error for a data development node in the [DataWorks console](https://workbench.data.aliyun.com/console).
    // The time unit for Rerun Interval in the console is minutes. Convert the time accordingly when calling this operation.
    shared_ptr<int32_t> autoRerunIntervalMillis_ {};
    // The number of automatic reruns after an error occurs.
    shared_ptr<int32_t> autoRerunTimes_ {};
    // The identifier of the data source used when the node corresponding to the file runs. You can call the [ListDataSources](https://help.aliyun.com/document_detail/211431.html) operation to obtain the list of available data sources.
    shared_ptr<string> connectionName_ {};
    // The code content of the file. Files of different code types (fileType) have different code formats. In Operation Center, right-click a node of the corresponding type and select View Code to view the specific code format.
    shared_ptr<string> content_ {};
    // The cron expression for timed scheduling. This parameter corresponds to the cron Expression setting under Scheduling Configuration > Time Property for a data development node in the [DataWorks console](https://workbench.data.aliyun.com/console). After you configure the Scheduling Epoch and Timed Scheduling time, DataWorks automatically generates the corresponding cron expression.
    // 
    // Examples:
    // 
    // - Timed scheduling at 05:30 every day: `00 30 05 * * ?`.
    // 
    // - Timed scheduling at the 15th minute of every hour: `00 15 * * * ?`.
    // 
    // - Schedule every 10 minutes: `00 00/10 * * * ?`.
    // 
    // - Schedule every 10 minutes from 08:00 to 17:00 every day: `00 00-59/10 8-23 * * * ?`.
    // 
    // - Timed scheduling at 00:20 on the 1st of every month: `00 20 00 1 * ?`.
    // 
    // - Schedule every 3 months starting from 00:10 on January 1: `00 10 00 1 1-12/3 ?`.
    // 
    // - Timed scheduling at 00:05 every Tuesday and Friday: `00 05 00 * * 2,5`.
    // 
    // 
    // The cron expression has the following limits due to the DataWorks scheduling system rules:
    // 
    // - The minimum scheduling interval is 5 minutes.
    // 
    // - The earliest scheduling time each day is 00:05.
    shared_ptr<string> cronExpress_ {};
    // The type of the scheduling cycle. Valid values: NOT_DAY (minute or hour) and DAY (day, week, or month).
    // 
    // This parameter corresponds to the Scheduling Cycle setting under Scheduling Configuration > Time Properties for a data development node in the [DataWorks console](https://workbench.data.aliyun.com/console).
    shared_ptr<string> cycleType_ {};
    // The IDs of the nodes on which the current file depends when DependentType is set to USER_DEFINE. Separate multiple node IDs with commas (,).
    // 
    // This parameter corresponds to the Settings when you select Other Nodes as the dependency after configuring Scheduling Configuration > Scheduling Dependency to Previous Epoch for a data development node in the [DataWorks console](https://workbench.data.aliyun.com/console). This is part of the parameter settings for scheduling dependencies.
    shared_ptr<string> dependentNodeIdList_ {};
    // The mode in which the node depends on the previous cycle. Valid values:
    // - SELF: The dependency is set to the current node.
    // - CHILD: The dependency is set to first-level child nodes.
    // - USER_DEFINE: The dependency is set to other nodes.
    // - NONE: No dependency is selected. The node does not depend on the previous cycle.
    shared_ptr<string> dependentType_ {};
    // The timestamp in milliseconds when automatic scheduling stops.
    // 
    // This parameter corresponds to the end time in milliseconds under Scheduling Configuration > Time Properties > Effective Date for a data development node in the [DataWorks console](https://workbench.data.aliyun.com/console).
    shared_ptr<int64_t> endEffectDate_ {};
    // The description of the file.
    shared_ptr<string> fileDescription_ {};
    // The path of the file.
    shared_ptr<string> fileFolderPath_ {};
    // The ID of the file. You can call the [ListFiles](https://help.aliyun.com/document_detail/173942.html) operation to obtain the file ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> fileId_ {};
    // The name of the file. You can modify the file name by setting FileName to a new value.
    // For example, call the [ListFiles](https://help.aliyun.com/document_detail/173942.html) operation to query the file ID in the target folder, and then call the [UpdateFile](https://help.aliyun.com/document_detail/173951.html) operation to specify the file ID for the FileId parameter and configure the FileName parameter to rename the file.
    shared_ptr<string> fileName_ {};
    // Specifies whether to skip the dry-run property of the upstream node under Scheduling Configuration > Previous Cycle.
    shared_ptr<bool> ignoreParentSkipRunningProperty_ {};
    // The custom image ID.
    shared_ptr<string> imageId_ {};
    // The output names of the upstream files on which the current file depends. Separate multiple output names with commas (,).
    // 
    // This parameter corresponds to the Parent Node Output Name setting when you select Same Cycle under Scheduling Configuration > Scheduling Dependency for a data development node in the [DataWorks console](https://workbench.data.aliyun.com/console).
    // 
    // > This parameter is required when you create a batch synchronization node by calling CreateDISyncTask and UpdateFile.
    shared_ptr<string> inputList_ {};
    // The input context parameters of the node. The parameter value is in JSON format. For the fields included, refer to the InputContextParameterList parameter structure in the response of the [GetFile](https://help.aliyun.com/document_detail/173954.html) operation.
    // 
    // This parameter corresponds to the Input Parameters of Current Node setting under Scheduling Configuration > Node Context for a data development node in the [DataWorks console](https://workbench.data.aliyun.com/console).
    shared_ptr<string> inputParameters_ {};
    // The output of the file.
    // 
    // This parameter corresponds to the Output Name of Current Node setting when you select Same Cycle under Scheduling Configuration > Scheduling Dependency for a data development node in the [DataWorks console](https://workbench.data.aliyun.com/console).
    shared_ptr<string> outputList_ {};
    // The output context parameters of the node. The parameter value is in JSON format. For the fields included, refer to the OutputContextParameterList parameter structure in the response of the [GetFile](https://help.aliyun.com/document_detail/173954.html) operation.
    // 
    // This parameter corresponds to the Output Parameters of Current Node setting under Scheduling Configuration > Node Context for a data development node in the [DataWorks console](https://workbench.data.aliyun.com/console).
    shared_ptr<string> outputParameters_ {};
    // The user ID of the file owner.
    shared_ptr<string> owner_ {};
    // The scheduling parameters.
    // 
    // This parameter corresponds to the Parameters setting under Scheduling Configuration for a data development node in the [DataWorks console](https://workbench.data.aliyun.com/console). For more information, see [Scheduling parameters](https://help.aliyun.com/document_detail/137548.html).
    shared_ptr<string> paraValue_ {};
    // The ID of the DataWorks workspace. You can logon to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Storage Management page to obtain the ID.
    shared_ptr<int64_t> projectId_ {};
    // The name of the DataWorks workspace. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace Settings page to obtain the workspace name.
    // 
    // You must specify either this parameter or ProjectId to determine the DataWorks workspace for this API call.
    shared_ptr<string> projectIdentifier_ {};
    // The rerun property. Valid values:
    // - ALL_ALLOWED: The node can be rerun regardless of whether it runs successfully or fails.
    // - FAILURE_ALLOWED: The node can be rerun only after it fails.
    // - ALL_DENIED: The node cannot be rerun regardless of whether it runs successfully or fails.
    // 
    // This parameter corresponds to the Rerun Property setting under Scheduling Configuration > Time Properties > Rerun Property for a data development node in the [DataWorks console](https://workbench.data.aliyun.com/console).
    shared_ptr<string> rerunMode_ {};
    // The schedule resource used when the file is published as a node and the node runs. You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/173913.html) operation to obtain the list of available resource groups for the workspace.
    shared_ptr<string> resourceGroupIdentifier_ {};
    // The scheduling type. Valid values:
    // - NORMAL: A normal scheduling node.
    // - MANUAL: A manual node that is not scheduled on a daily basis. This corresponds to nodes in a manual workflow.
    // - PAUSE: A paused node.
    // - SKIP: A dry-run node that is scheduled on a daily basis but is directly set to successful when scheduling starts.
    shared_ptr<string> schedulerType_ {};
    // The timestamp in milliseconds when automatic scheduling starts.
    // 
    // This parameter corresponds to the start time in milliseconds under Scheduling Configuration > Time Properties > Effective Date for a data development node in the [DataWorks console](https://workbench.data.aliyun.com/console).
    shared_ptr<int64_t> startEffectDate_ {};
    // Specifies whether to start the node immediately after publishing. Valid values:
    // - true: Starts immediately after publishing.
    // - false: Does not start after publishing.
    // 
    // This parameter corresponds to the Start Mode setting under Configuration > Time Properties in the right-side navigation pane on the editing page for EMR Spark Streaming and EMR Streaming SQL data development nodes in the [DataWorks console](https://workbench.data.aliyun.com/console).
    shared_ptr<bool> startImmediately_ {};
    // Specifies whether to pause scheduling. Valid values:
    // - true: Pauses scheduling.
    // - false: Does not pause scheduling.
    // 
    // This parameter corresponds to the setting when Scheduling Type is set to Pause Scheduling under Scheduling Configuration > Time Properties > Scheduling Type for a data development node in the [DataWorks console](https://workbench.data.aliyun.com/console).
    shared_ptr<bool> stop_ {};
    // The timeout setting for the scheduling configuration.
    shared_ptr<int32_t> timeout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
