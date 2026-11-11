// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSECURITYIPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSECURITYIPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(BatchMode, batchMode_);
      DARABONBA_PTR_TO_JSON(DBInstanceIPArrayAttribute, DBInstanceIPArrayAttribute_);
      DARABONBA_PTR_TO_JSON(DBInstanceIPArrayName, DBInstanceIPArrayName_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(FreshWhiteListReadins, freshWhiteListReadins_);
      DARABONBA_PTR_TO_JSON(GroupItems, groupItems_);
      DARABONBA_PTR_TO_JSON(ModifyMode, modifyMode_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityIPType, securityIPType_);
      DARABONBA_PTR_TO_JSON(SecurityIps, securityIps_);
      DARABONBA_PTR_TO_JSON(WhitelistNetworkType, whitelistNetworkType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySecurityIpsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchMode, batchMode_);
      DARABONBA_PTR_FROM_JSON(DBInstanceIPArrayAttribute, DBInstanceIPArrayAttribute_);
      DARABONBA_PTR_FROM_JSON(DBInstanceIPArrayName, DBInstanceIPArrayName_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(FreshWhiteListReadins, freshWhiteListReadins_);
      DARABONBA_PTR_FROM_JSON(GroupItems, groupItems_);
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
    class GroupItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GroupItems& obj) { 
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(GroupTag, groupTag_);
        DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      };
      friend void from_json(const Darabonba::Json& j, GroupItems& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(GroupTag, groupTag_);
        DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      };
      GroupItems() = default ;
      GroupItems(const GroupItems &) = default ;
      GroupItems(GroupItems &&) = default ;
      GroupItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GroupItems() = default ;
      GroupItems& operator=(const GroupItems &) = default ;
      GroupItems& operator=(GroupItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupName_ == nullptr
        && this->groupTag_ == nullptr && this->securityIPList_ == nullptr; };
      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline GroupItems& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // groupTag Field Functions 
      bool hasGroupTag() const { return this->groupTag_ != nullptr;};
      void deleteGroupTag() { this->groupTag_ = nullptr;};
      inline string getGroupTag() const { DARABONBA_PTR_GET_DEFAULT(groupTag_, "") };
      inline GroupItems& setGroupTag(string groupTag) { DARABONBA_PTR_SET_VALUE(groupTag_, groupTag) };


      // securityIPList Field Functions 
      bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
      void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
      inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
      inline GroupItems& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    protected:
      // The name of the whitelist group. This parameter is required in batch mode and must be unique within the same GroupItems list.
      shared_ptr<string> groupName_ {};
      // The attribute of the whitelist group. If you set this parameter to hidden, the group is a system-generated group used by services such as DMS, DTS, and DAS. These groups are not displayed in the console. Proceed with caution. Generally, you do not need to specify this parameter. You must specify at least one of this parameter and SecurityIPList.
      shared_ptr<string> groupTag_ {};
      // The modified IP address whitelist of the group. Separate multiple IP addresses with commas (,). You must specify at least one of this parameter and GroupTag.
      shared_ptr<string> securityIPList_ {};
    };

    virtual bool empty() const override { return this->batchMode_ == nullptr
        && this->DBInstanceIPArrayAttribute_ == nullptr && this->DBInstanceIPArrayName_ == nullptr && this->DBInstanceId_ == nullptr && this->freshWhiteListReadins_ == nullptr && this->groupItems_ == nullptr
        && this->modifyMode_ == nullptr && this->resourceOwnerId_ == nullptr && this->securityIPType_ == nullptr && this->securityIps_ == nullptr && this->whitelistNetworkType_ == nullptr; };
    // batchMode Field Functions 
    bool hasBatchMode() const { return this->batchMode_ != nullptr;};
    void deleteBatchMode() { this->batchMode_ = nullptr;};
    inline bool getBatchMode() const { DARABONBA_PTR_GET_DEFAULT(batchMode_, false) };
    inline ModifySecurityIpsRequest& setBatchMode(bool batchMode) { DARABONBA_PTR_SET_VALUE(batchMode_, batchMode) };


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


    // groupItems Field Functions 
    bool hasGroupItems() const { return this->groupItems_ != nullptr;};
    void deleteGroupItems() { this->groupItems_ = nullptr;};
    inline const vector<ModifySecurityIpsRequest::GroupItems> & getGroupItems() const { DARABONBA_PTR_GET_CONST(groupItems_, vector<ModifySecurityIpsRequest::GroupItems>) };
    inline vector<ModifySecurityIpsRequest::GroupItems> getGroupItems() { DARABONBA_PTR_GET(groupItems_, vector<ModifySecurityIpsRequest::GroupItems>) };
    inline ModifySecurityIpsRequest& setGroupItems(const vector<ModifySecurityIpsRequest::GroupItems> & groupItems) { DARABONBA_PTR_SET_VALUE(groupItems_, groupItems) };
    inline ModifySecurityIpsRequest& setGroupItems(vector<ModifySecurityIpsRequest::GroupItems> && groupItems) { DARABONBA_PTR_SET_RVALUE(groupItems_, groupItems) };


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
    // Specifies whether to enable the batch modification mode. Valid values:
    // 
    // true: batch mode. Modifies multiple whitelist groups at a time based on the GroupItems parameter. In this case, the single-group parameters such as SecurityIps, DBInstanceIPArrayName, and DBInstanceIPArrayAttribute do not take effect.
    // 
    // false: single-group mode. Modifies a single whitelist group based on parameters such as SecurityIps. This is the default value.
    shared_ptr<bool> batchMode_ {};
    // The attribute of the IP whitelist group.
    // 
    // - If you do not specify this parameter, the group is a regular group. This is the default value.
    // - If you set this parameter to `hidden`, the group is a system-generated group used by services such as DMS, DTS, and DAS. These groups are not displayed in the console. Deleting or modifying these groups causes services such as DMS, DTS, and DAS to fail to access the ApsaraDB RDS instance. Proceed with caution.
    shared_ptr<string> DBInstanceIPArrayAttribute_ {};
    // The name of the IP whitelist group to be modified. Default value: Default. If the specified group does not exist, the system automatically creates the group.
    // 
    // > A single instance supports up to 200 IP whitelist groups.
    shared_ptr<string> DBInstanceIPArrayName_ {};
    // The instance ID of the target instance.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The list of read-only instances to which the whitelist is synchronized.
    // 
    // - This parameter applies only to ApsaraDB RDS for PostgreSQL instances for which read-only instances are created.
    // - If multiple read-only instances exist, separate their IDs with commas (,).
    shared_ptr<string> freshWhiteListReadins_ {};
    // The details of the whitelist groups. This parameter is required when BatchMode is set to true. In each group, GroupName is required and must be unique. You must specify at least one of SecurityIPList and GroupTag.
    shared_ptr<vector<ModifySecurityIpsRequest::GroupItems>> groupItems_ {};
    // The modification mode. Valid values:
    // * **Cover**: overwrites the original IP whitelist with the value of the **SecurityIps** parameter. This is the default value.
    // * **Append**: appends the IP addresses specified in the **SecurityIps** parameter to the original IP whitelist.
    // * **Delete**: deletes the IP addresses specified in the **SecurityIps** parameter from the original IP whitelist. You must retain at least one IP address.
    shared_ptr<string> modifyMode_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The type of the IP address. Set the value to IPv4. IPv6 is not supported.
    shared_ptr<string> securityIPType_ {};
    // The IP whitelist. Before you modify the IP whitelist, call the [DescribeDBInstanceIPArrayList](https://help.aliyun.com/document_detail/610518.html) operation to query the existing IP whitelist of the instance.
    // 
    // <details>
    // <summary>Configuration rules</summary>
    // 
    // - IP addresses (such as 10.23.XX.XX) and CIDR blocks (such as 10.23.XX.XX/24) are supported.
    // 
    // - Separate multiple IP addresses or CIDR blocks with commas (,). Do not add spaces before or after the commas.
    // 
    // - You can add up to 1,000 IP addresses or CIDR blocks to a single instance. If you have a large number of IP addresses, we recommend that you merge scattered IP addresses into CIDR blocks, such as 10.23.XX.XX/24.
    // </details>
    shared_ptr<string> securityIps_ {};
    // The network type of the whitelist. Valid values:
    // 
    // * **MIX**: general mode. This is the default value.
    // * **Classic**: classic network in enhanced whitelist mode.
    // * **VPC**: VPC in enhanced whitelist mode.
    // 
    // > * For ApsaraDB RDS for PostgreSQL instances with cloud disks, the network type is fixed to MIX. If you configure another mode, the system automatically converts it to MIX.
    // > * The enhanced whitelist mode is supported only by ApsaraDB RDS for MySQL 5.1, 5.5, 5.6, and 5.7 instances with premium local SSDs, and ApsaraDB RDS for PostgreSQL 9.4 and 10 instances with premium local SSDs.
    shared_ptr<string> whitelistNetworkType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
