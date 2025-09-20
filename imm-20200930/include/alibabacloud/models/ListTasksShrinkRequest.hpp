// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ListTasksShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTasksShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTimeRange, endTimeRangeShrink_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RequestDefinition, requestDefinition_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(StartTimeRange, startTimeRangeShrink_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TagSelector, tagSelector_);
      DARABONBA_PTR_TO_JSON(TaskTypes, taskTypesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListTasksShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTimeRange, endTimeRangeShrink_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RequestDefinition, requestDefinition_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(StartTimeRange, startTimeRangeShrink_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TagSelector, tagSelector_);
      DARABONBA_PTR_FROM_JSON(TaskTypes, taskTypesShrink_);
    };
    ListTasksShrinkRequest() = default ;
    ListTasksShrinkRequest(const ListTasksShrinkRequest &) = default ;
    ListTasksShrinkRequest(ListTasksShrinkRequest &&) = default ;
    ListTasksShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTasksShrinkRequest() = default ;
    ListTasksShrinkRequest& operator=(const ListTasksShrinkRequest &) = default ;
    ListTasksShrinkRequest& operator=(ListTasksShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTimeRangeShrink_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->order_ != nullptr && this->projectName_ != nullptr && this->requestDefinition_ != nullptr
        && this->sort_ != nullptr && this->startTimeRangeShrink_ != nullptr && this->status_ != nullptr && this->tagSelector_ != nullptr && this->taskTypesShrink_ != nullptr; };
    // endTimeRangeShrink Field Functions 
    bool hasEndTimeRangeShrink() const { return this->endTimeRangeShrink_ != nullptr;};
    void deleteEndTimeRangeShrink() { this->endTimeRangeShrink_ = nullptr;};
    inline string endTimeRangeShrink() const { DARABONBA_PTR_GET_DEFAULT(endTimeRangeShrink_, "") };
    inline ListTasksShrinkRequest& setEndTimeRangeShrink(string endTimeRangeShrink) { DARABONBA_PTR_SET_VALUE(endTimeRangeShrink_, endTimeRangeShrink) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListTasksShrinkRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTasksShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListTasksShrinkRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListTasksShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // requestDefinition Field Functions 
    bool hasRequestDefinition() const { return this->requestDefinition_ != nullptr;};
    void deleteRequestDefinition() { this->requestDefinition_ = nullptr;};
    inline bool requestDefinition() const { DARABONBA_PTR_GET_DEFAULT(requestDefinition_, false) };
    inline ListTasksShrinkRequest& setRequestDefinition(bool requestDefinition) { DARABONBA_PTR_SET_VALUE(requestDefinition_, requestDefinition) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline ListTasksShrinkRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // startTimeRangeShrink Field Functions 
    bool hasStartTimeRangeShrink() const { return this->startTimeRangeShrink_ != nullptr;};
    void deleteStartTimeRangeShrink() { this->startTimeRangeShrink_ = nullptr;};
    inline string startTimeRangeShrink() const { DARABONBA_PTR_GET_DEFAULT(startTimeRangeShrink_, "") };
    inline ListTasksShrinkRequest& setStartTimeRangeShrink(string startTimeRangeShrink) { DARABONBA_PTR_SET_VALUE(startTimeRangeShrink_, startTimeRangeShrink) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTasksShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagSelector Field Functions 
    bool hasTagSelector() const { return this->tagSelector_ != nullptr;};
    void deleteTagSelector() { this->tagSelector_ = nullptr;};
    inline string tagSelector() const { DARABONBA_PTR_GET_DEFAULT(tagSelector_, "") };
    inline ListTasksShrinkRequest& setTagSelector(string tagSelector) { DARABONBA_PTR_SET_VALUE(tagSelector_, tagSelector) };


    // taskTypesShrink Field Functions 
    bool hasTaskTypesShrink() const { return this->taskTypesShrink_ != nullptr;};
    void deleteTaskTypesShrink() { this->taskTypesShrink_ = nullptr;};
    inline string taskTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(taskTypesShrink_, "") };
    inline ListTasksShrinkRequest& setTaskTypesShrink(string taskTypesShrink) { DARABONBA_PTR_SET_VALUE(taskTypesShrink_, taskTypesShrink) };


  protected:
    // The task end time range. You can specify this parameter to filter tasks that end within the specified range.
    std::shared_ptr<string> endTimeRangeShrink_ = nullptr;
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
    std::shared_ptr<string> startTimeRangeShrink_ = nullptr;
    // The task status. Valid values:
    // 
    // *   Running: The task is running.
    // *   Succeeded: The task is successful.
    // *   Failed: The task failed.
    std::shared_ptr<string> status_ = nullptr;
    // The custom tags of tasks.
    std::shared_ptr<string> tagSelector_ = nullptr;
    // The task types.
    std::shared_ptr<string> taskTypesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
