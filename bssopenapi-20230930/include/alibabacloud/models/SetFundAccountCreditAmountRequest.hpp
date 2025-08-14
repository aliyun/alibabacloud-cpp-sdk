// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETFUNDACCOUNTCREDITAMOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETFUNDACCOUNTCREDITAMOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class SetFundAccountCreditAmountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetFundAccountCreditAmountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreditAmount, creditAmount_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(FundAccountId, fundAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, SetFundAccountCreditAmountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreditAmount, creditAmount_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(FundAccountId, fundAccountId_);
    };
    SetFundAccountCreditAmountRequest() = default ;
    SetFundAccountCreditAmountRequest(const SetFundAccountCreditAmountRequest &) = default ;
    SetFundAccountCreditAmountRequest(SetFundAccountCreditAmountRequest &&) = default ;
    SetFundAccountCreditAmountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetFundAccountCreditAmountRequest() = default ;
    SetFundAccountCreditAmountRequest& operator=(const SetFundAccountCreditAmountRequest &) = default ;
    SetFundAccountCreditAmountRequest& operator=(SetFundAccountCreditAmountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creditAmount_ != nullptr
        && this->currency_ != nullptr && this->fundAccountId_ != nullptr; };
    // creditAmount Field Functions 
    bool hasCreditAmount() const { return this->creditAmount_ != nullptr;};
    void deleteCreditAmount() { this->creditAmount_ = nullptr;};
    inline string creditAmount() const { DARABONBA_PTR_GET_DEFAULT(creditAmount_, "") };
    inline SetFundAccountCreditAmountRequest& setCreditAmount(string creditAmount) { DARABONBA_PTR_SET_VALUE(creditAmount_, creditAmount) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline SetFundAccountCreditAmountRequest& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // fundAccountId Field Functions 
    bool hasFundAccountId() const { return this->fundAccountId_ != nullptr;};
    void deleteFundAccountId() { this->fundAccountId_ = nullptr;};
    inline int64_t fundAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountId_, 0L) };
    inline SetFundAccountCreditAmountRequest& setFundAccountId(int64_t fundAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountId_, fundAccountId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> creditAmount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> currency_ = nullptr;
    std::shared_ptr<int64_t> fundAccountId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
