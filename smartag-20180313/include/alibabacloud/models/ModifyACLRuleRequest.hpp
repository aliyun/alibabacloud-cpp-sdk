// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACLRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACLRULEREQUEST_HPP_
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
  class ModifyACLRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyACLRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(AcrId, acrId_);
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
    friend void from_json(const Darabonba::Json& j, ModifyACLRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(AcrId, acrId_);
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
    ModifyACLRuleRequest() = default ;
    ModifyACLRuleRequest(const ModifyACLRuleRequest &) = default ;
    ModifyACLRuleRequest(ModifyACLRuleRequest &&) = default ;
    ModifyACLRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyACLRuleRequest() = default ;
    ModifyACLRuleRequest& operator=(const ModifyACLRuleRequest &) = default ;
    ModifyACLRuleRequest& operator=(ModifyACLRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclId_ == nullptr
        && this->acrId_ == nullptr && this->description_ == nullptr && this->destCidr_ == nullptr && this->destPortRange_ == nullptr && this->direction_ == nullptr
        && this->dpiGroupIds_ == nullptr && this->dpiSignatureIds_ == nullptr && this->ipProtocol_ == nullptr && this->name_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->policy_ == nullptr && this->priority_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->sourceCidr_ == nullptr && this->sourcePortRange_ == nullptr && this->type_ == nullptr; };
    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string getAclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline ModifyACLRuleRequest& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // acrId Field Functions 
    bool hasAcrId() const { return this->acrId_ != nullptr;};
    void deleteAcrId() { this->acrId_ = nullptr;};
    inline string getAcrId() const { DARABONBA_PTR_GET_DEFAULT(acrId_, "") };
    inline ModifyACLRuleRequest& setAcrId(string acrId) { DARABONBA_PTR_SET_VALUE(acrId_, acrId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyACLRuleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destCidr Field Functions 
    bool hasDestCidr() const { return this->destCidr_ != nullptr;};
    void deleteDestCidr() { this->destCidr_ = nullptr;};
    inline string getDestCidr() const { DARABONBA_PTR_GET_DEFAULT(destCidr_, "") };
    inline ModifyACLRuleRequest& setDestCidr(string destCidr) { DARABONBA_PTR_SET_VALUE(destCidr_, destCidr) };


    // destPortRange Field Functions 
    bool hasDestPortRange() const { return this->destPortRange_ != nullptr;};
    void deleteDestPortRange() { this->destPortRange_ = nullptr;};
    inline string getDestPortRange() const { DARABONBA_PTR_GET_DEFAULT(destPortRange_, "") };
    inline ModifyACLRuleRequest& setDestPortRange(string destPortRange) { DARABONBA_PTR_SET_VALUE(destPortRange_, destPortRange) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ModifyACLRuleRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // dpiGroupIds Field Functions 
    bool hasDpiGroupIds() const { return this->dpiGroupIds_ != nullptr;};
    void deleteDpiGroupIds() { this->dpiGroupIds_ = nullptr;};
    inline const vector<string> & getDpiGroupIds() const { DARABONBA_PTR_GET_CONST(dpiGroupIds_, vector<string>) };
    inline vector<string> getDpiGroupIds() { DARABONBA_PTR_GET(dpiGroupIds_, vector<string>) };
    inline ModifyACLRuleRequest& setDpiGroupIds(const vector<string> & dpiGroupIds) { DARABONBA_PTR_SET_VALUE(dpiGroupIds_, dpiGroupIds) };
    inline ModifyACLRuleRequest& setDpiGroupIds(vector<string> && dpiGroupIds) { DARABONBA_PTR_SET_RVALUE(dpiGroupIds_, dpiGroupIds) };


    // dpiSignatureIds Field Functions 
    bool hasDpiSignatureIds() const { return this->dpiSignatureIds_ != nullptr;};
    void deleteDpiSignatureIds() { this->dpiSignatureIds_ = nullptr;};
    inline const vector<string> & getDpiSignatureIds() const { DARABONBA_PTR_GET_CONST(dpiSignatureIds_, vector<string>) };
    inline vector<string> getDpiSignatureIds() { DARABONBA_PTR_GET(dpiSignatureIds_, vector<string>) };
    inline ModifyACLRuleRequest& setDpiSignatureIds(const vector<string> & dpiSignatureIds) { DARABONBA_PTR_SET_VALUE(dpiSignatureIds_, dpiSignatureIds) };
    inline ModifyACLRuleRequest& setDpiSignatureIds(vector<string> && dpiSignatureIds) { DARABONBA_PTR_SET_RVALUE(dpiSignatureIds_, dpiSignatureIds) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline ModifyACLRuleRequest& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyACLRuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyACLRuleRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyACLRuleRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline ModifyACLRuleRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ModifyACLRuleRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyACLRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyACLRuleRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyACLRuleRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceCidr Field Functions 
    bool hasSourceCidr() const { return this->sourceCidr_ != nullptr;};
    void deleteSourceCidr() { this->sourceCidr_ = nullptr;};
    inline string getSourceCidr() const { DARABONBA_PTR_GET_DEFAULT(sourceCidr_, "") };
    inline ModifyACLRuleRequest& setSourceCidr(string sourceCidr) { DARABONBA_PTR_SET_VALUE(sourceCidr_, sourceCidr) };


    // sourcePortRange Field Functions 
    bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
    void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
    inline string getSourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
    inline ModifyACLRuleRequest& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModifyACLRuleRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the ACL instance.
    // 
    // This parameter is required.
    shared_ptr<string> aclId_ {};
    // The ID of the access control rule.
    // 
    // Call the [DescribeACLAttribute](https://help.aliyun.com/document_detail/114017.html) operation to query the IDs of access control rules in an ACL instance.
    // 
    // This parameter is required.
    shared_ptr<string> acrId_ {};
    // The description of the access control rule.
    // 
    // The description must be **1** to **512** characters in length.
    shared_ptr<string> description_ {};
    // The destination CIDR block.
    // 
    // The destination CIDR block must be in CIDR format. For example: 192.168.10.0/24.
    shared_ptr<string> destCidr_ {};
    // The destination port range. Valid values: **-1** or **1** to **65535**.
    // 
    // Examples of the destination port range format:
    // 
    // - 1/200: ports 1 to 200.
    // - 80/80: port 80.
    // - -1/-1: all ports.
    shared_ptr<string> destPortRange_ {};
    // The direction in which the access control rule is applied. Valid values:
    // 
    // - **in**: inbound. This is the direction of traffic from an external network to the on-premises network where the Smart Access Gateway instance is deployed.
    // - **out**: outbound. This is the direction of traffic from the on-premises network where the Smart Access Gateway instance is deployed to an external network.
    shared_ptr<string> direction_ {};
    // A list of application group IDs that the access control rule matches.
    shared_ptr<vector<string>> dpiGroupIds_ {};
    // A list of application IDs that the access control rule matches.
    shared_ptr<vector<string>> dpiSignatureIds_ {};
    // The protocol used by the access control rule.
    // 
    // For the protocols supported by the access control feature, see the information in the console. The protocol is not case-sensitive.
    shared_ptr<string> ipProtocol_ {};
    // The name of the access control rule.
    // 
    // The name must be 2 to 128 characters in length, start with a letter or a Chinese character, and can contain digits, underscores (_), and hyphens (-).
    shared_ptr<string> name_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The authorization policy of the access control rule. Valid values:
    // 
    // - **accept**: allows access.
    // - **drop**: denies access.
    shared_ptr<string> policy_ {};
    // The priority of the access control rule.
    // 
    // A smaller value indicates a higher priority. If rules have the same priority, the one that is first delivered to the Smart Access Gateway device takes precedence.
    // 
    // Valid values: 1 to **100**. Default value: **1**.
    shared_ptr<int32_t> priority_ {};
    // The region ID of the access control list (ACL) instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The source CIDR block.
    // 
    // The source CIDR block must be in CIDR format. For example: 192.168.1.0/24.
    shared_ptr<string> sourceCidr_ {};
    // The source port range. Valid values: **-1** or **1** to **65535**.
    // 
    // Examples of the source port range format:
    // 
    // - 1/200: ports 1 to 200.
    // - 80/80: port 80.
    // - -1/-1: all ports.
    shared_ptr<string> sourcePortRange_ {};
    // The type of the access control rule. Valid values:
    // 
    // - **LAN**: (Default) private network. This value indicates that the access control rule applies to traffic from private IP addresses.
    // - **WAN**: public network. This value indicates that the access control rule applies to traffic from public IP addresses.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
