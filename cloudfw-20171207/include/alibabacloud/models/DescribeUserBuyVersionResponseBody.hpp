// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERBUYVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERBUYVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeUserBuyVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserBuyVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AckClusterConnectorQuota, ackClusterConnectorQuota_);
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(DefaultBandwidth, defaultBandwidth_);
      DARABONBA_PTR_TO_JSON(Expire, expire_);
      DARABONBA_PTR_TO_JSON(ExtensionBandwidth, extensionBandwidth_);
      DARABONBA_PTR_TO_JSON(GeneralInstance, generalInstance_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(InternetBandwidth, internetBandwidth_);
      DARABONBA_PTR_TO_JSON(IpNumber, ipNumber_);
      DARABONBA_PTR_TO_JSON(LogStatus, logStatus_);
      DARABONBA_PTR_TO_JSON(LogStorage, logStorage_);
      DARABONBA_PTR_TO_JSON(MajorVersion, majorVersion_);
      DARABONBA_PTR_TO_JSON(MaxOverflow, maxOverflow_);
      DARABONBA_PTR_TO_JSON(NatBandwidth, natBandwidth_);
      DARABONBA_PTR_TO_JSON(PrivateDnsConnectorQuota, privateDnsConnectorQuota_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Sdl, sdl_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TemporaryBandwidth, temporaryBandwidth_);
      DARABONBA_PTR_TO_JSON(ThreatIntelligence, threatIntelligence_);
      DARABONBA_PTR_TO_JSON(UserStatus, userStatus_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VpcBandwidth, vpcBandwidth_);
      DARABONBA_PTR_TO_JSON(VpcNumber, vpcNumber_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserBuyVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AckClusterConnectorQuota, ackClusterConnectorQuota_);
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(DefaultBandwidth, defaultBandwidth_);
      DARABONBA_PTR_FROM_JSON(Expire, expire_);
      DARABONBA_PTR_FROM_JSON(ExtensionBandwidth, extensionBandwidth_);
      DARABONBA_PTR_FROM_JSON(GeneralInstance, generalInstance_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(InternetBandwidth, internetBandwidth_);
      DARABONBA_PTR_FROM_JSON(IpNumber, ipNumber_);
      DARABONBA_PTR_FROM_JSON(LogStatus, logStatus_);
      DARABONBA_PTR_FROM_JSON(LogStorage, logStorage_);
      DARABONBA_PTR_FROM_JSON(MajorVersion, majorVersion_);
      DARABONBA_PTR_FROM_JSON(MaxOverflow, maxOverflow_);
      DARABONBA_PTR_FROM_JSON(NatBandwidth, natBandwidth_);
      DARABONBA_PTR_FROM_JSON(PrivateDnsConnectorQuota, privateDnsConnectorQuota_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Sdl, sdl_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TemporaryBandwidth, temporaryBandwidth_);
      DARABONBA_PTR_FROM_JSON(ThreatIntelligence, threatIntelligence_);
      DARABONBA_PTR_FROM_JSON(UserStatus, userStatus_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VpcBandwidth, vpcBandwidth_);
      DARABONBA_PTR_FROM_JSON(VpcNumber, vpcNumber_);
    };
    DescribeUserBuyVersionResponseBody() = default ;
    DescribeUserBuyVersionResponseBody(const DescribeUserBuyVersionResponseBody &) = default ;
    DescribeUserBuyVersionResponseBody(DescribeUserBuyVersionResponseBody &&) = default ;
    DescribeUserBuyVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserBuyVersionResponseBody() = default ;
    DescribeUserBuyVersionResponseBody& operator=(const DescribeUserBuyVersionResponseBody &) = default ;
    DescribeUserBuyVersionResponseBody& operator=(DescribeUserBuyVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ackClusterConnectorQuota_ == nullptr
        && this->aliUid_ == nullptr && this->defaultBandwidth_ == nullptr && this->expire_ == nullptr && this->extensionBandwidth_ == nullptr && this->generalInstance_ == nullptr
        && this->instanceId_ == nullptr && this->instanceStatus_ == nullptr && this->internetBandwidth_ == nullptr && this->ipNumber_ == nullptr && this->logStatus_ == nullptr
        && this->logStorage_ == nullptr && this->majorVersion_ == nullptr && this->maxOverflow_ == nullptr && this->natBandwidth_ == nullptr && this->privateDnsConnectorQuota_ == nullptr
        && this->requestId_ == nullptr && this->sdl_ == nullptr && this->startTime_ == nullptr && this->temporaryBandwidth_ == nullptr && this->threatIntelligence_ == nullptr
        && this->userStatus_ == nullptr && this->version_ == nullptr && this->vpcBandwidth_ == nullptr && this->vpcNumber_ == nullptr; };
    // ackClusterConnectorQuota Field Functions 
    bool hasAckClusterConnectorQuota() const { return this->ackClusterConnectorQuota_ != nullptr;};
    void deleteAckClusterConnectorQuota() { this->ackClusterConnectorQuota_ = nullptr;};
    inline int64_t getAckClusterConnectorQuota() const { DARABONBA_PTR_GET_DEFAULT(ackClusterConnectorQuota_, 0L) };
    inline DescribeUserBuyVersionResponseBody& setAckClusterConnectorQuota(int64_t ackClusterConnectorQuota) { DARABONBA_PTR_SET_VALUE(ackClusterConnectorQuota_, ackClusterConnectorQuota) };


    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline DescribeUserBuyVersionResponseBody& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // defaultBandwidth Field Functions 
    bool hasDefaultBandwidth() const { return this->defaultBandwidth_ != nullptr;};
    void deleteDefaultBandwidth() { this->defaultBandwidth_ = nullptr;};
    inline int64_t getDefaultBandwidth() const { DARABONBA_PTR_GET_DEFAULT(defaultBandwidth_, 0L) };
    inline DescribeUserBuyVersionResponseBody& setDefaultBandwidth(int64_t defaultBandwidth) { DARABONBA_PTR_SET_VALUE(defaultBandwidth_, defaultBandwidth) };


    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline int64_t getExpire() const { DARABONBA_PTR_GET_DEFAULT(expire_, 0L) };
    inline DescribeUserBuyVersionResponseBody& setExpire(int64_t expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // extensionBandwidth Field Functions 
    bool hasExtensionBandwidth() const { return this->extensionBandwidth_ != nullptr;};
    void deleteExtensionBandwidth() { this->extensionBandwidth_ = nullptr;};
    inline int64_t getExtensionBandwidth() const { DARABONBA_PTR_GET_DEFAULT(extensionBandwidth_, 0L) };
    inline DescribeUserBuyVersionResponseBody& setExtensionBandwidth(int64_t extensionBandwidth) { DARABONBA_PTR_SET_VALUE(extensionBandwidth_, extensionBandwidth) };


    // generalInstance Field Functions 
    bool hasGeneralInstance() const { return this->generalInstance_ != nullptr;};
    void deleteGeneralInstance() { this->generalInstance_ = nullptr;};
    inline int64_t getGeneralInstance() const { DARABONBA_PTR_GET_DEFAULT(generalInstance_, 0L) };
    inline DescribeUserBuyVersionResponseBody& setGeneralInstance(int64_t generalInstance) { DARABONBA_PTR_SET_VALUE(generalInstance_, generalInstance) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeUserBuyVersionResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline DescribeUserBuyVersionResponseBody& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // internetBandwidth Field Functions 
    bool hasInternetBandwidth() const { return this->internetBandwidth_ != nullptr;};
    void deleteInternetBandwidth() { this->internetBandwidth_ = nullptr;};
    inline int64_t getInternetBandwidth() const { DARABONBA_PTR_GET_DEFAULT(internetBandwidth_, 0L) };
    inline DescribeUserBuyVersionResponseBody& setInternetBandwidth(int64_t internetBandwidth) { DARABONBA_PTR_SET_VALUE(internetBandwidth_, internetBandwidth) };


    // ipNumber Field Functions 
    bool hasIpNumber() const { return this->ipNumber_ != nullptr;};
    void deleteIpNumber() { this->ipNumber_ = nullptr;};
    inline int64_t getIpNumber() const { DARABONBA_PTR_GET_DEFAULT(ipNumber_, 0L) };
    inline DescribeUserBuyVersionResponseBody& setIpNumber(int64_t ipNumber) { DARABONBA_PTR_SET_VALUE(ipNumber_, ipNumber) };


    // logStatus Field Functions 
    bool hasLogStatus() const { return this->logStatus_ != nullptr;};
    void deleteLogStatus() { this->logStatus_ = nullptr;};
    inline bool getLogStatus() const { DARABONBA_PTR_GET_DEFAULT(logStatus_, false) };
    inline DescribeUserBuyVersionResponseBody& setLogStatus(bool logStatus) { DARABONBA_PTR_SET_VALUE(logStatus_, logStatus) };


    // logStorage Field Functions 
    bool hasLogStorage() const { return this->logStorage_ != nullptr;};
    void deleteLogStorage() { this->logStorage_ = nullptr;};
    inline int64_t getLogStorage() const { DARABONBA_PTR_GET_DEFAULT(logStorage_, 0L) };
    inline DescribeUserBuyVersionResponseBody& setLogStorage(int64_t logStorage) { DARABONBA_PTR_SET_VALUE(logStorage_, logStorage) };


    // majorVersion Field Functions 
    bool hasMajorVersion() const { return this->majorVersion_ != nullptr;};
    void deleteMajorVersion() { this->majorVersion_ = nullptr;};
    inline int64_t getMajorVersion() const { DARABONBA_PTR_GET_DEFAULT(majorVersion_, 0L) };
    inline DescribeUserBuyVersionResponseBody& setMajorVersion(int64_t majorVersion) { DARABONBA_PTR_SET_VALUE(majorVersion_, majorVersion) };


    // maxOverflow Field Functions 
    bool hasMaxOverflow() const { return this->maxOverflow_ != nullptr;};
    void deleteMaxOverflow() { this->maxOverflow_ = nullptr;};
    inline int64_t getMaxOverflow() const { DARABONBA_PTR_GET_DEFAULT(maxOverflow_, 0L) };
    inline DescribeUserBuyVersionResponseBody& setMaxOverflow(int64_t maxOverflow) { DARABONBA_PTR_SET_VALUE(maxOverflow_, maxOverflow) };


    // natBandwidth Field Functions 
    bool hasNatBandwidth() const { return this->natBandwidth_ != nullptr;};
    void deleteNatBandwidth() { this->natBandwidth_ = nullptr;};
    inline int64_t getNatBandwidth() const { DARABONBA_PTR_GET_DEFAULT(natBandwidth_, 0L) };
    inline DescribeUserBuyVersionResponseBody& setNatBandwidth(int64_t natBandwidth) { DARABONBA_PTR_SET_VALUE(natBandwidth_, natBandwidth) };


    // privateDnsConnectorQuota Field Functions 
    bool hasPrivateDnsConnectorQuota() const { return this->privateDnsConnectorQuota_ != nullptr;};
    void deletePrivateDnsConnectorQuota() { this->privateDnsConnectorQuota_ = nullptr;};
    inline int64_t getPrivateDnsConnectorQuota() const { DARABONBA_PTR_GET_DEFAULT(privateDnsConnectorQuota_, 0L) };
    inline DescribeUserBuyVersionResponseBody& setPrivateDnsConnectorQuota(int64_t privateDnsConnectorQuota) { DARABONBA_PTR_SET_VALUE(privateDnsConnectorQuota_, privateDnsConnectorQuota) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserBuyVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sdl Field Functions 
    bool hasSdl() const { return this->sdl_ != nullptr;};
    void deleteSdl() { this->sdl_ = nullptr;};
    inline int64_t getSdl() const { DARABONBA_PTR_GET_DEFAULT(sdl_, 0L) };
    inline DescribeUserBuyVersionResponseBody& setSdl(int64_t sdl) { DARABONBA_PTR_SET_VALUE(sdl_, sdl) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeUserBuyVersionResponseBody& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // temporaryBandwidth Field Functions 
    bool hasTemporaryBandwidth() const { return this->temporaryBandwidth_ != nullptr;};
    void deleteTemporaryBandwidth() { this->temporaryBandwidth_ = nullptr;};
    inline int64_t getTemporaryBandwidth() const { DARABONBA_PTR_GET_DEFAULT(temporaryBandwidth_, 0L) };
    inline DescribeUserBuyVersionResponseBody& setTemporaryBandwidth(int64_t temporaryBandwidth) { DARABONBA_PTR_SET_VALUE(temporaryBandwidth_, temporaryBandwidth) };


    // threatIntelligence Field Functions 
    bool hasThreatIntelligence() const { return this->threatIntelligence_ != nullptr;};
    void deleteThreatIntelligence() { this->threatIntelligence_ = nullptr;};
    inline int64_t getThreatIntelligence() const { DARABONBA_PTR_GET_DEFAULT(threatIntelligence_, 0L) };
    inline DescribeUserBuyVersionResponseBody& setThreatIntelligence(int64_t threatIntelligence) { DARABONBA_PTR_SET_VALUE(threatIntelligence_, threatIntelligence) };


    // userStatus Field Functions 
    bool hasUserStatus() const { return this->userStatus_ != nullptr;};
    void deleteUserStatus() { this->userStatus_ = nullptr;};
    inline bool getUserStatus() const { DARABONBA_PTR_GET_DEFAULT(userStatus_, false) };
    inline DescribeUserBuyVersionResponseBody& setUserStatus(bool userStatus) { DARABONBA_PTR_SET_VALUE(userStatus_, userStatus) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline DescribeUserBuyVersionResponseBody& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // vpcBandwidth Field Functions 
    bool hasVpcBandwidth() const { return this->vpcBandwidth_ != nullptr;};
    void deleteVpcBandwidth() { this->vpcBandwidth_ = nullptr;};
    inline int64_t getVpcBandwidth() const { DARABONBA_PTR_GET_DEFAULT(vpcBandwidth_, 0L) };
    inline DescribeUserBuyVersionResponseBody& setVpcBandwidth(int64_t vpcBandwidth) { DARABONBA_PTR_SET_VALUE(vpcBandwidth_, vpcBandwidth) };


    // vpcNumber Field Functions 
    bool hasVpcNumber() const { return this->vpcNumber_ != nullptr;};
    void deleteVpcNumber() { this->vpcNumber_ = nullptr;};
    inline int64_t getVpcNumber() const { DARABONBA_PTR_GET_DEFAULT(vpcNumber_, 0L) };
    inline DescribeUserBuyVersionResponseBody& setVpcNumber(int64_t vpcNumber) { DARABONBA_PTR_SET_VALUE(vpcNumber_, vpcNumber) };


  protected:
    // The quota for ACK cluster connectors.
    shared_ptr<int64_t> ackClusterConnectorQuota_ {};
    // The ID of the Alibaba Cloud account.
    shared_ptr<int64_t> aliUid_ {};
    // The default bandwidth of the edition.
    shared_ptr<int64_t> defaultBandwidth_ {};
    // The expiration time of the Cloud Firewall instance.
    // 
    // > The value is a UNIX timestamp in milliseconds.
    // 
    // > This parameter does not apply to pay-as-you-go editions.
    shared_ptr<int64_t> expire_ {};
    // The extended bandwidth.
    shared_ptr<int64_t> extensionBandwidth_ {};
    // The number of general-purpose instances.
    shared_ptr<int64_t> generalInstance_ {};
    // The ID of the Cloud Firewall instance.
    // 
    // > This parameter does not apply to trial editions.
    shared_ptr<string> instanceId_ {};
    // The operational status of the Cloud Firewall instance. Valid values:
    // 
    // - **normal**: The instance is running as expected.
    // 
    // - **init**: The instance is being initialized.
    // 
    // - **deleting**: The instance is being deleted.
    // 
    // - **abnormal**: The instance is in an abnormal state.
    // 
    // - **free**: No valid instance is available.
    shared_ptr<string> instanceStatus_ {};
    // The purchased traffic processing capability for the Internet firewall.
    shared_ptr<int64_t> internetBandwidth_ {};
    // The number of public IP addresses that can be protected.
    // 
    // > This parameter applies only to subscription instances.
    shared_ptr<int64_t> ipNumber_ {};
    // Indicates whether log delivery is enabled. Valid values:
    // 
    // - **true**: Enabled
    // 
    // - **false**: Disabled
    shared_ptr<bool> logStatus_ {};
    // The purchased log storage capacity.
    // 
    // > This parameter applies only to subscription instances.
    shared_ptr<int64_t> logStorage_ {};
    // The major version.
    shared_ptr<int64_t> majorVersion_ {};
    // Indicates whether elastic billing for excess traffic is enabled. Valid values:
    // 
    // - **1000000**: Enabled
    // 
    // - **0**: Disabled
    // 
    // > This parameter applies only to subscription instances.
    shared_ptr<int64_t> maxOverflow_ {};
    // The purchased traffic processing capability for the NAT firewall.
    shared_ptr<int64_t> natBandwidth_ {};
    // The quota for private DNS connectors.
    shared_ptr<int64_t> privateDnsConnectorQuota_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether data leakage prevention is enabled.
    shared_ptr<int64_t> sdl_ {};
    // The time when the Cloud Firewall instance was enabled.
    // 
    // > The value is a UNIX timestamp in milliseconds.
    shared_ptr<int64_t> startTime_ {};
    // The temporary bandwidth.
    shared_ptr<int64_t> temporaryBandwidth_ {};
    // Indicates whether threat intelligence is enabled.
    shared_ptr<int64_t> threatIntelligence_ {};
    // The status of the Cloud Firewall instance. Valid values:
    // 
    // - **true**: The instance is valid.
    // 
    // - **false**: The instance is invalid.
    shared_ptr<bool> userStatus_ {};
    // The edition of the Cloud Firewall instance. Valid values:
    // 
    // - **2**: Premium Edition
    // 
    // - **3**: Enterprise Edition
    // 
    // - **4**: Ultimate Edition
    // 
    // - **10**: Pay-as-you-go
    shared_ptr<int32_t> version_ {};
    // The purchased traffic processing capability for the VPC firewall.
    shared_ptr<int64_t> vpcBandwidth_ {};
    // The number of purchased VPC firewalls.
    // 
    // > This parameter applies only to subscription instances.
    shared_ptr<int64_t> vpcNumber_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
