// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPVIEWTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPVIEWTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAppViewTemplateRequestTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class CreateAppViewTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppViewTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppViewTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    CreateAppViewTemplateRequest() = default ;
    CreateAppViewTemplateRequest(const CreateAppViewTemplateRequest &) = default ;
    CreateAppViewTemplateRequest(CreateAppViewTemplateRequest &&) = default ;
    CreateAppViewTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppViewTemplateRequest() = default ;
    CreateAppViewTemplateRequest& operator=(const CreateAppViewTemplateRequest &) = default ;
    CreateAppViewTemplateRequest& operator=(CreateAppViewTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->template_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateAppViewTemplateRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const CreateAppViewTemplateRequestTemplate & _template() const { DARABONBA_PTR_GET_CONST(template_, CreateAppViewTemplateRequestTemplate) };
    inline CreateAppViewTemplateRequestTemplate _template() { DARABONBA_PTR_GET(template_, CreateAppViewTemplateRequestTemplate) };
    inline CreateAppViewTemplateRequest& setTemplate(const CreateAppViewTemplateRequestTemplate & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline CreateAppViewTemplateRequest& setTemplate(CreateAppViewTemplateRequestTemplate && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreateAppViewTemplateRequestTemplate> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
