// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDACLRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDACLRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class AddACLRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddACLRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestCidr, destCidr_);
      DARABONBA_PTR_TO_JSON(DestPortRange, destPortRange_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(DpiGroupIds, dpiGroupIds_);
      DARABONBA_PTR_TO_JSON(DpiSignatureIds, dpiSignatureIds_);
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceCidr, sourceCidr_);
      DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AddACLRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestCidr, destCidr_);
      DARABONBA_PTR_FROM_JSON(DestPortRange, destPortRange_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(DpiGroupIds, dpiGroupIds_);
      DARABONBA_PTR_FROM_JSON(DpiSignatureIds, dpiSignatureIds_);
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceCidr, sourceCidr_);
      DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AddACLRuleRequest() = default ;
    AddACLRuleRequest(const AddACLRuleRequest &) = default ;
    AddACLRuleRequest(AddACLRuleRequest &&) = default ;
    AddACLRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddACLRuleRequest() = default ;
    AddACLRuleRequest& operator=(const AddACLRuleRequest &) = default ;
    AddACLRuleRequest& operator=(AddACLRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclId_ == nullptr
        && this->description_ == nullptr && this->destCidr_ == nullptr && this->destPortRange_ == nullptr && this->direction_ == nullptr && this->dpiGroupIds_ == nullptr
        && this->dpiSignatureIds_ == nullptr && this->ipProtocol_ == nullptr && this->name_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->policy_ == nullptr && this->priority_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->sourceCidr_ == nullptr && this->sourcePortRange_ == nullptr && this->type_ == nullptr; };
    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string getAclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline AddACLRuleRequest& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddACLRuleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destCidr Field Functions 
    bool hasDestCidr() const { return this->destCidr_ != nullptr;};
    void deleteDestCidr() { this->destCidr_ = nullptr;};
    inline string getDestCidr() const { DARABONBA_PTR_GET_DEFAULT(destCidr_, "") };
    inline AddACLRuleRequest& setDestCidr(string destCidr) { DARABONBA_PTR_SET_VALUE(destCidr_, destCidr) };


    // destPortRange Field Functions 
    bool hasDestPortRange() const { return this->destPortRange_ != nullptr;};
    void deleteDestPortRange() { this->destPortRange_ = nullptr;};
    inline string getDestPortRange() const { DARABONBA_PTR_GET_DEFAULT(destPortRange_, "") };
    inline AddACLRuleRequest& setDestPortRange(string destPortRange) { DARABONBA_PTR_SET_VALUE(destPortRange_, destPortRange) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline AddACLRuleRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // dpiGroupIds Field Functions 
    bool hasDpiGroupIds() const { return this->dpiGroupIds_ != nullptr;};
    void deleteDpiGroupIds() { this->dpiGroupIds_ = nullptr;};
    inline const vector<string> & getDpiGroupIds() const { DARABONBA_PTR_GET_CONST(dpiGroupIds_, vector<string>) };
    inline vector<string> getDpiGroupIds() { DARABONBA_PTR_GET(dpiGroupIds_, vector<string>) };
    inline AddACLRuleRequest& setDpiGroupIds(const vector<string> & dpiGroupIds) { DARABONBA_PTR_SET_VALUE(dpiGroupIds_, dpiGroupIds) };
    inline AddACLRuleRequest& setDpiGroupIds(vector<string> && dpiGroupIds) { DARABONBA_PTR_SET_RVALUE(dpiGroupIds_, dpiGroupIds) };


    // dpiSignatureIds Field Functions 
    bool hasDpiSignatureIds() const { return this->dpiSignatureIds_ != nullptr;};
    void deleteDpiSignatureIds() { this->dpiSignatureIds_ = nullptr;};
    inline const vector<string> & getDpiSignatureIds() const { DARABONBA_PTR_GET_CONST(dpiSignatureIds_, vector<string>) };
    inline vector<string> getDpiSignatureIds() { DARABONBA_PTR_GET(dpiSignatureIds_, vector<string>) };
    inline AddACLRuleRequest& setDpiSignatureIds(const vector<string> & dpiSignatureIds) { DARABONBA_PTR_SET_VALUE(dpiSignatureIds_, dpiSignatureIds) };
    inline AddACLRuleRequest& setDpiSignatureIds(vector<string> && dpiSignatureIds) { DARABONBA_PTR_SET_RVALUE(dpiSignatureIds_, dpiSignatureIds) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline AddACLRuleRequest& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddACLRuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AddACLRuleRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddACLRuleRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline AddACLRuleRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline AddACLRuleRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddACLRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AddACLRuleRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AddACLRuleRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceCidr Field Functions 
    bool hasSourceCidr() const { return this->sourceCidr_ != nullptr;};
    void deleteSourceCidr() { this->sourceCidr_ = nullptr;};
    inline string getSourceCidr() const { DARABONBA_PTR_GET_DEFAULT(sourceCidr_, "") };
    inline AddACLRuleRequest& setSourceCidr(string sourceCidr) { DARABONBA_PTR_SET_VALUE(sourceCidr_, sourceCidr) };


    // sourcePortRange Field Functions 
    bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
    void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
    inline string getSourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
    inline AddACLRuleRequest& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddACLRuleRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the ACL.
    // 
    // This parameter is required.
    shared_ptr<string> aclId_ {};
    // The description of the ACL rule.
    // 
    // The description must be **1 to 512** characters in length.
    shared_ptr<string> description_ {};
    // The range of the destination IP addresses.
    // 
    // Specify the value of this parameter in CIDR notation. Example: 192.168.10.0/24.
    // 
    // This parameter is required.
    shared_ptr<string> destCidr_ {};
    // The destination port range.
    // 
    // Valid values: **1** to **65535** and **-1**.
    // 
    // Set the destination port range in one of the following formats: 1/200 or 80/80. A value of -1/-1 indicates all ports.
    // 
    // This parameter is required.
    shared_ptr<string> destPortRange_ {};
    // The direction of traffic in which the ACL rule is applied. Valid values:
    // 
    // *   **in**: The ACL rule controls inbound network traffic of the on-premises network that is associated with the Smart Access Gateway (SAG) instance.
    // *   **out**: The ACL rule controls outbound network traffic of the on-premises network that is associated with the SAG instance.
    // 
    // This parameter is required.
    shared_ptr<string> direction_ {};
    shared_ptr<vector<string>> dpiGroupIds_ {};
    shared_ptr<vector<string>> dpiSignatureIds_ {};
    // The protocol used by the ACL rule.
    // 
    // The protocols that are provided in this topic are for reference only. The protocols available in the SAG console may vary. The value of the parameter is not case-sensitive.
    // 
    // This parameter is required.
    shared_ptr<string> ipProtocol_ {};
    // The name of the ACL rule.
    // 
    // The name must be 2 to 100 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). It must start with a letter.
    shared_ptr<string> name_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The action policy of the ACL rule. Valid values:
    // 
    // *   **accept**: allows network traffic.
    // *   **drop**: blocks the network traffic.
    // 
    // This parameter is required.
    shared_ptr<string> policy_ {};
    // The priority of the ACL rule.
    // 
    // A smaller value indicates a higher priority. If rules have the same priority, whichever applied to the SAG devices earlier takes effect.
    // 
    // Valid values: **1 to 100**. Default value: **1**.
    shared_ptr<int32_t> priority_ {};
    // The ID of the region where the ACL is deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/69813.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The range of the source IP addresses.
    // 
    // Specify the value of this parameter in CIDR notation. Example: 192.168.1.0/24.
    // 
    // This parameter is required.
    shared_ptr<string> sourceCidr_ {};
    // The source port range.
    // 
    // Valid values: **1** to **65535** and **-1**.
    // 
    // Set the source port range in one of the following formats: 1/200 or 80/80. A value of -1/-1 indicates all ports.
    // 
    // This parameter is required.
    shared_ptr<string> sourcePortRange_ {};
    // The type of the ACL rule: Valid values:
    // 
    // *   **LAN**: The ACL rule controls network traffic transmitted through private IP addresses.
    // *   **WAN**: The ACL rule controls network traffic transmitted through public IP addresses.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
