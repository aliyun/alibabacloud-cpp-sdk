// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYMAILADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYMAILADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class ModifyMailAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyMailAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MailAddressId, mailAddressId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(ReplyAddress, replyAddress_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyMailAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MailAddressId, mailAddressId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(ReplyAddress, replyAddress_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyMailAddressRequest() = default ;
    ModifyMailAddressRequest(const ModifyMailAddressRequest &) = default ;
    ModifyMailAddressRequest(ModifyMailAddressRequest &&) = default ;
    ModifyMailAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyMailAddressRequest() = default ;
    ModifyMailAddressRequest& operator=(const ModifyMailAddressRequest &) = default ;
    ModifyMailAddressRequest& operator=(ModifyMailAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mailAddressId_ == nullptr
        && this->ownerId_ == nullptr && this->password_ == nullptr && this->replyAddress_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // mailAddressId Field Functions 
    bool hasMailAddressId() const { return this->mailAddressId_ != nullptr;};
    void deleteMailAddressId() { this->mailAddressId_ = nullptr;};
    inline int32_t getMailAddressId() const { DARABONBA_PTR_GET_DEFAULT(mailAddressId_, 0) };
    inline ModifyMailAddressRequest& setMailAddressId(int32_t mailAddressId) { DARABONBA_PTR_SET_VALUE(mailAddressId_, mailAddressId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyMailAddressRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifyMailAddressRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // replyAddress Field Functions 
    bool hasReplyAddress() const { return this->replyAddress_ != nullptr;};
    void deleteReplyAddress() { this->replyAddress_ = nullptr;};
    inline string getReplyAddress() const { DARABONBA_PTR_GET_DEFAULT(replyAddress_, "") };
    inline ModifyMailAddressRequest& setReplyAddress(string replyAddress) { DARABONBA_PTR_SET_VALUE(replyAddress_, replyAddress) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyMailAddressRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyMailAddressRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // Sending address ID
    // 
    // This parameter is required.
    shared_ptr<int32_t> mailAddressId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // - Length should be 10 to 20 characters, and must include numbers, uppercase letters, and lowercase letters.
    // 
    // - Must contain at least 2 digits, 2 uppercase letters, and 2 lowercase letters, and neither the digits nor the letters can consist of a single character repeated.
    // 
    // - Cannot be the same as the last set password.
    shared_ptr<string> password_ {};
    // Reply address
    shared_ptr<string> replyAddress_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
