// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVEHICLEILLEGALPARKINGADVANCEREQUESTROADREGIONSROADREGIONPOINT_HPP_
#define ALIBABACLOUD_MODELS_DETECTVEHICLEILLEGALPARKINGADVANCEREQUESTROADREGIONSROADREGIONPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegionPoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegionPoint& obj) { 
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegionPoint& obj) { 
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegionPoint() = default ;
    DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegionPoint(const DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegionPoint &) = default ;
    DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegionPoint(DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegionPoint &&) = default ;
    DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegionPoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegionPoint() = default ;
    DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegionPoint& operator=(const DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegionPoint &) = default ;
    DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegionPoint& operator=(DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegionPoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->x_ != nullptr
        && this->y_ != nullptr; };
    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline int64_t x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0L) };
    inline DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegionPoint& setX(int64_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline int64_t y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0L) };
    inline DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegionPoint& setY(int64_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> x_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
