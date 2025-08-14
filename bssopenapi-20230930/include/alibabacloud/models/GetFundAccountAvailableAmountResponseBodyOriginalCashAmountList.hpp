// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNDACCOUNTAVAILABLEAMOUNTRESPONSEBODYORIGINALCASHAMOUNTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETFUNDACCOUNTAVAILABLEAMOUNTRESPONSEBODYORIGINALCASHAMOUNTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
    };
    friend void from_json(const Darabonba::Json& j, GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
    };
    GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList() = default ;
    GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList(const GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList &) = default ;
    GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList(GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList &&) = default ;
    GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList() = default ;
    GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList& operator=(const GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList &) = default ;
    GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList& operator=(GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->amount_ != nullptr
        && this->currency_ != nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline string amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
    inline GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


  protected:
    std::shared_ptr<string> amount_ = nullptr;
    std::shared_ptr<string> currency_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
