// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVEHICLEICONGESTIONADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETECTVEHICLEICONGESTIONADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectVehicleICongestionAdvanceRequestPreRegionIntersectFeatures.hpp>
#include <alibabacloud/models/DetectVehicleICongestionAdvanceRequestRoadRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectVehicleICongestionAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVehicleICongestionAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_TO_JSON(PreRegionIntersectFeatures, preRegionIntersectFeatures_);
      DARABONBA_PTR_TO_JSON(RoadRegions, roadRegions_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVehicleICongestionAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_FROM_JSON(PreRegionIntersectFeatures, preRegionIntersectFeatures_);
      DARABONBA_PTR_FROM_JSON(RoadRegions, roadRegions_);
    };
    DetectVehicleICongestionAdvanceRequest() = default ;
    DetectVehicleICongestionAdvanceRequest(const DetectVehicleICongestionAdvanceRequest &) = default ;
    DetectVehicleICongestionAdvanceRequest(DetectVehicleICongestionAdvanceRequest &&) = default ;
    DetectVehicleICongestionAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVehicleICongestionAdvanceRequest() = default ;
    DetectVehicleICongestionAdvanceRequest& operator=(const DetectVehicleICongestionAdvanceRequest &) = default ;
    DetectVehicleICongestionAdvanceRequest& operator=(DetectVehicleICongestionAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageURLObject_ != nullptr
        && this->preRegionIntersectFeatures_ != nullptr && this->roadRegions_ != nullptr; };
    // imageURLObject Field Functions 
    bool hasImageURLObject() const { return this->imageURLObject_ != nullptr;};
    void deleteImageURLObject() { this->imageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLObject() const { DARABONBA_GET(imageURLObject_) };
    inline DetectVehicleICongestionAdvanceRequest& setImageURLObject(shared_ptr<Darabonba::IStream> imageURLObject) { DARABONBA_SET_VALUE(imageURLObject_, imageURLObject) };


    // preRegionIntersectFeatures Field Functions 
    bool hasPreRegionIntersectFeatures() const { return this->preRegionIntersectFeatures_ != nullptr;};
    void deletePreRegionIntersectFeatures() { this->preRegionIntersectFeatures_ = nullptr;};
    inline const vector<DetectVehicleICongestionAdvanceRequestPreRegionIntersectFeatures> & preRegionIntersectFeatures() const { DARABONBA_PTR_GET_CONST(preRegionIntersectFeatures_, vector<DetectVehicleICongestionAdvanceRequestPreRegionIntersectFeatures>) };
    inline vector<DetectVehicleICongestionAdvanceRequestPreRegionIntersectFeatures> preRegionIntersectFeatures() { DARABONBA_PTR_GET(preRegionIntersectFeatures_, vector<DetectVehicleICongestionAdvanceRequestPreRegionIntersectFeatures>) };
    inline DetectVehicleICongestionAdvanceRequest& setPreRegionIntersectFeatures(const vector<DetectVehicleICongestionAdvanceRequestPreRegionIntersectFeatures> & preRegionIntersectFeatures) { DARABONBA_PTR_SET_VALUE(preRegionIntersectFeatures_, preRegionIntersectFeatures) };
    inline DetectVehicleICongestionAdvanceRequest& setPreRegionIntersectFeatures(vector<DetectVehicleICongestionAdvanceRequestPreRegionIntersectFeatures> && preRegionIntersectFeatures) { DARABONBA_PTR_SET_RVALUE(preRegionIntersectFeatures_, preRegionIntersectFeatures) };


    // roadRegions Field Functions 
    bool hasRoadRegions() const { return this->roadRegions_ != nullptr;};
    void deleteRoadRegions() { this->roadRegions_ = nullptr;};
    inline const vector<DetectVehicleICongestionAdvanceRequestRoadRegions> & roadRegions() const { DARABONBA_PTR_GET_CONST(roadRegions_, vector<DetectVehicleICongestionAdvanceRequestRoadRegions>) };
    inline vector<DetectVehicleICongestionAdvanceRequestRoadRegions> roadRegions() { DARABONBA_PTR_GET(roadRegions_, vector<DetectVehicleICongestionAdvanceRequestRoadRegions>) };
    inline DetectVehicleICongestionAdvanceRequest& setRoadRegions(const vector<DetectVehicleICongestionAdvanceRequestRoadRegions> & roadRegions) { DARABONBA_PTR_SET_VALUE(roadRegions_, roadRegions) };
    inline DetectVehicleICongestionAdvanceRequest& setRoadRegions(vector<DetectVehicleICongestionAdvanceRequestRoadRegions> && roadRegions) { DARABONBA_PTR_SET_RVALUE(roadRegions_, roadRegions) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageURLObject_ = nullptr;
    std::shared_ptr<vector<DetectVehicleICongestionAdvanceRequestPreRegionIntersectFeatures>> preRegionIntersectFeatures_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<DetectVehicleICongestionAdvanceRequestRoadRegions>> roadRegions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
