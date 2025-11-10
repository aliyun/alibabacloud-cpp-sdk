// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPAYERFORACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPAYERFORACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class UpdatePayerForAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePayerForAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(PayerAccountId, payerAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePayerForAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(PayerAccountId, payerAccountId_);
    };
    UpdatePayerForAccountRequest() = default ;
    UpdatePayerForAccountRequest(const UpdatePayerForAccountRequest &) = default ;
    UpdatePayerForAccountRequest(UpdatePayerForAccountRequest &&) = default ;
    UpdatePayerForAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePayerForAccountRequest() = default ;
    UpdatePayerForAccountRequest& operator=(const UpdatePayerForAccountRequest &) = default ;
    UpdatePayerForAccountRequest& operator=(UpdatePayerForAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->payerAccountId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline UpdatePayerForAccountRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // payerAccountId Field Functions 
    bool hasPayerAccountId() const { return this->payerAccountId_ != nullptr;};
    void deletePayerAccountId() { this->payerAccountId_ = nullptr;};
    inline string payerAccountId() const { DARABONBA_PTR_GET_DEFAULT(payerAccountId_, "") };
    inline UpdatePayerForAccountRequest& setPayerAccountId(string payerAccountId) { DARABONBA_PTR_SET_VALUE(payerAccountId_, payerAccountId) };


  protected:
    // The Alibaba Cloud account ID of the member.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountId_ = nullptr;
    // The ID of the billing account.
    // 
    // This parameter is required.
    std::shared_ptr<string> payerAccountId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
