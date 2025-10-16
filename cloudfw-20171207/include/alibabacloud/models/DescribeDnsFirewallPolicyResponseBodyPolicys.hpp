// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSFIREWALLPOLICYRESPONSEBODYPOLICYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSFIREWALLPOLICYRESPONSEBODYPOLICYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeDnsFirewallPolicyResponseBodyPolicys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsFirewallPolicyResponseBodyPolicys& obj) { 
      DARABONBA_PTR_TO_JSON(AclAction, aclAction_);
      DARABONBA_PTR_TO_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Destination, destination_);
      DARABONBA_PTR_TO_JSON(DestinationAddrs, destinationAddrs_);
      DARABONBA_PTR_TO_JSON(DestinationGroupType, destinationGroupType_);
      DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(HitLastTime, hitLastTime_);
      DARABONBA_PTR_TO_JSON(HitTimes, hitTimes_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Release, release_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceAddrs, sourceAddrs_);
      DARABONBA_PTR_TO_JSON(SourceGroupType, sourceGroupType_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsFirewallPolicyResponseBodyPolicys& obj) { 
      DARABONBA_PTR_FROM_JSON(AclAction, aclAction_);
      DARABONBA_PTR_FROM_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Destination, destination_);
      DARABONBA_PTR_FROM_JSON(DestinationAddrs, destinationAddrs_);
      DARABONBA_PTR_FROM_JSON(DestinationGroupType, destinationGroupType_);
      DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(HitLastTime, hitLastTime_);
      DARABONBA_PTR_FROM_JSON(HitTimes, hitTimes_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Release, release_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceAddrs, sourceAddrs_);
      DARABONBA_PTR_FROM_JSON(SourceGroupType, sourceGroupType_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    DescribeDnsFirewallPolicyResponseBodyPolicys() = default ;
    DescribeDnsFirewallPolicyResponseBodyPolicys(const DescribeDnsFirewallPolicyResponseBodyPolicys &) = default ;
    DescribeDnsFirewallPolicyResponseBodyPolicys(DescribeDnsFirewallPolicyResponseBodyPolicys &&) = default ;
    DescribeDnsFirewallPolicyResponseBodyPolicys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsFirewallPolicyResponseBodyPolicys() = default ;
    DescribeDnsFirewallPolicyResponseBodyPolicys& operator=(const DescribeDnsFirewallPolicyResponseBodyPolicys &) = default ;
    DescribeDnsFirewallPolicyResponseBodyPolicys& operator=(DescribeDnsFirewallPolicyResponseBodyPolicys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclAction_ == nullptr
        && return this->aclUuid_ == nullptr && return this->description_ == nullptr && return this->destination_ == nullptr && return this->destinationAddrs_ == nullptr && return this->destinationGroupType_ == nullptr
        && return this->destinationType_ == nullptr && return this->direction_ == nullptr && return this->hitLastTime_ == nullptr && return this->hitTimes_ == nullptr && return this->ipVersion_ == nullptr
        && return this->priority_ == nullptr && return this->release_ == nullptr && return this->source_ == nullptr && return this->sourceAddrs_ == nullptr && return this->sourceGroupType_ == nullptr
        && return this->sourceType_ == nullptr; };
    // aclAction Field Functions 
    bool hasAclAction() const { return this->aclAction_ != nullptr;};
    void deleteAclAction() { this->aclAction_ = nullptr;};
    inline string aclAction() const { DARABONBA_PTR_GET_DEFAULT(aclAction_, "") };
    inline DescribeDnsFirewallPolicyResponseBodyPolicys& setAclAction(string aclAction) { DARABONBA_PTR_SET_VALUE(aclAction_, aclAction) };


    // aclUuid Field Functions 
    bool hasAclUuid() const { return this->aclUuid_ != nullptr;};
    void deleteAclUuid() { this->aclUuid_ = nullptr;};
    inline string aclUuid() const { DARABONBA_PTR_GET_DEFAULT(aclUuid_, "") };
    inline DescribeDnsFirewallPolicyResponseBodyPolicys& setAclUuid(string aclUuid) { DARABONBA_PTR_SET_VALUE(aclUuid_, aclUuid) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDnsFirewallPolicyResponseBodyPolicys& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destination Field Functions 
    bool hasDestination() const { return this->destination_ != nullptr;};
    void deleteDestination() { this->destination_ = nullptr;};
    inline string destination() const { DARABONBA_PTR_GET_DEFAULT(destination_, "") };
    inline DescribeDnsFirewallPolicyResponseBodyPolicys& setDestination(string destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };


    // destinationAddrs Field Functions 
    bool hasDestinationAddrs() const { return this->destinationAddrs_ != nullptr;};
    void deleteDestinationAddrs() { this->destinationAddrs_ = nullptr;};
    inline const vector<string> & destinationAddrs() const { DARABONBA_PTR_GET_CONST(destinationAddrs_, vector<string>) };
    inline vector<string> destinationAddrs() { DARABONBA_PTR_GET(destinationAddrs_, vector<string>) };
    inline DescribeDnsFirewallPolicyResponseBodyPolicys& setDestinationAddrs(const vector<string> & destinationAddrs) { DARABONBA_PTR_SET_VALUE(destinationAddrs_, destinationAddrs) };
    inline DescribeDnsFirewallPolicyResponseBodyPolicys& setDestinationAddrs(vector<string> && destinationAddrs) { DARABONBA_PTR_SET_RVALUE(destinationAddrs_, destinationAddrs) };


    // destinationGroupType Field Functions 
    bool hasDestinationGroupType() const { return this->destinationGroupType_ != nullptr;};
    void deleteDestinationGroupType() { this->destinationGroupType_ = nullptr;};
    inline string destinationGroupType() const { DARABONBA_PTR_GET_DEFAULT(destinationGroupType_, "") };
    inline DescribeDnsFirewallPolicyResponseBodyPolicys& setDestinationGroupType(string destinationGroupType) { DARABONBA_PTR_SET_VALUE(destinationGroupType_, destinationGroupType) };


    // destinationType Field Functions 
    bool hasDestinationType() const { return this->destinationType_ != nullptr;};
    void deleteDestinationType() { this->destinationType_ = nullptr;};
    inline string destinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
    inline DescribeDnsFirewallPolicyResponseBodyPolicys& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DescribeDnsFirewallPolicyResponseBodyPolicys& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // hitLastTime Field Functions 
    bool hasHitLastTime() const { return this->hitLastTime_ != nullptr;};
    void deleteHitLastTime() { this->hitLastTime_ = nullptr;};
    inline int64_t hitLastTime() const { DARABONBA_PTR_GET_DEFAULT(hitLastTime_, 0L) };
    inline DescribeDnsFirewallPolicyResponseBodyPolicys& setHitLastTime(int64_t hitLastTime) { DARABONBA_PTR_SET_VALUE(hitLastTime_, hitLastTime) };


    // hitTimes Field Functions 
    bool hasHitTimes() const { return this->hitTimes_ != nullptr;};
    void deleteHitTimes() { this->hitTimes_ = nullptr;};
    inline int64_t hitTimes() const { DARABONBA_PTR_GET_DEFAULT(hitTimes_, 0L) };
    inline DescribeDnsFirewallPolicyResponseBodyPolicys& setHitTimes(int64_t hitTimes) { DARABONBA_PTR_SET_VALUE(hitTimes_, hitTimes) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline int32_t ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, 0) };
    inline DescribeDnsFirewallPolicyResponseBodyPolicys& setIpVersion(int32_t ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline DescribeDnsFirewallPolicyResponseBodyPolicys& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // release Field Functions 
    bool hasRelease() const { return this->release_ != nullptr;};
    void deleteRelease() { this->release_ = nullptr;};
    inline string release() const { DARABONBA_PTR_GET_DEFAULT(release_, "") };
    inline DescribeDnsFirewallPolicyResponseBodyPolicys& setRelease(string release) { DARABONBA_PTR_SET_VALUE(release_, release) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeDnsFirewallPolicyResponseBodyPolicys& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceAddrs Field Functions 
    bool hasSourceAddrs() const { return this->sourceAddrs_ != nullptr;};
    void deleteSourceAddrs() { this->sourceAddrs_ = nullptr;};
    inline const vector<string> & sourceAddrs() const { DARABONBA_PTR_GET_CONST(sourceAddrs_, vector<string>) };
    inline vector<string> sourceAddrs() { DARABONBA_PTR_GET(sourceAddrs_, vector<string>) };
    inline DescribeDnsFirewallPolicyResponseBodyPolicys& setSourceAddrs(const vector<string> & sourceAddrs) { DARABONBA_PTR_SET_VALUE(sourceAddrs_, sourceAddrs) };
    inline DescribeDnsFirewallPolicyResponseBodyPolicys& setSourceAddrs(vector<string> && sourceAddrs) { DARABONBA_PTR_SET_RVALUE(sourceAddrs_, sourceAddrs) };


    // sourceGroupType Field Functions 
    bool hasSourceGroupType() const { return this->sourceGroupType_ != nullptr;};
    void deleteSourceGroupType() { this->sourceGroupType_ = nullptr;};
    inline string sourceGroupType() const { DARABONBA_PTR_GET_DEFAULT(sourceGroupType_, "") };
    inline DescribeDnsFirewallPolicyResponseBodyPolicys& setSourceGroupType(string sourceGroupType) { DARABONBA_PTR_SET_VALUE(sourceGroupType_, sourceGroupType) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeDnsFirewallPolicyResponseBodyPolicys& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    std::shared_ptr<string> aclAction_ = nullptr;
    std::shared_ptr<string> aclUuid_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> destination_ = nullptr;
    std::shared_ptr<vector<string>> destinationAddrs_ = nullptr;
    std::shared_ptr<string> destinationGroupType_ = nullptr;
    std::shared_ptr<string> destinationType_ = nullptr;
    std::shared_ptr<string> direction_ = nullptr;
    std::shared_ptr<int64_t> hitLastTime_ = nullptr;
    std::shared_ptr<int64_t> hitTimes_ = nullptr;
    std::shared_ptr<int32_t> ipVersion_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<string> release_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<vector<string>> sourceAddrs_ = nullptr;
    std::shared_ptr<string> sourceGroupType_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
