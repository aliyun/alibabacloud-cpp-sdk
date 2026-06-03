// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGRAPHICAUTHSCHEMECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGRAPHICAUTHSCHEMECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypns20170620
{
namespace Models
{
  class CreateGraphicAuthSchemeConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGraphicAuthSchemeConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SchemeName, schemeName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGraphicAuthSchemeConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SchemeName, schemeName_);
    };
    CreateGraphicAuthSchemeConfigRequest() = default ;
    CreateGraphicAuthSchemeConfigRequest(const CreateGraphicAuthSchemeConfigRequest &) = default ;
    CreateGraphicAuthSchemeConfigRequest(CreateGraphicAuthSchemeConfigRequest &&) = default ;
    CreateGraphicAuthSchemeConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGraphicAuthSchemeConfigRequest() = default ;
    CreateGraphicAuthSchemeConfigRequest& operator=(const CreateGraphicAuthSchemeConfigRequest &) = default ;
    CreateGraphicAuthSchemeConfigRequest& operator=(CreateGraphicAuthSchemeConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerId_ == nullptr
        && this->platform_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->schemeName_ == nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateGraphicAuthSchemeConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline CreateGraphicAuthSchemeConfigRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateGraphicAuthSchemeConfigRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateGraphicAuthSchemeConfigRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // schemeName Field Functions 
    bool hasSchemeName() const { return this->schemeName_ != nullptr;};
    void deleteSchemeName() { this->schemeName_ = nullptr;};
    inline string getSchemeName() const { DARABONBA_PTR_GET_DEFAULT(schemeName_, "") };
    inline CreateGraphicAuthSchemeConfigRequest& setSchemeName(string schemeName) { DARABONBA_PTR_SET_VALUE(schemeName_, schemeName) };


  protected:
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> platform_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> schemeName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypns20170620
#endif
