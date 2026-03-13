// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINTICKETSCANQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRAINTICKETSCANQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainTicketScanQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainTicketScanQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, TrainTicketScanQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    TrainTicketScanQueryResponseBody() = default ;
    TrainTicketScanQueryResponseBody(const TrainTicketScanQueryResponseBody &) = default ;
    TrainTicketScanQueryResponseBody(TrainTicketScanQueryResponseBody &&) = default ;
    TrainTicketScanQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainTicketScanQueryResponseBody() = default ;
    TrainTicketScanQueryResponseBody& operator=(const TrainTicketScanQueryResponseBody &) = default ;
    TrainTicketScanQueryResponseBody& operator=(TrainTicketScanQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(page_no, pageNo_);
        DARABONBA_PTR_TO_JSON(page_size, pageSize_);
        DARABONBA_PTR_TO_JSON(total_page, totalPage_);
        DARABONBA_PTR_TO_JSON(total_size, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(page_no, pageNo_);
        DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
        DARABONBA_PTR_FROM_JSON(total_page, totalPage_);
        DARABONBA_PTR_FROM_JSON(total_size, totalSize_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(apply_id, applyId_);
          DARABONBA_PTR_TO_JSON(arr_station, arrStation_);
          DARABONBA_PTR_TO_JSON(bill_date, billDate_);
          DARABONBA_PTR_TO_JSON(coach_name, coachName_);
          DARABONBA_PTR_TO_JSON(cost_center, costCenter_);
          DARABONBA_PTR_TO_JSON(dep_station, depStation_);
          DARABONBA_PTR_TO_JSON(dep_time, depTime_);
          DARABONBA_PTR_TO_JSON(department, department_);
          DARABONBA_PTR_TO_JSON(electronic_ticket_no, electronicTicketNo_);
          DARABONBA_PTR_TO_JSON(fee_type_show_code, feeTypeShowCode_);
          DARABONBA_PTR_TO_JSON(has_changed, hasChanged_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(invoice_date, invoiceDate_);
          DARABONBA_PTR_TO_JSON(invoice_material, invoiceMaterial_);
          DARABONBA_PTR_TO_JSON(invoice_title, invoiceTitle_);
          DARABONBA_PTR_TO_JSON(ofd_url, ofdUrl_);
          DARABONBA_PTR_TO_JSON(order_id, orderId_);
          DARABONBA_PTR_TO_JSON(origin_ticket_no, originTicketNo_);
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
          DARABONBA_PTR_TO_JSON(xml_url, xmlUrl_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
          DARABONBA_PTR_FROM_JSON(arr_station, arrStation_);
          DARABONBA_PTR_FROM_JSON(bill_date, billDate_);
          DARABONBA_PTR_FROM_JSON(coach_name, coachName_);
          DARABONBA_PTR_FROM_JSON(cost_center, costCenter_);
          DARABONBA_PTR_FROM_JSON(dep_station, depStation_);
          DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
          DARABONBA_PTR_FROM_JSON(department, department_);
          DARABONBA_PTR_FROM_JSON(electronic_ticket_no, electronicTicketNo_);
          DARABONBA_PTR_FROM_JSON(fee_type_show_code, feeTypeShowCode_);
          DARABONBA_PTR_FROM_JSON(has_changed, hasChanged_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(invoice_date, invoiceDate_);
          DARABONBA_PTR_FROM_JSON(invoice_material, invoiceMaterial_);
          DARABONBA_PTR_FROM_JSON(invoice_title, invoiceTitle_);
          DARABONBA_PTR_FROM_JSON(ofd_url, ofdUrl_);
          DARABONBA_PTR_FROM_JSON(order_id, orderId_);
          DARABONBA_PTR_FROM_JSON(origin_ticket_no, originTicketNo_);
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
          DARABONBA_PTR_FROM_JSON(xml_url, xmlUrl_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->applyId_ == nullptr
        && this->arrStation_ == nullptr && this->billDate_ == nullptr && this->coachName_ == nullptr && this->costCenter_ == nullptr && this->depStation_ == nullptr
        && this->depTime_ == nullptr && this->department_ == nullptr && this->electronicTicketNo_ == nullptr && this->feeTypeShowCode_ == nullptr && this->hasChanged_ == nullptr
        && this->id_ == nullptr && this->invoiceDate_ == nullptr && this->invoiceMaterial_ == nullptr && this->invoiceTitle_ == nullptr && this->ofdUrl_ == nullptr
        && this->orderId_ == nullptr && this->originTicketNo_ == nullptr && this->ossUrl_ == nullptr && this->passenger_ == nullptr && this->pdfUrl_ == nullptr
        && this->price_ == nullptr && this->project_ == nullptr && this->purchaserName_ == nullptr && this->purchaserTaxNo_ == nullptr && this->seat_ == nullptr
        && this->seatNo_ == nullptr && this->serialNumber_ == nullptr && this->taxAmount_ == nullptr && this->taxRate_ == nullptr && this->ticketNo_ == nullptr
        && this->trainNo_ == nullptr && this->xmlUrl_ == nullptr; };
        // applyId Field Functions 
        bool hasApplyId() const { return this->applyId_ != nullptr;};
        void deleteApplyId() { this->applyId_ = nullptr;};
        inline string getApplyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
        inline Items& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


        // arrStation Field Functions 
        bool hasArrStation() const { return this->arrStation_ != nullptr;};
        void deleteArrStation() { this->arrStation_ = nullptr;};
        inline string getArrStation() const { DARABONBA_PTR_GET_DEFAULT(arrStation_, "") };
        inline Items& setArrStation(string arrStation) { DARABONBA_PTR_SET_VALUE(arrStation_, arrStation) };


        // billDate Field Functions 
        bool hasBillDate() const { return this->billDate_ != nullptr;};
        void deleteBillDate() { this->billDate_ = nullptr;};
        inline string getBillDate() const { DARABONBA_PTR_GET_DEFAULT(billDate_, "") };
        inline Items& setBillDate(string billDate) { DARABONBA_PTR_SET_VALUE(billDate_, billDate) };


        // coachName Field Functions 
        bool hasCoachName() const { return this->coachName_ != nullptr;};
        void deleteCoachName() { this->coachName_ = nullptr;};
        inline string getCoachName() const { DARABONBA_PTR_GET_DEFAULT(coachName_, "") };
        inline Items& setCoachName(string coachName) { DARABONBA_PTR_SET_VALUE(coachName_, coachName) };


        // costCenter Field Functions 
        bool hasCostCenter() const { return this->costCenter_ != nullptr;};
        void deleteCostCenter() { this->costCenter_ = nullptr;};
        inline string getCostCenter() const { DARABONBA_PTR_GET_DEFAULT(costCenter_, "") };
        inline Items& setCostCenter(string costCenter) { DARABONBA_PTR_SET_VALUE(costCenter_, costCenter) };


        // depStation Field Functions 
        bool hasDepStation() const { return this->depStation_ != nullptr;};
        void deleteDepStation() { this->depStation_ = nullptr;};
        inline string getDepStation() const { DARABONBA_PTR_GET_DEFAULT(depStation_, "") };
        inline Items& setDepStation(string depStation) { DARABONBA_PTR_SET_VALUE(depStation_, depStation) };


        // depTime Field Functions 
        bool hasDepTime() const { return this->depTime_ != nullptr;};
        void deleteDepTime() { this->depTime_ = nullptr;};
        inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
        inline Items& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


        // department Field Functions 
        bool hasDepartment() const { return this->department_ != nullptr;};
        void deleteDepartment() { this->department_ = nullptr;};
        inline string getDepartment() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
        inline Items& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


        // electronicTicketNo Field Functions 
        bool hasElectronicTicketNo() const { return this->electronicTicketNo_ != nullptr;};
        void deleteElectronicTicketNo() { this->electronicTicketNo_ = nullptr;};
        inline string getElectronicTicketNo() const { DARABONBA_PTR_GET_DEFAULT(electronicTicketNo_, "") };
        inline Items& setElectronicTicketNo(string electronicTicketNo) { DARABONBA_PTR_SET_VALUE(electronicTicketNo_, electronicTicketNo) };


        // feeTypeShowCode Field Functions 
        bool hasFeeTypeShowCode() const { return this->feeTypeShowCode_ != nullptr;};
        void deleteFeeTypeShowCode() { this->feeTypeShowCode_ = nullptr;};
        inline int32_t getFeeTypeShowCode() const { DARABONBA_PTR_GET_DEFAULT(feeTypeShowCode_, 0) };
        inline Items& setFeeTypeShowCode(int32_t feeTypeShowCode) { DARABONBA_PTR_SET_VALUE(feeTypeShowCode_, feeTypeShowCode) };


        // hasChanged Field Functions 
        bool hasHasChanged() const { return this->hasChanged_ != nullptr;};
        void deleteHasChanged() { this->hasChanged_ = nullptr;};
        inline bool getHasChanged() const { DARABONBA_PTR_GET_DEFAULT(hasChanged_, false) };
        inline Items& setHasChanged(bool hasChanged) { DARABONBA_PTR_SET_VALUE(hasChanged_, hasChanged) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Items& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // invoiceDate Field Functions 
        bool hasInvoiceDate() const { return this->invoiceDate_ != nullptr;};
        void deleteInvoiceDate() { this->invoiceDate_ = nullptr;};
        inline string getInvoiceDate() const { DARABONBA_PTR_GET_DEFAULT(invoiceDate_, "") };
        inline Items& setInvoiceDate(string invoiceDate) { DARABONBA_PTR_SET_VALUE(invoiceDate_, invoiceDate) };


        // invoiceMaterial Field Functions 
        bool hasInvoiceMaterial() const { return this->invoiceMaterial_ != nullptr;};
        void deleteInvoiceMaterial() { this->invoiceMaterial_ = nullptr;};
        inline int32_t getInvoiceMaterial() const { DARABONBA_PTR_GET_DEFAULT(invoiceMaterial_, 0) };
        inline Items& setInvoiceMaterial(int32_t invoiceMaterial) { DARABONBA_PTR_SET_VALUE(invoiceMaterial_, invoiceMaterial) };


        // invoiceTitle Field Functions 
        bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
        void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
        inline string getInvoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
        inline Items& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


        // ofdUrl Field Functions 
        bool hasOfdUrl() const { return this->ofdUrl_ != nullptr;};
        void deleteOfdUrl() { this->ofdUrl_ = nullptr;};
        inline string getOfdUrl() const { DARABONBA_PTR_GET_DEFAULT(ofdUrl_, "") };
        inline Items& setOfdUrl(string ofdUrl) { DARABONBA_PTR_SET_VALUE(ofdUrl_, ofdUrl) };


        // orderId Field Functions 
        bool hasOrderId() const { return this->orderId_ != nullptr;};
        void deleteOrderId() { this->orderId_ = nullptr;};
        inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
        inline Items& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


        // originTicketNo Field Functions 
        bool hasOriginTicketNo() const { return this->originTicketNo_ != nullptr;};
        void deleteOriginTicketNo() { this->originTicketNo_ = nullptr;};
        inline string getOriginTicketNo() const { DARABONBA_PTR_GET_DEFAULT(originTicketNo_, "") };
        inline Items& setOriginTicketNo(string originTicketNo) { DARABONBA_PTR_SET_VALUE(originTicketNo_, originTicketNo) };


        // ossUrl Field Functions 
        bool hasOssUrl() const { return this->ossUrl_ != nullptr;};
        void deleteOssUrl() { this->ossUrl_ = nullptr;};
        inline string getOssUrl() const { DARABONBA_PTR_GET_DEFAULT(ossUrl_, "") };
        inline Items& setOssUrl(string ossUrl) { DARABONBA_PTR_SET_VALUE(ossUrl_, ossUrl) };


        // passenger Field Functions 
        bool hasPassenger() const { return this->passenger_ != nullptr;};
        void deletePassenger() { this->passenger_ = nullptr;};
        inline string getPassenger() const { DARABONBA_PTR_GET_DEFAULT(passenger_, "") };
        inline Items& setPassenger(string passenger) { DARABONBA_PTR_SET_VALUE(passenger_, passenger) };


        // pdfUrl Field Functions 
        bool hasPdfUrl() const { return this->pdfUrl_ != nullptr;};
        void deletePdfUrl() { this->pdfUrl_ = nullptr;};
        inline string getPdfUrl() const { DARABONBA_PTR_GET_DEFAULT(pdfUrl_, "") };
        inline Items& setPdfUrl(string pdfUrl) { DARABONBA_PTR_SET_VALUE(pdfUrl_, pdfUrl) };


        // price Field Functions 
        bool hasPrice() const { return this->price_ != nullptr;};
        void deletePrice() { this->price_ = nullptr;};
        inline string getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, "") };
        inline Items& setPrice(string price) { DARABONBA_PTR_SET_VALUE(price_, price) };


        // project Field Functions 
        bool hasProject() const { return this->project_ != nullptr;};
        void deleteProject() { this->project_ = nullptr;};
        inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
        inline Items& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


        // purchaserName Field Functions 
        bool hasPurchaserName() const { return this->purchaserName_ != nullptr;};
        void deletePurchaserName() { this->purchaserName_ = nullptr;};
        inline string getPurchaserName() const { DARABONBA_PTR_GET_DEFAULT(purchaserName_, "") };
        inline Items& setPurchaserName(string purchaserName) { DARABONBA_PTR_SET_VALUE(purchaserName_, purchaserName) };


        // purchaserTaxNo Field Functions 
        bool hasPurchaserTaxNo() const { return this->purchaserTaxNo_ != nullptr;};
        void deletePurchaserTaxNo() { this->purchaserTaxNo_ = nullptr;};
        inline string getPurchaserTaxNo() const { DARABONBA_PTR_GET_DEFAULT(purchaserTaxNo_, "") };
        inline Items& setPurchaserTaxNo(string purchaserTaxNo) { DARABONBA_PTR_SET_VALUE(purchaserTaxNo_, purchaserTaxNo) };


        // seat Field Functions 
        bool hasSeat() const { return this->seat_ != nullptr;};
        void deleteSeat() { this->seat_ = nullptr;};
        inline string getSeat() const { DARABONBA_PTR_GET_DEFAULT(seat_, "") };
        inline Items& setSeat(string seat) { DARABONBA_PTR_SET_VALUE(seat_, seat) };


        // seatNo Field Functions 
        bool hasSeatNo() const { return this->seatNo_ != nullptr;};
        void deleteSeatNo() { this->seatNo_ = nullptr;};
        inline string getSeatNo() const { DARABONBA_PTR_GET_DEFAULT(seatNo_, "") };
        inline Items& setSeatNo(string seatNo) { DARABONBA_PTR_SET_VALUE(seatNo_, seatNo) };


        // serialNumber Field Functions 
        bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
        void deleteSerialNumber() { this->serialNumber_ = nullptr;};
        inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
        inline Items& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


        // taxAmount Field Functions 
        bool hasTaxAmount() const { return this->taxAmount_ != nullptr;};
        void deleteTaxAmount() { this->taxAmount_ = nullptr;};
        inline string getTaxAmount() const { DARABONBA_PTR_GET_DEFAULT(taxAmount_, "") };
        inline Items& setTaxAmount(string taxAmount) { DARABONBA_PTR_SET_VALUE(taxAmount_, taxAmount) };


        // taxRate Field Functions 
        bool hasTaxRate() const { return this->taxRate_ != nullptr;};
        void deleteTaxRate() { this->taxRate_ = nullptr;};
        inline string getTaxRate() const { DARABONBA_PTR_GET_DEFAULT(taxRate_, "") };
        inline Items& setTaxRate(string taxRate) { DARABONBA_PTR_SET_VALUE(taxRate_, taxRate) };


        // ticketNo Field Functions 
        bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
        void deleteTicketNo() { this->ticketNo_ = nullptr;};
        inline string getTicketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
        inline Items& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


        // trainNo Field Functions 
        bool hasTrainNo() const { return this->trainNo_ != nullptr;};
        void deleteTrainNo() { this->trainNo_ = nullptr;};
        inline string getTrainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
        inline Items& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


        // xmlUrl Field Functions 
        bool hasXmlUrl() const { return this->xmlUrl_ != nullptr;};
        void deleteXmlUrl() { this->xmlUrl_ = nullptr;};
        inline string getXmlUrl() const { DARABONBA_PTR_GET_DEFAULT(xmlUrl_, "") };
        inline Items& setXmlUrl(string xmlUrl) { DARABONBA_PTR_SET_VALUE(xmlUrl_, xmlUrl) };


      protected:
        shared_ptr<string> applyId_ {};
        shared_ptr<string> arrStation_ {};
        shared_ptr<string> billDate_ {};
        shared_ptr<string> coachName_ {};
        shared_ptr<string> costCenter_ {};
        shared_ptr<string> depStation_ {};
        shared_ptr<string> depTime_ {};
        shared_ptr<string> department_ {};
        shared_ptr<string> electronicTicketNo_ {};
        shared_ptr<int32_t> feeTypeShowCode_ {};
        shared_ptr<bool> hasChanged_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> invoiceDate_ {};
        shared_ptr<int32_t> invoiceMaterial_ {};
        shared_ptr<string> invoiceTitle_ {};
        shared_ptr<string> ofdUrl_ {};
        shared_ptr<int64_t> orderId_ {};
        shared_ptr<string> originTicketNo_ {};
        shared_ptr<string> ossUrl_ {};
        shared_ptr<string> passenger_ {};
        shared_ptr<string> pdfUrl_ {};
        shared_ptr<string> price_ {};
        shared_ptr<string> project_ {};
        shared_ptr<string> purchaserName_ {};
        shared_ptr<string> purchaserTaxNo_ {};
        shared_ptr<string> seat_ {};
        shared_ptr<string> seatNo_ {};
        shared_ptr<string> serialNumber_ {};
        shared_ptr<string> taxAmount_ {};
        shared_ptr<string> taxRate_ {};
        // 取票号
        shared_ptr<string> ticketNo_ {};
        // 车次
        shared_ptr<string> trainNo_ {};
        shared_ptr<string> xmlUrl_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->totalPage_ == nullptr && this->totalSize_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Module::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Module::Items>) };
      inline vector<Module::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Module::Items>) };
      inline Module& setItems(const vector<Module::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Module& setItems(vector<Module::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
      inline Module& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Module& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalPage Field Functions 
      bool hasTotalPage() const { return this->totalPage_ != nullptr;};
      void deleteTotalPage() { this->totalPage_ = nullptr;};
      inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
      inline Module& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Module& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      shared_ptr<vector<Module::Items>> items_ {};
      shared_ptr<int32_t> pageNo_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalPage_ {};
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TrainTicketScanQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TrainTicketScanQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const TrainTicketScanQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, TrainTicketScanQueryResponseBody::Module) };
    inline TrainTicketScanQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, TrainTicketScanQueryResponseBody::Module) };
    inline TrainTicketScanQueryResponseBody& setModule(const TrainTicketScanQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline TrainTicketScanQueryResponseBody& setModule(TrainTicketScanQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TrainTicketScanQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TrainTicketScanQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline TrainTicketScanQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<TrainTicketScanQueryResponseBody::Module> module_ {};
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    // traceId
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
