// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNDACCOUNTCANRECYCLEAMOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFUNDACCOUNTCANRECYCLEAMOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetFundAccountCanRecycleAmountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFundAccountCanRecycleAmountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(RecycleFromFundAccountId, recycleFromFundAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFundAccountCanRecycleAmountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(RecycleFromFundAccountId, recycleFromFundAccountId_);
    };
    GetFundAccountCanRecycleAmountRequest() = default ;
    GetFundAccountCanRecycleAmountRequest(const GetFundAccountCanRecycleAmountRequest &) = default ;
    GetFundAccountCanRecycleAmountRequest(GetFundAccountCanRecycleAmountRequest &&) = default ;
    GetFundAccountCanRecycleAmountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFundAccountCanRecycleAmountRequest() = default ;
    GetFundAccountCanRecycleAmountRequest& operator=(const GetFundAccountCanRecycleAmountRequest &) = default ;
    GetFundAccountCanRecycleAmountRequest& operator=(GetFundAccountCanRecycleAmountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currency_ != nullptr
        && this->recycleFromFundAccountId_ != nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline GetFundAccountCanRecycleAmountRequest& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // recycleFromFundAccountId Field Functions 
    bool hasRecycleFromFundAccountId() const { return this->recycleFromFundAccountId_ != nullptr;};
    void deleteRecycleFromFundAccountId() { this->recycleFromFundAccountId_ = nullptr;};
    inline string recycleFromFundAccountId() const { DARABONBA_PTR_GET_DEFAULT(recycleFromFundAccountId_, "") };
    inline GetFundAccountCanRecycleAmountRequest& setRecycleFromFundAccountId(string recycleFromFundAccountId) { DARABONBA_PTR_SET_VALUE(recycleFromFundAccountId_, recycleFromFundAccountId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> currency_ = nullptr;
    std::shared_ptr<string> recycleFromFundAccountId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
