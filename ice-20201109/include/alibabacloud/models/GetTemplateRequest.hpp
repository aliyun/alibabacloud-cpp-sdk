// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RelatedMediaidFlag, relatedMediaidFlag_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RelatedMediaidFlag, relatedMediaidFlag_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    GetTemplateRequest() = default ;
    GetTemplateRequest(const GetTemplateRequest &) = default ;
    GetTemplateRequest(GetTemplateRequest &&) = default ;
    GetTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateRequest() = default ;
    GetTemplateRequest& operator=(const GetTemplateRequest &) = default ;
    GetTemplateRequest& operator=(GetTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->relatedMediaidFlag_ == nullptr
        && return this->templateId_ == nullptr; };
    // relatedMediaidFlag Field Functions 
    bool hasRelatedMediaidFlag() const { return this->relatedMediaidFlag_ != nullptr;};
    void deleteRelatedMediaidFlag() { this->relatedMediaidFlag_ = nullptr;};
    inline string relatedMediaidFlag() const { DARABONBA_PTR_GET_DEFAULT(relatedMediaidFlag_, "") };
    inline GetTemplateRequest& setRelatedMediaidFlag(string relatedMediaidFlag) { DARABONBA_PTR_SET_VALUE(relatedMediaidFlag_, relatedMediaidFlag) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // Specifies whether to return the information about the associated materials. Default value: 0. Valid values: 0 and 1. A value of 1 specifies that the information about the associated materials is returned. This parameter is valid only for regular templates.
    std::shared_ptr<string> relatedMediaidFlag_ = nullptr;
    // The template ID.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
