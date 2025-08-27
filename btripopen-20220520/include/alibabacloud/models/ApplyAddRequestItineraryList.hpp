// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYADDREQUESTITINERARYLIST_HPP_
#define ALIBABACLOUD_MODELS_APPLYADDREQUESTITINERARYLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ApplyAddRequestItineraryListItineraryTravelStandard.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyAddRequestItineraryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyAddRequestItineraryList& obj) { 
      DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(arr_date, arrDate_);
      DARABONBA_PTR_TO_JSON(attribute, attribute_);
      DARABONBA_PTR_TO_JSON(cost_center_id, costCenterId_);
      DARABONBA_PTR_TO_JSON(dep_city, depCity_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(dep_date, depDate_);
      DARABONBA_PTR_TO_JSON(invoice_id, invoiceId_);
      DARABONBA_PTR_TO_JSON(itinerary_id, itineraryId_);
      DARABONBA_PTR_TO_JSON(itinerary_travel_standard, itineraryTravelStandard_);
      DARABONBA_PTR_TO_JSON(need_hotel, needHotel_);
      DARABONBA_PTR_TO_JSON(need_traffic, needTraffic_);
      DARABONBA_PTR_TO_JSON(project_code, projectCode_);
      DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
      DARABONBA_PTR_TO_JSON(province_travel_city_adcodes, provinceTravelCityAdcodes_);
      DARABONBA_PTR_TO_JSON(third_part_invoice_id, thirdPartInvoiceId_);
      DARABONBA_PTR_TO_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
      DARABONBA_PTR_TO_JSON(traffic_type, trafficType_);
      DARABONBA_PTR_TO_JSON(trip_way, tripWay_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyAddRequestItineraryList& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(arr_date, arrDate_);
      DARABONBA_PTR_FROM_JSON(attribute, attribute_);
      DARABONBA_PTR_FROM_JSON(cost_center_id, costCenterId_);
      DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
      DARABONBA_PTR_FROM_JSON(invoice_id, invoiceId_);
      DARABONBA_PTR_FROM_JSON(itinerary_id, itineraryId_);
      DARABONBA_PTR_FROM_JSON(itinerary_travel_standard, itineraryTravelStandard_);
      DARABONBA_PTR_FROM_JSON(need_hotel, needHotel_);
      DARABONBA_PTR_FROM_JSON(need_traffic, needTraffic_);
      DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
      DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
      DARABONBA_PTR_FROM_JSON(province_travel_city_adcodes, provinceTravelCityAdcodes_);
      DARABONBA_PTR_FROM_JSON(third_part_invoice_id, thirdPartInvoiceId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
      DARABONBA_PTR_FROM_JSON(traffic_type, trafficType_);
      DARABONBA_PTR_FROM_JSON(trip_way, tripWay_);
    };
    ApplyAddRequestItineraryList() = default ;
    ApplyAddRequestItineraryList(const ApplyAddRequestItineraryList &) = default ;
    ApplyAddRequestItineraryList(ApplyAddRequestItineraryList &&) = default ;
    ApplyAddRequestItineraryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyAddRequestItineraryList() = default ;
    ApplyAddRequestItineraryList& operator=(const ApplyAddRequestItineraryList &) = default ;
    ApplyAddRequestItineraryList& operator=(ApplyAddRequestItineraryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrCity_ != nullptr
        && this->arrCityCode_ != nullptr && this->arrDate_ != nullptr && this->attribute_ != nullptr && this->costCenterId_ != nullptr && this->depCity_ != nullptr
        && this->depCityCode_ != nullptr && this->depDate_ != nullptr && this->invoiceId_ != nullptr && this->itineraryId_ != nullptr && this->itineraryTravelStandard_ != nullptr
        && this->needHotel_ != nullptr && this->needTraffic_ != nullptr && this->projectCode_ != nullptr && this->projectTitle_ != nullptr && this->provinceTravelCityAdcodes_ != nullptr
        && this->thirdPartInvoiceId_ != nullptr && this->thirdpartCostCenterId_ != nullptr && this->trafficType_ != nullptr && this->tripWay_ != nullptr; };
    // arrCity Field Functions 
    bool hasArrCity() const { return this->arrCity_ != nullptr;};
    void deleteArrCity() { this->arrCity_ = nullptr;};
    inline string arrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
    inline ApplyAddRequestItineraryList& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline ApplyAddRequestItineraryList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // arrDate Field Functions 
    bool hasArrDate() const { return this->arrDate_ != nullptr;};
    void deleteArrDate() { this->arrDate_ = nullptr;};
    inline string arrDate() const { DARABONBA_PTR_GET_DEFAULT(arrDate_, "") };
    inline ApplyAddRequestItineraryList& setArrDate(string arrDate) { DARABONBA_PTR_SET_VALUE(arrDate_, arrDate) };


    // attribute Field Functions 
    bool hasAttribute() const { return this->attribute_ != nullptr;};
    void deleteAttribute() { this->attribute_ = nullptr;};
    inline string attribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
    inline ApplyAddRequestItineraryList& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


    // costCenterId Field Functions 
    bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
    void deleteCostCenterId() { this->costCenterId_ = nullptr;};
    inline int64_t costCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
    inline ApplyAddRequestItineraryList& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


    // depCity Field Functions 
    bool hasDepCity() const { return this->depCity_ != nullptr;};
    void deleteDepCity() { this->depCity_ = nullptr;};
    inline string depCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
    inline ApplyAddRequestItineraryList& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline ApplyAddRequestItineraryList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // depDate Field Functions 
    bool hasDepDate() const { return this->depDate_ != nullptr;};
    void deleteDepDate() { this->depDate_ = nullptr;};
    inline string depDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
    inline ApplyAddRequestItineraryList& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


    // invoiceId Field Functions 
    bool hasInvoiceId() const { return this->invoiceId_ != nullptr;};
    void deleteInvoiceId() { this->invoiceId_ = nullptr;};
    inline int64_t invoiceId() const { DARABONBA_PTR_GET_DEFAULT(invoiceId_, 0L) };
    inline ApplyAddRequestItineraryList& setInvoiceId(int64_t invoiceId) { DARABONBA_PTR_SET_VALUE(invoiceId_, invoiceId) };


    // itineraryId Field Functions 
    bool hasItineraryId() const { return this->itineraryId_ != nullptr;};
    void deleteItineraryId() { this->itineraryId_ = nullptr;};
    inline string itineraryId() const { DARABONBA_PTR_GET_DEFAULT(itineraryId_, "") };
    inline ApplyAddRequestItineraryList& setItineraryId(string itineraryId) { DARABONBA_PTR_SET_VALUE(itineraryId_, itineraryId) };


    // itineraryTravelStandard Field Functions 
    bool hasItineraryTravelStandard() const { return this->itineraryTravelStandard_ != nullptr;};
    void deleteItineraryTravelStandard() { this->itineraryTravelStandard_ = nullptr;};
    inline const Models::ApplyAddRequestItineraryListItineraryTravelStandard & itineraryTravelStandard() const { DARABONBA_PTR_GET_CONST(itineraryTravelStandard_, Models::ApplyAddRequestItineraryListItineraryTravelStandard) };
    inline Models::ApplyAddRequestItineraryListItineraryTravelStandard itineraryTravelStandard() { DARABONBA_PTR_GET(itineraryTravelStandard_, Models::ApplyAddRequestItineraryListItineraryTravelStandard) };
    inline ApplyAddRequestItineraryList& setItineraryTravelStandard(const Models::ApplyAddRequestItineraryListItineraryTravelStandard & itineraryTravelStandard) { DARABONBA_PTR_SET_VALUE(itineraryTravelStandard_, itineraryTravelStandard) };
    inline ApplyAddRequestItineraryList& setItineraryTravelStandard(Models::ApplyAddRequestItineraryListItineraryTravelStandard && itineraryTravelStandard) { DARABONBA_PTR_SET_RVALUE(itineraryTravelStandard_, itineraryTravelStandard) };


    // needHotel Field Functions 
    bool hasNeedHotel() const { return this->needHotel_ != nullptr;};
    void deleteNeedHotel() { this->needHotel_ = nullptr;};
    inline bool needHotel() const { DARABONBA_PTR_GET_DEFAULT(needHotel_, false) };
    inline ApplyAddRequestItineraryList& setNeedHotel(bool needHotel) { DARABONBA_PTR_SET_VALUE(needHotel_, needHotel) };


    // needTraffic Field Functions 
    bool hasNeedTraffic() const { return this->needTraffic_ != nullptr;};
    void deleteNeedTraffic() { this->needTraffic_ = nullptr;};
    inline bool needTraffic() const { DARABONBA_PTR_GET_DEFAULT(needTraffic_, false) };
    inline ApplyAddRequestItineraryList& setNeedTraffic(bool needTraffic) { DARABONBA_PTR_SET_VALUE(needTraffic_, needTraffic) };


    // projectCode Field Functions 
    bool hasProjectCode() const { return this->projectCode_ != nullptr;};
    void deleteProjectCode() { this->projectCode_ = nullptr;};
    inline string projectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
    inline ApplyAddRequestItineraryList& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


    // projectTitle Field Functions 
    bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
    void deleteProjectTitle() { this->projectTitle_ = nullptr;};
    inline string projectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
    inline ApplyAddRequestItineraryList& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


    // provinceTravelCityAdcodes Field Functions 
    bool hasProvinceTravelCityAdcodes() const { return this->provinceTravelCityAdcodes_ != nullptr;};
    void deleteProvinceTravelCityAdcodes() { this->provinceTravelCityAdcodes_ = nullptr;};
    inline const vector<string> & provinceTravelCityAdcodes() const { DARABONBA_PTR_GET_CONST(provinceTravelCityAdcodes_, vector<string>) };
    inline vector<string> provinceTravelCityAdcodes() { DARABONBA_PTR_GET(provinceTravelCityAdcodes_, vector<string>) };
    inline ApplyAddRequestItineraryList& setProvinceTravelCityAdcodes(const vector<string> & provinceTravelCityAdcodes) { DARABONBA_PTR_SET_VALUE(provinceTravelCityAdcodes_, provinceTravelCityAdcodes) };
    inline ApplyAddRequestItineraryList& setProvinceTravelCityAdcodes(vector<string> && provinceTravelCityAdcodes) { DARABONBA_PTR_SET_RVALUE(provinceTravelCityAdcodes_, provinceTravelCityAdcodes) };


    // thirdPartInvoiceId Field Functions 
    bool hasThirdPartInvoiceId() const { return this->thirdPartInvoiceId_ != nullptr;};
    void deleteThirdPartInvoiceId() { this->thirdPartInvoiceId_ = nullptr;};
    inline string thirdPartInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartInvoiceId_, "") };
    inline ApplyAddRequestItineraryList& setThirdPartInvoiceId(string thirdPartInvoiceId) { DARABONBA_PTR_SET_VALUE(thirdPartInvoiceId_, thirdPartInvoiceId) };


    // thirdpartCostCenterId Field Functions 
    bool hasThirdpartCostCenterId() const { return this->thirdpartCostCenterId_ != nullptr;};
    void deleteThirdpartCostCenterId() { this->thirdpartCostCenterId_ = nullptr;};
    inline string thirdpartCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartCostCenterId_, "") };
    inline ApplyAddRequestItineraryList& setThirdpartCostCenterId(string thirdpartCostCenterId) { DARABONBA_PTR_SET_VALUE(thirdpartCostCenterId_, thirdpartCostCenterId) };


    // trafficType Field Functions 
    bool hasTrafficType() const { return this->trafficType_ != nullptr;};
    void deleteTrafficType() { this->trafficType_ = nullptr;};
    inline int32_t trafficType() const { DARABONBA_PTR_GET_DEFAULT(trafficType_, 0) };
    inline ApplyAddRequestItineraryList& setTrafficType(int32_t trafficType) { DARABONBA_PTR_SET_VALUE(trafficType_, trafficType) };


    // tripWay Field Functions 
    bool hasTripWay() const { return this->tripWay_ != nullptr;};
    void deleteTripWay() { this->tripWay_ = nullptr;};
    inline int32_t tripWay() const { DARABONBA_PTR_GET_DEFAULT(tripWay_, 0) };
    inline ApplyAddRequestItineraryList& setTripWay(int32_t tripWay) { DARABONBA_PTR_SET_VALUE(tripWay_, tripWay) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> arrCity_ = nullptr;
    std::shared_ptr<string> arrCityCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> arrDate_ = nullptr;
    std::shared_ptr<string> attribute_ = nullptr;
    std::shared_ptr<int64_t> costCenterId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> depCity_ = nullptr;
    std::shared_ptr<string> depCityCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> depDate_ = nullptr;
    std::shared_ptr<int64_t> invoiceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> itineraryId_ = nullptr;
    std::shared_ptr<Models::ApplyAddRequestItineraryListItineraryTravelStandard> itineraryTravelStandard_ = nullptr;
    std::shared_ptr<bool> needHotel_ = nullptr;
    std::shared_ptr<bool> needTraffic_ = nullptr;
    std::shared_ptr<string> projectCode_ = nullptr;
    std::shared_ptr<string> projectTitle_ = nullptr;
    std::shared_ptr<vector<string>> provinceTravelCityAdcodes_ = nullptr;
    std::shared_ptr<string> thirdPartInvoiceId_ = nullptr;
    std::shared_ptr<string> thirdpartCostCenterId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> trafficType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> tripWay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
