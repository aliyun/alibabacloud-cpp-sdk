// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTITINERARYSCANQUERYRESPONSEBODYMODULEITEMS_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTITINERARYSCANQUERYRESPONSEBODYMODULEITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightItineraryScanQueryResponseBodyModuleItemsFlights.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightItineraryScanQueryResponseBodyModuleItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightItineraryScanQueryResponseBodyModuleItems& obj) { 
      DARABONBA_PTR_TO_JSON(agent_code, agentCode_);
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(bill_date, billDate_);
      DARABONBA_PTR_TO_JSON(build, build_);
      DARABONBA_PTR_TO_JSON(cost_center, costCenter_);
      DARABONBA_PTR_TO_JSON(department, department_);
      DARABONBA_PTR_TO_JSON(flights, flights_);
      DARABONBA_PTR_TO_JSON(fuel_surcharge, fuelSurcharge_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(insurance, insurance_);
      DARABONBA_PTR_TO_JSON(invoice_title, invoiceTitle_);
      DARABONBA_PTR_TO_JSON(invoice_type, invoiceType_);
      DARABONBA_PTR_TO_JSON(issue_company, issueCompany_);
      DARABONBA_PTR_TO_JSON(issue_date, issueDate_);
      DARABONBA_PTR_TO_JSON(itinerary_num, itineraryNum_);
      DARABONBA_PTR_TO_JSON(ofd_oss_url, ofdOssUrl_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(oss_url, ossUrl_);
      DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
      DARABONBA_PTR_TO_JSON(pdf_oss_url, pdfOssUrl_);
      DARABONBA_PTR_TO_JSON(project, project_);
      DARABONBA_PTR_TO_JSON(prompt_message, promptMessage_);
      DARABONBA_PTR_TO_JSON(purchaser_name, purchaserName_);
      DARABONBA_PTR_TO_JSON(purchaser_tax_no, purchaserTaxNo_);
      DARABONBA_PTR_TO_JSON(purchaser_type, purchaserType_);
      DARABONBA_PTR_TO_JSON(tax_amount, taxAmount_);
      DARABONBA_PTR_TO_JSON(tax_rate, taxRate_);
      DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_TO_JSON(total_price, totalPrice_);
      DARABONBA_PTR_TO_JSON(validation_code, validationCode_);
    };
    friend void from_json(const Darabonba::Json& j, FlightItineraryScanQueryResponseBodyModuleItems& obj) { 
      DARABONBA_PTR_FROM_JSON(agent_code, agentCode_);
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(bill_date, billDate_);
      DARABONBA_PTR_FROM_JSON(build, build_);
      DARABONBA_PTR_FROM_JSON(cost_center, costCenter_);
      DARABONBA_PTR_FROM_JSON(department, department_);
      DARABONBA_PTR_FROM_JSON(flights, flights_);
      DARABONBA_PTR_FROM_JSON(fuel_surcharge, fuelSurcharge_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(insurance, insurance_);
      DARABONBA_PTR_FROM_JSON(invoice_title, invoiceTitle_);
      DARABONBA_PTR_FROM_JSON(invoice_type, invoiceType_);
      DARABONBA_PTR_FROM_JSON(issue_company, issueCompany_);
      DARABONBA_PTR_FROM_JSON(issue_date, issueDate_);
      DARABONBA_PTR_FROM_JSON(itinerary_num, itineraryNum_);
      DARABONBA_PTR_FROM_JSON(ofd_oss_url, ofdOssUrl_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(oss_url, ossUrl_);
      DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
      DARABONBA_PTR_FROM_JSON(pdf_oss_url, pdfOssUrl_);
      DARABONBA_PTR_FROM_JSON(project, project_);
      DARABONBA_PTR_FROM_JSON(prompt_message, promptMessage_);
      DARABONBA_PTR_FROM_JSON(purchaser_name, purchaserName_);
      DARABONBA_PTR_FROM_JSON(purchaser_tax_no, purchaserTaxNo_);
      DARABONBA_PTR_FROM_JSON(purchaser_type, purchaserType_);
      DARABONBA_PTR_FROM_JSON(tax_amount, taxAmount_);
      DARABONBA_PTR_FROM_JSON(tax_rate, taxRate_);
      DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_FROM_JSON(total_price, totalPrice_);
      DARABONBA_PTR_FROM_JSON(validation_code, validationCode_);
    };
    FlightItineraryScanQueryResponseBodyModuleItems() = default ;
    FlightItineraryScanQueryResponseBodyModuleItems(const FlightItineraryScanQueryResponseBodyModuleItems &) = default ;
    FlightItineraryScanQueryResponseBodyModuleItems(FlightItineraryScanQueryResponseBodyModuleItems &&) = default ;
    FlightItineraryScanQueryResponseBodyModuleItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightItineraryScanQueryResponseBodyModuleItems() = default ;
    FlightItineraryScanQueryResponseBodyModuleItems& operator=(const FlightItineraryScanQueryResponseBodyModuleItems &) = default ;
    FlightItineraryScanQueryResponseBodyModuleItems& operator=(FlightItineraryScanQueryResponseBodyModuleItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentCode_ != nullptr
        && this->applyId_ != nullptr && this->billDate_ != nullptr && this->build_ != nullptr && this->costCenter_ != nullptr && this->department_ != nullptr
        && this->flights_ != nullptr && this->fuelSurcharge_ != nullptr && this->id_ != nullptr && this->insurance_ != nullptr && this->invoiceTitle_ != nullptr
        && this->invoiceType_ != nullptr && this->issueCompany_ != nullptr && this->issueDate_ != nullptr && this->itineraryNum_ != nullptr && this->ofdOssUrl_ != nullptr
        && this->orderId_ != nullptr && this->ossUrl_ != nullptr && this->passengerName_ != nullptr && this->pdfOssUrl_ != nullptr && this->project_ != nullptr
        && this->promptMessage_ != nullptr && this->purchaserName_ != nullptr && this->purchaserTaxNo_ != nullptr && this->purchaserType_ != nullptr && this->taxAmount_ != nullptr
        && this->taxRate_ != nullptr && this->ticketNo_ != nullptr && this->ticketPrice_ != nullptr && this->totalPrice_ != nullptr && this->validationCode_ != nullptr; };
    // agentCode Field Functions 
    bool hasAgentCode() const { return this->agentCode_ != nullptr;};
    void deleteAgentCode() { this->agentCode_ = nullptr;};
    inline string agentCode() const { DARABONBA_PTR_GET_DEFAULT(agentCode_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setAgentCode(string agentCode) { DARABONBA_PTR_SET_VALUE(agentCode_, agentCode) };


    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline string applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // billDate Field Functions 
    bool hasBillDate() const { return this->billDate_ != nullptr;};
    void deleteBillDate() { this->billDate_ = nullptr;};
    inline string billDate() const { DARABONBA_PTR_GET_DEFAULT(billDate_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setBillDate(string billDate) { DARABONBA_PTR_SET_VALUE(billDate_, billDate) };


    // build Field Functions 
    bool hasBuild() const { return this->build_ != nullptr;};
    void deleteBuild() { this->build_ = nullptr;};
    inline string build() const { DARABONBA_PTR_GET_DEFAULT(build_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setBuild(string build) { DARABONBA_PTR_SET_VALUE(build_, build) };


    // costCenter Field Functions 
    bool hasCostCenter() const { return this->costCenter_ != nullptr;};
    void deleteCostCenter() { this->costCenter_ = nullptr;};
    inline string costCenter() const { DARABONBA_PTR_GET_DEFAULT(costCenter_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setCostCenter(string costCenter) { DARABONBA_PTR_SET_VALUE(costCenter_, costCenter) };


    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline string department() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


    // flights Field Functions 
    bool hasFlights() const { return this->flights_ != nullptr;};
    void deleteFlights() { this->flights_ = nullptr;};
    inline const vector<Models::FlightItineraryScanQueryResponseBodyModuleItemsFlights> & flights() const { DARABONBA_PTR_GET_CONST(flights_, vector<Models::FlightItineraryScanQueryResponseBodyModuleItemsFlights>) };
    inline vector<Models::FlightItineraryScanQueryResponseBodyModuleItemsFlights> flights() { DARABONBA_PTR_GET(flights_, vector<Models::FlightItineraryScanQueryResponseBodyModuleItemsFlights>) };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setFlights(const vector<Models::FlightItineraryScanQueryResponseBodyModuleItemsFlights> & flights) { DARABONBA_PTR_SET_VALUE(flights_, flights) };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setFlights(vector<Models::FlightItineraryScanQueryResponseBodyModuleItemsFlights> && flights) { DARABONBA_PTR_SET_RVALUE(flights_, flights) };


    // fuelSurcharge Field Functions 
    bool hasFuelSurcharge() const { return this->fuelSurcharge_ != nullptr;};
    void deleteFuelSurcharge() { this->fuelSurcharge_ = nullptr;};
    inline string fuelSurcharge() const { DARABONBA_PTR_GET_DEFAULT(fuelSurcharge_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setFuelSurcharge(string fuelSurcharge) { DARABONBA_PTR_SET_VALUE(fuelSurcharge_, fuelSurcharge) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // insurance Field Functions 
    bool hasInsurance() const { return this->insurance_ != nullptr;};
    void deleteInsurance() { this->insurance_ = nullptr;};
    inline string insurance() const { DARABONBA_PTR_GET_DEFAULT(insurance_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setInsurance(string insurance) { DARABONBA_PTR_SET_VALUE(insurance_, insurance) };


    // invoiceTitle Field Functions 
    bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
    void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
    inline string invoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


    // invoiceType Field Functions 
    bool hasInvoiceType() const { return this->invoiceType_ != nullptr;};
    void deleteInvoiceType() { this->invoiceType_ = nullptr;};
    inline int32_t invoiceType() const { DARABONBA_PTR_GET_DEFAULT(invoiceType_, 0) };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setInvoiceType(int32_t invoiceType) { DARABONBA_PTR_SET_VALUE(invoiceType_, invoiceType) };


    // issueCompany Field Functions 
    bool hasIssueCompany() const { return this->issueCompany_ != nullptr;};
    void deleteIssueCompany() { this->issueCompany_ = nullptr;};
    inline string issueCompany() const { DARABONBA_PTR_GET_DEFAULT(issueCompany_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setIssueCompany(string issueCompany) { DARABONBA_PTR_SET_VALUE(issueCompany_, issueCompany) };


    // issueDate Field Functions 
    bool hasIssueDate() const { return this->issueDate_ != nullptr;};
    void deleteIssueDate() { this->issueDate_ = nullptr;};
    inline string issueDate() const { DARABONBA_PTR_GET_DEFAULT(issueDate_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setIssueDate(string issueDate) { DARABONBA_PTR_SET_VALUE(issueDate_, issueDate) };


    // itineraryNum Field Functions 
    bool hasItineraryNum() const { return this->itineraryNum_ != nullptr;};
    void deleteItineraryNum() { this->itineraryNum_ = nullptr;};
    inline string itineraryNum() const { DARABONBA_PTR_GET_DEFAULT(itineraryNum_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setItineraryNum(string itineraryNum) { DARABONBA_PTR_SET_VALUE(itineraryNum_, itineraryNum) };


    // ofdOssUrl Field Functions 
    bool hasOfdOssUrl() const { return this->ofdOssUrl_ != nullptr;};
    void deleteOfdOssUrl() { this->ofdOssUrl_ = nullptr;};
    inline string ofdOssUrl() const { DARABONBA_PTR_GET_DEFAULT(ofdOssUrl_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setOfdOssUrl(string ofdOssUrl) { DARABONBA_PTR_SET_VALUE(ofdOssUrl_, ofdOssUrl) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // ossUrl Field Functions 
    bool hasOssUrl() const { return this->ossUrl_ != nullptr;};
    void deleteOssUrl() { this->ossUrl_ = nullptr;};
    inline string ossUrl() const { DARABONBA_PTR_GET_DEFAULT(ossUrl_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setOssUrl(string ossUrl) { DARABONBA_PTR_SET_VALUE(ossUrl_, ossUrl) };


    // passengerName Field Functions 
    bool hasPassengerName() const { return this->passengerName_ != nullptr;};
    void deletePassengerName() { this->passengerName_ = nullptr;};
    inline string passengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


    // pdfOssUrl Field Functions 
    bool hasPdfOssUrl() const { return this->pdfOssUrl_ != nullptr;};
    void deletePdfOssUrl() { this->pdfOssUrl_ = nullptr;};
    inline string pdfOssUrl() const { DARABONBA_PTR_GET_DEFAULT(pdfOssUrl_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setPdfOssUrl(string pdfOssUrl) { DARABONBA_PTR_SET_VALUE(pdfOssUrl_, pdfOssUrl) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // promptMessage Field Functions 
    bool hasPromptMessage() const { return this->promptMessage_ != nullptr;};
    void deletePromptMessage() { this->promptMessage_ = nullptr;};
    inline string promptMessage() const { DARABONBA_PTR_GET_DEFAULT(promptMessage_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setPromptMessage(string promptMessage) { DARABONBA_PTR_SET_VALUE(promptMessage_, promptMessage) };


    // purchaserName Field Functions 
    bool hasPurchaserName() const { return this->purchaserName_ != nullptr;};
    void deletePurchaserName() { this->purchaserName_ = nullptr;};
    inline string purchaserName() const { DARABONBA_PTR_GET_DEFAULT(purchaserName_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setPurchaserName(string purchaserName) { DARABONBA_PTR_SET_VALUE(purchaserName_, purchaserName) };


    // purchaserTaxNo Field Functions 
    bool hasPurchaserTaxNo() const { return this->purchaserTaxNo_ != nullptr;};
    void deletePurchaserTaxNo() { this->purchaserTaxNo_ = nullptr;};
    inline string purchaserTaxNo() const { DARABONBA_PTR_GET_DEFAULT(purchaserTaxNo_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setPurchaserTaxNo(string purchaserTaxNo) { DARABONBA_PTR_SET_VALUE(purchaserTaxNo_, purchaserTaxNo) };


    // purchaserType Field Functions 
    bool hasPurchaserType() const { return this->purchaserType_ != nullptr;};
    void deletePurchaserType() { this->purchaserType_ = nullptr;};
    inline int32_t purchaserType() const { DARABONBA_PTR_GET_DEFAULT(purchaserType_, 0) };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setPurchaserType(int32_t purchaserType) { DARABONBA_PTR_SET_VALUE(purchaserType_, purchaserType) };


    // taxAmount Field Functions 
    bool hasTaxAmount() const { return this->taxAmount_ != nullptr;};
    void deleteTaxAmount() { this->taxAmount_ = nullptr;};
    inline string taxAmount() const { DARABONBA_PTR_GET_DEFAULT(taxAmount_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setTaxAmount(string taxAmount) { DARABONBA_PTR_SET_VALUE(taxAmount_, taxAmount) };


    // taxRate Field Functions 
    bool hasTaxRate() const { return this->taxRate_ != nullptr;};
    void deleteTaxRate() { this->taxRate_ = nullptr;};
    inline string taxRate() const { DARABONBA_PTR_GET_DEFAULT(taxRate_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setTaxRate(string taxRate) { DARABONBA_PTR_SET_VALUE(taxRate_, taxRate) };


    // ticketNo Field Functions 
    bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
    void deleteTicketNo() { this->ticketNo_ = nullptr;};
    inline string ticketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


    // ticketPrice Field Functions 
    bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
    void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
    inline string ticketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setTicketPrice(string ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


    // totalPrice Field Functions 
    bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
    void deleteTotalPrice() { this->totalPrice_ = nullptr;};
    inline string totalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setTotalPrice(string totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


    // validationCode Field Functions 
    bool hasValidationCode() const { return this->validationCode_ != nullptr;};
    void deleteValidationCode() { this->validationCode_ = nullptr;};
    inline string validationCode() const { DARABONBA_PTR_GET_DEFAULT(validationCode_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItems& setValidationCode(string validationCode) { DARABONBA_PTR_SET_VALUE(validationCode_, validationCode) };


  protected:
    // 销售单位代号
    std::shared_ptr<string> agentCode_ = nullptr;
    std::shared_ptr<string> applyId_ = nullptr;
    std::shared_ptr<string> billDate_ = nullptr;
    std::shared_ptr<string> build_ = nullptr;
    std::shared_ptr<string> costCenter_ = nullptr;
    std::shared_ptr<string> department_ = nullptr;
    // 机票行程明细
    std::shared_ptr<vector<Models::FlightItineraryScanQueryResponseBodyModuleItemsFlights>> flights_ = nullptr;
    std::shared_ptr<string> fuelSurcharge_ = nullptr;
    // UK
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> insurance_ = nullptr;
    std::shared_ptr<string> invoiceTitle_ = nullptr;
    std::shared_ptr<int32_t> invoiceType_ = nullptr;
    // 填开单位
    std::shared_ptr<string> issueCompany_ = nullptr;
    // 填开日期
    std::shared_ptr<string> issueDate_ = nullptr;
    std::shared_ptr<string> itineraryNum_ = nullptr;
    std::shared_ptr<string> ofdOssUrl_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<string> ossUrl_ = nullptr;
    std::shared_ptr<string> passengerName_ = nullptr;
    std::shared_ptr<string> pdfOssUrl_ = nullptr;
    std::shared_ptr<string> project_ = nullptr;
    // 提示信息
    std::shared_ptr<string> promptMessage_ = nullptr;
    std::shared_ptr<string> purchaserName_ = nullptr;
    std::shared_ptr<string> purchaserTaxNo_ = nullptr;
    std::shared_ptr<int32_t> purchaserType_ = nullptr;
    std::shared_ptr<string> taxAmount_ = nullptr;
    std::shared_ptr<string> taxRate_ = nullptr;
    std::shared_ptr<string> ticketNo_ = nullptr;
    std::shared_ptr<string> ticketPrice_ = nullptr;
    std::shared_ptr<string> totalPrice_ = nullptr;
    // 验证码
    std::shared_ptr<string> validationCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
