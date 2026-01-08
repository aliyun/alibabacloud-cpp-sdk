// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMESSENGERPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMESSENGERPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class CreateMessengerPageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMessengerPageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdAccountIds, adAccountIds_);
      DARABONBA_PTR_TO_JSON(AuthenticationCode, authenticationCode_);
      DARABONBA_PTR_TO_JSON(BusinessId, businessId_);
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageId, pageId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMessengerPageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdAccountIds, adAccountIds_);
      DARABONBA_PTR_FROM_JSON(AuthenticationCode, authenticationCode_);
      DARABONBA_PTR_FROM_JSON(BusinessId, businessId_);
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageId, pageId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CreateMessengerPageRequest() = default ;
    CreateMessengerPageRequest(const CreateMessengerPageRequest &) = default ;
    CreateMessengerPageRequest(CreateMessengerPageRequest &&) = default ;
    CreateMessengerPageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMessengerPageRequest() = default ;
    CreateMessengerPageRequest& operator=(const CreateMessengerPageRequest &) = default ;
    CreateMessengerPageRequest& operator=(CreateMessengerPageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adAccountIds_ == nullptr
        && this->authenticationCode_ == nullptr && this->businessId_ == nullptr && this->custSpaceId_ == nullptr && this->ownerId_ == nullptr && this->pageId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // adAccountIds Field Functions 
    bool hasAdAccountIds() const { return this->adAccountIds_ != nullptr;};
    void deleteAdAccountIds() { this->adAccountIds_ = nullptr;};
    inline const vector<string> & getAdAccountIds() const { DARABONBA_PTR_GET_CONST(adAccountIds_, vector<string>) };
    inline vector<string> getAdAccountIds() { DARABONBA_PTR_GET(adAccountIds_, vector<string>) };
    inline CreateMessengerPageRequest& setAdAccountIds(const vector<string> & adAccountIds) { DARABONBA_PTR_SET_VALUE(adAccountIds_, adAccountIds) };
    inline CreateMessengerPageRequest& setAdAccountIds(vector<string> && adAccountIds) { DARABONBA_PTR_SET_RVALUE(adAccountIds_, adAccountIds) };


    // authenticationCode Field Functions 
    bool hasAuthenticationCode() const { return this->authenticationCode_ != nullptr;};
    void deleteAuthenticationCode() { this->authenticationCode_ = nullptr;};
    inline string getAuthenticationCode() const { DARABONBA_PTR_GET_DEFAULT(authenticationCode_, "") };
    inline CreateMessengerPageRequest& setAuthenticationCode(string authenticationCode) { DARABONBA_PTR_SET_VALUE(authenticationCode_, authenticationCode) };


    // businessId Field Functions 
    bool hasBusinessId() const { return this->businessId_ != nullptr;};
    void deleteBusinessId() { this->businessId_ = nullptr;};
    inline string getBusinessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, "") };
    inline CreateMessengerPageRequest& setBusinessId(string businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline CreateMessengerPageRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateMessengerPageRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageId Field Functions 
    bool hasPageId() const { return this->pageId_ != nullptr;};
    void deletePageId() { this->pageId_ = nullptr;};
    inline string getPageId() const { DARABONBA_PTR_GET_DEFAULT(pageId_, "") };
    inline CreateMessengerPageRequest& setPageId(string pageId) { DARABONBA_PTR_SET_VALUE(pageId_, pageId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateMessengerPageRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateMessengerPageRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> adAccountIds_ {};
    // This parameter is required.
    shared_ptr<string> authenticationCode_ {};
    // This parameter is required.
    shared_ptr<string> businessId_ {};
    // This parameter is required.
    shared_ptr<string> custSpaceId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // This parameter is required.
    shared_ptr<string> pageId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
