// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TimeRange.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ListTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTimeRange, endTimeRange_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RequestDefinition, requestDefinition_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(StartTimeRange, startTimeRange_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TagSelector, tagSelector_);
      DARABONBA_PTR_TO_JSON(TaskTypes, taskTypes_);
    };
    friend void from_json(const Darabonba::Json& j, ListTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTimeRange, endTimeRange_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RequestDefinition, requestDefinition_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(StartTimeRange, startTimeRange_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TagSelector, tagSelector_);
      DARABONBA_PTR_FROM_JSON(TaskTypes, taskTypes_);
    };
    ListTasksRequest() = default ;
    ListTasksRequest(const ListTasksRequest &) = default ;
    ListTasksRequest(ListTasksRequest &&) = default ;
    ListTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTasksRequest() = default ;
    ListTasksRequest& operator=(const ListTasksRequest &) = default ;
    ListTasksRequest& operator=(ListTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTimeRange_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->order_ == nullptr && return this->projectName_ == nullptr && return this->requestDefinition_ == nullptr
        && return this->sort_ == nullptr && return this->startTimeRange_ == nullptr && return this->status_ == nullptr && return this->tagSelector_ == nullptr && return this->taskTypes_ == nullptr; };
    // endTimeRange Field Functions 
    bool hasEndTimeRange() const { return this->endTimeRange_ != nullptr;};
    void deleteEndTimeRange() { this->endTimeRange_ = nullptr;};
    inline const TimeRange & endTimeRange() const { DARABONBA_PTR_GET_CONST(endTimeRange_, TimeRange) };
    inline TimeRange endTimeRange() { DARABONBA_PTR_GET(endTimeRange_, TimeRange) };
    inline ListTasksRequest& setEndTimeRange(const TimeRange & endTimeRange) { DARABONBA_PTR_SET_VALUE(endTimeRange_, endTimeRange) };
    inline ListTasksRequest& setEndTimeRange(TimeRange && endTimeRange) { DARABONBA_PTR_SET_RVALUE(endTimeRange_, endTimeRange) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListTasksRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTasksRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListTasksRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListTasksRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // requestDefinition Field Functions 
    bool hasRequestDefinition() const { return this->requestDefinition_ != nullptr;};
    void deleteRequestDefinition() { this->requestDefinition_ = nullptr;};
    inline bool requestDefinition() const { DARABONBA_PTR_GET_DEFAULT(requestDefinition_, false) };
    inline ListTasksRequest& setRequestDefinition(bool requestDefinition) { DARABONBA_PTR_SET_VALUE(requestDefinition_, requestDefinition) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline ListTasksRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // startTimeRange Field Functions 
    bool hasStartTimeRange() const { return this->startTimeRange_ != nullptr;};
    void deleteStartTimeRange() { this->startTimeRange_ = nullptr;};
    inline const TimeRange & startTimeRange() const { DARABONBA_PTR_GET_CONST(startTimeRange_, TimeRange) };
    inline TimeRange startTimeRange() { DARABONBA_PTR_GET(startTimeRange_, TimeRange) };
    inline ListTasksRequest& setStartTimeRange(const TimeRange & startTimeRange) { DARABONBA_PTR_SET_VALUE(startTimeRange_, startTimeRange) };
    inline ListTasksRequest& setStartTimeRange(TimeRange && startTimeRange) { DARABONBA_PTR_SET_RVALUE(startTimeRange_, startTimeRange) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTasksRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagSelector Field Functions 
    bool hasTagSelector() const { return this->tagSelector_ != nullptr;};
    void deleteTagSelector() { this->tagSelector_ = nullptr;};
    inline string tagSelector() const { DARABONBA_PTR_GET_DEFAULT(tagSelector_, "") };
    inline ListTasksRequest& setTagSelector(string tagSelector) { DARABONBA_PTR_SET_VALUE(tagSelector_, tagSelector) };


    // taskTypes Field Functions 
    bool hasTaskTypes() const { return this->taskTypes_ != nullptr;};
    void deleteTaskTypes() { this->taskTypes_ = nullptr;};
    inline const vector<string> & taskTypes() const { DARABONBA_PTR_GET_CONST(taskTypes_, vector<string>) };
    inline vector<string> taskTypes() { DARABONBA_PTR_GET(taskTypes_, vector<string>) };
    inline ListTasksRequest& setTaskTypes(const vector<string> & taskTypes) { DARABONBA_PTR_SET_VALUE(taskTypes_, taskTypes) };
    inline ListTasksRequest& setTaskTypes(vector<string> && taskTypes) { DARABONBA_PTR_SET_RVALUE(taskTypes_, taskTypes) };


  protected:
    // The task end time range. You can specify this parameter to filter tasks that end within the specified range.
    std::shared_ptr<TimeRange> endTimeRange_ = nullptr;
    // The maximum number of results to return. Valid value range: (0, 100]. Default value: 100.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The pagination token.
    // 
    // The pagination token is used in the next request to retrieve a new page of results if the total number of results exceeds the value of the MaxResults parameter. The next call to the operation returns results lexicographically after the NextToken parameter value.
    // 
    // >  Leave this parameter empty in your first call to the operation.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The sort order. Valid values:
    // 
    // *   asc: in ascending order. This is the default value.
    // *   desc: in descending order.
    std::shared_ptr<string> order_ = nullptr;
    // The name of the project.[](~~478153~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // Specifies whether to return request parameters in the initial request to create the task. Default value: False.
    std::shared_ptr<bool> requestDefinition_ = nullptr;
    // The field used to sort the results by. Valid values:
    // 
    // *   TaskId: sorts the results by task ID. This is the default sort field.
    // *   StartTime: sorts the results by task start time.
    // *   StartTime: sorts the results by task end time.
    std::shared_ptr<string> sort_ = nullptr;
    // The task start time range. You can specify this parameter to filter tasks that start within the specified range.
    std::shared_ptr<TimeRange> startTimeRange_ = nullptr;
    // The task status. Valid values:
    // 
    // *   Running: The task is running.
    // *   Succeeded: The task is successful.
    // *   Failed: The task failed.
    std::shared_ptr<string> status_ = nullptr;
    // The custom tags of tasks.
    std::shared_ptr<string> tagSelector_ = nullptr;
    // The task types.
    std::shared_ptr<vector<string>> taskTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
