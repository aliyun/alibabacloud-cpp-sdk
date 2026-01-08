// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSENGERSUBSCRIPTIONTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSENGERSUBSCRIPTIONTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class ListMessengerSubscriptionTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessengerSubscriptionTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(CustomAudienceId, customAudienceId_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageId, pageId_);
      DARABONBA_PTR_TO_JSON(PageKey, pageKey_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TokenType, tokenType_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessengerSubscriptionTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(CustomAudienceId, customAudienceId_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageId, pageId_);
      DARABONBA_PTR_FROM_JSON(PageKey, pageKey_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TokenType, tokenType_);
    };
    ListMessengerSubscriptionTokenRequest() = default ;
    ListMessengerSubscriptionTokenRequest(const ListMessengerSubscriptionTokenRequest &) = default ;
    ListMessengerSubscriptionTokenRequest(ListMessengerSubscriptionTokenRequest &&) = default ;
    ListMessengerSubscriptionTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessengerSubscriptionTokenRequest() = default ;
    ListMessengerSubscriptionTokenRequest& operator=(const ListMessengerSubscriptionTokenRequest &) = default ;
    ListMessengerSubscriptionTokenRequest& operator=(ListMessengerSubscriptionTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->custSpaceId_ == nullptr
        && this->customAudienceId_ == nullptr && this->limit_ == nullptr && this->ownerId_ == nullptr && this->pageId_ == nullptr && this->pageKey_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->tokenType_ == nullptr; };
    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline ListMessengerSubscriptionTokenRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // customAudienceId Field Functions 
    bool hasCustomAudienceId() const { return this->customAudienceId_ != nullptr;};
    void deleteCustomAudienceId() { this->customAudienceId_ = nullptr;};
    inline string getCustomAudienceId() const { DARABONBA_PTR_GET_DEFAULT(customAudienceId_, "") };
    inline ListMessengerSubscriptionTokenRequest& setCustomAudienceId(string customAudienceId) { DARABONBA_PTR_SET_VALUE(customAudienceId_, customAudienceId) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline ListMessengerSubscriptionTokenRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListMessengerSubscriptionTokenRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageId Field Functions 
    bool hasPageId() const { return this->pageId_ != nullptr;};
    void deletePageId() { this->pageId_ = nullptr;};
    inline string getPageId() const { DARABONBA_PTR_GET_DEFAULT(pageId_, "") };
    inline ListMessengerSubscriptionTokenRequest& setPageId(string pageId) { DARABONBA_PTR_SET_VALUE(pageId_, pageId) };


    // pageKey Field Functions 
    bool hasPageKey() const { return this->pageKey_ != nullptr;};
    void deletePageKey() { this->pageKey_ = nullptr;};
    inline string getPageKey() const { DARABONBA_PTR_GET_DEFAULT(pageKey_, "") };
    inline ListMessengerSubscriptionTokenRequest& setPageKey(string pageKey) { DARABONBA_PTR_SET_VALUE(pageKey_, pageKey) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListMessengerSubscriptionTokenRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListMessengerSubscriptionTokenRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tokenType Field Functions 
    bool hasTokenType() const { return this->tokenType_ != nullptr;};
    void deleteTokenType() { this->tokenType_ = nullptr;};
    inline string getTokenType() const { DARABONBA_PTR_GET_DEFAULT(tokenType_, "") };
    inline ListMessengerSubscriptionTokenRequest& setTokenType(string tokenType) { DARABONBA_PTR_SET_VALUE(tokenType_, tokenType) };


  protected:
    // This parameter is required.
    shared_ptr<string> custSpaceId_ {};
    shared_ptr<string> customAudienceId_ {};
    shared_ptr<int64_t> limit_ {};
    shared_ptr<int64_t> ownerId_ {};
    // This parameter is required.
    shared_ptr<string> pageId_ {};
    shared_ptr<string> pageKey_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // This parameter is required.
    shared_ptr<string> tokenType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
