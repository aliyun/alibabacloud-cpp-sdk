// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILERESPONSEBODYDATANODECONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_GETFILERESPONSEBODYDATANODECONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetFileResponseBodyDataNodeConfigurationInputList.hpp>
#include <alibabacloud/models/GetFileResponseBodyDataNodeConfigurationInputParameters.hpp>
#include <alibabacloud/models/GetFileResponseBodyDataNodeConfigurationOutputList.hpp>
#include <alibabacloud/models/GetFileResponseBodyDataNodeConfigurationOutputParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetFileResponseBodyDataNodeConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileResponseBodyDataNodeConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyScheduleImmediately, applyScheduleImmediately_);
      DARABONBA_PTR_TO_JSON(AutoRerunIntervalMillis, autoRerunIntervalMillis_);
      DARABONBA_PTR_TO_JSON(AutoRerunTimes, autoRerunTimes_);
      DARABONBA_PTR_TO_JSON(CronExpress, cronExpress_);
      DARABONBA_PTR_TO_JSON(CycleType, cycleType_);
      DARABONBA_PTR_TO_JSON(DependentNodeIdList, dependentNodeIdList_);
      DARABONBA_PTR_TO_JSON(DependentType, dependentType_);
      DARABONBA_PTR_TO_JSON(EndEffectDate, endEffectDate_);
      DARABONBA_PTR_TO_JSON(IgnoreParentSkipRunningProperty, ignoreParentSkipRunningProperty_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InputList, inputList_);
      DARABONBA_PTR_TO_JSON(InputParameters, inputParameters_);
      DARABONBA_PTR_TO_JSON(OutputList, outputList_);
      DARABONBA_PTR_TO_JSON(OutputParameters, outputParameters_);
      DARABONBA_PTR_TO_JSON(ParaValue, paraValue_);
      DARABONBA_PTR_TO_JSON(RerunMode, rerunMode_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SchedulerType, schedulerType_);
      DARABONBA_PTR_TO_JSON(StartEffectDate, startEffectDate_);
      DARABONBA_PTR_TO_JSON(StartImmediately, startImmediately_);
      DARABONBA_PTR_TO_JSON(Stop, stop_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileResponseBodyDataNodeConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyScheduleImmediately, applyScheduleImmediately_);
      DARABONBA_PTR_FROM_JSON(AutoRerunIntervalMillis, autoRerunIntervalMillis_);
      DARABONBA_PTR_FROM_JSON(AutoRerunTimes, autoRerunTimes_);
      DARABONBA_PTR_FROM_JSON(CronExpress, cronExpress_);
      DARABONBA_PTR_FROM_JSON(CycleType, cycleType_);
      DARABONBA_PTR_FROM_JSON(DependentNodeIdList, dependentNodeIdList_);
      DARABONBA_PTR_FROM_JSON(DependentType, dependentType_);
      DARABONBA_PTR_FROM_JSON(EndEffectDate, endEffectDate_);
      DARABONBA_PTR_FROM_JSON(IgnoreParentSkipRunningProperty, ignoreParentSkipRunningProperty_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InputList, inputList_);
      DARABONBA_PTR_FROM_JSON(InputParameters, inputParameters_);
      DARABONBA_PTR_FROM_JSON(OutputList, outputList_);
      DARABONBA_PTR_FROM_JSON(OutputParameters, outputParameters_);
      DARABONBA_PTR_FROM_JSON(ParaValue, paraValue_);
      DARABONBA_PTR_FROM_JSON(RerunMode, rerunMode_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SchedulerType, schedulerType_);
      DARABONBA_PTR_FROM_JSON(StartEffectDate, startEffectDate_);
      DARABONBA_PTR_FROM_JSON(StartImmediately, startImmediately_);
      DARABONBA_PTR_FROM_JSON(Stop, stop_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    GetFileResponseBodyDataNodeConfiguration() = default ;
    GetFileResponseBodyDataNodeConfiguration(const GetFileResponseBodyDataNodeConfiguration &) = default ;
    GetFileResponseBodyDataNodeConfiguration(GetFileResponseBodyDataNodeConfiguration &&) = default ;
    GetFileResponseBodyDataNodeConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileResponseBodyDataNodeConfiguration() = default ;
    GetFileResponseBodyDataNodeConfiguration& operator=(const GetFileResponseBodyDataNodeConfiguration &) = default ;
    GetFileResponseBodyDataNodeConfiguration& operator=(GetFileResponseBodyDataNodeConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyScheduleImmediately_ != nullptr
        && this->autoRerunIntervalMillis_ != nullptr && this->autoRerunTimes_ != nullptr && this->cronExpress_ != nullptr && this->cycleType_ != nullptr && this->dependentNodeIdList_ != nullptr
        && this->dependentType_ != nullptr && this->endEffectDate_ != nullptr && this->ignoreParentSkipRunningProperty_ != nullptr && this->imageId_ != nullptr && this->inputList_ != nullptr
        && this->inputParameters_ != nullptr && this->outputList_ != nullptr && this->outputParameters_ != nullptr && this->paraValue_ != nullptr && this->rerunMode_ != nullptr
        && this->resourceGroupId_ != nullptr && this->schedulerType_ != nullptr && this->startEffectDate_ != nullptr && this->startImmediately_ != nullptr && this->stop_ != nullptr
        && this->timeout_ != nullptr; };
    // applyScheduleImmediately Field Functions 
    bool hasApplyScheduleImmediately() const { return this->applyScheduleImmediately_ != nullptr;};
    void deleteApplyScheduleImmediately() { this->applyScheduleImmediately_ = nullptr;};
    inline string applyScheduleImmediately() const { DARABONBA_PTR_GET_DEFAULT(applyScheduleImmediately_, "") };
    inline GetFileResponseBodyDataNodeConfiguration& setApplyScheduleImmediately(string applyScheduleImmediately) { DARABONBA_PTR_SET_VALUE(applyScheduleImmediately_, applyScheduleImmediately) };


    // autoRerunIntervalMillis Field Functions 
    bool hasAutoRerunIntervalMillis() const { return this->autoRerunIntervalMillis_ != nullptr;};
    void deleteAutoRerunIntervalMillis() { this->autoRerunIntervalMillis_ = nullptr;};
    inline int32_t autoRerunIntervalMillis() const { DARABONBA_PTR_GET_DEFAULT(autoRerunIntervalMillis_, 0) };
    inline GetFileResponseBodyDataNodeConfiguration& setAutoRerunIntervalMillis(int32_t autoRerunIntervalMillis) { DARABONBA_PTR_SET_VALUE(autoRerunIntervalMillis_, autoRerunIntervalMillis) };


    // autoRerunTimes Field Functions 
    bool hasAutoRerunTimes() const { return this->autoRerunTimes_ != nullptr;};
    void deleteAutoRerunTimes() { this->autoRerunTimes_ = nullptr;};
    inline int32_t autoRerunTimes() const { DARABONBA_PTR_GET_DEFAULT(autoRerunTimes_, 0) };
    inline GetFileResponseBodyDataNodeConfiguration& setAutoRerunTimes(int32_t autoRerunTimes) { DARABONBA_PTR_SET_VALUE(autoRerunTimes_, autoRerunTimes) };


    // cronExpress Field Functions 
    bool hasCronExpress() const { return this->cronExpress_ != nullptr;};
    void deleteCronExpress() { this->cronExpress_ = nullptr;};
    inline string cronExpress() const { DARABONBA_PTR_GET_DEFAULT(cronExpress_, "") };
    inline GetFileResponseBodyDataNodeConfiguration& setCronExpress(string cronExpress) { DARABONBA_PTR_SET_VALUE(cronExpress_, cronExpress) };


    // cycleType Field Functions 
    bool hasCycleType() const { return this->cycleType_ != nullptr;};
    void deleteCycleType() { this->cycleType_ = nullptr;};
    inline string cycleType() const { DARABONBA_PTR_GET_DEFAULT(cycleType_, "") };
    inline GetFileResponseBodyDataNodeConfiguration& setCycleType(string cycleType) { DARABONBA_PTR_SET_VALUE(cycleType_, cycleType) };


    // dependentNodeIdList Field Functions 
    bool hasDependentNodeIdList() const { return this->dependentNodeIdList_ != nullptr;};
    void deleteDependentNodeIdList() { this->dependentNodeIdList_ = nullptr;};
    inline string dependentNodeIdList() const { DARABONBA_PTR_GET_DEFAULT(dependentNodeIdList_, "") };
    inline GetFileResponseBodyDataNodeConfiguration& setDependentNodeIdList(string dependentNodeIdList) { DARABONBA_PTR_SET_VALUE(dependentNodeIdList_, dependentNodeIdList) };


    // dependentType Field Functions 
    bool hasDependentType() const { return this->dependentType_ != nullptr;};
    void deleteDependentType() { this->dependentType_ = nullptr;};
    inline string dependentType() const { DARABONBA_PTR_GET_DEFAULT(dependentType_, "") };
    inline GetFileResponseBodyDataNodeConfiguration& setDependentType(string dependentType) { DARABONBA_PTR_SET_VALUE(dependentType_, dependentType) };


    // endEffectDate Field Functions 
    bool hasEndEffectDate() const { return this->endEffectDate_ != nullptr;};
    void deleteEndEffectDate() { this->endEffectDate_ = nullptr;};
    inline int64_t endEffectDate() const { DARABONBA_PTR_GET_DEFAULT(endEffectDate_, 0L) };
    inline GetFileResponseBodyDataNodeConfiguration& setEndEffectDate(int64_t endEffectDate) { DARABONBA_PTR_SET_VALUE(endEffectDate_, endEffectDate) };


    // ignoreParentSkipRunningProperty Field Functions 
    bool hasIgnoreParentSkipRunningProperty() const { return this->ignoreParentSkipRunningProperty_ != nullptr;};
    void deleteIgnoreParentSkipRunningProperty() { this->ignoreParentSkipRunningProperty_ = nullptr;};
    inline string ignoreParentSkipRunningProperty() const { DARABONBA_PTR_GET_DEFAULT(ignoreParentSkipRunningProperty_, "") };
    inline GetFileResponseBodyDataNodeConfiguration& setIgnoreParentSkipRunningProperty(string ignoreParentSkipRunningProperty) { DARABONBA_PTR_SET_VALUE(ignoreParentSkipRunningProperty_, ignoreParentSkipRunningProperty) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline GetFileResponseBodyDataNodeConfiguration& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // inputList Field Functions 
    bool hasInputList() const { return this->inputList_ != nullptr;};
    void deleteInputList() { this->inputList_ = nullptr;};
    inline const vector<Models::GetFileResponseBodyDataNodeConfigurationInputList> & inputList() const { DARABONBA_PTR_GET_CONST(inputList_, vector<Models::GetFileResponseBodyDataNodeConfigurationInputList>) };
    inline vector<Models::GetFileResponseBodyDataNodeConfigurationInputList> inputList() { DARABONBA_PTR_GET(inputList_, vector<Models::GetFileResponseBodyDataNodeConfigurationInputList>) };
    inline GetFileResponseBodyDataNodeConfiguration& setInputList(const vector<Models::GetFileResponseBodyDataNodeConfigurationInputList> & inputList) { DARABONBA_PTR_SET_VALUE(inputList_, inputList) };
    inline GetFileResponseBodyDataNodeConfiguration& setInputList(vector<Models::GetFileResponseBodyDataNodeConfigurationInputList> && inputList) { DARABONBA_PTR_SET_RVALUE(inputList_, inputList) };


    // inputParameters Field Functions 
    bool hasInputParameters() const { return this->inputParameters_ != nullptr;};
    void deleteInputParameters() { this->inputParameters_ = nullptr;};
    inline const vector<Models::GetFileResponseBodyDataNodeConfigurationInputParameters> & inputParameters() const { DARABONBA_PTR_GET_CONST(inputParameters_, vector<Models::GetFileResponseBodyDataNodeConfigurationInputParameters>) };
    inline vector<Models::GetFileResponseBodyDataNodeConfigurationInputParameters> inputParameters() { DARABONBA_PTR_GET(inputParameters_, vector<Models::GetFileResponseBodyDataNodeConfigurationInputParameters>) };
    inline GetFileResponseBodyDataNodeConfiguration& setInputParameters(const vector<Models::GetFileResponseBodyDataNodeConfigurationInputParameters> & inputParameters) { DARABONBA_PTR_SET_VALUE(inputParameters_, inputParameters) };
    inline GetFileResponseBodyDataNodeConfiguration& setInputParameters(vector<Models::GetFileResponseBodyDataNodeConfigurationInputParameters> && inputParameters) { DARABONBA_PTR_SET_RVALUE(inputParameters_, inputParameters) };


    // outputList Field Functions 
    bool hasOutputList() const { return this->outputList_ != nullptr;};
    void deleteOutputList() { this->outputList_ = nullptr;};
    inline const vector<Models::GetFileResponseBodyDataNodeConfigurationOutputList> & outputList() const { DARABONBA_PTR_GET_CONST(outputList_, vector<Models::GetFileResponseBodyDataNodeConfigurationOutputList>) };
    inline vector<Models::GetFileResponseBodyDataNodeConfigurationOutputList> outputList() { DARABONBA_PTR_GET(outputList_, vector<Models::GetFileResponseBodyDataNodeConfigurationOutputList>) };
    inline GetFileResponseBodyDataNodeConfiguration& setOutputList(const vector<Models::GetFileResponseBodyDataNodeConfigurationOutputList> & outputList) { DARABONBA_PTR_SET_VALUE(outputList_, outputList) };
    inline GetFileResponseBodyDataNodeConfiguration& setOutputList(vector<Models::GetFileResponseBodyDataNodeConfigurationOutputList> && outputList) { DARABONBA_PTR_SET_RVALUE(outputList_, outputList) };


    // outputParameters Field Functions 
    bool hasOutputParameters() const { return this->outputParameters_ != nullptr;};
    void deleteOutputParameters() { this->outputParameters_ = nullptr;};
    inline const vector<Models::GetFileResponseBodyDataNodeConfigurationOutputParameters> & outputParameters() const { DARABONBA_PTR_GET_CONST(outputParameters_, vector<Models::GetFileResponseBodyDataNodeConfigurationOutputParameters>) };
    inline vector<Models::GetFileResponseBodyDataNodeConfigurationOutputParameters> outputParameters() { DARABONBA_PTR_GET(outputParameters_, vector<Models::GetFileResponseBodyDataNodeConfigurationOutputParameters>) };
    inline GetFileResponseBodyDataNodeConfiguration& setOutputParameters(const vector<Models::GetFileResponseBodyDataNodeConfigurationOutputParameters> & outputParameters) { DARABONBA_PTR_SET_VALUE(outputParameters_, outputParameters) };
    inline GetFileResponseBodyDataNodeConfiguration& setOutputParameters(vector<Models::GetFileResponseBodyDataNodeConfigurationOutputParameters> && outputParameters) { DARABONBA_PTR_SET_RVALUE(outputParameters_, outputParameters) };


    // paraValue Field Functions 
    bool hasParaValue() const { return this->paraValue_ != nullptr;};
    void deleteParaValue() { this->paraValue_ = nullptr;};
    inline string paraValue() const { DARABONBA_PTR_GET_DEFAULT(paraValue_, "") };
    inline GetFileResponseBodyDataNodeConfiguration& setParaValue(string paraValue) { DARABONBA_PTR_SET_VALUE(paraValue_, paraValue) };


    // rerunMode Field Functions 
    bool hasRerunMode() const { return this->rerunMode_ != nullptr;};
    void deleteRerunMode() { this->rerunMode_ = nullptr;};
    inline string rerunMode() const { DARABONBA_PTR_GET_DEFAULT(rerunMode_, "") };
    inline GetFileResponseBodyDataNodeConfiguration& setRerunMode(string rerunMode) { DARABONBA_PTR_SET_VALUE(rerunMode_, rerunMode) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline int64_t resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, 0L) };
    inline GetFileResponseBodyDataNodeConfiguration& setResourceGroupId(int64_t resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // schedulerType Field Functions 
    bool hasSchedulerType() const { return this->schedulerType_ != nullptr;};
    void deleteSchedulerType() { this->schedulerType_ = nullptr;};
    inline string schedulerType() const { DARABONBA_PTR_GET_DEFAULT(schedulerType_, "") };
    inline GetFileResponseBodyDataNodeConfiguration& setSchedulerType(string schedulerType) { DARABONBA_PTR_SET_VALUE(schedulerType_, schedulerType) };


    // startEffectDate Field Functions 
    bool hasStartEffectDate() const { return this->startEffectDate_ != nullptr;};
    void deleteStartEffectDate() { this->startEffectDate_ = nullptr;};
    inline int64_t startEffectDate() const { DARABONBA_PTR_GET_DEFAULT(startEffectDate_, 0L) };
    inline GetFileResponseBodyDataNodeConfiguration& setStartEffectDate(int64_t startEffectDate) { DARABONBA_PTR_SET_VALUE(startEffectDate_, startEffectDate) };


    // startImmediately Field Functions 
    bool hasStartImmediately() const { return this->startImmediately_ != nullptr;};
    void deleteStartImmediately() { this->startImmediately_ = nullptr;};
    inline bool startImmediately() const { DARABONBA_PTR_GET_DEFAULT(startImmediately_, false) };
    inline GetFileResponseBodyDataNodeConfiguration& setStartImmediately(bool startImmediately) { DARABONBA_PTR_SET_VALUE(startImmediately_, startImmediately) };


    // stop Field Functions 
    bool hasStop() const { return this->stop_ != nullptr;};
    void deleteStop() { this->stop_ = nullptr;};
    inline bool stop() const { DARABONBA_PTR_GET_DEFAULT(stop_, false) };
    inline GetFileResponseBodyDataNodeConfiguration& setStop(bool stop) { DARABONBA_PTR_SET_VALUE(stop_, stop) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline GetFileResponseBodyDataNodeConfiguration& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // Indicates whether scheduling configurations immediately take effect after the deployment.
    std::shared_ptr<string> applyScheduleImmediately_ = nullptr;
    // The interval between automatic reruns after an error occurs. Unit: milliseconds.
    // 
    // This parameter corresponds to the Rerun interval parameter that is displayed after the Auto Rerun upon Failure check box is selected in the Schedule section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console). The interval that you specify in the DataWorks console is measured in minutes. Pay attention to the conversion between the units of time when you call the operation.
    std::shared_ptr<int32_t> autoRerunIntervalMillis_ = nullptr;
    // The number of automatic reruns that are allowed after an error occurs.
    std::shared_ptr<int32_t> autoRerunTimes_ = nullptr;
    // The cron expression that represents the periodic scheduling policy of the node.
    std::shared_ptr<string> cronExpress_ = nullptr;
    // The type of the scheduling cycle. Valid values: NOT_DAY and DAY. The value NOT_DAY indicates that the node is scheduled to run by minute or hour. The value DAY indicates that the node is scheduled to run by day, week, or month.
    // 
    // This parameter corresponds to the Scheduling Cycle parameter in the Schedule section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
    std::shared_ptr<string> cycleType_ = nullptr;
    // The ID of the node on which the node that corresponds to the file depends when the DependentType parameter is set to USER_DEFINE. Multiple IDs are separated by commas (,).
    // 
    // The value of this parameter is equivalent to the ID of the node that you specified after you select Previous Cycle and set Depend On to Other Nodes in the Dependencies section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
    std::shared_ptr<string> dependentNodeIdList_ = nullptr;
    // The type of the cross-cycle scheduling dependency of the node. Valid values:
    // 
    // *   SELF: The instance generated for the node in the current cycle depends on the instance generated for the node in the previous cycle.
    // *   CHILD: The instance generated for the node in the current cycle depends on the instances generated for the descendant nodes at the nearest level of the node in the previous cycle.
    // *   USER_DEFINE: The instance generated for the node in the current cycle depends on the instances generated for one or more specified nodes in the previous cycle.
    // *   NONE: No cross-cycle scheduling dependency type is selected for the node.
    std::shared_ptr<string> dependentType_ = nullptr;
    // The end of the time range for automatic scheduling. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // Configuring this parameter is equivalent to specifying an end time for the Validity Period parameter in the Schedule section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
    std::shared_ptr<int64_t> endEffectDate_ = nullptr;
    // Indicates whether the dry-run property of the ancestor nodes of the node is skipped. This parameter corresponds to the Skip the dry-run property of the ancestor node parameter that is displayed after you configure the Depend On parameter in the Dependencies section of the Properties tab on the DataStudio page in the DataWorks console.
    std::shared_ptr<string> ignoreParentSkipRunningProperty_ = nullptr;
    // The custom image ID.
    std::shared_ptr<string> imageId_ = nullptr;
    // The output information about the parent files on which the current file depends.
    std::shared_ptr<vector<Models::GetFileResponseBodyDataNodeConfigurationInputList>> inputList_ = nullptr;
    // The input parameters of the node.
    std::shared_ptr<vector<Models::GetFileResponseBodyDataNodeConfigurationInputParameters>> inputParameters_ = nullptr;
    // The output information about the current file.
    std::shared_ptr<vector<Models::GetFileResponseBodyDataNodeConfigurationOutputList>> outputList_ = nullptr;
    // The output parameters of the node.
    std::shared_ptr<vector<Models::GetFileResponseBodyDataNodeConfigurationOutputParameters>> outputParameters_ = nullptr;
    // The scheduling parameters of the node.
    // 
    // This parameter corresponds to the Scheduling Parameter section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console). For more information about the configurations of scheduling parameters, see [Configure scheduling parameters](https://help.aliyun.com/document_detail/137548.html).
    std::shared_ptr<string> paraValue_ = nullptr;
    // Indicates whether the node that corresponds to the file can be rerun. Valid values:
    // 
    // *   ALL_ALLOWED: The node can be rerun regardless of whether it is successfully run or fails to run.
    // *   FAILURE_ALLOWED: The node can be rerun only after it fails to run.
    // *   ALL_DENIED: The node cannot be rerun regardless of whether it is successfully run or fails to run.
    // 
    // This parameter corresponds to the Rerun parameter in the Schedule section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
    std::shared_ptr<string> rerunMode_ = nullptr;
    // The ID of the resource group that is used to run the node that corresponds to the file. You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/173913.html) operation to query the available resource groups in the workspace.
    std::shared_ptr<int64_t> resourceGroupId_ = nullptr;
    // The scheduling type of the node. Valid values:
    // 
    // *   NORMAL: The node is an auto triggered node.
    // *   MANUAL: The node is a manually triggered node. Manually triggered nodes cannot be automatically triggered. They correspond to the nodes in the Manually Triggered Workflows pane.
    // *   PAUSE: The node is a paused node.
    // *   SKIP: The node is a dry-run node. Dry-run nodes are started as scheduled, but the system sets the status of the nodes to successful when it starts to run them.
    std::shared_ptr<string> schedulerType_ = nullptr;
    // The beginning of the time range for automatic scheduling. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // Configuring this parameter is equivalent to specifying a start time for the Validity Period parameter in the Schedule section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
    std::shared_ptr<int64_t> startEffectDate_ = nullptr;
    // Indicates whether a node is immediately run after the node is deployed to the production environment.
    // 
    // This parameter is valid only for an EMR Spark Streaming node or an EMR Streaming SQL node. This parameter corresponds to the Start Method parameter in the Schedule section of the Configure tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
    std::shared_ptr<bool> startImmediately_ = nullptr;
    // Indicates whether the scheduling for the node is suspended Valid values:
    // 
    // *   true
    // *   false
    // 
    // This parameter corresponds to the Recurrence parameter in the Schedule section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
    std::shared_ptr<bool> stop_ = nullptr;
    // The timeout period.
    std::shared_ptr<int32_t> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
