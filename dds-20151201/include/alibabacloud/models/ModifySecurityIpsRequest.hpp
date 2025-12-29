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
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
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
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
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
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->modifyMode_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->securityIpGroupAttribute_ == nullptr && this->securityIpGroupName_ == nullptr && this->securityIps_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifySecurityIpsRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


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
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The method that is used to modify the IP address whitelist. Valid values:
    // 
    // *   **Cover**: overwrites the original IP address whitelist.
    // *   **Append**: appends data to the IP address whitelist.
    // *   **Delete**: deletes the IP address whitelist.
    // 
    // Default value: **Cover**.
    shared_ptr<string> modifyMode_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The attribute of the IP address whitelist. It can contain a maximum of 120 characters in length and can contain uppercase letters, lowercase letters, and digits.
    // 
    // This parameter is empty by default.
    shared_ptr<string> securityIpGroupAttribute_ {};
    // The name of the IP address whitelist that you want to modify. Default value: **default**.
    shared_ptr<string> securityIpGroupName_ {};
    // The IP addresses in the IP address whitelist. Separate multiple IP addresses with commas (,). You can add a maximum of 1,000 different IP addresses to the IP address whitelist. The entries in the IP address whitelist must be in one of the following formats:
    // 
    // *   IP addresses, such as 127.0.0.1.
    // *   CIDR blocks, such as 127.0.0.1/24. In this example, 24 indicates that the prefix of each IP address in the IP address whitelist is 24 bits in length. You can replace 24 with a value within the range of 1 to 32.
    // 
    // This parameter is required.
    shared_ptr<string> securityIps_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
