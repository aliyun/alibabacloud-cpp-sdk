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
    virtual bool empty() const override { this->advancedSettings_ != nullptr
        && this->applyScheduleImmediately_ != nullptr && this->autoParsing_ != nullptr && this->autoRerunIntervalMillis_ != nullptr && this->autoRerunTimes_ != nullptr && this->connectionName_ != nullptr
        && this->content_ != nullptr && this->createFolderIfNotExists_ != nullptr && this->cronExpress_ != nullptr && this->cycleType_ != nullptr && this->dependentNodeIdList_ != nullptr
        && this->dependentType_ != nullptr && this->endEffectDate_ != nullptr && this->fileDescription_ != nullptr && this->fileFolderPath_ != nullptr && this->fileName_ != nullptr
        && this->fileType_ != nullptr && this->ignoreParentSkipRunningProperty_ != nullptr && this->imageId_ != nullptr && this->inputList_ != nullptr && this->inputParameters_ != nullptr
        && this->outputParameters_ != nullptr && this->owner_ != nullptr && this->paraValue_ != nullptr && this->projectId_ != nullptr && this->projectIdentifier_ != nullptr
        && this->rerunMode_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceGroupIdentifier_ != nullptr && this->schedulerType_ != nullptr && this->startEffectDate_ != nullptr
        && this->startImmediately_ != nullptr && this->stop_ != nullptr && this->timeout_ != nullptr; };
    // advancedSettings Field Functions 
    bool hasAdvancedSettings() const { return this->advancedSettings_ != nullptr;};
    void deleteAdvancedSettings() { this->advancedSettings_ = nullptr;};
    inline string advancedSettings() const { DARABONBA_PTR_GET_DEFAULT(advancedSettings_, "") };
    inline CreateFileRequest& setAdvancedSettings(string advancedSettings) { DARABONBA_PTR_SET_VALUE(advancedSettings_, advancedSettings) };


    // applyScheduleImmediately Field Functions 
    bool hasApplyScheduleImmediately() const { return this->applyScheduleImmediately_ != nullptr;};
    void deleteApplyScheduleImmediately() { this->applyScheduleImmediately_ = nullptr;};
    inline bool applyScheduleImmediately() const { DARABONBA_PTR_GET_DEFAULT(applyScheduleImmediately_, false) };
    inline CreateFileRequest& setApplyScheduleImmediately(bool applyScheduleImmediately) { DARABONBA_PTR_SET_VALUE(applyScheduleImmediately_, applyScheduleImmediately) };


    // autoParsing Field Functions 
    bool hasAutoParsing() const { return this->autoParsing_ != nullptr;};
    void deleteAutoParsing() { this->autoParsing_ = nullptr;};
    inline bool autoParsing() const { DARABONBA_PTR_GET_DEFAULT(autoParsing_, false) };
    inline CreateFileRequest& setAutoParsing(bool autoParsing) { DARABONBA_PTR_SET_VALUE(autoParsing_, autoParsing) };


    // autoRerunIntervalMillis Field Functions 
    bool hasAutoRerunIntervalMillis() const { return this->autoRerunIntervalMillis_ != nullptr;};
    void deleteAutoRerunIntervalMillis() { this->autoRerunIntervalMillis_ = nullptr;};
    inline int32_t autoRerunIntervalMillis() const { DARABONBA_PTR_GET_DEFAULT(autoRerunIntervalMillis_, 0) };
    inline CreateFileRequest& setAutoRerunIntervalMillis(int32_t autoRerunIntervalMillis) { DARABONBA_PTR_SET_VALUE(autoRerunIntervalMillis_, autoRerunIntervalMillis) };


    // autoRerunTimes Field Functions 
    bool hasAutoRerunTimes() const { return this->autoRerunTimes_ != nullptr;};
    void deleteAutoRerunTimes() { this->autoRerunTimes_ = nullptr;};
    inline int32_t autoRerunTimes() const { DARABONBA_PTR_GET_DEFAULT(autoRerunTimes_, 0) };
    inline CreateFileRequest& setAutoRerunTimes(int32_t autoRerunTimes) { DARABONBA_PTR_SET_VALUE(autoRerunTimes_, autoRerunTimes) };


    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string connectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline CreateFileRequest& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateFileRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // createFolderIfNotExists Field Functions 
    bool hasCreateFolderIfNotExists() const { return this->createFolderIfNotExists_ != nullptr;};
    void deleteCreateFolderIfNotExists() { this->createFolderIfNotExists_ = nullptr;};
    inline bool createFolderIfNotExists() const { DARABONBA_PTR_GET_DEFAULT(createFolderIfNotExists_, false) };
    inline CreateFileRequest& setCreateFolderIfNotExists(bool createFolderIfNotExists) { DARABONBA_PTR_SET_VALUE(createFolderIfNotExists_, createFolderIfNotExists) };


    // cronExpress Field Functions 
    bool hasCronExpress() const { return this->cronExpress_ != nullptr;};
    void deleteCronExpress() { this->cronExpress_ = nullptr;};
    inline string cronExpress() const { DARABONBA_PTR_GET_DEFAULT(cronExpress_, "") };
    inline CreateFileRequest& setCronExpress(string cronExpress) { DARABONBA_PTR_SET_VALUE(cronExpress_, cronExpress) };


    // cycleType Field Functions 
    bool hasCycleType() const { return this->cycleType_ != nullptr;};
    void deleteCycleType() { this->cycleType_ = nullptr;};
    inline string cycleType() const { DARABONBA_PTR_GET_DEFAULT(cycleType_, "") };
    inline CreateFileRequest& setCycleType(string cycleType) { DARABONBA_PTR_SET_VALUE(cycleType_, cycleType) };


    // dependentNodeIdList Field Functions 
    bool hasDependentNodeIdList() const { return this->dependentNodeIdList_ != nullptr;};
    void deleteDependentNodeIdList() { this->dependentNodeIdList_ = nullptr;};
    inline string dependentNodeIdList() const { DARABONBA_PTR_GET_DEFAULT(dependentNodeIdList_, "") };
    inline CreateFileRequest& setDependentNodeIdList(string dependentNodeIdList) { DARABONBA_PTR_SET_VALUE(dependentNodeIdList_, dependentNodeIdList) };


    // dependentType Field Functions 
    bool hasDependentType() const { return this->dependentType_ != nullptr;};
    void deleteDependentType() { this->dependentType_ = nullptr;};
    inline string dependentType() const { DARABONBA_PTR_GET_DEFAULT(dependentType_, "") };
    inline CreateFileRequest& setDependentType(string dependentType) { DARABONBA_PTR_SET_VALUE(dependentType_, dependentType) };


    // endEffectDate Field Functions 
    bool hasEndEffectDate() const { return this->endEffectDate_ != nullptr;};
    void deleteEndEffectDate() { this->endEffectDate_ = nullptr;};
    inline int64_t endEffectDate() const { DARABONBA_PTR_GET_DEFAULT(endEffectDate_, 0L) };
    inline CreateFileRequest& setEndEffectDate(int64_t endEffectDate) { DARABONBA_PTR_SET_VALUE(endEffectDate_, endEffectDate) };


    // fileDescription Field Functions 
    bool hasFileDescription() const { return this->fileDescription_ != nullptr;};
    void deleteFileDescription() { this->fileDescription_ = nullptr;};
    inline string fileDescription() const { DARABONBA_PTR_GET_DEFAULT(fileDescription_, "") };
    inline CreateFileRequest& setFileDescription(string fileDescription) { DARABONBA_PTR_SET_VALUE(fileDescription_, fileDescription) };


    // fileFolderPath Field Functions 
    bool hasFileFolderPath() const { return this->fileFolderPath_ != nullptr;};
    void deleteFileFolderPath() { this->fileFolderPath_ = nullptr;};
    inline string fileFolderPath() const { DARABONBA_PTR_GET_DEFAULT(fileFolderPath_, "") };
    inline CreateFileRequest& setFileFolderPath(string fileFolderPath) { DARABONBA_PTR_SET_VALUE(fileFolderPath_, fileFolderPath) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreateFileRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline int32_t fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0) };
    inline CreateFileRequest& setFileType(int32_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // ignoreParentSkipRunningProperty Field Functions 
    bool hasIgnoreParentSkipRunningProperty() const { return this->ignoreParentSkipRunningProperty_ != nullptr;};
    void deleteIgnoreParentSkipRunningProperty() { this->ignoreParentSkipRunningProperty_ = nullptr;};
    inline bool ignoreParentSkipRunningProperty() const { DARABONBA_PTR_GET_DEFAULT(ignoreParentSkipRunningProperty_, false) };
    inline CreateFileRequest& setIgnoreParentSkipRunningProperty(bool ignoreParentSkipRunningProperty) { DARABONBA_PTR_SET_VALUE(ignoreParentSkipRunningProperty_, ignoreParentSkipRunningProperty) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateFileRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // inputList Field Functions 
    bool hasInputList() const { return this->inputList_ != nullptr;};
    void deleteInputList() { this->inputList_ = nullptr;};
    inline string inputList() const { DARABONBA_PTR_GET_DEFAULT(inputList_, "") };
    inline CreateFileRequest& setInputList(string inputList) { DARABONBA_PTR_SET_VALUE(inputList_, inputList) };


    // inputParameters Field Functions 
    bool hasInputParameters() const { return this->inputParameters_ != nullptr;};
    void deleteInputParameters() { this->inputParameters_ = nullptr;};
    inline string inputParameters() const { DARABONBA_PTR_GET_DEFAULT(inputParameters_, "") };
    inline CreateFileRequest& setInputParameters(string inputParameters) { DARABONBA_PTR_SET_VALUE(inputParameters_, inputParameters) };


    // outputParameters Field Functions 
    bool hasOutputParameters() const { return this->outputParameters_ != nullptr;};
    void deleteOutputParameters() { this->outputParameters_ = nullptr;};
    inline string outputParameters() const { DARABONBA_PTR_GET_DEFAULT(outputParameters_, "") };
    inline CreateFileRequest& setOutputParameters(string outputParameters) { DARABONBA_PTR_SET_VALUE(outputParameters_, outputParameters) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline CreateFileRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // paraValue Field Functions 
    bool hasParaValue() const { return this->paraValue_ != nullptr;};
    void deleteParaValue() { this->paraValue_ = nullptr;};
    inline string paraValue() const { DARABONBA_PTR_GET_DEFAULT(paraValue_, "") };
    inline CreateFileRequest& setParaValue(string paraValue) { DARABONBA_PTR_SET_VALUE(paraValue_, paraValue) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateFileRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectIdentifier Field Functions 
    bool hasProjectIdentifier() const { return this->projectIdentifier_ != nullptr;};
    void deleteProjectIdentifier() { this->projectIdentifier_ = nullptr;};
    inline string projectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(projectIdentifier_, "") };
    inline CreateFileRequest& setProjectIdentifier(string projectIdentifier) { DARABONBA_PTR_SET_VALUE(projectIdentifier_, projectIdentifier) };


    // rerunMode Field Functions 
    bool hasRerunMode() const { return this->rerunMode_ != nullptr;};
    void deleteRerunMode() { this->rerunMode_ = nullptr;};
    inline string rerunMode() const { DARABONBA_PTR_GET_DEFAULT(rerunMode_, "") };
    inline CreateFileRequest& setRerunMode(string rerunMode) { DARABONBA_PTR_SET_VALUE(rerunMode_, rerunMode) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline int64_t resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, 0L) };
    inline CreateFileRequest& setResourceGroupId(int64_t resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceGroupIdentifier Field Functions 
    bool hasResourceGroupIdentifier() const { return this->resourceGroupIdentifier_ != nullptr;};
    void deleteResourceGroupIdentifier() { this->resourceGroupIdentifier_ = nullptr;};
    inline string resourceGroupIdentifier() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdentifier_, "") };
    inline CreateFileRequest& setResourceGroupIdentifier(string resourceGroupIdentifier) { DARABONBA_PTR_SET_VALUE(resourceGroupIdentifier_, resourceGroupIdentifier) };


    // schedulerType Field Functions 
    bool hasSchedulerType() const { return this->schedulerType_ != nullptr;};
    void deleteSchedulerType() { this->schedulerType_ = nullptr;};
    inline string schedulerType() const { DARABONBA_PTR_GET_DEFAULT(schedulerType_, "") };
    inline CreateFileRequest& setSchedulerType(string schedulerType) { DARABONBA_PTR_SET_VALUE(schedulerType_, schedulerType) };


    // startEffectDate Field Functions 
    bool hasStartEffectDate() const { return this->startEffectDate_ != nullptr;};
    void deleteStartEffectDate() { this->startEffectDate_ = nullptr;};
    inline int64_t startEffectDate() const { DARABONBA_PTR_GET_DEFAULT(startEffectDate_, 0L) };
    inline CreateFileRequest& setStartEffectDate(int64_t startEffectDate) { DARABONBA_PTR_SET_VALUE(startEffectDate_, startEffectDate) };


    // startImmediately Field Functions 
    bool hasStartImmediately() const { return this->startImmediately_ != nullptr;};
    void deleteStartImmediately() { this->startImmediately_ = nullptr;};
    inline bool startImmediately() const { DARABONBA_PTR_GET_DEFAULT(startImmediately_, false) };
    inline CreateFileRequest& setStartImmediately(bool startImmediately) { DARABONBA_PTR_SET_VALUE(startImmediately_, startImmediately) };


    // stop Field Functions 
    bool hasStop() const { return this->stop_ != nullptr;};
    void deleteStop() { this->stop_ = nullptr;};
    inline bool stop() const { DARABONBA_PTR_GET_DEFAULT(stop_, false) };
    inline CreateFileRequest& setStop(bool stop) { DARABONBA_PTR_SET_VALUE(stop_, stop) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline CreateFileRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    std::shared_ptr<string> advancedSettings_ = nullptr;
    std::shared_ptr<bool> applyScheduleImmediately_ = nullptr;
    std::shared_ptr<bool> autoParsing_ = nullptr;
    std::shared_ptr<int32_t> autoRerunIntervalMillis_ = nullptr;
    std::shared_ptr<int32_t> autoRerunTimes_ = nullptr;
    std::shared_ptr<string> connectionName_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<bool> createFolderIfNotExists_ = nullptr;
    std::shared_ptr<string> cronExpress_ = nullptr;
    std::shared_ptr<string> cycleType_ = nullptr;
    std::shared_ptr<string> dependentNodeIdList_ = nullptr;
    std::shared_ptr<string> dependentType_ = nullptr;
    std::shared_ptr<int64_t> endEffectDate_ = nullptr;
    std::shared_ptr<string> fileDescription_ = nullptr;
    std::shared_ptr<string> fileFolderPath_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> fileType_ = nullptr;
    std::shared_ptr<bool> ignoreParentSkipRunningProperty_ = nullptr;
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<string> inputList_ = nullptr;
    std::shared_ptr<string> inputParameters_ = nullptr;
    std::shared_ptr<string> outputParameters_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> paraValue_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<string> projectIdentifier_ = nullptr;
    std::shared_ptr<string> rerunMode_ = nullptr;
    std::shared_ptr<int64_t> resourceGroupId_ = nullptr;
    // The resource group for the task deployed from the file. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the workspace configuration page. In the left-side navigation pane, click **Resource Group** to obtain the ID of the resource group associated with the current workspace.
    std::shared_ptr<string> resourceGroupIdentifier_ = nullptr;
    std::shared_ptr<string> schedulerType_ = nullptr;
    std::shared_ptr<int64_t> startEffectDate_ = nullptr;
    std::shared_ptr<bool> startImmediately_ = nullptr;
    std::shared_ptr<bool> stop_ = nullptr;
    std::shared_ptr<int32_t> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
