// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGLOBALDATABASENETWORKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGLOBALDATABASENETWORKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateGlobalDatabaseNetworkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGlobalDatabaseNetworkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EnableGlobalDomainName, enableGlobalDomainName_);
      DARABONBA_PTR_TO_JSON(GDNDescription, GDNDescription_);
      DARABONBA_PTR_TO_JSON(GDNVersion, GDNVersion_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGlobalDatabaseNetworkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EnableGlobalDomainName, enableGlobalDomainName_);
      DARABONBA_PTR_FROM_JSON(GDNDescription, GDNDescription_);
      DARABONBA_PTR_FROM_JSON(GDNVersion, GDNVersion_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    CreateGlobalDatabaseNetworkRequest() = default ;
    CreateGlobalDatabaseNetworkRequest(const CreateGlobalDatabaseNetworkRequest &) = default ;
    CreateGlobalDatabaseNetworkRequest(CreateGlobalDatabaseNetworkRequest &&) = default ;
    CreateGlobalDatabaseNetworkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGlobalDatabaseNetworkRequest() = default ;
    CreateGlobalDatabaseNetworkRequest& operator=(const CreateGlobalDatabaseNetworkRequest &) = default ;
    CreateGlobalDatabaseNetworkRequest& operator=(CreateGlobalDatabaseNetworkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->enableGlobalDomainName_ == nullptr && return this->GDNDescription_ == nullptr && return this->GDNVersion_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->securityToken_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateGlobalDatabaseNetworkRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // enableGlobalDomainName Field Functions 
    bool hasEnableGlobalDomainName() const { return this->enableGlobalDomainName_ != nullptr;};
    void deleteEnableGlobalDomainName() { this->enableGlobalDomainName_ = nullptr;};
    inline bool enableGlobalDomainName() const { DARABONBA_PTR_GET_DEFAULT(enableGlobalDomainName_, false) };
    inline CreateGlobalDatabaseNetworkRequest& setEnableGlobalDomainName(bool enableGlobalDomainName) { DARABONBA_PTR_SET_VALUE(enableGlobalDomainName_, enableGlobalDomainName) };


    // GDNDescription Field Functions 
    bool hasGDNDescription() const { return this->GDNDescription_ != nullptr;};
    void deleteGDNDescription() { this->GDNDescription_ = nullptr;};
    inline string GDNDescription() const { DARABONBA_PTR_GET_DEFAULT(GDNDescription_, "") };
    inline CreateGlobalDatabaseNetworkRequest& setGDNDescription(string GDNDescription) { DARABONBA_PTR_SET_VALUE(GDNDescription_, GDNDescription) };


    // GDNVersion Field Functions 
    bool hasGDNVersion() const { return this->GDNVersion_ != nullptr;};
    void deleteGDNVersion() { this->GDNVersion_ = nullptr;};
    inline string GDNVersion() const { DARABONBA_PTR_GET_DEFAULT(GDNVersion_, "") };
    inline CreateGlobalDatabaseNetworkRequest& setGDNVersion(string GDNVersion) { DARABONBA_PTR_SET_VALUE(GDNVersion_, GDNVersion) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateGlobalDatabaseNetworkRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateGlobalDatabaseNetworkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateGlobalDatabaseNetworkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateGlobalDatabaseNetworkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateGlobalDatabaseNetworkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline CreateGlobalDatabaseNetworkRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The ID of the primary cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // Specifies whether to create a global domain name.
    std::shared_ptr<bool> enableGlobalDomainName_ = nullptr;
    // The description of the GDN. The description must meet the following requirements:
    // 
    // *   It cannot start with [http:// or https://.](http://https://。)
    // *   It must start with a letter.
    // *   It can contain letters, digits, underscores (_), and hyphens (-).
    // *   It must be 2 to 126 characters in length.
    std::shared_ptr<string> GDNDescription_ = nullptr;
    std::shared_ptr<string> GDNVersion_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
