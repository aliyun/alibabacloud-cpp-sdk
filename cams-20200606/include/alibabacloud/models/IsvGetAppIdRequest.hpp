// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ISVGETAPPIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ISVGETAPPIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class IsvGetAppIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IsvGetAppIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IntlVersion, intlVersion_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Permissions, permissions_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, IsvGetAppIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IntlVersion, intlVersion_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    IsvGetAppIdRequest() = default ;
    IsvGetAppIdRequest(const IsvGetAppIdRequest &) = default ;
    IsvGetAppIdRequest(IsvGetAppIdRequest &&) = default ;
    IsvGetAppIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IsvGetAppIdRequest() = default ;
    IsvGetAppIdRequest& operator=(const IsvGetAppIdRequest &) = default ;
    IsvGetAppIdRequest& operator=(IsvGetAppIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->intlVersion_ == nullptr
        && this->ownerId_ == nullptr && this->permissions_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->type_ == nullptr; };
    // intlVersion Field Functions 
    bool hasIntlVersion() const { return this->intlVersion_ != nullptr;};
    void deleteIntlVersion() { this->intlVersion_ = nullptr;};
    inline string getIntlVersion() const { DARABONBA_PTR_GET_DEFAULT(intlVersion_, "") };
    inline IsvGetAppIdRequest& setIntlVersion(string intlVersion) { DARABONBA_PTR_SET_VALUE(intlVersion_, intlVersion) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline IsvGetAppIdRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline string getPermissions() const { DARABONBA_PTR_GET_DEFAULT(permissions_, "") };
    inline IsvGetAppIdRequest& setPermissions(string permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline IsvGetAppIdRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline IsvGetAppIdRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline IsvGetAppIdRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> intlVersion_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> permissions_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
