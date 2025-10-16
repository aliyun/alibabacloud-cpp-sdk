// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVADEEVENTLISTRESPONSEBODYEVENTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVADEEVENTLISTRESPONSEBODYEVENTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInvadeEventListResponseBodyEventList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvadeEventListResponseBodyEventList& obj) { 
      DARABONBA_PTR_TO_JSON(AssetsInstanceId, assetsInstanceId_);
      DARABONBA_PTR_TO_JSON(AssetsInstanceName, assetsInstanceName_);
      DARABONBA_PTR_TO_JSON(AssetsType, assetsType_);
      DARABONBA_PTR_TO_JSON(EventKey, eventKey_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(EventSrc, eventSrc_);
      DARABONBA_PTR_TO_JSON(EventUuid, eventUuid_);
      DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
      DARABONBA_PTR_TO_JSON(IsIgnore, isIgnore_);
      DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(PrivateIP, privateIP_);
      DARABONBA_PTR_TO_JSON(ProcessStatus, processStatus_);
      DARABONBA_PTR_TO_JSON(PublicIP, publicIP_);
      DARABONBA_PTR_TO_JSON(PublicIpType, publicIpType_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvadeEventListResponseBodyEventList& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetsInstanceId, assetsInstanceId_);
      DARABONBA_PTR_FROM_JSON(AssetsInstanceName, assetsInstanceName_);
      DARABONBA_PTR_FROM_JSON(AssetsType, assetsType_);
      DARABONBA_PTR_FROM_JSON(EventKey, eventKey_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(EventSrc, eventSrc_);
      DARABONBA_PTR_FROM_JSON(EventUuid, eventUuid_);
      DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
      DARABONBA_PTR_FROM_JSON(IsIgnore, isIgnore_);
      DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(PrivateIP, privateIP_);
      DARABONBA_PTR_FROM_JSON(ProcessStatus, processStatus_);
      DARABONBA_PTR_FROM_JSON(PublicIP, publicIP_);
      DARABONBA_PTR_FROM_JSON(PublicIpType, publicIpType_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    DescribeInvadeEventListResponseBodyEventList() = default ;
    DescribeInvadeEventListResponseBodyEventList(const DescribeInvadeEventListResponseBodyEventList &) = default ;
    DescribeInvadeEventListResponseBodyEventList(DescribeInvadeEventListResponseBodyEventList &&) = default ;
    DescribeInvadeEventListResponseBodyEventList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvadeEventListResponseBodyEventList() = default ;
    DescribeInvadeEventListResponseBodyEventList& operator=(const DescribeInvadeEventListResponseBodyEventList &) = default ;
    DescribeInvadeEventListResponseBodyEventList& operator=(DescribeInvadeEventListResponseBodyEventList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetsInstanceId_ == nullptr
        && return this->assetsInstanceName_ == nullptr && return this->assetsType_ == nullptr && return this->eventKey_ == nullptr && return this->eventName_ == nullptr && return this->eventSrc_ == nullptr
        && return this->eventUuid_ == nullptr && return this->firstTime_ == nullptr && return this->isIgnore_ == nullptr && return this->lastTime_ == nullptr && return this->memberUid_ == nullptr
        && return this->privateIP_ == nullptr && return this->processStatus_ == nullptr && return this->publicIP_ == nullptr && return this->publicIpType_ == nullptr && return this->riskLevel_ == nullptr; };
    // assetsInstanceId Field Functions 
    bool hasAssetsInstanceId() const { return this->assetsInstanceId_ != nullptr;};
    void deleteAssetsInstanceId() { this->assetsInstanceId_ = nullptr;};
    inline string assetsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(assetsInstanceId_, "") };
    inline DescribeInvadeEventListResponseBodyEventList& setAssetsInstanceId(string assetsInstanceId) { DARABONBA_PTR_SET_VALUE(assetsInstanceId_, assetsInstanceId) };


    // assetsInstanceName Field Functions 
    bool hasAssetsInstanceName() const { return this->assetsInstanceName_ != nullptr;};
    void deleteAssetsInstanceName() { this->assetsInstanceName_ = nullptr;};
    inline string assetsInstanceName() const { DARABONBA_PTR_GET_DEFAULT(assetsInstanceName_, "") };
    inline DescribeInvadeEventListResponseBodyEventList& setAssetsInstanceName(string assetsInstanceName) { DARABONBA_PTR_SET_VALUE(assetsInstanceName_, assetsInstanceName) };


    // assetsType Field Functions 
    bool hasAssetsType() const { return this->assetsType_ != nullptr;};
    void deleteAssetsType() { this->assetsType_ = nullptr;};
    inline string assetsType() const { DARABONBA_PTR_GET_DEFAULT(assetsType_, "") };
    inline DescribeInvadeEventListResponseBodyEventList& setAssetsType(string assetsType) { DARABONBA_PTR_SET_VALUE(assetsType_, assetsType) };


    // eventKey Field Functions 
    bool hasEventKey() const { return this->eventKey_ != nullptr;};
    void deleteEventKey() { this->eventKey_ = nullptr;};
    inline string eventKey() const { DARABONBA_PTR_GET_DEFAULT(eventKey_, "") };
    inline DescribeInvadeEventListResponseBodyEventList& setEventKey(string eventKey) { DARABONBA_PTR_SET_VALUE(eventKey_, eventKey) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeInvadeEventListResponseBodyEventList& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventSrc Field Functions 
    bool hasEventSrc() const { return this->eventSrc_ != nullptr;};
    void deleteEventSrc() { this->eventSrc_ = nullptr;};
    inline string eventSrc() const { DARABONBA_PTR_GET_DEFAULT(eventSrc_, "") };
    inline DescribeInvadeEventListResponseBodyEventList& setEventSrc(string eventSrc) { DARABONBA_PTR_SET_VALUE(eventSrc_, eventSrc) };


    // eventUuid Field Functions 
    bool hasEventUuid() const { return this->eventUuid_ != nullptr;};
    void deleteEventUuid() { this->eventUuid_ = nullptr;};
    inline string eventUuid() const { DARABONBA_PTR_GET_DEFAULT(eventUuid_, "") };
    inline DescribeInvadeEventListResponseBodyEventList& setEventUuid(string eventUuid) { DARABONBA_PTR_SET_VALUE(eventUuid_, eventUuid) };


    // firstTime Field Functions 
    bool hasFirstTime() const { return this->firstTime_ != nullptr;};
    void deleteFirstTime() { this->firstTime_ = nullptr;};
    inline int32_t firstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0) };
    inline DescribeInvadeEventListResponseBodyEventList& setFirstTime(int32_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


    // isIgnore Field Functions 
    bool hasIsIgnore() const { return this->isIgnore_ != nullptr;};
    void deleteIsIgnore() { this->isIgnore_ = nullptr;};
    inline bool isIgnore() const { DARABONBA_PTR_GET_DEFAULT(isIgnore_, false) };
    inline DescribeInvadeEventListResponseBodyEventList& setIsIgnore(bool isIgnore) { DARABONBA_PTR_SET_VALUE(isIgnore_, isIgnore) };


    // lastTime Field Functions 
    bool hasLastTime() const { return this->lastTime_ != nullptr;};
    void deleteLastTime() { this->lastTime_ = nullptr;};
    inline int32_t lastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0) };
    inline DescribeInvadeEventListResponseBodyEventList& setLastTime(int32_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string memberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline DescribeInvadeEventListResponseBodyEventList& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // privateIP Field Functions 
    bool hasPrivateIP() const { return this->privateIP_ != nullptr;};
    void deletePrivateIP() { this->privateIP_ = nullptr;};
    inline string privateIP() const { DARABONBA_PTR_GET_DEFAULT(privateIP_, "") };
    inline DescribeInvadeEventListResponseBodyEventList& setPrivateIP(string privateIP) { DARABONBA_PTR_SET_VALUE(privateIP_, privateIP) };


    // processStatus Field Functions 
    bool hasProcessStatus() const { return this->processStatus_ != nullptr;};
    void deleteProcessStatus() { this->processStatus_ = nullptr;};
    inline int32_t processStatus() const { DARABONBA_PTR_GET_DEFAULT(processStatus_, 0) };
    inline DescribeInvadeEventListResponseBodyEventList& setProcessStatus(int32_t processStatus) { DARABONBA_PTR_SET_VALUE(processStatus_, processStatus) };


    // publicIP Field Functions 
    bool hasPublicIP() const { return this->publicIP_ != nullptr;};
    void deletePublicIP() { this->publicIP_ = nullptr;};
    inline string publicIP() const { DARABONBA_PTR_GET_DEFAULT(publicIP_, "") };
    inline DescribeInvadeEventListResponseBodyEventList& setPublicIP(string publicIP) { DARABONBA_PTR_SET_VALUE(publicIP_, publicIP) };


    // publicIpType Field Functions 
    bool hasPublicIpType() const { return this->publicIpType_ != nullptr;};
    void deletePublicIpType() { this->publicIpType_ = nullptr;};
    inline string publicIpType() const { DARABONBA_PTR_GET_DEFAULT(publicIpType_, "") };
    inline DescribeInvadeEventListResponseBodyEventList& setPublicIpType(string publicIpType) { DARABONBA_PTR_SET_VALUE(publicIpType_, publicIpType) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline DescribeInvadeEventListResponseBodyEventList& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


  protected:
    // The ID of the affected asset.
    std::shared_ptr<string> assetsInstanceId_ = nullptr;
    // The name of the affected asset.
    std::shared_ptr<string> assetsInstanceName_ = nullptr;
    // The type of the affected asset. Valid values:
    // 
    // *   **BastionHostIP**: the egress IP address of a bastion host
    // *   **BastionHostIngressIP**: the ingress IP address of a bastion host
    // *   **EcsEIP**: the elastic IP address (EIP) of an Elastic Compute Service (ECS) instance
    // *   **EcsPublicIP**: the public IP address of an ECS instance
    // *   **EIP**: the EIP
    // *   **EniEIP**: the EIP of an elastic network interface (ENI)
    // *   **NatEIP**: the EIP of a NAT gateway
    // *   **SlbEIP**: the EIP of a Server Load Balancer (SLB) instance
    // *   **SlbPublicIP**: the public IP address of an SLB instance
    // *   **NatPublicIP**: the public IP address of a NAT gateway
    // *   **HAVIP**: the high-availability virtual IP address (HAVIP)
    std::shared_ptr<string> assetsType_ = nullptr;
    // The ID of the breach awareness event.
    std::shared_ptr<string> eventKey_ = nullptr;
    // The name of the breach awareness event.
    std::shared_ptr<string> eventName_ = nullptr;
    // The type of the breach awareness event. Valid values:
    // 
    // *   **IPS**: intrusion prevention event
    // *   **offline**: disconnection event
    std::shared_ptr<string> eventSrc_ = nullptr;
    // The UUID of the breach awareness event.
    std::shared_ptr<string> eventUuid_ = nullptr;
    // The time when the breach awareness event first occurred. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int32_t> firstTime_ = nullptr;
    // Indicates whether the breach awareness event is ignored. Valid values:
    // 
    // *   **true**: The breach awareness event is ignored.
    // *   **false**: The breach awareness event is not ignored.
    std::shared_ptr<bool> isIgnore_ = nullptr;
    // The time when the breach awareness event last occurred. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int32_t> lastTime_ = nullptr;
    // The ID of the member.
    std::shared_ptr<string> memberUid_ = nullptr;
    // The private IP address of the affected asset.
    std::shared_ptr<string> privateIP_ = nullptr;
    // The handling status of the breach awareness event. Valid values:
    // 
    // *   **0**: unhandled
    // *   **20**: handled
    std::shared_ptr<int32_t> processStatus_ = nullptr;
    // The public IP address of the affected asset.
    std::shared_ptr<string> publicIP_ = nullptr;
    // The type of the affected asset. Valid values:
    // 
    // *   **BastionHostIP**: the egress IP address of a bastion host
    // *   **BastionHostIngressIP**: the ingress IP address of a bastion host
    // *   **EcsEIP**: the EIP of an ECS instance
    // *   **EcsPublicIP**: the public IP address of an ECS instance
    // *   **EIP**: the EIP
    // *   **EniEIP**: the EIP of an ENI
    // *   **NatEIP**: the EIP of a NAT gateway
    // *   **SlbEIP**: the EIP of an SLB instance
    // *   **SlbPublicIP**: the public IP address of an SLB instance
    // *   **NatPublicIP**: the public IP address of a NAT gateway
    // *   **HAVIP**: the HAVIP
    std::shared_ptr<string> publicIpType_ = nullptr;
    // The risk level. Valid values:
    // 
    // *   **1**: low
    // *   **2**: medium
    // *   **3**: high
    std::shared_ptr<int32_t> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
