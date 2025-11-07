// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateTemplateResponseBodyTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreateTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Template, template_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    CreateTemplateResponseBody() = default ;
    CreateTemplateResponseBody(const CreateTemplateResponseBody &) = default ;
    CreateTemplateResponseBody(CreateTemplateResponseBody &&) = default ;
    CreateTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTemplateResponseBody() = default ;
    CreateTemplateResponseBody& operator=(const CreateTemplateResponseBody &) = default ;
    CreateTemplateResponseBody& operator=(CreateTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->template_ == nullptr && return this->templateType_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const CreateTemplateResponseBodyTemplate & _template() const { DARABONBA_PTR_GET_CONST(template_, CreateTemplateResponseBodyTemplate) };
    inline CreateTemplateResponseBodyTemplate _template() { DARABONBA_PTR_GET(template_, CreateTemplateResponseBodyTemplate) };
    inline CreateTemplateResponseBody& setTemplate(const CreateTemplateResponseBodyTemplate & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline CreateTemplateResponseBody& setTemplate(CreateTemplateResponseBodyTemplate && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline CreateTemplateResponseBody& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The metadata of the template.
    std::shared_ptr<CreateTemplateResponseBodyTemplate> template_ = nullptr;
    // The type of the template.
    std::shared_ptr<string> templateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
