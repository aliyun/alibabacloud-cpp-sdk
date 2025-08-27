// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CARAPPLYQUERYRESPONSEBODYAPPLYLISTITINERARYLIST_HPP_
#define ALIBABACLOUD_MODELS_CARAPPLYQUERYRESPONSEBODYAPPLYLISTITINERARYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CarApplyQueryResponseBodyApplyListItineraryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CarApplyQueryResponseBodyApplyListItineraryList& obj) { 
      DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(arr_date, arrDate_);
      DARABONBA_PTR_TO_JSON(cost_center_id, costCenterId_);
      DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
      DARABONBA_PTR_TO_JSON(dep_city, depCity_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(dep_date, depDate_);
      DARABONBA_PTR_TO_JSON(invoice_id, invoiceId_);
      DARABONBA_PTR_TO_JSON(invoice_name, invoiceName_);
      DARABONBA_PTR_TO_JSON(itinerary_id, itineraryId_);
      DARABONBA_PTR_TO_JSON(project_code, projectCode_);
      DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
      DARABONBA_PTR_TO_JSON(traffic_type, trafficType_);
    };
    friend void from_json(const Darabonba::Json& j, CarApplyQueryResponseBodyApplyListItineraryList& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(arr_date, arrDate_);
      DARABONBA_PTR_FROM_JSON(cost_center_id, costCenterId_);
      DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
      DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
      DARABONBA_PTR_FROM_JSON(invoice_id, invoiceId_);
      DARABONBA_PTR_FROM_JSON(invoice_name, invoiceName_);
      DARABONBA_PTR_FROM_JSON(itinerary_id, itineraryId_);
      DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
      DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
      DARABONBA_PTR_FROM_JSON(traffic_type, trafficType_);
    };
    CarApplyQueryResponseBodyApplyListItineraryList() = default ;
    CarApplyQueryResponseBodyApplyListItineraryList(const CarApplyQueryResponseBodyApplyListItineraryList &) = default ;
    CarApplyQueryResponseBodyApplyListItineraryList(CarApplyQueryResponseBodyApplyListItineraryList &&) = default ;
    CarApplyQueryResponseBodyApplyListItineraryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CarApplyQueryResponseBodyApplyListItineraryList() = default ;
    CarApplyQueryResponseBodyApplyListItineraryList& operator=(const CarApplyQueryResponseBodyApplyListItineraryList &) = default ;
    CarApplyQueryResponseBodyApplyListItineraryList& operator=(CarApplyQueryResponseBodyApplyListItineraryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrCity_ != nullptr
        && this->arrCityCode_ != nullptr && this->arrDate_ != nullptr && this->costCenterId_ != nullptr && this->costCenterName_ != nullptr && this->depCity_ != nullptr
        && this->depCityCode_ != nullptr && this->depDate_ != nullptr && this->invoiceId_ != nullptr && this->invoiceName_ != nullptr && this->itineraryId_ != nullptr
        && this->projectCode_ != nullptr && this->projectTitle_ != nullptr && this->trafficType_ != nullptr; };
    // arrCity Field Functions 
    bool hasArrCity() const { return this->arrCity_ != nullptr;};
    void deleteArrCity() { this->arrCity_ = nullptr;};
    inline string arrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
    inline CarApplyQueryResponseBodyApplyListItineraryList& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline CarApplyQueryResponseBodyApplyListItineraryList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // arrDate Field Functions 
    bool hasArrDate() const { return this->arrDate_ != nullptr;};
    void deleteArrDate() { this->arrDate_ = nullptr;};
    inline string arrDate() const { DARABONBA_PTR_GET_DEFAULT(arrDate_, "") };
    inline CarApplyQueryResponseBodyApplyListItineraryList& setArrDate(string arrDate) { DARABONBA_PTR_SET_VALUE(arrDate_, arrDate) };


    // costCenterId Field Functions 
    bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
    void deleteCostCenterId() { this->costCenterId_ = nullptr;};
    inline int64_t costCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
    inline CarApplyQueryResponseBodyApplyListItineraryList& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


    // costCenterName Field Functions 
    bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
    void deleteCostCenterName() { this->costCenterName_ = nullptr;};
    inline string costCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
    inline CarApplyQueryResponseBodyApplyListItineraryList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


    // depCity Field Functions 
    bool hasDepCity() const { return this->depCity_ != nullptr;};
    void deleteDepCity() { this->depCity_ = nullptr;};
    inline string depCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
    inline CarApplyQueryResponseBodyApplyListItineraryList& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline CarApplyQueryResponseBodyApplyListItineraryList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // depDate Field Functions 
    bool hasDepDate() const { return this->depDate_ != nullptr;};
    void deleteDepDate() { this->depDate_ = nullptr;};
    inline string depDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
    inline CarApplyQueryResponseBodyApplyListItineraryList& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


    // invoiceId Field Functions 
    bool hasInvoiceId() const { return this->invoiceId_ != nullptr;};
    void deleteInvoiceId() { this->invoiceId_ = nullptr;};
    inline int64_t invoiceId() const { DARABONBA_PTR_GET_DEFAULT(invoiceId_, 0L) };
    inline CarApplyQueryResponseBodyApplyListItineraryList& setInvoiceId(int64_t invoiceId) { DARABONBA_PTR_SET_VALUE(invoiceId_, invoiceId) };


    // invoiceName Field Functions 
    bool hasInvoiceName() const { return this->invoiceName_ != nullptr;};
    void deleteInvoiceName() { this->invoiceName_ = nullptr;};
    inline string invoiceName() const { DARABONBA_PTR_GET_DEFAULT(invoiceName_, "") };
    inline CarApplyQueryResponseBodyApplyListItineraryList& setInvoiceName(string invoiceName) { DARABONBA_PTR_SET_VALUE(invoiceName_, invoiceName) };


    // itineraryId Field Functions 
    bool hasItineraryId() const { return this->itineraryId_ != nullptr;};
    void deleteItineraryId() { this->itineraryId_ = nullptr;};
    inline string itineraryId() const { DARABONBA_PTR_GET_DEFAULT(itineraryId_, "") };
    inline CarApplyQueryResponseBodyApplyListItineraryList& setItineraryId(string itineraryId) { DARABONBA_PTR_SET_VALUE(itineraryId_, itineraryId) };


    // projectCode Field Functions 
    bool hasProjectCode() const { return this->projectCode_ != nullptr;};
    void deleteProjectCode() { this->projectCode_ = nullptr;};
    inline string projectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
    inline CarApplyQueryResponseBodyApplyListItineraryList& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


    // projectTitle Field Functions 
    bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
    void deleteProjectTitle() { this->projectTitle_ = nullptr;};
    inline string projectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
    inline CarApplyQueryResponseBodyApplyListItineraryList& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


    // trafficType Field Functions 
    bool hasTrafficType() const { return this->trafficType_ != nullptr;};
    void deleteTrafficType() { this->trafficType_ = nullptr;};
    inline int32_t trafficType() const { DARABONBA_PTR_GET_DEFAULT(trafficType_, 0) };
    inline CarApplyQueryResponseBodyApplyListItineraryList& setTrafficType(int32_t trafficType) { DARABONBA_PTR_SET_VALUE(trafficType_, trafficType) };


  protected:
    std::shared_ptr<string> arrCity_ = nullptr;
    std::shared_ptr<string> arrCityCode_ = nullptr;
    std::shared_ptr<string> arrDate_ = nullptr;
    std::shared_ptr<int64_t> costCenterId_ = nullptr;
    std::shared_ptr<string> costCenterName_ = nullptr;
    std::shared_ptr<string> depCity_ = nullptr;
    std::shared_ptr<string> depCityCode_ = nullptr;
    std::shared_ptr<string> depDate_ = nullptr;
    std::shared_ptr<int64_t> invoiceId_ = nullptr;
    std::shared_ptr<string> invoiceName_ = nullptr;
    std::shared_ptr<string> itineraryId_ = nullptr;
    std::shared_ptr<string> projectCode_ = nullptr;
    std::shared_ptr<string> projectTitle_ = nullptr;
    std::shared_ptr<int32_t> trafficType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
