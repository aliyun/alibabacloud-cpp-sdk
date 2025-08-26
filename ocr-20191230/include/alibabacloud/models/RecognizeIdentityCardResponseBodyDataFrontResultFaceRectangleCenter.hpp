// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEIDENTITYCARDRESPONSEBODYDATAFRONTRESULTFACERECTANGLECENTER_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEIDENTITYCARDRESPONSEBODYDATAFRONTRESULTFACERECTANGLECENTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter& obj) { 
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter& obj) { 
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter() = default ;
    RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter(const RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter &) = default ;
    RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter(RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter &&) = default ;
    RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter() = default ;
    RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter& operator=(const RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter &) = default ;
    RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter& operator=(RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->x_ != nullptr
        && this->y_ != nullptr; };
    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline float x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
    inline RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline float y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
    inline RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    std::shared_ptr<float> x_ = nullptr;
    std::shared_ptr<float> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
