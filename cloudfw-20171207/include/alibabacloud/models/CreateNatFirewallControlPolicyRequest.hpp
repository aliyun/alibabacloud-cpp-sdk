// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENATFIREWALLCONTROLPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENATFIREWALLCONTROLPOLICYREQUEST_HPP_
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
  class CreateNatFirewallControlPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNatFirewallControlPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclAction, aclAction_);
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
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NewOrder, newOrder_);
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
    friend void from_json(const Darabonba::Json& j, CreateNatFirewallControlPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclAction, aclAction_);
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
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NewOrder, newOrder_);
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
    CreateNatFirewallControlPolicyRequest() = default ;
    CreateNatFirewallControlPolicyRequest(const CreateNatFirewallControlPolicyRequest &) = default ;
    CreateNatFirewallControlPolicyRequest(CreateNatFirewallControlPolicyRequest &&) = default ;
    CreateNatFirewallControlPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNatFirewallControlPolicyRequest() = default ;
    CreateNatFirewallControlPolicyRequest& operator=(const CreateNatFirewallControlPolicyRequest &) = default ;
    CreateNatFirewallControlPolicyRequest& operator=(CreateNatFirewallControlPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclAction_ == nullptr
        && this->applicationNameList_ == nullptr && this->description_ == nullptr && this->destPort_ == nullptr && this->destPortGroup_ == nullptr && this->destPortType_ == nullptr
        && this->destination_ == nullptr && this->destinationType_ == nullptr && this->direction_ == nullptr && this->domainResolveType_ == nullptr && this->endTime_ == nullptr
        && this->ipVersion_ == nullptr && this->lang_ == nullptr && this->natGatewayId_ == nullptr && this->newOrder_ == nullptr && this->proto_ == nullptr
        && this->release_ == nullptr && this->repeatDays_ == nullptr && this->repeatEndTime_ == nullptr && this->repeatStartTime_ == nullptr && this->repeatType_ == nullptr
        && this->source_ == nullptr && this->sourceType_ == nullptr && this->startTime_ == nullptr; };
    // aclAction Field Functions 
    bool hasAclAction() const { return this->aclAction_ != nullptr;};
    void deleteAclAction() { this->aclAction_ = nullptr;};
    inline string getAclAction() const { DARABONBA_PTR_GET_DEFAULT(aclAction_, "") };
    inline CreateNatFirewallControlPolicyRequest& setAclAction(string aclAction) { DARABONBA_PTR_SET_VALUE(aclAction_, aclAction) };


    // applicationNameList Field Functions 
    bool hasApplicationNameList() const { return this->applicationNameList_ != nullptr;};
    void deleteApplicationNameList() { this->applicationNameList_ = nullptr;};
    inline const vector<string> & getApplicationNameList() const { DARABONBA_PTR_GET_CONST(applicationNameList_, vector<string>) };
    inline vector<string> getApplicationNameList() { DARABONBA_PTR_GET(applicationNameList_, vector<string>) };
    inline CreateNatFirewallControlPolicyRequest& setApplicationNameList(const vector<string> & applicationNameList) { DARABONBA_PTR_SET_VALUE(applicationNameList_, applicationNameList) };
    inline CreateNatFirewallControlPolicyRequest& setApplicationNameList(vector<string> && applicationNameList) { DARABONBA_PTR_SET_RVALUE(applicationNameList_, applicationNameList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateNatFirewallControlPolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destPort Field Functions 
    bool hasDestPort() const { return this->destPort_ != nullptr;};
    void deleteDestPort() { this->destPort_ = nullptr;};
    inline string getDestPort() const { DARABONBA_PTR_GET_DEFAULT(destPort_, "") };
    inline CreateNatFirewallControlPolicyRequest& setDestPort(string destPort) { DARABONBA_PTR_SET_VALUE(destPort_, destPort) };


    // destPortGroup Field Functions 
    bool hasDestPortGroup() const { return this->destPortGroup_ != nullptr;};
    void deleteDestPortGroup() { this->destPortGroup_ = nullptr;};
    inline string getDestPortGroup() const { DARABONBA_PTR_GET_DEFAULT(destPortGroup_, "") };
    inline CreateNatFirewallControlPolicyRequest& setDestPortGroup(string destPortGroup) { DARABONBA_PTR_SET_VALUE(destPortGroup_, destPortGroup) };


    // destPortType Field Functions 
    bool hasDestPortType() const { return this->destPortType_ != nullptr;};
    void deleteDestPortType() { this->destPortType_ = nullptr;};
    inline string getDestPortType() const { DARABONBA_PTR_GET_DEFAULT(destPortType_, "") };
    inline CreateNatFirewallControlPolicyRequest& setDestPortType(string destPortType) { DARABONBA_PTR_SET_VALUE(destPortType_, destPortType) };


    // destination Field Functions 
    bool hasDestination() const { return this->destination_ != nullptr;};
    void deleteDestination() { this->destination_ = nullptr;};
    inline string getDestination() const { DARABONBA_PTR_GET_DEFAULT(destination_, "") };
    inline CreateNatFirewallControlPolicyRequest& setDestination(string destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };


    // destinationType Field Functions 
    bool hasDestinationType() const { return this->destinationType_ != nullptr;};
    void deleteDestinationType() { this->destinationType_ = nullptr;};
    inline string getDestinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
    inline CreateNatFirewallControlPolicyRequest& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline CreateNatFirewallControlPolicyRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // domainResolveType Field Functions 
    bool hasDomainResolveType() const { return this->domainResolveType_ != nullptr;};
    void deleteDomainResolveType() { this->domainResolveType_ = nullptr;};
    inline int32_t getDomainResolveType() const { DARABONBA_PTR_GET_DEFAULT(domainResolveType_, 0) };
    inline CreateNatFirewallControlPolicyRequest& setDomainResolveType(int32_t domainResolveType) { DARABONBA_PTR_SET_VALUE(domainResolveType_, domainResolveType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline CreateNatFirewallControlPolicyRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline CreateNatFirewallControlPolicyRequest& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateNatFirewallControlPolicyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline CreateNatFirewallControlPolicyRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // newOrder Field Functions 
    bool hasNewOrder() const { return this->newOrder_ != nullptr;};
    void deleteNewOrder() { this->newOrder_ = nullptr;};
    inline string getNewOrder() const { DARABONBA_PTR_GET_DEFAULT(newOrder_, "") };
    inline CreateNatFirewallControlPolicyRequest& setNewOrder(string newOrder) { DARABONBA_PTR_SET_VALUE(newOrder_, newOrder) };


    // proto Field Functions 
    bool hasProto() const { return this->proto_ != nullptr;};
    void deleteProto() { this->proto_ = nullptr;};
    inline string getProto() const { DARABONBA_PTR_GET_DEFAULT(proto_, "") };
    inline CreateNatFirewallControlPolicyRequest& setProto(string proto) { DARABONBA_PTR_SET_VALUE(proto_, proto) };


    // release Field Functions 
    bool hasRelease() const { return this->release_ != nullptr;};
    void deleteRelease() { this->release_ = nullptr;};
    inline string getRelease() const { DARABONBA_PTR_GET_DEFAULT(release_, "") };
    inline CreateNatFirewallControlPolicyRequest& setRelease(string release) { DARABONBA_PTR_SET_VALUE(release_, release) };


    // repeatDays Field Functions 
    bool hasRepeatDays() const { return this->repeatDays_ != nullptr;};
    void deleteRepeatDays() { this->repeatDays_ = nullptr;};
    inline const vector<int64_t> & getRepeatDays() const { DARABONBA_PTR_GET_CONST(repeatDays_, vector<int64_t>) };
    inline vector<int64_t> getRepeatDays() { DARABONBA_PTR_GET(repeatDays_, vector<int64_t>) };
    inline CreateNatFirewallControlPolicyRequest& setRepeatDays(const vector<int64_t> & repeatDays) { DARABONBA_PTR_SET_VALUE(repeatDays_, repeatDays) };
    inline CreateNatFirewallControlPolicyRequest& setRepeatDays(vector<int64_t> && repeatDays) { DARABONBA_PTR_SET_RVALUE(repeatDays_, repeatDays) };


    // repeatEndTime Field Functions 
    bool hasRepeatEndTime() const { return this->repeatEndTime_ != nullptr;};
    void deleteRepeatEndTime() { this->repeatEndTime_ = nullptr;};
    inline string getRepeatEndTime() const { DARABONBA_PTR_GET_DEFAULT(repeatEndTime_, "") };
    inline CreateNatFirewallControlPolicyRequest& setRepeatEndTime(string repeatEndTime) { DARABONBA_PTR_SET_VALUE(repeatEndTime_, repeatEndTime) };


    // repeatStartTime Field Functions 
    bool hasRepeatStartTime() const { return this->repeatStartTime_ != nullptr;};
    void deleteRepeatStartTime() { this->repeatStartTime_ = nullptr;};
    inline string getRepeatStartTime() const { DARABONBA_PTR_GET_DEFAULT(repeatStartTime_, "") };
    inline CreateNatFirewallControlPolicyRequest& setRepeatStartTime(string repeatStartTime) { DARABONBA_PTR_SET_VALUE(repeatStartTime_, repeatStartTime) };


    // repeatType Field Functions 
    bool hasRepeatType() const { return this->repeatType_ != nullptr;};
    void deleteRepeatType() { this->repeatType_ = nullptr;};
    inline string getRepeatType() const { DARABONBA_PTR_GET_DEFAULT(repeatType_, "") };
    inline CreateNatFirewallControlPolicyRequest& setRepeatType(string repeatType) { DARABONBA_PTR_SET_VALUE(repeatType_, repeatType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateNatFirewallControlPolicyRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateNatFirewallControlPolicyRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline CreateNatFirewallControlPolicyRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The action that Cloud Firewall performs on traffic that matches the access control policy.
    // 
    // Valid values:
    // 
    // - **accept**: Allows the traffic.
    // 
    // - **drop**: Drops the traffic.
    // 
    // - **log**: Logs the traffic.
    // 
    // This parameter is required.
    shared_ptr<string> aclAction_ {};
    // The list of applications to which the access control policy applies.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> applicationNameList_ {};
    // The description of the access control policy.
    // 
    // This parameter is required.
    shared_ptr<string> description_ {};
    // The destination port for the traffic. The value of this parameter depends on the `Proto` and `DestPortType` parameters.
    // 
    // - If `Proto` is `ICMP`, leave this parameter empty.
    // 
    // > Access control cannot be configured based on the destination port for ICMP traffic.
    // 
    // - If the destination port type (`DestPortType`) is `group`, leave this parameter empty.
    // 
    // > If `DestPortType` is set to `group`, you do not need to specify a destination port because the required ports are defined in the selected port address book.
    // 
    // - If the protocol is TCP, UDP, or ANY and the destination port type (`DestPortType`) is `port`, specify the destination port number.
    shared_ptr<string> destPort_ {};
    // The name of the destination port address book.
    // 
    // > This parameter is required if `DestPortType` is set to `group`.
    shared_ptr<string> destPortGroup_ {};
    // The type of the destination port.
    // 
    // - **port**: Port or port range
    // 
    // - **group**: Port address book
    shared_ptr<string> destPortType_ {};
    // The destination address in the access control policy.
    // 
    // The value of this parameter varies based on the value of `DestinationType`:
    // 
    // - If `DestinationType` is `net`, set this parameter to the destination CIDR.
    // 
    //   Example: `1.2.XX.XX/24`
    // 
    // - If `DestinationType` is `group`, set this parameter to the name of the destination address book.
    // 
    //   Example: `db_group`
    // 
    // - If `DestinationType` is `domain`, set this parameter to the destination domain.
    // 
    //   Example: \\*.aliyuncs.com
    // 
    // - If `DestinationType` is `location`, set this parameter to the destination location.
    // 
    //   Example: ["BJ11", "ZB"]
    // 
    // This parameter is required.
    shared_ptr<string> destination_ {};
    // The type of the destination address in the access control policy.
    // 
    // Valid values:
    // 
    // - **net**: Destination CIDR
    // 
    // - **group**: Destination address book
    // 
    // - **domain**: Destination domain
    // 
    // This parameter is required.
    shared_ptr<string> destinationType_ {};
    // The traffic direction for the access control policy. Valid values:
    // 
    // - **out**: outbound traffic
    // 
    // This parameter is required.
    shared_ptr<string> direction_ {};
    // The domain name resolution method. Valid values:
    // 
    // - **0**: FQDN-based resolution
    // 
    // - **1**: Dynamic DNS-based resolution
    // 
    // - **2**: FQDN-based and dynamic DNS-based resolution
    // 
    // > If the resolution method includes FQDN, you can set the protocol only to TCP. The supported applications are HTTP, HTTPS, SMTP, SMTPS, and SSL.
    shared_ptr<int32_t> domainResolveType_ {};
    // The end time of the policy\\"s validity period, specified as a Unix timestamp. The time must be on the hour or half-hour and be at least 30 minutes after the start time.
    // 
    // > This parameter is required if `RepeatType` is `None`, `Daily`, `Weekly`, or `Monthly`. If `RepeatType` is `Permanent`, leave this parameter empty.
    shared_ptr<int64_t> endTime_ {};
    // The IP version for the access control policy. Valid values:
    // 
    // - **4** (default): IPv4
    shared_ptr<string> ipVersion_ {};
    // The language of the response messages.
    // 
    // Valid values:
    // 
    // - **zh**: Chinese (default)
    // 
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The instance ID of the NAT Gateway.
    // 
    // This parameter is required.
    shared_ptr<string> natGatewayId_ {};
    // The priority of the access control policy. Values start from 1. A smaller value indicates a higher priority.
    // 
    // This parameter is required.
    shared_ptr<string> newOrder_ {};
    // The protocol for the traffic in the access control policy.
    // 
    // Valid values:
    // 
    // - ANY: all protocols
    // 
    // - TCP
    // 
    // - UDP
    // 
    // - ICMP
    // 
    // > If the destination is a domain, a threat intelligence address book, or a cloud service address book, you can only set this parameter to `TCP`. The supported application types are HTTP, HTTPS, SMTP, SMTPS, and SSL.
    // 
    // This parameter is required.
    shared_ptr<string> proto_ {};
    // Specifies whether the access control policy is enabled. By default, policies are enabled upon creation. Valid values:
    // 
    // - **true**: Enables the policy.
    // 
    // - **false**: Disables the policy.
    shared_ptr<string> release_ {};
    // The days of the week or month on which the policy recurs.
    // 
    // - If `RepeatType` is set to `Permanent`, `None`, or `Daily`, leave this parameter empty. Example: `[]`
    // 
    // - If `RepeatType` is `Weekly`, this parameter is required. Example: `[0, 6]`
    // 
    // > If `RepeatType` is `Weekly`, the values in `RepeatDays` must be unique.
    // 
    // - If `RepeatType` is `Monthly`, this parameter is required. Example: `[1, 31]`
    // 
    // > If `RepeatType` is `Monthly`, the values in `RepeatDays` must be unique.
    shared_ptr<vector<int64_t>> repeatDays_ {};
    // The end time of the recurrence. The time must be on the hour or half-hour, and must be at least 30 minutes later than the start time.
    // 
    // > This parameter is required if `RepeatType` is set to `Daily`, `Weekly`, or `Monthly`. If `RepeatType` is `Permanent` or `None`, leave this parameter empty.
    // > The time is in the HH:mm format (24-hour). For example, `08:00` or `23:30`.
    shared_ptr<string> repeatEndTime_ {};
    // The start time of the recurrence. The time must be on the hour or half-hour, and must be at least 30 minutes earlier than the end time.
    // 
    // > This parameter is required if `RepeatType` is set to `Daily`, `Weekly`, or `Monthly`. If `RepeatType` is `Permanent` or `None`, leave this parameter empty.
    // > The time is in the HH:mm format (24-hour). For example, `08:00` or `23:30`.
    shared_ptr<string> repeatStartTime_ {};
    // The recurrence type for the policy validity period. Valid values:
    // 
    // - **Permanent** (default): The policy is always active.
    // 
    // - **None**: The policy runs once for a specified duration.
    // 
    // - **Daily**: The policy recurs daily.
    // 
    // - **Weekly**: The policy recurs weekly within a specified time range.
    // 
    // - **Monthly**: The policy recurs monthly within a specified time range.
    shared_ptr<string> repeatType_ {};
    // The source address in the access control policy.
    // 
    // The value of this parameter varies based on the value of `SourceType`:
    // 
    // - If **SourceType** is `net`, set this parameter to the source CIDR.
    // 
    //   Example: 10.2.4.0/24
    // 
    // - If **SourceType** is `group`, set this parameter to the name of the source address book.
    // 
    //   Example: db_group
    // 
    // This parameter is required.
    shared_ptr<string> source_ {};
    // The type of the source address in the access control policy.
    // 
    // Valid values:
    // 
    // - **net**: Source CIDR
    // 
    // - **group**: Source address book
    // 
    // This parameter is required.
    shared_ptr<string> sourceType_ {};
    // The start time of the policy\\"s validity period, specified as a Unix timestamp. The time must be on the hour or half-hour and be at least 30 minutes before the end time.
    // 
    // > This parameter is required if `RepeatType` is `None`, `Daily`, `Weekly`, or `Monthly`. If `RepeatType` is `Permanent`, leave this parameter empty.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
