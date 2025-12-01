// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISPOSEWORKTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISPOSEWORKTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class DisposeWorkTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisposeWorkTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(OptRemark, optRemark_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
      DARABONBA_PTR_TO_JSON(WorkTaskAnalysisResults, workTaskAnalysisResultsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DisposeWorkTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(OptRemark, optRemark_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
      DARABONBA_PTR_FROM_JSON(WorkTaskAnalysisResults, workTaskAnalysisResultsShrink_);
    };
    DisposeWorkTaskShrinkRequest() = default ;
    DisposeWorkTaskShrinkRequest(const DisposeWorkTaskShrinkRequest &) = default ;
    DisposeWorkTaskShrinkRequest(DisposeWorkTaskShrinkRequest &&) = default ;
    DisposeWorkTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisposeWorkTaskShrinkRequest() = default ;
    DisposeWorkTaskShrinkRequest& operator=(const DisposeWorkTaskShrinkRequest &) = default ;
    DisposeWorkTaskShrinkRequest& operator=(DisposeWorkTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operator_ == nullptr
        && return this->optRemark_ == nullptr && return this->status_ == nullptr && return this->taskIds_ == nullptr && return this->workTaskAnalysisResultsShrink_ == nullptr; };
    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline DisposeWorkTaskShrinkRequest& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // optRemark Field Functions 
    bool hasOptRemark() const { return this->optRemark_ != nullptr;};
    void deleteOptRemark() { this->optRemark_ = nullptr;};
    inline string optRemark() const { DARABONBA_PTR_GET_DEFAULT(optRemark_, "") };
    inline DisposeWorkTaskShrinkRequest& setOptRemark(string optRemark) { DARABONBA_PTR_SET_VALUE(optRemark_, optRemark) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DisposeWorkTaskShrinkRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline string taskIds() const { DARABONBA_PTR_GET_DEFAULT(taskIds_, "") };
    inline DisposeWorkTaskShrinkRequest& setTaskIds(string taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };


    // workTaskAnalysisResultsShrink Field Functions 
    bool hasWorkTaskAnalysisResultsShrink() const { return this->workTaskAnalysisResultsShrink_ != nullptr;};
    void deleteWorkTaskAnalysisResultsShrink() { this->workTaskAnalysisResultsShrink_ = nullptr;};
    inline string workTaskAnalysisResultsShrink() const { DARABONBA_PTR_GET_DEFAULT(workTaskAnalysisResultsShrink_, "") };
    inline DisposeWorkTaskShrinkRequest& setWorkTaskAnalysisResultsShrink(string workTaskAnalysisResultsShrink) { DARABONBA_PTR_SET_VALUE(workTaskAnalysisResultsShrink_, workTaskAnalysisResultsShrink) };


  protected:
    // Operator.
    // 
    // This parameter is required.
    std::shared_ptr<string> operator_ = nullptr;
    // Operation remarks.
    // 
    // This parameter is required.
    std::shared_ptr<string> optRemark_ = nullptr;
    // Work order status.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> status_ = nullptr;
    // Work order ID, multiple IDs separated by commas.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskIds_ = nullptr;
    std::shared_ptr<string> workTaskAnalysisResultsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
