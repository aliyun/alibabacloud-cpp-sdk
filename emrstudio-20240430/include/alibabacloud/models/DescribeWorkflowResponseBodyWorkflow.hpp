// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWORKFLOWRESPONSEBODYWORKFLOW_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWORKFLOWRESPONSEBODYWORKFLOW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrStudio20240430
{
namespace Models
{
  class DescribeWorkflowResponseBodyWorkflow : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWorkflowResponseBodyWorkflow& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(executionType, executionType_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(parentDirectoryId, parentDirectoryId_);
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(workflowId, workflowId_);
      DARABONBA_PTR_TO_JSON(workflowParams, workflowParams_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWorkflowResponseBodyWorkflow& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(executionType, executionType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(parentDirectoryId, parentDirectoryId_);
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(workflowId, workflowId_);
      DARABONBA_PTR_FROM_JSON(workflowParams, workflowParams_);
    };
    DescribeWorkflowResponseBodyWorkflow() = default ;
    DescribeWorkflowResponseBodyWorkflow(const DescribeWorkflowResponseBodyWorkflow &) = default ;
    DescribeWorkflowResponseBodyWorkflow(DescribeWorkflowResponseBodyWorkflow &&) = default ;
    DescribeWorkflowResponseBodyWorkflow(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWorkflowResponseBodyWorkflow() = default ;
    DescribeWorkflowResponseBodyWorkflow& operator=(const DescribeWorkflowResponseBodyWorkflow &) = default ;
    DescribeWorkflowResponseBodyWorkflow& operator=(DescribeWorkflowResponseBodyWorkflow &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->executionType_ == nullptr && return this->name_ == nullptr && return this->parentDirectoryId_ == nullptr && return this->timeout_ == nullptr
        && return this->updateTime_ == nullptr && return this->workflowId_ == nullptr && return this->workflowParams_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeWorkflowResponseBodyWorkflow& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeWorkflowResponseBodyWorkflow& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executionType Field Functions 
    bool hasExecutionType() const { return this->executionType_ != nullptr;};
    void deleteExecutionType() { this->executionType_ = nullptr;};
    inline string executionType() const { DARABONBA_PTR_GET_DEFAULT(executionType_, "") };
    inline DescribeWorkflowResponseBodyWorkflow& setExecutionType(string executionType) { DARABONBA_PTR_SET_VALUE(executionType_, executionType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeWorkflowResponseBodyWorkflow& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentDirectoryId Field Functions 
    bool hasParentDirectoryId() const { return this->parentDirectoryId_ != nullptr;};
    void deleteParentDirectoryId() { this->parentDirectoryId_ = nullptr;};
    inline string parentDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(parentDirectoryId_, "") };
    inline DescribeWorkflowResponseBodyWorkflow& setParentDirectoryId(string parentDirectoryId) { DARABONBA_PTR_SET_VALUE(parentDirectoryId_, parentDirectoryId) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline DescribeWorkflowResponseBodyWorkflow& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeWorkflowResponseBodyWorkflow& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline string workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
    inline DescribeWorkflowResponseBodyWorkflow& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


    // workflowParams Field Functions 
    bool hasWorkflowParams() const { return this->workflowParams_ != nullptr;};
    void deleteWorkflowParams() { this->workflowParams_ = nullptr;};
    inline string workflowParams() const { DARABONBA_PTR_GET_DEFAULT(workflowParams_, "") };
    inline DescribeWorkflowResponseBodyWorkflow& setWorkflowParams(string workflowParams) { DARABONBA_PTR_SET_VALUE(workflowParams_, workflowParams) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> executionType_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> parentDirectoryId_ = nullptr;
    std::shared_ptr<int32_t> timeout_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> workflowId_ = nullptr;
    std::shared_ptr<string> workflowParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrStudio20240430
#endif
