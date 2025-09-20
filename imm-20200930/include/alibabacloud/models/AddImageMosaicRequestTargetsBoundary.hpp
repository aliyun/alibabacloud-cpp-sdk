// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIMAGEMOSAICREQUESTTARGETSBOUNDARY_HPP_
#define ALIBABACLOUD_MODELS_ADDIMAGEMOSAICREQUESTTARGETSBOUNDARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class AddImageMosaicRequestTargetsBoundary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddImageMosaicRequestTargetsBoundary& obj) { 
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(ReferPos, referPos_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, AddImageMosaicRequestTargetsBoundary& obj) { 
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(ReferPos, referPos_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    AddImageMosaicRequestTargetsBoundary() = default ;
    AddImageMosaicRequestTargetsBoundary(const AddImageMosaicRequestTargetsBoundary &) = default ;
    AddImageMosaicRequestTargetsBoundary(AddImageMosaicRequestTargetsBoundary &&) = default ;
    AddImageMosaicRequestTargetsBoundary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddImageMosaicRequestTargetsBoundary() = default ;
    AddImageMosaicRequestTargetsBoundary& operator=(const AddImageMosaicRequestTargetsBoundary &) = default ;
    AddImageMosaicRequestTargetsBoundary& operator=(AddImageMosaicRequestTargetsBoundary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->height_ != nullptr
        && this->referPos_ != nullptr && this->width_ != nullptr && this->x_ != nullptr && this->y_ != nullptr; };
    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline float height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
    inline AddImageMosaicRequestTargetsBoundary& setHeight(float height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // referPos Field Functions 
    bool hasReferPos() const { return this->referPos_ != nullptr;};
    void deleteReferPos() { this->referPos_ = nullptr;};
    inline string referPos() const { DARABONBA_PTR_GET_DEFAULT(referPos_, "") };
    inline AddImageMosaicRequestTargetsBoundary& setReferPos(string referPos) { DARABONBA_PTR_SET_VALUE(referPos_, referPos) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline float width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
    inline AddImageMosaicRequestTargetsBoundary& setWidth(float width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline float x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
    inline AddImageMosaicRequestTargetsBoundary& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline float y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
    inline AddImageMosaicRequestTargetsBoundary& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    // The height of the bounding box. The value can be an integer greater than or equal to 0 or a decimal within the range of [0,1):
    // 
    // *   An integer value greater than or equal to 0 indicates the height of the bounding box in pixels.
    // *   A decimal value within the range of [0,1) indicates the height of the bounding box as a ratio of its height to the image height.
    // 
    // This parameter is required.
    std::shared_ptr<float> height_ = nullptr;
    // The reference position of the bounding box on the image. Valid values:
    // 
    // *   topright: the upper-right corner.
    // *   topleft: the upper-left corner. This is the default value.
    // *   bottomright: the lower-right corner.
    // *   bottomleft: the lower-left corner.
    std::shared_ptr<string> referPos_ = nullptr;
    // The width of the bounding box. The value can be an integer greater than or equal to 0 or a decimal within the range of [0,1):
    // 
    // *   An integer value greater than or equal to 0 indicates the width of the bounding box in pixels.
    // *   A decimal value within the range of [0,1) indicates the width of the bounding box as a ratio of its width to the image width.
    // 
    // This parameter is required.
    std::shared_ptr<float> width_ = nullptr;
    // The horizontal offset relative to the reference position. The value can be an integer greater than or equal to 0 or a decimal within the range of [0,1):
    // 
    // *   An integer value greater than or equal to 0 indicates the horizontal offset in pixels.
    // *   A decimal value within the range of [0,1) indicates the horizontal offset as a ratio of the offset to the image width.
    // 
    // This parameter is required.
    std::shared_ptr<float> x_ = nullptr;
    // The vertical offset relative to the reference position. The value can be an integer greater than or equal to 0 or a decimal within the range of [0,1):
    // 
    // *   An integer value greater than or equal to 0 indicates the vertical offset in pixels.
    // *   A decimal value within the range of [0,1) indicates the vertical offset as a ratio of the offset to the image height.
    // 
    // This parameter is required.
    std::shared_ptr<float> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
