// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVADEEVENTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVADEEVENTDETAILRESPONSEBODY_HPP_
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
    class UnhandleOperationList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UnhandleOperationList& obj) { 
        DARABONBA_PTR_TO_JSON(Args, args_);
        DARABONBA_PTR_TO_JSON(Operate, operate_);
      };
      friend void from_json(const Darabonba::Json& j, UnhandleOperationList& obj) { 
        DARABONBA_PTR_FROM_JSON(Args, args_);
        DARABONBA_PTR_FROM_JSON(Operate, operate_);
      };
      UnhandleOperationList() = default ;
      UnhandleOperationList(const UnhandleOperationList &) = default ;
      UnhandleOperationList(UnhandleOperationList &&) = default ;
      UnhandleOperationList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UnhandleOperationList() = default ;
      UnhandleOperationList& operator=(const UnhandleOperationList &) = default ;
      UnhandleOperationList& operator=(UnhandleOperationList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->args_ == nullptr
        && this->operate_ == nullptr; };
      // args Field Functions 
      bool hasArgs() const { return this->args_ != nullptr;};
      void deleteArgs() { this->args_ = nullptr;};
      inline string getArgs() const { DARABONBA_PTR_GET_DEFAULT(args_, "") };
      inline UnhandleOperationList& setArgs(string args) { DARABONBA_PTR_SET_VALUE(args_, args) };


      // operate Field Functions 
      bool hasOperate() const { return this->operate_ != nullptr;};
      void deleteOperate() { this->operate_ = nullptr;};
      inline string getOperate() const { DARABONBA_PTR_GET_DEFAULT(operate_, "") };
      inline UnhandleOperationList& setOperate(string operate) { DARABONBA_PTR_SET_VALUE(operate_, operate) };


    protected:
      shared_ptr<string> args_ {};
      shared_ptr<string> operate_ {};
    };

    class OperationList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OperationList& obj) { 
        DARABONBA_PTR_TO_JSON(Args, args_);
        DARABONBA_PTR_TO_JSON(Operate, operate_);
      };
      friend void from_json(const Darabonba::Json& j, OperationList& obj) { 
        DARABONBA_PTR_FROM_JSON(Args, args_);
        DARABONBA_PTR_FROM_JSON(Operate, operate_);
      };
      OperationList() = default ;
      OperationList(const OperationList &) = default ;
      OperationList(OperationList &&) = default ;
      OperationList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OperationList() = default ;
      OperationList& operator=(const OperationList &) = default ;
      OperationList& operator=(OperationList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->args_ == nullptr
        && this->operate_ == nullptr; };
      // args Field Functions 
      bool hasArgs() const { return this->args_ != nullptr;};
      void deleteArgs() { this->args_ = nullptr;};
      inline string getArgs() const { DARABONBA_PTR_GET_DEFAULT(args_, "") };
      inline OperationList& setArgs(string args) { DARABONBA_PTR_SET_VALUE(args_, args) };


      // operate Field Functions 
      bool hasOperate() const { return this->operate_ != nullptr;};
      void deleteOperate() { this->operate_ = nullptr;};
      inline string getOperate() const { DARABONBA_PTR_GET_DEFAULT(operate_, "") };
      inline OperationList& setOperate(string operate) { DARABONBA_PTR_SET_VALUE(operate_, operate) };


    protected:
      shared_ptr<string> args_ {};
      shared_ptr<string> operate_ {};
    };

    virtual bool empty() const override { return this->assetsInstanceId_ == nullptr
        && this->assetsInstanceName_ == nullptr && this->eventDesc_ == nullptr && this->eventDetail_ == nullptr && this->eventKey_ == nullptr && this->eventName_ == nullptr
        && this->eventUuid_ == nullptr && this->firstTime_ == nullptr && this->isIgnore_ == nullptr && this->lastTime_ == nullptr && this->operationList_ == nullptr
        && this->privateIP_ == nullptr && this->processStatus_ == nullptr && this->publicIP_ == nullptr && this->reference_ == nullptr && this->regionNo_ == nullptr
        && this->requestId_ == nullptr && this->riskLevel_ == nullptr && this->unhandleOperationList_ == nullptr; };
    // assetsInstanceId Field Functions 
    bool hasAssetsInstanceId() const { return this->assetsInstanceId_ != nullptr;};
    void deleteAssetsInstanceId() { this->assetsInstanceId_ = nullptr;};
    inline string getAssetsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(assetsInstanceId_, "") };
    inline DescribeInvadeEventDetailResponseBody& setAssetsInstanceId(string assetsInstanceId) { DARABONBA_PTR_SET_VALUE(assetsInstanceId_, assetsInstanceId) };


    // assetsInstanceName Field Functions 
    bool hasAssetsInstanceName() const { return this->assetsInstanceName_ != nullptr;};
    void deleteAssetsInstanceName() { this->assetsInstanceName_ = nullptr;};
    inline string getAssetsInstanceName() const { DARABONBA_PTR_GET_DEFAULT(assetsInstanceName_, "") };
    inline DescribeInvadeEventDetailResponseBody& setAssetsInstanceName(string assetsInstanceName) { DARABONBA_PTR_SET_VALUE(assetsInstanceName_, assetsInstanceName) };


    // eventDesc Field Functions 
    bool hasEventDesc() const { return this->eventDesc_ != nullptr;};
    void deleteEventDesc() { this->eventDesc_ = nullptr;};
    inline string getEventDesc() const { DARABONBA_PTR_GET_DEFAULT(eventDesc_, "") };
    inline DescribeInvadeEventDetailResponseBody& setEventDesc(string eventDesc) { DARABONBA_PTR_SET_VALUE(eventDesc_, eventDesc) };


    // eventDetail Field Functions 
    bool hasEventDetail() const { return this->eventDetail_ != nullptr;};
    void deleteEventDetail() { this->eventDetail_ = nullptr;};
    inline string getEventDetail() const { DARABONBA_PTR_GET_DEFAULT(eventDetail_, "") };
    inline DescribeInvadeEventDetailResponseBody& setEventDetail(string eventDetail) { DARABONBA_PTR_SET_VALUE(eventDetail_, eventDetail) };


    // eventKey Field Functions 
    bool hasEventKey() const { return this->eventKey_ != nullptr;};
    void deleteEventKey() { this->eventKey_ = nullptr;};
    inline string getEventKey() const { DARABONBA_PTR_GET_DEFAULT(eventKey_, "") };
    inline DescribeInvadeEventDetailResponseBody& setEventKey(string eventKey) { DARABONBA_PTR_SET_VALUE(eventKey_, eventKey) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeInvadeEventDetailResponseBody& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventUuid Field Functions 
    bool hasEventUuid() const { return this->eventUuid_ != nullptr;};
    void deleteEventUuid() { this->eventUuid_ = nullptr;};
    inline string getEventUuid() const { DARABONBA_PTR_GET_DEFAULT(eventUuid_, "") };
    inline DescribeInvadeEventDetailResponseBody& setEventUuid(string eventUuid) { DARABONBA_PTR_SET_VALUE(eventUuid_, eventUuid) };


    // firstTime Field Functions 
    bool hasFirstTime() const { return this->firstTime_ != nullptr;};
    void deleteFirstTime() { this->firstTime_ = nullptr;};
    inline int32_t getFirstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0) };
    inline DescribeInvadeEventDetailResponseBody& setFirstTime(int32_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


    // isIgnore Field Functions 
    bool hasIsIgnore() const { return this->isIgnore_ != nullptr;};
    void deleteIsIgnore() { this->isIgnore_ = nullptr;};
    inline bool getIsIgnore() const { DARABONBA_PTR_GET_DEFAULT(isIgnore_, false) };
    inline DescribeInvadeEventDetailResponseBody& setIsIgnore(bool isIgnore) { DARABONBA_PTR_SET_VALUE(isIgnore_, isIgnore) };


    // lastTime Field Functions 
    bool hasLastTime() const { return this->lastTime_ != nullptr;};
    void deleteLastTime() { this->lastTime_ = nullptr;};
    inline int32_t getLastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0) };
    inline DescribeInvadeEventDetailResponseBody& setLastTime(int32_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


    // operationList Field Functions 
    bool hasOperationList() const { return this->operationList_ != nullptr;};
    void deleteOperationList() { this->operationList_ = nullptr;};
    inline const vector<DescribeInvadeEventDetailResponseBody::OperationList> & getOperationList() const { DARABONBA_PTR_GET_CONST(operationList_, vector<DescribeInvadeEventDetailResponseBody::OperationList>) };
    inline vector<DescribeInvadeEventDetailResponseBody::OperationList> getOperationList() { DARABONBA_PTR_GET(operationList_, vector<DescribeInvadeEventDetailResponseBody::OperationList>) };
    inline DescribeInvadeEventDetailResponseBody& setOperationList(const vector<DescribeInvadeEventDetailResponseBody::OperationList> & operationList) { DARABONBA_PTR_SET_VALUE(operationList_, operationList) };
    inline DescribeInvadeEventDetailResponseBody& setOperationList(vector<DescribeInvadeEventDetailResponseBody::OperationList> && operationList) { DARABONBA_PTR_SET_RVALUE(operationList_, operationList) };


    // privateIP Field Functions 
    bool hasPrivateIP() const { return this->privateIP_ != nullptr;};
    void deletePrivateIP() { this->privateIP_ = nullptr;};
    inline string getPrivateIP() const { DARABONBA_PTR_GET_DEFAULT(privateIP_, "") };
    inline DescribeInvadeEventDetailResponseBody& setPrivateIP(string privateIP) { DARABONBA_PTR_SET_VALUE(privateIP_, privateIP) };


    // processStatus Field Functions 
    bool hasProcessStatus() const { return this->processStatus_ != nullptr;};
    void deleteProcessStatus() { this->processStatus_ = nullptr;};
    inline int32_t getProcessStatus() const { DARABONBA_PTR_GET_DEFAULT(processStatus_, 0) };
    inline DescribeInvadeEventDetailResponseBody& setProcessStatus(int32_t processStatus) { DARABONBA_PTR_SET_VALUE(processStatus_, processStatus) };


    // publicIP Field Functions 
    bool hasPublicIP() const { return this->publicIP_ != nullptr;};
    void deletePublicIP() { this->publicIP_ = nullptr;};
    inline string getPublicIP() const { DARABONBA_PTR_GET_DEFAULT(publicIP_, "") };
    inline DescribeInvadeEventDetailResponseBody& setPublicIP(string publicIP) { DARABONBA_PTR_SET_VALUE(publicIP_, publicIP) };


    // reference Field Functions 
    bool hasReference() const { return this->reference_ != nullptr;};
    void deleteReference() { this->reference_ = nullptr;};
    inline string getReference() const { DARABONBA_PTR_GET_DEFAULT(reference_, "") };
    inline DescribeInvadeEventDetailResponseBody& setReference(string reference) { DARABONBA_PTR_SET_VALUE(reference_, reference) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeInvadeEventDetailResponseBody& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInvadeEventDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline DescribeInvadeEventDetailResponseBody& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // unhandleOperationList Field Functions 
    bool hasUnhandleOperationList() const { return this->unhandleOperationList_ != nullptr;};
    void deleteUnhandleOperationList() { this->unhandleOperationList_ = nullptr;};
    inline const vector<DescribeInvadeEventDetailResponseBody::UnhandleOperationList> & getUnhandleOperationList() const { DARABONBA_PTR_GET_CONST(unhandleOperationList_, vector<DescribeInvadeEventDetailResponseBody::UnhandleOperationList>) };
    inline vector<DescribeInvadeEventDetailResponseBody::UnhandleOperationList> getUnhandleOperationList() { DARABONBA_PTR_GET(unhandleOperationList_, vector<DescribeInvadeEventDetailResponseBody::UnhandleOperationList>) };
    inline DescribeInvadeEventDetailResponseBody& setUnhandleOperationList(const vector<DescribeInvadeEventDetailResponseBody::UnhandleOperationList> & unhandleOperationList) { DARABONBA_PTR_SET_VALUE(unhandleOperationList_, unhandleOperationList) };
    inline DescribeInvadeEventDetailResponseBody& setUnhandleOperationList(vector<DescribeInvadeEventDetailResponseBody::UnhandleOperationList> && unhandleOperationList) { DARABONBA_PTR_SET_RVALUE(unhandleOperationList_, unhandleOperationList) };


  protected:
    shared_ptr<string> assetsInstanceId_ {};
    shared_ptr<string> assetsInstanceName_ {};
    shared_ptr<string> eventDesc_ {};
    shared_ptr<string> eventDetail_ {};
    shared_ptr<string> eventKey_ {};
    shared_ptr<string> eventName_ {};
    shared_ptr<string> eventUuid_ {};
    shared_ptr<int32_t> firstTime_ {};
    shared_ptr<bool> isIgnore_ {};
    shared_ptr<int32_t> lastTime_ {};
    shared_ptr<vector<DescribeInvadeEventDetailResponseBody::OperationList>> operationList_ {};
    shared_ptr<string> privateIP_ {};
    shared_ptr<int32_t> processStatus_ {};
    shared_ptr<string> publicIP_ {};
    shared_ptr<string> reference_ {};
    shared_ptr<string> regionNo_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> riskLevel_ {};
    shared_ptr<vector<DescribeInvadeEventDetailResponseBody::UnhandleOperationList>> unhandleOperationList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
