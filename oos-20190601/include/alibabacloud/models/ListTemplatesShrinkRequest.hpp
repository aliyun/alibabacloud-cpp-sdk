// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListTemplatesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplatesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_TO_JSON(CreatedDateAfter, createdDateAfter_);
      DARABONBA_PTR_TO_JSON(CreatedDateBefore, createdDateBefore_);
      DARABONBA_PTR_TO_JSON(HasTrigger, hasTrigger_);
      DARABONBA_PTR_TO_JSON(IsExample, isExample_);
      DARABONBA_PTR_TO_JSON(IsFavorite, isFavorite_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ShareType, shareType_);
      DARABONBA_PTR_TO_JSON(SortField, sortField_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(TemplateFormat, templateFormat_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplatesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(CreatedDateAfter, createdDateAfter_);
      DARABONBA_PTR_FROM_JSON(CreatedDateBefore, createdDateBefore_);
      DARABONBA_PTR_FROM_JSON(HasTrigger, hasTrigger_);
      DARABONBA_PTR_FROM_JSON(IsExample, isExample_);
      DARABONBA_PTR_FROM_JSON(IsFavorite, isFavorite_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
      DARABONBA_PTR_FROM_JSON(SortField, sortField_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(TemplateFormat, templateFormat_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    ListTemplatesShrinkRequest() = default ;
    ListTemplatesShrinkRequest(const ListTemplatesShrinkRequest &) = default ;
    ListTemplatesShrinkRequest(ListTemplatesShrinkRequest &&) = default ;
    ListTemplatesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplatesShrinkRequest() = default ;
    ListTemplatesShrinkRequest& operator=(const ListTemplatesShrinkRequest &) = default ;
    ListTemplatesShrinkRequest& operator=(ListTemplatesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->createdBy_ == nullptr && return this->createdDateAfter_ == nullptr && return this->createdDateBefore_ == nullptr && return this->hasTrigger_ == nullptr && return this->isExample_ == nullptr
        && return this->isFavorite_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->shareType_ == nullptr && return this->sortField_ == nullptr && return this->sortOrder_ == nullptr && return this->tagsShrink_ == nullptr && return this->templateFormat_ == nullptr
        && return this->templateName_ == nullptr && return this->templateType_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListTemplatesShrinkRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string createdBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline ListTemplatesShrinkRequest& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // createdDateAfter Field Functions 
    bool hasCreatedDateAfter() const { return this->createdDateAfter_ != nullptr;};
    void deleteCreatedDateAfter() { this->createdDateAfter_ = nullptr;};
    inline string createdDateAfter() const { DARABONBA_PTR_GET_DEFAULT(createdDateAfter_, "") };
    inline ListTemplatesShrinkRequest& setCreatedDateAfter(string createdDateAfter) { DARABONBA_PTR_SET_VALUE(createdDateAfter_, createdDateAfter) };


    // createdDateBefore Field Functions 
    bool hasCreatedDateBefore() const { return this->createdDateBefore_ != nullptr;};
    void deleteCreatedDateBefore() { this->createdDateBefore_ = nullptr;};
    inline string createdDateBefore() const { DARABONBA_PTR_GET_DEFAULT(createdDateBefore_, "") };
    inline ListTemplatesShrinkRequest& setCreatedDateBefore(string createdDateBefore) { DARABONBA_PTR_SET_VALUE(createdDateBefore_, createdDateBefore) };


    // hasTrigger Field Functions 
    bool hasHasTrigger() const { return this->hasTrigger_ != nullptr;};
    void deleteHasTrigger() { this->hasTrigger_ = nullptr;};
    inline bool hasTrigger() const { DARABONBA_PTR_GET_DEFAULT(hasTrigger_, false) };
    inline ListTemplatesShrinkRequest& setHasTrigger(bool hasTrigger) { DARABONBA_PTR_SET_VALUE(hasTrigger_, hasTrigger) };


    // isExample Field Functions 
    bool hasIsExample() const { return this->isExample_ != nullptr;};
    void deleteIsExample() { this->isExample_ = nullptr;};
    inline bool isExample() const { DARABONBA_PTR_GET_DEFAULT(isExample_, false) };
    inline ListTemplatesShrinkRequest& setIsExample(bool isExample) { DARABONBA_PTR_SET_VALUE(isExample_, isExample) };


    // isFavorite Field Functions 
    bool hasIsFavorite() const { return this->isFavorite_ != nullptr;};
    void deleteIsFavorite() { this->isFavorite_ = nullptr;};
    inline bool isFavorite() const { DARABONBA_PTR_GET_DEFAULT(isFavorite_, false) };
    inline ListTemplatesShrinkRequest& setIsFavorite(bool isFavorite) { DARABONBA_PTR_SET_VALUE(isFavorite_, isFavorite) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTemplatesShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTemplatesShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListTemplatesShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListTemplatesShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // shareType Field Functions 
    bool hasShareType() const { return this->shareType_ != nullptr;};
    void deleteShareType() { this->shareType_ = nullptr;};
    inline string shareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
    inline ListTemplatesShrinkRequest& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


    // sortField Field Functions 
    bool hasSortField() const { return this->sortField_ != nullptr;};
    void deleteSortField() { this->sortField_ = nullptr;};
    inline string sortField() const { DARABONBA_PTR_GET_DEFAULT(sortField_, "") };
    inline ListTemplatesShrinkRequest& setSortField(string sortField) { DARABONBA_PTR_SET_VALUE(sortField_, sortField) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string sortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListTemplatesShrinkRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline ListTemplatesShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // templateFormat Field Functions 
    bool hasTemplateFormat() const { return this->templateFormat_ != nullptr;};
    void deleteTemplateFormat() { this->templateFormat_ = nullptr;};
    inline string templateFormat() const { DARABONBA_PTR_GET_DEFAULT(templateFormat_, "") };
    inline ListTemplatesShrinkRequest& setTemplateFormat(string templateFormat) { DARABONBA_PTR_SET_VALUE(templateFormat_, templateFormat) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ListTemplatesShrinkRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline ListTemplatesShrinkRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // The type of the template. Valid values include TimerTrigger, EventTrigger, AlarmTrigger, and Other.
    std::shared_ptr<string> category_ = nullptr;
    // The creator of the template.
    // 
    // *   To query the template provided by Alibaba Cloud, set this parameter to **ACS**.
    // *   To query the template created by a user, set this parameter to the **ID** of the template or the **name of the user** who creates the template.
    std::shared_ptr<string> createdBy_ = nullptr;
    // Specifies to query the template that is created at or later than the specified time.
    // 
    // The value must be in the YYYY-MM-DDThh:mm:ssZ format.
    std::shared_ptr<string> createdDateAfter_ = nullptr;
    // Specifies to query the template that is created at or before the specified time.
    // 
    // The value must be in the YYYY-MM-DDThh:mm::ssZ format.
    std::shared_ptr<string> createdDateBefore_ = nullptr;
    // Specifies whether to query the template that is configured with a trigger.
    std::shared_ptr<bool> hasTrigger_ = nullptr;
    // Specifies whether the template is an example template.
    std::shared_ptr<bool> isExample_ = nullptr;
    // Specifies whether the template is added to favorites.
    std::shared_ptr<bool> isFavorite_ = nullptr;
    // The number of entries per page. Valid values: 10 to 100. Default value: 50.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that is used to retrieve the next page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the region in which you want to query templates.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The share type of the template. Valid values:
    // 
    // *   **Public**
    // *   **Private**
    std::shared_ptr<string> shareType_ = nullptr;
    // The field that is used to sort the templates to be queried. Valid values:
    // 
    // *   **TotalExecutionCount** (default): The system sorts the returned templates based on the total number of times that the templates are used.
    // *   **Popularity**: The system sorts the returned templates based on the popularity of the templates.
    // *   **TemplateName**: The system sorts the returned templates based on the names of the templates.
    // *   **CreatedDate**: The system sorts the returned templates based on the points in time when the templates are created.
    // *   **UpdatedDate**: The system sorts the returned templates based on the points in time when the templates are updated.
    std::shared_ptr<string> sortField_ = nullptr;
    // The order in which you want to sort the results. Valid values:
    // 
    // *   **Ascending**: ascending order.
    // *   **Descending**: descending order. This is the default value.
    std::shared_ptr<string> sortOrder_ = nullptr;
    // The tag keys and values. The number of key-value pairs ranges from 1 to 20.
    std::shared_ptr<string> tagsShrink_ = nullptr;
    // The format of the template. Valid values:
    // 
    // *   **JSON**
    // *   **YAML**
    std::shared_ptr<string> templateFormat_ = nullptr;
    // The name of the template. All templates whose names contain the specified template name are to be returned.
    std::shared_ptr<string> templateName_ = nullptr;
    // The type of the template. Valid values:
    // 
    // *   Automation: the template for automated tasks.
    // *   State: the template for configuration inventories.
    // *   Package: the template for software packages.
    std::shared_ptr<string> templateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
