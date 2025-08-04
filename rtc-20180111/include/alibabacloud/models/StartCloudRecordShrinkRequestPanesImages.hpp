// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCLOUDRECORDSHRINKREQUESTPANESIMAGES_HPP_
#define ALIBABACLOUD_MODELS_STARTCLOUDRECORDSHRINKREQUESTPANESIMAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartCloudRecordShrinkRequestPanesImages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCloudRecordShrinkRequestPanesImages& obj) { 
      DARABONBA_PTR_TO_JSON(Alpha, alpha_);
      DARABONBA_PTR_TO_JSON(Display, display_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Layer, layer_);
      DARABONBA_PTR_TO_JSON(PaneImageCropMode, paneImageCropMode_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, StartCloudRecordShrinkRequestPanesImages& obj) { 
      DARABONBA_PTR_FROM_JSON(Alpha, alpha_);
      DARABONBA_PTR_FROM_JSON(Display, display_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Layer, layer_);
      DARABONBA_PTR_FROM_JSON(PaneImageCropMode, paneImageCropMode_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    StartCloudRecordShrinkRequestPanesImages() = default ;
    StartCloudRecordShrinkRequestPanesImages(const StartCloudRecordShrinkRequestPanesImages &) = default ;
    StartCloudRecordShrinkRequestPanesImages(StartCloudRecordShrinkRequestPanesImages &&) = default ;
    StartCloudRecordShrinkRequestPanesImages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCloudRecordShrinkRequestPanesImages() = default ;
    StartCloudRecordShrinkRequestPanesImages& operator=(const StartCloudRecordShrinkRequestPanesImages &) = default ;
    StartCloudRecordShrinkRequestPanesImages& operator=(StartCloudRecordShrinkRequestPanesImages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alpha_ != nullptr
        && this->display_ != nullptr && this->height_ != nullptr && this->layer_ != nullptr && this->paneImageCropMode_ != nullptr && this->url_ != nullptr
        && this->width_ != nullptr && this->x_ != nullptr && this->y_ != nullptr; };
    // alpha Field Functions 
    bool hasAlpha() const { return this->alpha_ != nullptr;};
    void deleteAlpha() { this->alpha_ = nullptr;};
    inline double alpha() const { DARABONBA_PTR_GET_DEFAULT(alpha_, 0.0) };
    inline StartCloudRecordShrinkRequestPanesImages& setAlpha(double alpha) { DARABONBA_PTR_SET_VALUE(alpha_, alpha) };


    // display Field Functions 
    bool hasDisplay() const { return this->display_ != nullptr;};
    void deleteDisplay() { this->display_ = nullptr;};
    inline string display() const { DARABONBA_PTR_GET_DEFAULT(display_, "") };
    inline StartCloudRecordShrinkRequestPanesImages& setDisplay(string display) { DARABONBA_PTR_SET_VALUE(display_, display) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline double height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
    inline StartCloudRecordShrinkRequestPanesImages& setHeight(double height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // layer Field Functions 
    bool hasLayer() const { return this->layer_ != nullptr;};
    void deleteLayer() { this->layer_ = nullptr;};
    inline int32_t layer() const { DARABONBA_PTR_GET_DEFAULT(layer_, 0) };
    inline StartCloudRecordShrinkRequestPanesImages& setLayer(int32_t layer) { DARABONBA_PTR_SET_VALUE(layer_, layer) };


    // paneImageCropMode Field Functions 
    bool hasPaneImageCropMode() const { return this->paneImageCropMode_ != nullptr;};
    void deletePaneImageCropMode() { this->paneImageCropMode_ = nullptr;};
    inline int32_t paneImageCropMode() const { DARABONBA_PTR_GET_DEFAULT(paneImageCropMode_, 0) };
    inline StartCloudRecordShrinkRequestPanesImages& setPaneImageCropMode(int32_t paneImageCropMode) { DARABONBA_PTR_SET_VALUE(paneImageCropMode_, paneImageCropMode) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline StartCloudRecordShrinkRequestPanesImages& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline double width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
    inline StartCloudRecordShrinkRequestPanesImages& setWidth(double width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline double x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
    inline StartCloudRecordShrinkRequestPanesImages& setX(double x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline double y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
    inline StartCloudRecordShrinkRequestPanesImages& setY(double y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    std::shared_ptr<double> alpha_ = nullptr;
    std::shared_ptr<string> display_ = nullptr;
    // This parameter is required.
    std::shared_ptr<double> height_ = nullptr;
    std::shared_ptr<int32_t> layer_ = nullptr;
    std::shared_ptr<int32_t> paneImageCropMode_ = nullptr;
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
