// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERENDERINGINSTANCESETTINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERENDERINGINSTANCESETTINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateRenderingInstanceSettingsRequestSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class UpdateRenderingInstanceSettingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRenderingInstanceSettingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_TO_JSON(Settings, settings_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRenderingInstanceSettingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_FROM_JSON(Settings, settings_);
    };
    UpdateRenderingInstanceSettingsRequest() = default ;
    UpdateRenderingInstanceSettingsRequest(const UpdateRenderingInstanceSettingsRequest &) = default ;
    UpdateRenderingInstanceSettingsRequest(UpdateRenderingInstanceSettingsRequest &&) = default ;
    UpdateRenderingInstanceSettingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRenderingInstanceSettingsRequest() = default ;
    UpdateRenderingInstanceSettingsRequest& operator=(const UpdateRenderingInstanceSettingsRequest &) = default ;
    UpdateRenderingInstanceSettingsRequest& operator=(UpdateRenderingInstanceSettingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->renderingInstanceId_ == nullptr
        && return this->settings_ == nullptr; };
    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string renderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline UpdateRenderingInstanceSettingsRequest& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline const vector<UpdateRenderingInstanceSettingsRequestSettings> & settings() const { DARABONBA_PTR_GET_CONST(settings_, vector<UpdateRenderingInstanceSettingsRequestSettings>) };
    inline vector<UpdateRenderingInstanceSettingsRequestSettings> settings() { DARABONBA_PTR_GET(settings_, vector<UpdateRenderingInstanceSettingsRequestSettings>) };
    inline UpdateRenderingInstanceSettingsRequest& setSettings(const vector<UpdateRenderingInstanceSettingsRequestSettings> & settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };
    inline UpdateRenderingInstanceSettingsRequest& setSettings(vector<UpdateRenderingInstanceSettingsRequestSettings> && settings) { DARABONBA_PTR_SET_RVALUE(settings_, settings) };


  protected:
    std::shared_ptr<string> renderingInstanceId_ = nullptr;
    std::shared_ptr<vector<UpdateRenderingInstanceSettingsRequestSettings>> settings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
