// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BOOKRESPONSEBODYDATAORDERLISTORDERATTRIBUTEABAPAYLOCKRATEINFO_HPP_
#define ALIBABACLOUD_MODELS_BOOKRESPONSEBODYDATAORDERLISTORDERATTRIBUTEABAPAYLOCKRATEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class BookResponseBodyDataOrderListOrderAttributeAbaPayLockRateInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BookResponseBodyDataOrderListOrderAttributeAbaPayLockRateInfo& obj) { 
      DARABONBA_PTR_TO_JSON(pay_intended_amount, payIntendedAmount_);
      DARABONBA_PTR_TO_JSON(pay_intended_currency_code, payIntendedCurrencyCode_);
      DARABONBA_PTR_TO_JSON(quotation_currency_code, quotationCurrencyCode_);
      DARABONBA_PTR_TO_JSON(to_pay_currency_rate, toPayCurrencyRate_);
    };
    friend void from_json(const Darabonba::Json& j, BookResponseBodyDataOrderListOrderAttributeAbaPayLockRateInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(pay_intended_amount, payIntendedAmount_);
      DARABONBA_PTR_FROM_JSON(pay_intended_currency_code, payIntendedCurrencyCode_);
      DARABONBA_PTR_FROM_JSON(quotation_currency_code, quotationCurrencyCode_);
      DARABONBA_PTR_FROM_JSON(to_pay_currency_rate, toPayCurrencyRate_);
    };
    BookResponseBodyDataOrderListOrderAttributeAbaPayLockRateInfo() = default ;
    BookResponseBodyDataOrderListOrderAttributeAbaPayLockRateInfo(const BookResponseBodyDataOrderListOrderAttributeAbaPayLockRateInfo &) = default ;
    BookResponseBodyDataOrderListOrderAttributeAbaPayLockRateInfo(BookResponseBodyDataOrderListOrderAttributeAbaPayLockRateInfo &&) = default ;
    BookResponseBodyDataOrderListOrderAttributeAbaPayLockRateInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BookResponseBodyDataOrderListOrderAttributeAbaPayLockRateInfo() = default ;
    BookResponseBodyDataOrderListOrderAttributeAbaPayLockRateInfo& operator=(const BookResponseBodyDataOrderListOrderAttributeAbaPayLockRateInfo &) = default ;
    BookResponseBodyDataOrderListOrderAttributeAbaPayLockRateInfo& operator=(BookResponseBodyDataOrderListOrderAttributeAbaPayLockRateInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->payIntendedAmount_ == nullptr
        && return this->payIntendedCurrencyCode_ == nullptr && return this->quotationCurrencyCode_ == nullptr && return this->toPayCurrencyRate_ == nullptr; };
    // payIntendedAmount Field Functions 
    bool hasPayIntendedAmount() const { return this->payIntendedAmount_ != nullptr;};
    void deletePayIntendedAmount() { this->payIntendedAmount_ = nullptr;};
    inline string payIntendedAmount() const { DARABONBA_PTR_GET_DEFAULT(payIntendedAmount_, "") };
    inline BookResponseBodyDataOrderListOrderAttributeAbaPayLockRateInfo& setPayIntendedAmount(string payIntendedAmount) { DARABONBA_PTR_SET_VALUE(payIntendedAmount_, payIntendedAmount) };


    // payIntendedCurrencyCode Field Functions 
    bool hasPayIntendedCurrencyCode() const { return this->payIntendedCurrencyCode_ != nullptr;};
    void deletePayIntendedCurrencyCode() { this->payIntendedCurrencyCode_ = nullptr;};
    inline string payIntendedCurrencyCode() const { DARABONBA_PTR_GET_DEFAULT(payIntendedCurrencyCode_, "") };
    inline BookResponseBodyDataOrderListOrderAttributeAbaPayLockRateInfo& setPayIntendedCurrencyCode(string payIntendedCurrencyCode) { DARABONBA_PTR_SET_VALUE(payIntendedCurrencyCode_, payIntendedCurrencyCode) };


    // quotationCurrencyCode Field Functions 
    bool hasQuotationCurrencyCode() const { return this->quotationCurrencyCode_ != nullptr;};
    void deleteQuotationCurrencyCode() { this->quotationCurrencyCode_ = nullptr;};
    inline string quotationCurrencyCode() const { DARABONBA_PTR_GET_DEFAULT(quotationCurrencyCode_, "") };
    inline BookResponseBodyDataOrderListOrderAttributeAbaPayLockRateInfo& setQuotationCurrencyCode(string quotationCurrencyCode) { DARABONBA_PTR_SET_VALUE(quotationCurrencyCode_, quotationCurrencyCode) };


    // toPayCurrencyRate Field Functions 
    bool hasToPayCurrencyRate() const { return this->toPayCurrencyRate_ != nullptr;};
    void deleteToPayCurrencyRate() { this->toPayCurrencyRate_ = nullptr;};
    inline string toPayCurrencyRate() const { DARABONBA_PTR_GET_DEFAULT(toPayCurrencyRate_, "") };
    inline BookResponseBodyDataOrderListOrderAttributeAbaPayLockRateInfo& setToPayCurrencyRate(string toPayCurrencyRate) { DARABONBA_PTR_SET_VALUE(toPayCurrencyRate_, toPayCurrencyRate) };


  protected:
    std::shared_ptr<string> payIntendedAmount_ = nullptr;
    std::shared_ptr<string> payIntendedCurrencyCode_ = nullptr;
    std::shared_ptr<string> quotationCurrencyCode_ = nullptr;
    std::shared_ptr<string> toPayCurrencyRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
