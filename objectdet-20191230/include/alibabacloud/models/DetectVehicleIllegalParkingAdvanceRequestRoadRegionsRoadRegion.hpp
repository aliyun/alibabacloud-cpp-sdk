// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVEHICLEILLEGALPARKINGADVANCEREQUESTROADREGIONSROADREGION_HPP_
#define ALIBABACLOUD_MODELS_DETECTVEHICLEILLEGALPARKINGADVANCEREQUESTROADREGIONSROADREGION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegionPoint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegion& obj) { 
      DARABONBA_PTR_TO_JSON(Point, point_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegion& obj) { 
      DARABONBA_PTR_FROM_JSON(Point, point_);
    };
    DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegion() = default ;
    DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegion(const DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegion &) = default ;
    DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegion(DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegion &&) = default ;
    DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegion() = default ;
    DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegion& operator=(const DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegion &) = default ;
    DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegion& operator=(DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->point_ != nullptr; };
    // point Field Functions 
    bool hasPoint() const { return this->point_ != nullptr;};
    void deletePoint() { this->point_ = nullptr;};
    inline const Models::DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegionPoint & point() const { DARABONBA_PTR_GET_CONST(point_, Models::DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegionPoint) };
    inline Models::DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegionPoint point() { DARABONBA_PTR_GET(point_, Models::DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegionPoint) };
    inline DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegion& setPoint(const Models::DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegionPoint & point) { DARABONBA_PTR_SET_VALUE(point_, point) };
    inline DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegion& setPoint(Models::DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegionPoint && point) { DARABONBA_PTR_SET_RVALUE(point_, point) };


  protected:
    // This parameter is required.
    std::shared_ptr<Models::DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegionPoint> point_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
