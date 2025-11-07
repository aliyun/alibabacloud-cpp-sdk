// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEOPSITEMRESPONSEBODYOPSITEM_HPP_
#define ALIBABACLOUD_MODELS_UPDATEOPSITEMRESPONSEBODYOPSITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class UpdateOpsItemResponseBodyOpsItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOpsItemResponseBodyOpsItem& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(LastModifiedBy, lastModifiedBy_);
      DARABONBA_PTR_TO_JSON(OpsItemId, opsItemId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(Solutions, solutions_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOpsItemResponseBodyOpsItem& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(LastModifiedBy, lastModifiedBy_);
      DARABONBA_PTR_FROM_JSON(OpsItemId, opsItemId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(Solutions, solutions_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
    };
    UpdateOpsItemResponseBodyOpsItem() = default ;
    UpdateOpsItemResponseBodyOpsItem(const UpdateOpsItemResponseBodyOpsItem &) = default ;
    UpdateOpsItemResponseBodyOpsItem(UpdateOpsItemResponseBodyOpsItem &&) = default ;
    UpdateOpsItemResponseBodyOpsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOpsItemResponseBodyOpsItem() = default ;
    UpdateOpsItemResponseBodyOpsItem& operator=(const UpdateOpsItemResponseBodyOpsItem &) = default ;
    UpdateOpsItemResponseBodyOpsItem& operator=(UpdateOpsItemResponseBodyOpsItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributes_ == nullptr
        && return this->category_ == nullptr && return this->createDate_ == nullptr && return this->createdBy_ == nullptr && return this->description_ == nullptr && return this->lastModifiedBy_ == nullptr
        && return this->opsItemId_ == nullptr && return this->priority_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resources_ == nullptr && return this->severity_ == nullptr
        && return this->solutions_ == nullptr && return this->source_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr && return this->title_ == nullptr
        && return this->updateDate_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline string attributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, "") };
    inline UpdateOpsItemResponseBodyOpsItem& setAttributes(string attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline UpdateOpsItemResponseBodyOpsItem& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline UpdateOpsItemResponseBodyOpsItem& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string createdBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline UpdateOpsItemResponseBodyOpsItem& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateOpsItemResponseBodyOpsItem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // lastModifiedBy Field Functions 
    bool hasLastModifiedBy() const { return this->lastModifiedBy_ != nullptr;};
    void deleteLastModifiedBy() { this->lastModifiedBy_ = nullptr;};
    inline string lastModifiedBy() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedBy_, "") };
    inline UpdateOpsItemResponseBodyOpsItem& setLastModifiedBy(string lastModifiedBy) { DARABONBA_PTR_SET_VALUE(lastModifiedBy_, lastModifiedBy) };


    // opsItemId Field Functions 
    bool hasOpsItemId() const { return this->opsItemId_ != nullptr;};
    void deleteOpsItemId() { this->opsItemId_ = nullptr;};
    inline string opsItemId() const { DARABONBA_PTR_GET_DEFAULT(opsItemId_, "") };
    inline UpdateOpsItemResponseBodyOpsItem& setOpsItemId(string opsItemId) { DARABONBA_PTR_SET_VALUE(opsItemId_, opsItemId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateOpsItemResponseBodyOpsItem& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UpdateOpsItemResponseBodyOpsItem& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<string> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<string>) };
    inline vector<string> resources() { DARABONBA_PTR_GET(resources_, vector<string>) };
    inline UpdateOpsItemResponseBodyOpsItem& setResources(const vector<string> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline UpdateOpsItemResponseBodyOpsItem& setResources(vector<string> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline UpdateOpsItemResponseBodyOpsItem& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // solutions Field Functions 
    bool hasSolutions() const { return this->solutions_ != nullptr;};
    void deleteSolutions() { this->solutions_ = nullptr;};
    inline const vector<string> & solutions() const { DARABONBA_PTR_GET_CONST(solutions_, vector<string>) };
    inline vector<string> solutions() { DARABONBA_PTR_GET(solutions_, vector<string>) };
    inline UpdateOpsItemResponseBodyOpsItem& setSolutions(const vector<string> & solutions) { DARABONBA_PTR_SET_VALUE(solutions_, solutions) };
    inline UpdateOpsItemResponseBodyOpsItem& setSolutions(vector<string> && solutions) { DARABONBA_PTR_SET_RVALUE(solutions_, solutions) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline UpdateOpsItemResponseBodyOpsItem& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateOpsItemResponseBodyOpsItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline UpdateOpsItemResponseBodyOpsItem& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline UpdateOpsItemResponseBodyOpsItem& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateOpsItemResponseBodyOpsItem& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // updateDate Field Functions 
    bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
    void deleteUpdateDate() { this->updateDate_ = nullptr;};
    inline string updateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
    inline UpdateOpsItemResponseBodyOpsItem& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


  protected:
    // The attributes of the O\\&M item.
    std::shared_ptr<string> attributes_ = nullptr;
    // The category.
    std::shared_ptr<string> category_ = nullptr;
    // The time when the O\\&M item was created.
    std::shared_ptr<string> createDate_ = nullptr;
    // The user who created the patch baseline.
    std::shared_ptr<string> createdBy_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The user who modified the O\\&M item.
    std::shared_ptr<string> lastModifiedBy_ = nullptr;
    // The ID of the O\\&M item.
    std::shared_ptr<string> opsItemId_ = nullptr;
    // The priority.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ARNs of the associated resources.
    std::shared_ptr<vector<string>> resources_ = nullptr;
    // The severity level.
    std::shared_ptr<string> severity_ = nullptr;
    // The solutions.
    std::shared_ptr<vector<string>> solutions_ = nullptr;
    // The source business.
    std::shared_ptr<string> source_ = nullptr;
    // The status.
    std::shared_ptr<string> status_ = nullptr;
    // The tags.
    Darabonba::Json tags_ = nullptr;
    // The title of the O\\&M item.
    std::shared_ptr<string> title_ = nullptr;
    // The time when the O\\&M item was updated.
    std::shared_ptr<string> updateDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
