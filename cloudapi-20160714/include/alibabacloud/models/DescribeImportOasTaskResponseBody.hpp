// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMPORTOASTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMPORTOASTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeImportOASTaskResponseBodyApiResults.hpp>
#include <alibabacloud/models/DescribeImportOASTaskResponseBodyModelResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeImportOASTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImportOASTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiResults, apiResults_);
      DARABONBA_PTR_TO_JSON(ModelResults, modelResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImportOASTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiResults, apiResults_);
      DARABONBA_PTR_FROM_JSON(ModelResults, modelResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
    };
    DescribeImportOASTaskResponseBody() = default ;
    DescribeImportOASTaskResponseBody(const DescribeImportOASTaskResponseBody &) = default ;
    DescribeImportOASTaskResponseBody(DescribeImportOASTaskResponseBody &&) = default ;
    DescribeImportOASTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImportOASTaskResponseBody() = default ;
    DescribeImportOASTaskResponseBody& operator=(const DescribeImportOASTaskResponseBody &) = default ;
    DescribeImportOASTaskResponseBody& operator=(DescribeImportOASTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiResults_ == nullptr
        && return this->modelResults_ == nullptr && return this->requestId_ == nullptr && return this->taskStatus_ == nullptr; };
    // apiResults Field Functions 
    bool hasApiResults() const { return this->apiResults_ != nullptr;};
    void deleteApiResults() { this->apiResults_ = nullptr;};
    inline const DescribeImportOASTaskResponseBodyApiResults & apiResults() const { DARABONBA_PTR_GET_CONST(apiResults_, DescribeImportOASTaskResponseBodyApiResults) };
    inline DescribeImportOASTaskResponseBodyApiResults apiResults() { DARABONBA_PTR_GET(apiResults_, DescribeImportOASTaskResponseBodyApiResults) };
    inline DescribeImportOASTaskResponseBody& setApiResults(const DescribeImportOASTaskResponseBodyApiResults & apiResults) { DARABONBA_PTR_SET_VALUE(apiResults_, apiResults) };
    inline DescribeImportOASTaskResponseBody& setApiResults(DescribeImportOASTaskResponseBodyApiResults && apiResults) { DARABONBA_PTR_SET_RVALUE(apiResults_, apiResults) };


    // modelResults Field Functions 
    bool hasModelResults() const { return this->modelResults_ != nullptr;};
    void deleteModelResults() { this->modelResults_ = nullptr;};
    inline const DescribeImportOASTaskResponseBodyModelResults & modelResults() const { DARABONBA_PTR_GET_CONST(modelResults_, DescribeImportOASTaskResponseBodyModelResults) };
    inline DescribeImportOASTaskResponseBodyModelResults modelResults() { DARABONBA_PTR_GET(modelResults_, DescribeImportOASTaskResponseBodyModelResults) };
    inline DescribeImportOASTaskResponseBody& setModelResults(const DescribeImportOASTaskResponseBodyModelResults & modelResults) { DARABONBA_PTR_SET_VALUE(modelResults_, modelResults) };
    inline DescribeImportOASTaskResponseBody& setModelResults(DescribeImportOASTaskResponseBodyModelResults && modelResults) { DARABONBA_PTR_SET_RVALUE(modelResults_, modelResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImportOASTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline DescribeImportOASTaskResponseBody& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    // The execution status of the subtask. Valid values:
    // 
    // *   RUNNING
    // *   WAIT
    // *   OVER
    // *   FAIL
    // *   CANCEL
    std::shared_ptr<DescribeImportOASTaskResponseBodyApiResults> apiResults_ = nullptr;
    // The execution status of the subtask. Valid values:
    // 
    // *   RUNNING
    // *   WAIT
    // *   OVER
    // *   FAIL
    // *   CANCEL
    std::shared_ptr<DescribeImportOASTaskResponseBodyModelResults> modelResults_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the import task. Valid values:
    // 
    // *   Running
    // *   Finished
    std::shared_ptr<string> taskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
