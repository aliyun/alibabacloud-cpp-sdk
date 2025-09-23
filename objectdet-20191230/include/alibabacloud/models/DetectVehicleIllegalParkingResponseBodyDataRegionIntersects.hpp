// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVEHICLEILLEGALPARKINGRESPONSEBODYDATAREGIONINTERSECTS_HPP_
#define ALIBABACLOUD_MODELS_DETECTVEHICLEILLEGALPARKINGRESPONSEBODYDATAREGIONINTERSECTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectVehicleIllegalParkingResponseBodyDataRegionIntersects : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVehicleIllegalParkingResponseBodyDataRegionIntersects& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, ids_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVehicleIllegalParkingResponseBodyDataRegionIntersects& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
    };
    DetectVehicleIllegalParkingResponseBodyDataRegionIntersects() = default ;
    DetectVehicleIllegalParkingResponseBodyDataRegionIntersects(const DetectVehicleIllegalParkingResponseBodyDataRegionIntersects &) = default ;
    DetectVehicleIllegalParkingResponseBodyDataRegionIntersects(DetectVehicleIllegalParkingResponseBodyDataRegionIntersects &&) = default ;
    DetectVehicleIllegalParkingResponseBodyDataRegionIntersects(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVehicleIllegalParkingResponseBodyDataRegionIntersects() = default ;
    DetectVehicleIllegalParkingResponseBodyDataRegionIntersects& operator=(const DetectVehicleIllegalParkingResponseBodyDataRegionIntersects &) = default ;
    DetectVehicleIllegalParkingResponseBodyDataRegionIntersects& operator=(DetectVehicleIllegalParkingResponseBodyDataRegionIntersects &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ids_ != nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<int64_t> & ids() const { DARABONBA_PTR_GET_CONST(ids_, vector<int64_t>) };
    inline vector<int64_t> ids() { DARABONBA_PTR_GET(ids_, vector<int64_t>) };
    inline DetectVehicleIllegalParkingResponseBodyDataRegionIntersects& setIds(const vector<int64_t> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline DetectVehicleIllegalParkingResponseBodyDataRegionIntersects& setIds(vector<int64_t> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


  protected:
    std::shared_ptr<vector<int64_t>> ids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
