// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEQUOTAINVOICERESPONSEBODYDATACONTENT_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEQUOTAINVOICERESPONSEBODYDATACONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeQuotaInvoiceResponseBodyDataContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeQuotaInvoiceResponseBodyDataContent& obj) { 
      DARABONBA_PTR_TO_JSON(InvoiceAmount, invoiceAmount_);
      DARABONBA_PTR_TO_JSON(InvoiceCode, invoiceCode_);
      DARABONBA_PTR_TO_JSON(InvoiceDetails, invoiceDetails_);
      DARABONBA_PTR_TO_JSON(InvoiceNo, invoiceNo_);
      DARABONBA_PTR_TO_JSON(SumAmount, sumAmount_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeQuotaInvoiceResponseBodyDataContent& obj) { 
      DARABONBA_PTR_FROM_JSON(InvoiceAmount, invoiceAmount_);
      DARABONBA_PTR_FROM_JSON(InvoiceCode, invoiceCode_);
      DARABONBA_PTR_FROM_JSON(InvoiceDetails, invoiceDetails_);
      DARABONBA_PTR_FROM_JSON(InvoiceNo, invoiceNo_);
      DARABONBA_PTR_FROM_JSON(SumAmount, sumAmount_);
    };
    RecognizeQuotaInvoiceResponseBodyDataContent() = default ;
    RecognizeQuotaInvoiceResponseBodyDataContent(const RecognizeQuotaInvoiceResponseBodyDataContent &) = default ;
    RecognizeQuotaInvoiceResponseBodyDataContent(RecognizeQuotaInvoiceResponseBodyDataContent &&) = default ;
    RecognizeQuotaInvoiceResponseBodyDataContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeQuotaInvoiceResponseBodyDataContent() = default ;
    RecognizeQuotaInvoiceResponseBodyDataContent& operator=(const RecognizeQuotaInvoiceResponseBodyDataContent &) = default ;
    RecognizeQuotaInvoiceResponseBodyDataContent& operator=(RecognizeQuotaInvoiceResponseBodyDataContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->invoiceAmount_ == nullptr
        && return this->invoiceCode_ == nullptr && return this->invoiceDetails_ == nullptr && return this->invoiceNo_ == nullptr && return this->sumAmount_ == nullptr; };
    // invoiceAmount Field Functions 
    bool hasInvoiceAmount() const { return this->invoiceAmount_ != nullptr;};
    void deleteInvoiceAmount() { this->invoiceAmount_ = nullptr;};
    inline string invoiceAmount() const { DARABONBA_PTR_GET_DEFAULT(invoiceAmount_, "") };
    inline RecognizeQuotaInvoiceResponseBodyDataContent& setInvoiceAmount(string invoiceAmount) { DARABONBA_PTR_SET_VALUE(invoiceAmount_, invoiceAmount) };


    // invoiceCode Field Functions 
    bool hasInvoiceCode() const { return this->invoiceCode_ != nullptr;};
    void deleteInvoiceCode() { this->invoiceCode_ = nullptr;};
    inline string invoiceCode() const { DARABONBA_PTR_GET_DEFAULT(invoiceCode_, "") };
    inline RecognizeQuotaInvoiceResponseBodyDataContent& setInvoiceCode(string invoiceCode) { DARABONBA_PTR_SET_VALUE(invoiceCode_, invoiceCode) };


    // invoiceDetails Field Functions 
    bool hasInvoiceDetails() const { return this->invoiceDetails_ != nullptr;};
    void deleteInvoiceDetails() { this->invoiceDetails_ = nullptr;};
    inline string invoiceDetails() const { DARABONBA_PTR_GET_DEFAULT(invoiceDetails_, "") };
    inline RecognizeQuotaInvoiceResponseBodyDataContent& setInvoiceDetails(string invoiceDetails) { DARABONBA_PTR_SET_VALUE(invoiceDetails_, invoiceDetails) };


    // invoiceNo Field Functions 
    bool hasInvoiceNo() const { return this->invoiceNo_ != nullptr;};
    void deleteInvoiceNo() { this->invoiceNo_ = nullptr;};
    inline string invoiceNo() const { DARABONBA_PTR_GET_DEFAULT(invoiceNo_, "") };
    inline RecognizeQuotaInvoiceResponseBodyDataContent& setInvoiceNo(string invoiceNo) { DARABONBA_PTR_SET_VALUE(invoiceNo_, invoiceNo) };


    // sumAmount Field Functions 
    bool hasSumAmount() const { return this->sumAmount_ != nullptr;};
    void deleteSumAmount() { this->sumAmount_ = nullptr;};
    inline string sumAmount() const { DARABONBA_PTR_GET_DEFAULT(sumAmount_, "") };
    inline RecognizeQuotaInvoiceResponseBodyDataContent& setSumAmount(string sumAmount) { DARABONBA_PTR_SET_VALUE(sumAmount_, sumAmount) };


  protected:
    std::shared_ptr<string> invoiceAmount_ = nullptr;
    std::shared_ptr<string> invoiceCode_ = nullptr;
    std::shared_ptr<string> invoiceDetails_ = nullptr;
    std::shared_ptr<string> invoiceNo_ = nullptr;
    std::shared_ptr<string> sumAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
