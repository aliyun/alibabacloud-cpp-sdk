// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMEMBERACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMEMBERACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMemberAccountsResponseBodyAccountInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeMemberAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMemberAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountInfos, accountInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMemberAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountInfos, accountInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMemberAccountsResponseBody() = default ;
    DescribeMemberAccountsResponseBody(const DescribeMemberAccountsResponseBody &) = default ;
    DescribeMemberAccountsResponseBody(DescribeMemberAccountsResponseBody &&) = default ;
    DescribeMemberAccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMemberAccountsResponseBody() = default ;
    DescribeMemberAccountsResponseBody& operator=(const DescribeMemberAccountsResponseBody &) = default ;
    DescribeMemberAccountsResponseBody& operator=(DescribeMemberAccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountInfos_ == nullptr
        && return this->requestId_ == nullptr; };
    // accountInfos Field Functions 
    bool hasAccountInfos() const { return this->accountInfos_ != nullptr;};
    void deleteAccountInfos() { this->accountInfos_ = nullptr;};
    inline const vector<DescribeMemberAccountsResponseBodyAccountInfos> & accountInfos() const { DARABONBA_PTR_GET_CONST(accountInfos_, vector<DescribeMemberAccountsResponseBodyAccountInfos>) };
    inline vector<DescribeMemberAccountsResponseBodyAccountInfos> accountInfos() { DARABONBA_PTR_GET(accountInfos_, vector<DescribeMemberAccountsResponseBodyAccountInfos>) };
    inline DescribeMemberAccountsResponseBody& setAccountInfos(const vector<DescribeMemberAccountsResponseBodyAccountInfos> & accountInfos) { DARABONBA_PTR_SET_VALUE(accountInfos_, accountInfos) };
    inline DescribeMemberAccountsResponseBody& setAccountInfos(vector<DescribeMemberAccountsResponseBodyAccountInfos> && accountInfos) { DARABONBA_PTR_SET_RVALUE(accountInfos_, accountInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMemberAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the member.
    std::shared_ptr<vector<DescribeMemberAccountsResponseBodyAccountInfos>> accountInfos_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
