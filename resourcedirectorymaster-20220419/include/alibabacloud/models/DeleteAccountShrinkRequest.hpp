// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEACCOUNTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEACCOUNTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class DeleteAccountShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAccountShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AbandonableCheckId, abandonableCheckIdShrink_);
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAccountShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AbandonableCheckId, abandonableCheckIdShrink_);
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
    };
    DeleteAccountShrinkRequest() = default ;
    DeleteAccountShrinkRequest(const DeleteAccountShrinkRequest &) = default ;
    DeleteAccountShrinkRequest(DeleteAccountShrinkRequest &&) = default ;
    DeleteAccountShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAccountShrinkRequest() = default ;
    DeleteAccountShrinkRequest& operator=(const DeleteAccountShrinkRequest &) = default ;
    DeleteAccountShrinkRequest& operator=(DeleteAccountShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abandonableCheckIdShrink_ == nullptr
        && this->accountId_ == nullptr; };
    // abandonableCheckIdShrink Field Functions 
    bool hasAbandonableCheckIdShrink() const { return this->abandonableCheckIdShrink_ != nullptr;};
    void deleteAbandonableCheckIdShrink() { this->abandonableCheckIdShrink_ = nullptr;};
    inline string getAbandonableCheckIdShrink() const { DARABONBA_PTR_GET_DEFAULT(abandonableCheckIdShrink_, "") };
    inline DeleteAccountShrinkRequest& setAbandonableCheckIdShrink(string abandonableCheckIdShrink) { DARABONBA_PTR_SET_VALUE(abandonableCheckIdShrink_, abandonableCheckIdShrink) };


    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline DeleteAccountShrinkRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


  protected:
    // The IDs of the check items that you can choose to ignore for the member deletion.
    // 
    // You can obtain the IDs from the response of the [GetAccountDeletionCheckResult](~~GetAccountDeletionCheckResult~~) operation.
    shared_ptr<string> abandonableCheckIdShrink_ {};
    // The Alibaba Cloud account ID of the member that you want to delete.
    // 
    // This parameter is required.
    shared_ptr<string> accountId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
