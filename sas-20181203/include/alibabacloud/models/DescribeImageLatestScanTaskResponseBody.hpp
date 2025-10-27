// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGELATESTSCANTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGELATESTSCANTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageLatestScanTaskResponseBodyTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageLatestScanTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageLatestScanTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageLatestScanTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Task, task_);
    };
    DescribeImageLatestScanTaskResponseBody() = default ;
    DescribeImageLatestScanTaskResponseBody(const DescribeImageLatestScanTaskResponseBody &) = default ;
    DescribeImageLatestScanTaskResponseBody(DescribeImageLatestScanTaskResponseBody &&) = default ;
    DescribeImageLatestScanTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageLatestScanTaskResponseBody() = default ;
    DescribeImageLatestScanTaskResponseBody& operator=(const DescribeImageLatestScanTaskResponseBody &) = default ;
    DescribeImageLatestScanTaskResponseBody& operator=(DescribeImageLatestScanTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->task_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageLatestScanTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const vector<DescribeImageLatestScanTaskResponseBodyTask> & task() const { DARABONBA_PTR_GET_CONST(task_, vector<DescribeImageLatestScanTaskResponseBodyTask>) };
    inline vector<DescribeImageLatestScanTaskResponseBodyTask> task() { DARABONBA_PTR_GET(task_, vector<DescribeImageLatestScanTaskResponseBodyTask>) };
    inline DescribeImageLatestScanTaskResponseBody& setTask(const vector<DescribeImageLatestScanTaskResponseBodyTask> & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline DescribeImageLatestScanTaskResponseBody& setTask(vector<DescribeImageLatestScanTaskResponseBodyTask> && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of the information about the task.
    std::shared_ptr<vector<DescribeImageLatestScanTaskResponseBodyTask>> task_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
