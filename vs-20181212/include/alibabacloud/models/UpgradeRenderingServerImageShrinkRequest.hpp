// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADERENDERINGSERVERIMAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADERENDERINGSERVERIMAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class UpgradeRenderingServerImageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeRenderingServerImageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(Precheck, precheck_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceIds, renderingInstanceIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeRenderingServerImageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(Precheck, precheck_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceIds, renderingInstanceIdsShrink_);
    };
    UpgradeRenderingServerImageShrinkRequest() = default ;
    UpgradeRenderingServerImageShrinkRequest(const UpgradeRenderingServerImageShrinkRequest &) = default ;
    UpgradeRenderingServerImageShrinkRequest(UpgradeRenderingServerImageShrinkRequest &&) = default ;
    UpgradeRenderingServerImageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeRenderingServerImageShrinkRequest() = default ;
    UpgradeRenderingServerImageShrinkRequest& operator=(const UpgradeRenderingServerImageShrinkRequest &) = default ;
    UpgradeRenderingServerImageShrinkRequest& operator=(UpgradeRenderingServerImageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr
        && this->precheck_ == nullptr && this->renderingInstanceIdsShrink_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline UpgradeRenderingServerImageShrinkRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // precheck Field Functions 
    bool hasPrecheck() const { return this->precheck_ != nullptr;};
    void deletePrecheck() { this->precheck_ = nullptr;};
    inline bool getPrecheck() const { DARABONBA_PTR_GET_DEFAULT(precheck_, false) };
    inline UpgradeRenderingServerImageShrinkRequest& setPrecheck(bool precheck) { DARABONBA_PTR_SET_VALUE(precheck_, precheck) };


    // renderingInstanceIdsShrink Field Functions 
    bool hasRenderingInstanceIdsShrink() const { return this->renderingInstanceIdsShrink_ != nullptr;};
    void deleteRenderingInstanceIdsShrink() { this->renderingInstanceIdsShrink_ = nullptr;};
    inline string getRenderingInstanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceIdsShrink_, "") };
    inline UpgradeRenderingServerImageShrinkRequest& setRenderingInstanceIdsShrink(string renderingInstanceIdsShrink) { DARABONBA_PTR_SET_VALUE(renderingInstanceIdsShrink_, renderingInstanceIdsShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> imageId_ {};
    shared_ptr<bool> precheck_ {};
    // This parameter is required.
    shared_ptr<string> renderingInstanceIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
