// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVEHICLEILLEGALPARKINGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DETECTVEHICLEILLEGALPARKINGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectVehicleIllegalParkingResponseBodyDataElements.hpp>
#include <alibabacloud/models/DetectVehicleIllegalParkingResponseBodyDataRegionIntersects.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectVehicleIllegalParkingResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVehicleIllegalParkingResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Elements, elements_);
      DARABONBA_PTR_TO_JSON(RegionIntersects, regionIntersects_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVehicleIllegalParkingResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Elements, elements_);
      DARABONBA_PTR_FROM_JSON(RegionIntersects, regionIntersects_);
    };
    DetectVehicleIllegalParkingResponseBodyData() = default ;
    DetectVehicleIllegalParkingResponseBodyData(const DetectVehicleIllegalParkingResponseBodyData &) = default ;
    DetectVehicleIllegalParkingResponseBodyData(DetectVehicleIllegalParkingResponseBodyData &&) = default ;
    DetectVehicleIllegalParkingResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVehicleIllegalParkingResponseBodyData() = default ;
    DetectVehicleIllegalParkingResponseBodyData& operator=(const DetectVehicleIllegalParkingResponseBodyData &) = default ;
    DetectVehicleIllegalParkingResponseBodyData& operator=(DetectVehicleIllegalParkingResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elements_ != nullptr
        && this->regionIntersects_ != nullptr; };
    // elements Field Functions 
    bool hasElements() const { return this->elements_ != nullptr;};
    void deleteElements() { this->elements_ = nullptr;};
    inline const vector<Models::DetectVehicleIllegalParkingResponseBodyDataElements> & elements() const { DARABONBA_PTR_GET_CONST(elements_, vector<Models::DetectVehicleIllegalParkingResponseBodyDataElements>) };
    inline vector<Models::DetectVehicleIllegalParkingResponseBodyDataElements> elements() { DARABONBA_PTR_GET(elements_, vector<Models::DetectVehicleIllegalParkingResponseBodyDataElements>) };
    inline DetectVehicleIllegalParkingResponseBodyData& setElements(const vector<Models::DetectVehicleIllegalParkingResponseBodyDataElements> & elements) { DARABONBA_PTR_SET_VALUE(elements_, elements) };
    inline DetectVehicleIllegalParkingResponseBodyData& setElements(vector<Models::DetectVehicleIllegalParkingResponseBodyDataElements> && elements) { DARABONBA_PTR_SET_RVALUE(elements_, elements) };


    // regionIntersects Field Functions 
    bool hasRegionIntersects() const { return this->regionIntersects_ != nullptr;};
    void deleteRegionIntersects() { this->regionIntersects_ = nullptr;};
    inline const vector<Models::DetectVehicleIllegalParkingResponseBodyDataRegionIntersects> & regionIntersects() const { DARABONBA_PTR_GET_CONST(regionIntersects_, vector<Models::DetectVehicleIllegalParkingResponseBodyDataRegionIntersects>) };
    inline vector<Models::DetectVehicleIllegalParkingResponseBodyDataRegionIntersects> regionIntersects() { DARABONBA_PTR_GET(regionIntersects_, vector<Models::DetectVehicleIllegalParkingResponseBodyDataRegionIntersects>) };
    inline DetectVehicleIllegalParkingResponseBodyData& setRegionIntersects(const vector<Models::DetectVehicleIllegalParkingResponseBodyDataRegionIntersects> & regionIntersects) { DARABONBA_PTR_SET_VALUE(regionIntersects_, regionIntersects) };
    inline DetectVehicleIllegalParkingResponseBodyData& setRegionIntersects(vector<Models::DetectVehicleIllegalParkingResponseBodyDataRegionIntersects> && regionIntersects) { DARABONBA_PTR_SET_RVALUE(regionIntersects_, regionIntersects) };


  protected:
    std::shared_ptr<vector<Models::DetectVehicleIllegalParkingResponseBodyDataElements>> elements_ = nullptr;
    std::shared_ptr<vector<Models::DetectVehicleIllegalParkingResponseBodyDataRegionIntersects>> regionIntersects_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
