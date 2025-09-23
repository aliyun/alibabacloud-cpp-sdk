// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVEHICLEICONGESTIONADVANCEREQUESTROADREGIONS_HPP_
#define ALIBABACLOUD_MODELS_DETECTVEHICLEICONGESTIONADVANCEREQUESTROADREGIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectVehicleICongestionAdvanceRequestRoadRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVehicleICongestionAdvanceRequestRoadRegions& obj) { 
      DARABONBA_PTR_TO_JSON(RoadRegion, roadRegion_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVehicleICongestionAdvanceRequestRoadRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(RoadRegion, roadRegion_);
    };
    DetectVehicleICongestionAdvanceRequestRoadRegions() = default ;
    DetectVehicleICongestionAdvanceRequestRoadRegions(const DetectVehicleICongestionAdvanceRequestRoadRegions &) = default ;
    DetectVehicleICongestionAdvanceRequestRoadRegions(DetectVehicleICongestionAdvanceRequestRoadRegions &&) = default ;
    DetectVehicleICongestionAdvanceRequestRoadRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVehicleICongestionAdvanceRequestRoadRegions() = default ;
    DetectVehicleICongestionAdvanceRequestRoadRegions& operator=(const DetectVehicleICongestionAdvanceRequestRoadRegions &) = default ;
    DetectVehicleICongestionAdvanceRequestRoadRegions& operator=(DetectVehicleICongestionAdvanceRequestRoadRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->roadRegion_ != nullptr; };
    // roadRegion Field Functions 
    bool hasRoadRegion() const { return this->roadRegion_ != nullptr;};
    void deleteRoadRegion() { this->roadRegion_ = nullptr;};
    inline const vector<Models::DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegion> & roadRegion() const { DARABONBA_PTR_GET_CONST(roadRegion_, vector<Models::DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegion>) };
    inline vector<Models::DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegion> roadRegion() { DARABONBA_PTR_GET(roadRegion_, vector<Models::DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegion>) };
    inline DetectVehicleICongestionAdvanceRequestRoadRegions& setRoadRegion(const vector<Models::DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegion> & roadRegion) { DARABONBA_PTR_SET_VALUE(roadRegion_, roadRegion) };
    inline DetectVehicleICongestionAdvanceRequestRoadRegions& setRoadRegion(vector<Models::DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegion> && roadRegion) { DARABONBA_PTR_SET_RVALUE(roadRegion_, roadRegion) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::DetectVehicleICongestionAdvanceRequestRoadRegionsRoadRegion>> roadRegion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
