// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDEFAULTCUSTOMTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDEFAULTCUSTOMTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SetDefaultCustomTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDefaultCustomTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, SetDefaultCustomTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    SetDefaultCustomTemplateRequest() = default ;
    SetDefaultCustomTemplateRequest(const SetDefaultCustomTemplateRequest &) = default ;
    SetDefaultCustomTemplateRequest(SetDefaultCustomTemplateRequest &&) = default ;
    SetDefaultCustomTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDefaultCustomTemplateRequest() = default ;
    SetDefaultCustomTemplateRequest& operator=(const SetDefaultCustomTemplateRequest &) = default ;
    SetDefaultCustomTemplateRequest& operator=(SetDefaultCustomTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templateId_ == nullptr; };
    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SetDefaultCustomTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The template ID.
    // 
    // This parameter is required.
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
