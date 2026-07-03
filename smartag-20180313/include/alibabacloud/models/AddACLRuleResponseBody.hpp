// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDACLRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDACLRULERESPONSEBODY_HPP_
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
  class AddACLRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddACLRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(AcrId, acrId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestCidr, destCidr_);
      DARABONBA_PTR_TO_JSON(DestPortRange, destPortRange_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(DpiGroupIds, dpiGroupIds_);
      DARABONBA_PTR_TO_JSON(DpiSignatureIds, dpiSignatureIds_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceCidr, sourceCidr_);
      DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AddACLRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(AcrId, acrId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestCidr, destCidr_);
      DARABONBA_PTR_FROM_JSON(DestPortRange, destPortRange_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(DpiGroupIds, dpiGroupIds_);
      DARABONBA_PTR_FROM_JSON(DpiSignatureIds, dpiSignatureIds_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceCidr, sourceCidr_);
      DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AddACLRuleResponseBody() = default ;
    AddACLRuleResponseBody(const AddACLRuleResponseBody &) = default ;
    AddACLRuleResponseBody(AddACLRuleResponseBody &&) = default ;
    AddACLRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddACLRuleResponseBody() = default ;
    AddACLRuleResponseBody& operator=(const AddACLRuleResponseBody &) = default ;
    AddACLRuleResponseBody& operator=(AddACLRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DpiSignatureIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DpiSignatureIds& obj) { 
        DARABONBA_PTR_TO_JSON(DpiSignatureId, dpiSignatureId_);
      };
      friend void from_json(const Darabonba::Json& j, DpiSignatureIds& obj) { 
        DARABONBA_PTR_FROM_JSON(DpiSignatureId, dpiSignatureId_);
      };
      DpiSignatureIds() = default ;
      DpiSignatureIds(const DpiSignatureIds &) = default ;
      DpiSignatureIds(DpiSignatureIds &&) = default ;
      DpiSignatureIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DpiSignatureIds() = default ;
      DpiSignatureIds& operator=(const DpiSignatureIds &) = default ;
      DpiSignatureIds& operator=(DpiSignatureIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dpiSignatureId_ == nullptr; };
      // dpiSignatureId Field Functions 
      bool hasDpiSignatureId() const { return this->dpiSignatureId_ != nullptr;};
      void deleteDpiSignatureId() { this->dpiSignatureId_ = nullptr;};
      inline const vector<string> & getDpiSignatureId() const { DARABONBA_PTR_GET_CONST(dpiSignatureId_, vector<string>) };
      inline vector<string> getDpiSignatureId() { DARABONBA_PTR_GET(dpiSignatureId_, vector<string>) };
      inline DpiSignatureIds& setDpiSignatureId(const vector<string> & dpiSignatureId) { DARABONBA_PTR_SET_VALUE(dpiSignatureId_, dpiSignatureId) };
      inline DpiSignatureIds& setDpiSignatureId(vector<string> && dpiSignatureId) { DARABONBA_PTR_SET_RVALUE(dpiSignatureId_, dpiSignatureId) };


    protected:
      shared_ptr<vector<string>> dpiSignatureId_ {};
    };

    class DpiGroupIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DpiGroupIds& obj) { 
        DARABONBA_PTR_TO_JSON(DpiGroupId, dpiGroupId_);
      };
      friend void from_json(const Darabonba::Json& j, DpiGroupIds& obj) { 
        DARABONBA_PTR_FROM_JSON(DpiGroupId, dpiGroupId_);
      };
      DpiGroupIds() = default ;
      DpiGroupIds(const DpiGroupIds &) = default ;
      DpiGroupIds(DpiGroupIds &&) = default ;
      DpiGroupIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DpiGroupIds() = default ;
      DpiGroupIds& operator=(const DpiGroupIds &) = default ;
      DpiGroupIds& operator=(DpiGroupIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dpiGroupId_ == nullptr; };
      // dpiGroupId Field Functions 
      bool hasDpiGroupId() const { return this->dpiGroupId_ != nullptr;};
      void deleteDpiGroupId() { this->dpiGroupId_ = nullptr;};
      inline const vector<string> & getDpiGroupId() const { DARABONBA_PTR_GET_CONST(dpiGroupId_, vector<string>) };
      inline vector<string> getDpiGroupId() { DARABONBA_PTR_GET(dpiGroupId_, vector<string>) };
      inline DpiGroupIds& setDpiGroupId(const vector<string> & dpiGroupId) { DARABONBA_PTR_SET_VALUE(dpiGroupId_, dpiGroupId) };
      inline DpiGroupIds& setDpiGroupId(vector<string> && dpiGroupId) { DARABONBA_PTR_SET_RVALUE(dpiGroupId_, dpiGroupId) };


    protected:
      shared_ptr<vector<string>> dpiGroupId_ {};
    };

    virtual bool empty() const override { return this->aclId_ == nullptr
        && this->acrId_ == nullptr && this->description_ == nullptr && this->destCidr_ == nullptr && this->destPortRange_ == nullptr && this->direction_ == nullptr
        && this->dpiGroupIds_ == nullptr && this->dpiSignatureIds_ == nullptr && this->gmtCreate_ == nullptr && this->ipProtocol_ == nullptr && this->name_ == nullptr
        && this->policy_ == nullptr && this->priority_ == nullptr && this->requestId_ == nullptr && this->sourceCidr_ == nullptr && this->sourcePortRange_ == nullptr
        && this->type_ == nullptr; };
    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string getAclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline AddACLRuleResponseBody& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // acrId Field Functions 
    bool hasAcrId() const { return this->acrId_ != nullptr;};
    void deleteAcrId() { this->acrId_ = nullptr;};
    inline string getAcrId() const { DARABONBA_PTR_GET_DEFAULT(acrId_, "") };
    inline AddACLRuleResponseBody& setAcrId(string acrId) { DARABONBA_PTR_SET_VALUE(acrId_, acrId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddACLRuleResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destCidr Field Functions 
    bool hasDestCidr() const { return this->destCidr_ != nullptr;};
    void deleteDestCidr() { this->destCidr_ = nullptr;};
    inline string getDestCidr() const { DARABONBA_PTR_GET_DEFAULT(destCidr_, "") };
    inline AddACLRuleResponseBody& setDestCidr(string destCidr) { DARABONBA_PTR_SET_VALUE(destCidr_, destCidr) };


    // destPortRange Field Functions 
    bool hasDestPortRange() const { return this->destPortRange_ != nullptr;};
    void deleteDestPortRange() { this->destPortRange_ = nullptr;};
    inline string getDestPortRange() const { DARABONBA_PTR_GET_DEFAULT(destPortRange_, "") };
    inline AddACLRuleResponseBody& setDestPortRange(string destPortRange) { DARABONBA_PTR_SET_VALUE(destPortRange_, destPortRange) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline AddACLRuleResponseBody& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // dpiGroupIds Field Functions 
    bool hasDpiGroupIds() const { return this->dpiGroupIds_ != nullptr;};
    void deleteDpiGroupIds() { this->dpiGroupIds_ = nullptr;};
    inline const AddACLRuleResponseBody::DpiGroupIds & getDpiGroupIds() const { DARABONBA_PTR_GET_CONST(dpiGroupIds_, AddACLRuleResponseBody::DpiGroupIds) };
    inline AddACLRuleResponseBody::DpiGroupIds getDpiGroupIds() { DARABONBA_PTR_GET(dpiGroupIds_, AddACLRuleResponseBody::DpiGroupIds) };
    inline AddACLRuleResponseBody& setDpiGroupIds(const AddACLRuleResponseBody::DpiGroupIds & dpiGroupIds) { DARABONBA_PTR_SET_VALUE(dpiGroupIds_, dpiGroupIds) };
    inline AddACLRuleResponseBody& setDpiGroupIds(AddACLRuleResponseBody::DpiGroupIds && dpiGroupIds) { DARABONBA_PTR_SET_RVALUE(dpiGroupIds_, dpiGroupIds) };


    // dpiSignatureIds Field Functions 
    bool hasDpiSignatureIds() const { return this->dpiSignatureIds_ != nullptr;};
    void deleteDpiSignatureIds() { this->dpiSignatureIds_ = nullptr;};
    inline const AddACLRuleResponseBody::DpiSignatureIds & getDpiSignatureIds() const { DARABONBA_PTR_GET_CONST(dpiSignatureIds_, AddACLRuleResponseBody::DpiSignatureIds) };
    inline AddACLRuleResponseBody::DpiSignatureIds getDpiSignatureIds() { DARABONBA_PTR_GET(dpiSignatureIds_, AddACLRuleResponseBody::DpiSignatureIds) };
    inline AddACLRuleResponseBody& setDpiSignatureIds(const AddACLRuleResponseBody::DpiSignatureIds & dpiSignatureIds) { DARABONBA_PTR_SET_VALUE(dpiSignatureIds_, dpiSignatureIds) };
    inline AddACLRuleResponseBody& setDpiSignatureIds(AddACLRuleResponseBody::DpiSignatureIds && dpiSignatureIds) { DARABONBA_PTR_SET_RVALUE(dpiSignatureIds_, dpiSignatureIds) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline AddACLRuleResponseBody& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline AddACLRuleResponseBody& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddACLRuleResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline AddACLRuleResponseBody& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline AddACLRuleResponseBody& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddACLRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceCidr Field Functions 
    bool hasSourceCidr() const { return this->sourceCidr_ != nullptr;};
    void deleteSourceCidr() { this->sourceCidr_ = nullptr;};
    inline string getSourceCidr() const { DARABONBA_PTR_GET_DEFAULT(sourceCidr_, "") };
    inline AddACLRuleResponseBody& setSourceCidr(string sourceCidr) { DARABONBA_PTR_SET_VALUE(sourceCidr_, sourceCidr) };


    // sourcePortRange Field Functions 
    bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
    void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
    inline string getSourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
    inline AddACLRuleResponseBody& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddACLRuleResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the ACL.
    shared_ptr<string> aclId_ {};
    // The ID of the ACL rule.
    shared_ptr<string> acrId_ {};
    // The description of the ACL rule.
    shared_ptr<string> description_ {};
    // The destination CIDR block.
    // 
    // For example: 192.168.10.0/24.
    shared_ptr<string> destCidr_ {};
    // The destination port range.
    shared_ptr<string> destPortRange_ {};
    // The direction of traffic to which the ACL rule applies. Valid values:
    // 
    // - **in**: inbound. Traffic from an external network to the local branch where the SAG instance is deployed.
    // - **out**: outbound. Traffic from the local branch where the SAG instance is deployed to an external network.
    shared_ptr<string> direction_ {};
    shared_ptr<AddACLRuleResponseBody::DpiGroupIds> dpiGroupIds_ {};
    shared_ptr<AddACLRuleResponseBody::DpiSignatureIds> dpiSignatureIds_ {};
    // The UNIX timestamp when the ACL rule was created.
    // 
    // This value is a long integer. If rules have the same priority, the one with the earlier timestamp takes precedence.
    shared_ptr<int64_t> gmtCreate_ {};
    // The protocol to which the ACL rule applies.
    shared_ptr<string> ipProtocol_ {};
    // The name of the ACL rule.
    shared_ptr<string> name_ {};
    // The authorization policy of the ACL rule.
    // 
    // - **accept**: allows access.
    // - **drop**: denies access.
    shared_ptr<string> policy_ {};
    // The priority of the ACL rule.
    // 
    // A smaller value indicates a higher priority. If multiple rules have the same priority, the rule that is first delivered to the Smart Access Gateway device takes precedence.
    shared_ptr<int32_t> priority_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The source CIDR block.
    // 
    // The source CIDR block is in the CIDR format. For example: 192.168.1.0/24.
    shared_ptr<string> sourceCidr_ {};
    // The source port range.
    shared_ptr<string> sourcePortRange_ {};
    // The type of the ACL rule.
    // 
    // - **LAN**: private network. The ACL rule controls traffic on private networks.
    // - **WAN**: public network. The ACL rule controls traffic on public networks.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
