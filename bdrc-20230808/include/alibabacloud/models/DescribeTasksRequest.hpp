// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class DescribeTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    DescribeTasksRequest() = default ;
    DescribeTasksRequest(const DescribeTasksRequest &) = default ;
    DescribeTasksRequest(DescribeTasksRequest &&) = default ;
    DescribeTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTasksRequest() = default ;
    DescribeTasksRequest& operator=(const DescribeTasksRequest &) = default ;
    DescribeTasksRequest& operator=(DescribeTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->taskStatus_ == nullptr && this->taskType_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeTasksRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeTasksRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline DescribeTasksRequest& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeTasksRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The maximum number of entries to return per page. The valid range is 10 to 500. If this parameter is omitted or its value is less than 10, a default value of 10 is used. Values greater than 500 are treated as 500.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. To retrieve the next page of results, set this parameter to the `NextToken` value from the response of the previous API call. For more information, see the API description above.
    shared_ptr<string> nextToken_ {};
    // Specifies the status of tasks to query. If this parameter is omitted, the API returns tasks in all states. Valid values: `CREATED`, `RUNNING`, `COMPLETE`, `FAILED`, `EXPIRED`, and `CANCELED`.
    shared_ptr<string> taskStatus_ {};
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
