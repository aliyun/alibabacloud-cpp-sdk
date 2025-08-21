// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERENDERINGINSTANCESETTINGSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERENDERINGINSTANCESETTINGSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class UpdateRenderingInstanceSettingsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRenderingInstanceSettingsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_TO_JSON(Settings, settingsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRenderingInstanceSettingsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_FROM_JSON(Settings, settingsShrink_);
    };
    UpdateRenderingInstanceSettingsShrinkRequest() = default ;
    UpdateRenderingInstanceSettingsShrinkRequest(const UpdateRenderingInstanceSettingsShrinkRequest &) = default ;
    UpdateRenderingInstanceSettingsShrinkRequest(UpdateRenderingInstanceSettingsShrinkRequest &&) = default ;
    UpdateRenderingInstanceSettingsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRenderingInstanceSettingsShrinkRequest() = default ;
    UpdateRenderingInstanceSettingsShrinkRequest& operator=(const UpdateRenderingInstanceSettingsShrinkRequest &) = default ;
    UpdateRenderingInstanceSettingsShrinkRequest& operator=(UpdateRenderingInstanceSettingsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->renderingInstanceId_ != nullptr
        && this->settingsShrink_ != nullptr; };
    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string renderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline UpdateRenderingInstanceSettingsShrinkRequest& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    // settingsShrink Field Functions 
    bool hasSettingsShrink() const { return this->settingsShrink_ != nullptr;};
    void deleteSettingsShrink() { this->settingsShrink_ = nullptr;};
    inline string settingsShrink() const { DARABONBA_PTR_GET_DEFAULT(settingsShrink_, "") };
    inline UpdateRenderingInstanceSettingsShrinkRequest& setSettingsShrink(string settingsShrink) { DARABONBA_PTR_SET_VALUE(settingsShrink_, settingsShrink) };


  protected:
    std::shared_ptr<string> renderingInstanceId_ = nullptr;
    std::shared_ptr<string> settingsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
