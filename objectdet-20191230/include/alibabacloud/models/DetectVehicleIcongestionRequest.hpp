// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVEHICLEICONGESTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETECTVEHICLEICONGESTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectVehicleICongestionRequestPreRegionIntersectFeatures.hpp>
#include <alibabacloud/models/DetectVehicleICongestionRequestRoadRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectVehicleICongestionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVehicleICongestionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(PreRegionIntersectFeatures, preRegionIntersectFeatures_);
      DARABONBA_PTR_TO_JSON(RoadRegions, roadRegions_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVehicleICongestionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(PreRegionIntersectFeatures, preRegionIntersectFeatures_);
      DARABONBA_PTR_FROM_JSON(RoadRegions, roadRegions_);
    };
    DetectVehicleICongestionRequest() = default ;
    DetectVehicleICongestionRequest(const DetectVehicleICongestionRequest &) = default ;
    DetectVehicleICongestionRequest(DetectVehicleICongestionRequest &&) = default ;
    DetectVehicleICongestionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVehicleICongestionRequest() = default ;
    DetectVehicleICongestionRequest& operator=(const DetectVehicleICongestionRequest &) = default ;
    DetectVehicleICongestionRequest& operator=(DetectVehicleICongestionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageURL_ != nullptr
        && this->preRegionIntersectFeatures_ != nullptr && this->roadRegions_ != nullptr; };
    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline DetectVehicleICongestionRequest& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // preRegionIntersectFeatures Field Functions 
    bool hasPreRegionIntersectFeatures() const { return this->preRegionIntersectFeatures_ != nullptr;};
    void deletePreRegionIntersectFeatures() { this->preRegionIntersectFeatures_ = nullptr;};
    inline const vector<DetectVehicleICongestionRequestPreRegionIntersectFeatures> & preRegionIntersectFeatures() const { DARABONBA_PTR_GET_CONST(preRegionIntersectFeatures_, vector<DetectVehicleICongestionRequestPreRegionIntersectFeatures>) };
    inline vector<DetectVehicleICongestionRequestPreRegionIntersectFeatures> preRegionIntersectFeatures() { DARABONBA_PTR_GET(preRegionIntersectFeatures_, vector<DetectVehicleICongestionRequestPreRegionIntersectFeatures>) };
    inline DetectVehicleICongestionRequest& setPreRegionIntersectFeatures(const vector<DetectVehicleICongestionRequestPreRegionIntersectFeatures> & preRegionIntersectFeatures) { DARABONBA_PTR_SET_VALUE(preRegionIntersectFeatures_, preRegionIntersectFeatures) };
    inline DetectVehicleICongestionRequest& setPreRegionIntersectFeatures(vector<DetectVehicleICongestionRequestPreRegionIntersectFeatures> && preRegionIntersectFeatures) { DARABONBA_PTR_SET_RVALUE(preRegionIntersectFeatures_, preRegionIntersectFeatures) };


    // roadRegions Field Functions 
    bool hasRoadRegions() const { return this->roadRegions_ != nullptr;};
    void deleteRoadRegions() { this->roadRegions_ = nullptr;};
    inline const vector<DetectVehicleICongestionRequestRoadRegions> & roadRegions() const { DARABONBA_PTR_GET_CONST(roadRegions_, vector<DetectVehicleICongestionRequestRoadRegions>) };
    inline vector<DetectVehicleICongestionRequestRoadRegions> roadRegions() { DARABONBA_PTR_GET(roadRegions_, vector<DetectVehicleICongestionRequestRoadRegions>) };
    inline DetectVehicleICongestionRequest& setRoadRegions(const vector<DetectVehicleICongestionRequestRoadRegions> & roadRegions) { DARABONBA_PTR_SET_VALUE(roadRegions_, roadRegions) };
    inline DetectVehicleICongestionRequest& setRoadRegions(vector<DetectVehicleICongestionRequestRoadRegions> && roadRegions) { DARABONBA_PTR_SET_RVALUE(roadRegions_, roadRegions) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> imageURL_ = nullptr;
    std::shared_ptr<vector<DetectVehicleICongestionRequestPreRegionIntersectFeatures>> preRegionIntersectFeatures_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<DetectVehicleICongestionRequestRoadRegions>> roadRegions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
