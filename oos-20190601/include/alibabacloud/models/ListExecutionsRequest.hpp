// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListExecutionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Categories, categories_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Depth, depth_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndDateAfter, endDateAfter_);
      DARABONBA_PTR_TO_JSON(EndDateBefore, endDateBefore_);
      DARABONBA_PTR_TO_JSON(ExecutedBy, executedBy_);
      DARABONBA_PTR_TO_JSON(ExecutionId, executionId_);
      DARABONBA_PTR_TO_JSON(IncludeChildExecution, includeChildExecution_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ParentExecutionId, parentExecutionId_);
      DARABONBA_PTR_TO_JSON(RamRole, ramRole_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceTemplateName, resourceTemplateName_);
      DARABONBA_PTR_TO_JSON(SortField, sortField_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(StartDateAfter, startDateAfter_);
      DARABONBA_PTR_TO_JSON(StartDateBefore, startDateBefore_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Categories, categories_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Depth, depth_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndDateAfter, endDateAfter_);
      DARABONBA_PTR_FROM_JSON(EndDateBefore, endDateBefore_);
      DARABONBA_PTR_FROM_JSON(ExecutedBy, executedBy_);
      DARABONBA_PTR_FROM_JSON(ExecutionId, executionId_);
      DARABONBA_PTR_FROM_JSON(IncludeChildExecution, includeChildExecution_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ParentExecutionId, parentExecutionId_);
      DARABONBA_PTR_FROM_JSON(RamRole, ramRole_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceTemplateName, resourceTemplateName_);
      DARABONBA_PTR_FROM_JSON(SortField, sortField_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(StartDateAfter, startDateAfter_);
      DARABONBA_PTR_FROM_JSON(StartDateBefore, startDateBefore_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    ListExecutionsRequest() = default ;
    ListExecutionsRequest(const ListExecutionsRequest &) = default ;
    ListExecutionsRequest(ListExecutionsRequest &&) = default ;
    ListExecutionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutionsRequest() = default ;
    ListExecutionsRequest& operator=(const ListExecutionsRequest &) = default ;
    ListExecutionsRequest& operator=(ListExecutionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categories_ == nullptr
        && return this->category_ == nullptr && return this->depth_ == nullptr && return this->description_ == nullptr && return this->endDateAfter_ == nullptr && return this->endDateBefore_ == nullptr
        && return this->executedBy_ == nullptr && return this->executionId_ == nullptr && return this->includeChildExecution_ == nullptr && return this->maxResults_ == nullptr && return this->mode_ == nullptr
        && return this->nextToken_ == nullptr && return this->parentExecutionId_ == nullptr && return this->ramRole_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->resourceId_ == nullptr && return this->resourceTemplateName_ == nullptr && return this->sortField_ == nullptr && return this->sortOrder_ == nullptr && return this->startDateAfter_ == nullptr
        && return this->startDateBefore_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr && return this->templateName_ == nullptr; };
    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline string categories() const { DARABONBA_PTR_GET_DEFAULT(categories_, "") };
    inline ListExecutionsRequest& setCategories(string categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListExecutionsRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // depth Field Functions 
    bool hasDepth() const { return this->depth_ != nullptr;};
    void deleteDepth() { this->depth_ = nullptr;};
    inline string depth() const { DARABONBA_PTR_GET_DEFAULT(depth_, "") };
    inline ListExecutionsRequest& setDepth(string depth) { DARABONBA_PTR_SET_VALUE(depth_, depth) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListExecutionsRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endDateAfter Field Functions 
    bool hasEndDateAfter() const { return this->endDateAfter_ != nullptr;};
    void deleteEndDateAfter() { this->endDateAfter_ = nullptr;};
    inline string endDateAfter() const { DARABONBA_PTR_GET_DEFAULT(endDateAfter_, "") };
    inline ListExecutionsRequest& setEndDateAfter(string endDateAfter) { DARABONBA_PTR_SET_VALUE(endDateAfter_, endDateAfter) };


    // endDateBefore Field Functions 
    bool hasEndDateBefore() const { return this->endDateBefore_ != nullptr;};
    void deleteEndDateBefore() { this->endDateBefore_ = nullptr;};
    inline string endDateBefore() const { DARABONBA_PTR_GET_DEFAULT(endDateBefore_, "") };
    inline ListExecutionsRequest& setEndDateBefore(string endDateBefore) { DARABONBA_PTR_SET_VALUE(endDateBefore_, endDateBefore) };


    // executedBy Field Functions 
    bool hasExecutedBy() const { return this->executedBy_ != nullptr;};
    void deleteExecutedBy() { this->executedBy_ = nullptr;};
    inline string executedBy() const { DARABONBA_PTR_GET_DEFAULT(executedBy_, "") };
    inline ListExecutionsRequest& setExecutedBy(string executedBy) { DARABONBA_PTR_SET_VALUE(executedBy_, executedBy) };


    // executionId Field Functions 
    bool hasExecutionId() const { return this->executionId_ != nullptr;};
    void deleteExecutionId() { this->executionId_ = nullptr;};
    inline string executionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
    inline ListExecutionsRequest& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


    // includeChildExecution Field Functions 
    bool hasIncludeChildExecution() const { return this->includeChildExecution_ != nullptr;};
    void deleteIncludeChildExecution() { this->includeChildExecution_ = nullptr;};
    inline bool includeChildExecution() const { DARABONBA_PTR_GET_DEFAULT(includeChildExecution_, false) };
    inline ListExecutionsRequest& setIncludeChildExecution(bool includeChildExecution) { DARABONBA_PTR_SET_VALUE(includeChildExecution_, includeChildExecution) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListExecutionsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ListExecutionsRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListExecutionsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // parentExecutionId Field Functions 
    bool hasParentExecutionId() const { return this->parentExecutionId_ != nullptr;};
    void deleteParentExecutionId() { this->parentExecutionId_ = nullptr;};
    inline string parentExecutionId() const { DARABONBA_PTR_GET_DEFAULT(parentExecutionId_, "") };
    inline ListExecutionsRequest& setParentExecutionId(string parentExecutionId) { DARABONBA_PTR_SET_VALUE(parentExecutionId_, parentExecutionId) };


    // ramRole Field Functions 
    bool hasRamRole() const { return this->ramRole_ != nullptr;};
    void deleteRamRole() { this->ramRole_ = nullptr;};
    inline string ramRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
    inline ListExecutionsRequest& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListExecutionsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListExecutionsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListExecutionsRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceTemplateName Field Functions 
    bool hasResourceTemplateName() const { return this->resourceTemplateName_ != nullptr;};
    void deleteResourceTemplateName() { this->resourceTemplateName_ = nullptr;};
    inline string resourceTemplateName() const { DARABONBA_PTR_GET_DEFAULT(resourceTemplateName_, "") };
    inline ListExecutionsRequest& setResourceTemplateName(string resourceTemplateName) { DARABONBA_PTR_SET_VALUE(resourceTemplateName_, resourceTemplateName) };


    // sortField Field Functions 
    bool hasSortField() const { return this->sortField_ != nullptr;};
    void deleteSortField() { this->sortField_ = nullptr;};
    inline string sortField() const { DARABONBA_PTR_GET_DEFAULT(sortField_, "") };
    inline ListExecutionsRequest& setSortField(string sortField) { DARABONBA_PTR_SET_VALUE(sortField_, sortField) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string sortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListExecutionsRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // startDateAfter Field Functions 
    bool hasStartDateAfter() const { return this->startDateAfter_ != nullptr;};
    void deleteStartDateAfter() { this->startDateAfter_ = nullptr;};
    inline string startDateAfter() const { DARABONBA_PTR_GET_DEFAULT(startDateAfter_, "") };
    inline ListExecutionsRequest& setStartDateAfter(string startDateAfter) { DARABONBA_PTR_SET_VALUE(startDateAfter_, startDateAfter) };


    // startDateBefore Field Functions 
    bool hasStartDateBefore() const { return this->startDateBefore_ != nullptr;};
    void deleteStartDateBefore() { this->startDateBefore_ = nullptr;};
    inline string startDateBefore() const { DARABONBA_PTR_GET_DEFAULT(startDateBefore_, "") };
    inline ListExecutionsRequest& setStartDateBefore(string startDateBefore) { DARABONBA_PTR_SET_VALUE(startDateBefore_, startDateBefore) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListExecutionsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline ListExecutionsRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline ListExecutionsRequest& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ListExecutionsRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // The types of the execution template. Valid values: Other, TimerTrigger, EventTrigger, and AlarmTrigger. You can specify only one of the Categories and Category parameters. We recommend that you specify Categories.
    std::shared_ptr<string> categories_ = nullptr;
    // The type of the execution template. Valid values: Other, TimerTrigger, EventTrigger, and AlarmTrigger.
    std::shared_ptr<string> category_ = nullptr;
    // The depth of execution. Valid values: RootDepth and FirstChildDepth. If you set this parameter to RootDepth, only the parent execution is returned. If you set this parameter to FirstChildDepth, only the child executions at the first level are returned. You can specify only one of the Depth and IncludeChildExecution parameters. We recommend that you specify Depth.
    std::shared_ptr<string> depth_ = nullptr;
    // The description of the execution.
    std::shared_ptr<string> description_ = nullptr;
    // The earliest end time. The executions that stop running at or later than the specified time are queried.
    std::shared_ptr<string> endDateAfter_ = nullptr;
    // The latest end time. The executions that stop running at or earlier than the specified time are queried.
    std::shared_ptr<string> endDateBefore_ = nullptr;
    // The executor.
    std::shared_ptr<string> executedBy_ = nullptr;
    // The ID of the execution.
    std::shared_ptr<string> executionId_ = nullptr;
    // Specifies whether to include child executions. Default value: False.
    std::shared_ptr<bool> includeChildExecution_ = nullptr;
    // The number of entries to return on each page. Valid values: 10 to 100. Default value: 50.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The execution mode. Valid values:
    // 
    // *   **Automatic**
    // *   **Debug**
    std::shared_ptr<string> mode_ = nullptr;
    // The token that is used to retrieve the next page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the parent execution.
    std::shared_ptr<string> parentExecutionId_ = nullptr;
    // The RAM role.
    std::shared_ptr<string> ramRole_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the instances you want to query belong.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the Elastic Compute Service (ECS) resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The name of the resource template.
    std::shared_ptr<string> resourceTemplateName_ = nullptr;
    // The field that is used to sort the executions to query. Valid values:
    // 
    // *   **StartDate**: specifies that the executions are sorted based on the time when they are created. This is the default value.
    // *   **EndDate**: specifies that the executions are sorted based on the time when they stop running.
    // *   **Status**: specifies that the executions are sorted based on their states.
    std::shared_ptr<string> sortField_ = nullptr;
    // The order in which you want to sort the results. Valid values:
    // 
    // *   **Ascending**: ascending order.
    // *   **Descending**: descending order. This is the default value.
    std::shared_ptr<string> sortOrder_ = nullptr;
    // The earliest start time. The executions that start to run at or later than the specified time are queried.
    std::shared_ptr<string> startDateAfter_ = nullptr;
    // The latest start time. The executions that start to run at or earlier than the specified point in time are queried.
    std::shared_ptr<string> startDateBefore_ = nullptr;
    // The status of the execution. Valid values: Running, Started, Success, Failed, Waiting, Cancelled, Pending, and Skipped.
    std::shared_ptr<string> status_ = nullptr;
    // The tags for the execution.
    Darabonba::Json tags_ = nullptr;
    // The name of the template. All templates whose names contain the specified template name are queried.
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
