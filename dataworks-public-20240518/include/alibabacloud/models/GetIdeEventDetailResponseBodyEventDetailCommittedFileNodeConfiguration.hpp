// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDEEVENTDETAILRESPONSEBODYEVENTDETAILCOMMITTEDFILENODECONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_GETIDEEVENTDETAILRESPONSEBODYEVENTDETAILCOMMITTEDFILENODECONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationInputList.hpp>
#include <alibabacloud/models/GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationOutputList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRerunIntervalMillis, autoRerunIntervalMillis_);
      DARABONBA_PTR_TO_JSON(AutoRerunTimes, autoRerunTimes_);
      DARABONBA_PTR_TO_JSON(CronExpress, cronExpress_);
      DARABONBA_PTR_TO_JSON(CycleType, cycleType_);
      DARABONBA_PTR_TO_JSON(DependentNodeIdList, dependentNodeIdList_);
      DARABONBA_PTR_TO_JSON(DependentType, dependentType_);
      DARABONBA_PTR_TO_JSON(InputList, inputList_);
      DARABONBA_PTR_TO_JSON(OutputList, outputList_);
      DARABONBA_PTR_TO_JSON(ParaValue, paraValue_);
      DARABONBA_PTR_TO_JSON(RerunMode, rerunMode_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SchedulerType, schedulerType_);
    };
    friend void from_json(const Darabonba::Json& j, GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRerunIntervalMillis, autoRerunIntervalMillis_);
      DARABONBA_PTR_FROM_JSON(AutoRerunTimes, autoRerunTimes_);
      DARABONBA_PTR_FROM_JSON(CronExpress, cronExpress_);
      DARABONBA_PTR_FROM_JSON(CycleType, cycleType_);
      DARABONBA_PTR_FROM_JSON(DependentNodeIdList, dependentNodeIdList_);
      DARABONBA_PTR_FROM_JSON(DependentType, dependentType_);
      DARABONBA_PTR_FROM_JSON(InputList, inputList_);
      DARABONBA_PTR_FROM_JSON(OutputList, outputList_);
      DARABONBA_PTR_FROM_JSON(ParaValue, paraValue_);
      DARABONBA_PTR_FROM_JSON(RerunMode, rerunMode_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SchedulerType, schedulerType_);
    };
    GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration() = default ;
    GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration(const GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration &) = default ;
    GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration(GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration &&) = default ;
    GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration() = default ;
    GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration& operator=(const GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration &) = default ;
    GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration& operator=(GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRerunIntervalMillis_ == nullptr
        && return this->autoRerunTimes_ == nullptr && return this->cronExpress_ == nullptr && return this->cycleType_ == nullptr && return this->dependentNodeIdList_ == nullptr && return this->dependentType_ == nullptr
        && return this->inputList_ == nullptr && return this->outputList_ == nullptr && return this->paraValue_ == nullptr && return this->rerunMode_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->schedulerType_ == nullptr; };
    // autoRerunIntervalMillis Field Functions 
    bool hasAutoRerunIntervalMillis() const { return this->autoRerunIntervalMillis_ != nullptr;};
    void deleteAutoRerunIntervalMillis() { this->autoRerunIntervalMillis_ = nullptr;};
    inline int64_t autoRerunIntervalMillis() const { DARABONBA_PTR_GET_DEFAULT(autoRerunIntervalMillis_, 0L) };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration& setAutoRerunIntervalMillis(int64_t autoRerunIntervalMillis) { DARABONBA_PTR_SET_VALUE(autoRerunIntervalMillis_, autoRerunIntervalMillis) };


    // autoRerunTimes Field Functions 
    bool hasAutoRerunTimes() const { return this->autoRerunTimes_ != nullptr;};
    void deleteAutoRerunTimes() { this->autoRerunTimes_ = nullptr;};
    inline int64_t autoRerunTimes() const { DARABONBA_PTR_GET_DEFAULT(autoRerunTimes_, 0L) };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration& setAutoRerunTimes(int64_t autoRerunTimes) { DARABONBA_PTR_SET_VALUE(autoRerunTimes_, autoRerunTimes) };


    // cronExpress Field Functions 
    bool hasCronExpress() const { return this->cronExpress_ != nullptr;};
    void deleteCronExpress() { this->cronExpress_ = nullptr;};
    inline string cronExpress() const { DARABONBA_PTR_GET_DEFAULT(cronExpress_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration& setCronExpress(string cronExpress) { DARABONBA_PTR_SET_VALUE(cronExpress_, cronExpress) };


    // cycleType Field Functions 
    bool hasCycleType() const { return this->cycleType_ != nullptr;};
    void deleteCycleType() { this->cycleType_ = nullptr;};
    inline string cycleType() const { DARABONBA_PTR_GET_DEFAULT(cycleType_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration& setCycleType(string cycleType) { DARABONBA_PTR_SET_VALUE(cycleType_, cycleType) };


    // dependentNodeIdList Field Functions 
    bool hasDependentNodeIdList() const { return this->dependentNodeIdList_ != nullptr;};
    void deleteDependentNodeIdList() { this->dependentNodeIdList_ = nullptr;};
    inline string dependentNodeIdList() const { DARABONBA_PTR_GET_DEFAULT(dependentNodeIdList_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration& setDependentNodeIdList(string dependentNodeIdList) { DARABONBA_PTR_SET_VALUE(dependentNodeIdList_, dependentNodeIdList) };


    // dependentType Field Functions 
    bool hasDependentType() const { return this->dependentType_ != nullptr;};
    void deleteDependentType() { this->dependentType_ = nullptr;};
    inline string dependentType() const { DARABONBA_PTR_GET_DEFAULT(dependentType_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration& setDependentType(string dependentType) { DARABONBA_PTR_SET_VALUE(dependentType_, dependentType) };


    // inputList Field Functions 
    bool hasInputList() const { return this->inputList_ != nullptr;};
    void deleteInputList() { this->inputList_ = nullptr;};
    inline const vector<Models::GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationInputList> & inputList() const { DARABONBA_PTR_GET_CONST(inputList_, vector<Models::GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationInputList>) };
    inline vector<Models::GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationInputList> inputList() { DARABONBA_PTR_GET(inputList_, vector<Models::GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationInputList>) };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration& setInputList(const vector<Models::GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationInputList> & inputList) { DARABONBA_PTR_SET_VALUE(inputList_, inputList) };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration& setInputList(vector<Models::GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationInputList> && inputList) { DARABONBA_PTR_SET_RVALUE(inputList_, inputList) };


    // outputList Field Functions 
    bool hasOutputList() const { return this->outputList_ != nullptr;};
    void deleteOutputList() { this->outputList_ = nullptr;};
    inline const vector<Models::GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationOutputList> & outputList() const { DARABONBA_PTR_GET_CONST(outputList_, vector<Models::GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationOutputList>) };
    inline vector<Models::GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationOutputList> outputList() { DARABONBA_PTR_GET(outputList_, vector<Models::GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationOutputList>) };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration& setOutputList(const vector<Models::GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationOutputList> & outputList) { DARABONBA_PTR_SET_VALUE(outputList_, outputList) };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration& setOutputList(vector<Models::GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationOutputList> && outputList) { DARABONBA_PTR_SET_RVALUE(outputList_, outputList) };


    // paraValue Field Functions 
    bool hasParaValue() const { return this->paraValue_ != nullptr;};
    void deleteParaValue() { this->paraValue_ = nullptr;};
    inline string paraValue() const { DARABONBA_PTR_GET_DEFAULT(paraValue_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration& setParaValue(string paraValue) { DARABONBA_PTR_SET_VALUE(paraValue_, paraValue) };


    // rerunMode Field Functions 
    bool hasRerunMode() const { return this->rerunMode_ != nullptr;};
    void deleteRerunMode() { this->rerunMode_ = nullptr;};
    inline string rerunMode() const { DARABONBA_PTR_GET_DEFAULT(rerunMode_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration& setRerunMode(string rerunMode) { DARABONBA_PTR_SET_VALUE(rerunMode_, rerunMode) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline int64_t resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, 0L) };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration& setResourceGroupId(int64_t resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // schedulerType Field Functions 
    bool hasSchedulerType() const { return this->schedulerType_ != nullptr;};
    void deleteSchedulerType() { this->schedulerType_ = nullptr;};
    inline string schedulerType() const { DARABONBA_PTR_GET_DEFAULT(schedulerType_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfiguration& setSchedulerType(string schedulerType) { DARABONBA_PTR_SET_VALUE(schedulerType_, schedulerType) };


  protected:
    // The interval at which the node corresponding to the file is rerun. Unit: milliseconds.
    std::shared_ptr<int64_t> autoRerunIntervalMillis_ = nullptr;
    // The number of times that the node corresponding to the file can be rerun.
    std::shared_ptr<int64_t> autoRerunTimes_ = nullptr;
    // The cron expression that is used to schedule the node corresponding to the file.
    std::shared_ptr<string> cronExpress_ = nullptr;
    // The type of the scheduling cycle of the node that corresponds to the file. Valid values: NOT_DAY and DAY. The value NOT_DAY indicates that the node is scheduled to run by minute or hour. The value DAY indicates that the node is scheduled to run by day, week, or month.
    // 
    // This parameter corresponds to the Scheduling Cycle parameter in the Schedule section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
    std::shared_ptr<string> cycleType_ = nullptr;
    // The ID of the node on which the node that corresponds to the file depends when the DependentType parameter is set to USER_DEFINE. Multiple IDs are separated by commas (,).
    // 
    // The value of this parameter is equivalent to the ID of the node that you specified after you select Other Nodes for Cross-Cycle Dependency (Original Previous-Cycle Dependency) in the Dependencies section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
    std::shared_ptr<string> dependentNodeIdList_ = nullptr;
    // The type of the cross-cycle scheduling dependency of the node. Valid values:
    // 
    // *   SELF: The instance generated for the node in the current cycle depends on the instance generated for the node in the previous cycle.
    // *   CHILD: The instance generated for the node in the current cycle depends on the instances generated for the descendant nodes at the nearest level of the node in the previous cycle.
    // *   USER_DEFINE: The instance generated for the node in the current cycle depends on the instances generated for one or more specified nodes in the previous cycle.
    // *   NONE: No cross-cycle scheduling dependency type is selected for the node.
    std::shared_ptr<string> dependentType_ = nullptr;
    // The output information about the parent files on which the current file depends.
    std::shared_ptr<vector<Models::GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationInputList>> inputList_ = nullptr;
    // The output information about the current file.
    std::shared_ptr<vector<Models::GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationOutputList>> outputList_ = nullptr;
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
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
