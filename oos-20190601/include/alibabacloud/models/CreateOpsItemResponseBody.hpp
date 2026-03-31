// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOPSITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEOPSITEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreateOpsItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOpsItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OpsItem, opsItem_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOpsItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OpsItem, opsItem_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateOpsItemResponseBody() = default ;
    CreateOpsItemResponseBody(const CreateOpsItemResponseBody &) = default ;
    CreateOpsItemResponseBody(CreateOpsItemResponseBody &&) = default ;
    CreateOpsItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOpsItemResponseBody() = default ;
    CreateOpsItemResponseBody& operator=(const CreateOpsItemResponseBody &) = default ;
    CreateOpsItemResponseBody& operator=(CreateOpsItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OpsItem : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OpsItem& obj) { 
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
      friend void from_json(const Darabonba::Json& j, OpsItem& obj) { 
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
      OpsItem() = default ;
      OpsItem(const OpsItem &) = default ;
      OpsItem(OpsItem &&) = default ;
      OpsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OpsItem() = default ;
      OpsItem& operator=(const OpsItem &) = default ;
      OpsItem& operator=(OpsItem &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attributes_ == nullptr
        && this->category_ == nullptr && this->createDate_ == nullptr && this->createdBy_ == nullptr && this->description_ == nullptr && this->lastModifiedBy_ == nullptr
        && this->opsItemId_ == nullptr && this->priority_ == nullptr && this->resourceGroupId_ == nullptr && this->resources_ == nullptr && this->severity_ == nullptr
        && this->solutions_ == nullptr && this->source_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->title_ == nullptr
        && this->updateDate_ == nullptr; };
      // attributes Field Functions 
      bool hasAttributes() const { return this->attributes_ != nullptr;};
      void deleteAttributes() { this->attributes_ = nullptr;};
      inline string getAttributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, "") };
      inline OpsItem& setAttributes(string attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline OpsItem& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline OpsItem& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // createdBy Field Functions 
      bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
      void deleteCreatedBy() { this->createdBy_ = nullptr;};
      inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
      inline OpsItem& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline OpsItem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // lastModifiedBy Field Functions 
      bool hasLastModifiedBy() const { return this->lastModifiedBy_ != nullptr;};
      void deleteLastModifiedBy() { this->lastModifiedBy_ = nullptr;};
      inline string getLastModifiedBy() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedBy_, "") };
      inline OpsItem& setLastModifiedBy(string lastModifiedBy) { DARABONBA_PTR_SET_VALUE(lastModifiedBy_, lastModifiedBy) };


      // opsItemId Field Functions 
      bool hasOpsItemId() const { return this->opsItemId_ != nullptr;};
      void deleteOpsItemId() { this->opsItemId_ = nullptr;};
      inline string getOpsItemId() const { DARABONBA_PTR_GET_DEFAULT(opsItemId_, "") };
      inline OpsItem& setOpsItemId(string opsItemId) { DARABONBA_PTR_SET_VALUE(opsItemId_, opsItemId) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline OpsItem& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline OpsItem& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // resources Field Functions 
      bool hasResources() const { return this->resources_ != nullptr;};
      void deleteResources() { this->resources_ = nullptr;};
      inline string getResources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
      inline OpsItem& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


      // severity Field Functions 
      bool hasSeverity() const { return this->severity_ != nullptr;};
      void deleteSeverity() { this->severity_ = nullptr;};
      inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
      inline OpsItem& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


      // solutions Field Functions 
      bool hasSolutions() const { return this->solutions_ != nullptr;};
      void deleteSolutions() { this->solutions_ = nullptr;};
      inline string getSolutions() const { DARABONBA_PTR_GET_DEFAULT(solutions_, "") };
      inline OpsItem& setSolutions(string solutions) { DARABONBA_PTR_SET_VALUE(solutions_, solutions) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline OpsItem& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline OpsItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline       const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
      Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
      inline OpsItem& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
      inline OpsItem& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline OpsItem& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // updateDate Field Functions 
      bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
      void deleteUpdateDate() { this->updateDate_ = nullptr;};
      inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
      inline OpsItem& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


    protected:
      // The attributes of the O\\&M item.
      shared_ptr<string> attributes_ {};
      // The category of the O\\&M item.
      shared_ptr<string> category_ {};
      // The time when the O\\&M item was created.
      shared_ptr<string> createDate_ {};
      // The user who created the O\\&M item.
      shared_ptr<string> createdBy_ {};
      // The description of the O\\&M item.
      shared_ptr<string> description_ {};
      // The user who last modified the O\\&M item.
      shared_ptr<string> lastModifiedBy_ {};
      // The ID of the O\\&M item.
      shared_ptr<string> opsItemId_ {};
      // The priority of the O\\&M item.
      shared_ptr<int32_t> priority_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The ARNs of the associated resources.
      shared_ptr<string> resources_ {};
      // The severity level of the O\\&M item.
      shared_ptr<string> severity_ {};
      // The solutions.
      shared_ptr<string> solutions_ {};
      // The source business of the O\\&M item.
      shared_ptr<string> source_ {};
      // The state of the O\\&M item.
      shared_ptr<string> status_ {};
      // The tags of the O\\&M item.
      Darabonba::Json tags_ {};
      // The title of the O\\&M item.
      shared_ptr<string> title_ {};
      // The time when the O\\&M item was updated.
      shared_ptr<string> updateDate_ {};
    };

    virtual bool empty() const override { return this->opsItem_ == nullptr
        && this->requestId_ == nullptr; };
    // opsItem Field Functions 
    bool hasOpsItem() const { return this->opsItem_ != nullptr;};
    void deleteOpsItem() { this->opsItem_ = nullptr;};
    inline const CreateOpsItemResponseBody::OpsItem & getOpsItem() const { DARABONBA_PTR_GET_CONST(opsItem_, CreateOpsItemResponseBody::OpsItem) };
    inline CreateOpsItemResponseBody::OpsItem getOpsItem() { DARABONBA_PTR_GET(opsItem_, CreateOpsItemResponseBody::OpsItem) };
    inline CreateOpsItemResponseBody& setOpsItem(const CreateOpsItemResponseBody::OpsItem & opsItem) { DARABONBA_PTR_SET_VALUE(opsItem_, opsItem) };
    inline CreateOpsItemResponseBody& setOpsItem(CreateOpsItemResponseBody::OpsItem && opsItem) { DARABONBA_PTR_SET_RVALUE(opsItem_, opsItem) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOpsItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the O\\&M item.
    shared_ptr<CreateOpsItemResponseBody::OpsItem> opsItem_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
