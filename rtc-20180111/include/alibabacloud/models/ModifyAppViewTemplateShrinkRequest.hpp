// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPVIEWTEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPVIEWTEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class ModifyAppViewTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppViewTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Template, templateShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppViewTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Template, templateShrink_);
    };
    ModifyAppViewTemplateShrinkRequest() = default ;
    ModifyAppViewTemplateShrinkRequest(const ModifyAppViewTemplateShrinkRequest &) = default ;
    ModifyAppViewTemplateShrinkRequest(ModifyAppViewTemplateShrinkRequest &&) = default ;
    ModifyAppViewTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppViewTemplateShrinkRequest() = default ;
    ModifyAppViewTemplateShrinkRequest& operator=(const ModifyAppViewTemplateShrinkRequest &) = default ;
    ModifyAppViewTemplateShrinkRequest& operator=(ModifyAppViewTemplateShrinkRequest &&) = default ;
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
    inline ModifyAppViewTemplateShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // templateShrink Field Functions 
    bool hasTemplateShrink() const { return this->templateShrink_ != nullptr;};
    void deleteTemplateShrink() { this->templateShrink_ = nullptr;};
    inline string templateShrink() const { DARABONBA_PTR_GET_DEFAULT(templateShrink_, "") };
    inline ModifyAppViewTemplateShrinkRequest& setTemplateShrink(string templateShrink) { DARABONBA_PTR_SET_VALUE(templateShrink_, templateShrink) };


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
