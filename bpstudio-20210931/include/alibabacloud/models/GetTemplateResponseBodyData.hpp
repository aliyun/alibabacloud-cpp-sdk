// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTemplateResponseBodyDataVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class GetTemplateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DocumentUrl, documentUrl_);
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DocumentUrl, documentUrl_);
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    GetTemplateResponseBodyData() = default ;
    GetTemplateResponseBodyData(const GetTemplateResponseBodyData &) = default ;
    GetTemplateResponseBodyData(GetTemplateResponseBodyData &&) = default ;
    GetTemplateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateResponseBodyData() = default ;
    GetTemplateResponseBodyData& operator=(const GetTemplateResponseBodyData &) = default ;
    GetTemplateResponseBodyData& operator=(GetTemplateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->documentUrl_ == nullptr && return this->imageURL_ == nullptr && return this->name_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->templateId_ == nullptr && return this->variables_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetTemplateResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetTemplateResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // documentUrl Field Functions 
    bool hasDocumentUrl() const { return this->documentUrl_ != nullptr;};
    void deleteDocumentUrl() { this->documentUrl_ = nullptr;};
    inline string documentUrl() const { DARABONBA_PTR_GET_DEFAULT(documentUrl_, "") };
    inline GetTemplateResponseBodyData& setDocumentUrl(string documentUrl) { DARABONBA_PTR_SET_VALUE(documentUrl_, documentUrl) };


    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline GetTemplateResponseBodyData& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetTemplateResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetTemplateResponseBodyData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetTemplateResponseBodyData& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<Models::GetTemplateResponseBodyDataVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Models::GetTemplateResponseBodyDataVariables>) };
    inline vector<Models::GetTemplateResponseBodyDataVariables> variables() { DARABONBA_PTR_GET(variables_, vector<Models::GetTemplateResponseBodyDataVariables>) };
    inline GetTemplateResponseBodyData& setVariables(const vector<Models::GetTemplateResponseBodyDataVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline GetTemplateResponseBodyData& setVariables(vector<Models::GetTemplateResponseBodyDataVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    // The time when the template was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // Template Description
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> documentUrl_ = nullptr;
    // The path to the template schema image file
    std::shared_ptr<string> imageURL_ = nullptr;
    // The name of the template
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Template ID
    std::shared_ptr<string> templateId_ = nullptr;
    // The details of the template variables.
    std::shared_ptr<vector<Models::GetTemplateResponseBodyDataVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
