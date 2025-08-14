// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNDACCOUNTCANALLOCATECREDITAMOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFUNDACCOUNTCANALLOCATECREDITAMOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetFundAccountCanAllocateCreditAmountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFundAccountCanAllocateCreditAmountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FundAccountId, fundAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFundAccountCanAllocateCreditAmountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FundAccountId, fundAccountId_);
    };
    GetFundAccountCanAllocateCreditAmountRequest() = default ;
    GetFundAccountCanAllocateCreditAmountRequest(const GetFundAccountCanAllocateCreditAmountRequest &) = default ;
    GetFundAccountCanAllocateCreditAmountRequest(GetFundAccountCanAllocateCreditAmountRequest &&) = default ;
    GetFundAccountCanAllocateCreditAmountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFundAccountCanAllocateCreditAmountRequest() = default ;
    GetFundAccountCanAllocateCreditAmountRequest& operator=(const GetFundAccountCanAllocateCreditAmountRequest &) = default ;
    GetFundAccountCanAllocateCreditAmountRequest& operator=(GetFundAccountCanAllocateCreditAmountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fundAccountId_ != nullptr; };
    // fundAccountId Field Functions 
    bool hasFundAccountId() const { return this->fundAccountId_ != nullptr;};
    void deleteFundAccountId() { this->fundAccountId_ = nullptr;};
    inline int64_t fundAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountId_, 0L) };
    inline GetFundAccountCanAllocateCreditAmountRequest& setFundAccountId(int64_t fundAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountId_, fundAccountId) };


  protected:
    std::shared_ptr<int64_t> fundAccountId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
