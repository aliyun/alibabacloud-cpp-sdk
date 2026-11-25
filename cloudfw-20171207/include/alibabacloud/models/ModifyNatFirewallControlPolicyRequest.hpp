// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNATFIREWALLCONTROLPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNATFIREWALLCONTROLPOLICYREQUEST_HPP_
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
  class ModifyNatFirewallControlPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNatFirewallControlPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclAction, aclAction_);
      DARABONBA_PTR_TO_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_TO_JSON(ApplicationNameList, applicationNameList_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestPort, destPort_);
      DARABONBA_PTR_TO_JSON(DestPortGroup, destPortGroup_);
      DARABONBA_PTR_TO_JSON(DestPortType, destPortType_);
      DARABONBA_PTR_TO_JSON(Destination, destination_);
      DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(DomainResolveType, domainResolveType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(Proto, proto_);
      DARABONBA_PTR_TO_JSON(Release, release_);
      DARABONBA_PTR_TO_JSON(RepeatDays, repeatDays_);
      DARABONBA_PTR_TO_JSON(RepeatEndTime, repeatEndTime_);
      DARABONBA_PTR_TO_JSON(RepeatStartTime, repeatStartTime_);
      DARABONBA_PTR_TO_JSON(RepeatType, repeatType_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNatFirewallControlPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclAction, aclAction_);
      DARABONBA_PTR_FROM_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_FROM_JSON(ApplicationNameList, applicationNameList_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestPort, destPort_);
      DARABONBA_PTR_FROM_JSON(DestPortGroup, destPortGroup_);
      DARABONBA_PTR_FROM_JSON(DestPortType, destPortType_);
      DARABONBA_PTR_FROM_JSON(Destination, destination_);
      DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(DomainResolveType, domainResolveType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(Proto, proto_);
      DARABONBA_PTR_FROM_JSON(Release, release_);
      DARABONBA_PTR_FROM_JSON(RepeatDays, repeatDays_);
      DARABONBA_PTR_FROM_JSON(RepeatEndTime, repeatEndTime_);
      DARABONBA_PTR_FROM_JSON(RepeatStartTime, repeatStartTime_);
      DARABONBA_PTR_FROM_JSON(RepeatType, repeatType_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ModifyNatFirewallControlPolicyRequest() = default ;
    ModifyNatFirewallControlPolicyRequest(const ModifyNatFirewallControlPolicyRequest &) = default ;
    ModifyNatFirewallControlPolicyRequest(ModifyNatFirewallControlPolicyRequest &&) = default ;
    ModifyNatFirewallControlPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNatFirewallControlPolicyRequest() = default ;
    ModifyNatFirewallControlPolicyRequest& operator=(const ModifyNatFirewallControlPolicyRequest &) = default ;
    ModifyNatFirewallControlPolicyRequest& operator=(ModifyNatFirewallControlPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclAction_ == nullptr
        && this->aclUuid_ == nullptr && this->applicationNameList_ == nullptr && this->description_ == nullptr && this->destPort_ == nullptr && this->destPortGroup_ == nullptr
        && this->destPortType_ == nullptr && this->destination_ == nullptr && this->destinationType_ == nullptr && this->direction_ == nullptr && this->domainResolveType_ == nullptr
        && this->endTime_ == nullptr && this->lang_ == nullptr && this->natGatewayId_ == nullptr && this->proto_ == nullptr && this->release_ == nullptr
        && this->repeatDays_ == nullptr && this->repeatEndTime_ == nullptr && this->repeatStartTime_ == nullptr && this->repeatType_ == nullptr && this->source_ == nullptr
        && this->sourceType_ == nullptr && this->startTime_ == nullptr; };
    // aclAction Field Functions 
    bool hasAclAction() const { return this->aclAction_ != nullptr;};
    void deleteAclAction() { this->aclAction_ = nullptr;};
    inline string getAclAction() const { DARABONBA_PTR_GET_DEFAULT(aclAction_, "") };
    inline ModifyNatFirewallControlPolicyRequest& setAclAction(string aclAction) { DARABONBA_PTR_SET_VALUE(aclAction_, aclAction) };


    // aclUuid Field Functions 
    bool hasAclUuid() const { return this->aclUuid_ != nullptr;};
    void deleteAclUuid() { this->aclUuid_ = nullptr;};
    inline string getAclUuid() const { DARABONBA_PTR_GET_DEFAULT(aclUuid_, "") };
    inline ModifyNatFirewallControlPolicyRequest& setAclUuid(string aclUuid) { DARABONBA_PTR_SET_VALUE(aclUuid_, aclUuid) };


    // applicationNameList Field Functions 
    bool hasApplicationNameList() const { return this->applicationNameList_ != nullptr;};
    void deleteApplicationNameList() { this->applicationNameList_ = nullptr;};
    inline const vector<string> & getApplicationNameList() const { DARABONBA_PTR_GET_CONST(applicationNameList_, vector<string>) };
    inline vector<string> getApplicationNameList() { DARABONBA_PTR_GET(applicationNameList_, vector<string>) };
    inline ModifyNatFirewallControlPolicyRequest& setApplicationNameList(const vector<string> & applicationNameList) { DARABONBA_PTR_SET_VALUE(applicationNameList_, applicationNameList) };
    inline ModifyNatFirewallControlPolicyRequest& setApplicationNameList(vector<string> && applicationNameList) { DARABONBA_PTR_SET_RVALUE(applicationNameList_, applicationNameList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyNatFirewallControlPolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destPort Field Functions 
    bool hasDestPort() const { return this->destPort_ != nullptr;};
    void deleteDestPort() { this->destPort_ = nullptr;};
    inline string getDestPort() const { DARABONBA_PTR_GET_DEFAULT(destPort_, "") };
    inline ModifyNatFirewallControlPolicyRequest& setDestPort(string destPort) { DARABONBA_PTR_SET_VALUE(destPort_, destPort) };


    // destPortGroup Field Functions 
    bool hasDestPortGroup() const { return this->destPortGroup_ != nullptr;};
    void deleteDestPortGroup() { this->destPortGroup_ = nullptr;};
    inline string getDestPortGroup() const { DARABONBA_PTR_GET_DEFAULT(destPortGroup_, "") };
    inline ModifyNatFirewallControlPolicyRequest& setDestPortGroup(string destPortGroup) { DARABONBA_PTR_SET_VALUE(destPortGroup_, destPortGroup) };


    // destPortType Field Functions 
    bool hasDestPortType() const { return this->destPortType_ != nullptr;};
    void deleteDestPortType() { this->destPortType_ = nullptr;};
    inline string getDestPortType() const { DARABONBA_PTR_GET_DEFAULT(destPortType_, "") };
    inline ModifyNatFirewallControlPolicyRequest& setDestPortType(string destPortType) { DARABONBA_PTR_SET_VALUE(destPortType_, destPortType) };


    // destination Field Functions 
    bool hasDestination() const { return this->destination_ != nullptr;};
    void deleteDestination() { this->destination_ = nullptr;};
    inline string getDestination() const { DARABONBA_PTR_GET_DEFAULT(destination_, "") };
    inline ModifyNatFirewallControlPolicyRequest& setDestination(string destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };


    // destinationType Field Functions 
    bool hasDestinationType() const { return this->destinationType_ != nullptr;};
    void deleteDestinationType() { this->destinationType_ = nullptr;};
    inline string getDestinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
    inline ModifyNatFirewallControlPolicyRequest& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ModifyNatFirewallControlPolicyRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // domainResolveType Field Functions 
    bool hasDomainResolveType() const { return this->domainResolveType_ != nullptr;};
    void deleteDomainResolveType() { this->domainResolveType_ = nullptr;};
    inline string getDomainResolveType() const { DARABONBA_PTR_GET_DEFAULT(domainResolveType_, "") };
    inline ModifyNatFirewallControlPolicyRequest& setDomainResolveType(string domainResolveType) { DARABONBA_PTR_SET_VALUE(domainResolveType_, domainResolveType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ModifyNatFirewallControlPolicyRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyNatFirewallControlPolicyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline ModifyNatFirewallControlPolicyRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // proto Field Functions 
    bool hasProto() const { return this->proto_ != nullptr;};
    void deleteProto() { this->proto_ = nullptr;};
    inline string getProto() const { DARABONBA_PTR_GET_DEFAULT(proto_, "") };
    inline ModifyNatFirewallControlPolicyRequest& setProto(string proto) { DARABONBA_PTR_SET_VALUE(proto_, proto) };


    // release Field Functions 
    bool hasRelease() const { return this->release_ != nullptr;};
    void deleteRelease() { this->release_ = nullptr;};
    inline string getRelease() const { DARABONBA_PTR_GET_DEFAULT(release_, "") };
    inline ModifyNatFirewallControlPolicyRequest& setRelease(string release) { DARABONBA_PTR_SET_VALUE(release_, release) };


    // repeatDays Field Functions 
    bool hasRepeatDays() const { return this->repeatDays_ != nullptr;};
    void deleteRepeatDays() { this->repeatDays_ = nullptr;};
    inline const vector<int64_t> & getRepeatDays() const { DARABONBA_PTR_GET_CONST(repeatDays_, vector<int64_t>) };
    inline vector<int64_t> getRepeatDays() { DARABONBA_PTR_GET(repeatDays_, vector<int64_t>) };
    inline ModifyNatFirewallControlPolicyRequest& setRepeatDays(const vector<int64_t> & repeatDays) { DARABONBA_PTR_SET_VALUE(repeatDays_, repeatDays) };
    inline ModifyNatFirewallControlPolicyRequest& setRepeatDays(vector<int64_t> && repeatDays) { DARABONBA_PTR_SET_RVALUE(repeatDays_, repeatDays) };


    // repeatEndTime Field Functions 
    bool hasRepeatEndTime() const { return this->repeatEndTime_ != nullptr;};
    void deleteRepeatEndTime() { this->repeatEndTime_ = nullptr;};
    inline string getRepeatEndTime() const { DARABONBA_PTR_GET_DEFAULT(repeatEndTime_, "") };
    inline ModifyNatFirewallControlPolicyRequest& setRepeatEndTime(string repeatEndTime) { DARABONBA_PTR_SET_VALUE(repeatEndTime_, repeatEndTime) };


    // repeatStartTime Field Functions 
    bool hasRepeatStartTime() const { return this->repeatStartTime_ != nullptr;};
    void deleteRepeatStartTime() { this->repeatStartTime_ = nullptr;};
    inline string getRepeatStartTime() const { DARABONBA_PTR_GET_DEFAULT(repeatStartTime_, "") };
    inline ModifyNatFirewallControlPolicyRequest& setRepeatStartTime(string repeatStartTime) { DARABONBA_PTR_SET_VALUE(repeatStartTime_, repeatStartTime) };


    // repeatType Field Functions 
    bool hasRepeatType() const { return this->repeatType_ != nullptr;};
    void deleteRepeatType() { this->repeatType_ = nullptr;};
    inline string getRepeatType() const { DARABONBA_PTR_GET_DEFAULT(repeatType_, "") };
    inline ModifyNatFirewallControlPolicyRequest& setRepeatType(string repeatType) { DARABONBA_PTR_SET_VALUE(repeatType_, repeatType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ModifyNatFirewallControlPolicyRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ModifyNatFirewallControlPolicyRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ModifyNatFirewallControlPolicyRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The action that Cloud Firewall performs on traffic in the access control policy. Valid values:
    // - **accept**: Allows the traffic.
    // - **drop**: Denies the traffic.
    // - **log**: Monitors the traffic.
    shared_ptr<string> aclAction_ {};
    // The UUID of the access control policy.
    // To delete an access control policy, you must provide the UUID of the policy. You can call the DescribeNatFirewallControlPolicy operation to obtain the UUID.
    // 
    // This parameter is required.
    shared_ptr<string> aclUuid_ {};
    // The names of the applications.
    shared_ptr<vector<string>> applicationNameList_ {};
    // The description of the access control policy. Fuzzy match is supported.
    // > If you do not specify this parameter, the descriptions of all policies are queried.
    shared_ptr<string> description_ {};
    // The destination port for traffic in the access control policy of the virtual private cloud (VPC) firewalls.
    // > Specify this parameter when **DestPortType** is set to `port`.
    shared_ptr<string> destPort_ {};
    // The name of the destination port address book for traffic in the access control policy.
    shared_ptr<string> destPortGroup_ {};
    // The type of the destination port for traffic in the access control policy. Valid values:
    // - **port**: port.
    // - **group**: port address book.
    shared_ptr<string> destPortType_ {};
    // The destination address in the access control policy.
    // - If **DestinationType** is set to net, **Destination** is the destination CIDR block. Example: 1.2.3.4/24.
    // - If **DestinationType** is set to group, **Destination** is the name of the destination address book. Example: db_group.
    // - If **DestinationType** is set to domain, **Destination** is the destination domain name. Example: *.aliyuncs.com.
    // - If **DestinationType** is set to location, **Destination** is the destination region. For the region codes, see the following section. Example: ["BJ11", "ZB"\].
    shared_ptr<string> destination_ {};
    // The type of the destination address in the access control policy. Valid values:
    // - **net**: destination CIDR block.
    // - **group**: destination address book.
    // - **domain**: destination domain name.
    // - **location**: destination region.
    shared_ptr<string> destinationType_ {};
    // The traffic direction of the access control policy. Valid values:
    // - **out**: outbound traffic.
    shared_ptr<string> direction_ {};
    // The domain name resolution method of the access control policy. Valid values:
    // - **0**: FQDN-based resolution.
    // - **1**: DNS-based dynamic resolution.
    // - **2**: FQDN and DNS-based dynamic resolution.
    // > If the domain name identification mode includes FQDN, only the TCP protocol is allowed. You can select HTTP, HTTPS, SMTP, SMTPS, SSL, IMAPS, or POPS as the application.
    shared_ptr<string> domainResolveType_ {};
    // The end time of the policy validity period for the access control policy. Specify the time in the UNIX timestamp format (seconds). The time must be on the hour or half-hour, and must be at least 30 minutes later than the start time.
    // > If RepeatType is set to Permanent, EndTime is empty. If RepeatType is set to None, Daily, Weekly, or Monthly, EndTime must be specified.
    shared_ptr<int64_t> endTime_ {};
    // The language of the request and response. Valid values:
    // - **zh** (default): Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The ID of the NAT gateway.
    // 
    // This parameter is required.
    shared_ptr<string> natGatewayId_ {};
    // The type of the security protocol for traffic in the access control policy. Supported protocol types:
    // - **ANY**
    // - **TCP**
    // - **UDP**
    // - **ICMP**
    // > **ANY** indicates that the policy applies to all types of applications.
    // > If the destination address is a threat intelligence address book or a cloud service address book of the domain name type, you can set this parameter to TCP. If you select TCP, you can select HTTP, HTTPS, SMTP, SMTPS, or SSL as the application.
    shared_ptr<string> proto_ {};
    // The status of the access control policy. Valid values:
    // - **true**: The policy is enabled.
    // - **false**: The policy is disabled.
    shared_ptr<string> release_ {};
    // The set of recurrence days for the policy validity period of the access control policy.
    // - If RepeatType is set to `Permanent`, `None`, or `Daily`, RepeatDays is an empty set. Example: [].
    // - If RepeatType is set to Weekly, RepeatDays cannot be empty. Example: [0, 6].
    // > If RepeatType is set to Weekly, the values in RepeatDays must be unique.
    // - If RepeatType is set to `Monthly`, RepeatDays cannot be empty. Example: [1, 31].
    // > If RepeatType is set to Monthly, the values in RepeatDays must be unique.
    shared_ptr<vector<int64_t>> repeatDays_ {};
    // The recurrence end time when the policy takes effect. Use the 24-hour time format HH:mm, such as 23:30. The time must be on the hour or half-hour, and must be at least 30 minutes later than the recurrence start time.
    // > If RepeatType is set to Permanent or None, RepeatEndTime is empty. If RepeatType is set to Daily, Weekly, or Monthly, RepeatEndTime must be specified.
    shared_ptr<string> repeatEndTime_ {};
    // The recurrence start time when the policy takes effect. Use the 24-hour time format HH:mm, such as 08:00. The time must be on the hour or half-hour, and must be at least 30 minutes earlier than the recurrence end time.
    // > If RepeatType is set to Permanent or None, RepeatStartTime is empty. If RepeatType is set to Daily, Weekly, or Monthly, RepeatStartTime must be specified.
    shared_ptr<string> repeatStartTime_ {};
    // The recurrence type of the policy validity period for the access control policy. Valid values:
    // - **Permanent** (default): Always.
    // - **None**: Specified single time.
    // - **Daily**: Every day.
    // - **Weekly**: Every week.
    // - **Monthly**: Every month.
    shared_ptr<string> repeatType_ {};
    // The source address in the access control policy. Valid values:
    // - If **SourceType** is set to `net`, Source is the source CIDR block. Example: 10.2.XX.XX/24.
    // - If **SourceType** is set to `group`, Source is the name of the source address book. Example: db_group.
    shared_ptr<string> source_ {};
    // The type of the source address in the access control policy. Valid values:
    // - **net**: source CIDR block.
    // - **group**: source address book.
    shared_ptr<string> sourceType_ {};
    // The start time of the policy validity period for the access control policy. Specify the time in the UNIX timestamp format (seconds). The time must be on the hour or half-hour, and must be at least 30 minutes earlier than the end time.
    // > If RepeatType is set to Permanent, StartTime is empty. If RepeatType is set to None, Daily, Weekly, or Monthly, StartTime must be specified.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
