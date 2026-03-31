// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATESRESPONSEBODY_HPP_
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
  class ListTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Templates, templates_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Templates, templates_);
    };
    ListTemplatesResponseBody() = default ;
    ListTemplatesResponseBody(const ListTemplatesResponseBody &) = default ;
    ListTemplatesResponseBody(ListTemplatesResponseBody &&) = default ;
    ListTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplatesResponseBody() = default ;
    ListTemplatesResponseBody& operator=(const ListTemplatesResponseBody &) = default ;
    ListTemplatesResponseBody& operator=(ListTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Templates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Templates& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(Constraints, constraints_);
        DARABONBA_PTR_TO_JSON(CreatedBy, createdBy_);
        DARABONBA_PTR_TO_JSON(CreatedDate, createdDate_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(HasTrigger, hasTrigger_);
        DARABONBA_PTR_TO_JSON(Hash, hash_);
        DARABONBA_PTR_TO_JSON(IsFavorite, isFavorite_);
        DARABONBA_PTR_TO_JSON(Popularity, popularity_);
        DARABONBA_PTR_TO_JSON(Publisher, publisher_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ShareType, shareType_);
        DARABONBA_ANY_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TemplateFormat, templateFormat_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
        DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
        DARABONBA_PTR_TO_JSON(TotalExecutionCount, totalExecutionCount_);
        DARABONBA_PTR_TO_JSON(UpdatedBy, updatedBy_);
        DARABONBA_PTR_TO_JSON(UpdatedDate, updatedDate_);
        DARABONBA_PTR_TO_JSON(VersionName, versionName_);
      };
      friend void from_json(const Darabonba::Json& j, Templates& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(Constraints, constraints_);
        DARABONBA_PTR_FROM_JSON(CreatedBy, createdBy_);
        DARABONBA_PTR_FROM_JSON(CreatedDate, createdDate_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(HasTrigger, hasTrigger_);
        DARABONBA_PTR_FROM_JSON(Hash, hash_);
        DARABONBA_PTR_FROM_JSON(IsFavorite, isFavorite_);
        DARABONBA_PTR_FROM_JSON(Popularity, popularity_);
        DARABONBA_PTR_FROM_JSON(Publisher, publisher_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
        DARABONBA_ANY_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TemplateFormat, templateFormat_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
        DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
        DARABONBA_PTR_FROM_JSON(TotalExecutionCount, totalExecutionCount_);
        DARABONBA_PTR_FROM_JSON(UpdatedBy, updatedBy_);
        DARABONBA_PTR_FROM_JSON(UpdatedDate, updatedDate_);
        DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
      };
      Templates() = default ;
      Templates(const Templates &) = default ;
      Templates(Templates &&) = default ;
      Templates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Templates() = default ;
      Templates& operator=(const Templates &) = default ;
      Templates& operator=(Templates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr
        && this->constraints_ == nullptr && this->createdBy_ == nullptr && this->createdDate_ == nullptr && this->description_ == nullptr && this->hasTrigger_ == nullptr
        && this->hash_ == nullptr && this->isFavorite_ == nullptr && this->popularity_ == nullptr && this->publisher_ == nullptr && this->resourceGroupId_ == nullptr
        && this->shareType_ == nullptr && this->tags_ == nullptr && this->templateFormat_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr
        && this->templateType_ == nullptr && this->templateVersion_ == nullptr && this->totalExecutionCount_ == nullptr && this->updatedBy_ == nullptr && this->updatedDate_ == nullptr
        && this->versionName_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Templates& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // constraints Field Functions 
      bool hasConstraints() const { return this->constraints_ != nullptr;};
      void deleteConstraints() { this->constraints_ = nullptr;};
      inline string getConstraints() const { DARABONBA_PTR_GET_DEFAULT(constraints_, "") };
      inline Templates& setConstraints(string constraints) { DARABONBA_PTR_SET_VALUE(constraints_, constraints) };


      // createdBy Field Functions 
      bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
      void deleteCreatedBy() { this->createdBy_ = nullptr;};
      inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
      inline Templates& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


      // createdDate Field Functions 
      bool hasCreatedDate() const { return this->createdDate_ != nullptr;};
      void deleteCreatedDate() { this->createdDate_ = nullptr;};
      inline string getCreatedDate() const { DARABONBA_PTR_GET_DEFAULT(createdDate_, "") };
      inline Templates& setCreatedDate(string createdDate) { DARABONBA_PTR_SET_VALUE(createdDate_, createdDate) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Templates& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // hasTrigger Field Functions 
      bool hasHasTrigger() const { return this->hasTrigger_ != nullptr;};
      void deleteHasTrigger() { this->hasTrigger_ = nullptr;};
      inline bool getHasTrigger() const { DARABONBA_PTR_GET_DEFAULT(hasTrigger_, false) };
      inline Templates& setHasTrigger(bool hasTrigger) { DARABONBA_PTR_SET_VALUE(hasTrigger_, hasTrigger) };


      // hash Field Functions 
      bool hasHash() const { return this->hash_ != nullptr;};
      void deleteHash() { this->hash_ = nullptr;};
      inline string getHash() const { DARABONBA_PTR_GET_DEFAULT(hash_, "") };
      inline Templates& setHash(string hash) { DARABONBA_PTR_SET_VALUE(hash_, hash) };


      // isFavorite Field Functions 
      bool hasIsFavorite() const { return this->isFavorite_ != nullptr;};
      void deleteIsFavorite() { this->isFavorite_ = nullptr;};
      inline bool getIsFavorite() const { DARABONBA_PTR_GET_DEFAULT(isFavorite_, false) };
      inline Templates& setIsFavorite(bool isFavorite) { DARABONBA_PTR_SET_VALUE(isFavorite_, isFavorite) };


      // popularity Field Functions 
      bool hasPopularity() const { return this->popularity_ != nullptr;};
      void deletePopularity() { this->popularity_ = nullptr;};
      inline int32_t getPopularity() const { DARABONBA_PTR_GET_DEFAULT(popularity_, 0) };
      inline Templates& setPopularity(int32_t popularity) { DARABONBA_PTR_SET_VALUE(popularity_, popularity) };


      // publisher Field Functions 
      bool hasPublisher() const { return this->publisher_ != nullptr;};
      void deletePublisher() { this->publisher_ = nullptr;};
      inline string getPublisher() const { DARABONBA_PTR_GET_DEFAULT(publisher_, "") };
      inline Templates& setPublisher(string publisher) { DARABONBA_PTR_SET_VALUE(publisher_, publisher) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Templates& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // shareType Field Functions 
      bool hasShareType() const { return this->shareType_ != nullptr;};
      void deleteShareType() { this->shareType_ = nullptr;};
      inline string getShareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
      inline Templates& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline       const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
      Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
      inline Templates& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
      inline Templates& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


      // templateFormat Field Functions 
      bool hasTemplateFormat() const { return this->templateFormat_ != nullptr;};
      void deleteTemplateFormat() { this->templateFormat_ = nullptr;};
      inline string getTemplateFormat() const { DARABONBA_PTR_GET_DEFAULT(templateFormat_, "") };
      inline Templates& setTemplateFormat(string templateFormat) { DARABONBA_PTR_SET_VALUE(templateFormat_, templateFormat) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Templates& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Templates& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline Templates& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


      // templateVersion Field Functions 
      bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
      void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
      inline string getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
      inline Templates& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


      // totalExecutionCount Field Functions 
      bool hasTotalExecutionCount() const { return this->totalExecutionCount_ != nullptr;};
      void deleteTotalExecutionCount() { this->totalExecutionCount_ = nullptr;};
      inline int32_t getTotalExecutionCount() const { DARABONBA_PTR_GET_DEFAULT(totalExecutionCount_, 0) };
      inline Templates& setTotalExecutionCount(int32_t totalExecutionCount) { DARABONBA_PTR_SET_VALUE(totalExecutionCount_, totalExecutionCount) };


      // updatedBy Field Functions 
      bool hasUpdatedBy() const { return this->updatedBy_ != nullptr;};
      void deleteUpdatedBy() { this->updatedBy_ = nullptr;};
      inline string getUpdatedBy() const { DARABONBA_PTR_GET_DEFAULT(updatedBy_, "") };
      inline Templates& setUpdatedBy(string updatedBy) { DARABONBA_PTR_SET_VALUE(updatedBy_, updatedBy) };


      // updatedDate Field Functions 
      bool hasUpdatedDate() const { return this->updatedDate_ != nullptr;};
      void deleteUpdatedDate() { this->updatedDate_ = nullptr;};
      inline string getUpdatedDate() const { DARABONBA_PTR_GET_DEFAULT(updatedDate_, "") };
      inline Templates& setUpdatedDate(string updatedDate) { DARABONBA_PTR_SET_VALUE(updatedDate_, updatedDate) };


      // versionName Field Functions 
      bool hasVersionName() const { return this->versionName_ != nullptr;};
      void deleteVersionName() { this->versionName_ = nullptr;};
      inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
      inline Templates& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


    protected:
      // The template type.
      shared_ptr<string> category_ {};
      // The template constraints.
      shared_ptr<string> constraints_ {};
      // The user who created the template.
      shared_ptr<string> createdBy_ {};
      // The creation time of the template.
      shared_ptr<string> createdDate_ {};
      // The template description.
      shared_ptr<string> description_ {};
      // Indicates whether the template was configured with a trigger.
      shared_ptr<bool> hasTrigger_ {};
      // The SHA256 value of the template content.
      shared_ptr<string> hash_ {};
      // Indicates whether the template is added to favorites.
      shared_ptr<bool> isFavorite_ {};
      // The popularity of the public template. Valid values: **1-10**. A greater value indicates higher popularity. If **ShareType** is set to **Private**, the value of this parameter is `-1`.
      // 
      // >  This parameter is valid only if **ShareType** is set to **Public**.
      shared_ptr<int32_t> popularity_ {};
      // The user who published the template.
      shared_ptr<string> publisher_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The share type of the template. The share type of a template created by a user is **Private**. Valid values:
      // 
      // *   **Public**
      // *   **Private**
      shared_ptr<string> shareType_ {};
      // The tag keys and values. The number of key-value pairs ranges from 1 to 20.
      Darabonba::Json tags_ {};
      // The template format. The system automatically determines whether the format of the template is JSON or YAML.
      shared_ptr<string> templateFormat_ {};
      // The template ID.
      shared_ptr<string> templateId_ {};
      // The template name.
      shared_ptr<string> templateName_ {};
      // The template type.
      shared_ptr<string> templateType_ {};
      // The template version. The version contains the letter v and a number. The number starts from 1.
      shared_ptr<string> templateVersion_ {};
      // The number of times for which the private template is executed. If **ShareType** is set to **Public**, the value of this parameter is `-1`.
      // 
      // >  This parameter is valid only if **ShareType** is set to **Private**.
      shared_ptr<int32_t> totalExecutionCount_ {};
      // The user who last updated the template.
      shared_ptr<string> updatedBy_ {};
      // The time when the template was last updated.
      shared_ptr<string> updatedDate_ {};
      // The version name.
      shared_ptr<string> versionName_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->templates_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTemplatesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTemplatesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const vector<ListTemplatesResponseBody::Templates> & getTemplates() const { DARABONBA_PTR_GET_CONST(templates_, vector<ListTemplatesResponseBody::Templates>) };
    inline vector<ListTemplatesResponseBody::Templates> getTemplates() { DARABONBA_PTR_GET(templates_, vector<ListTemplatesResponseBody::Templates>) };
    inline ListTemplatesResponseBody& setTemplates(const vector<ListTemplatesResponseBody::Templates> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline ListTemplatesResponseBody& setTemplates(vector<ListTemplatesResponseBody::Templates> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


  protected:
    // The number of entries returned on each page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to retrieve the next page of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The template metadata.
    shared_ptr<vector<ListTemplatesResponseBody::Templates>> templates_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
