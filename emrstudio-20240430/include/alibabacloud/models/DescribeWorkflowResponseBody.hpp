// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWORKFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWORKFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeWorkflowResponseBodySchedule.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWorkflowResponseBodyTaskRelations.hpp>
#include <alibabacloud/models/DescribeWorkflowResponseBodyTasks.hpp>
#include <alibabacloud/models/DescribeWorkflowResponseBodyWorkflow.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrStudio20240430
{
namespace Models
{
  class DescribeWorkflowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWorkflowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(schedule, schedule_);
      DARABONBA_PTR_TO_JSON(taskRelations, taskRelations_);
      DARABONBA_PTR_TO_JSON(tasks, tasks_);
      DARABONBA_PTR_TO_JSON(workflow, workflow_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWorkflowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(schedule, schedule_);
      DARABONBA_PTR_FROM_JSON(taskRelations, taskRelations_);
      DARABONBA_PTR_FROM_JSON(tasks, tasks_);
      DARABONBA_PTR_FROM_JSON(workflow, workflow_);
    };
    DescribeWorkflowResponseBody() = default ;
    DescribeWorkflowResponseBody(const DescribeWorkflowResponseBody &) = default ;
    DescribeWorkflowResponseBody(DescribeWorkflowResponseBody &&) = default ;
    DescribeWorkflowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWorkflowResponseBody() = default ;
    DescribeWorkflowResponseBody& operator=(const DescribeWorkflowResponseBody &) = default ;
    DescribeWorkflowResponseBody& operator=(DescribeWorkflowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->schedule_ == nullptr && return this->taskRelations_ == nullptr && return this->tasks_ == nullptr && return this->workflow_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWorkflowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline const DescribeWorkflowResponseBodySchedule & schedule() const { DARABONBA_PTR_GET_CONST(schedule_, DescribeWorkflowResponseBodySchedule) };
    inline DescribeWorkflowResponseBodySchedule schedule() { DARABONBA_PTR_GET(schedule_, DescribeWorkflowResponseBodySchedule) };
    inline DescribeWorkflowResponseBody& setSchedule(const DescribeWorkflowResponseBodySchedule & schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };
    inline DescribeWorkflowResponseBody& setSchedule(DescribeWorkflowResponseBodySchedule && schedule) { DARABONBA_PTR_SET_RVALUE(schedule_, schedule) };


    // taskRelations Field Functions 
    bool hasTaskRelations() const { return this->taskRelations_ != nullptr;};
    void deleteTaskRelations() { this->taskRelations_ = nullptr;};
    inline const vector<DescribeWorkflowResponseBodyTaskRelations> & taskRelations() const { DARABONBA_PTR_GET_CONST(taskRelations_, vector<DescribeWorkflowResponseBodyTaskRelations>) };
    inline vector<DescribeWorkflowResponseBodyTaskRelations> taskRelations() { DARABONBA_PTR_GET(taskRelations_, vector<DescribeWorkflowResponseBodyTaskRelations>) };
    inline DescribeWorkflowResponseBody& setTaskRelations(const vector<DescribeWorkflowResponseBodyTaskRelations> & taskRelations) { DARABONBA_PTR_SET_VALUE(taskRelations_, taskRelations) };
    inline DescribeWorkflowResponseBody& setTaskRelations(vector<DescribeWorkflowResponseBodyTaskRelations> && taskRelations) { DARABONBA_PTR_SET_RVALUE(taskRelations_, taskRelations) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<DescribeWorkflowResponseBodyTasks> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<DescribeWorkflowResponseBodyTasks>) };
    inline vector<DescribeWorkflowResponseBodyTasks> tasks() { DARABONBA_PTR_GET(tasks_, vector<DescribeWorkflowResponseBodyTasks>) };
    inline DescribeWorkflowResponseBody& setTasks(const vector<DescribeWorkflowResponseBodyTasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline DescribeWorkflowResponseBody& setTasks(vector<DescribeWorkflowResponseBodyTasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


    // workflow Field Functions 
    bool hasWorkflow() const { return this->workflow_ != nullptr;};
    void deleteWorkflow() { this->workflow_ = nullptr;};
    inline const DescribeWorkflowResponseBodyWorkflow & workflow() const { DARABONBA_PTR_GET_CONST(workflow_, DescribeWorkflowResponseBodyWorkflow) };
    inline DescribeWorkflowResponseBodyWorkflow workflow() { DARABONBA_PTR_GET(workflow_, DescribeWorkflowResponseBodyWorkflow) };
    inline DescribeWorkflowResponseBody& setWorkflow(const DescribeWorkflowResponseBodyWorkflow & workflow) { DARABONBA_PTR_SET_VALUE(workflow_, workflow) };
    inline DescribeWorkflowResponseBody& setWorkflow(DescribeWorkflowResponseBodyWorkflow && workflow) { DARABONBA_PTR_SET_RVALUE(workflow_, workflow) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<DescribeWorkflowResponseBodySchedule> schedule_ = nullptr;
    std::shared_ptr<vector<DescribeWorkflowResponseBodyTaskRelations>> taskRelations_ = nullptr;
    std::shared_ptr<vector<DescribeWorkflowResponseBodyTasks>> tasks_ = nullptr;
    std::shared_ptr<DescribeWorkflowResponseBodyWorkflow> workflow_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrStudio20240430
#endif
