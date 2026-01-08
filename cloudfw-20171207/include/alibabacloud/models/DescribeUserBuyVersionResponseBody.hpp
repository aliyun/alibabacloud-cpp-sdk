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
    shared_ptr<int64_t> ackClusterConnectorQuota_ {};
    // The ID of the Alibaba Cloud account that is used to purchase Cloud Firewall.
    shared_ptr<int64_t> aliUid_ {};
    shared_ptr<int64_t> defaultBandwidth_ {};
    // The time when Cloud Firewall expires.
    // 
    // >  The value is a timestamp in milliseconds.
    // 
    // >  If you use Cloud Firewall that uses the pay-as-you-go billing method, ignore this parameter.
    shared_ptr<int64_t> expire_ {};
    shared_ptr<int64_t> extensionBandwidth_ {};
    shared_ptr<int64_t> generalInstance_ {};
    // The instance ID of Cloud Firewall.
    // 
    // >  If you use a trial of Cloud Firewall, ignore this parameter.
    shared_ptr<string> instanceId_ {};
    // The status of Cloud Firewall. Valid values:
    // 
    // *   **normal**: Cloud Firewall is running as expected.
    // *   **init**: Cloud Firewall is being initialized.
    // *   **deleting**: Cloud Firewall is being deleted.
    // *   **abnormal**: An exception occurs in Cloud Firewall.
    // *   **free**: Cloud Firewall is invalid.
    shared_ptr<string> instanceStatus_ {};
    // The peak Internet traffic that can be protected.
    shared_ptr<int64_t> internetBandwidth_ {};
    // The number of public IP addresses that can be protected.
    // 
    // >  This parameter takes effect only for Cloud Firewall that uses the subscription billing method.
    shared_ptr<int64_t> ipNumber_ {};
    // Indicates whether log delivery is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> logStatus_ {};
    // The log storage capacity.
    // 
    // >  This parameter takes effect only for Cloud Firewall that uses the subscription billing method.
    shared_ptr<int64_t> logStorage_ {};
    shared_ptr<int64_t> majorVersion_ {};
    // The status of the burstable protected traffic feature. Valid values:
    // 
    // *   **1000000**: enabled.
    // *   **0**: disabled.
    // 
    // >  This parameter takes effect only for Cloud Firewall that uses the subscription billing method.
    shared_ptr<int64_t> maxOverflow_ {};
    // The peak traffic of NAT private network that can be protected.
    shared_ptr<int64_t> natBandwidth_ {};
    shared_ptr<int64_t> privateDnsConnectorQuota_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> sdl_ {};
    // The time when Cloud Firewall was activated.
    // 
    // >  The value is a timestamp in milliseconds.
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<int64_t> temporaryBandwidth_ {};
    shared_ptr<int64_t> threatIntelligence_ {};
    // Indicates whether Cloud Firewall is valid. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> userStatus_ {};
    // The edition of Cloud Firewall. Valid values:
    // 
    // *   **2**: Premium Edition.
    // *   **3**: Enterprise Edition.
    // *   **4**: Ultimate Edition.
    // *   **10**: Cloud Firewall that uses the pay-as-you-go billing method.
    shared_ptr<int32_t> version_ {};
    // The peak cross-VPC traffic that can be protected.
    shared_ptr<int64_t> vpcBandwidth_ {};
    // The number of virtual private clouds (VPCs) that can be protected.
    // 
    // >  This parameter takes effect only for Cloud Firewall that uses the subscription billing method.
    shared_ptr<int64_t> vpcNumber_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
