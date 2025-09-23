// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVEHICLEICONGESTIONADVANCEREQUESTROADREGIONSROADREGION_HPP_
#define ALIBABACLOUD_MODELS_DETECTVEHICLEICONGESTIONADVANCEREQUESTROADREGIONSROADREGION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegionPoint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegion& obj) { 
      DARABONBA_PTR_TO_JSON(Point, point_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegion& obj) { 
      DARABONBA_PTR_FROM_JSON(Point, point_);
    };
    DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegion() = default ;
    DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegion(const DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegion &) = default ;
    DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegion(DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegion &&) = default ;
    DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegion() = default ;
    DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegion& operator=(const DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegion &) = default ;
    DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegion& operator=(DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->point_ != nullptr; };
    // point Field Functions 
    bool hasPoint() const { return this->point_ != nullptr;};
    void deletePoint() { this->point_ = nullptr;};
    inline const Models::DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegionPoint & point() const { DARABONBA_PTR_GET_CONST(point_, Models::DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegionPoint) };
    inline Models::DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegionPoint point() { DARABONBA_PTR_GET(point_, Models::DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegionPoint) };
    inline DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegion& setPoint(const Models::DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegionPoint & point) { DARABONBA_PTR_SET_VALUE(point_, point) };
    inline DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegion& setPoint(Models::DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegionPoint && point) { DARABONBA_PTR_SET_RVALUE(point_, point) };


  protected:
    // This parameter is required.
    std::shared_ptr<Models::DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegionPoint> point_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
