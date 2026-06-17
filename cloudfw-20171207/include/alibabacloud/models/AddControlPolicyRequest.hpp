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
        && this->applicationName_ == nullptr && this->applicationNameList_ == nullptr && this->description_ == nullptr && this->destPort_ == nullptr && this->destPortGroup_ == nullptr
        && this->destPortType_ == nullptr && this->destination_ == nullptr && this->destinationType_ == nullptr && this->direction_ == nullptr && this->domainResolveType_ == nullptr
        && this->endTime_ == nullptr && this->ipVersion_ == nullptr && this->lang_ == nullptr && this->newOrder_ == nullptr && this->proto_ == nullptr
        && this->release_ == nullptr && this->repeatDays_ == nullptr && this->repeatEndTime_ == nullptr && this->repeatStartTime_ == nullptr && this->repeatType_ == nullptr
        && this->source_ == nullptr && this->sourceIp_ == nullptr && this->sourceType_ == nullptr && this->startTime_ == nullptr; };
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
    // The action to perform on traffic that matches the access control policy. Valid values:
    // 
    // - **accept**: allows the traffic.
    // 
    // - **drop**: denies the traffic.
    // 
    // - **log**: monitors the traffic.
    // 
    // This parameter is required.
    shared_ptr<string> aclAction_ {};
    // The application type that the access control policy supports. Valid values:
    // 
    // - **FTP**
    // 
    // - **HTTP**
    // 
    // - **HTTPS**
    // 
    // - **Memcache**
    // 
    // - **MongoDB**
    // 
    // - **MQTT**
    // 
    // - **MySQL**
    // 
    // - **RDP**
    // 
    // - **Redis**
    // 
    // - **SMTP**
    // 
    // - **SMTPS**
    // 
    // - **SSH**
    // 
    // - **SSL_No_Cert**
    // 
    // - **SSL**
    // 
    // - **VNC**
    // 
    // - **ANY** (all application types)
    // 
    // > The available application types depend on the protocol type (\\`Proto\\`). If you set \\`Proto\\` to \\`TCP\\`, you can set \\`ApplicationName\\` to any of the listed application types. If you set \\`Proto\\` to \\`UDP\\`, \\`ICMP\\`, or \\`ANY\\`, you can set \\`ApplicationName\\` only to \\`ANY\\`. Specify either \\`ApplicationNameList\\` or \\`ApplicationName\\`.
    shared_ptr<string> applicationName_ {};
    // The application types that the access control policy supports.
    shared_ptr<vector<string>> applicationNameList_ {};
    // The description of the access control policy.
    // 
    // This parameter is required.
    shared_ptr<string> description_ {};
    // The destination port in the access control policy. Valid values:
    // 
    // - If \\`Proto\\` is \\`ICMP\\`, leave this parameter empty.
    // 
    // > If the protocol type is ICMP, you cannot control access based on the destination port.
    // 
    // - If \\`Proto\\` is \\`TCP\\`, \\`UDP\\`, or \\`ANY\\`, and \\`DestPortType\\` is \\`group\\`, leave this parameter empty.
    // 
    // > If you set \\`DestPortType\\` to \\`group\\` (port address book), you do not need to specify a destination port number. The port address book contains all the destination ports that the policy manages.
    // 
    // - If \\`Proto\\` is \\`TCP\\`, \\`UDP\\`, or \\`ANY\\`, and \\`DestPortType\\` is \\`port\\`, set this parameter to the destination port number.
    shared_ptr<string> destPort_ {};
    // The name of the destination port address book for the traffic in the access control policy.
    // 
    // > If you set \\`DestPortType\\` to \\`group\\`, you must specify this parameter.
    shared_ptr<string> destPortGroup_ {};
    // The type of the destination port for the traffic in the access control policy.
    // 
    // Valid values:
    // 
    // - **port**: port
    // 
    // - **group**: port address book
    shared_ptr<string> destPortType_ {};
    // The destination address in the access control policy.
    // 
    // Valid values:
    // 
    // - If \\`DestinationType\\` is \\`net\\`, set this parameter to the destination CIDR block.
    // 
    //   Example: 1.2.XX.XX/24
    // 
    // - If \\`DestinationType\\` is \\`group\\`, set this parameter to the name of the destination address book.
    // 
    //   Example: db_group
    // 
    // - If \\`DestinationType\\` is \\`domain\\`, set this parameter to the destination domain name.
    // 
    //   Example: \\*.aliyuncs.com
    // 
    // - If \\`DestinationType\\` is \\`location\\`, set this parameter to the destination region.
    // 
    //   Example: ["BJ11", "ZB"]
    // 
    // > For more information about region codes, see [Region codes](https://help.aliyun.com/document_detail/2854161.html).
    // 
    // This parameter is required.
    shared_ptr<string> destination_ {};
    // The type of the destination address in the access control policy. Valid values:
    // 
    // - **net**: destination CIDR block
    // 
    // - **group**: destination address book
    // 
    // - **domain**: destination domain name
    // 
    // - **location**: destination region
    // 
    // This parameter is required.
    shared_ptr<string> destinationType_ {};
    // The direction of the traffic to which the access control policy applies. Valid values:
    // 
    // - **in**: inbound traffic
    // 
    // - **out**: outbound traffic
    // 
    // This parameter is required.
    shared_ptr<string> direction_ {};
    // The domain name resolution method for the access control policy. Valid values:
    // 
    // - **FQDN**: based on FQDN
    // 
    // - **DNS**: based on dynamic DNS resolution
    // 
    // - **FQDN_AND_DNS**: based on FQDN and dynamic DNS resolution
    shared_ptr<string> domainResolveType_ {};
    // The time when the policy becomes ineffective. This is a UNIX timestamp. The time must be on the hour or half-hour, and at least 30 minutes after the start time.
    // 
    // > If \\`RepeatType\\` is \\`Permanent\\`, leave this parameter empty. This parameter is required if \\`RepeatType\\` is \\`None\\`, \\`Daily\\`, \\`Weekly\\`, or \\`Monthly\\`.
    shared_ptr<int64_t> endTime_ {};
    // The IP version supported.
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
    // 
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The priority of the access control policy. The priority starts from 1. A smaller value indicates a higher priority.
    // 
    // This parameter is required.
    shared_ptr<string> newOrder_ {};
    // The protocol type of the traffic in the access control policy. Valid values:
    // 
    // - **ANY** (any protocol)
    // 
    // - **TCP**
    // 
    // - **UDP**
    // 
    // - **ICMP**
    // 
    // > If the traffic direction is \\`out\\` and the destination is a domain-based threat intelligence or cloud service address book, you can set the protocol only to \\`TCP\\`. The supported applications are HTTP, HTTPS, SMTP, SMTPS, and SSL.
    // 
    // This parameter is required.
    shared_ptr<string> proto_ {};
    // The status of the access control policy. By default, the policy is enabled after it is created. Valid values:
    // 
    // - **true**: enables the access control policy
    // 
    // - **false**: disables the access control policy
    shared_ptr<string> release_ {};
    // The days of the week or month when the policy is active.
    // 
    // - If \\`RepeatType\\` is \\`Permanent\\`, \\`None\\`, or \\`Daily\\`, leave this parameter empty.
    //   Example: []
    // 
    // - This parameter is required if \\`RepeatType\\` is \\`Weekly\\`.
    //   Example: [0, 6]
    // 
    // > If you set \\`RepeatType\\` to \\`Weekly\\`, the values in \\`RepeatDays\\` cannot be duplicates.
    // 
    // - This parameter is required if \\`RepeatType\\` is \\`Monthly\\`.
    //   Example: [1, 31]
    // 
    // > If you set \\`RepeatType\\` to \\`Monthly\\`, the values in \\`RepeatDays\\` cannot be duplicates.
    shared_ptr<vector<int64_t>> repeatDays_ {};
    // The end time of the recurrence. Example: 23:30. The time must be on the hour or half-hour, and at least 30 minutes after the start time.
    // 
    // > If \\`RepeatType\\` is \\`Permanent\\` or \\`None\\`, leave this parameter empty. This parameter is required if \\`RepeatType\\` is \\`Daily\\`, \\`Weekly\\`, or \\`Monthly\\`.
    shared_ptr<string> repeatEndTime_ {};
    // The start time of the recurrence. Example: 08:00. The time must be on the hour or half-hour, and at least 30 minutes before the end time.
    // 
    // > If \\`RepeatType\\` is \\`Permanent\\` or \\`None\\`, leave this parameter empty. This parameter is required if \\`RepeatType\\` is \\`Daily\\`, \\`Weekly\\`, or \\`Monthly\\`.
    shared_ptr<string> repeatStartTime_ {};
    // The recurrence type for the policy\\"s effective period. Valid values:
    // 
    // - **Permanent** (default): always
    // 
    // - **None**: one-time
    // 
    // - **Daily**: daily
    // 
    // - **Weekly**: weekly
    // 
    // - **Monthly**: monthly
    shared_ptr<string> repeatType_ {};
    // The source address in the access control policy. Valid values:
    // 
    // - If \\`SourceType\\` is \\`net\\`, set this parameter to the source CIDR block.
    // 
    //   Example: 1.1.XX.XX/24
    // 
    // - If \\`SourceType\\` is \\`group\\`, set this parameter to the name of the source address book.
    // 
    //   Example: db_group
    // 
    // - If \\`SourceType\\` is \\`location\\`, set this parameter to the source region.
    // 
    //   Example: ["BJ11", "ZB"]
    // 
    // > For more information about region codes, see [Region codes](https://help.aliyun.com/document_detail/2854161.html).
    // 
    // This parameter is required.
    shared_ptr<string> source_ {};
    // The source IP address of the traffic.
    shared_ptr<string> sourceIp_ {};
    // The type of the source address in the access control policy. Valid values:
    // 
    // - **net**: source CIDR block
    // 
    // - **group**: source address book
    // 
    // - **location**: source region
    // 
    // This parameter is required.
    shared_ptr<string> sourceType_ {};
    // The time when the policy becomes effective. This is a UNIX timestamp. The time must be on the hour or half-hour, and at least 30 minutes before the end time.
    // 
    // > If \\`RepeatType\\` is \\`Permanent\\`, leave this parameter empty. This parameter is required if \\`RepeatType\\` is \\`None\\`, \\`Daily\\`, \\`Weekly\\`, or \\`Monthly\\`.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
