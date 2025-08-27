// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYINVOICETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYINVOICETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ApplyInvoiceTaskRequestInvoiceTaskList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyInvoiceTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyInvoiceTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(bill_date, billDate_);
      DARABONBA_PTR_TO_JSON(invoice_task_list, invoiceTaskList_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyInvoiceTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(bill_date, billDate_);
      DARABONBA_PTR_FROM_JSON(invoice_task_list, invoiceTaskList_);
    };
    ApplyInvoiceTaskRequest() = default ;
    ApplyInvoiceTaskRequest(const ApplyInvoiceTaskRequest &) = default ;
    ApplyInvoiceTaskRequest(ApplyInvoiceTaskRequest &&) = default ;
    ApplyInvoiceTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyInvoiceTaskRequest() = default ;
    ApplyInvoiceTaskRequest& operator=(const ApplyInvoiceTaskRequest &) = default ;
    ApplyInvoiceTaskRequest& operator=(ApplyInvoiceTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billDate_ != nullptr
        && this->invoiceTaskList_ != nullptr; };
    // billDate Field Functions 
    bool hasBillDate() const { return this->billDate_ != nullptr;};
    void deleteBillDate() { this->billDate_ = nullptr;};
    inline string billDate() const { DARABONBA_PTR_GET_DEFAULT(billDate_, "") };
    inline ApplyInvoiceTaskRequest& setBillDate(string billDate) { DARABONBA_PTR_SET_VALUE(billDate_, billDate) };


    // invoiceTaskList Field Functions 
    bool hasInvoiceTaskList() const { return this->invoiceTaskList_ != nullptr;};
    void deleteInvoiceTaskList() { this->invoiceTaskList_ = nullptr;};
    inline const vector<ApplyInvoiceTaskRequestInvoiceTaskList> & invoiceTaskList() const { DARABONBA_PTR_GET_CONST(invoiceTaskList_, vector<ApplyInvoiceTaskRequestInvoiceTaskList>) };
    inline vector<ApplyInvoiceTaskRequestInvoiceTaskList> invoiceTaskList() { DARABONBA_PTR_GET(invoiceTaskList_, vector<ApplyInvoiceTaskRequestInvoiceTaskList>) };
    inline ApplyInvoiceTaskRequest& setInvoiceTaskList(const vector<ApplyInvoiceTaskRequestInvoiceTaskList> & invoiceTaskList) { DARABONBA_PTR_SET_VALUE(invoiceTaskList_, invoiceTaskList) };
    inline ApplyInvoiceTaskRequest& setInvoiceTaskList(vector<ApplyInvoiceTaskRequestInvoiceTaskList> && invoiceTaskList) { DARABONBA_PTR_SET_RVALUE(invoiceTaskList_, invoiceTaskList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> billDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<ApplyInvoiceTaskRequestInvoiceTaskList>> invoiceTaskList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
