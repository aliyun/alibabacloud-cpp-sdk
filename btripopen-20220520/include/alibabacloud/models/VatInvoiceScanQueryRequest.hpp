// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VATINVOICESCANQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VATINVOICESCANQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class VatInvoiceScanQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VatInvoiceScanQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(bill_date, billDate_);
      DARABONBA_PTR_TO_JSON(bill_id, billId_);
      DARABONBA_PTR_TO_JSON(invoice_sub_task_id, invoiceSubTaskId_);
      DARABONBA_PTR_TO_JSON(page_no, pageNo_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, VatInvoiceScanQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(bill_date, billDate_);
      DARABONBA_PTR_FROM_JSON(bill_id, billId_);
      DARABONBA_PTR_FROM_JSON(invoice_sub_task_id, invoiceSubTaskId_);
      DARABONBA_PTR_FROM_JSON(page_no, pageNo_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
    };
    VatInvoiceScanQueryRequest() = default ;
    VatInvoiceScanQueryRequest(const VatInvoiceScanQueryRequest &) = default ;
    VatInvoiceScanQueryRequest(VatInvoiceScanQueryRequest &&) = default ;
    VatInvoiceScanQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VatInvoiceScanQueryRequest() = default ;
    VatInvoiceScanQueryRequest& operator=(const VatInvoiceScanQueryRequest &) = default ;
    VatInvoiceScanQueryRequest& operator=(VatInvoiceScanQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billDate_ != nullptr
        && this->billId_ != nullptr && this->invoiceSubTaskId_ != nullptr && this->pageNo_ != nullptr && this->pageSize_ != nullptr; };
    // billDate Field Functions 
    bool hasBillDate() const { return this->billDate_ != nullptr;};
    void deleteBillDate() { this->billDate_ = nullptr;};
    inline string billDate() const { DARABONBA_PTR_GET_DEFAULT(billDate_, "") };
    inline VatInvoiceScanQueryRequest& setBillDate(string billDate) { DARABONBA_PTR_SET_VALUE(billDate_, billDate) };


    // billId Field Functions 
    bool hasBillId() const { return this->billId_ != nullptr;};
    void deleteBillId() { this->billId_ = nullptr;};
    inline int64_t billId() const { DARABONBA_PTR_GET_DEFAULT(billId_, 0L) };
    inline VatInvoiceScanQueryRequest& setBillId(int64_t billId) { DARABONBA_PTR_SET_VALUE(billId_, billId) };


    // invoiceSubTaskId Field Functions 
    bool hasInvoiceSubTaskId() const { return this->invoiceSubTaskId_ != nullptr;};
    void deleteInvoiceSubTaskId() { this->invoiceSubTaskId_ = nullptr;};
    inline int64_t invoiceSubTaskId() const { DARABONBA_PTR_GET_DEFAULT(invoiceSubTaskId_, 0L) };
    inline VatInvoiceScanQueryRequest& setInvoiceSubTaskId(int64_t invoiceSubTaskId) { DARABONBA_PTR_SET_VALUE(invoiceSubTaskId_, invoiceSubTaskId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline VatInvoiceScanQueryRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline VatInvoiceScanQueryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> billDate_ = nullptr;
    std::shared_ptr<int64_t> billId_ = nullptr;
    std::shared_ptr<int64_t> invoiceSubTaskId_ = nullptr;
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
