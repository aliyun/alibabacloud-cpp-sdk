// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPVIEWTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPVIEWTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyAppViewTemplateRequestTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class ModifyAppViewTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppViewTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppViewTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    ModifyAppViewTemplateRequest() = default ;
    ModifyAppViewTemplateRequest(const ModifyAppViewTemplateRequest &) = default ;
    ModifyAppViewTemplateRequest(ModifyAppViewTemplateRequest &&) = default ;
    ModifyAppViewTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppViewTemplateRequest() = default ;
    ModifyAppViewTemplateRequest& operator=(const ModifyAppViewTemplateRequest &) = default ;
    ModifyAppViewTemplateRequest& operator=(ModifyAppViewTemplateRequest &&) = default ;
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
    inline ModifyAppViewTemplateRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const ModifyAppViewTemplateRequestTemplate & _template() const { DARABONBA_PTR_GET_CONST(template_, ModifyAppViewTemplateRequestTemplate) };
    inline ModifyAppViewTemplateRequestTemplate _template() { DARABONBA_PTR_GET(template_, ModifyAppViewTemplateRequestTemplate) };
    inline ModifyAppViewTemplateRequest& setTemplate(const ModifyAppViewTemplateRequestTemplate & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline ModifyAppViewTemplateRequest& setTemplate(ModifyAppViewTemplateRequestTemplate && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ModifyAppViewTemplateRequestTemplate> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
