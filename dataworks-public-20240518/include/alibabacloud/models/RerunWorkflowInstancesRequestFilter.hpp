// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RERUNWORKFLOWINSTANCESREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_RERUNWORKFLOWINSTANCESREQUESTFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class RerunWorkflowInstancesRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RerunWorkflowInstancesRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(RerunDownstreamEnabled, rerunDownstreamEnabled_);
      DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
      DARABONBA_PTR_TO_JSON(TaskInstanceStatuses, taskInstanceStatuses_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskTypes, taskTypes_);
    };
    friend void from_json(const Darabonba::Json& j, RerunWorkflowInstancesRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(RerunDownstreamEnabled, rerunDownstreamEnabled_);
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
      DARABONBA_PTR_FROM_JSON(TaskInstanceStatuses, taskInstanceStatuses_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskTypes, taskTypes_);
    };
    RerunWorkflowInstancesRequestFilter() = default ;
    RerunWorkflowInstancesRequestFilter(const RerunWorkflowInstancesRequestFilter &) = default ;
    RerunWorkflowInstancesRequestFilter(RerunWorkflowInstancesRequestFilter &&) = default ;
    RerunWorkflowInstancesRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RerunWorkflowInstancesRequestFilter() = default ;
    RerunWorkflowInstancesRequestFilter& operator=(const RerunWorkflowInstancesRequestFilter &) = default ;
    RerunWorkflowInstancesRequestFilter& operator=(RerunWorkflowInstancesRequestFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rerunDownstreamEnabled_ != nullptr
        && this->taskIds_ != nullptr && this->taskInstanceStatuses_ != nullptr && this->taskName_ != nullptr && this->taskTypes_ != nullptr; };
    // rerunDownstreamEnabled Field Functions 
    bool hasRerunDownstreamEnabled() const { return this->rerunDownstreamEnabled_ != nullptr;};
    void deleteRerunDownstreamEnabled() { this->rerunDownstreamEnabled_ = nullptr;};
    inline bool rerunDownstreamEnabled() const { DARABONBA_PTR_GET_DEFAULT(rerunDownstreamEnabled_, false) };
    inline RerunWorkflowInstancesRequestFilter& setRerunDownstreamEnabled(bool rerunDownstreamEnabled) { DARABONBA_PTR_SET_VALUE(rerunDownstreamEnabled_, rerunDownstreamEnabled) };


    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline const vector<int64_t> & taskIds() const { DARABONBA_PTR_GET_CONST(taskIds_, vector<int64_t>) };
    inline vector<int64_t> taskIds() { DARABONBA_PTR_GET(taskIds_, vector<int64_t>) };
    inline RerunWorkflowInstancesRequestFilter& setTaskIds(const vector<int64_t> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
    inline RerunWorkflowInstancesRequestFilter& setTaskIds(vector<int64_t> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


    // taskInstanceStatuses Field Functions 
    bool hasTaskInstanceStatuses() const { return this->taskInstanceStatuses_ != nullptr;};
    void deleteTaskInstanceStatuses() { this->taskInstanceStatuses_ = nullptr;};
    inline const vector<string> & taskInstanceStatuses() const { DARABONBA_PTR_GET_CONST(taskInstanceStatuses_, vector<string>) };
    inline vector<string> taskInstanceStatuses() { DARABONBA_PTR_GET(taskInstanceStatuses_, vector<string>) };
    inline RerunWorkflowInstancesRequestFilter& setTaskInstanceStatuses(const vector<string> & taskInstanceStatuses) { DARABONBA_PTR_SET_VALUE(taskInstanceStatuses_, taskInstanceStatuses) };
    inline RerunWorkflowInstancesRequestFilter& setTaskInstanceStatuses(vector<string> && taskInstanceStatuses) { DARABONBA_PTR_SET_RVALUE(taskInstanceStatuses_, taskInstanceStatuses) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline RerunWorkflowInstancesRequestFilter& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskTypes Field Functions 
    bool hasTaskTypes() const { return this->taskTypes_ != nullptr;};
    void deleteTaskTypes() { this->taskTypes_ = nullptr;};
    inline const vector<string> & taskTypes() const { DARABONBA_PTR_GET_CONST(taskTypes_, vector<string>) };
    inline vector<string> taskTypes() { DARABONBA_PTR_GET(taskTypes_, vector<string>) };
    inline RerunWorkflowInstancesRequestFilter& setTaskTypes(const vector<string> & taskTypes) { DARABONBA_PTR_SET_VALUE(taskTypes_, taskTypes) };
    inline RerunWorkflowInstancesRequestFilter& setTaskTypes(vector<string> && taskTypes) { DARABONBA_PTR_SET_RVALUE(taskTypes_, taskTypes) };


  protected:
    // Specifies whether to rerun the matched instances and all downstream instances.
    std::shared_ptr<bool> rerunDownstreamEnabled_ = nullptr;
    // The internal task IDs used for matching manual workflow instances.
    std::shared_ptr<vector<int64_t>> taskIds_ = nullptr;
    // The statuses of internal tasks used for matching manual workflow instances.
    std::shared_ptr<vector<string>> taskInstanceStatuses_ = nullptr;
    // The internal task name used for matching the manual workflow instance.
    std::shared_ptr<string> taskName_ = nullptr;
    // Match internal tasks within the manual workflow by type.
    std::shared_ptr<vector<string>> taskTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
