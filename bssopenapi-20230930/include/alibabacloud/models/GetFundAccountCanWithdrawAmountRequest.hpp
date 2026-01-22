// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNDACCOUNTCANWITHDRAWAMOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFUNDACCOUNTCANWITHDRAWAMOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetFundAccountCanWithdrawAmountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFundAccountCanWithdrawAmountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FundAccountId, fundAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFundAccountCanWithdrawAmountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FundAccountId, fundAccountId_);
    };
    GetFundAccountCanWithdrawAmountRequest() = default ;
    GetFundAccountCanWithdrawAmountRequest(const GetFundAccountCanWithdrawAmountRequest &) = default ;
    GetFundAccountCanWithdrawAmountRequest(GetFundAccountCanWithdrawAmountRequest &&) = default ;
    GetFundAccountCanWithdrawAmountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFundAccountCanWithdrawAmountRequest() = default ;
    GetFundAccountCanWithdrawAmountRequest& operator=(const GetFundAccountCanWithdrawAmountRequest &) = default ;
    GetFundAccountCanWithdrawAmountRequest& operator=(GetFundAccountCanWithdrawAmountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fundAccountId_ == nullptr; };
    // fundAccountId Field Functions 
    bool hasFundAccountId() const { return this->fundAccountId_ != nullptr;};
    void deleteFundAccountId() { this->fundAccountId_ = nullptr;};
    inline int64_t getFundAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountId_, 0L) };
    inline GetFundAccountCanWithdrawAmountRequest& setFundAccountId(int64_t fundAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountId_, fundAccountId) };


  protected:
    shared_ptr<int64_t> fundAccountId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
