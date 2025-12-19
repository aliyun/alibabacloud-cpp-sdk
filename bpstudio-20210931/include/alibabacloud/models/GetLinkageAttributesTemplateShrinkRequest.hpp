// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINKAGEATTRIBUTESTEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLINKAGEATTRIBUTESTEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class GetLinkageAttributesTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLinkageAttributesTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AreaId, areaId_);
      DARABONBA_PTR_TO_JSON(Instances, instancesShrink_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(TargetVariable, targetVariable_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Variables, variablesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetLinkageAttributesTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AreaId, areaId_);
      DARABONBA_PTR_FROM_JSON(Instances, instancesShrink_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(TargetVariable, targetVariable_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Variables, variablesShrink_);
    };
    GetLinkageAttributesTemplateShrinkRequest() = default ;
    GetLinkageAttributesTemplateShrinkRequest(const GetLinkageAttributesTemplateShrinkRequest &) = default ;
    GetLinkageAttributesTemplateShrinkRequest(GetLinkageAttributesTemplateShrinkRequest &&) = default ;
    GetLinkageAttributesTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLinkageAttributesTemplateShrinkRequest() = default ;
    GetLinkageAttributesTemplateShrinkRequest& operator=(const GetLinkageAttributesTemplateShrinkRequest &) = default ;
    GetLinkageAttributesTemplateShrinkRequest& operator=(GetLinkageAttributesTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->areaId_ == nullptr
        && return this->instancesShrink_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->targetVariable_ == nullptr && return this->templateId_ == nullptr
        && return this->variablesShrink_ == nullptr; };
    // areaId Field Functions 
    bool hasAreaId() const { return this->areaId_ != nullptr;};
    void deleteAreaId() { this->areaId_ = nullptr;};
    inline string areaId() const { DARABONBA_PTR_GET_DEFAULT(areaId_, "") };
    inline GetLinkageAttributesTemplateShrinkRequest& setAreaId(string areaId) { DARABONBA_PTR_SET_VALUE(areaId_, areaId) };


    // instancesShrink Field Functions 
    bool hasInstancesShrink() const { return this->instancesShrink_ != nullptr;};
    void deleteInstancesShrink() { this->instancesShrink_ = nullptr;};
    inline string instancesShrink() const { DARABONBA_PTR_GET_DEFAULT(instancesShrink_, "") };
    inline GetLinkageAttributesTemplateShrinkRequest& setInstancesShrink(string instancesShrink) { DARABONBA_PTR_SET_VALUE(instancesShrink_, instancesShrink) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline GetLinkageAttributesTemplateShrinkRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetLinkageAttributesTemplateShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // targetVariable Field Functions 
    bool hasTargetVariable() const { return this->targetVariable_ != nullptr;};
    void deleteTargetVariable() { this->targetVariable_ = nullptr;};
    inline string targetVariable() const { DARABONBA_PTR_GET_DEFAULT(targetVariable_, "") };
    inline GetLinkageAttributesTemplateShrinkRequest& setTargetVariable(string targetVariable) { DARABONBA_PTR_SET_VALUE(targetVariable_, targetVariable) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetLinkageAttributesTemplateShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // variablesShrink Field Functions 
    bool hasVariablesShrink() const { return this->variablesShrink_ != nullptr;};
    void deleteVariablesShrink() { this->variablesShrink_ = nullptr;};
    inline string variablesShrink() const { DARABONBA_PTR_GET_DEFAULT(variablesShrink_, "") };
    inline GetLinkageAttributesTemplateShrinkRequest& setVariablesShrink(string variablesShrink) { DARABONBA_PTR_SET_VALUE(variablesShrink_, variablesShrink) };


  protected:
    std::shared_ptr<string> areaId_ = nullptr;
    std::shared_ptr<string> instancesShrink_ = nullptr;
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetVariable_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> variablesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
