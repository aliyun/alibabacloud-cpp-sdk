// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VASBILLSETTLEMENTQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VASBILLSETTLEMENTQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class VasBillSettlementQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VasBillSettlementQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(bill_batch, billBatch_);
      DARABONBA_PTR_TO_JSON(cooperator_id, cooperatorId_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(page_no, pageNo_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
      DARABONBA_PTR_TO_JSON(period_end, periodEnd_);
      DARABONBA_PTR_TO_JSON(period_start, periodStart_);
      DARABONBA_PTR_TO_JSON(scroll_id, scrollId_);
      DARABONBA_PTR_TO_JSON(scroll_mod, scrollMod_);
    };
    friend void from_json(const Darabonba::Json& j, VasBillSettlementQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(bill_batch, billBatch_);
      DARABONBA_PTR_FROM_JSON(cooperator_id, cooperatorId_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(page_no, pageNo_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
      DARABONBA_PTR_FROM_JSON(period_end, periodEnd_);
      DARABONBA_PTR_FROM_JSON(period_start, periodStart_);
      DARABONBA_PTR_FROM_JSON(scroll_id, scrollId_);
      DARABONBA_PTR_FROM_JSON(scroll_mod, scrollMod_);
    };
    VasBillSettlementQueryRequest() = default ;
    VasBillSettlementQueryRequest(const VasBillSettlementQueryRequest &) = default ;
    VasBillSettlementQueryRequest(VasBillSettlementQueryRequest &&) = default ;
    VasBillSettlementQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VasBillSettlementQueryRequest() = default ;
    VasBillSettlementQueryRequest& operator=(const VasBillSettlementQueryRequest &) = default ;
    VasBillSettlementQueryRequest& operator=(VasBillSettlementQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billBatch_ != nullptr
        && this->cooperatorId_ != nullptr && this->orderId_ != nullptr && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->periodEnd_ != nullptr
        && this->periodStart_ != nullptr && this->scrollId_ != nullptr && this->scrollMod_ != nullptr; };
    // billBatch Field Functions 
    bool hasBillBatch() const { return this->billBatch_ != nullptr;};
    void deleteBillBatch() { this->billBatch_ = nullptr;};
    inline string billBatch() const { DARABONBA_PTR_GET_DEFAULT(billBatch_, "") };
    inline VasBillSettlementQueryRequest& setBillBatch(string billBatch) { DARABONBA_PTR_SET_VALUE(billBatch_, billBatch) };


    // cooperatorId Field Functions 
    bool hasCooperatorId() const { return this->cooperatorId_ != nullptr;};
    void deleteCooperatorId() { this->cooperatorId_ = nullptr;};
    inline string cooperatorId() const { DARABONBA_PTR_GET_DEFAULT(cooperatorId_, "") };
    inline VasBillSettlementQueryRequest& setCooperatorId(string cooperatorId) { DARABONBA_PTR_SET_VALUE(cooperatorId_, cooperatorId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline VasBillSettlementQueryRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline VasBillSettlementQueryRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline VasBillSettlementQueryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // periodEnd Field Functions 
    bool hasPeriodEnd() const { return this->periodEnd_ != nullptr;};
    void deletePeriodEnd() { this->periodEnd_ = nullptr;};
    inline string periodEnd() const { DARABONBA_PTR_GET_DEFAULT(periodEnd_, "") };
    inline VasBillSettlementQueryRequest& setPeriodEnd(string periodEnd) { DARABONBA_PTR_SET_VALUE(periodEnd_, periodEnd) };


    // periodStart Field Functions 
    bool hasPeriodStart() const { return this->periodStart_ != nullptr;};
    void deletePeriodStart() { this->periodStart_ = nullptr;};
    inline string periodStart() const { DARABONBA_PTR_GET_DEFAULT(periodStart_, "") };
    inline VasBillSettlementQueryRequest& setPeriodStart(string periodStart) { DARABONBA_PTR_SET_VALUE(periodStart_, periodStart) };


    // scrollId Field Functions 
    bool hasScrollId() const { return this->scrollId_ != nullptr;};
    void deleteScrollId() { this->scrollId_ = nullptr;};
    inline string scrollId() const { DARABONBA_PTR_GET_DEFAULT(scrollId_, "") };
    inline VasBillSettlementQueryRequest& setScrollId(string scrollId) { DARABONBA_PTR_SET_VALUE(scrollId_, scrollId) };


    // scrollMod Field Functions 
    bool hasScrollMod() const { return this->scrollMod_ != nullptr;};
    void deleteScrollMod() { this->scrollMod_ = nullptr;};
    inline bool scrollMod() const { DARABONBA_PTR_GET_DEFAULT(scrollMod_, false) };
    inline VasBillSettlementQueryRequest& setScrollMod(bool scrollMod) { DARABONBA_PTR_SET_VALUE(scrollMod_, scrollMod) };


  protected:
    std::shared_ptr<string> billBatch_ = nullptr;
    std::shared_ptr<string> cooperatorId_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> periodEnd_ = nullptr;
    std::shared_ptr<string> periodStart_ = nullptr;
    std::shared_ptr<string> scrollId_ = nullptr;
    std::shared_ptr<bool> scrollMod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
