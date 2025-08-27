// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTITINERARYSCANQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTITINERARYSCANQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightItineraryScanQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightItineraryScanQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(bill_date, billDate_);
      DARABONBA_PTR_TO_JSON(bill_id, billId_);
      DARABONBA_PTR_TO_JSON(invoice_sub_task_id, invoiceSubTaskId_);
      DARABONBA_PTR_TO_JSON(itinerary_num, itineraryNum_);
      DARABONBA_PTR_TO_JSON(page_no, pageNo_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
      DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
    };
    friend void from_json(const Darabonba::Json& j, FlightItineraryScanQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(bill_date, billDate_);
      DARABONBA_PTR_FROM_JSON(bill_id, billId_);
      DARABONBA_PTR_FROM_JSON(invoice_sub_task_id, invoiceSubTaskId_);
      DARABONBA_PTR_FROM_JSON(itinerary_num, itineraryNum_);
      DARABONBA_PTR_FROM_JSON(page_no, pageNo_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
      DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
    };
    FlightItineraryScanQueryRequest() = default ;
    FlightItineraryScanQueryRequest(const FlightItineraryScanQueryRequest &) = default ;
    FlightItineraryScanQueryRequest(FlightItineraryScanQueryRequest &&) = default ;
    FlightItineraryScanQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightItineraryScanQueryRequest() = default ;
    FlightItineraryScanQueryRequest& operator=(const FlightItineraryScanQueryRequest &) = default ;
    FlightItineraryScanQueryRequest& operator=(FlightItineraryScanQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billDate_ != nullptr
        && this->billId_ != nullptr && this->invoiceSubTaskId_ != nullptr && this->itineraryNum_ != nullptr && this->pageNo_ != nullptr && this->pageSize_ != nullptr
        && this->ticketNo_ != nullptr; };
    // billDate Field Functions 
    bool hasBillDate() const { return this->billDate_ != nullptr;};
    void deleteBillDate() { this->billDate_ = nullptr;};
    inline string billDate() const { DARABONBA_PTR_GET_DEFAULT(billDate_, "") };
    inline FlightItineraryScanQueryRequest& setBillDate(string billDate) { DARABONBA_PTR_SET_VALUE(billDate_, billDate) };


    // billId Field Functions 
    bool hasBillId() const { return this->billId_ != nullptr;};
    void deleteBillId() { this->billId_ = nullptr;};
    inline int64_t billId() const { DARABONBA_PTR_GET_DEFAULT(billId_, 0L) };
    inline FlightItineraryScanQueryRequest& setBillId(int64_t billId) { DARABONBA_PTR_SET_VALUE(billId_, billId) };


    // invoiceSubTaskId Field Functions 
    bool hasInvoiceSubTaskId() const { return this->invoiceSubTaskId_ != nullptr;};
    void deleteInvoiceSubTaskId() { this->invoiceSubTaskId_ = nullptr;};
    inline int64_t invoiceSubTaskId() const { DARABONBA_PTR_GET_DEFAULT(invoiceSubTaskId_, 0L) };
    inline FlightItineraryScanQueryRequest& setInvoiceSubTaskId(int64_t invoiceSubTaskId) { DARABONBA_PTR_SET_VALUE(invoiceSubTaskId_, invoiceSubTaskId) };


    // itineraryNum Field Functions 
    bool hasItineraryNum() const { return this->itineraryNum_ != nullptr;};
    void deleteItineraryNum() { this->itineraryNum_ = nullptr;};
    inline string itineraryNum() const { DARABONBA_PTR_GET_DEFAULT(itineraryNum_, "") };
    inline FlightItineraryScanQueryRequest& setItineraryNum(string itineraryNum) { DARABONBA_PTR_SET_VALUE(itineraryNum_, itineraryNum) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline FlightItineraryScanQueryRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline FlightItineraryScanQueryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // ticketNo Field Functions 
    bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
    void deleteTicketNo() { this->ticketNo_ = nullptr;};
    inline string ticketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
    inline FlightItineraryScanQueryRequest& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


  protected:
    std::shared_ptr<string> billDate_ = nullptr;
    std::shared_ptr<int64_t> billId_ = nullptr;
    std::shared_ptr<int64_t> invoiceSubTaskId_ = nullptr;
    std::shared_ptr<string> itineraryNum_ = nullptr;
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> ticketNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
