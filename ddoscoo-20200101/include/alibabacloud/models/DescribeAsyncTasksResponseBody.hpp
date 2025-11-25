// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEASYNCTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEASYNCTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAsyncTasksResponseBodyAsyncTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeAsyncTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAsyncTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AsyncTasks, asyncTasks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAsyncTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AsyncTasks, asyncTasks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAsyncTasksResponseBody() = default ;
    DescribeAsyncTasksResponseBody(const DescribeAsyncTasksResponseBody &) = default ;
    DescribeAsyncTasksResponseBody(DescribeAsyncTasksResponseBody &&) = default ;
    DescribeAsyncTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAsyncTasksResponseBody() = default ;
    DescribeAsyncTasksResponseBody& operator=(const DescribeAsyncTasksResponseBody &) = default ;
    DescribeAsyncTasksResponseBody& operator=(DescribeAsyncTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asyncTasks_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // asyncTasks Field Functions 
    bool hasAsyncTasks() const { return this->asyncTasks_ != nullptr;};
    void deleteAsyncTasks() { this->asyncTasks_ = nullptr;};
    inline const vector<DescribeAsyncTasksResponseBodyAsyncTasks> & asyncTasks() const { DARABONBA_PTR_GET_CONST(asyncTasks_, vector<DescribeAsyncTasksResponseBodyAsyncTasks>) };
    inline vector<DescribeAsyncTasksResponseBodyAsyncTasks> asyncTasks() { DARABONBA_PTR_GET(asyncTasks_, vector<DescribeAsyncTasksResponseBodyAsyncTasks>) };
    inline DescribeAsyncTasksResponseBody& setAsyncTasks(const vector<DescribeAsyncTasksResponseBodyAsyncTasks> & asyncTasks) { DARABONBA_PTR_SET_VALUE(asyncTasks_, asyncTasks) };
    inline DescribeAsyncTasksResponseBody& setAsyncTasks(vector<DescribeAsyncTasksResponseBodyAsyncTasks> && asyncTasks) { DARABONBA_PTR_SET_RVALUE(asyncTasks_, asyncTasks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAsyncTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAsyncTasksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of the details of the asynchronous export tasks.
    std::shared_ptr<vector<DescribeAsyncTasksResponseBodyAsyncTasks>> asyncTasks_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of asynchronous export tasks that are returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
