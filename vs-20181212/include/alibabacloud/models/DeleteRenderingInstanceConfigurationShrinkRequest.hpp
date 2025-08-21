// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERENDERINGINSTANCECONFIGURATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERENDERINGINSTANCECONFIGURATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DeleteRenderingInstanceConfigurationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRenderingInstanceConfigurationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Configuration, configurationShrink_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRenderingInstanceConfigurationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Configuration, configurationShrink_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    DeleteRenderingInstanceConfigurationShrinkRequest() = default ;
    DeleteRenderingInstanceConfigurationShrinkRequest(const DeleteRenderingInstanceConfigurationShrinkRequest &) = default ;
    DeleteRenderingInstanceConfigurationShrinkRequest(DeleteRenderingInstanceConfigurationShrinkRequest &&) = default ;
    DeleteRenderingInstanceConfigurationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRenderingInstanceConfigurationShrinkRequest() = default ;
    DeleteRenderingInstanceConfigurationShrinkRequest& operator=(const DeleteRenderingInstanceConfigurationShrinkRequest &) = default ;
    DeleteRenderingInstanceConfigurationShrinkRequest& operator=(DeleteRenderingInstanceConfigurationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configurationShrink_ != nullptr
        && this->renderingInstanceId_ != nullptr; };
    // configurationShrink Field Functions 
    bool hasConfigurationShrink() const { return this->configurationShrink_ != nullptr;};
    void deleteConfigurationShrink() { this->configurationShrink_ = nullptr;};
    inline string configurationShrink() const { DARABONBA_PTR_GET_DEFAULT(configurationShrink_, "") };
    inline DeleteRenderingInstanceConfigurationShrinkRequest& setConfigurationShrink(string configurationShrink) { DARABONBA_PTR_SET_VALUE(configurationShrink_, configurationShrink) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string renderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline DeleteRenderingInstanceConfigurationShrinkRequest& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


  protected:
    std::shared_ptr<string> configurationShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> renderingInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
