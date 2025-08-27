// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYINVOICETASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYINVOICETASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyInvoiceTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyInvoiceTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(bill_date, billDate_);
      DARABONBA_PTR_TO_JSON(invoice_task_list, invoiceTaskListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyInvoiceTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(bill_date, billDate_);
      DARABONBA_PTR_FROM_JSON(invoice_task_list, invoiceTaskListShrink_);
    };
    ApplyInvoiceTaskShrinkRequest() = default ;
    ApplyInvoiceTaskShrinkRequest(const ApplyInvoiceTaskShrinkRequest &) = default ;
    ApplyInvoiceTaskShrinkRequest(ApplyInvoiceTaskShrinkRequest &&) = default ;
    ApplyInvoiceTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyInvoiceTaskShrinkRequest() = default ;
    ApplyInvoiceTaskShrinkRequest& operator=(const ApplyInvoiceTaskShrinkRequest &) = default ;
    ApplyInvoiceTaskShrinkRequest& operator=(ApplyInvoiceTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billDate_ != nullptr
        && this->invoiceTaskListShrink_ != nullptr; };
    // billDate Field Functions 
    bool hasBillDate() const { return this->billDate_ != nullptr;};
    void deleteBillDate() { this->billDate_ = nullptr;};
    inline string billDate() const { DARABONBA_PTR_GET_DEFAULT(billDate_, "") };
    inline ApplyInvoiceTaskShrinkRequest& setBillDate(string billDate) { DARABONBA_PTR_SET_VALUE(billDate_, billDate) };


    // invoiceTaskListShrink Field Functions 
    bool hasInvoiceTaskListShrink() const { return this->invoiceTaskListShrink_ != nullptr;};
    void deleteInvoiceTaskListShrink() { this->invoiceTaskListShrink_ = nullptr;};
    inline string invoiceTaskListShrink() const { DARABONBA_PTR_GET_DEFAULT(invoiceTaskListShrink_, "") };
    inline ApplyInvoiceTaskShrinkRequest& setInvoiceTaskListShrink(string invoiceTaskListShrink) { DARABONBA_PTR_SET_VALUE(invoiceTaskListShrink_, invoiceTaskListShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> billDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> invoiceTaskListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
