// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVADEEVENTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVADEEVENTLISTRESPONSEBODY_HPP_
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
  class DescribeInvadeEventListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvadeEventListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EventList, eventList_);
      DARABONBA_PTR_TO_JSON(HighLevelPercent, highLevelPercent_);
      DARABONBA_PTR_TO_JSON(LowLevelPercent, lowLevelPercent_);
      DARABONBA_PTR_TO_JSON(MiddleLevelPercent, middleLevelPercent_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvadeEventListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EventList, eventList_);
      DARABONBA_PTR_FROM_JSON(HighLevelPercent, highLevelPercent_);
      DARABONBA_PTR_FROM_JSON(LowLevelPercent, lowLevelPercent_);
      DARABONBA_PTR_FROM_JSON(MiddleLevelPercent, middleLevelPercent_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInvadeEventListResponseBody() = default ;
    DescribeInvadeEventListResponseBody(const DescribeInvadeEventListResponseBody &) = default ;
    DescribeInvadeEventListResponseBody(DescribeInvadeEventListResponseBody &&) = default ;
    DescribeInvadeEventListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvadeEventListResponseBody() = default ;
    DescribeInvadeEventListResponseBody& operator=(const DescribeInvadeEventListResponseBody &) = default ;
    DescribeInvadeEventListResponseBody& operator=(DescribeInvadeEventListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of breach awareness events.
      shared_ptr<int32_t> totalCount_ {};
    };

    class EventList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EventList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, EventList& obj) { 
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
      EventList() = default ;
      EventList(const EventList &) = default ;
      EventList(EventList &&) = default ;
      EventList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EventList() = default ;
      EventList& operator=(const EventList &) = default ;
      EventList& operator=(EventList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assetsInstanceId_ == nullptr
        && this->assetsInstanceName_ == nullptr && this->assetsType_ == nullptr && this->eventKey_ == nullptr && this->eventName_ == nullptr && this->eventSrc_ == nullptr
        && this->eventUuid_ == nullptr && this->firstTime_ == nullptr && this->isIgnore_ == nullptr && this->lastTime_ == nullptr && this->memberUid_ == nullptr
        && this->privateIP_ == nullptr && this->processStatus_ == nullptr && this->publicIP_ == nullptr && this->publicIpType_ == nullptr && this->riskLevel_ == nullptr; };
      // assetsInstanceId Field Functions 
      bool hasAssetsInstanceId() const { return this->assetsInstanceId_ != nullptr;};
      void deleteAssetsInstanceId() { this->assetsInstanceId_ = nullptr;};
      inline string getAssetsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(assetsInstanceId_, "") };
      inline EventList& setAssetsInstanceId(string assetsInstanceId) { DARABONBA_PTR_SET_VALUE(assetsInstanceId_, assetsInstanceId) };


      // assetsInstanceName Field Functions 
      bool hasAssetsInstanceName() const { return this->assetsInstanceName_ != nullptr;};
      void deleteAssetsInstanceName() { this->assetsInstanceName_ = nullptr;};
      inline string getAssetsInstanceName() const { DARABONBA_PTR_GET_DEFAULT(assetsInstanceName_, "") };
      inline EventList& setAssetsInstanceName(string assetsInstanceName) { DARABONBA_PTR_SET_VALUE(assetsInstanceName_, assetsInstanceName) };


      // assetsType Field Functions 
      bool hasAssetsType() const { return this->assetsType_ != nullptr;};
      void deleteAssetsType() { this->assetsType_ = nullptr;};
      inline string getAssetsType() const { DARABONBA_PTR_GET_DEFAULT(assetsType_, "") };
      inline EventList& setAssetsType(string assetsType) { DARABONBA_PTR_SET_VALUE(assetsType_, assetsType) };


      // eventKey Field Functions 
      bool hasEventKey() const { return this->eventKey_ != nullptr;};
      void deleteEventKey() { this->eventKey_ = nullptr;};
      inline string getEventKey() const { DARABONBA_PTR_GET_DEFAULT(eventKey_, "") };
      inline EventList& setEventKey(string eventKey) { DARABONBA_PTR_SET_VALUE(eventKey_, eventKey) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline EventList& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // eventSrc Field Functions 
      bool hasEventSrc() const { return this->eventSrc_ != nullptr;};
      void deleteEventSrc() { this->eventSrc_ = nullptr;};
      inline string getEventSrc() const { DARABONBA_PTR_GET_DEFAULT(eventSrc_, "") };
      inline EventList& setEventSrc(string eventSrc) { DARABONBA_PTR_SET_VALUE(eventSrc_, eventSrc) };


      // eventUuid Field Functions 
      bool hasEventUuid() const { return this->eventUuid_ != nullptr;};
      void deleteEventUuid() { this->eventUuid_ = nullptr;};
      inline string getEventUuid() const { DARABONBA_PTR_GET_DEFAULT(eventUuid_, "") };
      inline EventList& setEventUuid(string eventUuid) { DARABONBA_PTR_SET_VALUE(eventUuid_, eventUuid) };


      // firstTime Field Functions 
      bool hasFirstTime() const { return this->firstTime_ != nullptr;};
      void deleteFirstTime() { this->firstTime_ = nullptr;};
      inline int32_t getFirstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0) };
      inline EventList& setFirstTime(int32_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


      // isIgnore Field Functions 
      bool hasIsIgnore() const { return this->isIgnore_ != nullptr;};
      void deleteIsIgnore() { this->isIgnore_ = nullptr;};
      inline bool getIsIgnore() const { DARABONBA_PTR_GET_DEFAULT(isIgnore_, false) };
      inline EventList& setIsIgnore(bool isIgnore) { DARABONBA_PTR_SET_VALUE(isIgnore_, isIgnore) };


      // lastTime Field Functions 
      bool hasLastTime() const { return this->lastTime_ != nullptr;};
      void deleteLastTime() { this->lastTime_ = nullptr;};
      inline int32_t getLastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0) };
      inline EventList& setLastTime(int32_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


      // memberUid Field Functions 
      bool hasMemberUid() const { return this->memberUid_ != nullptr;};
      void deleteMemberUid() { this->memberUid_ = nullptr;};
      inline string getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
      inline EventList& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


      // privateIP Field Functions 
      bool hasPrivateIP() const { return this->privateIP_ != nullptr;};
      void deletePrivateIP() { this->privateIP_ = nullptr;};
      inline string getPrivateIP() const { DARABONBA_PTR_GET_DEFAULT(privateIP_, "") };
      inline EventList& setPrivateIP(string privateIP) { DARABONBA_PTR_SET_VALUE(privateIP_, privateIP) };


      // processStatus Field Functions 
      bool hasProcessStatus() const { return this->processStatus_ != nullptr;};
      void deleteProcessStatus() { this->processStatus_ = nullptr;};
      inline int32_t getProcessStatus() const { DARABONBA_PTR_GET_DEFAULT(processStatus_, 0) };
      inline EventList& setProcessStatus(int32_t processStatus) { DARABONBA_PTR_SET_VALUE(processStatus_, processStatus) };


      // publicIP Field Functions 
      bool hasPublicIP() const { return this->publicIP_ != nullptr;};
      void deletePublicIP() { this->publicIP_ = nullptr;};
      inline string getPublicIP() const { DARABONBA_PTR_GET_DEFAULT(publicIP_, "") };
      inline EventList& setPublicIP(string publicIP) { DARABONBA_PTR_SET_VALUE(publicIP_, publicIP) };


      // publicIpType Field Functions 
      bool hasPublicIpType() const { return this->publicIpType_ != nullptr;};
      void deletePublicIpType() { this->publicIpType_ = nullptr;};
      inline string getPublicIpType() const { DARABONBA_PTR_GET_DEFAULT(publicIpType_, "") };
      inline EventList& setPublicIpType(string publicIpType) { DARABONBA_PTR_SET_VALUE(publicIpType_, publicIpType) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
      inline EventList& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    protected:
      // The ID of the affected asset.
      shared_ptr<string> assetsInstanceId_ {};
      // The name of the affected asset.
      shared_ptr<string> assetsInstanceName_ {};
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
      shared_ptr<string> assetsType_ {};
      // The ID of the breach awareness event.
      shared_ptr<string> eventKey_ {};
      // The name of the breach awareness event.
      shared_ptr<string> eventName_ {};
      // The type of the breach awareness event. Valid values:
      // 
      // *   **IPS**: intrusion prevention event
      // *   **offline**: disconnection event
      shared_ptr<string> eventSrc_ {};
      // The UUID of the breach awareness event.
      shared_ptr<string> eventUuid_ {};
      // The time when the breach awareness event first occurred. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int32_t> firstTime_ {};
      // Indicates whether the breach awareness event is ignored. Valid values:
      // 
      // *   **true**: The breach awareness event is ignored.
      // *   **false**: The breach awareness event is not ignored.
      shared_ptr<bool> isIgnore_ {};
      // The time when the breach awareness event last occurred. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int32_t> lastTime_ {};
      // The ID of the member.
      shared_ptr<string> memberUid_ {};
      // The private IP address of the affected asset.
      shared_ptr<string> privateIP_ {};
      // The handling status of the breach awareness event. Valid values:
      // 
      // *   **0**: unhandled
      // *   **20**: handled
      shared_ptr<int32_t> processStatus_ {};
      // The public IP address of the affected asset.
      shared_ptr<string> publicIP_ {};
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
      shared_ptr<string> publicIpType_ {};
      // The risk level. Valid values:
      // 
      // *   **1**: low
      // *   **2**: medium
      // *   **3**: high
      shared_ptr<int32_t> riskLevel_ {};
    };

    virtual bool empty() const override { return this->eventList_ == nullptr
        && this->highLevelPercent_ == nullptr && this->lowLevelPercent_ == nullptr && this->middleLevelPercent_ == nullptr && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // eventList Field Functions 
    bool hasEventList() const { return this->eventList_ != nullptr;};
    void deleteEventList() { this->eventList_ = nullptr;};
    inline const vector<DescribeInvadeEventListResponseBody::EventList> & getEventList() const { DARABONBA_PTR_GET_CONST(eventList_, vector<DescribeInvadeEventListResponseBody::EventList>) };
    inline vector<DescribeInvadeEventListResponseBody::EventList> getEventList() { DARABONBA_PTR_GET(eventList_, vector<DescribeInvadeEventListResponseBody::EventList>) };
    inline DescribeInvadeEventListResponseBody& setEventList(const vector<DescribeInvadeEventListResponseBody::EventList> & eventList) { DARABONBA_PTR_SET_VALUE(eventList_, eventList) };
    inline DescribeInvadeEventListResponseBody& setEventList(vector<DescribeInvadeEventListResponseBody::EventList> && eventList) { DARABONBA_PTR_SET_RVALUE(eventList_, eventList) };


    // highLevelPercent Field Functions 
    bool hasHighLevelPercent() const { return this->highLevelPercent_ != nullptr;};
    void deleteHighLevelPercent() { this->highLevelPercent_ = nullptr;};
    inline int32_t getHighLevelPercent() const { DARABONBA_PTR_GET_DEFAULT(highLevelPercent_, 0) };
    inline DescribeInvadeEventListResponseBody& setHighLevelPercent(int32_t highLevelPercent) { DARABONBA_PTR_SET_VALUE(highLevelPercent_, highLevelPercent) };


    // lowLevelPercent Field Functions 
    bool hasLowLevelPercent() const { return this->lowLevelPercent_ != nullptr;};
    void deleteLowLevelPercent() { this->lowLevelPercent_ = nullptr;};
    inline int32_t getLowLevelPercent() const { DARABONBA_PTR_GET_DEFAULT(lowLevelPercent_, 0) };
    inline DescribeInvadeEventListResponseBody& setLowLevelPercent(int32_t lowLevelPercent) { DARABONBA_PTR_SET_VALUE(lowLevelPercent_, lowLevelPercent) };


    // middleLevelPercent Field Functions 
    bool hasMiddleLevelPercent() const { return this->middleLevelPercent_ != nullptr;};
    void deleteMiddleLevelPercent() { this->middleLevelPercent_ = nullptr;};
    inline int32_t getMiddleLevelPercent() const { DARABONBA_PTR_GET_DEFAULT(middleLevelPercent_, 0) };
    inline DescribeInvadeEventListResponseBody& setMiddleLevelPercent(int32_t middleLevelPercent) { DARABONBA_PTR_SET_VALUE(middleLevelPercent_, middleLevelPercent) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeInvadeEventListResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeInvadeEventListResponseBody::PageInfo) };
    inline DescribeInvadeEventListResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeInvadeEventListResponseBody::PageInfo) };
    inline DescribeInvadeEventListResponseBody& setPageInfo(const DescribeInvadeEventListResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeInvadeEventListResponseBody& setPageInfo(DescribeInvadeEventListResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInvadeEventListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of breach awareness events.
    shared_ptr<vector<DescribeInvadeEventListResponseBody::EventList>> eventList_ {};
    // The percentage of high-risk events.
    shared_ptr<int32_t> highLevelPercent_ {};
    // The percentage of low-risk events.
    shared_ptr<int32_t> lowLevelPercent_ {};
    // The percentage of medium-risk events.
    shared_ptr<int32_t> middleLevelPercent_ {};
    // The pagination information.
    shared_ptr<DescribeInvadeEventListResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
