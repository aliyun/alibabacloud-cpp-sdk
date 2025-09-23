// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVEHICLEILLEGALPARKINGADVANCEREQUESTROADREGIONS_HPP_
#define ALIBABACLOUD_MODELS_DETECTVEHICLEILLEGALPARKINGADVANCEREQUESTROADREGIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectVehicleIllegalParkingAdvanceRequestRoadRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVehicleIllegalParkingAdvanceRequestRoadRegions& obj) { 
      DARABONBA_PTR_TO_JSON(RoadRegion, roadRegion_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVehicleIllegalParkingAdvanceRequestRoadRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(RoadRegion, roadRegion_);
    };
    DetectVehicleIllegalParkingAdvanceRequestRoadRegions() = default ;
    DetectVehicleIllegalParkingAdvanceRequestRoadRegions(const DetectVehicleIllegalParkingAdvanceRequestRoadRegions &) = default ;
    DetectVehicleIllegalParkingAdvanceRequestRoadRegions(DetectVehicleIllegalParkingAdvanceRequestRoadRegions &&) = default ;
    DetectVehicleIllegalParkingAdvanceRequestRoadRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVehicleIllegalParkingAdvanceRequestRoadRegions() = default ;
    DetectVehicleIllegalParkingAdvanceRequestRoadRegions& operator=(const DetectVehicleIllegalParkingAdvanceRequestRoadRegions &) = default ;
    DetectVehicleIllegalParkingAdvanceRequestRoadRegions& operator=(DetectVehicleIllegalParkingAdvanceRequestRoadRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->roadRegion_ != nullptr; };
    // roadRegion Field Functions 
    bool hasRoadRegion() const { return this->roadRegion_ != nullptr;};
    void deleteRoadRegion() { this->roadRegion_ = nullptr;};
    inline const vector<Models::DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegion> & roadRegion() const { DARABONBA_PTR_GET_CONST(roadRegion_, vector<Models::DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegion>) };
    inline vector<Models::DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegion> roadRegion() { DARABONBA_PTR_GET(roadRegion_, vector<Models::DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegion>) };
    inline DetectVehicleIllegalParkingAdvanceRequestRoadRegions& setRoadRegion(const vector<Models::DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegion> & roadRegion) { DARABONBA_PTR_SET_VALUE(roadRegion_, roadRegion) };
    inline DetectVehicleIllegalParkingAdvanceRequestRoadRegions& setRoadRegion(vector<Models::DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegion> && roadRegion) { DARABONBA_PTR_SET_RVALUE(roadRegion_, roadRegion) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::DetectVehicleIllegalParkingAdvanceRequestRoadRegionsRoadRegion>> roadRegion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
