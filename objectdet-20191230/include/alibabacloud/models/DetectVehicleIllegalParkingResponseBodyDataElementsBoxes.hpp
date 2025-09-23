// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVEHICLEILLEGALPARKINGRESPONSEBODYDATAELEMENTSBOXES_HPP_
#define ALIBABACLOUD_MODELS_DETECTVEHICLEILLEGALPARKINGRESPONSEBODYDATAELEMENTSBOXES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectVehicleIllegalParkingResponseBodyDataElementsBoxes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVehicleIllegalParkingResponseBodyDataElementsBoxes& obj) { 
      DARABONBA_PTR_TO_JSON(Bottom, bottom_);
      DARABONBA_PTR_TO_JSON(Left, left_);
      DARABONBA_PTR_TO_JSON(Right, right_);
      DARABONBA_PTR_TO_JSON(Top, top_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVehicleIllegalParkingResponseBodyDataElementsBoxes& obj) { 
      DARABONBA_PTR_FROM_JSON(Bottom, bottom_);
      DARABONBA_PTR_FROM_JSON(Left, left_);
      DARABONBA_PTR_FROM_JSON(Right, right_);
      DARABONBA_PTR_FROM_JSON(Top, top_);
    };
    DetectVehicleIllegalParkingResponseBodyDataElementsBoxes() = default ;
    DetectVehicleIllegalParkingResponseBodyDataElementsBoxes(const DetectVehicleIllegalParkingResponseBodyDataElementsBoxes &) = default ;
    DetectVehicleIllegalParkingResponseBodyDataElementsBoxes(DetectVehicleIllegalParkingResponseBodyDataElementsBoxes &&) = default ;
    DetectVehicleIllegalParkingResponseBodyDataElementsBoxes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVehicleIllegalParkingResponseBodyDataElementsBoxes() = default ;
    DetectVehicleIllegalParkingResponseBodyDataElementsBoxes& operator=(const DetectVehicleIllegalParkingResponseBodyDataElementsBoxes &) = default ;
    DetectVehicleIllegalParkingResponseBodyDataElementsBoxes& operator=(DetectVehicleIllegalParkingResponseBodyDataElementsBoxes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bottom_ != nullptr
        && this->left_ != nullptr && this->right_ != nullptr && this->top_ != nullptr; };
    // bottom Field Functions 
    bool hasBottom() const { return this->bottom_ != nullptr;};
    void deleteBottom() { this->bottom_ = nullptr;};
    inline int64_t bottom() const { DARABONBA_PTR_GET_DEFAULT(bottom_, 0L) };
    inline DetectVehicleIllegalParkingResponseBodyDataElementsBoxes& setBottom(int64_t bottom) { DARABONBA_PTR_SET_VALUE(bottom_, bottom) };


    // left Field Functions 
    bool hasLeft() const { return this->left_ != nullptr;};
    void deleteLeft() { this->left_ = nullptr;};
    inline int64_t left() const { DARABONBA_PTR_GET_DEFAULT(left_, 0L) };
    inline DetectVehicleIllegalParkingResponseBodyDataElementsBoxes& setLeft(int64_t left) { DARABONBA_PTR_SET_VALUE(left_, left) };


    // right Field Functions 
    bool hasRight() const { return this->right_ != nullptr;};
    void deleteRight() { this->right_ = nullptr;};
    inline int64_t right() const { DARABONBA_PTR_GET_DEFAULT(right_, 0L) };
    inline DetectVehicleIllegalParkingResponseBodyDataElementsBoxes& setRight(int64_t right) { DARABONBA_PTR_SET_VALUE(right_, right) };


    // top Field Functions 
    bool hasTop() const { return this->top_ != nullptr;};
    void deleteTop() { this->top_ = nullptr;};
    inline int64_t top() const { DARABONBA_PTR_GET_DEFAULT(top_, 0L) };
    inline DetectVehicleIllegalParkingResponseBodyDataElementsBoxes& setTop(int64_t top) { DARABONBA_PTR_SET_VALUE(top_, top) };


  protected:
    std::shared_ptr<int64_t> bottom_ = nullptr;
    std::shared_ptr<int64_t> left_ = nullptr;
    std::shared_ptr<int64_t> right_ = nullptr;
    std::shared_ptr<int64_t> top_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
