// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPVIEWTEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPVIEWTEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class CreateAppViewTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppViewTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Template, templateShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppViewTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Template, templateShrink_);
    };
    CreateAppViewTemplateShrinkRequest() = default ;
    CreateAppViewTemplateShrinkRequest(const CreateAppViewTemplateShrinkRequest &) = default ;
    CreateAppViewTemplateShrinkRequest(CreateAppViewTemplateShrinkRequest &&) = default ;
    CreateAppViewTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppViewTemplateShrinkRequest() = default ;
    CreateAppViewTemplateShrinkRequest& operator=(const CreateAppViewTemplateShrinkRequest &) = default ;
    CreateAppViewTemplateShrinkRequest& operator=(CreateAppViewTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->templateShrink_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateAppViewTemplateShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // templateShrink Field Functions 
    bool hasTemplateShrink() const { return this->templateShrink_ != nullptr;};
    void deleteTemplateShrink() { this->templateShrink_ = nullptr;};
    inline string templateShrink() const { DARABONBA_PTR_GET_DEFAULT(templateShrink_, "") };
    inline CreateAppViewTemplateShrinkRequest& setTemplateShrink(string templateShrink) { DARABONBA_PTR_SET_VALUE(templateShrink_, templateShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
