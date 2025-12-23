// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrStudio20240430
{
namespace Models
{
  class DescribeIdResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIdResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(inputId, inputId_);
      DARABONBA_PTR_TO_JSON(inputIdType, inputIdType_);
      DARABONBA_PTR_TO_JSON(manualTaskId, manualTaskId_);
      DARABONBA_PTR_TO_JSON(manualTaskInstanceId, manualTaskInstanceId_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(taskInstanceId, taskInstanceId_);
      DARABONBA_PTR_TO_JSON(workflowId, workflowId_);
      DARABONBA_PTR_TO_JSON(workflowInstanceId, workflowInstanceId_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIdResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(inputId, inputId_);
      DARABONBA_PTR_FROM_JSON(inputIdType, inputIdType_);
      DARABONBA_PTR_FROM_JSON(manualTaskId, manualTaskId_);
      DARABONBA_PTR_FROM_JSON(manualTaskInstanceId, manualTaskInstanceId_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(taskInstanceId, taskInstanceId_);
      DARABONBA_PTR_FROM_JSON(workflowId, workflowId_);
      DARABONBA_PTR_FROM_JSON(workflowInstanceId, workflowInstanceId_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    DescribeIdResponseBodyData() = default ;
    DescribeIdResponseBodyData(const DescribeIdResponseBodyData &) = default ;
    DescribeIdResponseBodyData(DescribeIdResponseBodyData &&) = default ;
    DescribeIdResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIdResponseBodyData() = default ;
    DescribeIdResponseBodyData& operator=(const DescribeIdResponseBodyData &) = default ;
    DescribeIdResponseBodyData& operator=(DescribeIdResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputId_ == nullptr
        && return this->inputIdType_ == nullptr && return this->manualTaskId_ == nullptr && return this->manualTaskInstanceId_ == nullptr && return this->projectId_ == nullptr && return this->taskId_ == nullptr
        && return this->taskInstanceId_ == nullptr && return this->workflowId_ == nullptr && return this->workflowInstanceId_ == nullptr && return this->workspaceId_ == nullptr; };
    // inputId Field Functions 
    bool hasInputId() const { return this->inputId_ != nullptr;};
    void deleteInputId() { this->inputId_ = nullptr;};
    inline string inputId() const { DARABONBA_PTR_GET_DEFAULT(inputId_, "") };
    inline DescribeIdResponseBodyData& setInputId(string inputId) { DARABONBA_PTR_SET_VALUE(inputId_, inputId) };


    // inputIdType Field Functions 
    bool hasInputIdType() const { return this->inputIdType_ != nullptr;};
    void deleteInputIdType() { this->inputIdType_ = nullptr;};
    inline string inputIdType() const { DARABONBA_PTR_GET_DEFAULT(inputIdType_, "") };
    inline DescribeIdResponseBodyData& setInputIdType(string inputIdType) { DARABONBA_PTR_SET_VALUE(inputIdType_, inputIdType) };


    // manualTaskId Field Functions 
    bool hasManualTaskId() const { return this->manualTaskId_ != nullptr;};
    void deleteManualTaskId() { this->manualTaskId_ = nullptr;};
    inline string manualTaskId() const { DARABONBA_PTR_GET_DEFAULT(manualTaskId_, "") };
    inline DescribeIdResponseBodyData& setManualTaskId(string manualTaskId) { DARABONBA_PTR_SET_VALUE(manualTaskId_, manualTaskId) };


    // manualTaskInstanceId Field Functions 
    bool hasManualTaskInstanceId() const { return this->manualTaskInstanceId_ != nullptr;};
    void deleteManualTaskInstanceId() { this->manualTaskInstanceId_ = nullptr;};
    inline string manualTaskInstanceId() const { DARABONBA_PTR_GET_DEFAULT(manualTaskInstanceId_, "") };
    inline DescribeIdResponseBodyData& setManualTaskInstanceId(string manualTaskInstanceId) { DARABONBA_PTR_SET_VALUE(manualTaskInstanceId_, manualTaskInstanceId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline DescribeIdResponseBodyData& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeIdResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskInstanceId Field Functions 
    bool hasTaskInstanceId() const { return this->taskInstanceId_ != nullptr;};
    void deleteTaskInstanceId() { this->taskInstanceId_ = nullptr;};
    inline string taskInstanceId() const { DARABONBA_PTR_GET_DEFAULT(taskInstanceId_, "") };
    inline DescribeIdResponseBodyData& setTaskInstanceId(string taskInstanceId) { DARABONBA_PTR_SET_VALUE(taskInstanceId_, taskInstanceId) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline string workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
    inline DescribeIdResponseBodyData& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


    // workflowInstanceId Field Functions 
    bool hasWorkflowInstanceId() const { return this->workflowInstanceId_ != nullptr;};
    void deleteWorkflowInstanceId() { this->workflowInstanceId_ = nullptr;};
    inline string workflowInstanceId() const { DARABONBA_PTR_GET_DEFAULT(workflowInstanceId_, "") };
    inline DescribeIdResponseBodyData& setWorkflowInstanceId(string workflowInstanceId) { DARABONBA_PTR_SET_VALUE(workflowInstanceId_, workflowInstanceId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DescribeIdResponseBodyData& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> inputId_ = nullptr;
    std::shared_ptr<string> inputIdType_ = nullptr;
    std::shared_ptr<string> manualTaskId_ = nullptr;
    std::shared_ptr<string> manualTaskInstanceId_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskInstanceId_ = nullptr;
    std::shared_ptr<string> workflowId_ = nullptr;
    std::shared_ptr<string> workflowInstanceId_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrStudio20240430
#endif
