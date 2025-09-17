// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEACCESSTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEACCESSTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DeleteAccessTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAccessTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessTokenId, accessTokenId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAccessTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessTokenId, accessTokenId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
    };
    DeleteAccessTokenRequest() = default ;
    DeleteAccessTokenRequest(const DeleteAccessTokenRequest &) = default ;
    DeleteAccessTokenRequest(DeleteAccessTokenRequest &&) = default ;
    DeleteAccessTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAccessTokenRequest() = default ;
    DeleteAccessTokenRequest& operator=(const DeleteAccessTokenRequest &) = default ;
    DeleteAccessTokenRequest& operator=(DeleteAccessTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessTokenId_ != nullptr
        && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr; };
    // accessTokenId Field Functions 
    bool hasAccessTokenId() const { return this->accessTokenId_ != nullptr;};
    void deleteAccessTokenId() { this->accessTokenId_ = nullptr;};
    inline string accessTokenId() const { DARABONBA_PTR_GET_DEFAULT(accessTokenId_, "") };
    inline DeleteAccessTokenRequest& setAccessTokenId(string accessTokenId) { DARABONBA_PTR_SET_VALUE(accessTokenId_, accessTokenId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteAccessTokenRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DeleteAccessTokenRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


  protected:
    // The ID of the activation code.
    // 
    // This parameter is required.
    std::shared_ptr<string> accessTokenId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
