// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKDETAILCDRIBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLINKDETAILCDRIBRESPONSEBODY_HPP_
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
  class ClinkDetailCdrIbResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkDetailCdrIbResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkDetailCdrIbResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ClinkDetailCdrIbResponseBody() = default ;
    ClinkDetailCdrIbResponseBody(const ClinkDetailCdrIbResponseBody &) = default ;
    ClinkDetailCdrIbResponseBody(ClinkDetailCdrIbResponseBody &&) = default ;
    ClinkDetailCdrIbResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkDetailCdrIbResponseBody() = default ;
    ClinkDetailCdrIbResponseBody& operator=(const ClinkDetailCdrIbResponseBody &) = default ;
    ClinkDetailCdrIbResponseBody& operator=(ClinkDetailCdrIbResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CdrIbDetail, cdrIbDetail_);
        DARABONBA_PTR_TO_JSON(ClinkRequestId, clinkRequestId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CdrIbDetail, cdrIbDetail_);
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
      class CdrIbDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CdrIbDetail& obj) { 
          DARABONBA_PTR_TO_JSON(AgentAnswerInTime, agentAnswerInTime_);
          DARABONBA_PTR_TO_JSON(BindType, bindType_);
          DARABONBA_PTR_TO_JSON(BridgeDuration, bridgeDuration_);
          DARABONBA_PTR_TO_JSON(BridgeTime, bridgeTime_);
          DARABONBA_PTR_TO_JSON(CallId, callId_);
          DARABONBA_PTR_TO_JSON(CustomerCity, customerCity_);
          DARABONBA_PTR_TO_JSON(CustomerNumber, customerNumber_);
          DARABONBA_PTR_TO_JSON(CustomerNumberEncrypt, customerNumberEncrypt_);
          DARABONBA_PTR_TO_JSON(CustomerProvince, customerProvince_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Evaluation, evaluation_);
          DARABONBA_PTR_TO_JSON(FirstCallCname, firstCallCname_);
          DARABONBA_PTR_TO_JSON(FirstCallCno, firstCallCno_);
          DARABONBA_PTR_TO_JSON(FirstCallNumber, firstCallNumber_);
          DARABONBA_PTR_TO_JSON(FirstCallQname, firstCallQname_);
          DARABONBA_PTR_TO_JSON(FirstCallQno, firstCallQno_);
          DARABONBA_PTR_TO_JSON(FirstJoinQueueTime, firstJoinQueueTime_);
          DARABONBA_PTR_TO_JSON(FirstLeaveQueueTime, firstLeaveQueueTime_);
          DARABONBA_PTR_TO_JSON(FirstQueueDuration, firstQueueDuration_);
          DARABONBA_PTR_TO_JSON(Hotline, hotline_);
          DARABONBA_PTR_TO_JSON(HotlineName, hotlineName_);
          DARABONBA_PTR_TO_JSON(Investigation, investigation_);
          DARABONBA_PTR_TO_JSON(InvestigationKeys, investigationKeys_);
          DARABONBA_PTR_TO_JSON(IvrFlows, ivrFlows_);
          DARABONBA_PTR_TO_JSON(IvrName, ivrName_);
          DARABONBA_PTR_TO_JSON(MainUniqueId, mainUniqueId_);
          DARABONBA_PTR_TO_JSON(MarkData, markData_);
          DARABONBA_PTR_TO_JSON(OnHookSource, onHookSource_);
          DARABONBA_PTR_TO_JSON(RecordFile, recordFile_);
          DARABONBA_PTR_TO_JSON(RtcUid, rtcUid_);
          DARABONBA_PTR_TO_JSON(SayVoiceDuration, sayVoiceDuration_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StatusResult, statusResult_);
          DARABONBA_PTR_TO_JSON(StatusRobot, statusRobot_);
          DARABONBA_PTR_TO_JSON(TagNames, tagNames_);
          DARABONBA_PTR_TO_JSON(TotalDuration, totalDuration_);
          DARABONBA_PTR_TO_JSON(UserField, userField_);
          DARABONBA_PTR_TO_JSON(WebrtcCallId, webrtcCallId_);
          DARABONBA_PTR_TO_JSON(Xnumber, xnumber_);
        };
        friend void from_json(const Darabonba::Json& j, CdrIbDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentAnswerInTime, agentAnswerInTime_);
          DARABONBA_PTR_FROM_JSON(BindType, bindType_);
          DARABONBA_PTR_FROM_JSON(BridgeDuration, bridgeDuration_);
          DARABONBA_PTR_FROM_JSON(BridgeTime, bridgeTime_);
          DARABONBA_PTR_FROM_JSON(CallId, callId_);
          DARABONBA_PTR_FROM_JSON(CustomerCity, customerCity_);
          DARABONBA_PTR_FROM_JSON(CustomerNumber, customerNumber_);
          DARABONBA_PTR_FROM_JSON(CustomerNumberEncrypt, customerNumberEncrypt_);
          DARABONBA_PTR_FROM_JSON(CustomerProvince, customerProvince_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Evaluation, evaluation_);
          DARABONBA_PTR_FROM_JSON(FirstCallCname, firstCallCname_);
          DARABONBA_PTR_FROM_JSON(FirstCallCno, firstCallCno_);
          DARABONBA_PTR_FROM_JSON(FirstCallNumber, firstCallNumber_);
          DARABONBA_PTR_FROM_JSON(FirstCallQname, firstCallQname_);
          DARABONBA_PTR_FROM_JSON(FirstCallQno, firstCallQno_);
          DARABONBA_PTR_FROM_JSON(FirstJoinQueueTime, firstJoinQueueTime_);
          DARABONBA_PTR_FROM_JSON(FirstLeaveQueueTime, firstLeaveQueueTime_);
          DARABONBA_PTR_FROM_JSON(FirstQueueDuration, firstQueueDuration_);
          DARABONBA_PTR_FROM_JSON(Hotline, hotline_);
          DARABONBA_PTR_FROM_JSON(HotlineName, hotlineName_);
          DARABONBA_PTR_FROM_JSON(Investigation, investigation_);
          DARABONBA_PTR_FROM_JSON(InvestigationKeys, investigationKeys_);
          DARABONBA_PTR_FROM_JSON(IvrFlows, ivrFlows_);
          DARABONBA_PTR_FROM_JSON(IvrName, ivrName_);
          DARABONBA_PTR_FROM_JSON(MainUniqueId, mainUniqueId_);
          DARABONBA_PTR_FROM_JSON(MarkData, markData_);
          DARABONBA_PTR_FROM_JSON(OnHookSource, onHookSource_);
          DARABONBA_PTR_FROM_JSON(RecordFile, recordFile_);
          DARABONBA_PTR_FROM_JSON(RtcUid, rtcUid_);
          DARABONBA_PTR_FROM_JSON(SayVoiceDuration, sayVoiceDuration_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StatusResult, statusResult_);
          DARABONBA_PTR_FROM_JSON(StatusRobot, statusRobot_);
          DARABONBA_PTR_FROM_JSON(TagNames, tagNames_);
          DARABONBA_PTR_FROM_JSON(TotalDuration, totalDuration_);
          DARABONBA_PTR_FROM_JSON(UserField, userField_);
          DARABONBA_PTR_FROM_JSON(WebrtcCallId, webrtcCallId_);
          DARABONBA_PTR_FROM_JSON(Xnumber, xnumber_);
        };
        CdrIbDetail() = default ;
        CdrIbDetail(const CdrIbDetail &) = default ;
        CdrIbDetail(CdrIbDetail &&) = default ;
        CdrIbDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CdrIbDetail() = default ;
        CdrIbDetail& operator=(const CdrIbDetail &) = default ;
        CdrIbDetail& operator=(CdrIbDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class IvrFlows : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const IvrFlows& obj) { 
            DARABONBA_PTR_TO_JSON(Action, action_);
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(Name, name_);
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
            DARABONBA_PTR_FROM_JSON(Name, name_);
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
        && this->endTime_ == nullptr && this->name_ == nullptr && this->path_ == nullptr && this->pathName_ == nullptr && this->pressKey_ == nullptr
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


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline int64_t getName() const { DARABONBA_PTR_GET_DEFAULT(name_, 0L) };
          inline IvrFlows& setName(int64_t name) { DARABONBA_PTR_SET_VALUE(name_, name) };


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
          shared_ptr<int64_t> name_ {};
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
            DARABONBA_PTR_TO_JSON(InvestigationName, investigationName_);
            DARABONBA_PTR_TO_JSON(Keys, keys_);
            DARABONBA_PTR_TO_JSON(MultiKeys, multiKeys_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          };
          friend void from_json(const Darabonba::Json& j, Investigation& obj) { 
            DARABONBA_PTR_FROM_JSON(ClientName, clientName_);
            DARABONBA_PTR_FROM_JSON(Cno, cno_);
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(InvestigationName, investigationName_);
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
        && this->cno_ == nullptr && this->endTime_ == nullptr && this->investigationName_ == nullptr && this->keys_ == nullptr && this->multiKeys_ == nullptr
        && this->startTime_ == nullptr; };
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


          // investigationName Field Functions 
          bool hasInvestigationName() const { return this->investigationName_ != nullptr;};
          void deleteInvestigationName() { this->investigationName_ = nullptr;};
          inline string getInvestigationName() const { DARABONBA_PTR_GET_DEFAULT(investigationName_, "") };
          inline Investigation& setInvestigationName(string investigationName) { DARABONBA_PTR_SET_VALUE(investigationName_, investigationName) };


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
          // 满意度导航
          shared_ptr<string> investigationName_ {};
          // 按键值
          shared_ptr<int64_t> keys_ {};
          // 多按键值
          shared_ptr<string> multiKeys_ {};
          // 开始时间
          shared_ptr<int64_t> startTime_ {};
        };

        virtual bool empty() const override { return this->agentAnswerInTime_ == nullptr
        && this->bindType_ == nullptr && this->bridgeDuration_ == nullptr && this->bridgeTime_ == nullptr && this->callId_ == nullptr && this->customerCity_ == nullptr
        && this->customerNumber_ == nullptr && this->customerNumberEncrypt_ == nullptr && this->customerProvince_ == nullptr && this->endTime_ == nullptr && this->evaluation_ == nullptr
        && this->firstCallCname_ == nullptr && this->firstCallCno_ == nullptr && this->firstCallNumber_ == nullptr && this->firstCallQname_ == nullptr && this->firstCallQno_ == nullptr
        && this->firstJoinQueueTime_ == nullptr && this->firstLeaveQueueTime_ == nullptr && this->firstQueueDuration_ == nullptr && this->hotline_ == nullptr && this->hotlineName_ == nullptr
        && this->investigation_ == nullptr && this->investigationKeys_ == nullptr && this->ivrFlows_ == nullptr && this->ivrName_ == nullptr && this->mainUniqueId_ == nullptr
        && this->markData_ == nullptr && this->onHookSource_ == nullptr && this->recordFile_ == nullptr && this->rtcUid_ == nullptr && this->sayVoiceDuration_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->statusResult_ == nullptr && this->statusRobot_ == nullptr && this->tagNames_ == nullptr
        && this->totalDuration_ == nullptr && this->userField_ == nullptr && this->webrtcCallId_ == nullptr && this->xnumber_ == nullptr; };
        // agentAnswerInTime Field Functions 
        bool hasAgentAnswerInTime() const { return this->agentAnswerInTime_ != nullptr;};
        void deleteAgentAnswerInTime() { this->agentAnswerInTime_ = nullptr;};
        inline string getAgentAnswerInTime() const { DARABONBA_PTR_GET_DEFAULT(agentAnswerInTime_, "") };
        inline CdrIbDetail& setAgentAnswerInTime(string agentAnswerInTime) { DARABONBA_PTR_SET_VALUE(agentAnswerInTime_, agentAnswerInTime) };


        // bindType Field Functions 
        bool hasBindType() const { return this->bindType_ != nullptr;};
        void deleteBindType() { this->bindType_ = nullptr;};
        inline int64_t getBindType() const { DARABONBA_PTR_GET_DEFAULT(bindType_, 0L) };
        inline CdrIbDetail& setBindType(int64_t bindType) { DARABONBA_PTR_SET_VALUE(bindType_, bindType) };


        // bridgeDuration Field Functions 
        bool hasBridgeDuration() const { return this->bridgeDuration_ != nullptr;};
        void deleteBridgeDuration() { this->bridgeDuration_ = nullptr;};
        inline int64_t getBridgeDuration() const { DARABONBA_PTR_GET_DEFAULT(bridgeDuration_, 0L) };
        inline CdrIbDetail& setBridgeDuration(int64_t bridgeDuration) { DARABONBA_PTR_SET_VALUE(bridgeDuration_, bridgeDuration) };


        // bridgeTime Field Functions 
        bool hasBridgeTime() const { return this->bridgeTime_ != nullptr;};
        void deleteBridgeTime() { this->bridgeTime_ = nullptr;};
        inline int64_t getBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(bridgeTime_, 0L) };
        inline CdrIbDetail& setBridgeTime(int64_t bridgeTime) { DARABONBA_PTR_SET_VALUE(bridgeTime_, bridgeTime) };


        // callId Field Functions 
        bool hasCallId() const { return this->callId_ != nullptr;};
        void deleteCallId() { this->callId_ = nullptr;};
        inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
        inline CdrIbDetail& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


        // customerCity Field Functions 
        bool hasCustomerCity() const { return this->customerCity_ != nullptr;};
        void deleteCustomerCity() { this->customerCity_ = nullptr;};
        inline string getCustomerCity() const { DARABONBA_PTR_GET_DEFAULT(customerCity_, "") };
        inline CdrIbDetail& setCustomerCity(string customerCity) { DARABONBA_PTR_SET_VALUE(customerCity_, customerCity) };


        // customerNumber Field Functions 
        bool hasCustomerNumber() const { return this->customerNumber_ != nullptr;};
        void deleteCustomerNumber() { this->customerNumber_ = nullptr;};
        inline string getCustomerNumber() const { DARABONBA_PTR_GET_DEFAULT(customerNumber_, "") };
        inline CdrIbDetail& setCustomerNumber(string customerNumber) { DARABONBA_PTR_SET_VALUE(customerNumber_, customerNumber) };


        // customerNumberEncrypt Field Functions 
        bool hasCustomerNumberEncrypt() const { return this->customerNumberEncrypt_ != nullptr;};
        void deleteCustomerNumberEncrypt() { this->customerNumberEncrypt_ = nullptr;};
        inline string getCustomerNumberEncrypt() const { DARABONBA_PTR_GET_DEFAULT(customerNumberEncrypt_, "") };
        inline CdrIbDetail& setCustomerNumberEncrypt(string customerNumberEncrypt) { DARABONBA_PTR_SET_VALUE(customerNumberEncrypt_, customerNumberEncrypt) };


        // customerProvince Field Functions 
        bool hasCustomerProvince() const { return this->customerProvince_ != nullptr;};
        void deleteCustomerProvince() { this->customerProvince_ = nullptr;};
        inline string getCustomerProvince() const { DARABONBA_PTR_GET_DEFAULT(customerProvince_, "") };
        inline CdrIbDetail& setCustomerProvince(string customerProvince) { DARABONBA_PTR_SET_VALUE(customerProvince_, customerProvince) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline CdrIbDetail& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // evaluation Field Functions 
        bool hasEvaluation() const { return this->evaluation_ != nullptr;};
        void deleteEvaluation() { this->evaluation_ = nullptr;};
        inline string getEvaluation() const { DARABONBA_PTR_GET_DEFAULT(evaluation_, "") };
        inline CdrIbDetail& setEvaluation(string evaluation) { DARABONBA_PTR_SET_VALUE(evaluation_, evaluation) };


        // firstCallCname Field Functions 
        bool hasFirstCallCname() const { return this->firstCallCname_ != nullptr;};
        void deleteFirstCallCname() { this->firstCallCname_ = nullptr;};
        inline string getFirstCallCname() const { DARABONBA_PTR_GET_DEFAULT(firstCallCname_, "") };
        inline CdrIbDetail& setFirstCallCname(string firstCallCname) { DARABONBA_PTR_SET_VALUE(firstCallCname_, firstCallCname) };


        // firstCallCno Field Functions 
        bool hasFirstCallCno() const { return this->firstCallCno_ != nullptr;};
        void deleteFirstCallCno() { this->firstCallCno_ = nullptr;};
        inline string getFirstCallCno() const { DARABONBA_PTR_GET_DEFAULT(firstCallCno_, "") };
        inline CdrIbDetail& setFirstCallCno(string firstCallCno) { DARABONBA_PTR_SET_VALUE(firstCallCno_, firstCallCno) };


        // firstCallNumber Field Functions 
        bool hasFirstCallNumber() const { return this->firstCallNumber_ != nullptr;};
        void deleteFirstCallNumber() { this->firstCallNumber_ = nullptr;};
        inline string getFirstCallNumber() const { DARABONBA_PTR_GET_DEFAULT(firstCallNumber_, "") };
        inline CdrIbDetail& setFirstCallNumber(string firstCallNumber) { DARABONBA_PTR_SET_VALUE(firstCallNumber_, firstCallNumber) };


        // firstCallQname Field Functions 
        bool hasFirstCallQname() const { return this->firstCallQname_ != nullptr;};
        void deleteFirstCallQname() { this->firstCallQname_ = nullptr;};
        inline string getFirstCallQname() const { DARABONBA_PTR_GET_DEFAULT(firstCallQname_, "") };
        inline CdrIbDetail& setFirstCallQname(string firstCallQname) { DARABONBA_PTR_SET_VALUE(firstCallQname_, firstCallQname) };


        // firstCallQno Field Functions 
        bool hasFirstCallQno() const { return this->firstCallQno_ != nullptr;};
        void deleteFirstCallQno() { this->firstCallQno_ = nullptr;};
        inline string getFirstCallQno() const { DARABONBA_PTR_GET_DEFAULT(firstCallQno_, "") };
        inline CdrIbDetail& setFirstCallQno(string firstCallQno) { DARABONBA_PTR_SET_VALUE(firstCallQno_, firstCallQno) };


        // firstJoinQueueTime Field Functions 
        bool hasFirstJoinQueueTime() const { return this->firstJoinQueueTime_ != nullptr;};
        void deleteFirstJoinQueueTime() { this->firstJoinQueueTime_ = nullptr;};
        inline int64_t getFirstJoinQueueTime() const { DARABONBA_PTR_GET_DEFAULT(firstJoinQueueTime_, 0L) };
        inline CdrIbDetail& setFirstJoinQueueTime(int64_t firstJoinQueueTime) { DARABONBA_PTR_SET_VALUE(firstJoinQueueTime_, firstJoinQueueTime) };


        // firstLeaveQueueTime Field Functions 
        bool hasFirstLeaveQueueTime() const { return this->firstLeaveQueueTime_ != nullptr;};
        void deleteFirstLeaveQueueTime() { this->firstLeaveQueueTime_ = nullptr;};
        inline int64_t getFirstLeaveQueueTime() const { DARABONBA_PTR_GET_DEFAULT(firstLeaveQueueTime_, 0L) };
        inline CdrIbDetail& setFirstLeaveQueueTime(int64_t firstLeaveQueueTime) { DARABONBA_PTR_SET_VALUE(firstLeaveQueueTime_, firstLeaveQueueTime) };


        // firstQueueDuration Field Functions 
        bool hasFirstQueueDuration() const { return this->firstQueueDuration_ != nullptr;};
        void deleteFirstQueueDuration() { this->firstQueueDuration_ = nullptr;};
        inline int64_t getFirstQueueDuration() const { DARABONBA_PTR_GET_DEFAULT(firstQueueDuration_, 0L) };
        inline CdrIbDetail& setFirstQueueDuration(int64_t firstQueueDuration) { DARABONBA_PTR_SET_VALUE(firstQueueDuration_, firstQueueDuration) };


        // hotline Field Functions 
        bool hasHotline() const { return this->hotline_ != nullptr;};
        void deleteHotline() { this->hotline_ = nullptr;};
        inline string getHotline() const { DARABONBA_PTR_GET_DEFAULT(hotline_, "") };
        inline CdrIbDetail& setHotline(string hotline) { DARABONBA_PTR_SET_VALUE(hotline_, hotline) };


        // hotlineName Field Functions 
        bool hasHotlineName() const { return this->hotlineName_ != nullptr;};
        void deleteHotlineName() { this->hotlineName_ = nullptr;};
        inline string getHotlineName() const { DARABONBA_PTR_GET_DEFAULT(hotlineName_, "") };
        inline CdrIbDetail& setHotlineName(string hotlineName) { DARABONBA_PTR_SET_VALUE(hotlineName_, hotlineName) };


        // investigation Field Functions 
        bool hasInvestigation() const { return this->investigation_ != nullptr;};
        void deleteInvestigation() { this->investigation_ = nullptr;};
        inline const CdrIbDetail::Investigation & getInvestigation() const { DARABONBA_PTR_GET_CONST(investigation_, CdrIbDetail::Investigation) };
        inline CdrIbDetail::Investigation getInvestigation() { DARABONBA_PTR_GET(investigation_, CdrIbDetail::Investigation) };
        inline CdrIbDetail& setInvestigation(const CdrIbDetail::Investigation & investigation) { DARABONBA_PTR_SET_VALUE(investigation_, investigation) };
        inline CdrIbDetail& setInvestigation(CdrIbDetail::Investigation && investigation) { DARABONBA_PTR_SET_RVALUE(investigation_, investigation) };


        // investigationKeys Field Functions 
        bool hasInvestigationKeys() const { return this->investigationKeys_ != nullptr;};
        void deleteInvestigationKeys() { this->investigationKeys_ = nullptr;};
        inline int64_t getInvestigationKeys() const { DARABONBA_PTR_GET_DEFAULT(investigationKeys_, 0L) };
        inline CdrIbDetail& setInvestigationKeys(int64_t investigationKeys) { DARABONBA_PTR_SET_VALUE(investigationKeys_, investigationKeys) };


        // ivrFlows Field Functions 
        bool hasIvrFlows() const { return this->ivrFlows_ != nullptr;};
        void deleteIvrFlows() { this->ivrFlows_ = nullptr;};
        inline const vector<CdrIbDetail::IvrFlows> & getIvrFlows() const { DARABONBA_PTR_GET_CONST(ivrFlows_, vector<CdrIbDetail::IvrFlows>) };
        inline vector<CdrIbDetail::IvrFlows> getIvrFlows() { DARABONBA_PTR_GET(ivrFlows_, vector<CdrIbDetail::IvrFlows>) };
        inline CdrIbDetail& setIvrFlows(const vector<CdrIbDetail::IvrFlows> & ivrFlows) { DARABONBA_PTR_SET_VALUE(ivrFlows_, ivrFlows) };
        inline CdrIbDetail& setIvrFlows(vector<CdrIbDetail::IvrFlows> && ivrFlows) { DARABONBA_PTR_SET_RVALUE(ivrFlows_, ivrFlows) };


        // ivrName Field Functions 
        bool hasIvrName() const { return this->ivrName_ != nullptr;};
        void deleteIvrName() { this->ivrName_ = nullptr;};
        inline string getIvrName() const { DARABONBA_PTR_GET_DEFAULT(ivrName_, "") };
        inline CdrIbDetail& setIvrName(string ivrName) { DARABONBA_PTR_SET_VALUE(ivrName_, ivrName) };


        // mainUniqueId Field Functions 
        bool hasMainUniqueId() const { return this->mainUniqueId_ != nullptr;};
        void deleteMainUniqueId() { this->mainUniqueId_ = nullptr;};
        inline string getMainUniqueId() const { DARABONBA_PTR_GET_DEFAULT(mainUniqueId_, "") };
        inline CdrIbDetail& setMainUniqueId(string mainUniqueId) { DARABONBA_PTR_SET_VALUE(mainUniqueId_, mainUniqueId) };


        // markData Field Functions 
        bool hasMarkData() const { return this->markData_ != nullptr;};
        void deleteMarkData() { this->markData_ = nullptr;};
        inline string getMarkData() const { DARABONBA_PTR_GET_DEFAULT(markData_, "") };
        inline CdrIbDetail& setMarkData(string markData) { DARABONBA_PTR_SET_VALUE(markData_, markData) };


        // onHookSource Field Functions 
        bool hasOnHookSource() const { return this->onHookSource_ != nullptr;};
        void deleteOnHookSource() { this->onHookSource_ = nullptr;};
        inline string getOnHookSource() const { DARABONBA_PTR_GET_DEFAULT(onHookSource_, "") };
        inline CdrIbDetail& setOnHookSource(string onHookSource) { DARABONBA_PTR_SET_VALUE(onHookSource_, onHookSource) };


        // recordFile Field Functions 
        bool hasRecordFile() const { return this->recordFile_ != nullptr;};
        void deleteRecordFile() { this->recordFile_ = nullptr;};
        inline string getRecordFile() const { DARABONBA_PTR_GET_DEFAULT(recordFile_, "") };
        inline CdrIbDetail& setRecordFile(string recordFile) { DARABONBA_PTR_SET_VALUE(recordFile_, recordFile) };


        // rtcUid Field Functions 
        bool hasRtcUid() const { return this->rtcUid_ != nullptr;};
        void deleteRtcUid() { this->rtcUid_ = nullptr;};
        inline string getRtcUid() const { DARABONBA_PTR_GET_DEFAULT(rtcUid_, "") };
        inline CdrIbDetail& setRtcUid(string rtcUid) { DARABONBA_PTR_SET_VALUE(rtcUid_, rtcUid) };


        // sayVoiceDuration Field Functions 
        bool hasSayVoiceDuration() const { return this->sayVoiceDuration_ != nullptr;};
        void deleteSayVoiceDuration() { this->sayVoiceDuration_ = nullptr;};
        inline int64_t getSayVoiceDuration() const { DARABONBA_PTR_GET_DEFAULT(sayVoiceDuration_, 0L) };
        inline CdrIbDetail& setSayVoiceDuration(int64_t sayVoiceDuration) { DARABONBA_PTR_SET_VALUE(sayVoiceDuration_, sayVoiceDuration) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline CdrIbDetail& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline CdrIbDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusResult Field Functions 
        bool hasStatusResult() const { return this->statusResult_ != nullptr;};
        void deleteStatusResult() { this->statusResult_ = nullptr;};
        inline string getStatusResult() const { DARABONBA_PTR_GET_DEFAULT(statusResult_, "") };
        inline CdrIbDetail& setStatusResult(string statusResult) { DARABONBA_PTR_SET_VALUE(statusResult_, statusResult) };


        // statusRobot Field Functions 
        bool hasStatusRobot() const { return this->statusRobot_ != nullptr;};
        void deleteStatusRobot() { this->statusRobot_ = nullptr;};
        inline string getStatusRobot() const { DARABONBA_PTR_GET_DEFAULT(statusRobot_, "") };
        inline CdrIbDetail& setStatusRobot(string statusRobot) { DARABONBA_PTR_SET_VALUE(statusRobot_, statusRobot) };


        // tagNames Field Functions 
        bool hasTagNames() const { return this->tagNames_ != nullptr;};
        void deleteTagNames() { this->tagNames_ = nullptr;};
        inline const vector<string> & getTagNames() const { DARABONBA_PTR_GET_CONST(tagNames_, vector<string>) };
        inline vector<string> getTagNames() { DARABONBA_PTR_GET(tagNames_, vector<string>) };
        inline CdrIbDetail& setTagNames(const vector<string> & tagNames) { DARABONBA_PTR_SET_VALUE(tagNames_, tagNames) };
        inline CdrIbDetail& setTagNames(vector<string> && tagNames) { DARABONBA_PTR_SET_RVALUE(tagNames_, tagNames) };


        // totalDuration Field Functions 
        bool hasTotalDuration() const { return this->totalDuration_ != nullptr;};
        void deleteTotalDuration() { this->totalDuration_ = nullptr;};
        inline int64_t getTotalDuration() const { DARABONBA_PTR_GET_DEFAULT(totalDuration_, 0L) };
        inline CdrIbDetail& setTotalDuration(int64_t totalDuration) { DARABONBA_PTR_SET_VALUE(totalDuration_, totalDuration) };


        // userField Field Functions 
        bool hasUserField() const { return this->userField_ != nullptr;};
        void deleteUserField() { this->userField_ = nullptr;};
        inline string getUserField() const { DARABONBA_PTR_GET_DEFAULT(userField_, "") };
        inline CdrIbDetail& setUserField(string userField) { DARABONBA_PTR_SET_VALUE(userField_, userField) };


        // webrtcCallId Field Functions 
        bool hasWebrtcCallId() const { return this->webrtcCallId_ != nullptr;};
        void deleteWebrtcCallId() { this->webrtcCallId_ = nullptr;};
        inline string getWebrtcCallId() const { DARABONBA_PTR_GET_DEFAULT(webrtcCallId_, "") };
        inline CdrIbDetail& setWebrtcCallId(string webrtcCallId) { DARABONBA_PTR_SET_VALUE(webrtcCallId_, webrtcCallId) };


        // xnumber Field Functions 
        bool hasXnumber() const { return this->xnumber_ != nullptr;};
        void deleteXnumber() { this->xnumber_ = nullptr;};
        inline string getXnumber() const { DARABONBA_PTR_GET_DEFAULT(xnumber_, "") };
        inline CdrIbDetail& setXnumber(string xnumber) { DARABONBA_PTR_SET_VALUE(xnumber_, xnumber) };


      protected:
        // 首次及时应答
        shared_ptr<string> agentAnswerInTime_ {};
        // 接听设备
        shared_ptr<int64_t> bindType_ {};
        // 通话时长
        shared_ptr<int64_t> bridgeDuration_ {};
        // 首次接听时间
        shared_ptr<int64_t> bridgeTime_ {};
        // CallID
        shared_ptr<string> callId_ {};
        // 客户号码城市
        shared_ptr<string> customerCity_ {};
        // 客户号码
        shared_ptr<string> customerNumber_ {};
        // 客户号码加密串
        shared_ptr<string> customerNumberEncrypt_ {};
        // 客户号码省份
        shared_ptr<string> customerProvince_ {};
        // 结束时间
        shared_ptr<int64_t> endTime_ {};
        // 是否邀评
        shared_ptr<string> evaluation_ {};
        // 首呼座席姓名
        shared_ptr<string> firstCallCname_ {};
        // 首呼座席工号
        shared_ptr<string> firstCallCno_ {};
        // 首呼座席电话
        shared_ptr<string> firstCallNumber_ {};
        // 首呼队列名称
        shared_ptr<string> firstCallQname_ {};
        // 首呼队列号
        shared_ptr<string> firstCallQno_ {};
        // 首次进入队列时间
        shared_ptr<int64_t> firstJoinQueueTime_ {};
        // 首次离开队列时间
        shared_ptr<int64_t> firstLeaveQueueTime_ {};
        // 首呼队列排队时长
        shared_ptr<int64_t> firstQueueDuration_ {};
        // 热线号码
        shared_ptr<string> hotline_ {};
        // 热线别名
        shared_ptr<string> hotlineName_ {};
        // [满意度记录] #满意度记录
        shared_ptr<CdrIbDetail::Investigation> investigation_ {};
        // 满意度评价
        shared_ptr<int64_t> investigationKeys_ {};
        // [路由和IVR] #路由和IVR
        shared_ptr<vector<CdrIbDetail::IvrFlows>> ivrFlows_ {};
        // IVR名称
        shared_ptr<string> ivrName_ {};
        // 通话ID
        shared_ptr<string> mainUniqueId_ {};
        // 备注
        shared_ptr<string> markData_ {};
        // 挂断方
        shared_ptr<string> onHookSource_ {};
        // 录音文件
        shared_ptr<string> recordFile_ {};
        // rtcUid
        shared_ptr<string> rtcUid_ {};
        // 语音播报时长
        shared_ptr<int64_t> sayVoiceDuration_ {};
        // 开始时间
        shared_ptr<int64_t> startTime_ {};
        // 接听状态
        shared_ptr<string> status_ {};
        // 呼叫结果
        shared_ptr<string> statusResult_ {};
        // 机器人接听状态
        shared_ptr<string> statusRobot_ {};
        // 通话标签
        shared_ptr<vector<string>> tagNames_ {};
        // 总时长
        shared_ptr<int64_t> totalDuration_ {};
        // 自定义字段
        shared_ptr<string> userField_ {};
        // WebRTCCallID
        shared_ptr<string> webrtcCallId_ {};
        // 虚拟号码
        shared_ptr<string> xnumber_ {};
      };

      virtual bool empty() const override { return this->cdrIbDetail_ == nullptr
        && this->clinkRequestId_ == nullptr; };
      // cdrIbDetail Field Functions 
      bool hasCdrIbDetail() const { return this->cdrIbDetail_ != nullptr;};
      void deleteCdrIbDetail() { this->cdrIbDetail_ = nullptr;};
      inline const vector<Data::CdrIbDetail> & getCdrIbDetail() const { DARABONBA_PTR_GET_CONST(cdrIbDetail_, vector<Data::CdrIbDetail>) };
      inline vector<Data::CdrIbDetail> getCdrIbDetail() { DARABONBA_PTR_GET(cdrIbDetail_, vector<Data::CdrIbDetail>) };
      inline Data& setCdrIbDetail(const vector<Data::CdrIbDetail> & cdrIbDetail) { DARABONBA_PTR_SET_VALUE(cdrIbDetail_, cdrIbDetail) };
      inline Data& setCdrIbDetail(vector<Data::CdrIbDetail> && cdrIbDetail) { DARABONBA_PTR_SET_RVALUE(cdrIbDetail_, cdrIbDetail) };


      // clinkRequestId Field Functions 
      bool hasClinkRequestId() const { return this->clinkRequestId_ != nullptr;};
      void deleteClinkRequestId() { this->clinkRequestId_ = nullptr;};
      inline string getClinkRequestId() const { DARABONBA_PTR_GET_DEFAULT(clinkRequestId_, "") };
      inline Data& setClinkRequestId(string clinkRequestId) { DARABONBA_PTR_SET_VALUE(clinkRequestId_, clinkRequestId) };


    protected:
      // [客户来电记录详情] #客户来电记录详情
      shared_ptr<vector<Data::CdrIbDetail>> cdrIbDetail_ {};
      // 请求 id
      shared_ptr<string> clinkRequestId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ClinkDetailCdrIbResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ClinkDetailCdrIbResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ClinkDetailCdrIbResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ClinkDetailCdrIbResponseBody::Data) };
    inline ClinkDetailCdrIbResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ClinkDetailCdrIbResponseBody::Data) };
    inline ClinkDetailCdrIbResponseBody& setData(const ClinkDetailCdrIbResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ClinkDetailCdrIbResponseBody& setData(ClinkDetailCdrIbResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ClinkDetailCdrIbResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClinkDetailCdrIbResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<ClinkDetailCdrIbResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
