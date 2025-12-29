// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(template_id, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(template_id, templateId_);
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
    virtual bool empty() const override { return this->templateId_ == nullptr; };
    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateTemplateResponseBody& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The ID of the orchestration template.
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
