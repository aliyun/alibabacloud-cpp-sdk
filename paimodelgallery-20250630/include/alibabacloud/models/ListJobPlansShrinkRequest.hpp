// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBPLANSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBPLANSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIModelGallery20250630
{
namespace Models
{
  class ListJobPlansShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobPlansShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HasTemplate, hasTemplate_);
      DARABONBA_PTR_TO_JSON(JobPlanName, jobPlanName_);
      DARABONBA_PTR_TO_JSON(JobPlanType, jobPlanType_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Tag, tagShrink_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobPlansShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HasTemplate, hasTemplate_);
      DARABONBA_PTR_FROM_JSON(JobPlanName, jobPlanName_);
      DARABONBA_PTR_FROM_JSON(JobPlanType, jobPlanType_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Tag, tagShrink_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListJobPlansShrinkRequest() = default ;
    ListJobPlansShrinkRequest(const ListJobPlansShrinkRequest &) = default ;
    ListJobPlansShrinkRequest(ListJobPlansShrinkRequest &&) = default ;
    ListJobPlansShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobPlansShrinkRequest() = default ;
    ListJobPlansShrinkRequest& operator=(const ListJobPlansShrinkRequest &) = default ;
    ListJobPlansShrinkRequest& operator=(ListJobPlansShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hasTemplate_ == nullptr
        && this->jobPlanName_ == nullptr && this->jobPlanType_ == nullptr && this->order_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->sortBy_ == nullptr && this->tagShrink_ == nullptr && this->templateId_ == nullptr && this->workspaceId_ == nullptr; };
    // hasTemplate Field Functions 
    bool hasHasTemplate() const { return this->hasTemplate_ != nullptr;};
    void deleteHasTemplate() { this->hasTemplate_ = nullptr;};
    inline bool getHasTemplate() const { DARABONBA_PTR_GET_DEFAULT(hasTemplate_, false) };
    inline ListJobPlansShrinkRequest& setHasTemplate(bool hasTemplate) { DARABONBA_PTR_SET_VALUE(hasTemplate_, hasTemplate) };


    // jobPlanName Field Functions 
    bool hasJobPlanName() const { return this->jobPlanName_ != nullptr;};
    void deleteJobPlanName() { this->jobPlanName_ = nullptr;};
    inline string getJobPlanName() const { DARABONBA_PTR_GET_DEFAULT(jobPlanName_, "") };
    inline ListJobPlansShrinkRequest& setJobPlanName(string jobPlanName) { DARABONBA_PTR_SET_VALUE(jobPlanName_, jobPlanName) };


    // jobPlanType Field Functions 
    bool hasJobPlanType() const { return this->jobPlanType_ != nullptr;};
    void deleteJobPlanType() { this->jobPlanType_ = nullptr;};
    inline string getJobPlanType() const { DARABONBA_PTR_GET_DEFAULT(jobPlanType_, "") };
    inline ListJobPlansShrinkRequest& setJobPlanType(string jobPlanType) { DARABONBA_PTR_SET_VALUE(jobPlanType_, jobPlanType) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListJobPlansShrinkRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListJobPlansShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListJobPlansShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListJobPlansShrinkRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string getTagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline ListJobPlansShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListJobPlansShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListJobPlansShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // Specifies whether to filter by template association. Valid values:
    // - true: Returns only scenario-specific job plans that have a template.
    // - false: Returns only general-purpose job plans that do not have a template.
    // 
    // If this parameter is not specified, no filtering is applied. If both this parameter and TemplateId are specified, the value of TemplateId takes precedence.
    shared_ptr<bool> hasTemplate_ {};
    // The name of the job plan.
    shared_ptr<string> jobPlanName_ {};
    // The type of the job plan.
    shared_ptr<string> jobPlanType_ {};
    // The sort order.
    shared_ptr<string> order_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The field by which to sort the results.
    shared_ptr<string> sortBy_ {};
    // The list of tags.
    shared_ptr<string> tagShrink_ {};
    // The distillation template ID. Filters results to return only scenario-specific tasks that use the specified template.
    shared_ptr<string> templateId_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIModelGallery20250630
#endif
