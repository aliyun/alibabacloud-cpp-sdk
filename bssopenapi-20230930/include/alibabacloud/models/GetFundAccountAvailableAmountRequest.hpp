// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNDACCOUNTAVAILABLEAMOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFUNDACCOUNTAVAILABLEAMOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetFundAccountAvailableAmountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFundAccountAvailableAmountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FundAccountId, fundAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFundAccountAvailableAmountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FundAccountId, fundAccountId_);
    };
    GetFundAccountAvailableAmountRequest() = default ;
    GetFundAccountAvailableAmountRequest(const GetFundAccountAvailableAmountRequest &) = default ;
    GetFundAccountAvailableAmountRequest(GetFundAccountAvailableAmountRequest &&) = default ;
    GetFundAccountAvailableAmountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFundAccountAvailableAmountRequest() = default ;
    GetFundAccountAvailableAmountRequest& operator=(const GetFundAccountAvailableAmountRequest &) = default ;
    GetFundAccountAvailableAmountRequest& operator=(GetFundAccountAvailableAmountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fundAccountId_ != nullptr; };
    // fundAccountId Field Functions 
    bool hasFundAccountId() const { return this->fundAccountId_ != nullptr;};
    void deleteFundAccountId() { this->fundAccountId_ = nullptr;};
    inline string fundAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountId_, "") };
    inline GetFundAccountAvailableAmountRequest& setFundAccountId(string fundAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountId_, fundAccountId) };


  protected:
    std::shared_ptr<string> fundAccountId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
