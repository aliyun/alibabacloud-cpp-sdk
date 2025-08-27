// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYQUERYRESPONSEBODYMODULEITINERARYLIST_HPP_
#define ALIBABACLOUD_MODELS_APPLYQUERYRESPONSEBODYMODULEITINERARYLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ApplyQueryResponseBodyModuleItineraryListItineraryTravelStandard.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyQueryResponseBodyModuleItineraryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyQueryResponseBodyModuleItineraryList& obj) { 
      DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(arr_date, arrDate_);
      DARABONBA_PTR_TO_JSON(attribute, attribute_);
      DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
      DARABONBA_PTR_TO_JSON(dep_city, depCity_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(dep_date, depDate_);
      DARABONBA_PTR_TO_JSON(invoice_name, invoiceName_);
      DARABONBA_PTR_TO_JSON(itinerary_id, itineraryId_);
      DARABONBA_PTR_TO_JSON(itinerary_travel_standard, itineraryTravelStandard_);
      DARABONBA_PTR_TO_JSON(project_code, projectCode_);
      DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
      DARABONBA_PTR_TO_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
      DARABONBA_PTR_TO_JSON(thirdpart_invoice_id, thirdpartInvoiceId_);
      DARABONBA_PTR_TO_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
      DARABONBA_PTR_TO_JSON(traffic_type, trafficType_);
      DARABONBA_PTR_TO_JSON(trip_way, tripWay_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyQueryResponseBodyModuleItineraryList& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(arr_date, arrDate_);
      DARABONBA_PTR_FROM_JSON(attribute, attribute_);
      DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
      DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
      DARABONBA_PTR_FROM_JSON(invoice_name, invoiceName_);
      DARABONBA_PTR_FROM_JSON(itinerary_id, itineraryId_);
      DARABONBA_PTR_FROM_JSON(itinerary_travel_standard, itineraryTravelStandard_);
      DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
      DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
      DARABONBA_PTR_FROM_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_invoice_id, thirdpartInvoiceId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
      DARABONBA_PTR_FROM_JSON(traffic_type, trafficType_);
      DARABONBA_PTR_FROM_JSON(trip_way, tripWay_);
    };
    ApplyQueryResponseBodyModuleItineraryList() = default ;
    ApplyQueryResponseBodyModuleItineraryList(const ApplyQueryResponseBodyModuleItineraryList &) = default ;
    ApplyQueryResponseBodyModuleItineraryList(ApplyQueryResponseBodyModuleItineraryList &&) = default ;
    ApplyQueryResponseBodyModuleItineraryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyQueryResponseBodyModuleItineraryList() = default ;
    ApplyQueryResponseBodyModuleItineraryList& operator=(const ApplyQueryResponseBodyModuleItineraryList &) = default ;
    ApplyQueryResponseBodyModuleItineraryList& operator=(ApplyQueryResponseBodyModuleItineraryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrCity_ != nullptr
        && this->arrCityCode_ != nullptr && this->arrDate_ != nullptr && this->attribute_ != nullptr && this->costCenterName_ != nullptr && this->depCity_ != nullptr
        && this->depCityCode_ != nullptr && this->depDate_ != nullptr && this->invoiceName_ != nullptr && this->itineraryId_ != nullptr && this->itineraryTravelStandard_ != nullptr
        && this->projectCode_ != nullptr && this->projectTitle_ != nullptr && this->thirdpartCostCenterId_ != nullptr && this->thirdpartInvoiceId_ != nullptr && this->thirdpartItineraryId_ != nullptr
        && this->trafficType_ != nullptr && this->tripWay_ != nullptr; };
    // arrCity Field Functions 
    bool hasArrCity() const { return this->arrCity_ != nullptr;};
    void deleteArrCity() { this->arrCity_ = nullptr;};
    inline string arrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
    inline ApplyQueryResponseBodyModuleItineraryList& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline ApplyQueryResponseBodyModuleItineraryList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // arrDate Field Functions 
    bool hasArrDate() const { return this->arrDate_ != nullptr;};
    void deleteArrDate() { this->arrDate_ = nullptr;};
    inline string arrDate() const { DARABONBA_PTR_GET_DEFAULT(arrDate_, "") };
    inline ApplyQueryResponseBodyModuleItineraryList& setArrDate(string arrDate) { DARABONBA_PTR_SET_VALUE(arrDate_, arrDate) };


    // attribute Field Functions 
    bool hasAttribute() const { return this->attribute_ != nullptr;};
    void deleteAttribute() { this->attribute_ = nullptr;};
    inline string attribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
    inline ApplyQueryResponseBodyModuleItineraryList& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


    // costCenterName Field Functions 
    bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
    void deleteCostCenterName() { this->costCenterName_ = nullptr;};
    inline string costCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
    inline ApplyQueryResponseBodyModuleItineraryList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


    // depCity Field Functions 
    bool hasDepCity() const { return this->depCity_ != nullptr;};
    void deleteDepCity() { this->depCity_ = nullptr;};
    inline string depCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
    inline ApplyQueryResponseBodyModuleItineraryList& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline ApplyQueryResponseBodyModuleItineraryList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // depDate Field Functions 
    bool hasDepDate() const { return this->depDate_ != nullptr;};
    void deleteDepDate() { this->depDate_ = nullptr;};
    inline string depDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
    inline ApplyQueryResponseBodyModuleItineraryList& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


    // invoiceName Field Functions 
    bool hasInvoiceName() const { return this->invoiceName_ != nullptr;};
    void deleteInvoiceName() { this->invoiceName_ = nullptr;};
    inline string invoiceName() const { DARABONBA_PTR_GET_DEFAULT(invoiceName_, "") };
    inline ApplyQueryResponseBodyModuleItineraryList& setInvoiceName(string invoiceName) { DARABONBA_PTR_SET_VALUE(invoiceName_, invoiceName) };


    // itineraryId Field Functions 
    bool hasItineraryId() const { return this->itineraryId_ != nullptr;};
    void deleteItineraryId() { this->itineraryId_ = nullptr;};
    inline string itineraryId() const { DARABONBA_PTR_GET_DEFAULT(itineraryId_, "") };
    inline ApplyQueryResponseBodyModuleItineraryList& setItineraryId(string itineraryId) { DARABONBA_PTR_SET_VALUE(itineraryId_, itineraryId) };


    // itineraryTravelStandard Field Functions 
    bool hasItineraryTravelStandard() const { return this->itineraryTravelStandard_ != nullptr;};
    void deleteItineraryTravelStandard() { this->itineraryTravelStandard_ = nullptr;};
    inline const Models::ApplyQueryResponseBodyModuleItineraryListItineraryTravelStandard & itineraryTravelStandard() const { DARABONBA_PTR_GET_CONST(itineraryTravelStandard_, Models::ApplyQueryResponseBodyModuleItineraryListItineraryTravelStandard) };
    inline Models::ApplyQueryResponseBodyModuleItineraryListItineraryTravelStandard itineraryTravelStandard() { DARABONBA_PTR_GET(itineraryTravelStandard_, Models::ApplyQueryResponseBodyModuleItineraryListItineraryTravelStandard) };
    inline ApplyQueryResponseBodyModuleItineraryList& setItineraryTravelStandard(const Models::ApplyQueryResponseBodyModuleItineraryListItineraryTravelStandard & itineraryTravelStandard) { DARABONBA_PTR_SET_VALUE(itineraryTravelStandard_, itineraryTravelStandard) };
    inline ApplyQueryResponseBodyModuleItineraryList& setItineraryTravelStandard(Models::ApplyQueryResponseBodyModuleItineraryListItineraryTravelStandard && itineraryTravelStandard) { DARABONBA_PTR_SET_RVALUE(itineraryTravelStandard_, itineraryTravelStandard) };


    // projectCode Field Functions 
    bool hasProjectCode() const { return this->projectCode_ != nullptr;};
    void deleteProjectCode() { this->projectCode_ = nullptr;};
    inline string projectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
    inline ApplyQueryResponseBodyModuleItineraryList& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


    // projectTitle Field Functions 
    bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
    void deleteProjectTitle() { this->projectTitle_ = nullptr;};
    inline string projectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
    inline ApplyQueryResponseBodyModuleItineraryList& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


    // thirdpartCostCenterId Field Functions 
    bool hasThirdpartCostCenterId() const { return this->thirdpartCostCenterId_ != nullptr;};
    void deleteThirdpartCostCenterId() { this->thirdpartCostCenterId_ = nullptr;};
    inline string thirdpartCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartCostCenterId_, "") };
    inline ApplyQueryResponseBodyModuleItineraryList& setThirdpartCostCenterId(string thirdpartCostCenterId) { DARABONBA_PTR_SET_VALUE(thirdpartCostCenterId_, thirdpartCostCenterId) };


    // thirdpartInvoiceId Field Functions 
    bool hasThirdpartInvoiceId() const { return this->thirdpartInvoiceId_ != nullptr;};
    void deleteThirdpartInvoiceId() { this->thirdpartInvoiceId_ = nullptr;};
    inline string thirdpartInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartInvoiceId_, "") };
    inline ApplyQueryResponseBodyModuleItineraryList& setThirdpartInvoiceId(string thirdpartInvoiceId) { DARABONBA_PTR_SET_VALUE(thirdpartInvoiceId_, thirdpartInvoiceId) };


    // thirdpartItineraryId Field Functions 
    bool hasThirdpartItineraryId() const { return this->thirdpartItineraryId_ != nullptr;};
    void deleteThirdpartItineraryId() { this->thirdpartItineraryId_ = nullptr;};
    inline string thirdpartItineraryId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartItineraryId_, "") };
    inline ApplyQueryResponseBodyModuleItineraryList& setThirdpartItineraryId(string thirdpartItineraryId) { DARABONBA_PTR_SET_VALUE(thirdpartItineraryId_, thirdpartItineraryId) };


    // trafficType Field Functions 
    bool hasTrafficType() const { return this->trafficType_ != nullptr;};
    void deleteTrafficType() { this->trafficType_ = nullptr;};
    inline int32_t trafficType() const { DARABONBA_PTR_GET_DEFAULT(trafficType_, 0) };
    inline ApplyQueryResponseBodyModuleItineraryList& setTrafficType(int32_t trafficType) { DARABONBA_PTR_SET_VALUE(trafficType_, trafficType) };


    // tripWay Field Functions 
    bool hasTripWay() const { return this->tripWay_ != nullptr;};
    void deleteTripWay() { this->tripWay_ = nullptr;};
    inline int32_t tripWay() const { DARABONBA_PTR_GET_DEFAULT(tripWay_, 0) };
    inline ApplyQueryResponseBodyModuleItineraryList& setTripWay(int32_t tripWay) { DARABONBA_PTR_SET_VALUE(tripWay_, tripWay) };


  protected:
    std::shared_ptr<string> arrCity_ = nullptr;
    std::shared_ptr<string> arrCityCode_ = nullptr;
    std::shared_ptr<string> arrDate_ = nullptr;
    std::shared_ptr<string> attribute_ = nullptr;
    std::shared_ptr<string> costCenterName_ = nullptr;
    std::shared_ptr<string> depCity_ = nullptr;
    std::shared_ptr<string> depCityCode_ = nullptr;
    std::shared_ptr<string> depDate_ = nullptr;
    std::shared_ptr<string> invoiceName_ = nullptr;
    std::shared_ptr<string> itineraryId_ = nullptr;
    std::shared_ptr<Models::ApplyQueryResponseBodyModuleItineraryListItineraryTravelStandard> itineraryTravelStandard_ = nullptr;
    std::shared_ptr<string> projectCode_ = nullptr;
    std::shared_ptr<string> projectTitle_ = nullptr;
    std::shared_ptr<string> thirdpartCostCenterId_ = nullptr;
    std::shared_ptr<string> thirdpartInvoiceId_ = nullptr;
    std::shared_ptr<string> thirdpartItineraryId_ = nullptr;
    std::shared_ptr<int32_t> trafficType_ = nullptr;
    std::shared_ptr<int32_t> tripWay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
