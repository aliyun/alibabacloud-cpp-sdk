// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASHDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASHDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bss20140714
{
namespace Models
{
  class DescribeCashDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCashDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AmountOwed, amountOwed_);
      DARABONBA_PTR_TO_JSON(AvailableCredit, availableCredit_);
      DARABONBA_PTR_TO_JSON(BalanceAmount, balanceAmount_);
      DARABONBA_PTR_TO_JSON(CreditCardAmount, creditCardAmount_);
      DARABONBA_PTR_TO_JSON(CreditLimit, creditLimit_);
      DARABONBA_PTR_TO_JSON(EnableThresholdAlert, enableThresholdAlert_);
      DARABONBA_PTR_TO_JSON(FrozenAmount, frozenAmount_);
      DARABONBA_PTR_TO_JSON(MiniAlertThreshold, miniAlertThreshold_);
      DARABONBA_PTR_TO_JSON(RemmitanceAmount, remmitanceAmount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCashDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AmountOwed, amountOwed_);
      DARABONBA_PTR_FROM_JSON(AvailableCredit, availableCredit_);
      DARABONBA_PTR_FROM_JSON(BalanceAmount, balanceAmount_);
      DARABONBA_PTR_FROM_JSON(CreditCardAmount, creditCardAmount_);
      DARABONBA_PTR_FROM_JSON(CreditLimit, creditLimit_);
      DARABONBA_PTR_FROM_JSON(EnableThresholdAlert, enableThresholdAlert_);
      DARABONBA_PTR_FROM_JSON(FrozenAmount, frozenAmount_);
      DARABONBA_PTR_FROM_JSON(MiniAlertThreshold, miniAlertThreshold_);
      DARABONBA_PTR_FROM_JSON(RemmitanceAmount, remmitanceAmount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCashDetailResponseBody() = default ;
    DescribeCashDetailResponseBody(const DescribeCashDetailResponseBody &) = default ;
    DescribeCashDetailResponseBody(DescribeCashDetailResponseBody &&) = default ;
    DescribeCashDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCashDetailResponseBody() = default ;
    DescribeCashDetailResponseBody& operator=(const DescribeCashDetailResponseBody &) = default ;
    DescribeCashDetailResponseBody& operator=(DescribeCashDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amountOwed_ == nullptr
        && return this->availableCredit_ == nullptr && return this->balanceAmount_ == nullptr && return this->creditCardAmount_ == nullptr && return this->creditLimit_ == nullptr && return this->enableThresholdAlert_ == nullptr
        && return this->frozenAmount_ == nullptr && return this->miniAlertThreshold_ == nullptr && return this->remmitanceAmount_ == nullptr && return this->requestId_ == nullptr; };
    // amountOwed Field Functions 
    bool hasAmountOwed() const { return this->amountOwed_ != nullptr;};
    void deleteAmountOwed() { this->amountOwed_ = nullptr;};
    inline string amountOwed() const { DARABONBA_PTR_GET_DEFAULT(amountOwed_, "") };
    inline DescribeCashDetailResponseBody& setAmountOwed(string amountOwed) { DARABONBA_PTR_SET_VALUE(amountOwed_, amountOwed) };


    // availableCredit Field Functions 
    bool hasAvailableCredit() const { return this->availableCredit_ != nullptr;};
    void deleteAvailableCredit() { this->availableCredit_ = nullptr;};
    inline string availableCredit() const { DARABONBA_PTR_GET_DEFAULT(availableCredit_, "") };
    inline DescribeCashDetailResponseBody& setAvailableCredit(string availableCredit) { DARABONBA_PTR_SET_VALUE(availableCredit_, availableCredit) };


    // balanceAmount Field Functions 
    bool hasBalanceAmount() const { return this->balanceAmount_ != nullptr;};
    void deleteBalanceAmount() { this->balanceAmount_ = nullptr;};
    inline string balanceAmount() const { DARABONBA_PTR_GET_DEFAULT(balanceAmount_, "") };
    inline DescribeCashDetailResponseBody& setBalanceAmount(string balanceAmount) { DARABONBA_PTR_SET_VALUE(balanceAmount_, balanceAmount) };


    // creditCardAmount Field Functions 
    bool hasCreditCardAmount() const { return this->creditCardAmount_ != nullptr;};
    void deleteCreditCardAmount() { this->creditCardAmount_ = nullptr;};
    inline string creditCardAmount() const { DARABONBA_PTR_GET_DEFAULT(creditCardAmount_, "") };
    inline DescribeCashDetailResponseBody& setCreditCardAmount(string creditCardAmount) { DARABONBA_PTR_SET_VALUE(creditCardAmount_, creditCardAmount) };


    // creditLimit Field Functions 
    bool hasCreditLimit() const { return this->creditLimit_ != nullptr;};
    void deleteCreditLimit() { this->creditLimit_ = nullptr;};
    inline string creditLimit() const { DARABONBA_PTR_GET_DEFAULT(creditLimit_, "") };
    inline DescribeCashDetailResponseBody& setCreditLimit(string creditLimit) { DARABONBA_PTR_SET_VALUE(creditLimit_, creditLimit) };


    // enableThresholdAlert Field Functions 
    bool hasEnableThresholdAlert() const { return this->enableThresholdAlert_ != nullptr;};
    void deleteEnableThresholdAlert() { this->enableThresholdAlert_ = nullptr;};
    inline string enableThresholdAlert() const { DARABONBA_PTR_GET_DEFAULT(enableThresholdAlert_, "") };
    inline DescribeCashDetailResponseBody& setEnableThresholdAlert(string enableThresholdAlert) { DARABONBA_PTR_SET_VALUE(enableThresholdAlert_, enableThresholdAlert) };


    // frozenAmount Field Functions 
    bool hasFrozenAmount() const { return this->frozenAmount_ != nullptr;};
    void deleteFrozenAmount() { this->frozenAmount_ = nullptr;};
    inline string frozenAmount() const { DARABONBA_PTR_GET_DEFAULT(frozenAmount_, "") };
    inline DescribeCashDetailResponseBody& setFrozenAmount(string frozenAmount) { DARABONBA_PTR_SET_VALUE(frozenAmount_, frozenAmount) };


    // miniAlertThreshold Field Functions 
    bool hasMiniAlertThreshold() const { return this->miniAlertThreshold_ != nullptr;};
    void deleteMiniAlertThreshold() { this->miniAlertThreshold_ = nullptr;};
    inline int64_t miniAlertThreshold() const { DARABONBA_PTR_GET_DEFAULT(miniAlertThreshold_, 0L) };
    inline DescribeCashDetailResponseBody& setMiniAlertThreshold(int64_t miniAlertThreshold) { DARABONBA_PTR_SET_VALUE(miniAlertThreshold_, miniAlertThreshold) };


    // remmitanceAmount Field Functions 
    bool hasRemmitanceAmount() const { return this->remmitanceAmount_ != nullptr;};
    void deleteRemmitanceAmount() { this->remmitanceAmount_ = nullptr;};
    inline string remmitanceAmount() const { DARABONBA_PTR_GET_DEFAULT(remmitanceAmount_, "") };
    inline DescribeCashDetailResponseBody& setRemmitanceAmount(string remmitanceAmount) { DARABONBA_PTR_SET_VALUE(remmitanceAmount_, remmitanceAmount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCashDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> amountOwed_ = nullptr;
    std::shared_ptr<string> availableCredit_ = nullptr;
    std::shared_ptr<string> balanceAmount_ = nullptr;
    std::shared_ptr<string> creditCardAmount_ = nullptr;
    std::shared_ptr<string> creditLimit_ = nullptr;
    std::shared_ptr<string> enableThresholdAlert_ = nullptr;
    std::shared_ptr<string> frozenAmount_ = nullptr;
    std::shared_ptr<int64_t> miniAlertThreshold_ = nullptr;
    std::shared_ptr<string> remmitanceAmount_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bss20140714
#endif
