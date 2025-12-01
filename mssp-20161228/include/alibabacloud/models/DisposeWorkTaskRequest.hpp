// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISPOSEWORKTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISPOSEWORKTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DisposeWorkTaskRequestWorkTaskAnalysisResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class DisposeWorkTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisposeWorkTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(OptRemark, optRemark_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
      DARABONBA_PTR_TO_JSON(WorkTaskAnalysisResults, workTaskAnalysisResults_);
    };
    friend void from_json(const Darabonba::Json& j, DisposeWorkTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(OptRemark, optRemark_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
      DARABONBA_PTR_FROM_JSON(WorkTaskAnalysisResults, workTaskAnalysisResults_);
    };
    DisposeWorkTaskRequest() = default ;
    DisposeWorkTaskRequest(const DisposeWorkTaskRequest &) = default ;
    DisposeWorkTaskRequest(DisposeWorkTaskRequest &&) = default ;
    DisposeWorkTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisposeWorkTaskRequest() = default ;
    DisposeWorkTaskRequest& operator=(const DisposeWorkTaskRequest &) = default ;
    DisposeWorkTaskRequest& operator=(DisposeWorkTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operator_ == nullptr
        && return this->optRemark_ == nullptr && return this->status_ == nullptr && return this->taskIds_ == nullptr && return this->workTaskAnalysisResults_ == nullptr; };
    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline DisposeWorkTaskRequest& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // optRemark Field Functions 
    bool hasOptRemark() const { return this->optRemark_ != nullptr;};
    void deleteOptRemark() { this->optRemark_ = nullptr;};
    inline string optRemark() const { DARABONBA_PTR_GET_DEFAULT(optRemark_, "") };
    inline DisposeWorkTaskRequest& setOptRemark(string optRemark) { DARABONBA_PTR_SET_VALUE(optRemark_, optRemark) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DisposeWorkTaskRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline string taskIds() const { DARABONBA_PTR_GET_DEFAULT(taskIds_, "") };
    inline DisposeWorkTaskRequest& setTaskIds(string taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };


    // workTaskAnalysisResults Field Functions 
    bool hasWorkTaskAnalysisResults() const { return this->workTaskAnalysisResults_ != nullptr;};
    void deleteWorkTaskAnalysisResults() { this->workTaskAnalysisResults_ = nullptr;};
    inline const vector<DisposeWorkTaskRequestWorkTaskAnalysisResults> & workTaskAnalysisResults() const { DARABONBA_PTR_GET_CONST(workTaskAnalysisResults_, vector<DisposeWorkTaskRequestWorkTaskAnalysisResults>) };
    inline vector<DisposeWorkTaskRequestWorkTaskAnalysisResults> workTaskAnalysisResults() { DARABONBA_PTR_GET(workTaskAnalysisResults_, vector<DisposeWorkTaskRequestWorkTaskAnalysisResults>) };
    inline DisposeWorkTaskRequest& setWorkTaskAnalysisResults(const vector<DisposeWorkTaskRequestWorkTaskAnalysisResults> & workTaskAnalysisResults) { DARABONBA_PTR_SET_VALUE(workTaskAnalysisResults_, workTaskAnalysisResults) };
    inline DisposeWorkTaskRequest& setWorkTaskAnalysisResults(vector<DisposeWorkTaskRequestWorkTaskAnalysisResults> && workTaskAnalysisResults) { DARABONBA_PTR_SET_RVALUE(workTaskAnalysisResults_, workTaskAnalysisResults) };


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
    std::shared_ptr<vector<DisposeWorkTaskRequestWorkTaskAnalysisResults>> workTaskAnalysisResults_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
