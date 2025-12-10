// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPAYERFORACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPAYERFORACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetPayerForAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPayerForAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPayerForAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
    };
    GetPayerForAccountRequest() = default ;
    GetPayerForAccountRequest(const GetPayerForAccountRequest &) = default ;
    GetPayerForAccountRequest(GetPayerForAccountRequest &&) = default ;
    GetPayerForAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPayerForAccountRequest() = default ;
    GetPayerForAccountRequest& operator=(const GetPayerForAccountRequest &) = default ;
    GetPayerForAccountRequest& operator=(GetPayerForAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetPayerForAccountRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


  protected:
    // The ID of the account.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
