// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTIONSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTIONSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListExecutionsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutionsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
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
      DARABONBA_PTR_TO_JSON(RdFolderIds, rdFolderIdsShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceTemplateName, resourceTemplateName_);
      DARABONBA_PTR_TO_JSON(SortField, sortField_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(StartDateAfter, startDateAfter_);
      DARABONBA_PTR_TO_JSON(StartDateBefore, startDateBefore_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutionsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
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
      DARABONBA_PTR_FROM_JSON(RdFolderIds, rdFolderIdsShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceTemplateName, resourceTemplateName_);
      DARABONBA_PTR_FROM_JSON(SortField, sortField_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(StartDateAfter, startDateAfter_);
      DARABONBA_PTR_FROM_JSON(StartDateBefore, startDateBefore_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    ListExecutionsShrinkRequest() = default ;
    ListExecutionsShrinkRequest(const ListExecutionsShrinkRequest &) = default ;
    ListExecutionsShrinkRequest(ListExecutionsShrinkRequest &&) = default ;
    ListExecutionsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutionsShrinkRequest() = default ;
    ListExecutionsShrinkRequest& operator=(const ListExecutionsShrinkRequest &) = default ;
    ListExecutionsShrinkRequest& operator=(ListExecutionsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->categories_ == nullptr && this->category_ == nullptr && this->depth_ == nullptr && this->description_ == nullptr && this->endDateAfter_ == nullptr
        && this->endDateBefore_ == nullptr && this->executedBy_ == nullptr && this->executionId_ == nullptr && this->includeChildExecution_ == nullptr && this->maxResults_ == nullptr
        && this->mode_ == nullptr && this->nextToken_ == nullptr && this->parentExecutionId_ == nullptr && this->ramRole_ == nullptr && this->rdFolderIdsShrink_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceId_ == nullptr && this->resourceTemplateName_ == nullptr && this->sortField_ == nullptr
        && this->sortOrder_ == nullptr && this->startDateAfter_ == nullptr && this->startDateBefore_ == nullptr && this->status_ == nullptr && this->tagsShrink_ == nullptr
        && this->templateName_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ListExecutionsShrinkRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline string getCategories() const { DARABONBA_PTR_GET_DEFAULT(categories_, "") };
    inline ListExecutionsShrinkRequest& setCategories(string categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListExecutionsShrinkRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // depth Field Functions 
    bool hasDepth() const { return this->depth_ != nullptr;};
    void deleteDepth() { this->depth_ = nullptr;};
    inline string getDepth() const { DARABONBA_PTR_GET_DEFAULT(depth_, "") };
    inline ListExecutionsShrinkRequest& setDepth(string depth) { DARABONBA_PTR_SET_VALUE(depth_, depth) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListExecutionsShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endDateAfter Field Functions 
    bool hasEndDateAfter() const { return this->endDateAfter_ != nullptr;};
    void deleteEndDateAfter() { this->endDateAfter_ = nullptr;};
    inline string getEndDateAfter() const { DARABONBA_PTR_GET_DEFAULT(endDateAfter_, "") };
    inline ListExecutionsShrinkRequest& setEndDateAfter(string endDateAfter) { DARABONBA_PTR_SET_VALUE(endDateAfter_, endDateAfter) };


    // endDateBefore Field Functions 
    bool hasEndDateBefore() const { return this->endDateBefore_ != nullptr;};
    void deleteEndDateBefore() { this->endDateBefore_ = nullptr;};
    inline string getEndDateBefore() const { DARABONBA_PTR_GET_DEFAULT(endDateBefore_, "") };
    inline ListExecutionsShrinkRequest& setEndDateBefore(string endDateBefore) { DARABONBA_PTR_SET_VALUE(endDateBefore_, endDateBefore) };


    // executedBy Field Functions 
    bool hasExecutedBy() const { return this->executedBy_ != nullptr;};
    void deleteExecutedBy() { this->executedBy_ = nullptr;};
    inline string getExecutedBy() const { DARABONBA_PTR_GET_DEFAULT(executedBy_, "") };
    inline ListExecutionsShrinkRequest& setExecutedBy(string executedBy) { DARABONBA_PTR_SET_VALUE(executedBy_, executedBy) };


    // executionId Field Functions 
    bool hasExecutionId() const { return this->executionId_ != nullptr;};
    void deleteExecutionId() { this->executionId_ = nullptr;};
    inline string getExecutionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
    inline ListExecutionsShrinkRequest& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


    // includeChildExecution Field Functions 
    bool hasIncludeChildExecution() const { return this->includeChildExecution_ != nullptr;};
    void deleteIncludeChildExecution() { this->includeChildExecution_ = nullptr;};
    inline bool getIncludeChildExecution() const { DARABONBA_PTR_GET_DEFAULT(includeChildExecution_, false) };
    inline ListExecutionsShrinkRequest& setIncludeChildExecution(bool includeChildExecution) { DARABONBA_PTR_SET_VALUE(includeChildExecution_, includeChildExecution) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListExecutionsShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ListExecutionsShrinkRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListExecutionsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // parentExecutionId Field Functions 
    bool hasParentExecutionId() const { return this->parentExecutionId_ != nullptr;};
    void deleteParentExecutionId() { this->parentExecutionId_ = nullptr;};
    inline string getParentExecutionId() const { DARABONBA_PTR_GET_DEFAULT(parentExecutionId_, "") };
    inline ListExecutionsShrinkRequest& setParentExecutionId(string parentExecutionId) { DARABONBA_PTR_SET_VALUE(parentExecutionId_, parentExecutionId) };


    // ramRole Field Functions 
    bool hasRamRole() const { return this->ramRole_ != nullptr;};
    void deleteRamRole() { this->ramRole_ = nullptr;};
    inline string getRamRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
    inline ListExecutionsShrinkRequest& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


    // rdFolderIdsShrink Field Functions 
    bool hasRdFolderIdsShrink() const { return this->rdFolderIdsShrink_ != nullptr;};
    void deleteRdFolderIdsShrink() { this->rdFolderIdsShrink_ = nullptr;};
    inline string getRdFolderIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(rdFolderIdsShrink_, "") };
    inline ListExecutionsShrinkRequest& setRdFolderIdsShrink(string rdFolderIdsShrink) { DARABONBA_PTR_SET_VALUE(rdFolderIdsShrink_, rdFolderIdsShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListExecutionsShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListExecutionsShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListExecutionsShrinkRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceTemplateName Field Functions 
    bool hasResourceTemplateName() const { return this->resourceTemplateName_ != nullptr;};
    void deleteResourceTemplateName() { this->resourceTemplateName_ = nullptr;};
    inline string getResourceTemplateName() const { DARABONBA_PTR_GET_DEFAULT(resourceTemplateName_, "") };
    inline ListExecutionsShrinkRequest& setResourceTemplateName(string resourceTemplateName) { DARABONBA_PTR_SET_VALUE(resourceTemplateName_, resourceTemplateName) };


    // sortField Field Functions 
    bool hasSortField() const { return this->sortField_ != nullptr;};
    void deleteSortField() { this->sortField_ = nullptr;};
    inline string getSortField() const { DARABONBA_PTR_GET_DEFAULT(sortField_, "") };
    inline ListExecutionsShrinkRequest& setSortField(string sortField) { DARABONBA_PTR_SET_VALUE(sortField_, sortField) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListExecutionsShrinkRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // startDateAfter Field Functions 
    bool hasStartDateAfter() const { return this->startDateAfter_ != nullptr;};
    void deleteStartDateAfter() { this->startDateAfter_ = nullptr;};
    inline string getStartDateAfter() const { DARABONBA_PTR_GET_DEFAULT(startDateAfter_, "") };
    inline ListExecutionsShrinkRequest& setStartDateAfter(string startDateAfter) { DARABONBA_PTR_SET_VALUE(startDateAfter_, startDateAfter) };


    // startDateBefore Field Functions 
    bool hasStartDateBefore() const { return this->startDateBefore_ != nullptr;};
    void deleteStartDateBefore() { this->startDateBefore_ = nullptr;};
    inline string getStartDateBefore() const { DARABONBA_PTR_GET_DEFAULT(startDateBefore_, "") };
    inline ListExecutionsShrinkRequest& setStartDateBefore(string startDateBefore) { DARABONBA_PTR_SET_VALUE(startDateBefore_, startDateBefore) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListExecutionsShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline ListExecutionsShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ListExecutionsShrinkRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    shared_ptr<string> accountId_ {};
    // The types of the execution template. Valid values: Other, TimerTrigger, EventTrigger, and AlarmTrigger. You can specify only one of the Categories and Category parameters. We recommend that you specify Categories.
    shared_ptr<string> categories_ {};
    // The type of the execution template. Valid values: Other, TimerTrigger, EventTrigger, and AlarmTrigger.
    shared_ptr<string> category_ {};
    // The depth of execution. Valid values: RootDepth and FirstChildDepth. If you set this parameter to RootDepth, only the parent execution is returned. If you set this parameter to FirstChildDepth, only the child executions at the first level are returned. You can specify only one of the Depth and IncludeChildExecution parameters. We recommend that you specify Depth.
    shared_ptr<string> depth_ {};
    // The description of the execution.
    shared_ptr<string> description_ {};
    // The earliest end time. The executions that stop running at or later than the specified time are queried.
    shared_ptr<string> endDateAfter_ {};
    // The latest end time. The executions that stop running at or earlier than the specified time are queried.
    shared_ptr<string> endDateBefore_ {};
    // The executor.
    shared_ptr<string> executedBy_ {};
    // The ID of the execution.
    shared_ptr<string> executionId_ {};
    // Specifies whether to include child executions. Default value: False.
    shared_ptr<bool> includeChildExecution_ {};
    // The number of entries to return on each page. Valid values: 10 to 100. Default value: 50.
    shared_ptr<int32_t> maxResults_ {};
    // The execution mode. Valid values:
    // 
    // *   **Automatic**
    // *   **Debug**
    shared_ptr<string> mode_ {};
    // The token that is used to retrieve the next page of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the parent execution.
    shared_ptr<string> parentExecutionId_ {};
    // The RAM role.
    shared_ptr<string> ramRole_ {};
    shared_ptr<string> rdFolderIdsShrink_ {};
    // The ID of the region.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the instances you want to query belong.
    shared_ptr<string> resourceGroupId_ {};
    // The ID of the Elastic Compute Service (ECS) resource.
    shared_ptr<string> resourceId_ {};
    // The name of the resource template.
    shared_ptr<string> resourceTemplateName_ {};
    // The field that is used to sort the executions to query. Valid values:
    // 
    // *   **StartDate**: specifies that the executions are sorted based on the time when they are created. This is the default value.
    // *   **EndDate**: specifies that the executions are sorted based on the time when they stop running.
    // *   **Status**: specifies that the executions are sorted based on their states.
    shared_ptr<string> sortField_ {};
    // The order in which you want to sort the results. Valid values:
    // 
    // *   **Ascending**: ascending order.
    // *   **Descending**: descending order. This is the default value.
    shared_ptr<string> sortOrder_ {};
    // The earliest start time. The executions that start to run at or later than the specified time are queried.
    shared_ptr<string> startDateAfter_ {};
    // The latest start time. The executions that start to run at or earlier than the specified point in time are queried.
    shared_ptr<string> startDateBefore_ {};
    // The status of the execution. Valid values: Running, Started, Success, Failed, Waiting, Cancelled, Pending, and Skipped.
    shared_ptr<string> status_ {};
    // The tags for the execution.
    shared_ptr<string> tagsShrink_ {};
    // The name of the template. All templates whose names contain the specified template name are queried.
    shared_ptr<string> templateName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
