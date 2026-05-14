// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKDESCRIBECDRIBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLINKDESCRIBECDRIBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ClinkDescribeCdrIbResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkDescribeCdrIbResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkDescribeCdrIbResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ClinkDescribeCdrIbResponseBody() = default ;
    ClinkDescribeCdrIbResponseBody(const ClinkDescribeCdrIbResponseBody &) = default ;
    ClinkDescribeCdrIbResponseBody(ClinkDescribeCdrIbResponseBody &&) = default ;
    ClinkDescribeCdrIbResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkDescribeCdrIbResponseBody() = default ;
    ClinkDescribeCdrIbResponseBody& operator=(const ClinkDescribeCdrIbResponseBody &) = default ;
    ClinkDescribeCdrIbResponseBody& operator=(ClinkDescribeCdrIbResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CdrIb, cdrIb_);
        DARABONBA_PTR_TO_JSON(ClinkRequestId, clinkRequestId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CdrIb, cdrIb_);
        DARABONBA_PTR_FROM_JSON(ClinkRequestId, clinkRequestId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CdrIb : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CdrIb& obj) { 
          DARABONBA_PTR_TO_JSON(BridgeDuration, bridgeDuration_);
          DARABONBA_PTR_TO_JSON(BridgeTime, bridgeTime_);
          DARABONBA_PTR_TO_JSON(CallId, callId_);
          DARABONBA_PTR_TO_JSON(CallType, callType_);
          DARABONBA_PTR_TO_JSON(ClientName, clientName_);
          DARABONBA_PTR_TO_JSON(ClientNumber, clientNumber_);
          DARABONBA_PTR_TO_JSON(ClientOffhookTime, clientOffhookTime_);
          DARABONBA_PTR_TO_JSON(ClientRingingTime, clientRingingTime_);
          DARABONBA_PTR_TO_JSON(Cno, cno_);
          DARABONBA_PTR_TO_JSON(CustomerCity, customerCity_);
          DARABONBA_PTR_TO_JSON(CustomerNumber, customerNumber_);
          DARABONBA_PTR_TO_JSON(CustomerNumberEncrypt, customerNumberEncrypt_);
          DARABONBA_PTR_TO_JSON(CustomerProvince, customerProvince_);
          DARABONBA_PTR_TO_JSON(EndReason, endReason_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Evaluation, evaluation_);
          DARABONBA_PTR_TO_JSON(FastHangUp, fastHangUp_);
          DARABONBA_PTR_TO_JSON(FirstJoinQueueTime, firstJoinQueueTime_);
          DARABONBA_PTR_TO_JSON(Hotline, hotline_);
          DARABONBA_PTR_TO_JSON(HotlineName, hotlineName_);
          DARABONBA_PTR_TO_JSON(IbRingingDuration, ibRingingDuration_);
          DARABONBA_PTR_TO_JSON(IbWaitDuration, ibWaitDuration_);
          DARABONBA_PTR_TO_JSON(Investigation, investigation_);
          DARABONBA_PTR_TO_JSON(IvrFlows, ivrFlows_);
          DARABONBA_PTR_TO_JSON(IvrName, ivrName_);
          DARABONBA_PTR_TO_JSON(JoinQueueTime, joinQueueTime_);
          DARABONBA_PTR_TO_JSON(LeaveQueueTime, leaveQueueTime_);
          DARABONBA_PTR_TO_JSON(Mark, mark_);
          DARABONBA_PTR_TO_JSON(MarkData, markData_);
          DARABONBA_PTR_TO_JSON(Qno, qno_);
          DARABONBA_PTR_TO_JSON(QueueAnswerInTime, queueAnswerInTime_);
          DARABONBA_PTR_TO_JSON(RecordFile, recordFile_);
          DARABONBA_PTR_TO_JSON(SayVoiceDuration, sayVoiceDuration_);
          DARABONBA_PTR_TO_JSON(SipCause, sipCause_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
          DARABONBA_PTR_TO_JSON(TagNames, tagNames_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(TotalDuration, totalDuration_);
          DARABONBA_PTR_TO_JSON(UniqueId, uniqueId_);
        };
        friend void from_json(const Darabonba::Json& j, CdrIb& obj) { 
          DARABONBA_PTR_FROM_JSON(BridgeDuration, bridgeDuration_);
          DARABONBA_PTR_FROM_JSON(BridgeTime, bridgeTime_);
          DARABONBA_PTR_FROM_JSON(CallId, callId_);
          DARABONBA_PTR_FROM_JSON(CallType, callType_);
          DARABONBA_PTR_FROM_JSON(ClientName, clientName_);
          DARABONBA_PTR_FROM_JSON(ClientNumber, clientNumber_);
          DARABONBA_PTR_FROM_JSON(ClientOffhookTime, clientOffhookTime_);
          DARABONBA_PTR_FROM_JSON(ClientRingingTime, clientRingingTime_);
          DARABONBA_PTR_FROM_JSON(Cno, cno_);
          DARABONBA_PTR_FROM_JSON(CustomerCity, customerCity_);
          DARABONBA_PTR_FROM_JSON(CustomerNumber, customerNumber_);
          DARABONBA_PTR_FROM_JSON(CustomerNumberEncrypt, customerNumberEncrypt_);
          DARABONBA_PTR_FROM_JSON(CustomerProvince, customerProvince_);
          DARABONBA_PTR_FROM_JSON(EndReason, endReason_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Evaluation, evaluation_);
          DARABONBA_PTR_FROM_JSON(FastHangUp, fastHangUp_);
          DARABONBA_PTR_FROM_JSON(FirstJoinQueueTime, firstJoinQueueTime_);
          DARABONBA_PTR_FROM_JSON(Hotline, hotline_);
          DARABONBA_PTR_FROM_JSON(HotlineName, hotlineName_);
          DARABONBA_PTR_FROM_JSON(IbRingingDuration, ibRingingDuration_);
          DARABONBA_PTR_FROM_JSON(IbWaitDuration, ibWaitDuration_);
          DARABONBA_PTR_FROM_JSON(Investigation, investigation_);
          DARABONBA_PTR_FROM_JSON(IvrFlows, ivrFlows_);
          DARABONBA_PTR_FROM_JSON(IvrName, ivrName_);
          DARABONBA_PTR_FROM_JSON(JoinQueueTime, joinQueueTime_);
          DARABONBA_PTR_FROM_JSON(LeaveQueueTime, leaveQueueTime_);
          DARABONBA_PTR_FROM_JSON(Mark, mark_);
          DARABONBA_PTR_FROM_JSON(MarkData, markData_);
          DARABONBA_PTR_FROM_JSON(Qno, qno_);
          DARABONBA_PTR_FROM_JSON(QueueAnswerInTime, queueAnswerInTime_);
          DARABONBA_PTR_FROM_JSON(RecordFile, recordFile_);
          DARABONBA_PTR_FROM_JSON(SayVoiceDuration, sayVoiceDuration_);
          DARABONBA_PTR_FROM_JSON(SipCause, sipCause_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
          DARABONBA_PTR_FROM_JSON(TagNames, tagNames_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(TotalDuration, totalDuration_);
          DARABONBA_PTR_FROM_JSON(UniqueId, uniqueId_);
        };
        CdrIb() = default ;
        CdrIb(const CdrIb &) = default ;
        CdrIb(CdrIb &&) = default ;
        CdrIb(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CdrIb() = default ;
        CdrIb& operator=(const CdrIb &) = default ;
        CdrIb& operator=(CdrIb &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class IvrFlows : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const IvrFlows& obj) { 
            DARABONBA_PTR_TO_JSON(Action, action_);
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(IvrName, ivrName_);
            DARABONBA_PTR_TO_JSON(Path, path_);
            DARABONBA_PTR_TO_JSON(PathName, pathName_);
            DARABONBA_PTR_TO_JSON(PressKey, pressKey_);
            DARABONBA_PTR_TO_JSON(PressTime, pressTime_);
            DARABONBA_PTR_TO_JSON(RouterEndTime, routerEndTime_);
            DARABONBA_PTR_TO_JSON(RouterName, routerName_);
            DARABONBA_PTR_TO_JSON(RouterStartTime, routerStartTime_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          };
          friend void from_json(const Darabonba::Json& j, IvrFlows& obj) { 
            DARABONBA_PTR_FROM_JSON(Action, action_);
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(IvrName, ivrName_);
            DARABONBA_PTR_FROM_JSON(Path, path_);
            DARABONBA_PTR_FROM_JSON(PathName, pathName_);
            DARABONBA_PTR_FROM_JSON(PressKey, pressKey_);
            DARABONBA_PTR_FROM_JSON(PressTime, pressTime_);
            DARABONBA_PTR_FROM_JSON(RouterEndTime, routerEndTime_);
            DARABONBA_PTR_FROM_JSON(RouterName, routerName_);
            DARABONBA_PTR_FROM_JSON(RouterStartTime, routerStartTime_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          };
          IvrFlows() = default ;
          IvrFlows(const IvrFlows &) = default ;
          IvrFlows(IvrFlows &&) = default ;
          IvrFlows(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~IvrFlows() = default ;
          IvrFlows& operator=(const IvrFlows &) = default ;
          IvrFlows& operator=(IvrFlows &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->action_ == nullptr
        && this->endTime_ == nullptr && this->ivrName_ == nullptr && this->path_ == nullptr && this->pathName_ == nullptr && this->pressKey_ == nullptr
        && this->pressTime_ == nullptr && this->routerEndTime_ == nullptr && this->routerName_ == nullptr && this->routerStartTime_ == nullptr && this->startTime_ == nullptr; };
          // action Field Functions 
          bool hasAction() const { return this->action_ != nullptr;};
          void deleteAction() { this->action_ = nullptr;};
          inline int64_t getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, 0L) };
          inline IvrFlows& setAction(int64_t action) { DARABONBA_PTR_SET_VALUE(action_, action) };


          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
          inline IvrFlows& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // ivrName Field Functions 
          bool hasIvrName() const { return this->ivrName_ != nullptr;};
          void deleteIvrName() { this->ivrName_ = nullptr;};
          inline int64_t getIvrName() const { DARABONBA_PTR_GET_DEFAULT(ivrName_, 0L) };
          inline IvrFlows& setIvrName(int64_t ivrName) { DARABONBA_PTR_SET_VALUE(ivrName_, ivrName) };


          // path Field Functions 
          bool hasPath() const { return this->path_ != nullptr;};
          void deletePath() { this->path_ = nullptr;};
          inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
          inline IvrFlows& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


          // pathName Field Functions 
          bool hasPathName() const { return this->pathName_ != nullptr;};
          void deletePathName() { this->pathName_ = nullptr;};
          inline string getPathName() const { DARABONBA_PTR_GET_DEFAULT(pathName_, "") };
          inline IvrFlows& setPathName(string pathName) { DARABONBA_PTR_SET_VALUE(pathName_, pathName) };


          // pressKey Field Functions 
          bool hasPressKey() const { return this->pressKey_ != nullptr;};
          void deletePressKey() { this->pressKey_ = nullptr;};
          inline string getPressKey() const { DARABONBA_PTR_GET_DEFAULT(pressKey_, "") };
          inline IvrFlows& setPressKey(string pressKey) { DARABONBA_PTR_SET_VALUE(pressKey_, pressKey) };


          // pressTime Field Functions 
          bool hasPressTime() const { return this->pressTime_ != nullptr;};
          void deletePressTime() { this->pressTime_ = nullptr;};
          inline int64_t getPressTime() const { DARABONBA_PTR_GET_DEFAULT(pressTime_, 0L) };
          inline IvrFlows& setPressTime(int64_t pressTime) { DARABONBA_PTR_SET_VALUE(pressTime_, pressTime) };


          // routerEndTime Field Functions 
          bool hasRouterEndTime() const { return this->routerEndTime_ != nullptr;};
          void deleteRouterEndTime() { this->routerEndTime_ = nullptr;};
          inline int64_t getRouterEndTime() const { DARABONBA_PTR_GET_DEFAULT(routerEndTime_, 0L) };
          inline IvrFlows& setRouterEndTime(int64_t routerEndTime) { DARABONBA_PTR_SET_VALUE(routerEndTime_, routerEndTime) };


          // routerName Field Functions 
          bool hasRouterName() const { return this->routerName_ != nullptr;};
          void deleteRouterName() { this->routerName_ = nullptr;};
          inline int64_t getRouterName() const { DARABONBA_PTR_GET_DEFAULT(routerName_, 0L) };
          inline IvrFlows& setRouterName(int64_t routerName) { DARABONBA_PTR_SET_VALUE(routerName_, routerName) };


          // routerStartTime Field Functions 
          bool hasRouterStartTime() const { return this->routerStartTime_ != nullptr;};
          void deleteRouterStartTime() { this->routerStartTime_ = nullptr;};
          inline int64_t getRouterStartTime() const { DARABONBA_PTR_GET_DEFAULT(routerStartTime_, 0L) };
          inline IvrFlows& setRouterStartTime(int64_t routerStartTime) { DARABONBA_PTR_SET_VALUE(routerStartTime_, routerStartTime) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
          inline IvrFlows& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        protected:
          // 执行动作
          shared_ptr<int64_t> action_ {};
          // 结束时间
          shared_ptr<int64_t> endTime_ {};
          // ivr 名称
          shared_ptr<int64_t> ivrName_ {};
          // 节点 id
          shared_ptr<string> path_ {};
          // 节点名称
          shared_ptr<string> pathName_ {};
          // 按键值
          shared_ptr<string> pressKey_ {};
          // 按键时间
          shared_ptr<int64_t> pressTime_ {};
          // 路由结束时间
          shared_ptr<int64_t> routerEndTime_ {};
          // 路由名称
          shared_ptr<int64_t> routerName_ {};
          // 路由开始时间
          shared_ptr<int64_t> routerStartTime_ {};
          // 开始时间
          shared_ptr<int64_t> startTime_ {};
        };

        class Investigation : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Investigation& obj) { 
            DARABONBA_PTR_TO_JSON(ClientName, clientName_);
            DARABONBA_PTR_TO_JSON(Cno, cno_);
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(Keys, keys_);
            DARABONBA_PTR_TO_JSON(MultiKeys, multiKeys_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          };
          friend void from_json(const Darabonba::Json& j, Investigation& obj) { 
            DARABONBA_PTR_FROM_JSON(ClientName, clientName_);
            DARABONBA_PTR_FROM_JSON(Cno, cno_);
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(Keys, keys_);
            DARABONBA_PTR_FROM_JSON(MultiKeys, multiKeys_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          };
          Investigation() = default ;
          Investigation(const Investigation &) = default ;
          Investigation(Investigation &&) = default ;
          Investigation(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Investigation() = default ;
          Investigation& operator=(const Investigation &) = default ;
          Investigation& operator=(Investigation &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->clientName_ == nullptr
        && this->cno_ == nullptr && this->endTime_ == nullptr && this->keys_ == nullptr && this->multiKeys_ == nullptr && this->startTime_ == nullptr; };
          // clientName Field Functions 
          bool hasClientName() const { return this->clientName_ != nullptr;};
          void deleteClientName() { this->clientName_ = nullptr;};
          inline string getClientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
          inline Investigation& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


          // cno Field Functions 
          bool hasCno() const { return this->cno_ != nullptr;};
          void deleteCno() { this->cno_ = nullptr;};
          inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
          inline Investigation& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
          inline Investigation& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // keys Field Functions 
          bool hasKeys() const { return this->keys_ != nullptr;};
          void deleteKeys() { this->keys_ = nullptr;};
          inline int64_t getKeys() const { DARABONBA_PTR_GET_DEFAULT(keys_, 0L) };
          inline Investigation& setKeys(int64_t keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };


          // multiKeys Field Functions 
          bool hasMultiKeys() const { return this->multiKeys_ != nullptr;};
          void deleteMultiKeys() { this->multiKeys_ = nullptr;};
          inline string getMultiKeys() const { DARABONBA_PTR_GET_DEFAULT(multiKeys_, "") };
          inline Investigation& setMultiKeys(string multiKeys) { DARABONBA_PTR_SET_VALUE(multiKeys_, multiKeys) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
          inline Investigation& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        protected:
          // 座席名称
          shared_ptr<string> clientName_ {};
          // 座席号
          shared_ptr<string> cno_ {};
          // 结束时间
          shared_ptr<int64_t> endTime_ {};
          // 按键值
          shared_ptr<int64_t> keys_ {};
          // 多按键值
          shared_ptr<string> multiKeys_ {};
          // 开始时间
          shared_ptr<int64_t> startTime_ {};
        };

        virtual bool empty() const override { return this->bridgeDuration_ == nullptr
        && this->bridgeTime_ == nullptr && this->callId_ == nullptr && this->callType_ == nullptr && this->clientName_ == nullptr && this->clientNumber_ == nullptr
        && this->clientOffhookTime_ == nullptr && this->clientRingingTime_ == nullptr && this->cno_ == nullptr && this->customerCity_ == nullptr && this->customerNumber_ == nullptr
        && this->customerNumberEncrypt_ == nullptr && this->customerProvince_ == nullptr && this->endReason_ == nullptr && this->endTime_ == nullptr && this->evaluation_ == nullptr
        && this->fastHangUp_ == nullptr && this->firstJoinQueueTime_ == nullptr && this->hotline_ == nullptr && this->hotlineName_ == nullptr && this->ibRingingDuration_ == nullptr
        && this->ibWaitDuration_ == nullptr && this->investigation_ == nullptr && this->ivrFlows_ == nullptr && this->ivrName_ == nullptr && this->joinQueueTime_ == nullptr
        && this->leaveQueueTime_ == nullptr && this->mark_ == nullptr && this->markData_ == nullptr && this->qno_ == nullptr && this->queueAnswerInTime_ == nullptr
        && this->recordFile_ == nullptr && this->sayVoiceDuration_ == nullptr && this->sipCause_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->statusCode_ == nullptr && this->tagNames_ == nullptr && this->tags_ == nullptr && this->totalDuration_ == nullptr && this->uniqueId_ == nullptr; };
        // bridgeDuration Field Functions 
        bool hasBridgeDuration() const { return this->bridgeDuration_ != nullptr;};
        void deleteBridgeDuration() { this->bridgeDuration_ = nullptr;};
        inline int64_t getBridgeDuration() const { DARABONBA_PTR_GET_DEFAULT(bridgeDuration_, 0L) };
        inline CdrIb& setBridgeDuration(int64_t bridgeDuration) { DARABONBA_PTR_SET_VALUE(bridgeDuration_, bridgeDuration) };


        // bridgeTime Field Functions 
        bool hasBridgeTime() const { return this->bridgeTime_ != nullptr;};
        void deleteBridgeTime() { this->bridgeTime_ = nullptr;};
        inline int64_t getBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(bridgeTime_, 0L) };
        inline CdrIb& setBridgeTime(int64_t bridgeTime) { DARABONBA_PTR_SET_VALUE(bridgeTime_, bridgeTime) };


        // callId Field Functions 
        bool hasCallId() const { return this->callId_ != nullptr;};
        void deleteCallId() { this->callId_ = nullptr;};
        inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
        inline CdrIb& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


        // callType Field Functions 
        bool hasCallType() const { return this->callType_ != nullptr;};
        void deleteCallType() { this->callType_ = nullptr;};
        inline string getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, "") };
        inline CdrIb& setCallType(string callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


        // clientName Field Functions 
        bool hasClientName() const { return this->clientName_ != nullptr;};
        void deleteClientName() { this->clientName_ = nullptr;};
        inline string getClientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
        inline CdrIb& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


        // clientNumber Field Functions 
        bool hasClientNumber() const { return this->clientNumber_ != nullptr;};
        void deleteClientNumber() { this->clientNumber_ = nullptr;};
        inline string getClientNumber() const { DARABONBA_PTR_GET_DEFAULT(clientNumber_, "") };
        inline CdrIb& setClientNumber(string clientNumber) { DARABONBA_PTR_SET_VALUE(clientNumber_, clientNumber) };


        // clientOffhookTime Field Functions 
        bool hasClientOffhookTime() const { return this->clientOffhookTime_ != nullptr;};
        void deleteClientOffhookTime() { this->clientOffhookTime_ = nullptr;};
        inline int64_t getClientOffhookTime() const { DARABONBA_PTR_GET_DEFAULT(clientOffhookTime_, 0L) };
        inline CdrIb& setClientOffhookTime(int64_t clientOffhookTime) { DARABONBA_PTR_SET_VALUE(clientOffhookTime_, clientOffhookTime) };


        // clientRingingTime Field Functions 
        bool hasClientRingingTime() const { return this->clientRingingTime_ != nullptr;};
        void deleteClientRingingTime() { this->clientRingingTime_ = nullptr;};
        inline int64_t getClientRingingTime() const { DARABONBA_PTR_GET_DEFAULT(clientRingingTime_, 0L) };
        inline CdrIb& setClientRingingTime(int64_t clientRingingTime) { DARABONBA_PTR_SET_VALUE(clientRingingTime_, clientRingingTime) };


        // cno Field Functions 
        bool hasCno() const { return this->cno_ != nullptr;};
        void deleteCno() { this->cno_ = nullptr;};
        inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
        inline CdrIb& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


        // customerCity Field Functions 
        bool hasCustomerCity() const { return this->customerCity_ != nullptr;};
        void deleteCustomerCity() { this->customerCity_ = nullptr;};
        inline string getCustomerCity() const { DARABONBA_PTR_GET_DEFAULT(customerCity_, "") };
        inline CdrIb& setCustomerCity(string customerCity) { DARABONBA_PTR_SET_VALUE(customerCity_, customerCity) };


        // customerNumber Field Functions 
        bool hasCustomerNumber() const { return this->customerNumber_ != nullptr;};
        void deleteCustomerNumber() { this->customerNumber_ = nullptr;};
        inline string getCustomerNumber() const { DARABONBA_PTR_GET_DEFAULT(customerNumber_, "") };
        inline CdrIb& setCustomerNumber(string customerNumber) { DARABONBA_PTR_SET_VALUE(customerNumber_, customerNumber) };


        // customerNumberEncrypt Field Functions 
        bool hasCustomerNumberEncrypt() const { return this->customerNumberEncrypt_ != nullptr;};
        void deleteCustomerNumberEncrypt() { this->customerNumberEncrypt_ = nullptr;};
        inline string getCustomerNumberEncrypt() const { DARABONBA_PTR_GET_DEFAULT(customerNumberEncrypt_, "") };
        inline CdrIb& setCustomerNumberEncrypt(string customerNumberEncrypt) { DARABONBA_PTR_SET_VALUE(customerNumberEncrypt_, customerNumberEncrypt) };


        // customerProvince Field Functions 
        bool hasCustomerProvince() const { return this->customerProvince_ != nullptr;};
        void deleteCustomerProvince() { this->customerProvince_ = nullptr;};
        inline string getCustomerProvince() const { DARABONBA_PTR_GET_DEFAULT(customerProvince_, "") };
        inline CdrIb& setCustomerProvince(string customerProvince) { DARABONBA_PTR_SET_VALUE(customerProvince_, customerProvince) };


        // endReason Field Functions 
        bool hasEndReason() const { return this->endReason_ != nullptr;};
        void deleteEndReason() { this->endReason_ = nullptr;};
        inline string getEndReason() const { DARABONBA_PTR_GET_DEFAULT(endReason_, "") };
        inline CdrIb& setEndReason(string endReason) { DARABONBA_PTR_SET_VALUE(endReason_, endReason) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline CdrIb& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // evaluation Field Functions 
        bool hasEvaluation() const { return this->evaluation_ != nullptr;};
        void deleteEvaluation() { this->evaluation_ = nullptr;};
        inline int64_t getEvaluation() const { DARABONBA_PTR_GET_DEFAULT(evaluation_, 0L) };
        inline CdrIb& setEvaluation(int64_t evaluation) { DARABONBA_PTR_SET_VALUE(evaluation_, evaluation) };


        // fastHangUp Field Functions 
        bool hasFastHangUp() const { return this->fastHangUp_ != nullptr;};
        void deleteFastHangUp() { this->fastHangUp_ = nullptr;};
        inline bool getFastHangUp() const { DARABONBA_PTR_GET_DEFAULT(fastHangUp_, false) };
        inline CdrIb& setFastHangUp(bool fastHangUp) { DARABONBA_PTR_SET_VALUE(fastHangUp_, fastHangUp) };


        // firstJoinQueueTime Field Functions 
        bool hasFirstJoinQueueTime() const { return this->firstJoinQueueTime_ != nullptr;};
        void deleteFirstJoinQueueTime() { this->firstJoinQueueTime_ = nullptr;};
        inline int64_t getFirstJoinQueueTime() const { DARABONBA_PTR_GET_DEFAULT(firstJoinQueueTime_, 0L) };
        inline CdrIb& setFirstJoinQueueTime(int64_t firstJoinQueueTime) { DARABONBA_PTR_SET_VALUE(firstJoinQueueTime_, firstJoinQueueTime) };


        // hotline Field Functions 
        bool hasHotline() const { return this->hotline_ != nullptr;};
        void deleteHotline() { this->hotline_ = nullptr;};
        inline string getHotline() const { DARABONBA_PTR_GET_DEFAULT(hotline_, "") };
        inline CdrIb& setHotline(string hotline) { DARABONBA_PTR_SET_VALUE(hotline_, hotline) };


        // hotlineName Field Functions 
        bool hasHotlineName() const { return this->hotlineName_ != nullptr;};
        void deleteHotlineName() { this->hotlineName_ = nullptr;};
        inline string getHotlineName() const { DARABONBA_PTR_GET_DEFAULT(hotlineName_, "") };
        inline CdrIb& setHotlineName(string hotlineName) { DARABONBA_PTR_SET_VALUE(hotlineName_, hotlineName) };


        // ibRingingDuration Field Functions 
        bool hasIbRingingDuration() const { return this->ibRingingDuration_ != nullptr;};
        void deleteIbRingingDuration() { this->ibRingingDuration_ = nullptr;};
        inline int64_t getIbRingingDuration() const { DARABONBA_PTR_GET_DEFAULT(ibRingingDuration_, 0L) };
        inline CdrIb& setIbRingingDuration(int64_t ibRingingDuration) { DARABONBA_PTR_SET_VALUE(ibRingingDuration_, ibRingingDuration) };


        // ibWaitDuration Field Functions 
        bool hasIbWaitDuration() const { return this->ibWaitDuration_ != nullptr;};
        void deleteIbWaitDuration() { this->ibWaitDuration_ = nullptr;};
        inline int64_t getIbWaitDuration() const { DARABONBA_PTR_GET_DEFAULT(ibWaitDuration_, 0L) };
        inline CdrIb& setIbWaitDuration(int64_t ibWaitDuration) { DARABONBA_PTR_SET_VALUE(ibWaitDuration_, ibWaitDuration) };


        // investigation Field Functions 
        bool hasInvestigation() const { return this->investigation_ != nullptr;};
        void deleteInvestigation() { this->investigation_ = nullptr;};
        inline const CdrIb::Investigation & getInvestigation() const { DARABONBA_PTR_GET_CONST(investigation_, CdrIb::Investigation) };
        inline CdrIb::Investigation getInvestigation() { DARABONBA_PTR_GET(investigation_, CdrIb::Investigation) };
        inline CdrIb& setInvestigation(const CdrIb::Investigation & investigation) { DARABONBA_PTR_SET_VALUE(investigation_, investigation) };
        inline CdrIb& setInvestigation(CdrIb::Investigation && investigation) { DARABONBA_PTR_SET_RVALUE(investigation_, investigation) };


        // ivrFlows Field Functions 
        bool hasIvrFlows() const { return this->ivrFlows_ != nullptr;};
        void deleteIvrFlows() { this->ivrFlows_ = nullptr;};
        inline const vector<CdrIb::IvrFlows> & getIvrFlows() const { DARABONBA_PTR_GET_CONST(ivrFlows_, vector<CdrIb::IvrFlows>) };
        inline vector<CdrIb::IvrFlows> getIvrFlows() { DARABONBA_PTR_GET(ivrFlows_, vector<CdrIb::IvrFlows>) };
        inline CdrIb& setIvrFlows(const vector<CdrIb::IvrFlows> & ivrFlows) { DARABONBA_PTR_SET_VALUE(ivrFlows_, ivrFlows) };
        inline CdrIb& setIvrFlows(vector<CdrIb::IvrFlows> && ivrFlows) { DARABONBA_PTR_SET_RVALUE(ivrFlows_, ivrFlows) };


        // ivrName Field Functions 
        bool hasIvrName() const { return this->ivrName_ != nullptr;};
        void deleteIvrName() { this->ivrName_ = nullptr;};
        inline string getIvrName() const { DARABONBA_PTR_GET_DEFAULT(ivrName_, "") };
        inline CdrIb& setIvrName(string ivrName) { DARABONBA_PTR_SET_VALUE(ivrName_, ivrName) };


        // joinQueueTime Field Functions 
        bool hasJoinQueueTime() const { return this->joinQueueTime_ != nullptr;};
        void deleteJoinQueueTime() { this->joinQueueTime_ = nullptr;};
        inline int64_t getJoinQueueTime() const { DARABONBA_PTR_GET_DEFAULT(joinQueueTime_, 0L) };
        inline CdrIb& setJoinQueueTime(int64_t joinQueueTime) { DARABONBA_PTR_SET_VALUE(joinQueueTime_, joinQueueTime) };


        // leaveQueueTime Field Functions 
        bool hasLeaveQueueTime() const { return this->leaveQueueTime_ != nullptr;};
        void deleteLeaveQueueTime() { this->leaveQueueTime_ = nullptr;};
        inline int64_t getLeaveQueueTime() const { DARABONBA_PTR_GET_DEFAULT(leaveQueueTime_, 0L) };
        inline CdrIb& setLeaveQueueTime(int64_t leaveQueueTime) { DARABONBA_PTR_SET_VALUE(leaveQueueTime_, leaveQueueTime) };


        // mark Field Functions 
        bool hasMark() const { return this->mark_ != nullptr;};
        void deleteMark() { this->mark_ = nullptr;};
        inline int64_t getMark() const { DARABONBA_PTR_GET_DEFAULT(mark_, 0L) };
        inline CdrIb& setMark(int64_t mark) { DARABONBA_PTR_SET_VALUE(mark_, mark) };


        // markData Field Functions 
        bool hasMarkData() const { return this->markData_ != nullptr;};
        void deleteMarkData() { this->markData_ = nullptr;};
        inline string getMarkData() const { DARABONBA_PTR_GET_DEFAULT(markData_, "") };
        inline CdrIb& setMarkData(string markData) { DARABONBA_PTR_SET_VALUE(markData_, markData) };


        // qno Field Functions 
        bool hasQno() const { return this->qno_ != nullptr;};
        void deleteQno() { this->qno_ = nullptr;};
        inline string getQno() const { DARABONBA_PTR_GET_DEFAULT(qno_, "") };
        inline CdrIb& setQno(string qno) { DARABONBA_PTR_SET_VALUE(qno_, qno) };


        // queueAnswerInTime Field Functions 
        bool hasQueueAnswerInTime() const { return this->queueAnswerInTime_ != nullptr;};
        void deleteQueueAnswerInTime() { this->queueAnswerInTime_ = nullptr;};
        inline int64_t getQueueAnswerInTime() const { DARABONBA_PTR_GET_DEFAULT(queueAnswerInTime_, 0L) };
        inline CdrIb& setQueueAnswerInTime(int64_t queueAnswerInTime) { DARABONBA_PTR_SET_VALUE(queueAnswerInTime_, queueAnswerInTime) };


        // recordFile Field Functions 
        bool hasRecordFile() const { return this->recordFile_ != nullptr;};
        void deleteRecordFile() { this->recordFile_ = nullptr;};
        inline string getRecordFile() const { DARABONBA_PTR_GET_DEFAULT(recordFile_, "") };
        inline CdrIb& setRecordFile(string recordFile) { DARABONBA_PTR_SET_VALUE(recordFile_, recordFile) };


        // sayVoiceDuration Field Functions 
        bool hasSayVoiceDuration() const { return this->sayVoiceDuration_ != nullptr;};
        void deleteSayVoiceDuration() { this->sayVoiceDuration_ = nullptr;};
        inline int64_t getSayVoiceDuration() const { DARABONBA_PTR_GET_DEFAULT(sayVoiceDuration_, 0L) };
        inline CdrIb& setSayVoiceDuration(int64_t sayVoiceDuration) { DARABONBA_PTR_SET_VALUE(sayVoiceDuration_, sayVoiceDuration) };


        // sipCause Field Functions 
        bool hasSipCause() const { return this->sipCause_ != nullptr;};
        void deleteSipCause() { this->sipCause_ = nullptr;};
        inline string getSipCause() const { DARABONBA_PTR_GET_DEFAULT(sipCause_, "") };
        inline CdrIb& setSipCause(string sipCause) { DARABONBA_PTR_SET_VALUE(sipCause_, sipCause) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline CdrIb& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline CdrIb& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusCode Field Functions 
        bool hasStatusCode() const { return this->statusCode_ != nullptr;};
        void deleteStatusCode() { this->statusCode_ = nullptr;};
        inline string getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
        inline CdrIb& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


        // tagNames Field Functions 
        bool hasTagNames() const { return this->tagNames_ != nullptr;};
        void deleteTagNames() { this->tagNames_ = nullptr;};
        inline const vector<string> & getTagNames() const { DARABONBA_PTR_GET_CONST(tagNames_, vector<string>) };
        inline vector<string> getTagNames() { DARABONBA_PTR_GET(tagNames_, vector<string>) };
        inline CdrIb& setTagNames(const vector<string> & tagNames) { DARABONBA_PTR_SET_VALUE(tagNames_, tagNames) };
        inline CdrIb& setTagNames(vector<string> && tagNames) { DARABONBA_PTR_SET_RVALUE(tagNames_, tagNames) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
        inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
        inline CdrIb& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline CdrIb& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // totalDuration Field Functions 
        bool hasTotalDuration() const { return this->totalDuration_ != nullptr;};
        void deleteTotalDuration() { this->totalDuration_ = nullptr;};
        inline int64_t getTotalDuration() const { DARABONBA_PTR_GET_DEFAULT(totalDuration_, 0L) };
        inline CdrIb& setTotalDuration(int64_t totalDuration) { DARABONBA_PTR_SET_VALUE(totalDuration_, totalDuration) };


        // uniqueId Field Functions 
        bool hasUniqueId() const { return this->uniqueId_ != nullptr;};
        void deleteUniqueId() { this->uniqueId_ = nullptr;};
        inline string getUniqueId() const { DARABONBA_PTR_GET_DEFAULT(uniqueId_, "") };
        inline CdrIb& setUniqueId(string uniqueId) { DARABONBA_PTR_SET_VALUE(uniqueId_, uniqueId) };


      protected:
        // 接通时长
        shared_ptr<int64_t> bridgeDuration_ {};
        // 接通时间
        shared_ptr<int64_t> bridgeTime_ {};
        // 通话记录ID
        shared_ptr<string> callId_ {};
        // 呼入类型
        shared_ptr<string> callType_ {};
        // 座席名称
        shared_ptr<string> clientName_ {};
        // 座席电话
        shared_ptr<string> clientNumber_ {};
        // 座席接起时间
        shared_ptr<int64_t> clientOffhookTime_ {};
        // 座席响铃时间
        shared_ptr<int64_t> clientRingingTime_ {};
        // 座席号
        shared_ptr<string> cno_ {};
        // 客户来电城市
        shared_ptr<string> customerCity_ {};
        // 客户来电号码，带区号
        shared_ptr<string> customerNumber_ {};
        // 客户来电号码加密串
        shared_ptr<string> customerNumberEncrypt_ {};
        // 客户来电省份
        shared_ptr<string> customerProvince_ {};
        // 挂机方
        shared_ptr<string> endReason_ {};
        // 结束时间
        shared_ptr<int64_t> endTime_ {};
        // 是否邀评 0: 否 1: 是
        shared_ptr<int64_t> evaluation_ {};
        // 客户速挂，true：是；false：否
        shared_ptr<bool> fastHangUp_ {};
        // 首次进入队列时间
        shared_ptr<int64_t> firstJoinQueueTime_ {};
        // 来电热线号码
        shared_ptr<string> hotline_ {};
        // 热线别名
        shared_ptr<string> hotlineName_ {};
        // 座席振铃时长
        shared_ptr<int64_t> ibRingingDuration_ {};
        // 排队时长
        shared_ptr<int64_t> ibWaitDuration_ {};
        // [满意度记录] #满意度记录
        shared_ptr<CdrIb::Investigation> investigation_ {};
        // [路由和IVR] #路由和IVR
        shared_ptr<vector<CdrIb::IvrFlows>> ivrFlows_ {};
        // IVR名称
        shared_ptr<string> ivrName_ {};
        // 进入队列时间
        shared_ptr<int64_t> joinQueueTime_ {};
        // 离开队列时间
        shared_ptr<int64_t> leaveQueueTime_ {};
        // 标记
        shared_ptr<int64_t> mark_ {};
        // 备注
        shared_ptr<string> markData_ {};
        // 来电队列号
        shared_ptr<string> qno_ {};
        // 队列及时应答
        shared_ptr<int64_t> queueAnswerInTime_ {};
        // 录音文件名
        shared_ptr<string> recordFile_ {};
        // 语音播报时长
        shared_ptr<int64_t> sayVoiceDuration_ {};
        // 呼叫结果
        shared_ptr<string> sipCause_ {};
        // 开始时间
        shared_ptr<int64_t> startTime_ {};
        // 接听状态
        shared_ptr<string> status_ {};
        // 接听状态映射
        shared_ptr<string> statusCode_ {};
        // 展示通话标签详情,当请求参数fields中包含tagNames时返回
        shared_ptr<vector<string>> tagNames_ {};
        // 标签
        shared_ptr<vector<string>> tags_ {};
        // 总时长
        shared_ptr<int64_t> totalDuration_ {};
        // 通话记录唯一标识
        shared_ptr<string> uniqueId_ {};
      };

      virtual bool empty() const override { return this->cdrIb_ == nullptr
        && this->clinkRequestId_ == nullptr; };
      // cdrIb Field Functions 
      bool hasCdrIb() const { return this->cdrIb_ != nullptr;};
      void deleteCdrIb() { this->cdrIb_ = nullptr;};
      inline const Data::CdrIb & getCdrIb() const { DARABONBA_PTR_GET_CONST(cdrIb_, Data::CdrIb) };
      inline Data::CdrIb getCdrIb() { DARABONBA_PTR_GET(cdrIb_, Data::CdrIb) };
      inline Data& setCdrIb(const Data::CdrIb & cdrIb) { DARABONBA_PTR_SET_VALUE(cdrIb_, cdrIb) };
      inline Data& setCdrIb(Data::CdrIb && cdrIb) { DARABONBA_PTR_SET_RVALUE(cdrIb_, cdrIb) };


      // clinkRequestId Field Functions 
      bool hasClinkRequestId() const { return this->clinkRequestId_ != nullptr;};
      void deleteClinkRequestId() { this->clinkRequestId_ = nullptr;};
      inline string getClinkRequestId() const { DARABONBA_PTR_GET_DEFAULT(clinkRequestId_, "") };
      inline Data& setClinkRequestId(string clinkRequestId) { DARABONBA_PTR_SET_VALUE(clinkRequestId_, clinkRequestId) };


    protected:
      // [呼入通话记录] #呼入通话记录
      shared_ptr<Data::CdrIb> cdrIb_ {};
      // 请求 id
      shared_ptr<string> clinkRequestId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ClinkDescribeCdrIbResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ClinkDescribeCdrIbResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ClinkDescribeCdrIbResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ClinkDescribeCdrIbResponseBody::Data) };
    inline ClinkDescribeCdrIbResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ClinkDescribeCdrIbResponseBody::Data) };
    inline ClinkDescribeCdrIbResponseBody& setData(const ClinkDescribeCdrIbResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ClinkDescribeCdrIbResponseBody& setData(ClinkDescribeCdrIbResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ClinkDescribeCdrIbResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClinkDescribeCdrIbResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<ClinkDescribeCdrIbResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
