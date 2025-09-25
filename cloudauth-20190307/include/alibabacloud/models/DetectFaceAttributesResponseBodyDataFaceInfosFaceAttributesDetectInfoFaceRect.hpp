// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTFACEATTRIBUTESRESPONSEBODYDATAFACEINFOSFACEATTRIBUTESDETECTINFOFACERECT_HPP_
#define ALIBABACLOUD_MODELS_DETECTFACEATTRIBUTESRESPONSEBODYDATAFACEINFOSFACEATTRIBUTESDETECTINFOFACERECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect& obj) { 
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Left, left_);
      DARABONBA_PTR_TO_JSON(Top, top_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect& obj) { 
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Left, left_);
      DARABONBA_PTR_FROM_JSON(Top, top_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect() = default ;
    DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect(const DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect &) = default ;
    DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect(DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect &&) = default ;
    DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect() = default ;
    DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect& operator=(const DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect &) = default ;
    DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect& operator=(DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->height_ != nullptr
        && this->left_ != nullptr && this->top_ != nullptr && this->width_ != nullptr; };
    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // left Field Functions 
    bool hasLeft() const { return this->left_ != nullptr;};
    void deleteLeft() { this->left_ = nullptr;};
    inline int32_t left() const { DARABONBA_PTR_GET_DEFAULT(left_, 0) };
    inline DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect& setLeft(int32_t left) { DARABONBA_PTR_SET_VALUE(left_, left) };


    // top Field Functions 
    bool hasTop() const { return this->top_ != nullptr;};
    void deleteTop() { this->top_ = nullptr;};
    inline int32_t top() const { DARABONBA_PTR_GET_DEFAULT(top_, 0) };
    inline DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect& setTop(int32_t top) { DARABONBA_PTR_SET_VALUE(top_, top) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // Height of the face rectangle.
    std::shared_ptr<int32_t> height_ = nullptr;
    // Distance from the top-left corner of the face rectangle to the left edge of the original image, in pixels.
    std::shared_ptr<int32_t> left_ = nullptr;
    // Distance from the top-left corner of the face rectangle to the top edge of the original image, in pixels.
    std::shared_ptr<int32_t> top_ = nullptr;
    // Width of the face rectangle.
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
