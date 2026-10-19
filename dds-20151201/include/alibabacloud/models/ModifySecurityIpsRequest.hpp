// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSECURITYIPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSECURITYIPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class ModifySecurityIpsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySecurityIpsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(ModifyMode, modifyMode_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityIpGroupAttribute, securityIpGroupAttribute_);
      DARABONBA_PTR_TO_JSON(SecurityIpGroupName, securityIpGroupName_);
      DARABONBA_PTR_TO_JSON(SecurityIps, securityIps_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySecurityIpsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(ModifyMode, modifyMode_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityIpGroupAttribute, securityIpGroupAttribute_);
      DARABONBA_PTR_FROM_JSON(SecurityIpGroupName, securityIpGroupName_);
      DARABONBA_PTR_FROM_JSON(SecurityIps, securityIps_);
    };
    ModifySecurityIpsRequest() = default ;
    ModifySecurityIpsRequest(const ModifySecurityIpsRequest &) = default ;
    ModifySecurityIpsRequest(ModifySecurityIpsRequest &&) = default ;
    ModifySecurityIpsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySecurityIpsRequest() = default ;
    ModifySecurityIpsRequest& operator=(const ModifySecurityIpsRequest &) = default ;
    ModifySecurityIpsRequest& operator=(ModifySecurityIpsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->DBInstanceId_ == nullptr && this->dryRun_ == nullptr && this->modifyMode_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->securityIpGroupAttribute_ == nullptr && this->securityIpGroupName_ == nullptr && this->securityIps_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifySecurityIpsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifySecurityIpsRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifySecurityIpsRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // modifyMode Field Functions 
    bool hasModifyMode() const { return this->modifyMode_ != nullptr;};
    void deleteModifyMode() { this->modifyMode_ = nullptr;};
    inline string getModifyMode() const { DARABONBA_PTR_GET_DEFAULT(modifyMode_, "") };
    inline ModifySecurityIpsRequest& setModifyMode(string modifyMode) { DARABONBA_PTR_SET_VALUE(modifyMode_, modifyMode) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifySecurityIpsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifySecurityIpsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifySecurityIpsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifySecurityIpsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityIpGroupAttribute Field Functions 
    bool hasSecurityIpGroupAttribute() const { return this->securityIpGroupAttribute_ != nullptr;};
    void deleteSecurityIpGroupAttribute() { this->securityIpGroupAttribute_ = nullptr;};
    inline string getSecurityIpGroupAttribute() const { DARABONBA_PTR_GET_DEFAULT(securityIpGroupAttribute_, "") };
    inline ModifySecurityIpsRequest& setSecurityIpGroupAttribute(string securityIpGroupAttribute) { DARABONBA_PTR_SET_VALUE(securityIpGroupAttribute_, securityIpGroupAttribute) };


    // securityIpGroupName Field Functions 
    bool hasSecurityIpGroupName() const { return this->securityIpGroupName_ != nullptr;};
    void deleteSecurityIpGroupName() { this->securityIpGroupName_ = nullptr;};
    inline string getSecurityIpGroupName() const { DARABONBA_PTR_GET_DEFAULT(securityIpGroupName_, "") };
    inline ModifySecurityIpsRequest& setSecurityIpGroupName(string securityIpGroupName) { DARABONBA_PTR_SET_VALUE(securityIpGroupName_, securityIpGroupName) };


    // securityIps Field Functions 
    bool hasSecurityIps() const { return this->securityIps_ != nullptr;};
    void deleteSecurityIps() { this->securityIps_ = nullptr;};
    inline string getSecurityIps() const { DARABONBA_PTR_GET_DEFAULT(securityIps_, "") };
    inline ModifySecurityIpsRequest& setSecurityIps(string securityIps) { DARABONBA_PTR_SET_VALUE(securityIps_, securityIps) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. Example: qwertyui1234567
    shared_ptr<string> clientToken_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // Specifies whether to perform a dry run. Valid values:
    // true: performs a dry run without calling the operation. The system checks the request parameters, request format, service limits, and available resources. If the check fails, the corresponding error is returned. If the check succeeds, the DryRunOperation error code is returned.
    // false (default): sends the request. If the check succeeds, the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The modification method. Valid values:
    // - **Cover**: Overwrites the original whitelist.
    // - **Append**: Appends to the whitelist. An error is returned if duplicate IP addresses exist.
    // - **Extend**: Appends to the whitelist. Duplicate IP addresses are merged.
    // - **Delete**: Deletes the whitelist.
    // 
    // 
    // Default value: **Cover**.
    shared_ptr<string> modifyMode_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The attribute of the whitelist group. The value can contain uppercase letters, lowercase letters, and digits. The maximum length is 120 characters.
    // 
    // Default value: empty string.
    shared_ptr<string> securityIpGroupAttribute_ {};
    // The name of the IP whitelist group to modify. Default value: **default**.
    shared_ptr<string> securityIpGroupName_ {};
    // The list of IP addresses in the IP whitelist group. Separate multiple IP addresses with commas (,). IP addresses cannot be duplicated. A maximum of 1000 IP addresses are supported. The following two formats are supported:
    // - IP address format, such as 127.0.0.1.
    // - CIDR format, such as 127.0.0.1/24 (Classless Inter-Domain Routing, where 24 indicates the length of the prefix in the address. The value ranges from 1 to 32).
    // 
    // This parameter is required.
    shared_ptr<string> securityIps_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
