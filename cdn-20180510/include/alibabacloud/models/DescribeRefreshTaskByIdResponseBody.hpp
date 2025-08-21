// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREFRESHTASKBYIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREFRESHTASKBYIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRefreshTaskByIdResponseBodyTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeRefreshTaskByIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRefreshTaskByIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRefreshTaskByIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRefreshTaskByIdResponseBody() = default ;
    DescribeRefreshTaskByIdResponseBody(const DescribeRefreshTaskByIdResponseBody &) = default ;
    DescribeRefreshTaskByIdResponseBody(DescribeRefreshTaskByIdResponseBody &&) = default ;
    DescribeRefreshTaskByIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRefreshTaskByIdResponseBody() = default ;
    DescribeRefreshTaskByIdResponseBody& operator=(const DescribeRefreshTaskByIdResponseBody &) = default ;
    DescribeRefreshTaskByIdResponseBody& operator=(DescribeRefreshTaskByIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->tasks_ != nullptr && this->totalCount_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRefreshTaskByIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<DescribeRefreshTaskByIdResponseBodyTasks> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<DescribeRefreshTaskByIdResponseBodyTasks>) };
    inline vector<DescribeRefreshTaskByIdResponseBodyTasks> tasks() { DARABONBA_PTR_GET(tasks_, vector<DescribeRefreshTaskByIdResponseBodyTasks>) };
    inline DescribeRefreshTaskByIdResponseBody& setTasks(const vector<DescribeRefreshTaskByIdResponseBodyTasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline DescribeRefreshTaskByIdResponseBody& setTasks(vector<DescribeRefreshTaskByIdResponseBodyTasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeRefreshTaskByIdResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Details about tasks.
    std::shared_ptr<vector<DescribeRefreshTaskByIdResponseBodyTasks>> tasks_ = nullptr;
    // The total number of tasks.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
