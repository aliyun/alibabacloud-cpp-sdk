// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ESTIMATEDPRICEQUERYRESPONSEBODYMODULETRAFFICFEEBTRIPROUTESCHEAPEST_HPP_
#define ALIBABACLOUD_MODELS_ESTIMATEDPRICEQUERYRESPONSEBODYMODULETRAFFICFEEBTRIPROUTESCHEAPEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest& obj) { 
      DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(fee, fee_);
      DARABONBA_PTR_TO_JSON(seat_grade, seatGrade_);
      DARABONBA_PTR_TO_JSON(vehicle_no, vehicleNo_);
    };
    friend void from_json(const Darabonba::Json& j, EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(fee, fee_);
      DARABONBA_PTR_FROM_JSON(seat_grade, seatGrade_);
      DARABONBA_PTR_FROM_JSON(vehicle_no, vehicleNo_);
    };
    EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest() = default ;
    EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest(const EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest &) = default ;
    EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest(EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest &&) = default ;
    EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest() = default ;
    EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest& operator=(const EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest &) = default ;
    EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest& operator=(EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrTime_ != nullptr
        && this->depTime_ != nullptr && this->fee_ != nullptr && this->seatGrade_ != nullptr && this->vehicleNo_ != nullptr; };
    // arrTime Field Functions 
    bool hasArrTime() const { return this->arrTime_ != nullptr;};
    void deleteArrTime() { this->arrTime_ = nullptr;};
    inline string arrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
    inline EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // fee Field Functions 
    bool hasFee() const { return this->fee_ != nullptr;};
    void deleteFee() { this->fee_ = nullptr;};
    inline int64_t fee() const { DARABONBA_PTR_GET_DEFAULT(fee_, 0L) };
    inline EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest& setFee(int64_t fee) { DARABONBA_PTR_SET_VALUE(fee_, fee) };


    // seatGrade Field Functions 
    bool hasSeatGrade() const { return this->seatGrade_ != nullptr;};
    void deleteSeatGrade() { this->seatGrade_ = nullptr;};
    inline string seatGrade() const { DARABONBA_PTR_GET_DEFAULT(seatGrade_, "") };
    inline EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest& setSeatGrade(string seatGrade) { DARABONBA_PTR_SET_VALUE(seatGrade_, seatGrade) };


    // vehicleNo Field Functions 
    bool hasVehicleNo() const { return this->vehicleNo_ != nullptr;};
    void deleteVehicleNo() { this->vehicleNo_ = nullptr;};
    inline string vehicleNo() const { DARABONBA_PTR_GET_DEFAULT(vehicleNo_, "") };
    inline EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest& setVehicleNo(string vehicleNo) { DARABONBA_PTR_SET_VALUE(vehicleNo_, vehicleNo) };


  protected:
    std::shared_ptr<string> arrTime_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    std::shared_ptr<int64_t> fee_ = nullptr;
    std::shared_ptr<string> seatGrade_ = nullptr;
    std::shared_ptr<string> vehicleNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
