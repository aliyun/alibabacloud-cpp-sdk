// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVEHICLEILLEGALPARKINGREQUESTROADREGIONSROADREGION_HPP_
#define ALIBABACLOUD_MODELS_DETECTVEHICLEILLEGALPARKINGREQUESTROADREGIONSROADREGION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DetectVehicleIllegalParkingRequestRoadRegionsRoadRegionPoint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectVehicleIllegalParkingRequestRoadRegionsRoadRegion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVehicleIllegalParkingRequestRoadRegionsRoadRegion& obj) { 
      DARABONBA_PTR_TO_JSON(Point, point_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVehicleIllegalParkingRequestRoadRegionsRoadRegion& obj) { 
      DARABONBA_PTR_FROM_JSON(Point, point_);
    };
    DetectVehicleIllegalParkingRequestRoadRegionsRoadRegion() = default ;
    DetectVehicleIllegalParkingRequestRoadRegionsRoadRegion(const DetectVehicleIllegalParkingRequestRoadRegionsRoadRegion &) = default ;
    DetectVehicleIllegalParkingRequestRoadRegionsRoadRegion(DetectVehicleIllegalParkingRequestRoadRegionsRoadRegion &&) = default ;
    DetectVehicleIllegalParkingRequestRoadRegionsRoadRegion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVehicleIllegalParkingRequestRoadRegionsRoadRegion() = default ;
    DetectVehicleIllegalParkingRequestRoadRegionsRoadRegion& operator=(const DetectVehicleIllegalParkingRequestRoadRegionsRoadRegion &) = default ;
    DetectVehicleIllegalParkingRequestRoadRegionsRoadRegion& operator=(DetectVehicleIllegalParkingRequestRoadRegionsRoadRegion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->point_ != nullptr; };
    // point Field Functions 
    bool hasPoint() const { return this->point_ != nullptr;};
    void deletePoint() { this->point_ = nullptr;};
    inline const Models::DetectVehicleIllegalParkingRequestRoadRegionsRoadRegionPoint & point() const { DARABONBA_PTR_GET_CONST(point_, Models::DetectVehicleIllegalParkingRequestRoadRegionsRoadRegionPoint) };
    inline Models::DetectVehicleIllegalParkingRequestRoadRegionsRoadRegionPoint point() { DARABONBA_PTR_GET(point_, Models::DetectVehicleIllegalParkingRequestRoadRegionsRoadRegionPoint) };
    inline DetectVehicleIllegalParkingRequestRoadRegionsRoadRegion& setPoint(const Models::DetectVehicleIllegalParkingRequestRoadRegionsRoadRegionPoint & point) { DARABONBA_PTR_SET_VALUE(point_, point) };
    inline DetectVehicleIllegalParkingRequestRoadRegionsRoadRegion& setPoint(Models::DetectVehicleIllegalParkingRequestRoadRegionsRoadRegionPoint && point) { DARABONBA_PTR_SET_RVALUE(point_, point) };


  protected:
    // This parameter is required.
    std::shared_ptr<Models::DetectVehicleIllegalParkingRequestRoadRegionsRoadRegionPoint> point_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
