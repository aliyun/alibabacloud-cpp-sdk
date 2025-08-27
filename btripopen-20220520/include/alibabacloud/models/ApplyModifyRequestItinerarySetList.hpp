// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYMODIFYREQUESTITINERARYSETLIST_HPP_
#define ALIBABACLOUD_MODELS_APPLYMODIFYREQUESTITINERARYSETLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ApplyModifyRequestItinerarySetListItineraryTravelStandard.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyModifyRequestItinerarySetList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyModifyRequestItinerarySetList& obj) { 
      DARABONBA_PTR_TO_JSON(arr_date, arrDate_);
      DARABONBA_PTR_TO_JSON(attribute, attribute_);
      DARABONBA_PTR_TO_JSON(city_code_set, cityCodeSet_);
      DARABONBA_PTR_TO_JSON(city_set, citySet_);
      DARABONBA_PTR_TO_JSON(cost_center_id, costCenterId_);
      DARABONBA_PTR_TO_JSON(dep_date, depDate_);
      DARABONBA_PTR_TO_JSON(invoice_id, invoiceId_);
      DARABONBA_PTR_TO_JSON(itinerary_id, itineraryId_);
      DARABONBA_PTR_TO_JSON(itinerary_travel_standard, itineraryTravelStandard_);
      DARABONBA_PTR_TO_JSON(project_code, projectCode_);
      DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
      DARABONBA_PTR_TO_JSON(province_travel_city_adcodes, provinceTravelCityAdcodes_);
      DARABONBA_PTR_TO_JSON(third_part_invoice_id, thirdPartInvoiceId_);
      DARABONBA_PTR_TO_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
      DARABONBA_PTR_TO_JSON(traffic_type, trafficType_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyModifyRequestItinerarySetList& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_date, arrDate_);
      DARABONBA_PTR_FROM_JSON(attribute, attribute_);
      DARABONBA_PTR_FROM_JSON(city_code_set, cityCodeSet_);
      DARABONBA_PTR_FROM_JSON(city_set, citySet_);
      DARABONBA_PTR_FROM_JSON(cost_center_id, costCenterId_);
      DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
      DARABONBA_PTR_FROM_JSON(invoice_id, invoiceId_);
      DARABONBA_PTR_FROM_JSON(itinerary_id, itineraryId_);
      DARABONBA_PTR_FROM_JSON(itinerary_travel_standard, itineraryTravelStandard_);
      DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
      DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
      DARABONBA_PTR_FROM_JSON(province_travel_city_adcodes, provinceTravelCityAdcodes_);
      DARABONBA_PTR_FROM_JSON(third_part_invoice_id, thirdPartInvoiceId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
      DARABONBA_PTR_FROM_JSON(traffic_type, trafficType_);
    };
    ApplyModifyRequestItinerarySetList() = default ;
    ApplyModifyRequestItinerarySetList(const ApplyModifyRequestItinerarySetList &) = default ;
    ApplyModifyRequestItinerarySetList(ApplyModifyRequestItinerarySetList &&) = default ;
    ApplyModifyRequestItinerarySetList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyModifyRequestItinerarySetList() = default ;
    ApplyModifyRequestItinerarySetList& operator=(const ApplyModifyRequestItinerarySetList &) = default ;
    ApplyModifyRequestItinerarySetList& operator=(ApplyModifyRequestItinerarySetList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrDate_ != nullptr
        && this->attribute_ != nullptr && this->cityCodeSet_ != nullptr && this->citySet_ != nullptr && this->costCenterId_ != nullptr && this->depDate_ != nullptr
        && this->invoiceId_ != nullptr && this->itineraryId_ != nullptr && this->itineraryTravelStandard_ != nullptr && this->projectCode_ != nullptr && this->projectTitle_ != nullptr
        && this->provinceTravelCityAdcodes_ != nullptr && this->thirdPartInvoiceId_ != nullptr && this->thirdpartCostCenterId_ != nullptr && this->trafficType_ != nullptr; };
    // arrDate Field Functions 
    bool hasArrDate() const { return this->arrDate_ != nullptr;};
    void deleteArrDate() { this->arrDate_ = nullptr;};
    inline string arrDate() const { DARABONBA_PTR_GET_DEFAULT(arrDate_, "") };
    inline ApplyModifyRequestItinerarySetList& setArrDate(string arrDate) { DARABONBA_PTR_SET_VALUE(arrDate_, arrDate) };


    // attribute Field Functions 
    bool hasAttribute() const { return this->attribute_ != nullptr;};
    void deleteAttribute() { this->attribute_ = nullptr;};
    inline string attribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
    inline ApplyModifyRequestItinerarySetList& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


    // cityCodeSet Field Functions 
    bool hasCityCodeSet() const { return this->cityCodeSet_ != nullptr;};
    void deleteCityCodeSet() { this->cityCodeSet_ = nullptr;};
    inline string cityCodeSet() const { DARABONBA_PTR_GET_DEFAULT(cityCodeSet_, "") };
    inline ApplyModifyRequestItinerarySetList& setCityCodeSet(string cityCodeSet) { DARABONBA_PTR_SET_VALUE(cityCodeSet_, cityCodeSet) };


    // citySet Field Functions 
    bool hasCitySet() const { return this->citySet_ != nullptr;};
    void deleteCitySet() { this->citySet_ = nullptr;};
    inline string citySet() const { DARABONBA_PTR_GET_DEFAULT(citySet_, "") };
    inline ApplyModifyRequestItinerarySetList& setCitySet(string citySet) { DARABONBA_PTR_SET_VALUE(citySet_, citySet) };


    // costCenterId Field Functions 
    bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
    void deleteCostCenterId() { this->costCenterId_ = nullptr;};
    inline int64_t costCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
    inline ApplyModifyRequestItinerarySetList& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


    // depDate Field Functions 
    bool hasDepDate() const { return this->depDate_ != nullptr;};
    void deleteDepDate() { this->depDate_ = nullptr;};
    inline string depDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
    inline ApplyModifyRequestItinerarySetList& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


    // invoiceId Field Functions 
    bool hasInvoiceId() const { return this->invoiceId_ != nullptr;};
    void deleteInvoiceId() { this->invoiceId_ = nullptr;};
    inline int64_t invoiceId() const { DARABONBA_PTR_GET_DEFAULT(invoiceId_, 0L) };
    inline ApplyModifyRequestItinerarySetList& setInvoiceId(int64_t invoiceId) { DARABONBA_PTR_SET_VALUE(invoiceId_, invoiceId) };


    // itineraryId Field Functions 
    bool hasItineraryId() const { return this->itineraryId_ != nullptr;};
    void deleteItineraryId() { this->itineraryId_ = nullptr;};
    inline string itineraryId() const { DARABONBA_PTR_GET_DEFAULT(itineraryId_, "") };
    inline ApplyModifyRequestItinerarySetList& setItineraryId(string itineraryId) { DARABONBA_PTR_SET_VALUE(itineraryId_, itineraryId) };


    // itineraryTravelStandard Field Functions 
    bool hasItineraryTravelStandard() const { return this->itineraryTravelStandard_ != nullptr;};
    void deleteItineraryTravelStandard() { this->itineraryTravelStandard_ = nullptr;};
    inline const Models::ApplyModifyRequestItinerarySetListItineraryTravelStandard & itineraryTravelStandard() const { DARABONBA_PTR_GET_CONST(itineraryTravelStandard_, Models::ApplyModifyRequestItinerarySetListItineraryTravelStandard) };
    inline Models::ApplyModifyRequestItinerarySetListItineraryTravelStandard itineraryTravelStandard() { DARABONBA_PTR_GET(itineraryTravelStandard_, Models::ApplyModifyRequestItinerarySetListItineraryTravelStandard) };
    inline ApplyModifyRequestItinerarySetList& setItineraryTravelStandard(const Models::ApplyModifyRequestItinerarySetListItineraryTravelStandard & itineraryTravelStandard) { DARABONBA_PTR_SET_VALUE(itineraryTravelStandard_, itineraryTravelStandard) };
    inline ApplyModifyRequestItinerarySetList& setItineraryTravelStandard(Models::ApplyModifyRequestItinerarySetListItineraryTravelStandard && itineraryTravelStandard) { DARABONBA_PTR_SET_RVALUE(itineraryTravelStandard_, itineraryTravelStandard) };


    // projectCode Field Functions 
    bool hasProjectCode() const { return this->projectCode_ != nullptr;};
    void deleteProjectCode() { this->projectCode_ = nullptr;};
    inline string projectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
    inline ApplyModifyRequestItinerarySetList& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


    // projectTitle Field Functions 
    bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
    void deleteProjectTitle() { this->projectTitle_ = nullptr;};
    inline string projectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
    inline ApplyModifyRequestItinerarySetList& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


    // provinceTravelCityAdcodes Field Functions 
    bool hasProvinceTravelCityAdcodes() const { return this->provinceTravelCityAdcodes_ != nullptr;};
    void deleteProvinceTravelCityAdcodes() { this->provinceTravelCityAdcodes_ = nullptr;};
    inline const vector<string> & provinceTravelCityAdcodes() const { DARABONBA_PTR_GET_CONST(provinceTravelCityAdcodes_, vector<string>) };
    inline vector<string> provinceTravelCityAdcodes() { DARABONBA_PTR_GET(provinceTravelCityAdcodes_, vector<string>) };
    inline ApplyModifyRequestItinerarySetList& setProvinceTravelCityAdcodes(const vector<string> & provinceTravelCityAdcodes) { DARABONBA_PTR_SET_VALUE(provinceTravelCityAdcodes_, provinceTravelCityAdcodes) };
    inline ApplyModifyRequestItinerarySetList& setProvinceTravelCityAdcodes(vector<string> && provinceTravelCityAdcodes) { DARABONBA_PTR_SET_RVALUE(provinceTravelCityAdcodes_, provinceTravelCityAdcodes) };


    // thirdPartInvoiceId Field Functions 
    bool hasThirdPartInvoiceId() const { return this->thirdPartInvoiceId_ != nullptr;};
    void deleteThirdPartInvoiceId() { this->thirdPartInvoiceId_ = nullptr;};
    inline string thirdPartInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartInvoiceId_, "") };
    inline ApplyModifyRequestItinerarySetList& setThirdPartInvoiceId(string thirdPartInvoiceId) { DARABONBA_PTR_SET_VALUE(thirdPartInvoiceId_, thirdPartInvoiceId) };


    // thirdpartCostCenterId Field Functions 
    bool hasThirdpartCostCenterId() const { return this->thirdpartCostCenterId_ != nullptr;};
    void deleteThirdpartCostCenterId() { this->thirdpartCostCenterId_ = nullptr;};
    inline string thirdpartCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartCostCenterId_, "") };
    inline ApplyModifyRequestItinerarySetList& setThirdpartCostCenterId(string thirdpartCostCenterId) { DARABONBA_PTR_SET_VALUE(thirdpartCostCenterId_, thirdpartCostCenterId) };


    // trafficType Field Functions 
    bool hasTrafficType() const { return this->trafficType_ != nullptr;};
    void deleteTrafficType() { this->trafficType_ = nullptr;};
    inline int32_t trafficType() const { DARABONBA_PTR_GET_DEFAULT(trafficType_, 0) };
    inline ApplyModifyRequestItinerarySetList& setTrafficType(int32_t trafficType) { DARABONBA_PTR_SET_VALUE(trafficType_, trafficType) };


  protected:
    std::shared_ptr<string> arrDate_ = nullptr;
    std::shared_ptr<string> attribute_ = nullptr;
    std::shared_ptr<string> cityCodeSet_ = nullptr;
    std::shared_ptr<string> citySet_ = nullptr;
    std::shared_ptr<int64_t> costCenterId_ = nullptr;
    std::shared_ptr<string> depDate_ = nullptr;
    std::shared_ptr<int64_t> invoiceId_ = nullptr;
    std::shared_ptr<string> itineraryId_ = nullptr;
    std::shared_ptr<Models::ApplyModifyRequestItinerarySetListItineraryTravelStandard> itineraryTravelStandard_ = nullptr;
    std::shared_ptr<string> projectCode_ = nullptr;
    std::shared_ptr<string> projectTitle_ = nullptr;
    std::shared_ptr<vector<string>> provinceTravelCityAdcodes_ = nullptr;
    std::shared_ptr<string> thirdPartInvoiceId_ = nullptr;
    std::shared_ptr<string> thirdpartCostCenterId_ = nullptr;
    std::shared_ptr<int32_t> trafficType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
