// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCONTROLPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCONTROLPOLICYREQUEST_HPP_
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
  class AddControlPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddControlPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclAction, aclAction_);
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(ApplicationNameList, applicationNameList_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestPort, destPort_);
      DARABONBA_PTR_TO_JSON(DestPortGroup, destPortGroup_);
      DARABONBA_PTR_TO_JSON(DestPortType, destPortType_);
      DARABONBA_PTR_TO_JSON(Destination, destination_);
      DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(DomainResolveType, domainResolveType_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NewOrder, newOrder_);
      DARABONBA_PTR_TO_JSON(Proto, proto_);
      DARABONBA_PTR_TO_JSON(Release, release_);
      DARABONBA_PTR_TO_JSON(RepeatDays, repeatDays_);
      DARABONBA_PTR_TO_JSON(RepeatEndTime, repeatEndTime_);
      DARABONBA_PTR_TO_JSON(RepeatStartTime, repeatStartTime_);
      DARABONBA_PTR_TO_JSON(RepeatType, repeatType_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, AddControlPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclAction, aclAction_);
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(ApplicationNameList, applicationNameList_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestPort, destPort_);
      DARABONBA_PTR_FROM_JSON(DestPortGroup, destPortGroup_);
      DARABONBA_PTR_FROM_JSON(DestPortType, destPortType_);
      DARABONBA_PTR_FROM_JSON(Destination, destination_);
      DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(DomainResolveType, domainResolveType_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NewOrder, newOrder_);
      DARABONBA_PTR_FROM_JSON(Proto, proto_);
      DARABONBA_PTR_FROM_JSON(Release, release_);
      DARABONBA_PTR_FROM_JSON(RepeatDays, repeatDays_);
      DARABONBA_PTR_FROM_JSON(RepeatEndTime, repeatEndTime_);
      DARABONBA_PTR_FROM_JSON(RepeatStartTime, repeatStartTime_);
      DARABONBA_PTR_FROM_JSON(RepeatType, repeatType_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    AddControlPolicyRequest() = default ;
    AddControlPolicyRequest(const AddControlPolicyRequest &) = default ;
    AddControlPolicyRequest(AddControlPolicyRequest &&) = default ;
    AddControlPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddControlPolicyRequest() = default ;
    AddControlPolicyRequest& operator=(const AddControlPolicyRequest &) = default ;
    AddControlPolicyRequest& operator=(AddControlPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclAction_ == nullptr
        && this->applicationName_ == nullptr && this->applicationNameList_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr && this->destPort_ == nullptr
        && this->destPortGroup_ == nullptr && this->destPortType_ == nullptr && this->destination_ == nullptr && this->destinationType_ == nullptr && this->direction_ == nullptr
        && this->domainResolveType_ == nullptr && this->dryRun_ == nullptr && this->endTime_ == nullptr && this->ipVersion_ == nullptr && this->lang_ == nullptr
        && this->newOrder_ == nullptr && this->proto_ == nullptr && this->release_ == nullptr && this->repeatDays_ == nullptr && this->repeatEndTime_ == nullptr
        && this->repeatStartTime_ == nullptr && this->repeatType_ == nullptr && this->source_ == nullptr && this->sourceIp_ == nullptr && this->sourceType_ == nullptr
        && this->startTime_ == nullptr; };
    // aclAction Field Functions 
    bool hasAclAction() const { return this->aclAction_ != nullptr;};
    void deleteAclAction() { this->aclAction_ = nullptr;};
    inline string getAclAction() const { DARABONBA_PTR_GET_DEFAULT(aclAction_, "") };
    inline AddControlPolicyRequest& setAclAction(string aclAction) { DARABONBA_PTR_SET_VALUE(aclAction_, aclAction) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline AddControlPolicyRequest& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // applicationNameList Field Functions 
    bool hasApplicationNameList() const { return this->applicationNameList_ != nullptr;};
    void deleteApplicationNameList() { this->applicationNameList_ = nullptr;};
    inline const vector<string> & getApplicationNameList() const { DARABONBA_PTR_GET_CONST(applicationNameList_, vector<string>) };
    inline vector<string> getApplicationNameList() { DARABONBA_PTR_GET(applicationNameList_, vector<string>) };
    inline AddControlPolicyRequest& setApplicationNameList(const vector<string> & applicationNameList) { DARABONBA_PTR_SET_VALUE(applicationNameList_, applicationNameList) };
    inline AddControlPolicyRequest& setApplicationNameList(vector<string> && applicationNameList) { DARABONBA_PTR_SET_RVALUE(applicationNameList_, applicationNameList) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AddControlPolicyRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddControlPolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destPort Field Functions 
    bool hasDestPort() const { return this->destPort_ != nullptr;};
    void deleteDestPort() { this->destPort_ = nullptr;};
    inline string getDestPort() const { DARABONBA_PTR_GET_DEFAULT(destPort_, "") };
    inline AddControlPolicyRequest& setDestPort(string destPort) { DARABONBA_PTR_SET_VALUE(destPort_, destPort) };


    // destPortGroup Field Functions 
    bool hasDestPortGroup() const { return this->destPortGroup_ != nullptr;};
    void deleteDestPortGroup() { this->destPortGroup_ = nullptr;};
    inline string getDestPortGroup() const { DARABONBA_PTR_GET_DEFAULT(destPortGroup_, "") };
    inline AddControlPolicyRequest& setDestPortGroup(string destPortGroup) { DARABONBA_PTR_SET_VALUE(destPortGroup_, destPortGroup) };


    // destPortType Field Functions 
    bool hasDestPortType() const { return this->destPortType_ != nullptr;};
    void deleteDestPortType() { this->destPortType_ = nullptr;};
    inline string getDestPortType() const { DARABONBA_PTR_GET_DEFAULT(destPortType_, "") };
    inline AddControlPolicyRequest& setDestPortType(string destPortType) { DARABONBA_PTR_SET_VALUE(destPortType_, destPortType) };


    // destination Field Functions 
    bool hasDestination() const { return this->destination_ != nullptr;};
    void deleteDestination() { this->destination_ = nullptr;};
    inline string getDestination() const { DARABONBA_PTR_GET_DEFAULT(destination_, "") };
    inline AddControlPolicyRequest& setDestination(string destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };


    // destinationType Field Functions 
    bool hasDestinationType() const { return this->destinationType_ != nullptr;};
    void deleteDestinationType() { this->destinationType_ = nullptr;};
    inline string getDestinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
    inline AddControlPolicyRequest& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline AddControlPolicyRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // domainResolveType Field Functions 
    bool hasDomainResolveType() const { return this->domainResolveType_ != nullptr;};
    void deleteDomainResolveType() { this->domainResolveType_ = nullptr;};
    inline string getDomainResolveType() const { DARABONBA_PTR_GET_DEFAULT(domainResolveType_, "") };
    inline AddControlPolicyRequest& setDomainResolveType(string domainResolveType) { DARABONBA_PTR_SET_VALUE(domainResolveType_, domainResolveType) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline AddControlPolicyRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline AddControlPolicyRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline AddControlPolicyRequest& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddControlPolicyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // newOrder Field Functions 
    bool hasNewOrder() const { return this->newOrder_ != nullptr;};
    void deleteNewOrder() { this->newOrder_ = nullptr;};
    inline string getNewOrder() const { DARABONBA_PTR_GET_DEFAULT(newOrder_, "") };
    inline AddControlPolicyRequest& setNewOrder(string newOrder) { DARABONBA_PTR_SET_VALUE(newOrder_, newOrder) };


    // proto Field Functions 
    bool hasProto() const { return this->proto_ != nullptr;};
    void deleteProto() { this->proto_ = nullptr;};
    inline string getProto() const { DARABONBA_PTR_GET_DEFAULT(proto_, "") };
    inline AddControlPolicyRequest& setProto(string proto) { DARABONBA_PTR_SET_VALUE(proto_, proto) };


    // release Field Functions 
    bool hasRelease() const { return this->release_ != nullptr;};
    void deleteRelease() { this->release_ = nullptr;};
    inline string getRelease() const { DARABONBA_PTR_GET_DEFAULT(release_, "") };
    inline AddControlPolicyRequest& setRelease(string release) { DARABONBA_PTR_SET_VALUE(release_, release) };


    // repeatDays Field Functions 
    bool hasRepeatDays() const { return this->repeatDays_ != nullptr;};
    void deleteRepeatDays() { this->repeatDays_ = nullptr;};
    inline const vector<int64_t> & getRepeatDays() const { DARABONBA_PTR_GET_CONST(repeatDays_, vector<int64_t>) };
    inline vector<int64_t> getRepeatDays() { DARABONBA_PTR_GET(repeatDays_, vector<int64_t>) };
    inline AddControlPolicyRequest& setRepeatDays(const vector<int64_t> & repeatDays) { DARABONBA_PTR_SET_VALUE(repeatDays_, repeatDays) };
    inline AddControlPolicyRequest& setRepeatDays(vector<int64_t> && repeatDays) { DARABONBA_PTR_SET_RVALUE(repeatDays_, repeatDays) };


    // repeatEndTime Field Functions 
    bool hasRepeatEndTime() const { return this->repeatEndTime_ != nullptr;};
    void deleteRepeatEndTime() { this->repeatEndTime_ = nullptr;};
    inline string getRepeatEndTime() const { DARABONBA_PTR_GET_DEFAULT(repeatEndTime_, "") };
    inline AddControlPolicyRequest& setRepeatEndTime(string repeatEndTime) { DARABONBA_PTR_SET_VALUE(repeatEndTime_, repeatEndTime) };


    // repeatStartTime Field Functions 
    bool hasRepeatStartTime() const { return this->repeatStartTime_ != nullptr;};
    void deleteRepeatStartTime() { this->repeatStartTime_ = nullptr;};
    inline string getRepeatStartTime() const { DARABONBA_PTR_GET_DEFAULT(repeatStartTime_, "") };
    inline AddControlPolicyRequest& setRepeatStartTime(string repeatStartTime) { DARABONBA_PTR_SET_VALUE(repeatStartTime_, repeatStartTime) };


    // repeatType Field Functions 
    bool hasRepeatType() const { return this->repeatType_ != nullptr;};
    void deleteRepeatType() { this->repeatType_ = nullptr;};
    inline string getRepeatType() const { DARABONBA_PTR_GET_DEFAULT(repeatType_, "") };
    inline AddControlPolicyRequest& setRepeatType(string repeatType) { DARABONBA_PTR_SET_VALUE(repeatType_, repeatType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline AddControlPolicyRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline AddControlPolicyRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline AddControlPolicyRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline AddControlPolicyRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The action that Cloud Firewall performs on traffic that matches the access control policy. Valid values:
    // 
    // - **accept**: allows the traffic.
    // - **drop**: blocks the traffic.
    // - **log**: monitors the traffic.
    // 
    // This parameter is required.
    shared_ptr<string> aclAction_ {};
    // The Protocol Type supported by the access control policy. Valid values:
    // - **FTP**
    // - **HTTP**
    // - **HTTPS**
    // - **Memcache**
    // - **MongoDB**
    // - **MQTT**
    // - **MySQL**
    // - **RDP**
    // - **Redis**
    // - **SMTP**
    // - **SMTPS**
    // - **SSH**
    // - **SSL_No_Cert**
    // - **SSL**
    // - **VNC**
    // - **ANY**: all Protocol Types.
    // 
    // > The valid values of ApplicationName depend on the value of Proto. If Proto is set to TCP, ApplicationName can be set to any of the preceding Protocol Types. If Proto is set to UDP, ICMP, or ANY, ApplicationName can only be set to ANY. You must specify ApplicationNameList or ApplicationName. You cannot leave both parameters empty.
    shared_ptr<string> applicationName_ {};
    // The list of application types supported by the access control policy.
    shared_ptr<vector<string>> applicationNameList_ {};
    // The client token that is used to ensure idempotence.
    shared_ptr<string> clientToken_ {};
    // The description of the access control policy.
    // 
    // This parameter is required.
    shared_ptr<string> description_ {};
    // The destination port for traffic in the access control policy. Valid values:
    // 
    // - When the Protocol Type is ICMP, leave DestPort empty.
    //    
    // > When the protocol type is ICMP, access control on destination ports is not supported.
    // 
    // - When the Protocol Type is TCP, UDP, or ANY, and DestPortType is set to group, leave DestPort empty.
    // 
    // > When you select group (destination port address book) for the destination port type of the access control policy, you do not need to configure the Settings for specific destination port numbers. All ports that you want to manage by using this access control policy are included in the destination port address book.
    // 
    // - When the Protocol Type is TCP, UDP, or ANY, and DestPortType is set to port, set DestPort to the destination port number.
    shared_ptr<string> destPort_ {};
    // The name of the destination port address book in the access control policy.
    // 
    // 
    // > If DestPortType is set to group, you must specify the name of the destination port address book.
    shared_ptr<string> destPortGroup_ {};
    // The type of the destination port in the access control policy.
    // 
    // Valid values:
    // 
    // - **port**: port
    // - **group**: port address book
    shared_ptr<string> destPortType_ {};
    // The destination address in the access control policy.
    // 
    // Valid values:
    // - If DestinationType is set to net, set Destination to the destination CIDR block.
    //   
    //   Example: 1.2.XX.XX/24
    // 
    // - If DestinationType is set to group, set Destination to the name of the destination address book.
    // 
    //   Example: db_group
    // 
    // - If DestinationType is set to domain, set Destination to the destination domain name.
    // 
    //   Example: *.aliyuncs.com
    // 
    // - If DestinationType is set to location, set Destination to the destination region.
    // 
    //   Example: ["BJ11", "ZB"\\]
    // 
    // > For more information about destination regions, see [Region codes](https://help.aliyun.com/document_detail/2854161.html).
    // 
    // This parameter is required.
    shared_ptr<string> destination_ {};
    // The type of the destination address in the access control policy. Valid values:
    // 
    // - **net**: destination CIDR block
    // - **group**: destination address book
    // - **domain**: destination domain name
    // - **location**: destination area
    // 
    // This parameter is required.
    shared_ptr<string> destinationType_ {};
    // The traffic direction of the access control policy. Valid values:
    // 
    // - **in**: inbound traffic
    // - **out**: outbound traffic
    // 
    // This parameter is required.
    shared_ptr<string> direction_ {};
    // The domain name resolution mode of the access control policy. Valid values:
    // 
    // * **FQDN**: FQDN-based resolution
    // * **DNS**: DNS-based dynamic resolution
    // * **FQDN_AND_DNS**: FQDN- and DNS-based dynamic resolution
    shared_ptr<string> domainResolveType_ {};
    // Specifies whether to perform a dry run.
    shared_ptr<bool> dryRun_ {};
    // The end time of the Policy Validity Period for the access control policy. It is expressed in the format of a UNIX timestamp accurate to seconds. The time must be on the hour or half hour, and must be at least 30 minutes later than the start time.
    // > If RepeatType is set to Permanent, leave EndTime empty. If RepeatType is set to None, Daily, Weekly, or Monthly, EndTime is required, and you must configure the Settings for the end time.
    shared_ptr<int64_t> endTime_ {};
    // The IP address version.
    // 
    // Valid values:
    // 
    // - **4**: IPv4
    // 
    // - **6**: IPv6
    shared_ptr<string> ipVersion_ {};
    // The language of the request and response. Valid values:
    // 
    // - **zh** (default): Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The priority of the access control policy. The priority value starts from 1 and increases sequentially. A smaller value indicates a higher priority.
    // 
    // This parameter is required.
    shared_ptr<string> newOrder_ {};
    // The protocol type of traffic in the access control policy. Valid values:
    // 
    // - **ANY**: all protocols
    // - **TCP**
    // - **UDP**
    // - **ICMP**
    // 
    // > If the traffic direction is outbound and the destination address is a threat intelligence address book or a cloud service address book of the domain name type, you can only set Proto to TCP. In this case, you can set the application type to HTTP, HTTPS, SMTP, SMTPS, or SSL.
    // 
    // This parameter is required.
    shared_ptr<string> proto_ {};
    // Specifies whether to enable the access control policy. By default, the policy is enabled after it is created. Valid values:
    // - **true**: enables the access control policy.
    // 
    // - **false**: does not enable the access control policy.
    shared_ptr<string> release_ {};
    // The set of recurrence days for the Policy Validity Period of the access control policy.
    // - If RepeatType is set to `Permanent`, `None`, or `Daily`, leave RepeatDays empty.
    //   Example: []
    // - If RepeatType is set to Weekly, RepeatDays cannot be empty.
    //   Example: [0, 6]
    // > When the RepeatType Settings is Weekly, the values in RepeatDays cannot be duplicate.
    // - If RepeatType is set to `Monthly`, RepeatDays cannot be empty.
    //   Example: [1, 31]
    // > When the RepeatType Settings is Monthly, the values in RepeatDays cannot be duplicate.
    shared_ptr<vector<int64_t>> repeatDays_ {};
    // The recurrence end time of the Policy Validity Period for the access control policy. Example: 23:30. The time must be on the hour or half hour, and must be at least 30 minutes later than the recurrence start time.
    // > If RepeatType is set to Permanent or None, leave RepeatEndTime empty. If RepeatType is set to Daily, Weekly, or Monthly, RepeatEndTime is required, and you must configure the Settings for the recurrence end time.
    // > The time is in the HH:mm format (24-hour clock). Example: 08:00 or 23:30.
    shared_ptr<string> repeatEndTime_ {};
    // The recurrence start time of the Policy Validity Period for the access control policy. Example: 08:00. The time must be on the hour or half hour, and must be at least 30 minutes earlier than the recurrence end time.
    // > If RepeatType is set to Permanent or None, leave RepeatStartTime empty. If RepeatType is set to Daily, Weekly, or Monthly, RepeatStartTime is required, and you must configure the Settings for the recurrence start time.
    // > The time is in the HH:mm format (24-hour clock). Example: 08:00 or 23:30.
    shared_ptr<string> repeatStartTime_ {};
    // The recurrence type of the Policy Validity Period for the access control policy. Valid values:
    // - **Permanent** (default): always
    // - **None**: specified single time
    // - **Daily**: every day
    // - **Weekly**: every week
    // - **Monthly**: every month
    shared_ptr<string> repeatType_ {};
    // The source address in the access control policy. Valid values:
    // 
    // - If SourceType is set to net, set Source to the source CIDR block.
    // 
    //   Example: 1.1.XX.XX/24
    // 
    // - If SourceType is set to group, set Source to the name of the source address book.
    // 
    //   Example: db_group
    // 
    // - If SourceType is set to location, set Source to the source region.
    // 
    //   Example: ["BJ11", "ZB"\\]
    // 
    // > For more information about source regions, see [Region codes](https://help.aliyun.com/document_detail/2854161.html).
    // 
    // This parameter is required.
    shared_ptr<string> source_ {};
    // The source IP address of the requester.
    shared_ptr<string> sourceIp_ {};
    // The source address type in the access control policy. Valid values:
    // - **net**: source CIDR block
    // - **group**: source address book
    // - **location**: source location
    // 
    // This parameter is required.
    shared_ptr<string> sourceType_ {};
    // The start time of the Policy Validity Period for the access control policy. It is expressed in the format of a UNIX timestamp accurate to seconds. The time must be on the hour or half hour, and must be at least 30 minutes earlier than the end time.
    // > If RepeatType is set to Permanent, leave StartTime empty. If RepeatType is set to None, Daily, Weekly, or Monthly, StartTime is required, and you must configure the Settings for the start time.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
