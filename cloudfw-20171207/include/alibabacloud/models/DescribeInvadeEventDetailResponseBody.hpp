// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVADEEVENTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVADEEVENTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInvadeEventDetailResponseBodyOperationList.hpp>
#include <alibabacloud/models/DescribeInvadeEventDetailResponseBodyUnhandleOperationList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInvadeEventDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvadeEventDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssetsInstanceId, assetsInstanceId_);
      DARABONBA_PTR_TO_JSON(AssetsInstanceName, assetsInstanceName_);
      DARABONBA_PTR_TO_JSON(EventDesc, eventDesc_);
      DARABONBA_PTR_TO_JSON(EventDetail, eventDetail_);
      DARABONBA_PTR_TO_JSON(EventKey, eventKey_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(EventUuid, eventUuid_);
      DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
      DARABONBA_PTR_TO_JSON(IsIgnore, isIgnore_);
      DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
      DARABONBA_PTR_TO_JSON(OperationList, operationList_);
      DARABONBA_PTR_TO_JSON(PrivateIP, privateIP_);
      DARABONBA_PTR_TO_JSON(ProcessStatus, processStatus_);
      DARABONBA_PTR_TO_JSON(PublicIP, publicIP_);
      DARABONBA_PTR_TO_JSON(Reference, reference_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(UnhandleOperationList, unhandleOperationList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvadeEventDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetsInstanceId, assetsInstanceId_);
      DARABONBA_PTR_FROM_JSON(AssetsInstanceName, assetsInstanceName_);
      DARABONBA_PTR_FROM_JSON(EventDesc, eventDesc_);
      DARABONBA_PTR_FROM_JSON(EventDetail, eventDetail_);
      DARABONBA_PTR_FROM_JSON(EventKey, eventKey_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(EventUuid, eventUuid_);
      DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
      DARABONBA_PTR_FROM_JSON(IsIgnore, isIgnore_);
      DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
      DARABONBA_PTR_FROM_JSON(OperationList, operationList_);
      DARABONBA_PTR_FROM_JSON(PrivateIP, privateIP_);
      DARABONBA_PTR_FROM_JSON(ProcessStatus, processStatus_);
      DARABONBA_PTR_FROM_JSON(PublicIP, publicIP_);
      DARABONBA_PTR_FROM_JSON(Reference, reference_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(UnhandleOperationList, unhandleOperationList_);
    };
    DescribeInvadeEventDetailResponseBody() = default ;
    DescribeInvadeEventDetailResponseBody(const DescribeInvadeEventDetailResponseBody &) = default ;
    DescribeInvadeEventDetailResponseBody(DescribeInvadeEventDetailResponseBody &&) = default ;
    DescribeInvadeEventDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvadeEventDetailResponseBody() = default ;
    DescribeInvadeEventDetailResponseBody& operator=(const DescribeInvadeEventDetailResponseBody &) = default ;
    DescribeInvadeEventDetailResponseBody& operator=(DescribeInvadeEventDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetsInstanceId_ == nullptr
        && return this->assetsInstanceName_ == nullptr && return this->eventDesc_ == nullptr && return this->eventDetail_ == nullptr && return this->eventKey_ == nullptr && return this->eventName_ == nullptr
        && return this->eventUuid_ == nullptr && return this->firstTime_ == nullptr && return this->isIgnore_ == nullptr && return this->lastTime_ == nullptr && return this->operationList_ == nullptr
        && return this->privateIP_ == nullptr && return this->processStatus_ == nullptr && return this->publicIP_ == nullptr && return this->reference_ == nullptr && return this->regionNo_ == nullptr
        && return this->requestId_ == nullptr && return this->riskLevel_ == nullptr && return this->unhandleOperationList_ == nullptr; };
    // assetsInstanceId Field Functions 
    bool hasAssetsInstanceId() const { return this->assetsInstanceId_ != nullptr;};
    void deleteAssetsInstanceId() { this->assetsInstanceId_ = nullptr;};
    inline string assetsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(assetsInstanceId_, "") };
    inline DescribeInvadeEventDetailResponseBody& setAssetsInstanceId(string assetsInstanceId) { DARABONBA_PTR_SET_VALUE(assetsInstanceId_, assetsInstanceId) };


    // assetsInstanceName Field Functions 
    bool hasAssetsInstanceName() const { return this->assetsInstanceName_ != nullptr;};
    void deleteAssetsInstanceName() { this->assetsInstanceName_ = nullptr;};
    inline string assetsInstanceName() const { DARABONBA_PTR_GET_DEFAULT(assetsInstanceName_, "") };
    inline DescribeInvadeEventDetailResponseBody& setAssetsInstanceName(string assetsInstanceName) { DARABONBA_PTR_SET_VALUE(assetsInstanceName_, assetsInstanceName) };


    // eventDesc Field Functions 
    bool hasEventDesc() const { return this->eventDesc_ != nullptr;};
    void deleteEventDesc() { this->eventDesc_ = nullptr;};
    inline string eventDesc() const { DARABONBA_PTR_GET_DEFAULT(eventDesc_, "") };
    inline DescribeInvadeEventDetailResponseBody& setEventDesc(string eventDesc) { DARABONBA_PTR_SET_VALUE(eventDesc_, eventDesc) };


    // eventDetail Field Functions 
    bool hasEventDetail() const { return this->eventDetail_ != nullptr;};
    void deleteEventDetail() { this->eventDetail_ = nullptr;};
    inline string eventDetail() const { DARABONBA_PTR_GET_DEFAULT(eventDetail_, "") };
    inline DescribeInvadeEventDetailResponseBody& setEventDetail(string eventDetail) { DARABONBA_PTR_SET_VALUE(eventDetail_, eventDetail) };


    // eventKey Field Functions 
    bool hasEventKey() const { return this->eventKey_ != nullptr;};
    void deleteEventKey() { this->eventKey_ = nullptr;};
    inline string eventKey() const { DARABONBA_PTR_GET_DEFAULT(eventKey_, "") };
    inline DescribeInvadeEventDetailResponseBody& setEventKey(string eventKey) { DARABONBA_PTR_SET_VALUE(eventKey_, eventKey) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeInvadeEventDetailResponseBody& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventUuid Field Functions 
    bool hasEventUuid() const { return this->eventUuid_ != nullptr;};
    void deleteEventUuid() { this->eventUuid_ = nullptr;};
    inline string eventUuid() const { DARABONBA_PTR_GET_DEFAULT(eventUuid_, "") };
    inline DescribeInvadeEventDetailResponseBody& setEventUuid(string eventUuid) { DARABONBA_PTR_SET_VALUE(eventUuid_, eventUuid) };


    // firstTime Field Functions 
    bool hasFirstTime() const { return this->firstTime_ != nullptr;};
    void deleteFirstTime() { this->firstTime_ = nullptr;};
    inline int32_t firstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0) };
    inline DescribeInvadeEventDetailResponseBody& setFirstTime(int32_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


    // isIgnore Field Functions 
    bool hasIsIgnore() const { return this->isIgnore_ != nullptr;};
    void deleteIsIgnore() { this->isIgnore_ = nullptr;};
    inline bool isIgnore() const { DARABONBA_PTR_GET_DEFAULT(isIgnore_, false) };
    inline DescribeInvadeEventDetailResponseBody& setIsIgnore(bool isIgnore) { DARABONBA_PTR_SET_VALUE(isIgnore_, isIgnore) };


    // lastTime Field Functions 
    bool hasLastTime() const { return this->lastTime_ != nullptr;};
    void deleteLastTime() { this->lastTime_ = nullptr;};
    inline int32_t lastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0) };
    inline DescribeInvadeEventDetailResponseBody& setLastTime(int32_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


    // operationList Field Functions 
    bool hasOperationList() const { return this->operationList_ != nullptr;};
    void deleteOperationList() { this->operationList_ = nullptr;};
    inline const vector<DescribeInvadeEventDetailResponseBodyOperationList> & operationList() const { DARABONBA_PTR_GET_CONST(operationList_, vector<DescribeInvadeEventDetailResponseBodyOperationList>) };
    inline vector<DescribeInvadeEventDetailResponseBodyOperationList> operationList() { DARABONBA_PTR_GET(operationList_, vector<DescribeInvadeEventDetailResponseBodyOperationList>) };
    inline DescribeInvadeEventDetailResponseBody& setOperationList(const vector<DescribeInvadeEventDetailResponseBodyOperationList> & operationList) { DARABONBA_PTR_SET_VALUE(operationList_, operationList) };
    inline DescribeInvadeEventDetailResponseBody& setOperationList(vector<DescribeInvadeEventDetailResponseBodyOperationList> && operationList) { DARABONBA_PTR_SET_RVALUE(operationList_, operationList) };


    // privateIP Field Functions 
    bool hasPrivateIP() const { return this->privateIP_ != nullptr;};
    void deletePrivateIP() { this->privateIP_ = nullptr;};
    inline string privateIP() const { DARABONBA_PTR_GET_DEFAULT(privateIP_, "") };
    inline DescribeInvadeEventDetailResponseBody& setPrivateIP(string privateIP) { DARABONBA_PTR_SET_VALUE(privateIP_, privateIP) };


    // processStatus Field Functions 
    bool hasProcessStatus() const { return this->processStatus_ != nullptr;};
    void deleteProcessStatus() { this->processStatus_ = nullptr;};
    inline int32_t processStatus() const { DARABONBA_PTR_GET_DEFAULT(processStatus_, 0) };
    inline DescribeInvadeEventDetailResponseBody& setProcessStatus(int32_t processStatus) { DARABONBA_PTR_SET_VALUE(processStatus_, processStatus) };


    // publicIP Field Functions 
    bool hasPublicIP() const { return this->publicIP_ != nullptr;};
    void deletePublicIP() { this->publicIP_ = nullptr;};
    inline string publicIP() const { DARABONBA_PTR_GET_DEFAULT(publicIP_, "") };
    inline DescribeInvadeEventDetailResponseBody& setPublicIP(string publicIP) { DARABONBA_PTR_SET_VALUE(publicIP_, publicIP) };


    // reference Field Functions 
    bool hasReference() const { return this->reference_ != nullptr;};
    void deleteReference() { this->reference_ = nullptr;};
    inline string reference() const { DARABONBA_PTR_GET_DEFAULT(reference_, "") };
    inline DescribeInvadeEventDetailResponseBody& setReference(string reference) { DARABONBA_PTR_SET_VALUE(reference_, reference) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeInvadeEventDetailResponseBody& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInvadeEventDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline DescribeInvadeEventDetailResponseBody& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // unhandleOperationList Field Functions 
    bool hasUnhandleOperationList() const { return this->unhandleOperationList_ != nullptr;};
    void deleteUnhandleOperationList() { this->unhandleOperationList_ = nullptr;};
    inline const vector<DescribeInvadeEventDetailResponseBodyUnhandleOperationList> & unhandleOperationList() const { DARABONBA_PTR_GET_CONST(unhandleOperationList_, vector<DescribeInvadeEventDetailResponseBodyUnhandleOperationList>) };
    inline vector<DescribeInvadeEventDetailResponseBodyUnhandleOperationList> unhandleOperationList() { DARABONBA_PTR_GET(unhandleOperationList_, vector<DescribeInvadeEventDetailResponseBodyUnhandleOperationList>) };
    inline DescribeInvadeEventDetailResponseBody& setUnhandleOperationList(const vector<DescribeInvadeEventDetailResponseBodyUnhandleOperationList> & unhandleOperationList) { DARABONBA_PTR_SET_VALUE(unhandleOperationList_, unhandleOperationList) };
    inline DescribeInvadeEventDetailResponseBody& setUnhandleOperationList(vector<DescribeInvadeEventDetailResponseBodyUnhandleOperationList> && unhandleOperationList) { DARABONBA_PTR_SET_RVALUE(unhandleOperationList_, unhandleOperationList) };


  protected:
    std::shared_ptr<string> assetsInstanceId_ = nullptr;
    std::shared_ptr<string> assetsInstanceName_ = nullptr;
    std::shared_ptr<string> eventDesc_ = nullptr;
    std::shared_ptr<string> eventDetail_ = nullptr;
    std::shared_ptr<string> eventKey_ = nullptr;
    std::shared_ptr<string> eventName_ = nullptr;
    std::shared_ptr<string> eventUuid_ = nullptr;
    std::shared_ptr<int32_t> firstTime_ = nullptr;
    std::shared_ptr<bool> isIgnore_ = nullptr;
    std::shared_ptr<int32_t> lastTime_ = nullptr;
    std::shared_ptr<vector<DescribeInvadeEventDetailResponseBodyOperationList>> operationList_ = nullptr;
    std::shared_ptr<string> privateIP_ = nullptr;
    std::shared_ptr<int32_t> processStatus_ = nullptr;
    std::shared_ptr<string> publicIP_ = nullptr;
    std::shared_ptr<string> reference_ = nullptr;
    std::shared_ptr<string> regionNo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> riskLevel_ = nullptr;
    std::shared_ptr<vector<DescribeInvadeEventDetailResponseBodyUnhandleOperationList>> unhandleOperationList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
