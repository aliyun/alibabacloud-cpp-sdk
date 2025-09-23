// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTWORKWEARRESPONSEBODYDATAELEMENTS_HPP_
#define ALIBABACLOUD_MODELS_DETECTWORKWEARRESPONSEBODYDATAELEMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectWorkwearResponseBodyDataElementsProperty.hpp>
#include <alibabacloud/models/DetectWorkwearResponseBodyDataElementsRectangles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectWorkwearResponseBodyDataElements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectWorkwearResponseBodyDataElements& obj) { 
      DARABONBA_PTR_TO_JSON(Property, property_);
      DARABONBA_PTR_TO_JSON(Rectangles, rectangles_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DetectWorkwearResponseBodyDataElements& obj) { 
      DARABONBA_PTR_FROM_JSON(Property, property_);
      DARABONBA_PTR_FROM_JSON(Rectangles, rectangles_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DetectWorkwearResponseBodyDataElements() = default ;
    DetectWorkwearResponseBodyDataElements(const DetectWorkwearResponseBodyDataElements &) = default ;
    DetectWorkwearResponseBodyDataElements(DetectWorkwearResponseBodyDataElements &&) = default ;
    DetectWorkwearResponseBodyDataElements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectWorkwearResponseBodyDataElements() = default ;
    DetectWorkwearResponseBodyDataElements& operator=(const DetectWorkwearResponseBodyDataElements &) = default ;
    DetectWorkwearResponseBodyDataElements& operator=(DetectWorkwearResponseBodyDataElements &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->property_ != nullptr
        && this->rectangles_ != nullptr && this->score_ != nullptr && this->type_ != nullptr; };
    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline const vector<Models::DetectWorkwearResponseBodyDataElementsProperty> & property() const { DARABONBA_PTR_GET_CONST(property_, vector<Models::DetectWorkwearResponseBodyDataElementsProperty>) };
    inline vector<Models::DetectWorkwearResponseBodyDataElementsProperty> property() { DARABONBA_PTR_GET(property_, vector<Models::DetectWorkwearResponseBodyDataElementsProperty>) };
    inline DetectWorkwearResponseBodyDataElements& setProperty(const vector<Models::DetectWorkwearResponseBodyDataElementsProperty> & property) { DARABONBA_PTR_SET_VALUE(property_, property) };
    inline DetectWorkwearResponseBodyDataElements& setProperty(vector<Models::DetectWorkwearResponseBodyDataElementsProperty> && property) { DARABONBA_PTR_SET_RVALUE(property_, property) };


    // rectangles Field Functions 
    bool hasRectangles() const { return this->rectangles_ != nullptr;};
    void deleteRectangles() { this->rectangles_ = nullptr;};
    inline const Models::DetectWorkwearResponseBodyDataElementsRectangles & rectangles() const { DARABONBA_PTR_GET_CONST(rectangles_, Models::DetectWorkwearResponseBodyDataElementsRectangles) };
    inline Models::DetectWorkwearResponseBodyDataElementsRectangles rectangles() { DARABONBA_PTR_GET(rectangles_, Models::DetectWorkwearResponseBodyDataElementsRectangles) };
    inline DetectWorkwearResponseBodyDataElements& setRectangles(const Models::DetectWorkwearResponseBodyDataElementsRectangles & rectangles) { DARABONBA_PTR_SET_VALUE(rectangles_, rectangles) };
    inline DetectWorkwearResponseBodyDataElements& setRectangles(Models::DetectWorkwearResponseBodyDataElementsRectangles && rectangles) { DARABONBA_PTR_SET_RVALUE(rectangles_, rectangles) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline double score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline DetectWorkwearResponseBodyDataElements& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DetectWorkwearResponseBodyDataElements& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<Models::DetectWorkwearResponseBodyDataElementsProperty>> property_ = nullptr;
    std::shared_ptr<Models::DetectWorkwearResponseBodyDataElementsRectangles> rectangles_ = nullptr;
    std::shared_ptr<double> score_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
