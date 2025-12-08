// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PEDESTRIANDETECTATTRIBUTERESPONSEBODYDATAATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_PEDESTRIANDETECTATTRIBUTERESPONSEBODYDATAATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PedestrianDetectAttributeResponseBodyDataAttributesAge.hpp>
#include <alibabacloud/models/PedestrianDetectAttributeResponseBodyDataAttributesBackpack.hpp>
#include <alibabacloud/models/PedestrianDetectAttributeResponseBodyDataAttributesGender.hpp>
#include <alibabacloud/models/PedestrianDetectAttributeResponseBodyDataAttributesGlasses.hpp>
#include <alibabacloud/models/PedestrianDetectAttributeResponseBodyDataAttributesHandbag.hpp>
#include <alibabacloud/models/PedestrianDetectAttributeResponseBodyDataAttributesHat.hpp>
#include <alibabacloud/models/PedestrianDetectAttributeResponseBodyDataAttributesLowerColor.hpp>
#include <alibabacloud/models/PedestrianDetectAttributeResponseBodyDataAttributesLowerWear.hpp>
#include <alibabacloud/models/PedestrianDetectAttributeResponseBodyDataAttributesOrient.hpp>
#include <alibabacloud/models/PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag.hpp>
#include <alibabacloud/models/PedestrianDetectAttributeResponseBodyDataAttributesUpperColor.hpp>
#include <alibabacloud/models/PedestrianDetectAttributeResponseBodyDataAttributesUpperWear.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class PedestrianDetectAttributeResponseBodyDataAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PedestrianDetectAttributeResponseBodyDataAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(Age, age_);
      DARABONBA_PTR_TO_JSON(Backpack, backpack_);
      DARABONBA_PTR_TO_JSON(Gender, gender_);
      DARABONBA_PTR_TO_JSON(Glasses, glasses_);
      DARABONBA_PTR_TO_JSON(Handbag, handbag_);
      DARABONBA_PTR_TO_JSON(Hat, hat_);
      DARABONBA_PTR_TO_JSON(LowerColor, lowerColor_);
      DARABONBA_PTR_TO_JSON(LowerWear, lowerWear_);
      DARABONBA_PTR_TO_JSON(Orient, orient_);
      DARABONBA_PTR_TO_JSON(ShoulderBag, shoulderBag_);
      DARABONBA_PTR_TO_JSON(UpperColor, upperColor_);
      DARABONBA_PTR_TO_JSON(UpperWear, upperWear_);
    };
    friend void from_json(const Darabonba::Json& j, PedestrianDetectAttributeResponseBodyDataAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(Age, age_);
      DARABONBA_PTR_FROM_JSON(Backpack, backpack_);
      DARABONBA_PTR_FROM_JSON(Gender, gender_);
      DARABONBA_PTR_FROM_JSON(Glasses, glasses_);
      DARABONBA_PTR_FROM_JSON(Handbag, handbag_);
      DARABONBA_PTR_FROM_JSON(Hat, hat_);
      DARABONBA_PTR_FROM_JSON(LowerColor, lowerColor_);
      DARABONBA_PTR_FROM_JSON(LowerWear, lowerWear_);
      DARABONBA_PTR_FROM_JSON(Orient, orient_);
      DARABONBA_PTR_FROM_JSON(ShoulderBag, shoulderBag_);
      DARABONBA_PTR_FROM_JSON(UpperColor, upperColor_);
      DARABONBA_PTR_FROM_JSON(UpperWear, upperWear_);
    };
    PedestrianDetectAttributeResponseBodyDataAttributes() = default ;
    PedestrianDetectAttributeResponseBodyDataAttributes(const PedestrianDetectAttributeResponseBodyDataAttributes &) = default ;
    PedestrianDetectAttributeResponseBodyDataAttributes(PedestrianDetectAttributeResponseBodyDataAttributes &&) = default ;
    PedestrianDetectAttributeResponseBodyDataAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PedestrianDetectAttributeResponseBodyDataAttributes() = default ;
    PedestrianDetectAttributeResponseBodyDataAttributes& operator=(const PedestrianDetectAttributeResponseBodyDataAttributes &) = default ;
    PedestrianDetectAttributeResponseBodyDataAttributes& operator=(PedestrianDetectAttributeResponseBodyDataAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->age_ == nullptr
        && return this->backpack_ == nullptr && return this->gender_ == nullptr && return this->glasses_ == nullptr && return this->handbag_ == nullptr && return this->hat_ == nullptr
        && return this->lowerColor_ == nullptr && return this->lowerWear_ == nullptr && return this->orient_ == nullptr && return this->shoulderBag_ == nullptr && return this->upperColor_ == nullptr
        && return this->upperWear_ == nullptr; };
    // age Field Functions 
    bool hasAge() const { return this->age_ != nullptr;};
    void deleteAge() { this->age_ = nullptr;};
    inline const Models::PedestrianDetectAttributeResponseBodyDataAttributesAge & age() const { DARABONBA_PTR_GET_CONST(age_, Models::PedestrianDetectAttributeResponseBodyDataAttributesAge) };
    inline Models::PedestrianDetectAttributeResponseBodyDataAttributesAge age() { DARABONBA_PTR_GET(age_, Models::PedestrianDetectAttributeResponseBodyDataAttributesAge) };
    inline PedestrianDetectAttributeResponseBodyDataAttributes& setAge(const Models::PedestrianDetectAttributeResponseBodyDataAttributesAge & age) { DARABONBA_PTR_SET_VALUE(age_, age) };
    inline PedestrianDetectAttributeResponseBodyDataAttributes& setAge(Models::PedestrianDetectAttributeResponseBodyDataAttributesAge && age) { DARABONBA_PTR_SET_RVALUE(age_, age) };


    // backpack Field Functions 
    bool hasBackpack() const { return this->backpack_ != nullptr;};
    void deleteBackpack() { this->backpack_ = nullptr;};
    inline const Models::PedestrianDetectAttributeResponseBodyDataAttributesBackpack & backpack() const { DARABONBA_PTR_GET_CONST(backpack_, Models::PedestrianDetectAttributeResponseBodyDataAttributesBackpack) };
    inline Models::PedestrianDetectAttributeResponseBodyDataAttributesBackpack backpack() { DARABONBA_PTR_GET(backpack_, Models::PedestrianDetectAttributeResponseBodyDataAttributesBackpack) };
    inline PedestrianDetectAttributeResponseBodyDataAttributes& setBackpack(const Models::PedestrianDetectAttributeResponseBodyDataAttributesBackpack & backpack) { DARABONBA_PTR_SET_VALUE(backpack_, backpack) };
    inline PedestrianDetectAttributeResponseBodyDataAttributes& setBackpack(Models::PedestrianDetectAttributeResponseBodyDataAttributesBackpack && backpack) { DARABONBA_PTR_SET_RVALUE(backpack_, backpack) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline const Models::PedestrianDetectAttributeResponseBodyDataAttributesGender & gender() const { DARABONBA_PTR_GET_CONST(gender_, Models::PedestrianDetectAttributeResponseBodyDataAttributesGender) };
    inline Models::PedestrianDetectAttributeResponseBodyDataAttributesGender gender() { DARABONBA_PTR_GET(gender_, Models::PedestrianDetectAttributeResponseBodyDataAttributesGender) };
    inline PedestrianDetectAttributeResponseBodyDataAttributes& setGender(const Models::PedestrianDetectAttributeResponseBodyDataAttributesGender & gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };
    inline PedestrianDetectAttributeResponseBodyDataAttributes& setGender(Models::PedestrianDetectAttributeResponseBodyDataAttributesGender && gender) { DARABONBA_PTR_SET_RVALUE(gender_, gender) };


    // glasses Field Functions 
    bool hasGlasses() const { return this->glasses_ != nullptr;};
    void deleteGlasses() { this->glasses_ = nullptr;};
    inline const Models::PedestrianDetectAttributeResponseBodyDataAttributesGlasses & glasses() const { DARABONBA_PTR_GET_CONST(glasses_, Models::PedestrianDetectAttributeResponseBodyDataAttributesGlasses) };
    inline Models::PedestrianDetectAttributeResponseBodyDataAttributesGlasses glasses() { DARABONBA_PTR_GET(glasses_, Models::PedestrianDetectAttributeResponseBodyDataAttributesGlasses) };
    inline PedestrianDetectAttributeResponseBodyDataAttributes& setGlasses(const Models::PedestrianDetectAttributeResponseBodyDataAttributesGlasses & glasses) { DARABONBA_PTR_SET_VALUE(glasses_, glasses) };
    inline PedestrianDetectAttributeResponseBodyDataAttributes& setGlasses(Models::PedestrianDetectAttributeResponseBodyDataAttributesGlasses && glasses) { DARABONBA_PTR_SET_RVALUE(glasses_, glasses) };


    // handbag Field Functions 
    bool hasHandbag() const { return this->handbag_ != nullptr;};
    void deleteHandbag() { this->handbag_ = nullptr;};
    inline const Models::PedestrianDetectAttributeResponseBodyDataAttributesHandbag & handbag() const { DARABONBA_PTR_GET_CONST(handbag_, Models::PedestrianDetectAttributeResponseBodyDataAttributesHandbag) };
    inline Models::PedestrianDetectAttributeResponseBodyDataAttributesHandbag handbag() { DARABONBA_PTR_GET(handbag_, Models::PedestrianDetectAttributeResponseBodyDataAttributesHandbag) };
    inline PedestrianDetectAttributeResponseBodyDataAttributes& setHandbag(const Models::PedestrianDetectAttributeResponseBodyDataAttributesHandbag & handbag) { DARABONBA_PTR_SET_VALUE(handbag_, handbag) };
    inline PedestrianDetectAttributeResponseBodyDataAttributes& setHandbag(Models::PedestrianDetectAttributeResponseBodyDataAttributesHandbag && handbag) { DARABONBA_PTR_SET_RVALUE(handbag_, handbag) };


    // hat Field Functions 
    bool hasHat() const { return this->hat_ != nullptr;};
    void deleteHat() { this->hat_ = nullptr;};
    inline const Models::PedestrianDetectAttributeResponseBodyDataAttributesHat & hat() const { DARABONBA_PTR_GET_CONST(hat_, Models::PedestrianDetectAttributeResponseBodyDataAttributesHat) };
    inline Models::PedestrianDetectAttributeResponseBodyDataAttributesHat hat() { DARABONBA_PTR_GET(hat_, Models::PedestrianDetectAttributeResponseBodyDataAttributesHat) };
    inline PedestrianDetectAttributeResponseBodyDataAttributes& setHat(const Models::PedestrianDetectAttributeResponseBodyDataAttributesHat & hat) { DARABONBA_PTR_SET_VALUE(hat_, hat) };
    inline PedestrianDetectAttributeResponseBodyDataAttributes& setHat(Models::PedestrianDetectAttributeResponseBodyDataAttributesHat && hat) { DARABONBA_PTR_SET_RVALUE(hat_, hat) };


    // lowerColor Field Functions 
    bool hasLowerColor() const { return this->lowerColor_ != nullptr;};
    void deleteLowerColor() { this->lowerColor_ = nullptr;};
    inline const Models::PedestrianDetectAttributeResponseBodyDataAttributesLowerColor & lowerColor() const { DARABONBA_PTR_GET_CONST(lowerColor_, Models::PedestrianDetectAttributeResponseBodyDataAttributesLowerColor) };
    inline Models::PedestrianDetectAttributeResponseBodyDataAttributesLowerColor lowerColor() { DARABONBA_PTR_GET(lowerColor_, Models::PedestrianDetectAttributeResponseBodyDataAttributesLowerColor) };
    inline PedestrianDetectAttributeResponseBodyDataAttributes& setLowerColor(const Models::PedestrianDetectAttributeResponseBodyDataAttributesLowerColor & lowerColor) { DARABONBA_PTR_SET_VALUE(lowerColor_, lowerColor) };
    inline PedestrianDetectAttributeResponseBodyDataAttributes& setLowerColor(Models::PedestrianDetectAttributeResponseBodyDataAttributesLowerColor && lowerColor) { DARABONBA_PTR_SET_RVALUE(lowerColor_, lowerColor) };


    // lowerWear Field Functions 
    bool hasLowerWear() const { return this->lowerWear_ != nullptr;};
    void deleteLowerWear() { this->lowerWear_ = nullptr;};
    inline const Models::PedestrianDetectAttributeResponseBodyDataAttributesLowerWear & lowerWear() const { DARABONBA_PTR_GET_CONST(lowerWear_, Models::PedestrianDetectAttributeResponseBodyDataAttributesLowerWear) };
    inline Models::PedestrianDetectAttributeResponseBodyDataAttributesLowerWear lowerWear() { DARABONBA_PTR_GET(lowerWear_, Models::PedestrianDetectAttributeResponseBodyDataAttributesLowerWear) };
    inline PedestrianDetectAttributeResponseBodyDataAttributes& setLowerWear(const Models::PedestrianDetectAttributeResponseBodyDataAttributesLowerWear & lowerWear) { DARABONBA_PTR_SET_VALUE(lowerWear_, lowerWear) };
    inline PedestrianDetectAttributeResponseBodyDataAttributes& setLowerWear(Models::PedestrianDetectAttributeResponseBodyDataAttributesLowerWear && lowerWear) { DARABONBA_PTR_SET_RVALUE(lowerWear_, lowerWear) };


    // orient Field Functions 
    bool hasOrient() const { return this->orient_ != nullptr;};
    void deleteOrient() { this->orient_ = nullptr;};
    inline const Models::PedestrianDetectAttributeResponseBodyDataAttributesOrient & orient() const { DARABONBA_PTR_GET_CONST(orient_, Models::PedestrianDetectAttributeResponseBodyDataAttributesOrient) };
    inline Models::PedestrianDetectAttributeResponseBodyDataAttributesOrient orient() { DARABONBA_PTR_GET(orient_, Models::PedestrianDetectAttributeResponseBodyDataAttributesOrient) };
    inline PedestrianDetectAttributeResponseBodyDataAttributes& setOrient(const Models::PedestrianDetectAttributeResponseBodyDataAttributesOrient & orient) { DARABONBA_PTR_SET_VALUE(orient_, orient) };
    inline PedestrianDetectAttributeResponseBodyDataAttributes& setOrient(Models::PedestrianDetectAttributeResponseBodyDataAttributesOrient && orient) { DARABONBA_PTR_SET_RVALUE(orient_, orient) };


    // shoulderBag Field Functions 
    bool hasShoulderBag() const { return this->shoulderBag_ != nullptr;};
    void deleteShoulderBag() { this->shoulderBag_ = nullptr;};
    inline const Models::PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag & shoulderBag() const { DARABONBA_PTR_GET_CONST(shoulderBag_, Models::PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag) };
    inline Models::PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag shoulderBag() { DARABONBA_PTR_GET(shoulderBag_, Models::PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag) };
    inline PedestrianDetectAttributeResponseBodyDataAttributes& setShoulderBag(const Models::PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag & shoulderBag) { DARABONBA_PTR_SET_VALUE(shoulderBag_, shoulderBag) };
    inline PedestrianDetectAttributeResponseBodyDataAttributes& setShoulderBag(Models::PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag && shoulderBag) { DARABONBA_PTR_SET_RVALUE(shoulderBag_, shoulderBag) };


    // upperColor Field Functions 
    bool hasUpperColor() const { return this->upperColor_ != nullptr;};
    void deleteUpperColor() { this->upperColor_ = nullptr;};
    inline const Models::PedestrianDetectAttributeResponseBodyDataAttributesUpperColor & upperColor() const { DARABONBA_PTR_GET_CONST(upperColor_, Models::PedestrianDetectAttributeResponseBodyDataAttributesUpperColor) };
    inline Models::PedestrianDetectAttributeResponseBodyDataAttributesUpperColor upperColor() { DARABONBA_PTR_GET(upperColor_, Models::PedestrianDetectAttributeResponseBodyDataAttributesUpperColor) };
    inline PedestrianDetectAttributeResponseBodyDataAttributes& setUpperColor(const Models::PedestrianDetectAttributeResponseBodyDataAttributesUpperColor & upperColor) { DARABONBA_PTR_SET_VALUE(upperColor_, upperColor) };
    inline PedestrianDetectAttributeResponseBodyDataAttributes& setUpperColor(Models::PedestrianDetectAttributeResponseBodyDataAttributesUpperColor && upperColor) { DARABONBA_PTR_SET_RVALUE(upperColor_, upperColor) };


    // upperWear Field Functions 
    bool hasUpperWear() const { return this->upperWear_ != nullptr;};
    void deleteUpperWear() { this->upperWear_ = nullptr;};
    inline const Models::PedestrianDetectAttributeResponseBodyDataAttributesUpperWear & upperWear() const { DARABONBA_PTR_GET_CONST(upperWear_, Models::PedestrianDetectAttributeResponseBodyDataAttributesUpperWear) };
    inline Models::PedestrianDetectAttributeResponseBodyDataAttributesUpperWear upperWear() { DARABONBA_PTR_GET(upperWear_, Models::PedestrianDetectAttributeResponseBodyDataAttributesUpperWear) };
    inline PedestrianDetectAttributeResponseBodyDataAttributes& setUpperWear(const Models::PedestrianDetectAttributeResponseBodyDataAttributesUpperWear & upperWear) { DARABONBA_PTR_SET_VALUE(upperWear_, upperWear) };
    inline PedestrianDetectAttributeResponseBodyDataAttributes& setUpperWear(Models::PedestrianDetectAttributeResponseBodyDataAttributesUpperWear && upperWear) { DARABONBA_PTR_SET_RVALUE(upperWear_, upperWear) };


  protected:
    std::shared_ptr<Models::PedestrianDetectAttributeResponseBodyDataAttributesAge> age_ = nullptr;
    std::shared_ptr<Models::PedestrianDetectAttributeResponseBodyDataAttributesBackpack> backpack_ = nullptr;
    std::shared_ptr<Models::PedestrianDetectAttributeResponseBodyDataAttributesGender> gender_ = nullptr;
    std::shared_ptr<Models::PedestrianDetectAttributeResponseBodyDataAttributesGlasses> glasses_ = nullptr;
    std::shared_ptr<Models::PedestrianDetectAttributeResponseBodyDataAttributesHandbag> handbag_ = nullptr;
    std::shared_ptr<Models::PedestrianDetectAttributeResponseBodyDataAttributesHat> hat_ = nullptr;
    std::shared_ptr<Models::PedestrianDetectAttributeResponseBodyDataAttributesLowerColor> lowerColor_ = nullptr;
    std::shared_ptr<Models::PedestrianDetectAttributeResponseBodyDataAttributesLowerWear> lowerWear_ = nullptr;
    std::shared_ptr<Models::PedestrianDetectAttributeResponseBodyDataAttributesOrient> orient_ = nullptr;
    std::shared_ptr<Models::PedestrianDetectAttributeResponseBodyDataAttributesShoulderBag> shoulderBag_ = nullptr;
    std::shared_ptr<Models::PedestrianDetectAttributeResponseBodyDataAttributesUpperColor> upperColor_ = nullptr;
    std::shared_ptr<Models::PedestrianDetectAttributeResponseBodyDataAttributesUpperWear> upperWear_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
