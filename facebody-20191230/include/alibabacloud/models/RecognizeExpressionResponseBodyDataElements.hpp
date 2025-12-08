// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEEXPRESSIONRESPONSEBODYDATAELEMENTS_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEEXPRESSIONRESPONSEBODYDATAELEMENTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RecognizeExpressionResponseBodyDataElementsFaceRectangle.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class RecognizeExpressionResponseBodyDataElements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeExpressionResponseBodyDataElements& obj) { 
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(FaceProbability, faceProbability_);
      DARABONBA_PTR_TO_JSON(FaceRectangle, faceRectangle_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeExpressionResponseBodyDataElements& obj) { 
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(FaceProbability, faceProbability_);
      DARABONBA_PTR_FROM_JSON(FaceRectangle, faceRectangle_);
    };
    RecognizeExpressionResponseBodyDataElements() = default ;
    RecognizeExpressionResponseBodyDataElements(const RecognizeExpressionResponseBodyDataElements &) = default ;
    RecognizeExpressionResponseBodyDataElements(RecognizeExpressionResponseBodyDataElements &&) = default ;
    RecognizeExpressionResponseBodyDataElements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeExpressionResponseBodyDataElements() = default ;
    RecognizeExpressionResponseBodyDataElements& operator=(const RecognizeExpressionResponseBodyDataElements &) = default ;
    RecognizeExpressionResponseBodyDataElements& operator=(RecognizeExpressionResponseBodyDataElements &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expression_ == nullptr
        && return this->faceProbability_ == nullptr && return this->faceRectangle_ == nullptr; };
    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline RecognizeExpressionResponseBodyDataElements& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // faceProbability Field Functions 
    bool hasFaceProbability() const { return this->faceProbability_ != nullptr;};
    void deleteFaceProbability() { this->faceProbability_ = nullptr;};
    inline float faceProbability() const { DARABONBA_PTR_GET_DEFAULT(faceProbability_, 0.0) };
    inline RecognizeExpressionResponseBodyDataElements& setFaceProbability(float faceProbability) { DARABONBA_PTR_SET_VALUE(faceProbability_, faceProbability) };


    // faceRectangle Field Functions 
    bool hasFaceRectangle() const { return this->faceRectangle_ != nullptr;};
    void deleteFaceRectangle() { this->faceRectangle_ = nullptr;};
    inline const Models::RecognizeExpressionResponseBodyDataElementsFaceRectangle & faceRectangle() const { DARABONBA_PTR_GET_CONST(faceRectangle_, Models::RecognizeExpressionResponseBodyDataElementsFaceRectangle) };
    inline Models::RecognizeExpressionResponseBodyDataElementsFaceRectangle faceRectangle() { DARABONBA_PTR_GET(faceRectangle_, Models::RecognizeExpressionResponseBodyDataElementsFaceRectangle) };
    inline RecognizeExpressionResponseBodyDataElements& setFaceRectangle(const Models::RecognizeExpressionResponseBodyDataElementsFaceRectangle & faceRectangle) { DARABONBA_PTR_SET_VALUE(faceRectangle_, faceRectangle) };
    inline RecognizeExpressionResponseBodyDataElements& setFaceRectangle(Models::RecognizeExpressionResponseBodyDataElementsFaceRectangle && faceRectangle) { DARABONBA_PTR_SET_RVALUE(faceRectangle_, faceRectangle) };


  protected:
    std::shared_ptr<string> expression_ = nullptr;
    std::shared_ptr<float> faceProbability_ = nullptr;
    std::shared_ptr<Models::RecognizeExpressionResponseBodyDataElementsFaceRectangle> faceRectangle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
