// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVEHICLEILLEGALPARKINGADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETECTVEHICLEILLEGALPARKINGADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectVehicleIllegalParkingAdvanceRequestRoadRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectVehicleIllegalParkingAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVehicleIllegalParkingAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_TO_JSON(RoadRegions, roadRegions_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVehicleIllegalParkingAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_FROM_JSON(RoadRegions, roadRegions_);
    };
    DetectVehicleIllegalParkingAdvanceRequest() = default ;
    DetectVehicleIllegalParkingAdvanceRequest(const DetectVehicleIllegalParkingAdvanceRequest &) = default ;
    DetectVehicleIllegalParkingAdvanceRequest(DetectVehicleIllegalParkingAdvanceRequest &&) = default ;
    DetectVehicleIllegalParkingAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVehicleIllegalParkingAdvanceRequest() = default ;
    DetectVehicleIllegalParkingAdvanceRequest& operator=(const DetectVehicleIllegalParkingAdvanceRequest &) = default ;
    DetectVehicleIllegalParkingAdvanceRequest& operator=(DetectVehicleIllegalParkingAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageURLObject_ != nullptr
        && this->roadRegions_ != nullptr; };
    // imageURLObject Field Functions 
    bool hasImageURLObject() const { return this->imageURLObject_ != nullptr;};
    void deleteImageURLObject() { this->imageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLObject() const { DARABONBA_GET(imageURLObject_) };
    inline DetectVehicleIllegalParkingAdvanceRequest& setImageURLObject(shared_ptr<Darabonba::IStream> imageURLObject) { DARABONBA_SET_VALUE(imageURLObject_, imageURLObject) };


    // roadRegions Field Functions 
    bool hasRoadRegions() const { return this->roadRegions_ != nullptr;};
    void deleteRoadRegions() { this->roadRegions_ = nullptr;};
    inline const vector<DetectVehicleIllegalParkingAdvanceRequestRoadRegions> & roadRegions() const { DARABONBA_PTR_GET_CONST(roadRegions_, vector<DetectVehicleIllegalParkingAdvanceRequestRoadRegions>) };
    inline vector<DetectVehicleIllegalParkingAdvanceRequestRoadRegions> roadRegions() { DARABONBA_PTR_GET(roadRegions_, vector<DetectVehicleIllegalParkingAdvanceRequestRoadRegions>) };
    inline DetectVehicleIllegalParkingAdvanceRequest& setRoadRegions(const vector<DetectVehicleIllegalParkingAdvanceRequestRoadRegions> & roadRegions) { DARABONBA_PTR_SET_VALUE(roadRegions_, roadRegions) };
    inline DetectVehicleIllegalParkingAdvanceRequest& setRoadRegions(vector<DetectVehicleIllegalParkingAdvanceRequestRoadRegions> && roadRegions) { DARABONBA_PTR_SET_RVALUE(roadRegions_, roadRegions) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageURLObject_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<DetectVehicleIllegalParkingAdvanceRequestRoadRegions>> roadRegions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
