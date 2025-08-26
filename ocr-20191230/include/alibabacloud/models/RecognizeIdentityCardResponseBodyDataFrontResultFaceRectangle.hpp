// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEIDENTITYCARDRESPONSEBODYDATAFRONTRESULTFACERECTANGLE_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEIDENTITYCARDRESPONSEBODYDATAFRONTRESULTFACERECTANGLE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter.hpp>
#include <alibabacloud/models/RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle& obj) { 
      DARABONBA_PTR_TO_JSON(Angle, angle_);
      DARABONBA_PTR_TO_JSON(Center, center_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle& obj) { 
      DARABONBA_PTR_FROM_JSON(Angle, angle_);
      DARABONBA_PTR_FROM_JSON(Center, center_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle() = default ;
    RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle(const RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle &) = default ;
    RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle(RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle &&) = default ;
    RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle() = default ;
    RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle& operator=(const RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle &) = default ;
    RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle& operator=(RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->angle_ != nullptr
        && this->center_ != nullptr && this->size_ != nullptr; };
    // angle Field Functions 
    bool hasAngle() const { return this->angle_ != nullptr;};
    void deleteAngle() { this->angle_ = nullptr;};
    inline float angle() const { DARABONBA_PTR_GET_DEFAULT(angle_, 0.0) };
    inline RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle& setAngle(float angle) { DARABONBA_PTR_SET_VALUE(angle_, angle) };


    // center Field Functions 
    bool hasCenter() const { return this->center_ != nullptr;};
    void deleteCenter() { this->center_ = nullptr;};
    inline const Models::RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter & center() const { DARABONBA_PTR_GET_CONST(center_, Models::RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter) };
    inline Models::RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter center() { DARABONBA_PTR_GET(center_, Models::RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter) };
    inline RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle& setCenter(const Models::RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter & center) { DARABONBA_PTR_SET_VALUE(center_, center) };
    inline RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle& setCenter(Models::RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter && center) { DARABONBA_PTR_SET_RVALUE(center_, center) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline const Models::RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize & size() const { DARABONBA_PTR_GET_CONST(size_, Models::RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize) };
    inline Models::RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize size() { DARABONBA_PTR_GET(size_, Models::RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize) };
    inline RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle& setSize(const Models::RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize & size) { DARABONBA_PTR_SET_VALUE(size_, size) };
    inline RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle& setSize(Models::RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize && size) { DARABONBA_PTR_SET_RVALUE(size_, size) };


  protected:
    std::shared_ptr<float> angle_ = nullptr;
    std::shared_ptr<Models::RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter> center_ = nullptr;
    std::shared_ptr<Models::RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
