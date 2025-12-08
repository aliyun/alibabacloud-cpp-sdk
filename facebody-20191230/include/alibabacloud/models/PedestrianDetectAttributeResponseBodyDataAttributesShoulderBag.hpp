// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PEDESTRIANDETECTATTRIBUTERESPONSEBODYDATAATTRIBUTESSHOULDERBAG_HPP_
#define ALIBABACLOUD_MODELS_PEDESTRIANDETECTATTRIBUTERESPONSEBODYDATAATTRIBUTESSHOULDERBAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Score, score_);
    };
    friend void from_json(const Darabonba::Json& j, PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
    };
    PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag() = default ;
    PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag(const PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag &) = default ;
    PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag(PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag &&) = default ;
    PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag() = default ;
    PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag& operator=(const PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag &) = default ;
    PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag& operator=(PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->score_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline float score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<float> score_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
