// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTKITCHENANIMALSRESPONSEBODYDATAELEMENTS_HPP_
#define ALIBABACLOUD_MODELS_DETECTKITCHENANIMALSRESPONSEBODYDATAELEMENTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DetectKitchenAnimalsResponseBodyDataElementsRectangles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectKitchenAnimalsResponseBodyDataElements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectKitchenAnimalsResponseBodyDataElements& obj) { 
      DARABONBA_PTR_TO_JSON(Rectangles, rectangles_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DetectKitchenAnimalsResponseBodyDataElements& obj) { 
      DARABONBA_PTR_FROM_JSON(Rectangles, rectangles_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DetectKitchenAnimalsResponseBodyDataElements() = default ;
    DetectKitchenAnimalsResponseBodyDataElements(const DetectKitchenAnimalsResponseBodyDataElements &) = default ;
    DetectKitchenAnimalsResponseBodyDataElements(DetectKitchenAnimalsResponseBodyDataElements &&) = default ;
    DetectKitchenAnimalsResponseBodyDataElements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectKitchenAnimalsResponseBodyDataElements() = default ;
    DetectKitchenAnimalsResponseBodyDataElements& operator=(const DetectKitchenAnimalsResponseBodyDataElements &) = default ;
    DetectKitchenAnimalsResponseBodyDataElements& operator=(DetectKitchenAnimalsResponseBodyDataElements &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rectangles_ != nullptr
        && this->score_ != nullptr && this->type_ != nullptr; };
    // rectangles Field Functions 
    bool hasRectangles() const { return this->rectangles_ != nullptr;};
    void deleteRectangles() { this->rectangles_ = nullptr;};
    inline const Models::DetectKitchenAnimalsResponseBodyDataElementsRectangles & rectangles() const { DARABONBA_PTR_GET_CONST(rectangles_, Models::DetectKitchenAnimalsResponseBodyDataElementsRectangles) };
    inline Models::DetectKitchenAnimalsResponseBodyDataElementsRectangles rectangles() { DARABONBA_PTR_GET(rectangles_, Models::DetectKitchenAnimalsResponseBodyDataElementsRectangles) };
    inline DetectKitchenAnimalsResponseBodyDataElements& setRectangles(const Models::DetectKitchenAnimalsResponseBodyDataElementsRectangles & rectangles) { DARABONBA_PTR_SET_VALUE(rectangles_, rectangles) };
    inline DetectKitchenAnimalsResponseBodyDataElements& setRectangles(Models::DetectKitchenAnimalsResponseBodyDataElementsRectangles && rectangles) { DARABONBA_PTR_SET_RVALUE(rectangles_, rectangles) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline float score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline DetectKitchenAnimalsResponseBodyDataElements& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DetectKitchenAnimalsResponseBodyDataElements& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::DetectKitchenAnimalsResponseBodyDataElementsRectangles> rectangles_ = nullptr;
    std::shared_ptr<float> score_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
