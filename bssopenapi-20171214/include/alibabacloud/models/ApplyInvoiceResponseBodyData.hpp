// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYINVOICERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_APPLYINVOICERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class ApplyInvoiceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyInvoiceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(InvoiceApplyId, invoiceApplyId_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyInvoiceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(InvoiceApplyId, invoiceApplyId_);
    };
    ApplyInvoiceResponseBodyData() = default ;
    ApplyInvoiceResponseBodyData(const ApplyInvoiceResponseBodyData &) = default ;
    ApplyInvoiceResponseBodyData(ApplyInvoiceResponseBodyData &&) = default ;
    ApplyInvoiceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyInvoiceResponseBodyData() = default ;
    ApplyInvoiceResponseBodyData& operator=(const ApplyInvoiceResponseBodyData &) = default ;
    ApplyInvoiceResponseBodyData& operator=(ApplyInvoiceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->invoiceApplyId_ != nullptr; };
    // invoiceApplyId Field Functions 
    bool hasInvoiceApplyId() const { return this->invoiceApplyId_ != nullptr;};
    void deleteInvoiceApplyId() { this->invoiceApplyId_ = nullptr;};
    inline int64_t invoiceApplyId() const { DARABONBA_PTR_GET_DEFAULT(invoiceApplyId_, 0L) };
    inline ApplyInvoiceResponseBodyData& setInvoiceApplyId(int64_t invoiceApplyId) { DARABONBA_PTR_SET_VALUE(invoiceApplyId_, invoiceApplyId) };


  protected:
    // The ID of the application.
    std::shared_ptr<int64_t> invoiceApplyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
