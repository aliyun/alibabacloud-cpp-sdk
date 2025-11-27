// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESMARTSHORTURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESMARTSHORTURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class CreateSmartShortUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSmartShortUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneNumbers, phoneNumbers_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceUrl, sourceUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSmartShortUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumbers, phoneNumbers_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceUrl, sourceUrl_);
    };
    CreateSmartShortUrlRequest() = default ;
    CreateSmartShortUrlRequest(const CreateSmartShortUrlRequest &) = default ;
    CreateSmartShortUrlRequest(CreateSmartShortUrlRequest &&) = default ;
    CreateSmartShortUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSmartShortUrlRequest() = default ;
    CreateSmartShortUrlRequest& operator=(const CreateSmartShortUrlRequest &) = default ;
    CreateSmartShortUrlRequest& operator=(CreateSmartShortUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->outId_ == nullptr
        && return this->ownerId_ == nullptr && return this->phoneNumbers_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->sourceUrl_ == nullptr; };
    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string outId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline CreateSmartShortUrlRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateSmartShortUrlRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNumbers Field Functions 
    bool hasPhoneNumbers() const { return this->phoneNumbers_ != nullptr;};
    void deletePhoneNumbers() { this->phoneNumbers_ = nullptr;};
    inline string phoneNumbers() const { DARABONBA_PTR_GET_DEFAULT(phoneNumbers_, "") };
    inline CreateSmartShortUrlRequest& setPhoneNumbers(string phoneNumbers) { DARABONBA_PTR_SET_VALUE(phoneNumbers_, phoneNumbers) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateSmartShortUrlRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateSmartShortUrlRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceUrl Field Functions 
    bool hasSourceUrl() const { return this->sourceUrl_ != nullptr;};
    void deleteSourceUrl() { this->sourceUrl_ = nullptr;};
    inline string sourceUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceUrl_, "") };
    inline CreateSmartShortUrlRequest& setSourceUrl(string sourceUrl) { DARABONBA_PTR_SET_VALUE(sourceUrl_, sourceUrl) };


  protected:
    std::shared_ptr<string> outId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> phoneNumbers_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sourceUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
