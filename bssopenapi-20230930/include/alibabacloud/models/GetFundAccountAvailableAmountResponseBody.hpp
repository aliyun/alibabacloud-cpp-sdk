// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNDACCOUNTAVAILABLEAMOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFUNDACCOUNTAVAILABLEAMOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetFundAccountAvailableAmountResponseBodyExtendLedgerList.hpp>
#include <alibabacloud/models/GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetFundAccountAvailableAmountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFundAccountAvailableAmountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableAmount, availableAmount_);
      DARABONBA_PTR_TO_JSON(AvailableCreditAmount, availableCreditAmount_);
      DARABONBA_PTR_TO_JSON(BankAcceptanceAmount, bankAcceptanceAmount_);
      DARABONBA_PTR_TO_JSON(CashAmount, cashAmount_);
      DARABONBA_PTR_TO_JSON(CreditAmount, creditAmount_);
      DARABONBA_PTR_TO_JSON(CreditRefundAmount, creditRefundAmount_);
      DARABONBA_PTR_TO_JSON(CreditUser, creditUser_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(CurrentMonthUnclearedAmount, currentMonthUnclearedAmount_);
      DARABONBA_PTR_TO_JSON(ExtendLedgerList, extendLedgerList_);
      DARABONBA_PTR_TO_JSON(FundAccountId, fundAccountId_);
      DARABONBA_PTR_TO_JSON(FundAccountOwnerAccountId, fundAccountOwnerAccountId_);
      DARABONBA_PTR_TO_JSON(FundAccountStatus, fundAccountStatus_);
      DARABONBA_PTR_TO_JSON(FundAccountType, fundAccountType_);
      DARABONBA_PTR_TO_JSON(HistoryMonthUnclearedAmount, historyMonthUnclearedAmount_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(NegativeBillAmount, negativeBillAmount_);
      DARABONBA_PTR_TO_JSON(OriginalCashAmountList, originalCashAmountList_);
      DARABONBA_PTR_TO_JSON(QuotaAmount, quotaAmount_);
      DARABONBA_PTR_TO_JSON(QuotaConsumedAmount, quotaConsumedAmount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UnclearedAmount, unclearedAmount_);
    };
    friend void from_json(const Darabonba::Json& j, GetFundAccountAvailableAmountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableAmount, availableAmount_);
      DARABONBA_PTR_FROM_JSON(AvailableCreditAmount, availableCreditAmount_);
      DARABONBA_PTR_FROM_JSON(BankAcceptanceAmount, bankAcceptanceAmount_);
      DARABONBA_PTR_FROM_JSON(CashAmount, cashAmount_);
      DARABONBA_PTR_FROM_JSON(CreditAmount, creditAmount_);
      DARABONBA_PTR_FROM_JSON(CreditRefundAmount, creditRefundAmount_);
      DARABONBA_PTR_FROM_JSON(CreditUser, creditUser_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(CurrentMonthUnclearedAmount, currentMonthUnclearedAmount_);
      DARABONBA_PTR_FROM_JSON(ExtendLedgerList, extendLedgerList_);
      DARABONBA_PTR_FROM_JSON(FundAccountId, fundAccountId_);
      DARABONBA_PTR_FROM_JSON(FundAccountOwnerAccountId, fundAccountOwnerAccountId_);
      DARABONBA_PTR_FROM_JSON(FundAccountStatus, fundAccountStatus_);
      DARABONBA_PTR_FROM_JSON(FundAccountType, fundAccountType_);
      DARABONBA_PTR_FROM_JSON(HistoryMonthUnclearedAmount, historyMonthUnclearedAmount_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(NegativeBillAmount, negativeBillAmount_);
      DARABONBA_PTR_FROM_JSON(OriginalCashAmountList, originalCashAmountList_);
      DARABONBA_PTR_FROM_JSON(QuotaAmount, quotaAmount_);
      DARABONBA_PTR_FROM_JSON(QuotaConsumedAmount, quotaConsumedAmount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UnclearedAmount, unclearedAmount_);
    };
    GetFundAccountAvailableAmountResponseBody() = default ;
    GetFundAccountAvailableAmountResponseBody(const GetFundAccountAvailableAmountResponseBody &) = default ;
    GetFundAccountAvailableAmountResponseBody(GetFundAccountAvailableAmountResponseBody &&) = default ;
    GetFundAccountAvailableAmountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFundAccountAvailableAmountResponseBody() = default ;
    GetFundAccountAvailableAmountResponseBody& operator=(const GetFundAccountAvailableAmountResponseBody &) = default ;
    GetFundAccountAvailableAmountResponseBody& operator=(GetFundAccountAvailableAmountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->availableAmount_ != nullptr
        && this->availableCreditAmount_ != nullptr && this->bankAcceptanceAmount_ != nullptr && this->cashAmount_ != nullptr && this->creditAmount_ != nullptr && this->creditRefundAmount_ != nullptr
        && this->creditUser_ != nullptr && this->currency_ != nullptr && this->currentMonthUnclearedAmount_ != nullptr && this->extendLedgerList_ != nullptr && this->fundAccountId_ != nullptr
        && this->fundAccountOwnerAccountId_ != nullptr && this->fundAccountStatus_ != nullptr && this->fundAccountType_ != nullptr && this->historyMonthUnclearedAmount_ != nullptr && this->metadata_ != nullptr
        && this->negativeBillAmount_ != nullptr && this->originalCashAmountList_ != nullptr && this->quotaAmount_ != nullptr && this->quotaConsumedAmount_ != nullptr && this->requestId_ != nullptr
        && this->unclearedAmount_ != nullptr; };
    // availableAmount Field Functions 
    bool hasAvailableAmount() const { return this->availableAmount_ != nullptr;};
    void deleteAvailableAmount() { this->availableAmount_ = nullptr;};
    inline string availableAmount() const { DARABONBA_PTR_GET_DEFAULT(availableAmount_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setAvailableAmount(string availableAmount) { DARABONBA_PTR_SET_VALUE(availableAmount_, availableAmount) };


    // availableCreditAmount Field Functions 
    bool hasAvailableCreditAmount() const { return this->availableCreditAmount_ != nullptr;};
    void deleteAvailableCreditAmount() { this->availableCreditAmount_ = nullptr;};
    inline string availableCreditAmount() const { DARABONBA_PTR_GET_DEFAULT(availableCreditAmount_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setAvailableCreditAmount(string availableCreditAmount) { DARABONBA_PTR_SET_VALUE(availableCreditAmount_, availableCreditAmount) };


    // bankAcceptanceAmount Field Functions 
    bool hasBankAcceptanceAmount() const { return this->bankAcceptanceAmount_ != nullptr;};
    void deleteBankAcceptanceAmount() { this->bankAcceptanceAmount_ = nullptr;};
    inline string bankAcceptanceAmount() const { DARABONBA_PTR_GET_DEFAULT(bankAcceptanceAmount_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setBankAcceptanceAmount(string bankAcceptanceAmount) { DARABONBA_PTR_SET_VALUE(bankAcceptanceAmount_, bankAcceptanceAmount) };


    // cashAmount Field Functions 
    bool hasCashAmount() const { return this->cashAmount_ != nullptr;};
    void deleteCashAmount() { this->cashAmount_ = nullptr;};
    inline string cashAmount() const { DARABONBA_PTR_GET_DEFAULT(cashAmount_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setCashAmount(string cashAmount) { DARABONBA_PTR_SET_VALUE(cashAmount_, cashAmount) };


    // creditAmount Field Functions 
    bool hasCreditAmount() const { return this->creditAmount_ != nullptr;};
    void deleteCreditAmount() { this->creditAmount_ = nullptr;};
    inline string creditAmount() const { DARABONBA_PTR_GET_DEFAULT(creditAmount_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setCreditAmount(string creditAmount) { DARABONBA_PTR_SET_VALUE(creditAmount_, creditAmount) };


    // creditRefundAmount Field Functions 
    bool hasCreditRefundAmount() const { return this->creditRefundAmount_ != nullptr;};
    void deleteCreditRefundAmount() { this->creditRefundAmount_ = nullptr;};
    inline string creditRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(creditRefundAmount_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setCreditRefundAmount(string creditRefundAmount) { DARABONBA_PTR_SET_VALUE(creditRefundAmount_, creditRefundAmount) };


    // creditUser Field Functions 
    bool hasCreditUser() const { return this->creditUser_ != nullptr;};
    void deleteCreditUser() { this->creditUser_ = nullptr;};
    inline bool creditUser() const { DARABONBA_PTR_GET_DEFAULT(creditUser_, false) };
    inline GetFundAccountAvailableAmountResponseBody& setCreditUser(bool creditUser) { DARABONBA_PTR_SET_VALUE(creditUser_, creditUser) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // currentMonthUnclearedAmount Field Functions 
    bool hasCurrentMonthUnclearedAmount() const { return this->currentMonthUnclearedAmount_ != nullptr;};
    void deleteCurrentMonthUnclearedAmount() { this->currentMonthUnclearedAmount_ = nullptr;};
    inline string currentMonthUnclearedAmount() const { DARABONBA_PTR_GET_DEFAULT(currentMonthUnclearedAmount_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setCurrentMonthUnclearedAmount(string currentMonthUnclearedAmount) { DARABONBA_PTR_SET_VALUE(currentMonthUnclearedAmount_, currentMonthUnclearedAmount) };


    // extendLedgerList Field Functions 
    bool hasExtendLedgerList() const { return this->extendLedgerList_ != nullptr;};
    void deleteExtendLedgerList() { this->extendLedgerList_ = nullptr;};
    inline const vector<GetFundAccountAvailableAmountResponseBodyExtendLedgerList> & extendLedgerList() const { DARABONBA_PTR_GET_CONST(extendLedgerList_, vector<GetFundAccountAvailableAmountResponseBodyExtendLedgerList>) };
    inline vector<GetFundAccountAvailableAmountResponseBodyExtendLedgerList> extendLedgerList() { DARABONBA_PTR_GET(extendLedgerList_, vector<GetFundAccountAvailableAmountResponseBodyExtendLedgerList>) };
    inline GetFundAccountAvailableAmountResponseBody& setExtendLedgerList(const vector<GetFundAccountAvailableAmountResponseBodyExtendLedgerList> & extendLedgerList) { DARABONBA_PTR_SET_VALUE(extendLedgerList_, extendLedgerList) };
    inline GetFundAccountAvailableAmountResponseBody& setExtendLedgerList(vector<GetFundAccountAvailableAmountResponseBodyExtendLedgerList> && extendLedgerList) { DARABONBA_PTR_SET_RVALUE(extendLedgerList_, extendLedgerList) };


    // fundAccountId Field Functions 
    bool hasFundAccountId() const { return this->fundAccountId_ != nullptr;};
    void deleteFundAccountId() { this->fundAccountId_ = nullptr;};
    inline string fundAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountId_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setFundAccountId(string fundAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountId_, fundAccountId) };


    // fundAccountOwnerAccountId Field Functions 
    bool hasFundAccountOwnerAccountId() const { return this->fundAccountOwnerAccountId_ != nullptr;};
    void deleteFundAccountOwnerAccountId() { this->fundAccountOwnerAccountId_ = nullptr;};
    inline string fundAccountOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountOwnerAccountId_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setFundAccountOwnerAccountId(string fundAccountOwnerAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountOwnerAccountId_, fundAccountOwnerAccountId) };


    // fundAccountStatus Field Functions 
    bool hasFundAccountStatus() const { return this->fundAccountStatus_ != nullptr;};
    void deleteFundAccountStatus() { this->fundAccountStatus_ = nullptr;};
    inline string fundAccountStatus() const { DARABONBA_PTR_GET_DEFAULT(fundAccountStatus_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setFundAccountStatus(string fundAccountStatus) { DARABONBA_PTR_SET_VALUE(fundAccountStatus_, fundAccountStatus) };


    // fundAccountType Field Functions 
    bool hasFundAccountType() const { return this->fundAccountType_ != nullptr;};
    void deleteFundAccountType() { this->fundAccountType_ = nullptr;};
    inline string fundAccountType() const { DARABONBA_PTR_GET_DEFAULT(fundAccountType_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setFundAccountType(string fundAccountType) { DARABONBA_PTR_SET_VALUE(fundAccountType_, fundAccountType) };


    // historyMonthUnclearedAmount Field Functions 
    bool hasHistoryMonthUnclearedAmount() const { return this->historyMonthUnclearedAmount_ != nullptr;};
    void deleteHistoryMonthUnclearedAmount() { this->historyMonthUnclearedAmount_ = nullptr;};
    inline string historyMonthUnclearedAmount() const { DARABONBA_PTR_GET_DEFAULT(historyMonthUnclearedAmount_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setHistoryMonthUnclearedAmount(string historyMonthUnclearedAmount) { DARABONBA_PTR_SET_VALUE(historyMonthUnclearedAmount_, historyMonthUnclearedAmount) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & metadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & metadata() { DARABONBA_GET(metadata_) };
    inline GetFundAccountAvailableAmountResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline GetFundAccountAvailableAmountResponseBody& setMetadata(Darabonba::Json & metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // negativeBillAmount Field Functions 
    bool hasNegativeBillAmount() const { return this->negativeBillAmount_ != nullptr;};
    void deleteNegativeBillAmount() { this->negativeBillAmount_ = nullptr;};
    inline string negativeBillAmount() const { DARABONBA_PTR_GET_DEFAULT(negativeBillAmount_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setNegativeBillAmount(string negativeBillAmount) { DARABONBA_PTR_SET_VALUE(negativeBillAmount_, negativeBillAmount) };


    // originalCashAmountList Field Functions 
    bool hasOriginalCashAmountList() const { return this->originalCashAmountList_ != nullptr;};
    void deleteOriginalCashAmountList() { this->originalCashAmountList_ = nullptr;};
    inline const vector<GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList> & originalCashAmountList() const { DARABONBA_PTR_GET_CONST(originalCashAmountList_, vector<GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList>) };
    inline vector<GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList> originalCashAmountList() { DARABONBA_PTR_GET(originalCashAmountList_, vector<GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList>) };
    inline GetFundAccountAvailableAmountResponseBody& setOriginalCashAmountList(const vector<GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList> & originalCashAmountList) { DARABONBA_PTR_SET_VALUE(originalCashAmountList_, originalCashAmountList) };
    inline GetFundAccountAvailableAmountResponseBody& setOriginalCashAmountList(vector<GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList> && originalCashAmountList) { DARABONBA_PTR_SET_RVALUE(originalCashAmountList_, originalCashAmountList) };


    // quotaAmount Field Functions 
    bool hasQuotaAmount() const { return this->quotaAmount_ != nullptr;};
    void deleteQuotaAmount() { this->quotaAmount_ = nullptr;};
    inline string quotaAmount() const { DARABONBA_PTR_GET_DEFAULT(quotaAmount_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setQuotaAmount(string quotaAmount) { DARABONBA_PTR_SET_VALUE(quotaAmount_, quotaAmount) };


    // quotaConsumedAmount Field Functions 
    bool hasQuotaConsumedAmount() const { return this->quotaConsumedAmount_ != nullptr;};
    void deleteQuotaConsumedAmount() { this->quotaConsumedAmount_ = nullptr;};
    inline string quotaConsumedAmount() const { DARABONBA_PTR_GET_DEFAULT(quotaConsumedAmount_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setQuotaConsumedAmount(string quotaConsumedAmount) { DARABONBA_PTR_SET_VALUE(quotaConsumedAmount_, quotaConsumedAmount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // unclearedAmount Field Functions 
    bool hasUnclearedAmount() const { return this->unclearedAmount_ != nullptr;};
    void deleteUnclearedAmount() { this->unclearedAmount_ = nullptr;};
    inline string unclearedAmount() const { DARABONBA_PTR_GET_DEFAULT(unclearedAmount_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setUnclearedAmount(string unclearedAmount) { DARABONBA_PTR_SET_VALUE(unclearedAmount_, unclearedAmount) };


  protected:
    std::shared_ptr<string> availableAmount_ = nullptr;
    std::shared_ptr<string> availableCreditAmount_ = nullptr;
    std::shared_ptr<string> bankAcceptanceAmount_ = nullptr;
    std::shared_ptr<string> cashAmount_ = nullptr;
    std::shared_ptr<string> creditAmount_ = nullptr;
    std::shared_ptr<string> creditRefundAmount_ = nullptr;
    std::shared_ptr<bool> creditUser_ = nullptr;
    std::shared_ptr<string> currency_ = nullptr;
    std::shared_ptr<string> currentMonthUnclearedAmount_ = nullptr;
    std::shared_ptr<vector<GetFundAccountAvailableAmountResponseBodyExtendLedgerList>> extendLedgerList_ = nullptr;
    std::shared_ptr<string> fundAccountId_ = nullptr;
    std::shared_ptr<string> fundAccountOwnerAccountId_ = nullptr;
    std::shared_ptr<string> fundAccountStatus_ = nullptr;
    std::shared_ptr<string> fundAccountType_ = nullptr;
    std::shared_ptr<string> historyMonthUnclearedAmount_ = nullptr;
    Darabonba::Json metadata_ = nullptr;
    std::shared_ptr<string> negativeBillAmount_ = nullptr;
    std::shared_ptr<vector<GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList>> originalCashAmountList_ = nullptr;
    std::shared_ptr<string> quotaAmount_ = nullptr;
    std::shared_ptr<string> quotaConsumedAmount_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> unclearedAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
