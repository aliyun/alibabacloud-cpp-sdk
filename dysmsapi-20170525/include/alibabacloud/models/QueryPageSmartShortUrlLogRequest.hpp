// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPAGESMARTSHORTURLLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPAGESMARTSHORTURLLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QueryPageSmartShortUrlLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPageSmartShortUrlLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateDateEnd, createDateEnd_);
      DARABONBA_PTR_TO_JSON(CreateDateStart, createDateStart_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ShortUrl, shortUrl_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPageSmartShortUrlLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateDateEnd, createDateEnd_);
      DARABONBA_PTR_FROM_JSON(CreateDateStart, createDateStart_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ShortUrl, shortUrl_);
    };
    QueryPageSmartShortUrlLogRequest() = default ;
    QueryPageSmartShortUrlLogRequest(const QueryPageSmartShortUrlLogRequest &) = default ;
    QueryPageSmartShortUrlLogRequest(QueryPageSmartShortUrlLogRequest &&) = default ;
    QueryPageSmartShortUrlLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPageSmartShortUrlLogRequest() = default ;
    QueryPageSmartShortUrlLogRequest& operator=(const QueryPageSmartShortUrlLogRequest &) = default ;
    QueryPageSmartShortUrlLogRequest& operator=(QueryPageSmartShortUrlLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createDateEnd_ == nullptr
        && return this->createDateStart_ == nullptr && return this->ownerId_ == nullptr && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->phoneNumber_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->shortUrl_ == nullptr; };
    // createDateEnd Field Functions 
    bool hasCreateDateEnd() const { return this->createDateEnd_ != nullptr;};
    void deleteCreateDateEnd() { this->createDateEnd_ = nullptr;};
    inline int64_t createDateEnd() const { DARABONBA_PTR_GET_DEFAULT(createDateEnd_, 0L) };
    inline QueryPageSmartShortUrlLogRequest& setCreateDateEnd(int64_t createDateEnd) { DARABONBA_PTR_SET_VALUE(createDateEnd_, createDateEnd) };


    // createDateStart Field Functions 
    bool hasCreateDateStart() const { return this->createDateStart_ != nullptr;};
    void deleteCreateDateStart() { this->createDateStart_ = nullptr;};
    inline int64_t createDateStart() const { DARABONBA_PTR_GET_DEFAULT(createDateStart_, 0L) };
    inline QueryPageSmartShortUrlLogRequest& setCreateDateStart(int64_t createDateStart) { DARABONBA_PTR_SET_VALUE(createDateStart_, createDateStart) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryPageSmartShortUrlLogRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline QueryPageSmartShortUrlLogRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QueryPageSmartShortUrlLogRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline QueryPageSmartShortUrlLogRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryPageSmartShortUrlLogRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QueryPageSmartShortUrlLogRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // shortUrl Field Functions 
    bool hasShortUrl() const { return this->shortUrl_ != nullptr;};
    void deleteShortUrl() { this->shortUrl_ = nullptr;};
    inline string shortUrl() const { DARABONBA_PTR_GET_DEFAULT(shortUrl_, "") };
    inline QueryPageSmartShortUrlLogRequest& setShortUrl(string shortUrl) { DARABONBA_PTR_SET_VALUE(shortUrl_, shortUrl) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> createDateEnd_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> createDateStart_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> phoneNumber_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<string> shortUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
