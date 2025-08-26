// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZETICKETINVOICERESPONSEBODYDATARESULTSCONTENT_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZETICKETINVOICERESPONSEBODYDATARESULTSCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeTicketInvoiceResponseBodyDataResultsContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeTicketInvoiceResponseBodyDataResultsContent& obj) { 
      DARABONBA_PTR_TO_JSON(AntiFakeCode, antiFakeCode_);
      DARABONBA_PTR_TO_JSON(InvoiceCode, invoiceCode_);
      DARABONBA_PTR_TO_JSON(InvoiceDate, invoiceDate_);
      DARABONBA_PTR_TO_JSON(InvoiceNumber, invoiceNumber_);
      DARABONBA_PTR_TO_JSON(PayeeName, payeeName_);
      DARABONBA_PTR_TO_JSON(PayeeRegisterNo, payeeRegisterNo_);
      DARABONBA_PTR_TO_JSON(PayerName, payerName_);
      DARABONBA_PTR_TO_JSON(PayerRegisterNo, payerRegisterNo_);
      DARABONBA_PTR_TO_JSON(SumAmount, sumAmount_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeTicketInvoiceResponseBodyDataResultsContent& obj) { 
      DARABONBA_PTR_FROM_JSON(AntiFakeCode, antiFakeCode_);
      DARABONBA_PTR_FROM_JSON(InvoiceCode, invoiceCode_);
      DARABONBA_PTR_FROM_JSON(InvoiceDate, invoiceDate_);
      DARABONBA_PTR_FROM_JSON(InvoiceNumber, invoiceNumber_);
      DARABONBA_PTR_FROM_JSON(PayeeName, payeeName_);
      DARABONBA_PTR_FROM_JSON(PayeeRegisterNo, payeeRegisterNo_);
      DARABONBA_PTR_FROM_JSON(PayerName, payerName_);
      DARABONBA_PTR_FROM_JSON(PayerRegisterNo, payerRegisterNo_);
      DARABONBA_PTR_FROM_JSON(SumAmount, sumAmount_);
    };
    RecognizeTicketInvoiceResponseBodyDataResultsContent() = default ;
    RecognizeTicketInvoiceResponseBodyDataResultsContent(const RecognizeTicketInvoiceResponseBodyDataResultsContent &) = default ;
    RecognizeTicketInvoiceResponseBodyDataResultsContent(RecognizeTicketInvoiceResponseBodyDataResultsContent &&) = default ;
    RecognizeTicketInvoiceResponseBodyDataResultsContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeTicketInvoiceResponseBodyDataResultsContent() = default ;
    RecognizeTicketInvoiceResponseBodyDataResultsContent& operator=(const RecognizeTicketInvoiceResponseBodyDataResultsContent &) = default ;
    RecognizeTicketInvoiceResponseBodyDataResultsContent& operator=(RecognizeTicketInvoiceResponseBodyDataResultsContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->antiFakeCode_ != nullptr
        && this->invoiceCode_ != nullptr && this->invoiceDate_ != nullptr && this->invoiceNumber_ != nullptr && this->payeeName_ != nullptr && this->payeeRegisterNo_ != nullptr
        && this->payerName_ != nullptr && this->payerRegisterNo_ != nullptr && this->sumAmount_ != nullptr; };
    // antiFakeCode Field Functions 
    bool hasAntiFakeCode() const { return this->antiFakeCode_ != nullptr;};
    void deleteAntiFakeCode() { this->antiFakeCode_ = nullptr;};
    inline string antiFakeCode() const { DARABONBA_PTR_GET_DEFAULT(antiFakeCode_, "") };
    inline RecognizeTicketInvoiceResponseBodyDataResultsContent& setAntiFakeCode(string antiFakeCode) { DARABONBA_PTR_SET_VALUE(antiFakeCode_, antiFakeCode) };


    // invoiceCode Field Functions 
    bool hasInvoiceCode() const { return this->invoiceCode_ != nullptr;};
    void deleteInvoiceCode() { this->invoiceCode_ = nullptr;};
    inline string invoiceCode() const { DARABONBA_PTR_GET_DEFAULT(invoiceCode_, "") };
    inline RecognizeTicketInvoiceResponseBodyDataResultsContent& setInvoiceCode(string invoiceCode) { DARABONBA_PTR_SET_VALUE(invoiceCode_, invoiceCode) };


    // invoiceDate Field Functions 
    bool hasInvoiceDate() const { return this->invoiceDate_ != nullptr;};
    void deleteInvoiceDate() { this->invoiceDate_ = nullptr;};
    inline string invoiceDate() const { DARABONBA_PTR_GET_DEFAULT(invoiceDate_, "") };
    inline RecognizeTicketInvoiceResponseBodyDataResultsContent& setInvoiceDate(string invoiceDate) { DARABONBA_PTR_SET_VALUE(invoiceDate_, invoiceDate) };


    // invoiceNumber Field Functions 
    bool hasInvoiceNumber() const { return this->invoiceNumber_ != nullptr;};
    void deleteInvoiceNumber() { this->invoiceNumber_ = nullptr;};
    inline string invoiceNumber() const { DARABONBA_PTR_GET_DEFAULT(invoiceNumber_, "") };
    inline RecognizeTicketInvoiceResponseBodyDataResultsContent& setInvoiceNumber(string invoiceNumber) { DARABONBA_PTR_SET_VALUE(invoiceNumber_, invoiceNumber) };


    // payeeName Field Functions 
    bool hasPayeeName() const { return this->payeeName_ != nullptr;};
    void deletePayeeName() { this->payeeName_ = nullptr;};
    inline string payeeName() const { DARABONBA_PTR_GET_DEFAULT(payeeName_, "") };
    inline RecognizeTicketInvoiceResponseBodyDataResultsContent& setPayeeName(string payeeName) { DARABONBA_PTR_SET_VALUE(payeeName_, payeeName) };


    // payeeRegisterNo Field Functions 
    bool hasPayeeRegisterNo() const { return this->payeeRegisterNo_ != nullptr;};
    void deletePayeeRegisterNo() { this->payeeRegisterNo_ = nullptr;};
    inline string payeeRegisterNo() const { DARABONBA_PTR_GET_DEFAULT(payeeRegisterNo_, "") };
    inline RecognizeTicketInvoiceResponseBodyDataResultsContent& setPayeeRegisterNo(string payeeRegisterNo) { DARABONBA_PTR_SET_VALUE(payeeRegisterNo_, payeeRegisterNo) };


    // payerName Field Functions 
    bool hasPayerName() const { return this->payerName_ != nullptr;};
    void deletePayerName() { this->payerName_ = nullptr;};
    inline string payerName() const { DARABONBA_PTR_GET_DEFAULT(payerName_, "") };
    inline RecognizeTicketInvoiceResponseBodyDataResultsContent& setPayerName(string payerName) { DARABONBA_PTR_SET_VALUE(payerName_, payerName) };


    // payerRegisterNo Field Functions 
    bool hasPayerRegisterNo() const { return this->payerRegisterNo_ != nullptr;};
    void deletePayerRegisterNo() { this->payerRegisterNo_ = nullptr;};
    inline string payerRegisterNo() const { DARABONBA_PTR_GET_DEFAULT(payerRegisterNo_, "") };
    inline RecognizeTicketInvoiceResponseBodyDataResultsContent& setPayerRegisterNo(string payerRegisterNo) { DARABONBA_PTR_SET_VALUE(payerRegisterNo_, payerRegisterNo) };


    // sumAmount Field Functions 
    bool hasSumAmount() const { return this->sumAmount_ != nullptr;};
    void deleteSumAmount() { this->sumAmount_ = nullptr;};
    inline string sumAmount() const { DARABONBA_PTR_GET_DEFAULT(sumAmount_, "") };
    inline RecognizeTicketInvoiceResponseBodyDataResultsContent& setSumAmount(string sumAmount) { DARABONBA_PTR_SET_VALUE(sumAmount_, sumAmount) };


  protected:
    std::shared_ptr<string> antiFakeCode_ = nullptr;
    std::shared_ptr<string> invoiceCode_ = nullptr;
    std::shared_ptr<string> invoiceDate_ = nullptr;
    std::shared_ptr<string> invoiceNumber_ = nullptr;
    std::shared_ptr<string> payeeName_ = nullptr;
    std::shared_ptr<string> payeeRegisterNo_ = nullptr;
    std::shared_ptr<string> payerName_ = nullptr;
    std::shared_ptr<string> payerRegisterNo_ = nullptr;
    std::shared_ptr<string> sumAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
