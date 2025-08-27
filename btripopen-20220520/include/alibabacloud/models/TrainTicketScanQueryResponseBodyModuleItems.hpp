// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINTICKETSCANQUERYRESPONSEBODYMODULEITEMS_HPP_
#define ALIBABACLOUD_MODELS_TRAINTICKETSCANQUERYRESPONSEBODYMODULEITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainTicketScanQueryResponseBodyModuleItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainTicketScanQueryResponseBodyModuleItems& obj) { 
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(arr_station, arrStation_);
      DARABONBA_PTR_TO_JSON(bill_date, billDate_);
      DARABONBA_PTR_TO_JSON(coach_name, coachName_);
      DARABONBA_PTR_TO_JSON(cost_center, costCenter_);
      DARABONBA_PTR_TO_JSON(dep_station, depStation_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(department, department_);
      DARABONBA_PTR_TO_JSON(fee_type_show_code, feeTypeShowCode_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(invoice_date, invoiceDate_);
      DARABONBA_PTR_TO_JSON(invoice_material, invoiceMaterial_);
      DARABONBA_PTR_TO_JSON(invoice_title, invoiceTitle_);
      DARABONBA_PTR_TO_JSON(ofd_url, ofdUrl_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(oss_url, ossUrl_);
      DARABONBA_PTR_TO_JSON(passenger, passenger_);
      DARABONBA_PTR_TO_JSON(pdf_url, pdfUrl_);
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(project, project_);
      DARABONBA_PTR_TO_JSON(purchaser_name, purchaserName_);
      DARABONBA_PTR_TO_JSON(purchaser_tax_no, purchaserTaxNo_);
      DARABONBA_PTR_TO_JSON(seat, seat_);
      DARABONBA_PTR_TO_JSON(seat_no, seatNo_);
      DARABONBA_PTR_TO_JSON(serial_number, serialNumber_);
      DARABONBA_PTR_TO_JSON(tax_amount, taxAmount_);
      DARABONBA_PTR_TO_JSON(tax_rate, taxRate_);
      DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_TO_JSON(train_no, trainNo_);
    };
    friend void from_json(const Darabonba::Json& j, TrainTicketScanQueryResponseBodyModuleItems& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(arr_station, arrStation_);
      DARABONBA_PTR_FROM_JSON(bill_date, billDate_);
      DARABONBA_PTR_FROM_JSON(coach_name, coachName_);
      DARABONBA_PTR_FROM_JSON(cost_center, costCenter_);
      DARABONBA_PTR_FROM_JSON(dep_station, depStation_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(department, department_);
      DARABONBA_PTR_FROM_JSON(fee_type_show_code, feeTypeShowCode_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(invoice_date, invoiceDate_);
      DARABONBA_PTR_FROM_JSON(invoice_material, invoiceMaterial_);
      DARABONBA_PTR_FROM_JSON(invoice_title, invoiceTitle_);
      DARABONBA_PTR_FROM_JSON(ofd_url, ofdUrl_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(oss_url, ossUrl_);
      DARABONBA_PTR_FROM_JSON(passenger, passenger_);
      DARABONBA_PTR_FROM_JSON(pdf_url, pdfUrl_);
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(project, project_);
      DARABONBA_PTR_FROM_JSON(purchaser_name, purchaserName_);
      DARABONBA_PTR_FROM_JSON(purchaser_tax_no, purchaserTaxNo_);
      DARABONBA_PTR_FROM_JSON(seat, seat_);
      DARABONBA_PTR_FROM_JSON(seat_no, seatNo_);
      DARABONBA_PTR_FROM_JSON(serial_number, serialNumber_);
      DARABONBA_PTR_FROM_JSON(tax_amount, taxAmount_);
      DARABONBA_PTR_FROM_JSON(tax_rate, taxRate_);
      DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
    };
    TrainTicketScanQueryResponseBodyModuleItems() = default ;
    TrainTicketScanQueryResponseBodyModuleItems(const TrainTicketScanQueryResponseBodyModuleItems &) = default ;
    TrainTicketScanQueryResponseBodyModuleItems(TrainTicketScanQueryResponseBodyModuleItems &&) = default ;
    TrainTicketScanQueryResponseBodyModuleItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainTicketScanQueryResponseBodyModuleItems() = default ;
    TrainTicketScanQueryResponseBodyModuleItems& operator=(const TrainTicketScanQueryResponseBodyModuleItems &) = default ;
    TrainTicketScanQueryResponseBodyModuleItems& operator=(TrainTicketScanQueryResponseBodyModuleItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyId_ != nullptr
        && this->arrStation_ != nullptr && this->billDate_ != nullptr && this->coachName_ != nullptr && this->costCenter_ != nullptr && this->depStation_ != nullptr
        && this->depTime_ != nullptr && this->department_ != nullptr && this->feeTypeShowCode_ != nullptr && this->id_ != nullptr && this->invoiceDate_ != nullptr
        && this->invoiceMaterial_ != nullptr && this->invoiceTitle_ != nullptr && this->ofdUrl_ != nullptr && this->orderId_ != nullptr && this->ossUrl_ != nullptr
        && this->passenger_ != nullptr && this->pdfUrl_ != nullptr && this->price_ != nullptr && this->project_ != nullptr && this->purchaserName_ != nullptr
        && this->purchaserTaxNo_ != nullptr && this->seat_ != nullptr && this->seatNo_ != nullptr && this->serialNumber_ != nullptr && this->taxAmount_ != nullptr
        && this->taxRate_ != nullptr && this->ticketNo_ != nullptr && this->trainNo_ != nullptr; };
    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline string applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
    inline TrainTicketScanQueryResponseBodyModuleItems& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // arrStation Field Functions 
    bool hasArrStation() const { return this->arrStation_ != nullptr;};
    void deleteArrStation() { this->arrStation_ = nullptr;};
    inline string arrStation() const { DARABONBA_PTR_GET_DEFAULT(arrStation_, "") };
    inline TrainTicketScanQueryResponseBodyModuleItems& setArrStation(string arrStation) { DARABONBA_PTR_SET_VALUE(arrStation_, arrStation) };


    // billDate Field Functions 
    bool hasBillDate() const { return this->billDate_ != nullptr;};
    void deleteBillDate() { this->billDate_ = nullptr;};
    inline string billDate() const { DARABONBA_PTR_GET_DEFAULT(billDate_, "") };
    inline TrainTicketScanQueryResponseBodyModuleItems& setBillDate(string billDate) { DARABONBA_PTR_SET_VALUE(billDate_, billDate) };


    // coachName Field Functions 
    bool hasCoachName() const { return this->coachName_ != nullptr;};
    void deleteCoachName() { this->coachName_ = nullptr;};
    inline string coachName() const { DARABONBA_PTR_GET_DEFAULT(coachName_, "") };
    inline TrainTicketScanQueryResponseBodyModuleItems& setCoachName(string coachName) { DARABONBA_PTR_SET_VALUE(coachName_, coachName) };


    // costCenter Field Functions 
    bool hasCostCenter() const { return this->costCenter_ != nullptr;};
    void deleteCostCenter() { this->costCenter_ = nullptr;};
    inline string costCenter() const { DARABONBA_PTR_GET_DEFAULT(costCenter_, "") };
    inline TrainTicketScanQueryResponseBodyModuleItems& setCostCenter(string costCenter) { DARABONBA_PTR_SET_VALUE(costCenter_, costCenter) };


    // depStation Field Functions 
    bool hasDepStation() const { return this->depStation_ != nullptr;};
    void deleteDepStation() { this->depStation_ = nullptr;};
    inline string depStation() const { DARABONBA_PTR_GET_DEFAULT(depStation_, "") };
    inline TrainTicketScanQueryResponseBodyModuleItems& setDepStation(string depStation) { DARABONBA_PTR_SET_VALUE(depStation_, depStation) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline TrainTicketScanQueryResponseBodyModuleItems& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline string department() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
    inline TrainTicketScanQueryResponseBodyModuleItems& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


    // feeTypeShowCode Field Functions 
    bool hasFeeTypeShowCode() const { return this->feeTypeShowCode_ != nullptr;};
    void deleteFeeTypeShowCode() { this->feeTypeShowCode_ = nullptr;};
    inline int32_t feeTypeShowCode() const { DARABONBA_PTR_GET_DEFAULT(feeTypeShowCode_, 0) };
    inline TrainTicketScanQueryResponseBodyModuleItems& setFeeTypeShowCode(int32_t feeTypeShowCode) { DARABONBA_PTR_SET_VALUE(feeTypeShowCode_, feeTypeShowCode) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline TrainTicketScanQueryResponseBodyModuleItems& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // invoiceDate Field Functions 
    bool hasInvoiceDate() const { return this->invoiceDate_ != nullptr;};
    void deleteInvoiceDate() { this->invoiceDate_ = nullptr;};
    inline string invoiceDate() const { DARABONBA_PTR_GET_DEFAULT(invoiceDate_, "") };
    inline TrainTicketScanQueryResponseBodyModuleItems& setInvoiceDate(string invoiceDate) { DARABONBA_PTR_SET_VALUE(invoiceDate_, invoiceDate) };


    // invoiceMaterial Field Functions 
    bool hasInvoiceMaterial() const { return this->invoiceMaterial_ != nullptr;};
    void deleteInvoiceMaterial() { this->invoiceMaterial_ = nullptr;};
    inline int32_t invoiceMaterial() const { DARABONBA_PTR_GET_DEFAULT(invoiceMaterial_, 0) };
    inline TrainTicketScanQueryResponseBodyModuleItems& setInvoiceMaterial(int32_t invoiceMaterial) { DARABONBA_PTR_SET_VALUE(invoiceMaterial_, invoiceMaterial) };


    // invoiceTitle Field Functions 
    bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
    void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
    inline string invoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
    inline TrainTicketScanQueryResponseBodyModuleItems& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


    // ofdUrl Field Functions 
    bool hasOfdUrl() const { return this->ofdUrl_ != nullptr;};
    void deleteOfdUrl() { this->ofdUrl_ = nullptr;};
    inline string ofdUrl() const { DARABONBA_PTR_GET_DEFAULT(ofdUrl_, "") };
    inline TrainTicketScanQueryResponseBodyModuleItems& setOfdUrl(string ofdUrl) { DARABONBA_PTR_SET_VALUE(ofdUrl_, ofdUrl) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline TrainTicketScanQueryResponseBodyModuleItems& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // ossUrl Field Functions 
    bool hasOssUrl() const { return this->ossUrl_ != nullptr;};
    void deleteOssUrl() { this->ossUrl_ = nullptr;};
    inline string ossUrl() const { DARABONBA_PTR_GET_DEFAULT(ossUrl_, "") };
    inline TrainTicketScanQueryResponseBodyModuleItems& setOssUrl(string ossUrl) { DARABONBA_PTR_SET_VALUE(ossUrl_, ossUrl) };


    // passenger Field Functions 
    bool hasPassenger() const { return this->passenger_ != nullptr;};
    void deletePassenger() { this->passenger_ = nullptr;};
    inline string passenger() const { DARABONBA_PTR_GET_DEFAULT(passenger_, "") };
    inline TrainTicketScanQueryResponseBodyModuleItems& setPassenger(string passenger) { DARABONBA_PTR_SET_VALUE(passenger_, passenger) };


    // pdfUrl Field Functions 
    bool hasPdfUrl() const { return this->pdfUrl_ != nullptr;};
    void deletePdfUrl() { this->pdfUrl_ = nullptr;};
    inline string pdfUrl() const { DARABONBA_PTR_GET_DEFAULT(pdfUrl_, "") };
    inline TrainTicketScanQueryResponseBodyModuleItems& setPdfUrl(string pdfUrl) { DARABONBA_PTR_SET_VALUE(pdfUrl_, pdfUrl) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline string price() const { DARABONBA_PTR_GET_DEFAULT(price_, "") };
    inline TrainTicketScanQueryResponseBodyModuleItems& setPrice(string price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline TrainTicketScanQueryResponseBodyModuleItems& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // purchaserName Field Functions 
    bool hasPurchaserName() const { return this->purchaserName_ != nullptr;};
    void deletePurchaserName() { this->purchaserName_ = nullptr;};
    inline string purchaserName() const { DARABONBA_PTR_GET_DEFAULT(purchaserName_, "") };
    inline TrainTicketScanQueryResponseBodyModuleItems& setPurchaserName(string purchaserName) { DARABONBA_PTR_SET_VALUE(purchaserName_, purchaserName) };


    // purchaserTaxNo Field Functions 
    bool hasPurchaserTaxNo() const { return this->purchaserTaxNo_ != nullptr;};
    void deletePurchaserTaxNo() { this->purchaserTaxNo_ = nullptr;};
    inline string purchaserTaxNo() const { DARABONBA_PTR_GET_DEFAULT(purchaserTaxNo_, "") };
    inline TrainTicketScanQueryResponseBodyModuleItems& setPurchaserTaxNo(string purchaserTaxNo) { DARABONBA_PTR_SET_VALUE(purchaserTaxNo_, purchaserTaxNo) };


    // seat Field Functions 
    bool hasSeat() const { return this->seat_ != nullptr;};
    void deleteSeat() { this->seat_ = nullptr;};
    inline string seat() const { DARABONBA_PTR_GET_DEFAULT(seat_, "") };
    inline TrainTicketScanQueryResponseBodyModuleItems& setSeat(string seat) { DARABONBA_PTR_SET_VALUE(seat_, seat) };


    // seatNo Field Functions 
    bool hasSeatNo() const { return this->seatNo_ != nullptr;};
    void deleteSeatNo() { this->seatNo_ = nullptr;};
    inline string seatNo() const { DARABONBA_PTR_GET_DEFAULT(seatNo_, "") };
    inline TrainTicketScanQueryResponseBodyModuleItems& setSeatNo(string seatNo) { DARABONBA_PTR_SET_VALUE(seatNo_, seatNo) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline TrainTicketScanQueryResponseBodyModuleItems& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // taxAmount Field Functions 
    bool hasTaxAmount() const { return this->taxAmount_ != nullptr;};
    void deleteTaxAmount() { this->taxAmount_ = nullptr;};
    inline string taxAmount() const { DARABONBA_PTR_GET_DEFAULT(taxAmount_, "") };
    inline TrainTicketScanQueryResponseBodyModuleItems& setTaxAmount(string taxAmount) { DARABONBA_PTR_SET_VALUE(taxAmount_, taxAmount) };


    // taxRate Field Functions 
    bool hasTaxRate() const { return this->taxRate_ != nullptr;};
    void deleteTaxRate() { this->taxRate_ = nullptr;};
    inline string taxRate() const { DARABONBA_PTR_GET_DEFAULT(taxRate_, "") };
    inline TrainTicketScanQueryResponseBodyModuleItems& setTaxRate(string taxRate) { DARABONBA_PTR_SET_VALUE(taxRate_, taxRate) };


    // ticketNo Field Functions 
    bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
    void deleteTicketNo() { this->ticketNo_ = nullptr;};
    inline string ticketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
    inline TrainTicketScanQueryResponseBodyModuleItems& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


    // trainNo Field Functions 
    bool hasTrainNo() const { return this->trainNo_ != nullptr;};
    void deleteTrainNo() { this->trainNo_ = nullptr;};
    inline string trainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
    inline TrainTicketScanQueryResponseBodyModuleItems& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


  protected:
    std::shared_ptr<string> applyId_ = nullptr;
    std::shared_ptr<string> arrStation_ = nullptr;
    std::shared_ptr<string> billDate_ = nullptr;
    std::shared_ptr<string> coachName_ = nullptr;
    std::shared_ptr<string> costCenter_ = nullptr;
    std::shared_ptr<string> depStation_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    std::shared_ptr<string> department_ = nullptr;
    std::shared_ptr<int32_t> feeTypeShowCode_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> invoiceDate_ = nullptr;
    std::shared_ptr<int32_t> invoiceMaterial_ = nullptr;
    std::shared_ptr<string> invoiceTitle_ = nullptr;
    std::shared_ptr<string> ofdUrl_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<string> ossUrl_ = nullptr;
    std::shared_ptr<string> passenger_ = nullptr;
    std::shared_ptr<string> pdfUrl_ = nullptr;
    std::shared_ptr<string> price_ = nullptr;
    std::shared_ptr<string> project_ = nullptr;
    std::shared_ptr<string> purchaserName_ = nullptr;
    std::shared_ptr<string> purchaserTaxNo_ = nullptr;
    std::shared_ptr<string> seat_ = nullptr;
    std::shared_ptr<string> seatNo_ = nullptr;
    std::shared_ptr<string> serialNumber_ = nullptr;
    std::shared_ptr<string> taxAmount_ = nullptr;
    std::shared_ptr<string> taxRate_ = nullptr;
    // 取票号
    std::shared_ptr<string> ticketNo_ = nullptr;
    // 车次
    std::shared_ptr<string> trainNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
