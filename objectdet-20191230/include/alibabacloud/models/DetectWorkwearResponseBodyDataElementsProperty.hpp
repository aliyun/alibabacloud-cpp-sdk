// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTWORKWEARRESPONSEBODYDATAELEMENTSPROPERTY_HPP_
#define ALIBABACLOUD_MODELS_DETECTWORKWEARRESPONSEBODYDATAELEMENTSPROPERTY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DetectWorkwearResponseBodyDataElementsPropertyProbability.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectWorkwearResponseBodyDataElementsProperty : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectWorkwearResponseBodyDataElementsProperty& obj) { 
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Probability, probability_);
    };
    friend void from_json(const Darabonba::Json& j, DetectWorkwearResponseBodyDataElementsProperty& obj) { 
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Probability, probability_);
    };
    DetectWorkwearResponseBodyDataElementsProperty() = default ;
    DetectWorkwearResponseBodyDataElementsProperty(const DetectWorkwearResponseBodyDataElementsProperty &) = default ;
    DetectWorkwearResponseBodyDataElementsProperty(DetectWorkwearResponseBodyDataElementsProperty &&) = default ;
    DetectWorkwearResponseBodyDataElementsProperty(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectWorkwearResponseBodyDataElementsProperty() = default ;
    DetectWorkwearResponseBodyDataElementsProperty& operator=(const DetectWorkwearResponseBodyDataElementsProperty &) = default ;
    DetectWorkwearResponseBodyDataElementsProperty& operator=(DetectWorkwearResponseBodyDataElementsProperty &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->label_ != nullptr
        && this->probability_ != nullptr; };
    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline DetectWorkwearResponseBodyDataElementsProperty& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // probability Field Functions 
    bool hasProbability() const { return this->probability_ != nullptr;};
    void deleteProbability() { this->probability_ = nullptr;};
    inline const Models::DetectWorkwearResponseBodyDataElementsPropertyProbability & probability() const { DARABONBA_PTR_GET_CONST(probability_, Models::DetectWorkwearResponseBodyDataElementsPropertyProbability) };
    inline Models::DetectWorkwearResponseBodyDataElementsPropertyProbability probability() { DARABONBA_PTR_GET(probability_, Models::DetectWorkwearResponseBodyDataElementsPropertyProbability) };
    inline DetectWorkwearResponseBodyDataElementsProperty& setProbability(const Models::DetectWorkwearResponseBodyDataElementsPropertyProbability & probability) { DARABONBA_PTR_SET_VALUE(probability_, probability) };
    inline DetectWorkwearResponseBodyDataElementsProperty& setProbability(Models::DetectWorkwearResponseBodyDataElementsPropertyProbability && probability) { DARABONBA_PTR_SET_RVALUE(probability_, probability) };


  protected:
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<Models::DetectWorkwearResponseBodyDataElementsPropertyProbability> probability_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
