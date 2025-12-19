// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTemplateResponseBodyDataTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class ListTemplateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DocumentUrl, documentUrl_);
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TagId, tagId_);
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DocumentUrl, documentUrl_);
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TagId, tagId_);
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    ListTemplateResponseBodyData() = default ;
    ListTemplateResponseBodyData(const ListTemplateResponseBodyData &) = default ;
    ListTemplateResponseBodyData(ListTemplateResponseBodyData &&) = default ;
    ListTemplateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplateResponseBodyData() = default ;
    ListTemplateResponseBodyData& operator=(const ListTemplateResponseBodyData &) = default ;
    ListTemplateResponseBodyData& operator=(ListTemplateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->documentUrl_ == nullptr && return this->imageURL_ == nullptr && return this->name_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->tag_ == nullptr && return this->tagId_ == nullptr && return this->tagName_ == nullptr && return this->templateId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListTemplateResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListTemplateResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // documentUrl Field Functions 
    bool hasDocumentUrl() const { return this->documentUrl_ != nullptr;};
    void deleteDocumentUrl() { this->documentUrl_ = nullptr;};
    inline string documentUrl() const { DARABONBA_PTR_GET_DEFAULT(documentUrl_, "") };
    inline ListTemplateResponseBodyData& setDocumentUrl(string documentUrl) { DARABONBA_PTR_SET_VALUE(documentUrl_, documentUrl) };


    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline ListTemplateResponseBodyData& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTemplateResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListTemplateResponseBodyData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::ListTemplateResponseBodyDataTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::ListTemplateResponseBodyDataTag>) };
    inline vector<Models::ListTemplateResponseBodyDataTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::ListTemplateResponseBodyDataTag>) };
    inline ListTemplateResponseBodyData& setTag(const vector<Models::ListTemplateResponseBodyDataTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListTemplateResponseBodyData& setTag(vector<Models::ListTemplateResponseBodyDataTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // tagId Field Functions 
    bool hasTagId() const { return this->tagId_ != nullptr;};
    void deleteTagId() { this->tagId_ = nullptr;};
    inline int32_t tagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, 0) };
    inline ListTemplateResponseBodyData& setTagId(int32_t tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline ListTemplateResponseBodyData& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListTemplateResponseBodyData& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The time when the template was created.
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> documentUrl_ = nullptr;
    // The URL of the architecture image.
    std::shared_ptr<string> imageURL_ = nullptr;
    // The name of the template.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<vector<Models::ListTemplateResponseBodyDataTag>> tag_ = nullptr;
    // The ID of the tag that is added to the template.
    std::shared_ptr<int32_t> tagId_ = nullptr;
    // The name of the tag that is added to the template.
    std::shared_ptr<string> tagName_ = nullptr;
    // The ID of the template.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
