// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNDACCOUNTAVAILABLEAMOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFUNDACCOUNTAVAILABLEAMOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class OriginalCashAmountList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OriginalCashAmountList& obj) { 
        DARABONBA_PTR_TO_JSON(Amount, amount_);
        DARABONBA_PTR_TO_JSON(Currency, currency_);
      };
      friend void from_json(const Darabonba::Json& j, OriginalCashAmountList& obj) { 
        DARABONBA_PTR_FROM_JSON(Amount, amount_);
        DARABONBA_PTR_FROM_JSON(Currency, currency_);
      };
      OriginalCashAmountList() = default ;
      OriginalCashAmountList(const OriginalCashAmountList &) = default ;
      OriginalCashAmountList(OriginalCashAmountList &&) = default ;
      OriginalCashAmountList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OriginalCashAmountList() = default ;
      OriginalCashAmountList& operator=(const OriginalCashAmountList &) = default ;
      OriginalCashAmountList& operator=(OriginalCashAmountList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->amount_ == nullptr
        && this->currency_ == nullptr; };
      // amount Field Functions 
      bool hasAmount() const { return this->amount_ != nullptr;};
      void deleteAmount() { this->amount_ = nullptr;};
      inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
      inline OriginalCashAmountList& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline OriginalCashAmountList& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    protected:
      shared_ptr<string> amount_ {};
      shared_ptr<string> currency_ {};
    };

    class ExtendLedgerList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExtendLedgerList& obj) { 
        DARABONBA_PTR_TO_JSON(Currency, currency_);
        DARABONBA_PTR_TO_JSON(LedgerName, ledgerName_);
        DARABONBA_PTR_TO_JSON(OriginalAmount, originalAmount_);
      };
      friend void from_json(const Darabonba::Json& j, ExtendLedgerList& obj) { 
        DARABONBA_PTR_FROM_JSON(Currency, currency_);
        DARABONBA_PTR_FROM_JSON(LedgerName, ledgerName_);
        DARABONBA_PTR_FROM_JSON(OriginalAmount, originalAmount_);
      };
      ExtendLedgerList() = default ;
      ExtendLedgerList(const ExtendLedgerList &) = default ;
      ExtendLedgerList(ExtendLedgerList &&) = default ;
      ExtendLedgerList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExtendLedgerList() = default ;
      ExtendLedgerList& operator=(const ExtendLedgerList &) = default ;
      ExtendLedgerList& operator=(ExtendLedgerList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currency_ == nullptr
        && this->ledgerName_ == nullptr && this->originalAmount_ == nullptr; };
      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline ExtendLedgerList& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


      // ledgerName Field Functions 
      bool hasLedgerName() const { return this->ledgerName_ != nullptr;};
      void deleteLedgerName() { this->ledgerName_ = nullptr;};
      inline string getLedgerName() const { DARABONBA_PTR_GET_DEFAULT(ledgerName_, "") };
      inline ExtendLedgerList& setLedgerName(string ledgerName) { DARABONBA_PTR_SET_VALUE(ledgerName_, ledgerName) };


      // originalAmount Field Functions 
      bool hasOriginalAmount() const { return this->originalAmount_ != nullptr;};
      void deleteOriginalAmount() { this->originalAmount_ = nullptr;};
      inline string getOriginalAmount() const { DARABONBA_PTR_GET_DEFAULT(originalAmount_, "") };
      inline ExtendLedgerList& setOriginalAmount(string originalAmount) { DARABONBA_PTR_SET_VALUE(originalAmount_, originalAmount) };


    protected:
      shared_ptr<string> currency_ {};
      shared_ptr<string> ledgerName_ {};
      shared_ptr<string> originalAmount_ {};
    };

    virtual bool empty() const override { return this->availableAmount_ == nullptr
        && this->availableCreditAmount_ == nullptr && this->bankAcceptanceAmount_ == nullptr && this->cashAmount_ == nullptr && this->creditAmount_ == nullptr && this->creditRefundAmount_ == nullptr
        && this->creditUser_ == nullptr && this->currency_ == nullptr && this->currentMonthUnclearedAmount_ == nullptr && this->extendLedgerList_ == nullptr && this->fundAccountId_ == nullptr
        && this->fundAccountOwnerAccountId_ == nullptr && this->fundAccountStatus_ == nullptr && this->fundAccountType_ == nullptr && this->historyMonthUnclearedAmount_ == nullptr && this->metadata_ == nullptr
        && this->negativeBillAmount_ == nullptr && this->originalCashAmountList_ == nullptr && this->quotaAmount_ == nullptr && this->quotaConsumedAmount_ == nullptr && this->requestId_ == nullptr
        && this->unclearedAmount_ == nullptr; };
    // availableAmount Field Functions 
    bool hasAvailableAmount() const { return this->availableAmount_ != nullptr;};
    void deleteAvailableAmount() { this->availableAmount_ = nullptr;};
    inline string getAvailableAmount() const { DARABONBA_PTR_GET_DEFAULT(availableAmount_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setAvailableAmount(string availableAmount) { DARABONBA_PTR_SET_VALUE(availableAmount_, availableAmount) };


    // availableCreditAmount Field Functions 
    bool hasAvailableCreditAmount() const { return this->availableCreditAmount_ != nullptr;};
    void deleteAvailableCreditAmount() { this->availableCreditAmount_ = nullptr;};
    inline string getAvailableCreditAmount() const { DARABONBA_PTR_GET_DEFAULT(availableCreditAmount_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setAvailableCreditAmount(string availableCreditAmount) { DARABONBA_PTR_SET_VALUE(availableCreditAmount_, availableCreditAmount) };


    // bankAcceptanceAmount Field Functions 
    bool hasBankAcceptanceAmount() const { return this->bankAcceptanceAmount_ != nullptr;};
    void deleteBankAcceptanceAmount() { this->bankAcceptanceAmount_ = nullptr;};
    inline string getBankAcceptanceAmount() const { DARABONBA_PTR_GET_DEFAULT(bankAcceptanceAmount_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setBankAcceptanceAmount(string bankAcceptanceAmount) { DARABONBA_PTR_SET_VALUE(bankAcceptanceAmount_, bankAcceptanceAmount) };


    // cashAmount Field Functions 
    bool hasCashAmount() const { return this->cashAmount_ != nullptr;};
    void deleteCashAmount() { this->cashAmount_ = nullptr;};
    inline string getCashAmount() const { DARABONBA_PTR_GET_DEFAULT(cashAmount_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setCashAmount(string cashAmount) { DARABONBA_PTR_SET_VALUE(cashAmount_, cashAmount) };


    // creditAmount Field Functions 
    bool hasCreditAmount() const { return this->creditAmount_ != nullptr;};
    void deleteCreditAmount() { this->creditAmount_ = nullptr;};
    inline string getCreditAmount() const { DARABONBA_PTR_GET_DEFAULT(creditAmount_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setCreditAmount(string creditAmount) { DARABONBA_PTR_SET_VALUE(creditAmount_, creditAmount) };


    // creditRefundAmount Field Functions 
    bool hasCreditRefundAmount() const { return this->creditRefundAmount_ != nullptr;};
    void deleteCreditRefundAmount() { this->creditRefundAmount_ = nullptr;};
    inline string getCreditRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(creditRefundAmount_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setCreditRefundAmount(string creditRefundAmount) { DARABONBA_PTR_SET_VALUE(creditRefundAmount_, creditRefundAmount) };


    // creditUser Field Functions 
    bool hasCreditUser() const { return this->creditUser_ != nullptr;};
    void deleteCreditUser() { this->creditUser_ = nullptr;};
    inline bool getCreditUser() const { DARABONBA_PTR_GET_DEFAULT(creditUser_, false) };
    inline GetFundAccountAvailableAmountResponseBody& setCreditUser(bool creditUser) { DARABONBA_PTR_SET_VALUE(creditUser_, creditUser) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // currentMonthUnclearedAmount Field Functions 
    bool hasCurrentMonthUnclearedAmount() const { return this->currentMonthUnclearedAmount_ != nullptr;};
    void deleteCurrentMonthUnclearedAmount() { this->currentMonthUnclearedAmount_ = nullptr;};
    inline string getCurrentMonthUnclearedAmount() const { DARABONBA_PTR_GET_DEFAULT(currentMonthUnclearedAmount_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setCurrentMonthUnclearedAmount(string currentMonthUnclearedAmount) { DARABONBA_PTR_SET_VALUE(currentMonthUnclearedAmount_, currentMonthUnclearedAmount) };


    // extendLedgerList Field Functions 
    bool hasExtendLedgerList() const { return this->extendLedgerList_ != nullptr;};
    void deleteExtendLedgerList() { this->extendLedgerList_ = nullptr;};
    inline const vector<GetFundAccountAvailableAmountResponseBody::ExtendLedgerList> & getExtendLedgerList() const { DARABONBA_PTR_GET_CONST(extendLedgerList_, vector<GetFundAccountAvailableAmountResponseBody::ExtendLedgerList>) };
    inline vector<GetFundAccountAvailableAmountResponseBody::ExtendLedgerList> getExtendLedgerList() { DARABONBA_PTR_GET(extendLedgerList_, vector<GetFundAccountAvailableAmountResponseBody::ExtendLedgerList>) };
    inline GetFundAccountAvailableAmountResponseBody& setExtendLedgerList(const vector<GetFundAccountAvailableAmountResponseBody::ExtendLedgerList> & extendLedgerList) { DARABONBA_PTR_SET_VALUE(extendLedgerList_, extendLedgerList) };
    inline GetFundAccountAvailableAmountResponseBody& setExtendLedgerList(vector<GetFundAccountAvailableAmountResponseBody::ExtendLedgerList> && extendLedgerList) { DARABONBA_PTR_SET_RVALUE(extendLedgerList_, extendLedgerList) };


    // fundAccountId Field Functions 
    bool hasFundAccountId() const { return this->fundAccountId_ != nullptr;};
    void deleteFundAccountId() { this->fundAccountId_ = nullptr;};
    inline string getFundAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountId_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setFundAccountId(string fundAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountId_, fundAccountId) };


    // fundAccountOwnerAccountId Field Functions 
    bool hasFundAccountOwnerAccountId() const { return this->fundAccountOwnerAccountId_ != nullptr;};
    void deleteFundAccountOwnerAccountId() { this->fundAccountOwnerAccountId_ = nullptr;};
    inline string getFundAccountOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountOwnerAccountId_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setFundAccountOwnerAccountId(string fundAccountOwnerAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountOwnerAccountId_, fundAccountOwnerAccountId) };


    // fundAccountStatus Field Functions 
    bool hasFundAccountStatus() const { return this->fundAccountStatus_ != nullptr;};
    void deleteFundAccountStatus() { this->fundAccountStatus_ = nullptr;};
    inline string getFundAccountStatus() const { DARABONBA_PTR_GET_DEFAULT(fundAccountStatus_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setFundAccountStatus(string fundAccountStatus) { DARABONBA_PTR_SET_VALUE(fundAccountStatus_, fundAccountStatus) };


    // fundAccountType Field Functions 
    bool hasFundAccountType() const { return this->fundAccountType_ != nullptr;};
    void deleteFundAccountType() { this->fundAccountType_ = nullptr;};
    inline string getFundAccountType() const { DARABONBA_PTR_GET_DEFAULT(fundAccountType_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setFundAccountType(string fundAccountType) { DARABONBA_PTR_SET_VALUE(fundAccountType_, fundAccountType) };


    // historyMonthUnclearedAmount Field Functions 
    bool hasHistoryMonthUnclearedAmount() const { return this->historyMonthUnclearedAmount_ != nullptr;};
    void deleteHistoryMonthUnclearedAmount() { this->historyMonthUnclearedAmount_ = nullptr;};
    inline string getHistoryMonthUnclearedAmount() const { DARABONBA_PTR_GET_DEFAULT(historyMonthUnclearedAmount_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setHistoryMonthUnclearedAmount(string historyMonthUnclearedAmount) { DARABONBA_PTR_SET_VALUE(historyMonthUnclearedAmount_, historyMonthUnclearedAmount) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline GetFundAccountAvailableAmountResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline GetFundAccountAvailableAmountResponseBody& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // negativeBillAmount Field Functions 
    bool hasNegativeBillAmount() const { return this->negativeBillAmount_ != nullptr;};
    void deleteNegativeBillAmount() { this->negativeBillAmount_ = nullptr;};
    inline string getNegativeBillAmount() const { DARABONBA_PTR_GET_DEFAULT(negativeBillAmount_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setNegativeBillAmount(string negativeBillAmount) { DARABONBA_PTR_SET_VALUE(negativeBillAmount_, negativeBillAmount) };


    // originalCashAmountList Field Functions 
    bool hasOriginalCashAmountList() const { return this->originalCashAmountList_ != nullptr;};
    void deleteOriginalCashAmountList() { this->originalCashAmountList_ = nullptr;};
    inline const vector<GetFundAccountAvailableAmountResponseBody::OriginalCashAmountList> & getOriginalCashAmountList() const { DARABONBA_PTR_GET_CONST(originalCashAmountList_, vector<GetFundAccountAvailableAmountResponseBody::OriginalCashAmountList>) };
    inline vector<GetFundAccountAvailableAmountResponseBody::OriginalCashAmountList> getOriginalCashAmountList() { DARABONBA_PTR_GET(originalCashAmountList_, vector<GetFundAccountAvailableAmountResponseBody::OriginalCashAmountList>) };
    inline GetFundAccountAvailableAmountResponseBody& setOriginalCashAmountList(const vector<GetFundAccountAvailableAmountResponseBody::OriginalCashAmountList> & originalCashAmountList) { DARABONBA_PTR_SET_VALUE(originalCashAmountList_, originalCashAmountList) };
    inline GetFundAccountAvailableAmountResponseBody& setOriginalCashAmountList(vector<GetFundAccountAvailableAmountResponseBody::OriginalCashAmountList> && originalCashAmountList) { DARABONBA_PTR_SET_RVALUE(originalCashAmountList_, originalCashAmountList) };


    // quotaAmount Field Functions 
    bool hasQuotaAmount() const { return this->quotaAmount_ != nullptr;};
    void deleteQuotaAmount() { this->quotaAmount_ = nullptr;};
    inline string getQuotaAmount() const { DARABONBA_PTR_GET_DEFAULT(quotaAmount_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setQuotaAmount(string quotaAmount) { DARABONBA_PTR_SET_VALUE(quotaAmount_, quotaAmount) };


    // quotaConsumedAmount Field Functions 
    bool hasQuotaConsumedAmount() const { return this->quotaConsumedAmount_ != nullptr;};
    void deleteQuotaConsumedAmount() { this->quotaConsumedAmount_ = nullptr;};
    inline string getQuotaConsumedAmount() const { DARABONBA_PTR_GET_DEFAULT(quotaConsumedAmount_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setQuotaConsumedAmount(string quotaConsumedAmount) { DARABONBA_PTR_SET_VALUE(quotaConsumedAmount_, quotaConsumedAmount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // unclearedAmount Field Functions 
    bool hasUnclearedAmount() const { return this->unclearedAmount_ != nullptr;};
    void deleteUnclearedAmount() { this->unclearedAmount_ = nullptr;};
    inline string getUnclearedAmount() const { DARABONBA_PTR_GET_DEFAULT(unclearedAmount_, "") };
    inline GetFundAccountAvailableAmountResponseBody& setUnclearedAmount(string unclearedAmount) { DARABONBA_PTR_SET_VALUE(unclearedAmount_, unclearedAmount) };


  protected:
    shared_ptr<string> availableAmount_ {};
    shared_ptr<string> availableCreditAmount_ {};
    shared_ptr<string> bankAcceptanceAmount_ {};
    shared_ptr<string> cashAmount_ {};
    shared_ptr<string> creditAmount_ {};
    shared_ptr<string> creditRefundAmount_ {};
    shared_ptr<bool> creditUser_ {};
    shared_ptr<string> currency_ {};
    shared_ptr<string> currentMonthUnclearedAmount_ {};
    shared_ptr<vector<GetFundAccountAvailableAmountResponseBody::ExtendLedgerList>> extendLedgerList_ {};
    shared_ptr<string> fundAccountId_ {};
    shared_ptr<string> fundAccountOwnerAccountId_ {};
    shared_ptr<string> fundAccountStatus_ {};
    shared_ptr<string> fundAccountType_ {};
    shared_ptr<string> historyMonthUnclearedAmount_ {};
    Darabonba::Json metadata_ {};
    shared_ptr<string> negativeBillAmount_ {};
    shared_ptr<vector<GetFundAccountAvailableAmountResponseBody::OriginalCashAmountList>> originalCashAmountList_ {};
    shared_ptr<string> quotaAmount_ {};
    shared_ptr<string> quotaConsumedAmount_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> unclearedAmount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
