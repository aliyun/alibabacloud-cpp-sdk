// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNDACCOUNTCANWITHDRAWAMOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFUNDACCOUNTCANWITHDRAWAMOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetFundAccountCanWithdrawAmountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFundAccountCanWithdrawAmountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CanOriginalWithdrawAmount, canOriginalWithdrawAmount_);
      DARABONBA_PTR_TO_JSON(CanWithdrawAmount, canWithdrawAmount_);
      DARABONBA_PTR_TO_JSON(CannotOriginalWithdrawAmount, cannotOriginalWithdrawAmount_);
      DARABONBA_PTR_TO_JSON(CashAmount, cashAmount_);
      DARABONBA_PTR_TO_JSON(CreditMemoAmount, creditMemoAmount_);
      DARABONBA_PTR_TO_JSON(CurrentMonthUnclearedAmount, currentMonthUnclearedAmount_);
      DARABONBA_PTR_TO_JSON(HistoryMonthUnclearedAmount, historyMonthUnclearedAmount_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(PayAsYouGoReversedAmount, payAsYouGoReversedAmount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TransferAmount, transferAmount_);
    };
    friend void from_json(const Darabonba::Json& j, GetFundAccountCanWithdrawAmountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CanOriginalWithdrawAmount, canOriginalWithdrawAmount_);
      DARABONBA_PTR_FROM_JSON(CanWithdrawAmount, canWithdrawAmount_);
      DARABONBA_PTR_FROM_JSON(CannotOriginalWithdrawAmount, cannotOriginalWithdrawAmount_);
      DARABONBA_PTR_FROM_JSON(CashAmount, cashAmount_);
      DARABONBA_PTR_FROM_JSON(CreditMemoAmount, creditMemoAmount_);
      DARABONBA_PTR_FROM_JSON(CurrentMonthUnclearedAmount, currentMonthUnclearedAmount_);
      DARABONBA_PTR_FROM_JSON(HistoryMonthUnclearedAmount, historyMonthUnclearedAmount_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(PayAsYouGoReversedAmount, payAsYouGoReversedAmount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TransferAmount, transferAmount_);
    };
    GetFundAccountCanWithdrawAmountResponseBody() = default ;
    GetFundAccountCanWithdrawAmountResponseBody(const GetFundAccountCanWithdrawAmountResponseBody &) = default ;
    GetFundAccountCanWithdrawAmountResponseBody(GetFundAccountCanWithdrawAmountResponseBody &&) = default ;
    GetFundAccountCanWithdrawAmountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFundAccountCanWithdrawAmountResponseBody() = default ;
    GetFundAccountCanWithdrawAmountResponseBody& operator=(const GetFundAccountCanWithdrawAmountResponseBody &) = default ;
    GetFundAccountCanWithdrawAmountResponseBody& operator=(GetFundAccountCanWithdrawAmountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->canOriginalWithdrawAmount_ == nullptr
        && this->canWithdrawAmount_ == nullptr && this->cannotOriginalWithdrawAmount_ == nullptr && this->cashAmount_ == nullptr && this->creditMemoAmount_ == nullptr && this->currentMonthUnclearedAmount_ == nullptr
        && this->historyMonthUnclearedAmount_ == nullptr && this->metadata_ == nullptr && this->payAsYouGoReversedAmount_ == nullptr && this->requestId_ == nullptr && this->transferAmount_ == nullptr; };
    // canOriginalWithdrawAmount Field Functions 
    bool hasCanOriginalWithdrawAmount() const { return this->canOriginalWithdrawAmount_ != nullptr;};
    void deleteCanOriginalWithdrawAmount() { this->canOriginalWithdrawAmount_ = nullptr;};
    inline string getCanOriginalWithdrawAmount() const { DARABONBA_PTR_GET_DEFAULT(canOriginalWithdrawAmount_, "") };
    inline GetFundAccountCanWithdrawAmountResponseBody& setCanOriginalWithdrawAmount(string canOriginalWithdrawAmount) { DARABONBA_PTR_SET_VALUE(canOriginalWithdrawAmount_, canOriginalWithdrawAmount) };


    // canWithdrawAmount Field Functions 
    bool hasCanWithdrawAmount() const { return this->canWithdrawAmount_ != nullptr;};
    void deleteCanWithdrawAmount() { this->canWithdrawAmount_ = nullptr;};
    inline string getCanWithdrawAmount() const { DARABONBA_PTR_GET_DEFAULT(canWithdrawAmount_, "") };
    inline GetFundAccountCanWithdrawAmountResponseBody& setCanWithdrawAmount(string canWithdrawAmount) { DARABONBA_PTR_SET_VALUE(canWithdrawAmount_, canWithdrawAmount) };


    // cannotOriginalWithdrawAmount Field Functions 
    bool hasCannotOriginalWithdrawAmount() const { return this->cannotOriginalWithdrawAmount_ != nullptr;};
    void deleteCannotOriginalWithdrawAmount() { this->cannotOriginalWithdrawAmount_ = nullptr;};
    inline string getCannotOriginalWithdrawAmount() const { DARABONBA_PTR_GET_DEFAULT(cannotOriginalWithdrawAmount_, "") };
    inline GetFundAccountCanWithdrawAmountResponseBody& setCannotOriginalWithdrawAmount(string cannotOriginalWithdrawAmount) { DARABONBA_PTR_SET_VALUE(cannotOriginalWithdrawAmount_, cannotOriginalWithdrawAmount) };


    // cashAmount Field Functions 
    bool hasCashAmount() const { return this->cashAmount_ != nullptr;};
    void deleteCashAmount() { this->cashAmount_ = nullptr;};
    inline string getCashAmount() const { DARABONBA_PTR_GET_DEFAULT(cashAmount_, "") };
    inline GetFundAccountCanWithdrawAmountResponseBody& setCashAmount(string cashAmount) { DARABONBA_PTR_SET_VALUE(cashAmount_, cashAmount) };


    // creditMemoAmount Field Functions 
    bool hasCreditMemoAmount() const { return this->creditMemoAmount_ != nullptr;};
    void deleteCreditMemoAmount() { this->creditMemoAmount_ = nullptr;};
    inline string getCreditMemoAmount() const { DARABONBA_PTR_GET_DEFAULT(creditMemoAmount_, "") };
    inline GetFundAccountCanWithdrawAmountResponseBody& setCreditMemoAmount(string creditMemoAmount) { DARABONBA_PTR_SET_VALUE(creditMemoAmount_, creditMemoAmount) };


    // currentMonthUnclearedAmount Field Functions 
    bool hasCurrentMonthUnclearedAmount() const { return this->currentMonthUnclearedAmount_ != nullptr;};
    void deleteCurrentMonthUnclearedAmount() { this->currentMonthUnclearedAmount_ = nullptr;};
    inline string getCurrentMonthUnclearedAmount() const { DARABONBA_PTR_GET_DEFAULT(currentMonthUnclearedAmount_, "") };
    inline GetFundAccountCanWithdrawAmountResponseBody& setCurrentMonthUnclearedAmount(string currentMonthUnclearedAmount) { DARABONBA_PTR_SET_VALUE(currentMonthUnclearedAmount_, currentMonthUnclearedAmount) };


    // historyMonthUnclearedAmount Field Functions 
    bool hasHistoryMonthUnclearedAmount() const { return this->historyMonthUnclearedAmount_ != nullptr;};
    void deleteHistoryMonthUnclearedAmount() { this->historyMonthUnclearedAmount_ = nullptr;};
    inline string getHistoryMonthUnclearedAmount() const { DARABONBA_PTR_GET_DEFAULT(historyMonthUnclearedAmount_, "") };
    inline GetFundAccountCanWithdrawAmountResponseBody& setHistoryMonthUnclearedAmount(string historyMonthUnclearedAmount) { DARABONBA_PTR_SET_VALUE(historyMonthUnclearedAmount_, historyMonthUnclearedAmount) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline GetFundAccountCanWithdrawAmountResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline GetFundAccountCanWithdrawAmountResponseBody& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // payAsYouGoReversedAmount Field Functions 
    bool hasPayAsYouGoReversedAmount() const { return this->payAsYouGoReversedAmount_ != nullptr;};
    void deletePayAsYouGoReversedAmount() { this->payAsYouGoReversedAmount_ = nullptr;};
    inline string getPayAsYouGoReversedAmount() const { DARABONBA_PTR_GET_DEFAULT(payAsYouGoReversedAmount_, "") };
    inline GetFundAccountCanWithdrawAmountResponseBody& setPayAsYouGoReversedAmount(string payAsYouGoReversedAmount) { DARABONBA_PTR_SET_VALUE(payAsYouGoReversedAmount_, payAsYouGoReversedAmount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFundAccountCanWithdrawAmountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transferAmount Field Functions 
    bool hasTransferAmount() const { return this->transferAmount_ != nullptr;};
    void deleteTransferAmount() { this->transferAmount_ = nullptr;};
    inline string getTransferAmount() const { DARABONBA_PTR_GET_DEFAULT(transferAmount_, "") };
    inline GetFundAccountCanWithdrawAmountResponseBody& setTransferAmount(string transferAmount) { DARABONBA_PTR_SET_VALUE(transferAmount_, transferAmount) };


  protected:
    shared_ptr<string> canOriginalWithdrawAmount_ {};
    shared_ptr<string> canWithdrawAmount_ {};
    shared_ptr<string> cannotOriginalWithdrawAmount_ {};
    shared_ptr<string> cashAmount_ {};
    shared_ptr<string> creditMemoAmount_ {};
    shared_ptr<string> currentMonthUnclearedAmount_ {};
    shared_ptr<string> historyMonthUnclearedAmount_ {};
    Darabonba::Json metadata_ {};
    shared_ptr<string> payAsYouGoReversedAmount_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> transferAmount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
