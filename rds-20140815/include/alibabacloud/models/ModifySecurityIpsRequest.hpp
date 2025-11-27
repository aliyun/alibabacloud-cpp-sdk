// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSECURITYIPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSECURITYIPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifySecurityIpsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySecurityIpsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceIPArrayAttribute, DBInstanceIPArrayAttribute_);
      DARABONBA_PTR_TO_JSON(DBInstanceIPArrayName, DBInstanceIPArrayName_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(FreshWhiteListReadins, freshWhiteListReadins_);
      DARABONBA_PTR_TO_JSON(ModifyMode, modifyMode_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityIPType, securityIPType_);
      DARABONBA_PTR_TO_JSON(SecurityIps, securityIps_);
      DARABONBA_PTR_TO_JSON(WhitelistNetworkType, whitelistNetworkType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySecurityIpsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceIPArrayAttribute, DBInstanceIPArrayAttribute_);
      DARABONBA_PTR_FROM_JSON(DBInstanceIPArrayName, DBInstanceIPArrayName_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(FreshWhiteListReadins, freshWhiteListReadins_);
      DARABONBA_PTR_FROM_JSON(ModifyMode, modifyMode_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityIPType, securityIPType_);
      DARABONBA_PTR_FROM_JSON(SecurityIps, securityIps_);
      DARABONBA_PTR_FROM_JSON(WhitelistNetworkType, whitelistNetworkType_);
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
    virtual bool empty() const override { return this->DBInstanceIPArrayAttribute_ == nullptr
        && return this->DBInstanceIPArrayName_ == nullptr && return this->DBInstanceId_ == nullptr && return this->freshWhiteListReadins_ == nullptr && return this->modifyMode_ == nullptr && return this->resourceOwnerId_ == nullptr
        && return this->securityIPType_ == nullptr && return this->securityIps_ == nullptr && return this->whitelistNetworkType_ == nullptr; };
    // DBInstanceIPArrayAttribute Field Functions 
    bool hasDBInstanceIPArrayAttribute() const { return this->DBInstanceIPArrayAttribute_ != nullptr;};
    void deleteDBInstanceIPArrayAttribute() { this->DBInstanceIPArrayAttribute_ = nullptr;};
    inline string DBInstanceIPArrayAttribute() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceIPArrayAttribute_, "") };
    inline ModifySecurityIpsRequest& setDBInstanceIPArrayAttribute(string DBInstanceIPArrayAttribute) { DARABONBA_PTR_SET_VALUE(DBInstanceIPArrayAttribute_, DBInstanceIPArrayAttribute) };


    // DBInstanceIPArrayName Field Functions 
    bool hasDBInstanceIPArrayName() const { return this->DBInstanceIPArrayName_ != nullptr;};
    void deleteDBInstanceIPArrayName() { this->DBInstanceIPArrayName_ = nullptr;};
    inline string DBInstanceIPArrayName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceIPArrayName_, "") };
    inline ModifySecurityIpsRequest& setDBInstanceIPArrayName(string DBInstanceIPArrayName) { DARABONBA_PTR_SET_VALUE(DBInstanceIPArrayName_, DBInstanceIPArrayName) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifySecurityIpsRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // freshWhiteListReadins Field Functions 
    bool hasFreshWhiteListReadins() const { return this->freshWhiteListReadins_ != nullptr;};
    void deleteFreshWhiteListReadins() { this->freshWhiteListReadins_ = nullptr;};
    inline string freshWhiteListReadins() const { DARABONBA_PTR_GET_DEFAULT(freshWhiteListReadins_, "") };
    inline ModifySecurityIpsRequest& setFreshWhiteListReadins(string freshWhiteListReadins) { DARABONBA_PTR_SET_VALUE(freshWhiteListReadins_, freshWhiteListReadins) };


    // modifyMode Field Functions 
    bool hasModifyMode() const { return this->modifyMode_ != nullptr;};
    void deleteModifyMode() { this->modifyMode_ = nullptr;};
    inline string modifyMode() const { DARABONBA_PTR_GET_DEFAULT(modifyMode_, "") };
    inline ModifySecurityIpsRequest& setModifyMode(string modifyMode) { DARABONBA_PTR_SET_VALUE(modifyMode_, modifyMode) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifySecurityIpsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityIPType Field Functions 
    bool hasSecurityIPType() const { return this->securityIPType_ != nullptr;};
    void deleteSecurityIPType() { this->securityIPType_ = nullptr;};
    inline string securityIPType() const { DARABONBA_PTR_GET_DEFAULT(securityIPType_, "") };
    inline ModifySecurityIpsRequest& setSecurityIPType(string securityIPType) { DARABONBA_PTR_SET_VALUE(securityIPType_, securityIPType) };


    // securityIps Field Functions 
    bool hasSecurityIps() const { return this->securityIps_ != nullptr;};
    void deleteSecurityIps() { this->securityIps_ = nullptr;};
    inline string securityIps() const { DARABONBA_PTR_GET_DEFAULT(securityIps_, "") };
    inline ModifySecurityIpsRequest& setSecurityIps(string securityIps) { DARABONBA_PTR_SET_VALUE(securityIps_, securityIps) };


    // whitelistNetworkType Field Functions 
    bool hasWhitelistNetworkType() const { return this->whitelistNetworkType_ != nullptr;};
    void deleteWhitelistNetworkType() { this->whitelistNetworkType_ = nullptr;};
    inline string whitelistNetworkType() const { DARABONBA_PTR_GET_DEFAULT(whitelistNetworkType_, "") };
    inline ModifySecurityIpsRequest& setWhitelistNetworkType(string whitelistNetworkType) { DARABONBA_PTR_SET_VALUE(whitelistNetworkType_, whitelistNetworkType) };


  protected:
    // The attribute of the IP address whitelist. By default, this parameter is empty.
    // 
    // > The IP address whitelists that have the hidden attribute are not displayed in the ApsaraDB RDS console. These IP address whitelists are used to access Alibaba Cloud services, such as Data Transmission Service (DTS).
    std::shared_ptr<string> DBInstanceIPArrayAttribute_ = nullptr;
    // The name of the IP address whitelist that you want to modify. Default value: **Default**.
    // 
    // > A maximum of 200 IP address whitelists can be configured for each instance.
    std::shared_ptr<string> DBInstanceIPArrayName_ = nullptr;
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The read-only instances to which you want to synchronize the IP address whitelist.
    // 
    // *   This parameter applies only to ApsaraDB RDS for PostgreSQL instances.
    // *   If the instance is attached with a read-only instance, you can use this parameter to synchronize the IP address whitelist to the read-only instance. If the instance is attached with multiple read-only instances, separate the read-only instances with commas (,).
    // *   If the instance is not attached with a read-only instance, leave this parameter empty.
    std::shared_ptr<string> freshWhiteListReadins_ = nullptr;
    // The method that is used to modify the whitelist. Valid values:
    // 
    // *   **Cover**: Use the IP addresses and CIDR blocks that are specified in the **SecurityIps** parameter to overwrite the existing IP addresses and CIDR blocks in the IP address whitelist.
    // *   **Append**: Add the IP addresses and CIDR blocks that are specified in the **SecurityIps** parameter to the IP address whitelist.
    // *   **Delete**: Delete the IP addresses and CIDR blocks that are specified in the **SecurityIps** parameter from the IP address whitelist. You must retain at least one IP address or CIDR block.
    // 
    // Default value: **Cover**.
    std::shared_ptr<string> modifyMode_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The IP address type. The value is fixed as IPv4.
    std::shared_ptr<string> securityIPType_ = nullptr;
    // The IP addresses in an IP address whitelist. Separate multiple IP addresses with commas (,). Each IP address in the IP address whitelist must be unique. The entries in the IP address whitelist must be in one of the following formats:
    // 
    // *   IP addresses, such as 10.23.XX.XX.
    // *   CIDR blocks, such as 10.23.XX.XX/24. In this example, 24 indicates that the prefix of each IP address in the IP address whitelist is 24 bits in length. You can replace 24 with a value within the range of 1 to 32.
    // 
    // > A maximum of 1,000 IP addresses or CIDR blocks can be added for each instance. If you want to add a large number of IP addresses, we recommend that you merge them into CIDR blocks, such as 10.23.XX.XX/24.
    // 
    // This parameter is required.
    std::shared_ptr<string> securityIps_ = nullptr;
    // The network type of the IP address whitelist. Valid values:
    // 
    // *   **Classic**: classic network in enhanced whitelist mode
    // *   **VPC**: virtual private cloud (VPC) network type in enhanced whitelist mode.
    // *   **MIX**: standard whitelist mode
    // 
    // Default value: **MIX**.
    // 
    // > 
    // 
    // *   In standard whitelist mode, IP addresses and CIDR blocks are added only to the default IP address whitelist. In enhanced whitelist mode, IP addresses and CIDR blocks are added to the IP address whitelists of the classic network type and the VPC network type.
    // 
    // *   If your RDS instance runs PostgreSQL and uses cloud disks, set this parameter to MIX. If you set it to another value, the system automatically changes the value to MIX.
    std::shared_ptr<string> whitelistNetworkType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
