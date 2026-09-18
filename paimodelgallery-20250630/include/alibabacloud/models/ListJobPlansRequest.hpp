// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBPLANSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBPLANSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIModelGallery20250630
{
namespace Models
{
  class ListJobPlansRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobPlansRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HasTemplate, hasTemplate_);
      DARABONBA_PTR_TO_JSON(JobPlanName, jobPlanName_);
      DARABONBA_PTR_TO_JSON(JobPlanType, jobPlanType_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobPlansRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HasTemplate, hasTemplate_);
      DARABONBA_PTR_FROM_JSON(JobPlanName, jobPlanName_);
      DARABONBA_PTR_FROM_JSON(JobPlanType, jobPlanType_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListJobPlansRequest() = default ;
    ListJobPlansRequest(const ListJobPlansRequest &) = default ;
    ListJobPlansRequest(ListJobPlansRequest &&) = default ;
    ListJobPlansRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobPlansRequest() = default ;
    ListJobPlansRequest& operator=(const ListJobPlansRequest &) = default ;
    ListJobPlansRequest& operator=(ListJobPlansRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->hasTemplate_ == nullptr
        && this->jobPlanName_ == nullptr && this->jobPlanType_ == nullptr && this->order_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->sortBy_ == nullptr && this->tag_ == nullptr && this->templateId_ == nullptr && this->workspaceId_ == nullptr; };
    // hasTemplate Field Functions 
    bool hasHasTemplate() const { return this->hasTemplate_ != nullptr;};
    void deleteHasTemplate() { this->hasTemplate_ = nullptr;};
    inline bool getHasTemplate() const { DARABONBA_PTR_GET_DEFAULT(hasTemplate_, false) };
    inline ListJobPlansRequest& setHasTemplate(bool hasTemplate) { DARABONBA_PTR_SET_VALUE(hasTemplate_, hasTemplate) };


    // jobPlanName Field Functions 
    bool hasJobPlanName() const { return this->jobPlanName_ != nullptr;};
    void deleteJobPlanName() { this->jobPlanName_ = nullptr;};
    inline string getJobPlanName() const { DARABONBA_PTR_GET_DEFAULT(jobPlanName_, "") };
    inline ListJobPlansRequest& setJobPlanName(string jobPlanName) { DARABONBA_PTR_SET_VALUE(jobPlanName_, jobPlanName) };


    // jobPlanType Field Functions 
    bool hasJobPlanType() const { return this->jobPlanType_ != nullptr;};
    void deleteJobPlanType() { this->jobPlanType_ = nullptr;};
    inline string getJobPlanType() const { DARABONBA_PTR_GET_DEFAULT(jobPlanType_, "") };
    inline ListJobPlansRequest& setJobPlanType(string jobPlanType) { DARABONBA_PTR_SET_VALUE(jobPlanType_, jobPlanType) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListJobPlansRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListJobPlansRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListJobPlansRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListJobPlansRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListJobPlansRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListJobPlansRequest::Tag>) };
    inline vector<ListJobPlansRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListJobPlansRequest::Tag>) };
    inline ListJobPlansRequest& setTag(const vector<ListJobPlansRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListJobPlansRequest& setTag(vector<ListJobPlansRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListJobPlansRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListJobPlansRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


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
    shared_ptr<vector<ListJobPlansRequest::Tag>> tag_ {};
    // The distillation template ID. Filters results to return only scenario-specific tasks that use the specified template.
    shared_ptr<string> templateId_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIModelGallery20250630
#endif
