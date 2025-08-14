// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNDACCOUNTAVAILABLEAMOUNTRESPONSEBODYEXTENDLEDGERLIST_HPP_
#define ALIBABACLOUD_MODELS_GETFUNDACCOUNTAVAILABLEAMOUNTRESPONSEBODYEXTENDLEDGERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetFundAccountAvailableAmountResponseBodyExtendLedgerList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFundAccountAvailableAmountResponseBodyExtendLedgerList& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(LedgerName, ledgerName_);
      DARABONBA_PTR_TO_JSON(OriginalAmount, originalAmount_);
    };
    friend void from_json(const Darabonba::Json& j, GetFundAccountAvailableAmountResponseBodyExtendLedgerList& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(LedgerName, ledgerName_);
      DARABONBA_PTR_FROM_JSON(OriginalAmount, originalAmount_);
    };
    GetFundAccountAvailableAmountResponseBodyExtendLedgerList() = default ;
    GetFundAccountAvailableAmountResponseBodyExtendLedgerList(const GetFundAccountAvailableAmountResponseBodyExtendLedgerList &) = default ;
    GetFundAccountAvailableAmountResponseBodyExtendLedgerList(GetFundAccountAvailableAmountResponseBodyExtendLedgerList &&) = default ;
    GetFundAccountAvailableAmountResponseBodyExtendLedgerList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFundAccountAvailableAmountResponseBodyExtendLedgerList() = default ;
    GetFundAccountAvailableAmountResponseBodyExtendLedgerList& operator=(const GetFundAccountAvailableAmountResponseBodyExtendLedgerList &) = default ;
    GetFundAccountAvailableAmountResponseBodyExtendLedgerList& operator=(GetFundAccountAvailableAmountResponseBodyExtendLedgerList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currency_ != nullptr
        && this->ledgerName_ != nullptr && this->originalAmount_ != nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline GetFundAccountAvailableAmountResponseBodyExtendLedgerList& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // ledgerName Field Functions 
    bool hasLedgerName() const { return this->ledgerName_ != nullptr;};
    void deleteLedgerName() { this->ledgerName_ = nullptr;};
    inline string ledgerName() const { DARABONBA_PTR_GET_DEFAULT(ledgerName_, "") };
    inline GetFundAccountAvailableAmountResponseBodyExtendLedgerList& setLedgerName(string ledgerName) { DARABONBA_PTR_SET_VALUE(ledgerName_, ledgerName) };


    // originalAmount Field Functions 
    bool hasOriginalAmount() const { return this->originalAmount_ != nullptr;};
    void deleteOriginalAmount() { this->originalAmount_ = nullptr;};
    inline string originalAmount() const { DARABONBA_PTR_GET_DEFAULT(originalAmount_, "") };
    inline GetFundAccountAvailableAmountResponseBodyExtendLedgerList& setOriginalAmount(string originalAmount) { DARABONBA_PTR_SET_VALUE(originalAmount_, originalAmount) };


  protected:
    std::shared_ptr<string> currency_ = nullptr;
    std::shared_ptr<string> ledgerName_ = nullptr;
    std::shared_ptr<string> originalAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
