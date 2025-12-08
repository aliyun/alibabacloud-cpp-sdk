// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PEDESTRIANDETECTATTRIBUTERESPONSEBODYDATABOXES_HPP_
#define ALIBABACLOUD_MODELS_PEDESTRIANDETECTATTRIBUTERESPONSEBODYDATABOXES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class PedestrianDetectAttributeResponseBodyDataBoxes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PedestrianDetectAttributeResponseBodyDataBoxes& obj) { 
      DARABONBA_PTR_TO_JSON(BottomRightX, bottomRightX_);
      DARABONBA_PTR_TO_JSON(BottomRightY, bottomRightY_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(TopLeftX, topLeftX_);
      DARABONBA_PTR_TO_JSON(TopLeftY, topLeftY_);
    };
    friend void from_json(const Darabonba::Json& j, PedestrianDetectAttributeResponseBodyDataBoxes& obj) { 
      DARABONBA_PTR_FROM_JSON(BottomRightX, bottomRightX_);
      DARABONBA_PTR_FROM_JSON(BottomRightY, bottomRightY_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(TopLeftX, topLeftX_);
      DARABONBA_PTR_FROM_JSON(TopLeftY, topLeftY_);
    };
    PedestrianDetectAttributeResponseBodyDataBoxes() = default ;
    PedestrianDetectAttributeResponseBodyDataBoxes(const PedestrianDetectAttributeResponseBodyDataBoxes &) = default ;
    PedestrianDetectAttributeResponseBodyDataBoxes(PedestrianDetectAttributeResponseBodyDataBoxes &&) = default ;
    PedestrianDetectAttributeResponseBodyDataBoxes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PedestrianDetectAttributeResponseBodyDataBoxes() = default ;
    PedestrianDetectAttributeResponseBodyDataBoxes& operator=(const PedestrianDetectAttributeResponseBodyDataBoxes &) = default ;
    PedestrianDetectAttributeResponseBodyDataBoxes& operator=(PedestrianDetectAttributeResponseBodyDataBoxes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bottomRightX_ == nullptr
        && return this->bottomRightY_ == nullptr && return this->score_ == nullptr && return this->topLeftX_ == nullptr && return this->topLeftY_ == nullptr; };
    // bottomRightX Field Functions 
    bool hasBottomRightX() const { return this->bottomRightX_ != nullptr;};
    void deleteBottomRightX() { this->bottomRightX_ = nullptr;};
    inline float bottomRightX() const { DARABONBA_PTR_GET_DEFAULT(bottomRightX_, 0.0) };
    inline PedestrianDetectAttributeResponseBodyDataBoxes& setBottomRightX(float bottomRightX) { DARABONBA_PTR_SET_VALUE(bottomRightX_, bottomRightX) };


    // bottomRightY Field Functions 
    bool hasBottomRightY() const { return this->bottomRightY_ != nullptr;};
    void deleteBottomRightY() { this->bottomRightY_ = nullptr;};
    inline float bottomRightY() const { DARABONBA_PTR_GET_DEFAULT(bottomRightY_, 0.0) };
    inline PedestrianDetectAttributeResponseBodyDataBoxes& setBottomRightY(float bottomRightY) { DARABONBA_PTR_SET_VALUE(bottomRightY_, bottomRightY) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline float score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline PedestrianDetectAttributeResponseBodyDataBoxes& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // topLeftX Field Functions 
    bool hasTopLeftX() const { return this->topLeftX_ != nullptr;};
    void deleteTopLeftX() { this->topLeftX_ = nullptr;};
    inline float topLeftX() const { DARABONBA_PTR_GET_DEFAULT(topLeftX_, 0.0) };
    inline PedestrianDetectAttributeResponseBodyDataBoxes& setTopLeftX(float topLeftX) { DARABONBA_PTR_SET_VALUE(topLeftX_, topLeftX) };


    // topLeftY Field Functions 
    bool hasTopLeftY() const { return this->topLeftY_ != nullptr;};
    void deleteTopLeftY() { this->topLeftY_ = nullptr;};
    inline float topLeftY() const { DARABONBA_PTR_GET_DEFAULT(topLeftY_, 0.0) };
    inline PedestrianDetectAttributeResponseBodyDataBoxes& setTopLeftY(float topLeftY) { DARABONBA_PTR_SET_VALUE(topLeftY_, topLeftY) };


  protected:
    std::shared_ptr<float> bottomRightX_ = nullptr;
    std::shared_ptr<float> bottomRightY_ = nullptr;
    std::shared_ptr<float> score_ = nullptr;
    std::shared_ptr<float> topLeftX_ = nullptr;
    std::shared_ptr<float> topLeftY_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
