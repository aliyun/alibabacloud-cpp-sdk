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
        && return this->applicationNameList_ == nullptr && return this->description_ == nullptr && return this->destPort_ == nullptr && return this->destPortGroup_ == nullptr && return this->destPortType_ == nullptr
        && return this->destination_ == nullptr && return this->destinationType_ == nullptr && return this->direction_ == nullptr && return this->domainResolveType_ == nullptr && return this->endTime_ == nullptr
        && return this->ipVersion_ == nullptr && return this->lang_ == nullptr && return this->natGatewayId_ == nullptr && return this->newOrder_ == nullptr && return this->proto_ == nullptr
        && return this->release_ == nullptr && return this->repeatDays_ == nullptr && return this->repeatEndTime_ == nullptr && return this->repeatStartTime_ == nullptr && return this->repeatType_ == nullptr
        && return this->source_ == nullptr && return this->sourceType_ == nullptr && return this->startTime_ == nullptr; };
    // aclAction Field Functions 
    bool hasAclAction() const { return this->aclAction_ != nullptr;};
    void deleteAclAction() { this->aclAction_ = nullptr;};
    inline string aclAction() const { DARABONBA_PTR_GET_DEFAULT(aclAction_, "") };
    inline CreateNatFirewallControlPolicyRequest& setAclAction(string aclAction) { DARABONBA_PTR_SET_VALUE(aclAction_, aclAction) };


    // applicationNameList Field Functions 
    bool hasApplicationNameList() const { return this->applicationNameList_ != nullptr;};
    void deleteApplicationNameList() { this->applicationNameList_ = nullptr;};
    inline const vector<string> & applicationNameList() const { DARABONBA_PTR_GET_CONST(applicationNameList_, vector<string>) };
    inline vector<string> applicationNameList() { DARABONBA_PTR_GET(applicationNameList_, vector<string>) };
    inline CreateNatFirewallControlPolicyRequest& setApplicationNameList(const vector<string> & applicationNameList) { DARABONBA_PTR_SET_VALUE(applicationNameList_, applicationNameList) };
    inline CreateNatFirewallControlPolicyRequest& setApplicationNameList(vector<string> && applicationNameList) { DARABONBA_PTR_SET_RVALUE(applicationNameList_, applicationNameList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateNatFirewallControlPolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destPort Field Functions 
    bool hasDestPort() const { return this->destPort_ != nullptr;};
    void deleteDestPort() { this->destPort_ = nullptr;};
    inline string destPort() const { DARABONBA_PTR_GET_DEFAULT(destPort_, "") };
    inline CreateNatFirewallControlPolicyRequest& setDestPort(string destPort) { DARABONBA_PTR_SET_VALUE(destPort_, destPort) };


    // destPortGroup Field Functions 
    bool hasDestPortGroup() const { return this->destPortGroup_ != nullptr;};
    void deleteDestPortGroup() { this->destPortGroup_ = nullptr;};
    inline string destPortGroup() const { DARABONBA_PTR_GET_DEFAULT(destPortGroup_, "") };
    inline CreateNatFirewallControlPolicyRequest& setDestPortGroup(string destPortGroup) { DARABONBA_PTR_SET_VALUE(destPortGroup_, destPortGroup) };


    // destPortType Field Functions 
    bool hasDestPortType() const { return this->destPortType_ != nullptr;};
    void deleteDestPortType() { this->destPortType_ = nullptr;};
    inline string destPortType() const { DARABONBA_PTR_GET_DEFAULT(destPortType_, "") };
    inline CreateNatFirewallControlPolicyRequest& setDestPortType(string destPortType) { DARABONBA_PTR_SET_VALUE(destPortType_, destPortType) };


    // destination Field Functions 
    bool hasDestination() const { return this->destination_ != nullptr;};
    void deleteDestination() { this->destination_ = nullptr;};
    inline string destination() const { DARABONBA_PTR_GET_DEFAULT(destination_, "") };
    inline CreateNatFirewallControlPolicyRequest& setDestination(string destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };


    // destinationType Field Functions 
    bool hasDestinationType() const { return this->destinationType_ != nullptr;};
    void deleteDestinationType() { this->destinationType_ = nullptr;};
    inline string destinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
    inline CreateNatFirewallControlPolicyRequest& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline CreateNatFirewallControlPolicyRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // domainResolveType Field Functions 
    bool hasDomainResolveType() const { return this->domainResolveType_ != nullptr;};
    void deleteDomainResolveType() { this->domainResolveType_ = nullptr;};
    inline int32_t domainResolveType() const { DARABONBA_PTR_GET_DEFAULT(domainResolveType_, 0) };
    inline CreateNatFirewallControlPolicyRequest& setDomainResolveType(int32_t domainResolveType) { DARABONBA_PTR_SET_VALUE(domainResolveType_, domainResolveType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline CreateNatFirewallControlPolicyRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline CreateNatFirewallControlPolicyRequest& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateNatFirewallControlPolicyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline CreateNatFirewallControlPolicyRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // newOrder Field Functions 
    bool hasNewOrder() const { return this->newOrder_ != nullptr;};
    void deleteNewOrder() { this->newOrder_ = nullptr;};
    inline string newOrder() const { DARABONBA_PTR_GET_DEFAULT(newOrder_, "") };
    inline CreateNatFirewallControlPolicyRequest& setNewOrder(string newOrder) { DARABONBA_PTR_SET_VALUE(newOrder_, newOrder) };


    // proto Field Functions 
    bool hasProto() const { return this->proto_ != nullptr;};
    void deleteProto() { this->proto_ = nullptr;};
    inline string proto() const { DARABONBA_PTR_GET_DEFAULT(proto_, "") };
    inline CreateNatFirewallControlPolicyRequest& setProto(string proto) { DARABONBA_PTR_SET_VALUE(proto_, proto) };


    // release Field Functions 
    bool hasRelease() const { return this->release_ != nullptr;};
    void deleteRelease() { this->release_ = nullptr;};
    inline string release() const { DARABONBA_PTR_GET_DEFAULT(release_, "") };
    inline CreateNatFirewallControlPolicyRequest& setRelease(string release) { DARABONBA_PTR_SET_VALUE(release_, release) };


    // repeatDays Field Functions 
    bool hasRepeatDays() const { return this->repeatDays_ != nullptr;};
    void deleteRepeatDays() { this->repeatDays_ = nullptr;};
    inline const vector<int64_t> & repeatDays() const { DARABONBA_PTR_GET_CONST(repeatDays_, vector<int64_t>) };
    inline vector<int64_t> repeatDays() { DARABONBA_PTR_GET(repeatDays_, vector<int64_t>) };
    inline CreateNatFirewallControlPolicyRequest& setRepeatDays(const vector<int64_t> & repeatDays) { DARABONBA_PTR_SET_VALUE(repeatDays_, repeatDays) };
    inline CreateNatFirewallControlPolicyRequest& setRepeatDays(vector<int64_t> && repeatDays) { DARABONBA_PTR_SET_RVALUE(repeatDays_, repeatDays) };


    // repeatEndTime Field Functions 
    bool hasRepeatEndTime() const { return this->repeatEndTime_ != nullptr;};
    void deleteRepeatEndTime() { this->repeatEndTime_ = nullptr;};
    inline string repeatEndTime() const { DARABONBA_PTR_GET_DEFAULT(repeatEndTime_, "") };
    inline CreateNatFirewallControlPolicyRequest& setRepeatEndTime(string repeatEndTime) { DARABONBA_PTR_SET_VALUE(repeatEndTime_, repeatEndTime) };


    // repeatStartTime Field Functions 
    bool hasRepeatStartTime() const { return this->repeatStartTime_ != nullptr;};
    void deleteRepeatStartTime() { this->repeatStartTime_ = nullptr;};
    inline string repeatStartTime() const { DARABONBA_PTR_GET_DEFAULT(repeatStartTime_, "") };
    inline CreateNatFirewallControlPolicyRequest& setRepeatStartTime(string repeatStartTime) { DARABONBA_PTR_SET_VALUE(repeatStartTime_, repeatStartTime) };


    // repeatType Field Functions 
    bool hasRepeatType() const { return this->repeatType_ != nullptr;};
    void deleteRepeatType() { this->repeatType_ = nullptr;};
    inline string repeatType() const { DARABONBA_PTR_GET_DEFAULT(repeatType_, "") };
    inline CreateNatFirewallControlPolicyRequest& setRepeatType(string repeatType) { DARABONBA_PTR_SET_VALUE(repeatType_, repeatType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateNatFirewallControlPolicyRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateNatFirewallControlPolicyRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline CreateNatFirewallControlPolicyRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The action that Cloud Firewall performs on the traffic.
    // 
    // Valid values:
    // 
    // *   **accept**: allows the traffic.
    // *   **drop**: denies the traffic.
    // *   **log**: monitors the traffic.
    // 
    // This parameter is required.
    std::shared_ptr<string> aclAction_ = nullptr;
    // The application types supported by the access control policy.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> applicationNameList_ = nullptr;
    // The description of the access control policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> description_ = nullptr;
    // The destination port in the access control policy. Valid values:
    // 
    // *   If Proto is set to ICMP, DestPort is automatically left empty.
    // 
    // > If Proto is set to ICMP, access control does not take effect on the destination port.
    // 
    // *   If Proto is set to TCP, UDP, or ANY and DestPortType is set to group, DestPort is empty.
    // 
    // > If DestPortType is set to group, you do not need to specify the destination port number. All ports on which the access control policy takes effect are included in the destination port address book.
    // 
    // *   If Proto is set to TCP, UDP, or ANY and DestPortType is set to port, the value of DestPort is the destination port number.
    std::shared_ptr<string> destPort_ = nullptr;
    // The name of the destination port address book in the access control policy.
    // 
    // > If DestPortType is set to group, you must specify the name of the destination port address book.
    std::shared_ptr<string> destPortGroup_ = nullptr;
    // The type of the destination port in the access control policy. Valid values:
    // 
    // *   **port**: port
    // *   **group**: port address book
    std::shared_ptr<string> destPortType_ = nullptr;
    // The destination address in the access control policy.
    // 
    // Valid values:
    // 
    // *   If DestinationType is set to net, the value of this parameter is a CIDR block.
    // 
    //     Example: 1.2.XX.XX/24
    // 
    // *   If DestinationType is set to group, the value of this parameter is an address book.
    // 
    //     Example: db_group
    // 
    // *   If DestinationType is set to domain, the value of this parameter is a domain name.
    // 
    //     Example: \\*.aliyuncs.com
    // 
    // *   If DestinationType is set to location, the value of this parameter is a location.
    // 
    //     Example: ["BJ11", "ZB"]
    // 
    // This parameter is required.
    std::shared_ptr<string> destination_ = nullptr;
    // The type of the destination address in the access control policy.
    // 
    // Valid values:
    // 
    // *   **net**: CIDR block
    // *   **group**: address book
    // *   **domain**: domain name
    // 
    // This parameter is required.
    std::shared_ptr<string> destinationType_ = nullptr;
    // The direction of the traffic to which the access control policy applies. Valid value:
    // 
    // *   **out**: outbound.
    // 
    // This parameter is required.
    std::shared_ptr<string> direction_ = nullptr;
    // The domain name resolution method of the access control policy. Valid values:
    // 
    // *   **0**: fully qualified domain name (FQDN)-based resolution
    // *   **1**: Domain Name System (DNS)-based dynamic resolution
    // *   **2**: FQDN and DNS-based dynamic resolution
    std::shared_ptr<int32_t> domainResolveType_ = nullptr;
    // The time when the access control policy stops taking effect. The value is a UNIX timestamp. Unit: seconds. The value must be on the hour or on the half hour, and at least 30 minutes later than the value of StartTime.
    // 
    // >  If RepeatType is set to Permanent, EndTime is left empty. If RepeatType is set to None, Daily, Weekly, or Monthly, this parameter must be specified.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The IP version supported by the access control policy. Valid values:
    // 
    // *   **4**: IPv4 (default)
    std::shared_ptr<string> ipVersion_ = nullptr;
    // The language of the content within the response.
    // 
    // Valid values:
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The ID of the NAT gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> natGatewayId_ = nullptr;
    // The priority of the access control policy. The priority value starts from 1. A small priority value indicates a high priority.
    // 
    // This parameter is required.
    std::shared_ptr<string> newOrder_ = nullptr;
    // The protocol type in the access control policy.
    // 
    // Valid values:
    // 
    // *   ANY: all types of protocols.
    // *   TCP
    // *   UDP
    // *   ICMP
    // 
    // >  If the destination address is a threat intelligence address book of the domain name type or a cloud service address book, you can set Proto only to TCP and set ApplicationNameList to HTTP, HTTPS, SMTP, SMTPS, or SSL.
    // 
    // This parameter is required.
    std::shared_ptr<string> proto_ = nullptr;
    // Specifies whether to enable the access control policy. By default, an access control policy is enabled after it is created. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> release_ = nullptr;
    // The days of a week or of a month on which the access control policy takes effect.
    // 
    // *   If RepeatType is set to `Permanent`, `None`, or `Daily`, RepeatDays is left empty. Example: [].
    // *   If RepeatType is set to Weekly, RepeatDays must be specified. Example: [0, 6].
    // 
    // >  If RepeatType is set to Weekly, the fields in the value of RepeatDays cannot be repeated.
    // 
    // *   If RepeatType is set to `Monthly`, RepeatDays must be specified. Example: [1, 31].
    // 
    // >  If RepeatType is set to Monthly, the fields in the value of RepeatDays cannot be repeated.
    std::shared_ptr<vector<int64_t>> repeatDays_ = nullptr;
    // The point in time when the recurrence ends. Example: 23:30. The value must be on the hour or on the half hour, and at least 30 minutes later than the value of RepeatStartTime.
    // 
    // >  If RepeatType is set to Permanent or None, RepeatEndTime is left empty. If RepeatType is set to Daily, Weekly, or Monthly, this parameter must be specified.
    std::shared_ptr<string> repeatEndTime_ = nullptr;
    // The point in time when the recurrence starts. Example: 08:00. The value must be on the hour or on the half hour, and at least 30 minutes earlier than the value of RepeatEndTime.
    // 
    // >  If RepeatType is set to Permanent or None, RepeatStartTime is left empty. If RepeatType is set to Daily, Weekly, or Monthly, this parameter must be specified.
    std::shared_ptr<string> repeatStartTime_ = nullptr;
    // The recurrence type for the access control policy to take effect. Valid values:
    // 
    // *   **Permanent** (default): The policy always takes effect.
    // *   **None**: The policy takes effect for only once.
    // *   **Daily**: The policy takes effect on a daily basis.
    // *   **Weekly**: The policy takes effect on a weekly basis.
    // *   **Monthly**: The policy takes effect on a monthly basis.
    std::shared_ptr<string> repeatType_ = nullptr;
    // The source address in the access control policy.
    // 
    // Valid values:
    // 
    // *   If **SourceType** is set to `net`, the value of Source is a CIDR block.
    // 
    //     Example: 10.2.4.0/24
    // 
    // *   If **SourceType** is set to `group`, the value of this parameter must be an address book name.
    // 
    //     Example: db_group
    // 
    // This parameter is required.
    std::shared_ptr<string> source_ = nullptr;
    // The type of the source address in the access control policy.
    // 
    // Valid values:
    // 
    // *   **net**: source CIDR block
    // *   **group**: source address book
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceType_ = nullptr;
    // The time when the access control policy starts to take effect. The value is a UNIX timestamp. Unit: seconds. The value must be on the hour or on the half hour, and at least 30 minutes earlier than the value of EndTime.
    // 
    // >  If RepeatType is set to Permanent, StartTime is left empty. If RepeatType is set to None, Daily, Weekly, or Monthly, this parameter must be specified.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
