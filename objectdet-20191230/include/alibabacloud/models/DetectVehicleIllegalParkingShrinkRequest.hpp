// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVEHICLEILLEGALPARKINGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETECTVEHICLEILLEGALPARKINGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectVehicleIllegalParkingShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVehicleIllegalParkingShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(RoadRegions, roadRegionsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVehicleIllegalParkingShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(RoadRegions, roadRegionsShrink_);
    };
    DetectVehicleIllegalParkingShrinkRequest() = default ;
    DetectVehicleIllegalParkingShrinkRequest(const DetectVehicleIllegalParkingShrinkRequest &) = default ;
    DetectVehicleIllegalParkingShrinkRequest(DetectVehicleIllegalParkingShrinkRequest &&) = default ;
    DetectVehicleIllegalParkingShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVehicleIllegalParkingShrinkRequest() = default ;
    DetectVehicleIllegalParkingShrinkRequest& operator=(const DetectVehicleIllegalParkingShrinkRequest &) = default ;
    DetectVehicleIllegalParkingShrinkRequest& operator=(DetectVehicleIllegalParkingShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageURL_ != nullptr
        && this->roadRegionsShrink_ != nullptr; };
    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline DetectVehicleIllegalParkingShrinkRequest& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // roadRegionsShrink Field Functions 
    bool hasRoadRegionsShrink() const { return this->roadRegionsShrink_ != nullptr;};
    void deleteRoadRegionsShrink() { this->roadRegionsShrink_ = nullptr;};
    inline string roadRegionsShrink() const { DARABONBA_PTR_GET_DEFAULT(roadRegionsShrink_, "") };
    inline DetectVehicleIllegalParkingShrinkRequest& setRoadRegionsShrink(string roadRegionsShrink) { DARABONBA_PTR_SET_VALUE(roadRegionsShrink_, roadRegionsShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> imageURL_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> roadRegionsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
