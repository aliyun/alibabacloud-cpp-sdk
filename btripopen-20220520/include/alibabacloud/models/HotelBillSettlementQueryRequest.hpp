// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELBILLSETTLEMENTQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HOTELBILLSETTLEMENTQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelBillSettlementQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelBillSettlementQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(bill_batch, billBatch_);
      DARABONBA_PTR_TO_JSON(bill_record_time_end, billRecordTimeEnd_);
      DARABONBA_PTR_TO_JSON(bill_record_time_start, billRecordTimeStart_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(page_no, pageNo_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
      DARABONBA_PTR_TO_JSON(period_end, periodEnd_);
      DARABONBA_PTR_TO_JSON(period_start, periodStart_);
      DARABONBA_PTR_TO_JSON(scroll_id, scrollId_);
      DARABONBA_PTR_TO_JSON(scroll_mod, scrollMod_);
    };
    friend void from_json(const Darabonba::Json& j, HotelBillSettlementQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(bill_batch, billBatch_);
      DARABONBA_PTR_FROM_JSON(bill_record_time_end, billRecordTimeEnd_);
      DARABONBA_PTR_FROM_JSON(bill_record_time_start, billRecordTimeStart_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(page_no, pageNo_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
      DARABONBA_PTR_FROM_JSON(period_end, periodEnd_);
      DARABONBA_PTR_FROM_JSON(period_start, periodStart_);
      DARABONBA_PTR_FROM_JSON(scroll_id, scrollId_);
      DARABONBA_PTR_FROM_JSON(scroll_mod, scrollMod_);
    };
    HotelBillSettlementQueryRequest() = default ;
    HotelBillSettlementQueryRequest(const HotelBillSettlementQueryRequest &) = default ;
    HotelBillSettlementQueryRequest(HotelBillSettlementQueryRequest &&) = default ;
    HotelBillSettlementQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelBillSettlementQueryRequest() = default ;
    HotelBillSettlementQueryRequest& operator=(const HotelBillSettlementQueryRequest &) = default ;
    HotelBillSettlementQueryRequest& operator=(HotelBillSettlementQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applyId_ == nullptr
        && this->billBatch_ == nullptr && this->billRecordTimeEnd_ == nullptr && this->billRecordTimeStart_ == nullptr && this->orderId_ == nullptr && this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->periodEnd_ == nullptr && this->periodStart_ == nullptr && this->scrollId_ == nullptr && this->scrollMod_ == nullptr; };
    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline string getApplyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
    inline HotelBillSettlementQueryRequest& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // billBatch Field Functions 
    bool hasBillBatch() const { return this->billBatch_ != nullptr;};
    void deleteBillBatch() { this->billBatch_ = nullptr;};
    inline string getBillBatch() const { DARABONBA_PTR_GET_DEFAULT(billBatch_, "") };
    inline HotelBillSettlementQueryRequest& setBillBatch(string billBatch) { DARABONBA_PTR_SET_VALUE(billBatch_, billBatch) };


    // billRecordTimeEnd Field Functions 
    bool hasBillRecordTimeEnd() const { return this->billRecordTimeEnd_ != nullptr;};
    void deleteBillRecordTimeEnd() { this->billRecordTimeEnd_ = nullptr;};
    inline string getBillRecordTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(billRecordTimeEnd_, "") };
    inline HotelBillSettlementQueryRequest& setBillRecordTimeEnd(string billRecordTimeEnd) { DARABONBA_PTR_SET_VALUE(billRecordTimeEnd_, billRecordTimeEnd) };


    // billRecordTimeStart Field Functions 
    bool hasBillRecordTimeStart() const { return this->billRecordTimeStart_ != nullptr;};
    void deleteBillRecordTimeStart() { this->billRecordTimeStart_ = nullptr;};
    inline string getBillRecordTimeStart() const { DARABONBA_PTR_GET_DEFAULT(billRecordTimeStart_, "") };
    inline HotelBillSettlementQueryRequest& setBillRecordTimeStart(string billRecordTimeStart) { DARABONBA_PTR_SET_VALUE(billRecordTimeStart_, billRecordTimeStart) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline HotelBillSettlementQueryRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline HotelBillSettlementQueryRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline HotelBillSettlementQueryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // periodEnd Field Functions 
    bool hasPeriodEnd() const { return this->periodEnd_ != nullptr;};
    void deletePeriodEnd() { this->periodEnd_ = nullptr;};
    inline string getPeriodEnd() const { DARABONBA_PTR_GET_DEFAULT(periodEnd_, "") };
    inline HotelBillSettlementQueryRequest& setPeriodEnd(string periodEnd) { DARABONBA_PTR_SET_VALUE(periodEnd_, periodEnd) };


    // periodStart Field Functions 
    bool hasPeriodStart() const { return this->periodStart_ != nullptr;};
    void deletePeriodStart() { this->periodStart_ = nullptr;};
    inline string getPeriodStart() const { DARABONBA_PTR_GET_DEFAULT(periodStart_, "") };
    inline HotelBillSettlementQueryRequest& setPeriodStart(string periodStart) { DARABONBA_PTR_SET_VALUE(periodStart_, periodStart) };


    // scrollId Field Functions 
    bool hasScrollId() const { return this->scrollId_ != nullptr;};
    void deleteScrollId() { this->scrollId_ = nullptr;};
    inline string getScrollId() const { DARABONBA_PTR_GET_DEFAULT(scrollId_, "") };
    inline HotelBillSettlementQueryRequest& setScrollId(string scrollId) { DARABONBA_PTR_SET_VALUE(scrollId_, scrollId) };


    // scrollMod Field Functions 
    bool hasScrollMod() const { return this->scrollMod_ != nullptr;};
    void deleteScrollMod() { this->scrollMod_ = nullptr;};
    inline bool getScrollMod() const { DARABONBA_PTR_GET_DEFAULT(scrollMod_, false) };
    inline HotelBillSettlementQueryRequest& setScrollMod(bool scrollMod) { DARABONBA_PTR_SET_VALUE(scrollMod_, scrollMod) };


  protected:
    shared_ptr<string> applyId_ {};
    shared_ptr<string> billBatch_ {};
    shared_ptr<string> billRecordTimeEnd_ {};
    shared_ptr<string> billRecordTimeStart_ {};
    shared_ptr<int64_t> orderId_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageNo_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> periodEnd_ {};
    shared_ptr<string> periodStart_ {};
    shared_ptr<string> scrollId_ {};
    shared_ptr<bool> scrollMod_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
