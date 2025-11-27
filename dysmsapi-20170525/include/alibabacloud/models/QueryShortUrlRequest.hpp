// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSHORTURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSHORTURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QueryShortUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryShortUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ShortUrl, shortUrl_);
    };
    friend void from_json(const Darabonba::Json& j, QueryShortUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ShortUrl, shortUrl_);
    };
    QueryShortUrlRequest() = default ;
    QueryShortUrlRequest(const QueryShortUrlRequest &) = default ;
    QueryShortUrlRequest(QueryShortUrlRequest &&) = default ;
    QueryShortUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryShortUrlRequest() = default ;
    QueryShortUrlRequest& operator=(const QueryShortUrlRequest &) = default ;
    QueryShortUrlRequest& operator=(QueryShortUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->shortUrl_ == nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryShortUrlRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryShortUrlRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QueryShortUrlRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // shortUrl Field Functions 
    bool hasShortUrl() const { return this->shortUrl_ != nullptr;};
    void deleteShortUrl() { this->shortUrl_ = nullptr;};
    inline string shortUrl() const { DARABONBA_PTR_GET_DEFAULT(shortUrl_, "") };
    inline QueryShortUrlRequest& setShortUrl(string shortUrl) { DARABONBA_PTR_SET_VALUE(shortUrl_, shortUrl) };


  protected:
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The short URL. You can query the short URL by calling the [AddShortUrl](https://help.aliyun.com/document_detail/186774.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> shortUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
