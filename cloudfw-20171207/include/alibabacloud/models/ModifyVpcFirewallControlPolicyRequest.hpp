// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPCFIREWALLCONTROLPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPCFIREWALLCONTROLPOLICYREQUEST_HPP_
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
  class ModifyVpcFirewallControlPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpcFirewallControlPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclAction, aclAction_);
      DARABONBA_PTR_TO_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(ApplicationNameList, applicationNameList_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestPort, destPort_);
      DARABONBA_PTR_TO_JSON(DestPortGroup, destPortGroup_);
      DARABONBA_PTR_TO_JSON(DestPortType, destPortType_);
      DARABONBA_PTR_TO_JSON(Destination, destination_);
      DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_TO_JSON(DomainResolveType, domainResolveType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Proto, proto_);
      DARABONBA_PTR_TO_JSON(Release, release_);
      DARABONBA_PTR_TO_JSON(RepeatDays, repeatDays_);
      DARABONBA_PTR_TO_JSON(RepeatEndTime, repeatEndTime_);
      DARABONBA_PTR_TO_JSON(RepeatStartTime, repeatStartTime_);
      DARABONBA_PTR_TO_JSON(RepeatType, repeatType_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpcFirewallControlPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclAction, aclAction_);
      DARABONBA_PTR_FROM_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(ApplicationNameList, applicationNameList_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestPort, destPort_);
      DARABONBA_PTR_FROM_JSON(DestPortGroup, destPortGroup_);
      DARABONBA_PTR_FROM_JSON(DestPortType, destPortType_);
      DARABONBA_PTR_FROM_JSON(Destination, destination_);
      DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_FROM_JSON(DomainResolveType, domainResolveType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Proto, proto_);
      DARABONBA_PTR_FROM_JSON(Release, release_);
      DARABONBA_PTR_FROM_JSON(RepeatDays, repeatDays_);
      DARABONBA_PTR_FROM_JSON(RepeatEndTime, repeatEndTime_);
      DARABONBA_PTR_FROM_JSON(RepeatStartTime, repeatStartTime_);
      DARABONBA_PTR_FROM_JSON(RepeatType, repeatType_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
    };
    ModifyVpcFirewallControlPolicyRequest() = default ;
    ModifyVpcFirewallControlPolicyRequest(const ModifyVpcFirewallControlPolicyRequest &) = default ;
    ModifyVpcFirewallControlPolicyRequest(ModifyVpcFirewallControlPolicyRequest &&) = default ;
    ModifyVpcFirewallControlPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpcFirewallControlPolicyRequest() = default ;
    ModifyVpcFirewallControlPolicyRequest& operator=(const ModifyVpcFirewallControlPolicyRequest &) = default ;
    ModifyVpcFirewallControlPolicyRequest& operator=(ModifyVpcFirewallControlPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclAction_ == nullptr
        && this->aclUuid_ == nullptr && this->applicationName_ == nullptr && this->applicationNameList_ == nullptr && this->description_ == nullptr && this->destPort_ == nullptr
        && this->destPortGroup_ == nullptr && this->destPortType_ == nullptr && this->destination_ == nullptr && this->destinationType_ == nullptr && this->domainResolveType_ == nullptr
        && this->endTime_ == nullptr && this->lang_ == nullptr && this->proto_ == nullptr && this->release_ == nullptr && this->repeatDays_ == nullptr
        && this->repeatEndTime_ == nullptr && this->repeatStartTime_ == nullptr && this->repeatType_ == nullptr && this->source_ == nullptr && this->sourceType_ == nullptr
        && this->startTime_ == nullptr && this->vpcFirewallId_ == nullptr; };
    // aclAction Field Functions 
    bool hasAclAction() const { return this->aclAction_ != nullptr;};
    void deleteAclAction() { this->aclAction_ = nullptr;};
    inline string getAclAction() const { DARABONBA_PTR_GET_DEFAULT(aclAction_, "") };
    inline ModifyVpcFirewallControlPolicyRequest& setAclAction(string aclAction) { DARABONBA_PTR_SET_VALUE(aclAction_, aclAction) };


    // aclUuid Field Functions 
    bool hasAclUuid() const { return this->aclUuid_ != nullptr;};
    void deleteAclUuid() { this->aclUuid_ = nullptr;};
    inline string getAclUuid() const { DARABONBA_PTR_GET_DEFAULT(aclUuid_, "") };
    inline ModifyVpcFirewallControlPolicyRequest& setAclUuid(string aclUuid) { DARABONBA_PTR_SET_VALUE(aclUuid_, aclUuid) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ModifyVpcFirewallControlPolicyRequest& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // applicationNameList Field Functions 
    bool hasApplicationNameList() const { return this->applicationNameList_ != nullptr;};
    void deleteApplicationNameList() { this->applicationNameList_ = nullptr;};
    inline const vector<string> & getApplicationNameList() const { DARABONBA_PTR_GET_CONST(applicationNameList_, vector<string>) };
    inline vector<string> getApplicationNameList() { DARABONBA_PTR_GET(applicationNameList_, vector<string>) };
    inline ModifyVpcFirewallControlPolicyRequest& setApplicationNameList(const vector<string> & applicationNameList) { DARABONBA_PTR_SET_VALUE(applicationNameList_, applicationNameList) };
    inline ModifyVpcFirewallControlPolicyRequest& setApplicationNameList(vector<string> && applicationNameList) { DARABONBA_PTR_SET_RVALUE(applicationNameList_, applicationNameList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyVpcFirewallControlPolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destPort Field Functions 
    bool hasDestPort() const { return this->destPort_ != nullptr;};
    void deleteDestPort() { this->destPort_ = nullptr;};
    inline string getDestPort() const { DARABONBA_PTR_GET_DEFAULT(destPort_, "") };
    inline ModifyVpcFirewallControlPolicyRequest& setDestPort(string destPort) { DARABONBA_PTR_SET_VALUE(destPort_, destPort) };


    // destPortGroup Field Functions 
    bool hasDestPortGroup() const { return this->destPortGroup_ != nullptr;};
    void deleteDestPortGroup() { this->destPortGroup_ = nullptr;};
    inline string getDestPortGroup() const { DARABONBA_PTR_GET_DEFAULT(destPortGroup_, "") };
    inline ModifyVpcFirewallControlPolicyRequest& setDestPortGroup(string destPortGroup) { DARABONBA_PTR_SET_VALUE(destPortGroup_, destPortGroup) };


    // destPortType Field Functions 
    bool hasDestPortType() const { return this->destPortType_ != nullptr;};
    void deleteDestPortType() { this->destPortType_ = nullptr;};
    inline string getDestPortType() const { DARABONBA_PTR_GET_DEFAULT(destPortType_, "") };
    inline ModifyVpcFirewallControlPolicyRequest& setDestPortType(string destPortType) { DARABONBA_PTR_SET_VALUE(destPortType_, destPortType) };


    // destination Field Functions 
    bool hasDestination() const { return this->destination_ != nullptr;};
    void deleteDestination() { this->destination_ = nullptr;};
    inline string getDestination() const { DARABONBA_PTR_GET_DEFAULT(destination_, "") };
    inline ModifyVpcFirewallControlPolicyRequest& setDestination(string destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };


    // destinationType Field Functions 
    bool hasDestinationType() const { return this->destinationType_ != nullptr;};
    void deleteDestinationType() { this->destinationType_ = nullptr;};
    inline string getDestinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
    inline ModifyVpcFirewallControlPolicyRequest& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


    // domainResolveType Field Functions 
    bool hasDomainResolveType() const { return this->domainResolveType_ != nullptr;};
    void deleteDomainResolveType() { this->domainResolveType_ = nullptr;};
    inline string getDomainResolveType() const { DARABONBA_PTR_GET_DEFAULT(domainResolveType_, "") };
    inline ModifyVpcFirewallControlPolicyRequest& setDomainResolveType(string domainResolveType) { DARABONBA_PTR_SET_VALUE(domainResolveType_, domainResolveType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ModifyVpcFirewallControlPolicyRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyVpcFirewallControlPolicyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // proto Field Functions 
    bool hasProto() const { return this->proto_ != nullptr;};
    void deleteProto() { this->proto_ = nullptr;};
    inline string getProto() const { DARABONBA_PTR_GET_DEFAULT(proto_, "") };
    inline ModifyVpcFirewallControlPolicyRequest& setProto(string proto) { DARABONBA_PTR_SET_VALUE(proto_, proto) };


    // release Field Functions 
    bool hasRelease() const { return this->release_ != nullptr;};
    void deleteRelease() { this->release_ = nullptr;};
    inline string getRelease() const { DARABONBA_PTR_GET_DEFAULT(release_, "") };
    inline ModifyVpcFirewallControlPolicyRequest& setRelease(string release) { DARABONBA_PTR_SET_VALUE(release_, release) };


    // repeatDays Field Functions 
    bool hasRepeatDays() const { return this->repeatDays_ != nullptr;};
    void deleteRepeatDays() { this->repeatDays_ = nullptr;};
    inline const vector<int64_t> & getRepeatDays() const { DARABONBA_PTR_GET_CONST(repeatDays_, vector<int64_t>) };
    inline vector<int64_t> getRepeatDays() { DARABONBA_PTR_GET(repeatDays_, vector<int64_t>) };
    inline ModifyVpcFirewallControlPolicyRequest& setRepeatDays(const vector<int64_t> & repeatDays) { DARABONBA_PTR_SET_VALUE(repeatDays_, repeatDays) };
    inline ModifyVpcFirewallControlPolicyRequest& setRepeatDays(vector<int64_t> && repeatDays) { DARABONBA_PTR_SET_RVALUE(repeatDays_, repeatDays) };


    // repeatEndTime Field Functions 
    bool hasRepeatEndTime() const { return this->repeatEndTime_ != nullptr;};
    void deleteRepeatEndTime() { this->repeatEndTime_ = nullptr;};
    inline string getRepeatEndTime() const { DARABONBA_PTR_GET_DEFAULT(repeatEndTime_, "") };
    inline ModifyVpcFirewallControlPolicyRequest& setRepeatEndTime(string repeatEndTime) { DARABONBA_PTR_SET_VALUE(repeatEndTime_, repeatEndTime) };


    // repeatStartTime Field Functions 
    bool hasRepeatStartTime() const { return this->repeatStartTime_ != nullptr;};
    void deleteRepeatStartTime() { this->repeatStartTime_ = nullptr;};
    inline string getRepeatStartTime() const { DARABONBA_PTR_GET_DEFAULT(repeatStartTime_, "") };
    inline ModifyVpcFirewallControlPolicyRequest& setRepeatStartTime(string repeatStartTime) { DARABONBA_PTR_SET_VALUE(repeatStartTime_, repeatStartTime) };


    // repeatType Field Functions 
    bool hasRepeatType() const { return this->repeatType_ != nullptr;};
    void deleteRepeatType() { this->repeatType_ = nullptr;};
    inline string getRepeatType() const { DARABONBA_PTR_GET_DEFAULT(repeatType_, "") };
    inline ModifyVpcFirewallControlPolicyRequest& setRepeatType(string repeatType) { DARABONBA_PTR_SET_VALUE(repeatType_, repeatType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ModifyVpcFirewallControlPolicyRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ModifyVpcFirewallControlPolicyRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ModifyVpcFirewallControlPolicyRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // vpcFirewallId Field Functions 
    bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
    void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
    inline string getVpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
    inline ModifyVpcFirewallControlPolicyRequest& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


  protected:
    // The action that is performed on traffic that hits the access control policy.
    // 
    // Valid values:
    // 
    // - **accept**: allows the traffic.
    // 
    // - **drop**: denies the traffic.
    // 
    // - **log**: monitors the traffic.
    shared_ptr<string> aclAction_ {};
    // The unique ID of the access control policy.
    // 
    // To modify an access control policy, you must provide the unique ID of the policy. You can call the [DescribeVpcFirewallControlPolicy](https://help.aliyun.com/document_detail/159758.html) operation to query the ID.
    // 
    // This parameter is required.
    shared_ptr<string> aclUuid_ {};
    // The application type supported by the access control policy.
    // 
    // Valid values:
    // 
    // - ANY (all application types)
    // 
    // - FTP
    // 
    // - HTTP
    // 
    // - HTTPS
    // 
    // - MySQL
    // 
    // - SMTP
    // 
    // - SMTPS
    // 
    // - RDP
    // 
    // - VNC
    // 
    // - SSH
    // 
    // - Redis
    // 
    // - MQTT
    // 
    // - MongoDB
    // 
    // - Memcache
    // 
    // - SSL
    shared_ptr<string> applicationName_ {};
    // The list of application names.
    shared_ptr<vector<string>> applicationNameList_ {};
    // The description of the access control policy.
    shared_ptr<string> description_ {};
    // The destination port in the access control policy.
    shared_ptr<string> destPort_ {};
    // The name of the destination port address book for the traffic to which the access control policy applies.
    shared_ptr<string> destPortGroup_ {};
    // The type of the destination port for the traffic to which the access control policy applies.
    // 
    // - **port**: port
    // 
    // - **group**: port address book
    shared_ptr<string> destPortType_ {};
    // The destination address in the access control policy.
    // 
    // - If **DestinationType** is set to `net`, specify a destination CIDR block.
    // 
    //   Example: 10.2.3.0/24
    // 
    // - If **DestinationType** is set to `group`, specify the name of a destination address book.
    // 
    //   Example: db_group
    // 
    // - If **DestinationType** is set to `domain`, specify a destination domain name.
    // 
    //   Example: \\*.aliyuncs.com
    shared_ptr<string> destination_ {};
    // The type of the destination address in the access control policy.
    // 
    // Valid values:
    // 
    // - **net**: destination CIDR block
    // 
    // - **group**: destination address book
    // 
    // - **domain**: destination domain name
    shared_ptr<string> destinationType_ {};
    // The domain name resolution method for the access control policy. Valid values:
    // 
    // - **FQDN**: based on Fully Qualified Domain Name (FQDN)
    // 
    // - **DNS**: based on dynamic DNS resolution
    // 
    // - **FQDN_AND_DNS**: based on FQDN and dynamic DNS resolution
    shared_ptr<string> domainResolveType_ {};
    // The end time of the policy validity period. The value is a UNIX timestamp. The time is on the hour or on the half hour, and is at least 30 minutes later than the start time.
    // 
    // > If RepeatType is set to \\`Permanent\\`, this parameter is empty. If RepeatType is set to \\`None\\`, \\`Daily\\`, \\`Weekly\\`, or \\`Monthly\\`, you must specify this parameter.
    shared_ptr<int64_t> endTime_ {};
    // The language of the response message.
    // 
    // Valid values:
    // 
    // - **zh**: Chinese (default)
    // 
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The protocol type for the traffic to which the access control policy applies.
    // 
    // Valid values:
    // 
    // - ANY (all protocol types)
    // 
    // - TCP
    // 
    // - UDP
    // 
    // - ICMP
    shared_ptr<string> proto_ {};
    // The status of the access control policy. By default, an access control policy is enabled after it is created. Valid values:
    // 
    // - **true**: enables the access control policy.
    // 
    // - **false**: disables the access control policy.
    shared_ptr<string> release_ {};
    // The days of a week or month on which the policy takes effect.
    // 
    // - If RepeatType is set to \\`Permanent\\`, \\`None\\`, or \\`Daily\\`, this parameter is empty.
    //   Example: []
    // 
    // - If RepeatType is set to \\`Weekly\\`, this parameter cannot be empty.
    //   Example: [0, 6]
    // 
    // > If RepeatType is set to \\`Weekly\\`, the elements in the array cannot be repeated.
    // 
    // - If RepeatType is set to \\`Monthly\\`, this parameter cannot be empty.
    //   Example: [1, 31]
    // 
    // > If RepeatType is set to \\`Monthly\\`, the elements in the array cannot be repeated.
    shared_ptr<vector<int64_t>> repeatDays_ {};
    // The end time of the recurrence. The time is in the HH:mm format. The time is on the hour or on the half hour, and is at least 30 minutes later than the start time. Example: 23:30.
    // 
    // > If RepeatType is set to \\`Permanent\\` or \\`None\\`, this parameter is empty. If RepeatType is set to \\`Daily\\`, \\`Weekly\\`, or \\`Monthly\\`, you must specify this parameter.
    shared_ptr<string> repeatEndTime_ {};
    // The start time of the recurrence. The time is in the HH:mm format. The time is on the hour or on the half hour, and is at least 30 minutes earlier than the end time. Example: 08:00.
    // 
    // > If RepeatType is set to \\`Permanent\\` or \\`None\\`, this parameter is empty. If RepeatType is set to \\`Daily\\`, \\`Weekly\\`, or \\`Monthly\\`, you must specify this parameter.
    shared_ptr<string> repeatStartTime_ {};
    // The recurrence type for the policy to take effect. Valid values:
    // 
    // - **Permanent** (default): The policy is always in effect.
    // 
    // - **None**: The policy takes effect for a specific period of time.
    // 
    // - **Daily**: The policy takes effect daily.
    // 
    // - **Weekly**: The policy takes effect weekly.
    // 
    // - **Monthly**: The policy takes effect monthly.
    shared_ptr<string> repeatType_ {};
    // The source address in the access control policy.
    // 
    // Valid values:
    // 
    // - If **SourceType** is set to `net`, specify a source CIDR block.
    // 
    //   Example: 10.2.4.0/24
    // 
    // - If **SourceType** is set to `group`, specify the name of a source address book.
    // 
    //   Example: db_group
    shared_ptr<string> source_ {};
    // The type of the source address in the access control policy.
    // 
    // Valid values:
    // 
    // - **net**: source CIDR block
    // 
    // - **group**: source address book
    shared_ptr<string> sourceType_ {};
    // The start time of the policy validity period. The value is a UNIX timestamp. The time is on the hour or on the half hour, and is at least 30 minutes earlier than the end time.
    // 
    // > If RepeatType is set to \\`Permanent\\`, this parameter is empty. If RepeatType is set to \\`None\\`, \\`Daily\\`, \\`Weekly\\`, or \\`Monthly\\`, you must specify this parameter.
    shared_ptr<int64_t> startTime_ {};
    // The ID of the VPC firewall instance. You can call the [DescribeVpcFirewallAclGroupList](https://help.aliyun.com/document_detail/159760.html) operation to query the ID.
    // 
    // - If the VPC firewall protects a CEN instance, the value of this parameter is the ID of the CEN instance.
    // 
    //   Example: cen-ervw0g12b5jbw\\*\\*\\*\\*
    // 
    // - If the VPC firewall protects an Express Connect circuit, the value of this parameter is the ID of the VPC firewall instance.
    // 
    //   Example: vfw-a42bbb7b887148c9\\*\\*\\*\\*
    // 
    // This parameter is required.
    shared_ptr<string> vpcFirewallId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
