// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNDACCOUNTCANTRANSFERAMOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFUNDACCOUNTCANTRANSFERAMOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetFundAccountCanTransferAmountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFundAccountCanTransferAmountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(FundAccountId, fundAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFundAccountCanTransferAmountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(FundAccountId, fundAccountId_);
    };
    GetFundAccountCanTransferAmountRequest() = default ;
    GetFundAccountCanTransferAmountRequest(const GetFundAccountCanTransferAmountRequest &) = default ;
    GetFundAccountCanTransferAmountRequest(GetFundAccountCanTransferAmountRequest &&) = default ;
    GetFundAccountCanTransferAmountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFundAccountCanTransferAmountRequest() = default ;
    GetFundAccountCanTransferAmountRequest& operator=(const GetFundAccountCanTransferAmountRequest &) = default ;
    GetFundAccountCanTransferAmountRequest& operator=(GetFundAccountCanTransferAmountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currency_ != nullptr
        && this->fundAccountId_ != nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline GetFundAccountCanTransferAmountRequest& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // fundAccountId Field Functions 
    bool hasFundAccountId() const { return this->fundAccountId_ != nullptr;};
    void deleteFundAccountId() { this->fundAccountId_ = nullptr;};
    inline string fundAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountId_, "") };
    inline GetFundAccountCanTransferAmountRequest& setFundAccountId(string fundAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountId_, fundAccountId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> currency_ = nullptr;
    std::shared_ptr<string> fundAccountId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
