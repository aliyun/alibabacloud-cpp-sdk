// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEBATCHMODERATIONRESPONSEBODYDATARESULTSEXTLOGODATALOCATION_HPP_
#define ALIBABACLOUD_MODELS_IMAGEBATCHMODERATIONRESPONSEBODYDATARESULTSEXTLOGODATALOCATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageBatchModerationResponseBodyDataResultsExtLogoDataLocation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageBatchModerationResponseBodyDataResultsExtLogoDataLocation& obj) { 
      DARABONBA_PTR_TO_JSON(H, h_);
      DARABONBA_PTR_TO_JSON(W, w_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, ImageBatchModerationResponseBodyDataResultsExtLogoDataLocation& obj) { 
      DARABONBA_PTR_FROM_JSON(H, h_);
      DARABONBA_PTR_FROM_JSON(W, w_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    ImageBatchModerationResponseBodyDataResultsExtLogoDataLocation() = default ;
    ImageBatchModerationResponseBodyDataResultsExtLogoDataLocation(const ImageBatchModerationResponseBodyDataResultsExtLogoDataLocation &) = default ;
    ImageBatchModerationResponseBodyDataResultsExtLogoDataLocation(ImageBatchModerationResponseBodyDataResultsExtLogoDataLocation &&) = default ;
    ImageBatchModerationResponseBodyDataResultsExtLogoDataLocation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageBatchModerationResponseBodyDataResultsExtLogoDataLocation() = default ;
    ImageBatchModerationResponseBodyDataResultsExtLogoDataLocation& operator=(const ImageBatchModerationResponseBodyDataResultsExtLogoDataLocation &) = default ;
    ImageBatchModerationResponseBodyDataResultsExtLogoDataLocation& operator=(ImageBatchModerationResponseBodyDataResultsExtLogoDataLocation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->h_ == nullptr
        && return this->w_ == nullptr && return this->x_ == nullptr && return this->y_ == nullptr; };
    // h Field Functions 
    bool hasH() const { return this->h_ != nullptr;};
    void deleteH() { this->h_ = nullptr;};
    inline int32_t h() const { DARABONBA_PTR_GET_DEFAULT(h_, 0) };
    inline ImageBatchModerationResponseBodyDataResultsExtLogoDataLocation& setH(int32_t h) { DARABONBA_PTR_SET_VALUE(h_, h) };


    // w Field Functions 
    bool hasW() const { return this->w_ != nullptr;};
    void deleteW() { this->w_ = nullptr;};
    inline int32_t w() const { DARABONBA_PTR_GET_DEFAULT(w_, 0) };
    inline ImageBatchModerationResponseBodyDataResultsExtLogoDataLocation& setW(int32_t w) { DARABONBA_PTR_SET_VALUE(w_, w) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline int32_t x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0) };
    inline ImageBatchModerationResponseBodyDataResultsExtLogoDataLocation& setX(int32_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline int32_t y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0) };
    inline ImageBatchModerationResponseBodyDataResultsExtLogoDataLocation& setY(int32_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    // The width of the text area, in pixels.
    std::shared_ptr<int32_t> h_ = nullptr;
    // The height of the text area, in pixels.
    std::shared_ptr<int32_t> w_ = nullptr;
    // The distance from the top-left corner of the text area to the y-axis, with the top-left corner of the image as the origin, in pixels.
    std::shared_ptr<int32_t> x_ = nullptr;
    // The distance from the top-left corner of the text area to the x-axis, with the top-left corner of the image as the origin, in pixels.
    std::shared_ptr<int32_t> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
