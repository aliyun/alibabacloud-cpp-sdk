// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTDELETIONSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTDELETIONSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class GetAccountDeletionStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountDeletionStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountDeletionStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
    };
    GetAccountDeletionStatusRequest() = default ;
    GetAccountDeletionStatusRequest(const GetAccountDeletionStatusRequest &) = default ;
    GetAccountDeletionStatusRequest(GetAccountDeletionStatusRequest &&) = default ;
    GetAccountDeletionStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountDeletionStatusRequest() = default ;
    GetAccountDeletionStatusRequest& operator=(const GetAccountDeletionStatusRequest &) = default ;
    GetAccountDeletionStatusRequest& operator=(GetAccountDeletionStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetAccountDeletionStatusRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


  protected:
    // The Alibaba Cloud account ID of the member.
    // 
    // This parameter is required.
    shared_ptr<string> accountId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
