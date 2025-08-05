// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKREPLYTOMAILADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKREPLYTOMAILADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class CheckReplyToMailAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckReplyToMailAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MailAddressId, mailAddressId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckReplyToMailAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MailAddressId, mailAddressId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CheckReplyToMailAddressRequest() = default ;
    CheckReplyToMailAddressRequest(const CheckReplyToMailAddressRequest &) = default ;
    CheckReplyToMailAddressRequest(CheckReplyToMailAddressRequest &&) = default ;
    CheckReplyToMailAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckReplyToMailAddressRequest() = default ;
    CheckReplyToMailAddressRequest& operator=(const CheckReplyToMailAddressRequest &) = default ;
    CheckReplyToMailAddressRequest& operator=(CheckReplyToMailAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->mailAddressId_ != nullptr && this->ownerId_ != nullptr && this->region_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CheckReplyToMailAddressRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // mailAddressId Field Functions 
    bool hasMailAddressId() const { return this->mailAddressId_ != nullptr;};
    void deleteMailAddressId() { this->mailAddressId_ = nullptr;};
    inline int32_t mailAddressId() const { DARABONBA_PTR_GET_DEFAULT(mailAddressId_, 0) };
    inline CheckReplyToMailAddressRequest& setMailAddressId(int32_t mailAddressId) { DARABONBA_PTR_SET_VALUE(mailAddressId_, mailAddressId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CheckReplyToMailAddressRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CheckReplyToMailAddressRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CheckReplyToMailAddressRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CheckReplyToMailAddressRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // Language.
    // 
    // en is English, and any other value or an empty value defaults to Chinese.
    std::shared_ptr<string> lang_ = nullptr;
    // Sender Address ID
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> mailAddressId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // Region
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
