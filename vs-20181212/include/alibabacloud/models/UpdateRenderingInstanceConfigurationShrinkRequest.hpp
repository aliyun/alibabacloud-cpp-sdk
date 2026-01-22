// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERENDERINGINSTANCECONFIGURATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERENDERINGINSTANCECONFIGURATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class UpdateRenderingInstanceConfigurationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRenderingInstanceConfigurationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Configuration, configurationShrink_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRenderingInstanceConfigurationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Configuration, configurationShrink_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    UpdateRenderingInstanceConfigurationShrinkRequest() = default ;
    UpdateRenderingInstanceConfigurationShrinkRequest(const UpdateRenderingInstanceConfigurationShrinkRequest &) = default ;
    UpdateRenderingInstanceConfigurationShrinkRequest(UpdateRenderingInstanceConfigurationShrinkRequest &&) = default ;
    UpdateRenderingInstanceConfigurationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRenderingInstanceConfigurationShrinkRequest() = default ;
    UpdateRenderingInstanceConfigurationShrinkRequest& operator=(const UpdateRenderingInstanceConfigurationShrinkRequest &) = default ;
    UpdateRenderingInstanceConfigurationShrinkRequest& operator=(UpdateRenderingInstanceConfigurationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configurationShrink_ == nullptr
        && this->renderingInstanceId_ == nullptr; };
    // configurationShrink Field Functions 
    bool hasConfigurationShrink() const { return this->configurationShrink_ != nullptr;};
    void deleteConfigurationShrink() { this->configurationShrink_ = nullptr;};
    inline string getConfigurationShrink() const { DARABONBA_PTR_GET_DEFAULT(configurationShrink_, "") };
    inline UpdateRenderingInstanceConfigurationShrinkRequest& setConfigurationShrink(string configurationShrink) { DARABONBA_PTR_SET_VALUE(configurationShrink_, configurationShrink) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline UpdateRenderingInstanceConfigurationShrinkRequest& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> configurationShrink_ {};
    // This parameter is required.
    shared_ptr<string> renderingInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
