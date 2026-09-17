// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADERENDERINGINSTANCEIMAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADERENDERINGINSTANCEIMAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class UpgradeRenderingInstanceImageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeRenderingInstanceImageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceIds, renderingInstanceIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeRenderingInstanceImageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceIds, renderingInstanceIdsShrink_);
    };
    UpgradeRenderingInstanceImageShrinkRequest() = default ;
    UpgradeRenderingInstanceImageShrinkRequest(const UpgradeRenderingInstanceImageShrinkRequest &) = default ;
    UpgradeRenderingInstanceImageShrinkRequest(UpgradeRenderingInstanceImageShrinkRequest &&) = default ;
    UpgradeRenderingInstanceImageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeRenderingInstanceImageShrinkRequest() = default ;
    UpgradeRenderingInstanceImageShrinkRequest& operator=(const UpgradeRenderingInstanceImageShrinkRequest &) = default ;
    UpgradeRenderingInstanceImageShrinkRequest& operator=(UpgradeRenderingInstanceImageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr
        && this->renderingInstanceIdsShrink_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline UpgradeRenderingInstanceImageShrinkRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // renderingInstanceIdsShrink Field Functions 
    bool hasRenderingInstanceIdsShrink() const { return this->renderingInstanceIdsShrink_ != nullptr;};
    void deleteRenderingInstanceIdsShrink() { this->renderingInstanceIdsShrink_ = nullptr;};
    inline string getRenderingInstanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceIdsShrink_, "") };
    inline UpgradeRenderingInstanceImageShrinkRequest& setRenderingInstanceIdsShrink(string renderingInstanceIdsShrink) { DARABONBA_PTR_SET_VALUE(renderingInstanceIdsShrink_, renderingInstanceIdsShrink) };


  protected:
    // The image ID.
    // 
    // This parameter is required.
    shared_ptr<string> imageId_ {};
    // The list of cloud application service instance IDs. A maximum of 100 IDs can be specified.
    // 
    // This parameter is required.
    shared_ptr<string> renderingInstanceIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
