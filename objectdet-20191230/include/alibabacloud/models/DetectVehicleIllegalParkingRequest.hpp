// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVEHICLEILLEGALPARKINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETECTVEHICLEILLEGALPARKINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectVehicleIllegalParkingRequestRoadRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectVehicleIllegalParkingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVehicleIllegalParkingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(RoadRegions, roadRegions_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVehicleIllegalParkingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(RoadRegions, roadRegions_);
    };
    DetectVehicleIllegalParkingRequest() = default ;
    DetectVehicleIllegalParkingRequest(const DetectVehicleIllegalParkingRequest &) = default ;
    DetectVehicleIllegalParkingRequest(DetectVehicleIllegalParkingRequest &&) = default ;
    DetectVehicleIllegalParkingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVehicleIllegalParkingRequest() = default ;
    DetectVehicleIllegalParkingRequest& operator=(const DetectVehicleIllegalParkingRequest &) = default ;
    DetectVehicleIllegalParkingRequest& operator=(DetectVehicleIllegalParkingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageURL_ != nullptr
        && this->roadRegions_ != nullptr; };
    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline DetectVehicleIllegalParkingRequest& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // roadRegions Field Functions 
    bool hasRoadRegions() const { return this->roadRegions_ != nullptr;};
    void deleteRoadRegions() { this->roadRegions_ = nullptr;};
    inline const vector<DetectVehicleIllegalParkingRequestRoadRegions> & roadRegions() const { DARABONBA_PTR_GET_CONST(roadRegions_, vector<DetectVehicleIllegalParkingRequestRoadRegions>) };
    inline vector<DetectVehicleIllegalParkingRequestRoadRegions> roadRegions() { DARABONBA_PTR_GET(roadRegions_, vector<DetectVehicleIllegalParkingRequestRoadRegions>) };
    inline DetectVehicleIllegalParkingRequest& setRoadRegions(const vector<DetectVehicleIllegalParkingRequestRoadRegions> & roadRegions) { DARABONBA_PTR_SET_VALUE(roadRegions_, roadRegions) };
    inline DetectVehicleIllegalParkingRequest& setRoadRegions(vector<DetectVehicleIllegalParkingRequestRoadRegions> && roadRegions) { DARABONBA_PTR_SET_RVALUE(roadRegions_, roadRegions) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> imageURL_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<DetectVehicleIllegalParkingRequestRoadRegions>> roadRegions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
