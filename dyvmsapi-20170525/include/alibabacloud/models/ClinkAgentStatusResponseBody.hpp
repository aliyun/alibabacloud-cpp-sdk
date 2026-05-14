// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKAGENTSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLINKAGENTSTATUSRESPONSEBODY_HPP_
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
  class ClinkAgentStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkAgentStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkAgentStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ClinkAgentStatusResponseBody() = default ;
    ClinkAgentStatusResponseBody(const ClinkAgentStatusResponseBody &) = default ;
    ClinkAgentStatusResponseBody(ClinkAgentStatusResponseBody &&) = default ;
    ClinkAgentStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkAgentStatusResponseBody() = default ;
    ClinkAgentStatusResponseBody& operator=(const ClinkAgentStatusResponseBody &) = default ;
    ClinkAgentStatusResponseBody& operator=(ClinkAgentStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentStatus, agentStatus_);
        DARABONBA_PTR_TO_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentStatus, agentStatus_);
        DARABONBA_PTR_FROM_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class AgentStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AgentStatus& obj) { 
          DARABONBA_PTR_TO_JSON(AgentStatus, agentStatus_);
          DARABONBA_PTR_TO_JSON(AgentStatusDetail, agentStatusDetail_);
          DARABONBA_PTR_TO_JSON(BindTel, bindTel_);
          DARABONBA_PTR_TO_JSON(BindType, bindType_);
          DARABONBA_PTR_TO_JSON(BridgeCallCount, bridgeCallCount_);
          DARABONBA_PTR_TO_JSON(ClientName, clientName_);
          DARABONBA_PTR_TO_JSON(Cno, cno_);
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(CustomerNumber, customerNumber_);
          DARABONBA_PTR_TO_JSON(CustomerNumberEncrypt, customerNumberEncrypt_);
          DARABONBA_PTR_TO_JSON(CustomerStatus, customerStatus_);
          DARABONBA_PTR_TO_JSON(IbAnsweredRingingDuration, ibAnsweredRingingDuration_);
          DARABONBA_PTR_TO_JSON(IbClientAnsweredCount, ibClientAnsweredCount_);
          DARABONBA_PTR_TO_JSON(IbClientAnsweredRate, ibClientAnsweredRate_);
          DARABONBA_PTR_TO_JSON(IbClientTotalCount, ibClientTotalCount_);
          DARABONBA_PTR_TO_JSON(IbClientUnansweredCount, ibClientUnansweredCount_);
          DARABONBA_PTR_TO_JSON(IdleTimeOut, idleTimeOut_);
          DARABONBA_PTR_TO_JSON(IncomingCallCount, incomingCallCount_);
          DARABONBA_PTR_TO_JSON(LoginDuration, loginDuration_);
          DARABONBA_PTR_TO_JSON(ObAvgBridgeDuration, obAvgBridgeDuration_);
          DARABONBA_PTR_TO_JSON(ObBridgeDuration, obBridgeDuration_);
          DARABONBA_PTR_TO_JSON(ObBridgeRate, obBridgeRate_);
          DARABONBA_PTR_TO_JSON(ObCallCount, obCallCount_);
          DARABONBA_PTR_TO_JSON(ObClientUnbridgeCount, obClientUnbridgeCount_);
          DARABONBA_PTR_TO_JSON(ObCustomerBridgeCount, obCustomerBridgeCount_);
          DARABONBA_PTR_TO_JSON(ObCustomerUnbridgeCount, obCustomerUnbridgeCount_);
          DARABONBA_PTR_TO_JSON(PauseDescription, pauseDescription_);
          DARABONBA_PTR_TO_JSON(PauseType, pauseType_);
          DARABONBA_PTR_TO_JSON(PredictToCall, predictToCall_);
          DARABONBA_PTR_TO_JSON(QueueIncomingCallCount, queueIncomingCallCount_);
          DARABONBA_PTR_TO_JSON(QueueInfo, queueInfo_);
          DARABONBA_PTR_TO_JSON(Queues, queues_);
          DARABONBA_PTR_TO_JSON(QuickUnlinkCount, quickUnlinkCount_);
          DARABONBA_PTR_TO_JSON(StateDuration, stateDuration_);
          DARABONBA_PTR_TO_JSON(TagNames, tagNames_);
        };
        friend void from_json(const Darabonba::Json& j, AgentStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentStatus, agentStatus_);
          DARABONBA_PTR_FROM_JSON(AgentStatusDetail, agentStatusDetail_);
          DARABONBA_PTR_FROM_JSON(BindTel, bindTel_);
          DARABONBA_PTR_FROM_JSON(BindType, bindType_);
          DARABONBA_PTR_FROM_JSON(BridgeCallCount, bridgeCallCount_);
          DARABONBA_PTR_FROM_JSON(ClientName, clientName_);
          DARABONBA_PTR_FROM_JSON(Cno, cno_);
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(CustomerNumber, customerNumber_);
          DARABONBA_PTR_FROM_JSON(CustomerNumberEncrypt, customerNumberEncrypt_);
          DARABONBA_PTR_FROM_JSON(CustomerStatus, customerStatus_);
          DARABONBA_PTR_FROM_JSON(IbAnsweredRingingDuration, ibAnsweredRingingDuration_);
          DARABONBA_PTR_FROM_JSON(IbClientAnsweredCount, ibClientAnsweredCount_);
          DARABONBA_PTR_FROM_JSON(IbClientAnsweredRate, ibClientAnsweredRate_);
          DARABONBA_PTR_FROM_JSON(IbClientTotalCount, ibClientTotalCount_);
          DARABONBA_PTR_FROM_JSON(IbClientUnansweredCount, ibClientUnansweredCount_);
          DARABONBA_PTR_FROM_JSON(IdleTimeOut, idleTimeOut_);
          DARABONBA_PTR_FROM_JSON(IncomingCallCount, incomingCallCount_);
          DARABONBA_PTR_FROM_JSON(LoginDuration, loginDuration_);
          DARABONBA_PTR_FROM_JSON(ObAvgBridgeDuration, obAvgBridgeDuration_);
          DARABONBA_PTR_FROM_JSON(ObBridgeDuration, obBridgeDuration_);
          DARABONBA_PTR_FROM_JSON(ObBridgeRate, obBridgeRate_);
          DARABONBA_PTR_FROM_JSON(ObCallCount, obCallCount_);
          DARABONBA_PTR_FROM_JSON(ObClientUnbridgeCount, obClientUnbridgeCount_);
          DARABONBA_PTR_FROM_JSON(ObCustomerBridgeCount, obCustomerBridgeCount_);
          DARABONBA_PTR_FROM_JSON(ObCustomerUnbridgeCount, obCustomerUnbridgeCount_);
          DARABONBA_PTR_FROM_JSON(PauseDescription, pauseDescription_);
          DARABONBA_PTR_FROM_JSON(PauseType, pauseType_);
          DARABONBA_PTR_FROM_JSON(PredictToCall, predictToCall_);
          DARABONBA_PTR_FROM_JSON(QueueIncomingCallCount, queueIncomingCallCount_);
          DARABONBA_PTR_FROM_JSON(QueueInfo, queueInfo_);
          DARABONBA_PTR_FROM_JSON(Queues, queues_);
          DARABONBA_PTR_FROM_JSON(QuickUnlinkCount, quickUnlinkCount_);
          DARABONBA_PTR_FROM_JSON(StateDuration, stateDuration_);
          DARABONBA_PTR_FROM_JSON(TagNames, tagNames_);
        };
        AgentStatus() = default ;
        AgentStatus(const AgentStatus &) = default ;
        AgentStatus(AgentStatus &&) = default ;
        AgentStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AgentStatus() = default ;
        AgentStatus& operator=(const AgentStatus &) = default ;
        AgentStatus& operator=(AgentStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentStatus_ == nullptr
        && this->agentStatusDetail_ == nullptr && this->bindTel_ == nullptr && this->bindType_ == nullptr && this->bridgeCallCount_ == nullptr && this->clientName_ == nullptr
        && this->cno_ == nullptr && this->code_ == nullptr && this->customerNumber_ == nullptr && this->customerNumberEncrypt_ == nullptr && this->customerStatus_ == nullptr
        && this->ibAnsweredRingingDuration_ == nullptr && this->ibClientAnsweredCount_ == nullptr && this->ibClientAnsweredRate_ == nullptr && this->ibClientTotalCount_ == nullptr && this->ibClientUnansweredCount_ == nullptr
        && this->idleTimeOut_ == nullptr && this->incomingCallCount_ == nullptr && this->loginDuration_ == nullptr && this->obAvgBridgeDuration_ == nullptr && this->obBridgeDuration_ == nullptr
        && this->obBridgeRate_ == nullptr && this->obCallCount_ == nullptr && this->obClientUnbridgeCount_ == nullptr && this->obCustomerBridgeCount_ == nullptr && this->obCustomerUnbridgeCount_ == nullptr
        && this->pauseDescription_ == nullptr && this->pauseType_ == nullptr && this->predictToCall_ == nullptr && this->queueIncomingCallCount_ == nullptr && this->queueInfo_ == nullptr
        && this->queues_ == nullptr && this->quickUnlinkCount_ == nullptr && this->stateDuration_ == nullptr && this->tagNames_ == nullptr; };
        // agentStatus Field Functions 
        bool hasAgentStatus() const { return this->agentStatus_ != nullptr;};
        void deleteAgentStatus() { this->agentStatus_ = nullptr;};
        inline string getAgentStatus() const { DARABONBA_PTR_GET_DEFAULT(agentStatus_, "") };
        inline AgentStatus& setAgentStatus(string agentStatus) { DARABONBA_PTR_SET_VALUE(agentStatus_, agentStatus) };


        // agentStatusDetail Field Functions 
        bool hasAgentStatusDetail() const { return this->agentStatusDetail_ != nullptr;};
        void deleteAgentStatusDetail() { this->agentStatusDetail_ = nullptr;};
        inline string getAgentStatusDetail() const { DARABONBA_PTR_GET_DEFAULT(agentStatusDetail_, "") };
        inline AgentStatus& setAgentStatusDetail(string agentStatusDetail) { DARABONBA_PTR_SET_VALUE(agentStatusDetail_, agentStatusDetail) };


        // bindTel Field Functions 
        bool hasBindTel() const { return this->bindTel_ != nullptr;};
        void deleteBindTel() { this->bindTel_ = nullptr;};
        inline string getBindTel() const { DARABONBA_PTR_GET_DEFAULT(bindTel_, "") };
        inline AgentStatus& setBindTel(string bindTel) { DARABONBA_PTR_SET_VALUE(bindTel_, bindTel) };


        // bindType Field Functions 
        bool hasBindType() const { return this->bindType_ != nullptr;};
        void deleteBindType() { this->bindType_ = nullptr;};
        inline int64_t getBindType() const { DARABONBA_PTR_GET_DEFAULT(bindType_, 0L) };
        inline AgentStatus& setBindType(int64_t bindType) { DARABONBA_PTR_SET_VALUE(bindType_, bindType) };


        // bridgeCallCount Field Functions 
        bool hasBridgeCallCount() const { return this->bridgeCallCount_ != nullptr;};
        void deleteBridgeCallCount() { this->bridgeCallCount_ = nullptr;};
        inline int64_t getBridgeCallCount() const { DARABONBA_PTR_GET_DEFAULT(bridgeCallCount_, 0L) };
        inline AgentStatus& setBridgeCallCount(int64_t bridgeCallCount) { DARABONBA_PTR_SET_VALUE(bridgeCallCount_, bridgeCallCount) };


        // clientName Field Functions 
        bool hasClientName() const { return this->clientName_ != nullptr;};
        void deleteClientName() { this->clientName_ = nullptr;};
        inline string getClientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
        inline AgentStatus& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


        // cno Field Functions 
        bool hasCno() const { return this->cno_ != nullptr;};
        void deleteCno() { this->cno_ = nullptr;};
        inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
        inline AgentStatus& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline AgentStatus& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // customerNumber Field Functions 
        bool hasCustomerNumber() const { return this->customerNumber_ != nullptr;};
        void deleteCustomerNumber() { this->customerNumber_ = nullptr;};
        inline string getCustomerNumber() const { DARABONBA_PTR_GET_DEFAULT(customerNumber_, "") };
        inline AgentStatus& setCustomerNumber(string customerNumber) { DARABONBA_PTR_SET_VALUE(customerNumber_, customerNumber) };


        // customerNumberEncrypt Field Functions 
        bool hasCustomerNumberEncrypt() const { return this->customerNumberEncrypt_ != nullptr;};
        void deleteCustomerNumberEncrypt() { this->customerNumberEncrypt_ = nullptr;};
        inline string getCustomerNumberEncrypt() const { DARABONBA_PTR_GET_DEFAULT(customerNumberEncrypt_, "") };
        inline AgentStatus& setCustomerNumberEncrypt(string customerNumberEncrypt) { DARABONBA_PTR_SET_VALUE(customerNumberEncrypt_, customerNumberEncrypt) };


        // customerStatus Field Functions 
        bool hasCustomerStatus() const { return this->customerStatus_ != nullptr;};
        void deleteCustomerStatus() { this->customerStatus_ = nullptr;};
        inline string getCustomerStatus() const { DARABONBA_PTR_GET_DEFAULT(customerStatus_, "") };
        inline AgentStatus& setCustomerStatus(string customerStatus) { DARABONBA_PTR_SET_VALUE(customerStatus_, customerStatus) };


        // ibAnsweredRingingDuration Field Functions 
        bool hasIbAnsweredRingingDuration() const { return this->ibAnsweredRingingDuration_ != nullptr;};
        void deleteIbAnsweredRingingDuration() { this->ibAnsweredRingingDuration_ = nullptr;};
        inline int64_t getIbAnsweredRingingDuration() const { DARABONBA_PTR_GET_DEFAULT(ibAnsweredRingingDuration_, 0L) };
        inline AgentStatus& setIbAnsweredRingingDuration(int64_t ibAnsweredRingingDuration) { DARABONBA_PTR_SET_VALUE(ibAnsweredRingingDuration_, ibAnsweredRingingDuration) };


        // ibClientAnsweredCount Field Functions 
        bool hasIbClientAnsweredCount() const { return this->ibClientAnsweredCount_ != nullptr;};
        void deleteIbClientAnsweredCount() { this->ibClientAnsweredCount_ = nullptr;};
        inline int64_t getIbClientAnsweredCount() const { DARABONBA_PTR_GET_DEFAULT(ibClientAnsweredCount_, 0L) };
        inline AgentStatus& setIbClientAnsweredCount(int64_t ibClientAnsweredCount) { DARABONBA_PTR_SET_VALUE(ibClientAnsweredCount_, ibClientAnsweredCount) };


        // ibClientAnsweredRate Field Functions 
        bool hasIbClientAnsweredRate() const { return this->ibClientAnsweredRate_ != nullptr;};
        void deleteIbClientAnsweredRate() { this->ibClientAnsweredRate_ = nullptr;};
        inline double getIbClientAnsweredRate() const { DARABONBA_PTR_GET_DEFAULT(ibClientAnsweredRate_, 0.0) };
        inline AgentStatus& setIbClientAnsweredRate(double ibClientAnsweredRate) { DARABONBA_PTR_SET_VALUE(ibClientAnsweredRate_, ibClientAnsweredRate) };


        // ibClientTotalCount Field Functions 
        bool hasIbClientTotalCount() const { return this->ibClientTotalCount_ != nullptr;};
        void deleteIbClientTotalCount() { this->ibClientTotalCount_ = nullptr;};
        inline int64_t getIbClientTotalCount() const { DARABONBA_PTR_GET_DEFAULT(ibClientTotalCount_, 0L) };
        inline AgentStatus& setIbClientTotalCount(int64_t ibClientTotalCount) { DARABONBA_PTR_SET_VALUE(ibClientTotalCount_, ibClientTotalCount) };


        // ibClientUnansweredCount Field Functions 
        bool hasIbClientUnansweredCount() const { return this->ibClientUnansweredCount_ != nullptr;};
        void deleteIbClientUnansweredCount() { this->ibClientUnansweredCount_ = nullptr;};
        inline int64_t getIbClientUnansweredCount() const { DARABONBA_PTR_GET_DEFAULT(ibClientUnansweredCount_, 0L) };
        inline AgentStatus& setIbClientUnansweredCount(int64_t ibClientUnansweredCount) { DARABONBA_PTR_SET_VALUE(ibClientUnansweredCount_, ibClientUnansweredCount) };


        // idleTimeOut Field Functions 
        bool hasIdleTimeOut() const { return this->idleTimeOut_ != nullptr;};
        void deleteIdleTimeOut() { this->idleTimeOut_ = nullptr;};
        inline int64_t getIdleTimeOut() const { DARABONBA_PTR_GET_DEFAULT(idleTimeOut_, 0L) };
        inline AgentStatus& setIdleTimeOut(int64_t idleTimeOut) { DARABONBA_PTR_SET_VALUE(idleTimeOut_, idleTimeOut) };


        // incomingCallCount Field Functions 
        bool hasIncomingCallCount() const { return this->incomingCallCount_ != nullptr;};
        void deleteIncomingCallCount() { this->incomingCallCount_ = nullptr;};
        inline int64_t getIncomingCallCount() const { DARABONBA_PTR_GET_DEFAULT(incomingCallCount_, 0L) };
        inline AgentStatus& setIncomingCallCount(int64_t incomingCallCount) { DARABONBA_PTR_SET_VALUE(incomingCallCount_, incomingCallCount) };


        // loginDuration Field Functions 
        bool hasLoginDuration() const { return this->loginDuration_ != nullptr;};
        void deleteLoginDuration() { this->loginDuration_ = nullptr;};
        inline int64_t getLoginDuration() const { DARABONBA_PTR_GET_DEFAULT(loginDuration_, 0L) };
        inline AgentStatus& setLoginDuration(int64_t loginDuration) { DARABONBA_PTR_SET_VALUE(loginDuration_, loginDuration) };


        // obAvgBridgeDuration Field Functions 
        bool hasObAvgBridgeDuration() const { return this->obAvgBridgeDuration_ != nullptr;};
        void deleteObAvgBridgeDuration() { this->obAvgBridgeDuration_ = nullptr;};
        inline int64_t getObAvgBridgeDuration() const { DARABONBA_PTR_GET_DEFAULT(obAvgBridgeDuration_, 0L) };
        inline AgentStatus& setObAvgBridgeDuration(int64_t obAvgBridgeDuration) { DARABONBA_PTR_SET_VALUE(obAvgBridgeDuration_, obAvgBridgeDuration) };


        // obBridgeDuration Field Functions 
        bool hasObBridgeDuration() const { return this->obBridgeDuration_ != nullptr;};
        void deleteObBridgeDuration() { this->obBridgeDuration_ = nullptr;};
        inline int64_t getObBridgeDuration() const { DARABONBA_PTR_GET_DEFAULT(obBridgeDuration_, 0L) };
        inline AgentStatus& setObBridgeDuration(int64_t obBridgeDuration) { DARABONBA_PTR_SET_VALUE(obBridgeDuration_, obBridgeDuration) };


        // obBridgeRate Field Functions 
        bool hasObBridgeRate() const { return this->obBridgeRate_ != nullptr;};
        void deleteObBridgeRate() { this->obBridgeRate_ = nullptr;};
        inline double getObBridgeRate() const { DARABONBA_PTR_GET_DEFAULT(obBridgeRate_, 0.0) };
        inline AgentStatus& setObBridgeRate(double obBridgeRate) { DARABONBA_PTR_SET_VALUE(obBridgeRate_, obBridgeRate) };


        // obCallCount Field Functions 
        bool hasObCallCount() const { return this->obCallCount_ != nullptr;};
        void deleteObCallCount() { this->obCallCount_ = nullptr;};
        inline int64_t getObCallCount() const { DARABONBA_PTR_GET_DEFAULT(obCallCount_, 0L) };
        inline AgentStatus& setObCallCount(int64_t obCallCount) { DARABONBA_PTR_SET_VALUE(obCallCount_, obCallCount) };


        // obClientUnbridgeCount Field Functions 
        bool hasObClientUnbridgeCount() const { return this->obClientUnbridgeCount_ != nullptr;};
        void deleteObClientUnbridgeCount() { this->obClientUnbridgeCount_ = nullptr;};
        inline int64_t getObClientUnbridgeCount() const { DARABONBA_PTR_GET_DEFAULT(obClientUnbridgeCount_, 0L) };
        inline AgentStatus& setObClientUnbridgeCount(int64_t obClientUnbridgeCount) { DARABONBA_PTR_SET_VALUE(obClientUnbridgeCount_, obClientUnbridgeCount) };


        // obCustomerBridgeCount Field Functions 
        bool hasObCustomerBridgeCount() const { return this->obCustomerBridgeCount_ != nullptr;};
        void deleteObCustomerBridgeCount() { this->obCustomerBridgeCount_ = nullptr;};
        inline int64_t getObCustomerBridgeCount() const { DARABONBA_PTR_GET_DEFAULT(obCustomerBridgeCount_, 0L) };
        inline AgentStatus& setObCustomerBridgeCount(int64_t obCustomerBridgeCount) { DARABONBA_PTR_SET_VALUE(obCustomerBridgeCount_, obCustomerBridgeCount) };


        // obCustomerUnbridgeCount Field Functions 
        bool hasObCustomerUnbridgeCount() const { return this->obCustomerUnbridgeCount_ != nullptr;};
        void deleteObCustomerUnbridgeCount() { this->obCustomerUnbridgeCount_ = nullptr;};
        inline int64_t getObCustomerUnbridgeCount() const { DARABONBA_PTR_GET_DEFAULT(obCustomerUnbridgeCount_, 0L) };
        inline AgentStatus& setObCustomerUnbridgeCount(int64_t obCustomerUnbridgeCount) { DARABONBA_PTR_SET_VALUE(obCustomerUnbridgeCount_, obCustomerUnbridgeCount) };


        // pauseDescription Field Functions 
        bool hasPauseDescription() const { return this->pauseDescription_ != nullptr;};
        void deletePauseDescription() { this->pauseDescription_ = nullptr;};
        inline string getPauseDescription() const { DARABONBA_PTR_GET_DEFAULT(pauseDescription_, "") };
        inline AgentStatus& setPauseDescription(string pauseDescription) { DARABONBA_PTR_SET_VALUE(pauseDescription_, pauseDescription) };


        // pauseType Field Functions 
        bool hasPauseType() const { return this->pauseType_ != nullptr;};
        void deletePauseType() { this->pauseType_ = nullptr;};
        inline int64_t getPauseType() const { DARABONBA_PTR_GET_DEFAULT(pauseType_, 0L) };
        inline AgentStatus& setPauseType(int64_t pauseType) { DARABONBA_PTR_SET_VALUE(pauseType_, pauseType) };


        // predictToCall Field Functions 
        bool hasPredictToCall() const { return this->predictToCall_ != nullptr;};
        void deletePredictToCall() { this->predictToCall_ = nullptr;};
        inline int64_t getPredictToCall() const { DARABONBA_PTR_GET_DEFAULT(predictToCall_, 0L) };
        inline AgentStatus& setPredictToCall(int64_t predictToCall) { DARABONBA_PTR_SET_VALUE(predictToCall_, predictToCall) };


        // queueIncomingCallCount Field Functions 
        bool hasQueueIncomingCallCount() const { return this->queueIncomingCallCount_ != nullptr;};
        void deleteQueueIncomingCallCount() { this->queueIncomingCallCount_ = nullptr;};
        inline int64_t getQueueIncomingCallCount() const { DARABONBA_PTR_GET_DEFAULT(queueIncomingCallCount_, 0L) };
        inline AgentStatus& setQueueIncomingCallCount(int64_t queueIncomingCallCount) { DARABONBA_PTR_SET_VALUE(queueIncomingCallCount_, queueIncomingCallCount) };


        // queueInfo Field Functions 
        bool hasQueueInfo() const { return this->queueInfo_ != nullptr;};
        void deleteQueueInfo() { this->queueInfo_ = nullptr;};
        inline string getQueueInfo() const { DARABONBA_PTR_GET_DEFAULT(queueInfo_, "") };
        inline AgentStatus& setQueueInfo(string queueInfo) { DARABONBA_PTR_SET_VALUE(queueInfo_, queueInfo) };


        // queues Field Functions 
        bool hasQueues() const { return this->queues_ != nullptr;};
        void deleteQueues() { this->queues_ = nullptr;};
        inline string getQueues() const { DARABONBA_PTR_GET_DEFAULT(queues_, "") };
        inline AgentStatus& setQueues(string queues) { DARABONBA_PTR_SET_VALUE(queues_, queues) };


        // quickUnlinkCount Field Functions 
        bool hasQuickUnlinkCount() const { return this->quickUnlinkCount_ != nullptr;};
        void deleteQuickUnlinkCount() { this->quickUnlinkCount_ = nullptr;};
        inline int64_t getQuickUnlinkCount() const { DARABONBA_PTR_GET_DEFAULT(quickUnlinkCount_, 0L) };
        inline AgentStatus& setQuickUnlinkCount(int64_t quickUnlinkCount) { DARABONBA_PTR_SET_VALUE(quickUnlinkCount_, quickUnlinkCount) };


        // stateDuration Field Functions 
        bool hasStateDuration() const { return this->stateDuration_ != nullptr;};
        void deleteStateDuration() { this->stateDuration_ = nullptr;};
        inline int64_t getStateDuration() const { DARABONBA_PTR_GET_DEFAULT(stateDuration_, 0L) };
        inline AgentStatus& setStateDuration(int64_t stateDuration) { DARABONBA_PTR_SET_VALUE(stateDuration_, stateDuration) };


        // tagNames Field Functions 
        bool hasTagNames() const { return this->tagNames_ != nullptr;};
        void deleteTagNames() { this->tagNames_ = nullptr;};
        inline const vector<string> & getTagNames() const { DARABONBA_PTR_GET_CONST(tagNames_, vector<string>) };
        inline vector<string> getTagNames() { DARABONBA_PTR_GET(tagNames_, vector<string>) };
        inline AgentStatus& setTagNames(const vector<string> & tagNames) { DARABONBA_PTR_SET_VALUE(tagNames_, tagNames) };
        inline AgentStatus& setTagNames(vector<string> && tagNames) { DARABONBA_PTR_SET_RVALUE(tagNames_, tagNames) };


      protected:
        // 座席状态
        shared_ptr<string> agentStatus_ {};
        // 座席状态详情
        shared_ptr<string> agentStatusDetail_ {};
        // 绑定号码
        shared_ptr<string> bindTel_ {};
        // 电话类型，1:电话；2:IP话机；3:软电话
        shared_ptr<int64_t> bindType_ {};
        // 座席来电接听次数
        shared_ptr<int64_t> bridgeCallCount_ {};
        // 座席名称
        shared_ptr<string> clientName_ {};
        // 座席号
        shared_ptr<string> cno_ {};
        // 座席code
        shared_ptr<string> code_ {};
        // 客户号码
        shared_ptr<string> customerNumber_ {};
        // 客户来电号码加密串
        shared_ptr<string> customerNumberEncrypt_ {};
        // 客户状态，空闲，呼叫中，响铃，通话
        shared_ptr<string> customerStatus_ {};
        // 呼入接听总响铃时长
        shared_ptr<int64_t> ibAnsweredRingingDuration_ {};
        // 客户呼入接听数
        shared_ptr<int64_t> ibClientAnsweredCount_ {};
        // 客户呼入接听率
        shared_ptr<double> ibClientAnsweredRate_ {};
        // 客户呼入数
        shared_ptr<int64_t> ibClientTotalCount_ {};
        // 客户呼入未接听数
        shared_ptr<int64_t> ibClientUnansweredCount_ {};
        // 空闲超时时间（单位分钟）
        shared_ptr<int64_t> idleTimeOut_ {};
        // 座席来电次数
        shared_ptr<int64_t> incomingCallCount_ {};
        // 登录时长
        shared_ptr<int64_t> loginDuration_ {};
        // 外呼平均通话时长
        shared_ptr<int64_t> obAvgBridgeDuration_ {};
        // 外呼通话时长
        shared_ptr<int64_t> obBridgeDuration_ {};
        // 外呼接听率
        shared_ptr<double> obBridgeRate_ {};
        // 座席外呼数
        shared_ptr<int64_t> obCallCount_ {};
        // 外呼座席未接听数
        shared_ptr<int64_t> obClientUnbridgeCount_ {};
        // 外呼客户接听数
        shared_ptr<int64_t> obCustomerBridgeCount_ {};
        // 外呼客户未接听数
        shared_ptr<int64_t> obCustomerUnbridgeCount_ {};
        // 置忙状态描述
        shared_ptr<string> pauseDescription_ {};
        // 置忙类型
        shared_ptr<int64_t> pauseType_ {};
        // 座席是否处于预测外呼状态 1：是 0：否
        shared_ptr<int64_t> predictToCall_ {};
        // 队列来电接听数
        shared_ptr<int64_t> queueIncomingCallCount_ {};
        // 队列信息
        shared_ptr<string> queueInfo_ {};
        // 队列编号
        shared_ptr<string> queues_ {};
        // 客户速挂数
        shared_ptr<int64_t> quickUnlinkCount_ {};
        // 状态时长
        shared_ptr<int64_t> stateDuration_ {};
        // 座席标签
        shared_ptr<vector<string>> tagNames_ {};
      };

      virtual bool empty() const override { return this->agentStatus_ == nullptr
        && this->clinkRequestId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // agentStatus Field Functions 
      bool hasAgentStatus() const { return this->agentStatus_ != nullptr;};
      void deleteAgentStatus() { this->agentStatus_ = nullptr;};
      inline const vector<Data::AgentStatus> & getAgentStatus() const { DARABONBA_PTR_GET_CONST(agentStatus_, vector<Data::AgentStatus>) };
      inline vector<Data::AgentStatus> getAgentStatus() { DARABONBA_PTR_GET(agentStatus_, vector<Data::AgentStatus>) };
      inline Data& setAgentStatus(const vector<Data::AgentStatus> & agentStatus) { DARABONBA_PTR_SET_VALUE(agentStatus_, agentStatus) };
      inline Data& setAgentStatus(vector<Data::AgentStatus> && agentStatus) { DARABONBA_PTR_SET_RVALUE(agentStatus_, agentStatus) };


      // clinkRequestId Field Functions 
      bool hasClinkRequestId() const { return this->clinkRequestId_ != nullptr;};
      void deleteClinkRequestId() { this->clinkRequestId_ = nullptr;};
      inline string getClinkRequestId() const { DARABONBA_PTR_GET_DEFAULT(clinkRequestId_, "") };
      inline Data& setClinkRequestId(string clinkRequestId) { DARABONBA_PTR_SET_VALUE(clinkRequestId_, clinkRequestId) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Data& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // [座席状态详情] #座席状态详情
      shared_ptr<vector<Data::AgentStatus>> agentStatus_ {};
      // 请求 id
      shared_ptr<string> clinkRequestId_ {};
      // 当前页码
      shared_ptr<int64_t> pageNumber_ {};
      // 一页展示条数
      shared_ptr<int64_t> pageSize_ {};
      // 总条数
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ClinkAgentStatusResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ClinkAgentStatusResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ClinkAgentStatusResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ClinkAgentStatusResponseBody::Data) };
    inline ClinkAgentStatusResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ClinkAgentStatusResponseBody::Data) };
    inline ClinkAgentStatusResponseBody& setData(const ClinkAgentStatusResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ClinkAgentStatusResponseBody& setData(ClinkAgentStatusResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ClinkAgentStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClinkAgentStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<ClinkAgentStatusResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
