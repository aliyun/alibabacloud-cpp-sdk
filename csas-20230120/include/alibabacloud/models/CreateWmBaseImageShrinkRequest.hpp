// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMBASEIMAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMBASEIMAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmBaseImageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmBaseImageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(ImageControl, imageControlShrink_);
      DARABONBA_PTR_TO_JSON(Opacity, opacity_);
      DARABONBA_PTR_TO_JSON(Scale, scale_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(WmInfoBytesB64, wmInfoBytesB64_);
      DARABONBA_PTR_TO_JSON(WmInfoSize, wmInfoSize_);
      DARABONBA_PTR_TO_JSON(WmInfoUint, wmInfoUint_);
      DARABONBA_PTR_TO_JSON(WmType, wmType_);
      DARABONBA_PTR_TO_JSON(comment, comment_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWmBaseImageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(ImageControl, imageControlShrink_);
      DARABONBA_PTR_FROM_JSON(Opacity, opacity_);
      DARABONBA_PTR_FROM_JSON(Scale, scale_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(WmInfoBytesB64, wmInfoBytesB64_);
      DARABONBA_PTR_FROM_JSON(WmInfoSize, wmInfoSize_);
      DARABONBA_PTR_FROM_JSON(WmInfoUint, wmInfoUint_);
      DARABONBA_PTR_FROM_JSON(WmType, wmType_);
      DARABONBA_PTR_FROM_JSON(comment, comment_);
    };
    CreateWmBaseImageShrinkRequest() = default ;
    CreateWmBaseImageShrinkRequest(const CreateWmBaseImageShrinkRequest &) = default ;
    CreateWmBaseImageShrinkRequest(CreateWmBaseImageShrinkRequest &&) = default ;
    CreateWmBaseImageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmBaseImageShrinkRequest() = default ;
    CreateWmBaseImageShrinkRequest& operator=(const CreateWmBaseImageShrinkRequest &) = default ;
    CreateWmBaseImageShrinkRequest& operator=(CreateWmBaseImageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->height_ != nullptr
        && this->imageControlShrink_ != nullptr && this->opacity_ != nullptr && this->scale_ != nullptr && this->width_ != nullptr && this->wmInfoBytesB64_ != nullptr
        && this->wmInfoSize_ != nullptr && this->wmInfoUint_ != nullptr && this->wmType_ != nullptr && this->comment_ != nullptr; };
    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline CreateWmBaseImageShrinkRequest& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // imageControlShrink Field Functions 
    bool hasImageControlShrink() const { return this->imageControlShrink_ != nullptr;};
    void deleteImageControlShrink() { this->imageControlShrink_ = nullptr;};
    inline string imageControlShrink() const { DARABONBA_PTR_GET_DEFAULT(imageControlShrink_, "") };
    inline CreateWmBaseImageShrinkRequest& setImageControlShrink(string imageControlShrink) { DARABONBA_PTR_SET_VALUE(imageControlShrink_, imageControlShrink) };


    // opacity Field Functions 
    bool hasOpacity() const { return this->opacity_ != nullptr;};
    void deleteOpacity() { this->opacity_ = nullptr;};
    inline int32_t opacity() const { DARABONBA_PTR_GET_DEFAULT(opacity_, 0) };
    inline CreateWmBaseImageShrinkRequest& setOpacity(int32_t opacity) { DARABONBA_PTR_SET_VALUE(opacity_, opacity) };


    // scale Field Functions 
    bool hasScale() const { return this->scale_ != nullptr;};
    void deleteScale() { this->scale_ = nullptr;};
    inline int32_t scale() const { DARABONBA_PTR_GET_DEFAULT(scale_, 0) };
    inline CreateWmBaseImageShrinkRequest& setScale(int32_t scale) { DARABONBA_PTR_SET_VALUE(scale_, scale) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline CreateWmBaseImageShrinkRequest& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // wmInfoBytesB64 Field Functions 
    bool hasWmInfoBytesB64() const { return this->wmInfoBytesB64_ != nullptr;};
    void deleteWmInfoBytesB64() { this->wmInfoBytesB64_ = nullptr;};
    inline string wmInfoBytesB64() const { DARABONBA_PTR_GET_DEFAULT(wmInfoBytesB64_, "") };
    inline CreateWmBaseImageShrinkRequest& setWmInfoBytesB64(string wmInfoBytesB64) { DARABONBA_PTR_SET_VALUE(wmInfoBytesB64_, wmInfoBytesB64) };


    // wmInfoSize Field Functions 
    bool hasWmInfoSize() const { return this->wmInfoSize_ != nullptr;};
    void deleteWmInfoSize() { this->wmInfoSize_ = nullptr;};
    inline int64_t wmInfoSize() const { DARABONBA_PTR_GET_DEFAULT(wmInfoSize_, 0L) };
    inline CreateWmBaseImageShrinkRequest& setWmInfoSize(int64_t wmInfoSize) { DARABONBA_PTR_SET_VALUE(wmInfoSize_, wmInfoSize) };


    // wmInfoUint Field Functions 
    bool hasWmInfoUint() const { return this->wmInfoUint_ != nullptr;};
    void deleteWmInfoUint() { this->wmInfoUint_ = nullptr;};
    inline string wmInfoUint() const { DARABONBA_PTR_GET_DEFAULT(wmInfoUint_, "") };
    inline CreateWmBaseImageShrinkRequest& setWmInfoUint(string wmInfoUint) { DARABONBA_PTR_SET_VALUE(wmInfoUint_, wmInfoUint) };


    // wmType Field Functions 
    bool hasWmType() const { return this->wmType_ != nullptr;};
    void deleteWmType() { this->wmType_ = nullptr;};
    inline string wmType() const { DARABONBA_PTR_GET_DEFAULT(wmType_, "") };
    inline CreateWmBaseImageShrinkRequest& setWmType(string wmType) { DARABONBA_PTR_SET_VALUE(wmType_, wmType) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateWmBaseImageShrinkRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> height_ = nullptr;
    std::shared_ptr<string> imageControlShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> opacity_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> scale_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> width_ = nullptr;
    std::shared_ptr<string> wmInfoBytesB64_ = nullptr;
    std::shared_ptr<int64_t> wmInfoSize_ = nullptr;
    std::shared_ptr<string> wmInfoUint_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> wmType_ = nullptr;
    std::shared_ptr<string> comment_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
