// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCHEDULEDTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCHEDULEDTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeScheduledTasksResponseBodyScheduledTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScheduledTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScheduledTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScheduledTasks, scheduledTasks_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScheduledTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScheduledTasks, scheduledTasks_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeScheduledTasksResponseBody() = default ;
    DescribeScheduledTasksResponseBody(const DescribeScheduledTasksResponseBody &) = default ;
    DescribeScheduledTasksResponseBody(DescribeScheduledTasksResponseBody &&) = default ;
    DescribeScheduledTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScheduledTasksResponseBody() = default ;
    DescribeScheduledTasksResponseBody& operator=(const DescribeScheduledTasksResponseBody &) = default ;
    DescribeScheduledTasksResponseBody& operator=(DescribeScheduledTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->scheduledTasks_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeScheduledTasksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeScheduledTasksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScheduledTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scheduledTasks Field Functions 
    bool hasScheduledTasks() const { return this->scheduledTasks_ != nullptr;};
    void deleteScheduledTasks() { this->scheduledTasks_ = nullptr;};
    inline const vector<DescribeScheduledTasksResponseBodyScheduledTasks> & scheduledTasks() const { DARABONBA_PTR_GET_CONST(scheduledTasks_, vector<DescribeScheduledTasksResponseBodyScheduledTasks>) };
    inline vector<DescribeScheduledTasksResponseBodyScheduledTasks> scheduledTasks() { DARABONBA_PTR_GET(scheduledTasks_, vector<DescribeScheduledTasksResponseBodyScheduledTasks>) };
    inline DescribeScheduledTasksResponseBody& setScheduledTasks(const vector<DescribeScheduledTasksResponseBodyScheduledTasks> & scheduledTasks) { DARABONBA_PTR_SET_VALUE(scheduledTasks_, scheduledTasks) };
    inline DescribeScheduledTasksResponseBody& setScheduledTasks(vector<DescribeScheduledTasksResponseBodyScheduledTasks> && scheduledTasks) { DARABONBA_PTR_SET_RVALUE(scheduledTasks_, scheduledTasks) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeScheduledTasksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information collection of the scheduled tasks.
    std::shared_ptr<vector<DescribeScheduledTasksResponseBodyScheduledTasks>> scheduledTasks_ = nullptr;
    // The total number of scheduled tasks.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
