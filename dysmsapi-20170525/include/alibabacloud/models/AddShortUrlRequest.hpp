// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSHORTURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDSHORTURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class AddShortUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddShortUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EffectiveDays, effectiveDays_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ShortUrlName, shortUrlName_);
      DARABONBA_PTR_TO_JSON(SourceUrl, sourceUrl_);
    };
    friend void from_json(const Darabonba::Json& j, AddShortUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EffectiveDays, effectiveDays_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ShortUrlName, shortUrlName_);
      DARABONBA_PTR_FROM_JSON(SourceUrl, sourceUrl_);
    };
    AddShortUrlRequest() = default ;
    AddShortUrlRequest(const AddShortUrlRequest &) = default ;
    AddShortUrlRequest(AddShortUrlRequest &&) = default ;
    AddShortUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddShortUrlRequest() = default ;
    AddShortUrlRequest& operator=(const AddShortUrlRequest &) = default ;
    AddShortUrlRequest& operator=(AddShortUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->effectiveDays_ == nullptr
        && return this->ownerId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->shortUrlName_ == nullptr && return this->sourceUrl_ == nullptr; };
    // effectiveDays Field Functions 
    bool hasEffectiveDays() const { return this->effectiveDays_ != nullptr;};
    void deleteEffectiveDays() { this->effectiveDays_ = nullptr;};
    inline string effectiveDays() const { DARABONBA_PTR_GET_DEFAULT(effectiveDays_, "") };
    inline AddShortUrlRequest& setEffectiveDays(string effectiveDays) { DARABONBA_PTR_SET_VALUE(effectiveDays_, effectiveDays) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddShortUrlRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AddShortUrlRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AddShortUrlRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // shortUrlName Field Functions 
    bool hasShortUrlName() const { return this->shortUrlName_ != nullptr;};
    void deleteShortUrlName() { this->shortUrlName_ = nullptr;};
    inline string shortUrlName() const { DARABONBA_PTR_GET_DEFAULT(shortUrlName_, "") };
    inline AddShortUrlRequest& setShortUrlName(string shortUrlName) { DARABONBA_PTR_SET_VALUE(shortUrlName_, shortUrlName) };


    // sourceUrl Field Functions 
    bool hasSourceUrl() const { return this->sourceUrl_ != nullptr;};
    void deleteSourceUrl() { this->sourceUrl_ = nullptr;};
    inline string sourceUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceUrl_, "") };
    inline AddShortUrlRequest& setSourceUrl(string sourceUrl) { DARABONBA_PTR_SET_VALUE(sourceUrl_, sourceUrl) };


  protected:
    // The validity period of the short URL. Unit: days. The maximum validity period is 90 days.
    // 
    // This parameter is required.
    std::shared_ptr<string> effectiveDays_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The service name of the short URL. The name cannot exceed 13 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> shortUrlName_ = nullptr;
    // The source URL. The URL cannot exceed 1,000 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
