// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CAR_HPP_
#define ALIBABACLOUD_MODELS_CAR_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Boundary.hpp>
#include <vector>
#include <alibabacloud/models/LicensePlate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class Car : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Car& obj) { 
      DARABONBA_PTR_TO_JSON(Boundary, boundary_);
      DARABONBA_PTR_TO_JSON(CarColor, carColor_);
      DARABONBA_PTR_TO_JSON(CarColorConfidence, carColorConfidence_);
      DARABONBA_PTR_TO_JSON(CarType, carType_);
      DARABONBA_PTR_TO_JSON(CarTypeConfidence, carTypeConfidence_);
      DARABONBA_PTR_TO_JSON(Confidence, confidence_);
      DARABONBA_PTR_TO_JSON(LicensePlates, licensePlates_);
    };
    friend void from_json(const Darabonba::Json& j, Car& obj) { 
      DARABONBA_PTR_FROM_JSON(Boundary, boundary_);
      DARABONBA_PTR_FROM_JSON(CarColor, carColor_);
      DARABONBA_PTR_FROM_JSON(CarColorConfidence, carColorConfidence_);
      DARABONBA_PTR_FROM_JSON(CarType, carType_);
      DARABONBA_PTR_FROM_JSON(CarTypeConfidence, carTypeConfidence_);
      DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
      DARABONBA_PTR_FROM_JSON(LicensePlates, licensePlates_);
    };
    Car() = default ;
    Car(const Car &) = default ;
    Car(Car &&) = default ;
    Car(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Car() = default ;
    Car& operator=(const Car &) = default ;
    Car& operator=(Car &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->boundary_ == nullptr
        && this->carColor_ == nullptr && this->carColorConfidence_ == nullptr && this->carType_ == nullptr && this->carTypeConfidence_ == nullptr && this->confidence_ == nullptr
        && this->licensePlates_ == nullptr; };
    // boundary Field Functions 
    bool hasBoundary() const { return this->boundary_ != nullptr;};
    void deleteBoundary() { this->boundary_ = nullptr;};
    inline const Boundary & getBoundary() const { DARABONBA_PTR_GET_CONST(boundary_, Boundary) };
    inline Boundary getBoundary() { DARABONBA_PTR_GET(boundary_, Boundary) };
    inline Car& setBoundary(const Boundary & boundary) { DARABONBA_PTR_SET_VALUE(boundary_, boundary) };
    inline Car& setBoundary(Boundary && boundary) { DARABONBA_PTR_SET_RVALUE(boundary_, boundary) };


    // carColor Field Functions 
    bool hasCarColor() const { return this->carColor_ != nullptr;};
    void deleteCarColor() { this->carColor_ = nullptr;};
    inline string getCarColor() const { DARABONBA_PTR_GET_DEFAULT(carColor_, "") };
    inline Car& setCarColor(string carColor) { DARABONBA_PTR_SET_VALUE(carColor_, carColor) };


    // carColorConfidence Field Functions 
    bool hasCarColorConfidence() const { return this->carColorConfidence_ != nullptr;};
    void deleteCarColorConfidence() { this->carColorConfidence_ = nullptr;};
    inline double getCarColorConfidence() const { DARABONBA_PTR_GET_DEFAULT(carColorConfidence_, 0.0) };
    inline Car& setCarColorConfidence(double carColorConfidence) { DARABONBA_PTR_SET_VALUE(carColorConfidence_, carColorConfidence) };


    // carType Field Functions 
    bool hasCarType() const { return this->carType_ != nullptr;};
    void deleteCarType() { this->carType_ = nullptr;};
    inline string getCarType() const { DARABONBA_PTR_GET_DEFAULT(carType_, "") };
    inline Car& setCarType(string carType) { DARABONBA_PTR_SET_VALUE(carType_, carType) };


    // carTypeConfidence Field Functions 
    bool hasCarTypeConfidence() const { return this->carTypeConfidence_ != nullptr;};
    void deleteCarTypeConfidence() { this->carTypeConfidence_ = nullptr;};
    inline double getCarTypeConfidence() const { DARABONBA_PTR_GET_DEFAULT(carTypeConfidence_, 0.0) };
    inline Car& setCarTypeConfidence(double carTypeConfidence) { DARABONBA_PTR_SET_VALUE(carTypeConfidence_, carTypeConfidence) };


    // confidence Field Functions 
    bool hasConfidence() const { return this->confidence_ != nullptr;};
    void deleteConfidence() { this->confidence_ = nullptr;};
    inline double getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
    inline Car& setConfidence(double confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


    // licensePlates Field Functions 
    bool hasLicensePlates() const { return this->licensePlates_ != nullptr;};
    void deleteLicensePlates() { this->licensePlates_ = nullptr;};
    inline const vector<LicensePlate> & getLicensePlates() const { DARABONBA_PTR_GET_CONST(licensePlates_, vector<LicensePlate>) };
    inline vector<LicensePlate> getLicensePlates() { DARABONBA_PTR_GET(licensePlates_, vector<LicensePlate>) };
    inline Car& setLicensePlates(const vector<LicensePlate> & licensePlates) { DARABONBA_PTR_SET_VALUE(licensePlates_, licensePlates) };
    inline Car& setLicensePlates(vector<LicensePlate> && licensePlates) { DARABONBA_PTR_SET_RVALUE(licensePlates_, licensePlates) };


  protected:
    // The boundary information.
    shared_ptr<Boundary> boundary_ {};
    // The vehicle color. Valid values
    // 
    // *   white
    // *   grey
    // *   yellow
    // *   red
    // *   green
    // *   blue
    // *   black
    // *   purple
    // *   brown
    shared_ptr<string> carColor_ {};
    // The confidence level of the vehicle color. Valid values: 0 to 1. The value 0 indicates the lowest confidence level. The value 1 indicates the highest confidence level.
    shared_ptr<double> carColorConfidence_ {};
    // The vehicle type. Valid values:
    // 
    // *   car
    // *   bus
    // *   truck
    // *   van
    shared_ptr<string> carType_ {};
    // The confidence level of the vehicle type. Valid values: 0 to 1. The value 0 indicates the lowest confidence level. The value 1 indicates the highest confidence level.
    shared_ptr<double> carTypeConfidence_ {};
    // The confidence level of the vehicle detection result. Valid values: 0 to 1. The value 0 indicates the lowest confidence level. The value 1 indicates the highest confidence level.
    shared_ptr<double> confidence_ {};
    // The license plates.
    shared_ptr<vector<LicensePlate>> licensePlates_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
