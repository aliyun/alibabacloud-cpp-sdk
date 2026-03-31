// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTALIASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTALIASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class GetAccountAliasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountAliasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountAlias, accountAlias_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountAliasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountAlias, accountAlias_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAccountAliasResponseBody() = default ;
    GetAccountAliasResponseBody(const GetAccountAliasResponseBody &) = default ;
    GetAccountAliasResponseBody(GetAccountAliasResponseBody &&) = default ;
    GetAccountAliasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountAliasResponseBody() = default ;
    GetAccountAliasResponseBody& operator=(const GetAccountAliasResponseBody &) = default ;
    GetAccountAliasResponseBody& operator=(GetAccountAliasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountAlias_ == nullptr
        && this->requestId_ == nullptr; };
    // accountAlias Field Functions 
    bool hasAccountAlias() const { return this->accountAlias_ != nullptr;};
    void deleteAccountAlias() { this->accountAlias_ = nullptr;};
    inline string getAccountAlias() const { DARABONBA_PTR_GET_DEFAULT(accountAlias_, "") };
    inline GetAccountAliasResponseBody& setAccountAlias(string accountAlias) { DARABONBA_PTR_SET_VALUE(accountAlias_, accountAlias) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccountAliasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The alias of the Alibaba Cloud account.
    shared_ptr<string> accountAlias_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
