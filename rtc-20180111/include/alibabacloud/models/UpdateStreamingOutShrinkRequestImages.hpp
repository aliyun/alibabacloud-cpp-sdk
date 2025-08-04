// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTREAMINGOUTSHRINKREQUESTIMAGES_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTREAMINGOUTSHRINKREQUESTIMAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class UpdateStreamingOutShrinkRequestImages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateStreamingOutShrinkRequestImages& obj) { 
      DARABONBA_PTR_TO_JSON(Alpha, alpha_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(ImageCropMode, imageCropMode_);
      DARABONBA_PTR_TO_JSON(Layer, layer_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateStreamingOutShrinkRequestImages& obj) { 
      DARABONBA_PTR_FROM_JSON(Alpha, alpha_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(ImageCropMode, imageCropMode_);
      DARABONBA_PTR_FROM_JSON(Layer, layer_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    UpdateStreamingOutShrinkRequestImages() = default ;
    UpdateStreamingOutShrinkRequestImages(const UpdateStreamingOutShrinkRequestImages &) = default ;
    UpdateStreamingOutShrinkRequestImages(UpdateStreamingOutShrinkRequestImages &&) = default ;
    UpdateStreamingOutShrinkRequestImages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateStreamingOutShrinkRequestImages() = default ;
    UpdateStreamingOutShrinkRequestImages& operator=(const UpdateStreamingOutShrinkRequestImages &) = default ;
    UpdateStreamingOutShrinkRequestImages& operator=(UpdateStreamingOutShrinkRequestImages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alpha_ != nullptr
        && this->height_ != nullptr && this->imageCropMode_ != nullptr && this->layer_ != nullptr && this->url_ != nullptr && this->width_ != nullptr
        && this->x_ != nullptr && this->y_ != nullptr; };
    // alpha Field Functions 
    bool hasAlpha() const { return this->alpha_ != nullptr;};
    void deleteAlpha() { this->alpha_ = nullptr;};
    inline double alpha() const { DARABONBA_PTR_GET_DEFAULT(alpha_, 0.0) };
    inline UpdateStreamingOutShrinkRequestImages& setAlpha(double alpha) { DARABONBA_PTR_SET_VALUE(alpha_, alpha) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline double height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
    inline UpdateStreamingOutShrinkRequestImages& setHeight(double height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // imageCropMode Field Functions 
    bool hasImageCropMode() const { return this->imageCropMode_ != nullptr;};
    void deleteImageCropMode() { this->imageCropMode_ = nullptr;};
    inline int32_t imageCropMode() const { DARABONBA_PTR_GET_DEFAULT(imageCropMode_, 0) };
    inline UpdateStreamingOutShrinkRequestImages& setImageCropMode(int32_t imageCropMode) { DARABONBA_PTR_SET_VALUE(imageCropMode_, imageCropMode) };


    // layer Field Functions 
    bool hasLayer() const { return this->layer_ != nullptr;};
    void deleteLayer() { this->layer_ = nullptr;};
    inline int32_t layer() const { DARABONBA_PTR_GET_DEFAULT(layer_, 0) };
    inline UpdateStreamingOutShrinkRequestImages& setLayer(int32_t layer) { DARABONBA_PTR_SET_VALUE(layer_, layer) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline UpdateStreamingOutShrinkRequestImages& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline double width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
    inline UpdateStreamingOutShrinkRequestImages& setWidth(double width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline double x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
    inline UpdateStreamingOutShrinkRequestImages& setX(double x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline double y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
    inline UpdateStreamingOutShrinkRequestImages& setY(double y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    std::shared_ptr<double> alpha_ = nullptr;
    // This parameter is required.
    std::shared_ptr<double> height_ = nullptr;
    std::shared_ptr<int32_t> imageCropMode_ = nullptr;
    std::shared_ptr<int32_t> layer_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
    // This parameter is required.
    std::shared_ptr<double> width_ = nullptr;
    // This parameter is required.
    std::shared_ptr<double> x_ = nullptr;
    // This parameter is required.
    std::shared_ptr<double> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
