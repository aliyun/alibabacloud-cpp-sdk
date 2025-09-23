// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVEHICLEICONGESTIONREQUESTROADREGIONS_HPP_
#define ALIBABACLOUD_MODELS_DETECTVEHICLEICONGESTIONREQUESTROADREGIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectVehicleICongestionRequestRoadRegionsRoadRegion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectVehicleICongestionRequestRoadRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVehicleICongestionRequestRoadRegions& obj) { 
      DARABONBA_PTR_TO_JSON(RoadRegion, roadRegion_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVehicleICongestionRequestRoadRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(RoadRegion, roadRegion_);
    };
    DetectVehicleICongestionRequestRoadRegions() = default ;
    DetectVehicleICongestionRequestRoadRegions(const DetectVehicleICongestionRequestRoadRegions &) = default ;
    DetectVehicleICongestionRequestRoadRegions(DetectVehicleICongestionRequestRoadRegions &&) = default ;
    DetectVehicleICongestionRequestRoadRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVehicleICongestionRequestRoadRegions() = default ;
    DetectVehicleICongestionRequestRoadRegions& operator=(const DetectVehicleICongestionRequestRoadRegions &) = default ;
    DetectVehicleICongestionRequestRoadRegions& operator=(DetectVehicleICongestionRequestRoadRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->roadRegion_ != nullptr; };
    // roadRegion Field Functions 
    bool hasRoadRegion() const { return this->roadRegion_ != nullptr;};
    void deleteRoadRegion() { this->roadRegion_ = nullptr;};
    inline const vector<Models::DetectVehicleICongestionRequestRoadRegionsRoadRegion> & roadRegion() const { DARABONBA_PTR_GET_CONST(roadRegion_, vector<Models::DetectVehicleICongestionRequestRoadRegionsRoadRegion>) };
    inline vector<Models::DetectVehicleICongestionRequestRoadRegionsRoadRegion> roadRegion() { DARABONBA_PTR_GET(roadRegion_, vector<Models::DetectVehicleICongestionRequestRoadRegionsRoadRegion>) };
    inline DetectVehicleICongestionRequestRoadRegions& setRoadRegion(const vector<Models::DetectVehicleICongestionRequestRoadRegionsRoadRegion> & roadRegion) { DARABONBA_PTR_SET_VALUE(roadRegion_, roadRegion) };
    inline DetectVehicleICongestionRequestRoadRegions& setRoadRegion(vector<Models::DetectVehicleICongestionRequestRoadRegionsRoadRegion> && roadRegion) { DARABONBA_PTR_SET_RVALUE(roadRegion_, roadRegion) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::DetectVehicleICongestionRequestRoadRegionsRoadRegion>> roadRegion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
