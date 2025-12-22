// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEIDENTITYCARDRESPONSEBODYDATAFRONTRESULTFACERECTANGLESIZE_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEIDENTITYCARDRESPONSEBODYDATAFRONTRESULTFACERECTANGLESIZE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize& obj) { 
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize& obj) { 
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize() = default ;
    RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize(const RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize &) = default ;
    RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize(RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize &&) = default ;
    RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize() = default ;
    RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize& operator=(const RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize &) = default ;
    RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize& operator=(RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->height_ == nullptr
        && return this->width_ == nullptr; };
    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline float height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
    inline RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize& setHeight(float height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline float width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
    inline RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize& setWidth(float width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<float> height_ = nullptr;
    std::shared_ptr<float> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
