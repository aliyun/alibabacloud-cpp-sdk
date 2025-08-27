// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYQUERYRESPONSEBODYMODULEITINERARYSETLIST_HPP_
#define ALIBABACLOUD_MODELS_APPLYQUERYRESPONSEBODYMODULEITINERARYSETLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ApplyQueryResponseBodyModuleItinerarySetListItineraryTravelStandard.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyQueryResponseBodyModuleItinerarySetList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyQueryResponseBodyModuleItinerarySetList& obj) { 
      DARABONBA_PTR_TO_JSON(arr_date, arrDate_);
      DARABONBA_PTR_TO_JSON(attribute, attribute_);
      DARABONBA_PTR_TO_JSON(city_code_set, cityCodeSet_);
      DARABONBA_PTR_TO_JSON(city_set, citySet_);
      DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
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
    };
    friend void from_json(const Darabonba::Json& j, ApplyQueryResponseBodyModuleItinerarySetList& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_date, arrDate_);
      DARABONBA_PTR_FROM_JSON(attribute, attribute_);
      DARABONBA_PTR_FROM_JSON(city_code_set, cityCodeSet_);
      DARABONBA_PTR_FROM_JSON(city_set, citySet_);
      DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
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
    };
    ApplyQueryResponseBodyModuleItinerarySetList() = default ;
    ApplyQueryResponseBodyModuleItinerarySetList(const ApplyQueryResponseBodyModuleItinerarySetList &) = default ;
    ApplyQueryResponseBodyModuleItinerarySetList(ApplyQueryResponseBodyModuleItinerarySetList &&) = default ;
    ApplyQueryResponseBodyModuleItinerarySetList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyQueryResponseBodyModuleItinerarySetList() = default ;
    ApplyQueryResponseBodyModuleItinerarySetList& operator=(const ApplyQueryResponseBodyModuleItinerarySetList &) = default ;
    ApplyQueryResponseBodyModuleItinerarySetList& operator=(ApplyQueryResponseBodyModuleItinerarySetList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrDate_ != nullptr
        && this->attribute_ != nullptr && this->cityCodeSet_ != nullptr && this->citySet_ != nullptr && this->costCenterName_ != nullptr && this->depDate_ != nullptr
        && this->invoiceName_ != nullptr && this->itineraryId_ != nullptr && this->itineraryTravelStandard_ != nullptr && this->projectCode_ != nullptr && this->projectTitle_ != nullptr
        && this->thirdpartCostCenterId_ != nullptr && this->thirdpartInvoiceId_ != nullptr && this->thirdpartItineraryId_ != nullptr && this->trafficType_ != nullptr; };
    // arrDate Field Functions 
    bool hasArrDate() const { return this->arrDate_ != nullptr;};
    void deleteArrDate() { this->arrDate_ = nullptr;};
    inline string arrDate() const { DARABONBA_PTR_GET_DEFAULT(arrDate_, "") };
    inline ApplyQueryResponseBodyModuleItinerarySetList& setArrDate(string arrDate) { DARABONBA_PTR_SET_VALUE(arrDate_, arrDate) };


    // attribute Field Functions 
    bool hasAttribute() const { return this->attribute_ != nullptr;};
    void deleteAttribute() { this->attribute_ = nullptr;};
    inline string attribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
    inline ApplyQueryResponseBodyModuleItinerarySetList& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


    // cityCodeSet Field Functions 
    bool hasCityCodeSet() const { return this->cityCodeSet_ != nullptr;};
    void deleteCityCodeSet() { this->cityCodeSet_ = nullptr;};
    inline string cityCodeSet() const { DARABONBA_PTR_GET_DEFAULT(cityCodeSet_, "") };
    inline ApplyQueryResponseBodyModuleItinerarySetList& setCityCodeSet(string cityCodeSet) { DARABONBA_PTR_SET_VALUE(cityCodeSet_, cityCodeSet) };


    // citySet Field Functions 
    bool hasCitySet() const { return this->citySet_ != nullptr;};
    void deleteCitySet() { this->citySet_ = nullptr;};
    inline string citySet() const { DARABONBA_PTR_GET_DEFAULT(citySet_, "") };
    inline ApplyQueryResponseBodyModuleItinerarySetList& setCitySet(string citySet) { DARABONBA_PTR_SET_VALUE(citySet_, citySet) };


    // costCenterName Field Functions 
    bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
    void deleteCostCenterName() { this->costCenterName_ = nullptr;};
    inline string costCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
    inline ApplyQueryResponseBodyModuleItinerarySetList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


    // depDate Field Functions 
    bool hasDepDate() const { return this->depDate_ != nullptr;};
    void deleteDepDate() { this->depDate_ = nullptr;};
    inline string depDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
    inline ApplyQueryResponseBodyModuleItinerarySetList& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


    // invoiceName Field Functions 
    bool hasInvoiceName() const { return this->invoiceName_ != nullptr;};
    void deleteInvoiceName() { this->invoiceName_ = nullptr;};
    inline string invoiceName() const { DARABONBA_PTR_GET_DEFAULT(invoiceName_, "") };
    inline ApplyQueryResponseBodyModuleItinerarySetList& setInvoiceName(string invoiceName) { DARABONBA_PTR_SET_VALUE(invoiceName_, invoiceName) };


    // itineraryId Field Functions 
    bool hasItineraryId() const { return this->itineraryId_ != nullptr;};
    void deleteItineraryId() { this->itineraryId_ = nullptr;};
    inline string itineraryId() const { DARABONBA_PTR_GET_DEFAULT(itineraryId_, "") };
    inline ApplyQueryResponseBodyModuleItinerarySetList& setItineraryId(string itineraryId) { DARABONBA_PTR_SET_VALUE(itineraryId_, itineraryId) };


    // itineraryTravelStandard Field Functions 
    bool hasItineraryTravelStandard() const { return this->itineraryTravelStandard_ != nullptr;};
    void deleteItineraryTravelStandard() { this->itineraryTravelStandard_ = nullptr;};
    inline const Models::ApplyQueryResponseBodyModuleItinerarySetListItineraryTravelStandard & itineraryTravelStandard() const { DARABONBA_PTR_GET_CONST(itineraryTravelStandard_, Models::ApplyQueryResponseBodyModuleItinerarySetListItineraryTravelStandard) };
    inline Models::ApplyQueryResponseBodyModuleItinerarySetListItineraryTravelStandard itineraryTravelStandard() { DARABONBA_PTR_GET(itineraryTravelStandard_, Models::ApplyQueryResponseBodyModuleItinerarySetListItineraryTravelStandard) };
    inline ApplyQueryResponseBodyModuleItinerarySetList& setItineraryTravelStandard(const Models::ApplyQueryResponseBodyModuleItinerarySetListItineraryTravelStandard & itineraryTravelStandard) { DARABONBA_PTR_SET_VALUE(itineraryTravelStandard_, itineraryTravelStandard) };
    inline ApplyQueryResponseBodyModuleItinerarySetList& setItineraryTravelStandard(Models::ApplyQueryResponseBodyModuleItinerarySetListItineraryTravelStandard && itineraryTravelStandard) { DARABONBA_PTR_SET_RVALUE(itineraryTravelStandard_, itineraryTravelStandard) };


    // projectCode Field Functions 
    bool hasProjectCode() const { return this->projectCode_ != nullptr;};
    void deleteProjectCode() { this->projectCode_ = nullptr;};
    inline string projectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
    inline ApplyQueryResponseBodyModuleItinerarySetList& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


    // projectTitle Field Functions 
    bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
    void deleteProjectTitle() { this->projectTitle_ = nullptr;};
    inline string projectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
    inline ApplyQueryResponseBodyModuleItinerarySetList& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


    // thirdpartCostCenterId Field Functions 
    bool hasThirdpartCostCenterId() const { return this->thirdpartCostCenterId_ != nullptr;};
    void deleteThirdpartCostCenterId() { this->thirdpartCostCenterId_ = nullptr;};
    inline string thirdpartCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartCostCenterId_, "") };
    inline ApplyQueryResponseBodyModuleItinerarySetList& setThirdpartCostCenterId(string thirdpartCostCenterId) { DARABONBA_PTR_SET_VALUE(thirdpartCostCenterId_, thirdpartCostCenterId) };


    // thirdpartInvoiceId Field Functions 
    bool hasThirdpartInvoiceId() const { return this->thirdpartInvoiceId_ != nullptr;};
    void deleteThirdpartInvoiceId() { this->thirdpartInvoiceId_ = nullptr;};
    inline string thirdpartInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartInvoiceId_, "") };
    inline ApplyQueryResponseBodyModuleItinerarySetList& setThirdpartInvoiceId(string thirdpartInvoiceId) { DARABONBA_PTR_SET_VALUE(thirdpartInvoiceId_, thirdpartInvoiceId) };


    // thirdpartItineraryId Field Functions 
    bool hasThirdpartItineraryId() const { return this->thirdpartItineraryId_ != nullptr;};
    void deleteThirdpartItineraryId() { this->thirdpartItineraryId_ = nullptr;};
    inline string thirdpartItineraryId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartItineraryId_, "") };
    inline ApplyQueryResponseBodyModuleItinerarySetList& setThirdpartItineraryId(string thirdpartItineraryId) { DARABONBA_PTR_SET_VALUE(thirdpartItineraryId_, thirdpartItineraryId) };


    // trafficType Field Functions 
    bool hasTrafficType() const { return this->trafficType_ != nullptr;};
    void deleteTrafficType() { this->trafficType_ = nullptr;};
    inline int32_t trafficType() const { DARABONBA_PTR_GET_DEFAULT(trafficType_, 0) };
    inline ApplyQueryResponseBodyModuleItinerarySetList& setTrafficType(int32_t trafficType) { DARABONBA_PTR_SET_VALUE(trafficType_, trafficType) };


  protected:
    std::shared_ptr<string> arrDate_ = nullptr;
    std::shared_ptr<string> attribute_ = nullptr;
    std::shared_ptr<string> cityCodeSet_ = nullptr;
    std::shared_ptr<string> citySet_ = nullptr;
    std::shared_ptr<string> costCenterName_ = nullptr;
    std::shared_ptr<string> depDate_ = nullptr;
    std::shared_ptr<string> invoiceName_ = nullptr;
    std::shared_ptr<string> itineraryId_ = nullptr;
    std::shared_ptr<Models::ApplyQueryResponseBodyModuleItinerarySetListItineraryTravelStandard> itineraryTravelStandard_ = nullptr;
    std::shared_ptr<string> projectCode_ = nullptr;
    std::shared_ptr<string> projectTitle_ = nullptr;
    std::shared_ptr<string> thirdpartCostCenterId_ = nullptr;
    std::shared_ptr<string> thirdpartInvoiceId_ = nullptr;
    std::shared_ptr<string> thirdpartItineraryId_ = nullptr;
    std::shared_ptr<int32_t> trafficType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
