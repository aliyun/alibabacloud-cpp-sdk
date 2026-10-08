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
        && this->DBInstanceIPArrayName_ == nullptr && this->DBInstanceId_ == nullptr && this->freshWhiteListReadins_ == nullptr && this->modifyMode_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->securityIPType_ == nullptr && this->securityIps_ == nullptr && this->whitelistNetworkType_ == nullptr; };
    // DBInstanceIPArrayAttribute Field Functions 
    bool hasDBInstanceIPArrayAttribute() const { return this->DBInstanceIPArrayAttribute_ != nullptr;};
    void deleteDBInstanceIPArrayAttribute() { this->DBInstanceIPArrayAttribute_ = nullptr;};
    inline string getDBInstanceIPArrayAttribute() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceIPArrayAttribute_, "") };
    inline ModifySecurityIpsRequest& setDBInstanceIPArrayAttribute(string DBInstanceIPArrayAttribute) { DARABONBA_PTR_SET_VALUE(DBInstanceIPArrayAttribute_, DBInstanceIPArrayAttribute) };


    // DBInstanceIPArrayName Field Functions 
    bool hasDBInstanceIPArrayName() const { return this->DBInstanceIPArrayName_ != nullptr;};
    void deleteDBInstanceIPArrayName() { this->DBInstanceIPArrayName_ = nullptr;};
    inline string getDBInstanceIPArrayName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceIPArrayName_, "") };
    inline ModifySecurityIpsRequest& setDBInstanceIPArrayName(string DBInstanceIPArrayName) { DARABONBA_PTR_SET_VALUE(DBInstanceIPArrayName_, DBInstanceIPArrayName) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifySecurityIpsRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // freshWhiteListReadins Field Functions 
    bool hasFreshWhiteListReadins() const { return this->freshWhiteListReadins_ != nullptr;};
    void deleteFreshWhiteListReadins() { this->freshWhiteListReadins_ = nullptr;};
    inline string getFreshWhiteListReadins() const { DARABONBA_PTR_GET_DEFAULT(freshWhiteListReadins_, "") };
    inline ModifySecurityIpsRequest& setFreshWhiteListReadins(string freshWhiteListReadins) { DARABONBA_PTR_SET_VALUE(freshWhiteListReadins_, freshWhiteListReadins) };


    // modifyMode Field Functions 
    bool hasModifyMode() const { return this->modifyMode_ != nullptr;};
    void deleteModifyMode() { this->modifyMode_ = nullptr;};
    inline string getModifyMode() const { DARABONBA_PTR_GET_DEFAULT(modifyMode_, "") };
    inline ModifySecurityIpsRequest& setModifyMode(string modifyMode) { DARABONBA_PTR_SET_VALUE(modifyMode_, modifyMode) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifySecurityIpsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityIPType Field Functions 
    bool hasSecurityIPType() const { return this->securityIPType_ != nullptr;};
    void deleteSecurityIPType() { this->securityIPType_ = nullptr;};
    inline string getSecurityIPType() const { DARABONBA_PTR_GET_DEFAULT(securityIPType_, "") };
    inline ModifySecurityIpsRequest& setSecurityIPType(string securityIPType) { DARABONBA_PTR_SET_VALUE(securityIPType_, securityIPType) };


    // securityIps Field Functions 
    bool hasSecurityIps() const { return this->securityIps_ != nullptr;};
    void deleteSecurityIps() { this->securityIps_ = nullptr;};
    inline string getSecurityIps() const { DARABONBA_PTR_GET_DEFAULT(securityIps_, "") };
    inline ModifySecurityIpsRequest& setSecurityIps(string securityIps) { DARABONBA_PTR_SET_VALUE(securityIps_, securityIps) };


    // whitelistNetworkType Field Functions 
    bool hasWhitelistNetworkType() const { return this->whitelistNetworkType_ != nullptr;};
    void deleteWhitelistNetworkType() { this->whitelistNetworkType_ = nullptr;};
    inline string getWhitelistNetworkType() const { DARABONBA_PTR_GET_DEFAULT(whitelistNetworkType_, "") };
    inline ModifySecurityIpsRequest& setWhitelistNetworkType(string whitelistNetworkType) { DARABONBA_PTR_SET_VALUE(whitelistNetworkType_, whitelistNetworkType) };


  protected:
    // The attribute of the whitelist group.
    // 
    // - (Default) If you do not specify this parameter, the group is a common group.
    // - If you set this parameter to `hidden`, the group is a system default group used by services such as DMS, DTS, and DAS. These groups are not displayed in the console. Deleting or modifying these groups may prevent DMS, DTS, and DAS from accessing ApsaraDB RDS. Proceed with caution.
    shared_ptr<string> DBInstanceIPArrayAttribute_ {};
    // The name of the whitelist group to modify. Default value: Default. If the specified group does not exist, a new group is automatically created.
    // 
    // >Each instance supports up to 200 whitelist groups.
    shared_ptr<string> DBInstanceIPArrayName_ {};
    // The target instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The list of read-only instances to which the whitelist is synchronized.
    // 
    // - This parameter is applicable only to ApsaraDB RDS for PostgreSQL instances that have read-only instances.
    // - Separate multiple read-only instances with commas (,).
    shared_ptr<string> freshWhiteListReadins_ {};
    // The modification mode. Valid values:
    // * **Cover** (default): overwrites the original IP whitelist with the value of the **SecurityIps** parameter.
    // * **Append**: appends the IP addresses specified in the **SecurityIps** parameter to the original IP whitelist.
    // * **Delete**: removes the IP addresses specified in the **SecurityIps** parameter from the original IP whitelist. At least one IP address must be retained.
    shared_ptr<string> modifyMode_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The type of IP address. The value is fixed as IPv4. IPv6 is not supported.
    shared_ptr<string> securityIPType_ {};
    // The IP whitelist. Before you modify the IP whitelist, call the [DescribeDBInstanceIPArrayList](https://help.aliyun.com/document_detail/610518.html) operation to query the existing IP whitelist information of the instance.
    // 
    // <details>
    // <summary>Configuration rules</summary>
    // 
    // - IP addresses (such as 10.23.XX.XX) and CIDR blocks (such as 10.23.XX.XX/24) are supported.
    // 
    // - Separate multiple IP addresses or CIDR blocks with commas (,). No spaces are allowed before or after the commas.
    // 
    // - Each instance can contain up to 1,000 IP addresses or CIDR blocks. If you have a large number of IP addresses, merge them into CIDR blocks, such as 10.23.XX.XX/24.
    // </details>
    // 
    // This parameter is required.
    shared_ptr<string> securityIps_ {};
    // The network type of the whitelist. Valid values:
    // 
    // * **MIX** (default): general mode.
    // * **Classic**: the classic network in enhanced whitelist mode.
    // * **VPC**: the virtual private cloud (VPC) in enhanced whitelist mode.
    // 
    // > * ApsaraDB RDS for PostgreSQL instances with cloud disks use only the general mode (MIX). If you set this parameter to another mode, the value is automatically converted to MIX.
    // > * Only ApsaraDB RDS for MySQL 5.1, 5.5, 5.6, and 5.7 instances with Premium Local SSDs and ApsaraDB RDS for PostgreSQL 9.4 and 10 instances with Premium Local SSDs support the enhanced whitelist mode.
    shared_ptr<string> whitelistNetworkType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
