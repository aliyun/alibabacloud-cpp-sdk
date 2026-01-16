// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACTIONRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACTIONRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListActionRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListActionRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListActionRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListActionRecordsResponseBody() = default ;
    ListActionRecordsResponseBody(const ListActionRecordsResponseBody &) = default ;
    ListActionRecordsResponseBody(ListActionRecordsResponseBody &&) = default ;
    ListActionRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListActionRecordsResponseBody() = default ;
    ListActionRecordsResponseBody& operator=(const ListActionRecordsResponseBody &) = default ;
    ListActionRecordsResponseBody& operator=(ListActionRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(actionName, actionName_);
        DARABONBA_ANY_TO_JSON(actionParams, actionParams_);
        DARABONBA_PTR_TO_JSON(actionResultAccessList, actionResultAccessList_);
        DARABONBA_PTR_TO_JSON(endTime, endTime_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(metaNow, metaNow_);
        DARABONBA_PTR_TO_JSON(metaOld, metaOld_);
        DARABONBA_PTR_TO_JSON(ownerId, ownerId_);
        DARABONBA_PTR_TO_JSON(process, process_);
        DARABONBA_ANY_TO_JSON(recordDiff, recordDiff_);
        DARABONBA_PTR_TO_JSON(recordIds, recordIds_);
        DARABONBA_PTR_TO_JSON(requestId, requestId_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
        DARABONBA_PTR_TO_JSON(stateType, stateType_);
        DARABONBA_PTR_TO_JSON(statusInfo, statusInfo_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
        DARABONBA_PTR_TO_JSON(userInfo, userInfo_);
        DARABONBA_PTR_TO_JSON(userType, userType_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(actionName, actionName_);
        DARABONBA_ANY_FROM_JSON(actionParams, actionParams_);
        DARABONBA_PTR_FROM_JSON(actionResultAccessList, actionResultAccessList_);
        DARABONBA_PTR_FROM_JSON(endTime, endTime_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(metaNow, metaNow_);
        DARABONBA_PTR_FROM_JSON(metaOld, metaOld_);
        DARABONBA_PTR_FROM_JSON(ownerId, ownerId_);
        DARABONBA_PTR_FROM_JSON(process, process_);
        DARABONBA_ANY_FROM_JSON(recordDiff, recordDiff_);
        DARABONBA_PTR_FROM_JSON(recordIds, recordIds_);
        DARABONBA_PTR_FROM_JSON(requestId, requestId_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        DARABONBA_PTR_FROM_JSON(stateType, stateType_);
        DARABONBA_PTR_FROM_JSON(statusInfo, statusInfo_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
        DARABONBA_PTR_FROM_JSON(userInfo, userInfo_);
        DARABONBA_PTR_FROM_JSON(userType, userType_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StatusInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StatusInfo& obj) { 
          DARABONBA_PTR_TO_JSON(completeNodeCount, completeNodeCount_);
          DARABONBA_PTR_TO_JSON(endTime, endTime_);
          DARABONBA_PTR_TO_JSON(exception, exception_);
          DARABONBA_PTR_TO_JSON(latencyMills, latencyMills_);
          DARABONBA_PTR_TO_JSON(nodeCount, nodeCount_);
          DARABONBA_PTR_TO_JSON(process, process_);
          DARABONBA_PTR_TO_JSON(startTime, startTime_);
          DARABONBA_PTR_TO_JSON(stateType, stateType_);
          DARABONBA_PTR_TO_JSON(subState, subState_);
          DARABONBA_PTR_TO_JSON(subStatusInfo, subStatusInfo_);
        };
        friend void from_json(const Darabonba::Json& j, StatusInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(completeNodeCount, completeNodeCount_);
          DARABONBA_PTR_FROM_JSON(endTime, endTime_);
          DARABONBA_PTR_FROM_JSON(exception, exception_);
          DARABONBA_PTR_FROM_JSON(latencyMills, latencyMills_);
          DARABONBA_PTR_FROM_JSON(nodeCount, nodeCount_);
          DARABONBA_PTR_FROM_JSON(process, process_);
          DARABONBA_PTR_FROM_JSON(startTime, startTime_);
          DARABONBA_PTR_FROM_JSON(stateType, stateType_);
          DARABONBA_PTR_FROM_JSON(subState, subState_);
          DARABONBA_PTR_FROM_JSON(subStatusInfo, subStatusInfo_);
        };
        StatusInfo() = default ;
        StatusInfo(const StatusInfo &) = default ;
        StatusInfo(StatusInfo &&) = default ;
        StatusInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StatusInfo() = default ;
        StatusInfo& operator=(const StatusInfo &) = default ;
        StatusInfo& operator=(StatusInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SubStatusInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SubStatusInfo& obj) { 
            DARABONBA_PTR_TO_JSON(completeNodeCount, completeNodeCount_);
            DARABONBA_PTR_TO_JSON(endTime, endTime_);
            DARABONBA_PTR_TO_JSON(exception, exception_);
            DARABONBA_PTR_TO_JSON(latencyMills, latencyMills_);
            DARABONBA_PTR_TO_JSON(nodeCount, nodeCount_);
            DARABONBA_PTR_TO_JSON(process, process_);
            DARABONBA_PTR_TO_JSON(startTime, startTime_);
            DARABONBA_PTR_TO_JSON(stateType, stateType_);
            DARABONBA_PTR_TO_JSON(subState, subState_);
          };
          friend void from_json(const Darabonba::Json& j, SubStatusInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(completeNodeCount, completeNodeCount_);
            DARABONBA_PTR_FROM_JSON(endTime, endTime_);
            DARABONBA_PTR_FROM_JSON(exception, exception_);
            DARABONBA_PTR_FROM_JSON(latencyMills, latencyMills_);
            DARABONBA_PTR_FROM_JSON(nodeCount, nodeCount_);
            DARABONBA_PTR_FROM_JSON(process, process_);
            DARABONBA_PTR_FROM_JSON(startTime, startTime_);
            DARABONBA_PTR_FROM_JSON(stateType, stateType_);
            DARABONBA_PTR_FROM_JSON(subState, subState_);
          };
          SubStatusInfo() = default ;
          SubStatusInfo(const SubStatusInfo &) = default ;
          SubStatusInfo(SubStatusInfo &&) = default ;
          SubStatusInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SubStatusInfo() = default ;
          SubStatusInfo& operator=(const SubStatusInfo &) = default ;
          SubStatusInfo& operator=(SubStatusInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->completeNodeCount_ == nullptr
        && this->endTime_ == nullptr && this->exception_ == nullptr && this->latencyMills_ == nullptr && this->nodeCount_ == nullptr && this->process_ == nullptr
        && this->startTime_ == nullptr && this->stateType_ == nullptr && this->subState_ == nullptr; };
          // completeNodeCount Field Functions 
          bool hasCompleteNodeCount() const { return this->completeNodeCount_ != nullptr;};
          void deleteCompleteNodeCount() { this->completeNodeCount_ = nullptr;};
          inline int32_t getCompleteNodeCount() const { DARABONBA_PTR_GET_DEFAULT(completeNodeCount_, 0) };
          inline SubStatusInfo& setCompleteNodeCount(int32_t completeNodeCount) { DARABONBA_PTR_SET_VALUE(completeNodeCount_, completeNodeCount) };


          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
          inline SubStatusInfo& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // exception Field Functions 
          bool hasException() const { return this->exception_ != nullptr;};
          void deleteException() { this->exception_ = nullptr;};
          inline string getException() const { DARABONBA_PTR_GET_DEFAULT(exception_, "") };
          inline SubStatusInfo& setException(string exception) { DARABONBA_PTR_SET_VALUE(exception_, exception) };


          // latencyMills Field Functions 
          bool hasLatencyMills() const { return this->latencyMills_ != nullptr;};
          void deleteLatencyMills() { this->latencyMills_ = nullptr;};
          inline int64_t getLatencyMills() const { DARABONBA_PTR_GET_DEFAULT(latencyMills_, 0L) };
          inline SubStatusInfo& setLatencyMills(int64_t latencyMills) { DARABONBA_PTR_SET_VALUE(latencyMills_, latencyMills) };


          // nodeCount Field Functions 
          bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
          void deleteNodeCount() { this->nodeCount_ = nullptr;};
          inline int32_t getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
          inline SubStatusInfo& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


          // process Field Functions 
          bool hasProcess() const { return this->process_ != nullptr;};
          void deleteProcess() { this->process_ = nullptr;};
          inline string getProcess() const { DARABONBA_PTR_GET_DEFAULT(process_, "") };
          inline SubStatusInfo& setProcess(string process) { DARABONBA_PTR_SET_VALUE(process_, process) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
          inline SubStatusInfo& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // stateType Field Functions 
          bool hasStateType() const { return this->stateType_ != nullptr;};
          void deleteStateType() { this->stateType_ = nullptr;};
          inline string getStateType() const { DARABONBA_PTR_GET_DEFAULT(stateType_, "") };
          inline SubStatusInfo& setStateType(string stateType) { DARABONBA_PTR_SET_VALUE(stateType_, stateType) };


          // subState Field Functions 
          bool hasSubState() const { return this->subState_ != nullptr;};
          void deleteSubState() { this->subState_ = nullptr;};
          inline string getSubState() const { DARABONBA_PTR_GET_DEFAULT(subState_, "") };
          inline SubStatusInfo& setSubState(string subState) { DARABONBA_PTR_SET_VALUE(subState_, subState) };


        protected:
          shared_ptr<int32_t> completeNodeCount_ {};
          shared_ptr<int64_t> endTime_ {};
          shared_ptr<string> exception_ {};
          shared_ptr<int64_t> latencyMills_ {};
          shared_ptr<int32_t> nodeCount_ {};
          shared_ptr<string> process_ {};
          shared_ptr<int64_t> startTime_ {};
          shared_ptr<string> stateType_ {};
          shared_ptr<string> subState_ {};
        };

        virtual bool empty() const override { return this->completeNodeCount_ == nullptr
        && this->endTime_ == nullptr && this->exception_ == nullptr && this->latencyMills_ == nullptr && this->nodeCount_ == nullptr && this->process_ == nullptr
        && this->startTime_ == nullptr && this->stateType_ == nullptr && this->subState_ == nullptr && this->subStatusInfo_ == nullptr; };
        // completeNodeCount Field Functions 
        bool hasCompleteNodeCount() const { return this->completeNodeCount_ != nullptr;};
        void deleteCompleteNodeCount() { this->completeNodeCount_ = nullptr;};
        inline int32_t getCompleteNodeCount() const { DARABONBA_PTR_GET_DEFAULT(completeNodeCount_, 0) };
        inline StatusInfo& setCompleteNodeCount(int32_t completeNodeCount) { DARABONBA_PTR_SET_VALUE(completeNodeCount_, completeNodeCount) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline StatusInfo& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // exception Field Functions 
        bool hasException() const { return this->exception_ != nullptr;};
        void deleteException() { this->exception_ = nullptr;};
        inline string getException() const { DARABONBA_PTR_GET_DEFAULT(exception_, "") };
        inline StatusInfo& setException(string exception) { DARABONBA_PTR_SET_VALUE(exception_, exception) };


        // latencyMills Field Functions 
        bool hasLatencyMills() const { return this->latencyMills_ != nullptr;};
        void deleteLatencyMills() { this->latencyMills_ = nullptr;};
        inline int64_t getLatencyMills() const { DARABONBA_PTR_GET_DEFAULT(latencyMills_, 0L) };
        inline StatusInfo& setLatencyMills(int64_t latencyMills) { DARABONBA_PTR_SET_VALUE(latencyMills_, latencyMills) };


        // nodeCount Field Functions 
        bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
        void deleteNodeCount() { this->nodeCount_ = nullptr;};
        inline int32_t getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
        inline StatusInfo& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


        // process Field Functions 
        bool hasProcess() const { return this->process_ != nullptr;};
        void deleteProcess() { this->process_ = nullptr;};
        inline string getProcess() const { DARABONBA_PTR_GET_DEFAULT(process_, "") };
        inline StatusInfo& setProcess(string process) { DARABONBA_PTR_SET_VALUE(process_, process) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline StatusInfo& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // stateType Field Functions 
        bool hasStateType() const { return this->stateType_ != nullptr;};
        void deleteStateType() { this->stateType_ = nullptr;};
        inline string getStateType() const { DARABONBA_PTR_GET_DEFAULT(stateType_, "") };
        inline StatusInfo& setStateType(string stateType) { DARABONBA_PTR_SET_VALUE(stateType_, stateType) };


        // subState Field Functions 
        bool hasSubState() const { return this->subState_ != nullptr;};
        void deleteSubState() { this->subState_ = nullptr;};
        inline string getSubState() const { DARABONBA_PTR_GET_DEFAULT(subState_, "") };
        inline StatusInfo& setSubState(string subState) { DARABONBA_PTR_SET_VALUE(subState_, subState) };


        // subStatusInfo Field Functions 
        bool hasSubStatusInfo() const { return this->subStatusInfo_ != nullptr;};
        void deleteSubStatusInfo() { this->subStatusInfo_ = nullptr;};
        inline const vector<StatusInfo::SubStatusInfo> & getSubStatusInfo() const { DARABONBA_PTR_GET_CONST(subStatusInfo_, vector<StatusInfo::SubStatusInfo>) };
        inline vector<StatusInfo::SubStatusInfo> getSubStatusInfo() { DARABONBA_PTR_GET(subStatusInfo_, vector<StatusInfo::SubStatusInfo>) };
        inline StatusInfo& setSubStatusInfo(const vector<StatusInfo::SubStatusInfo> & subStatusInfo) { DARABONBA_PTR_SET_VALUE(subStatusInfo_, subStatusInfo) };
        inline StatusInfo& setSubStatusInfo(vector<StatusInfo::SubStatusInfo> && subStatusInfo) { DARABONBA_PTR_SET_RVALUE(subStatusInfo_, subStatusInfo) };


      protected:
        shared_ptr<int32_t> completeNodeCount_ {};
        shared_ptr<int64_t> endTime_ {};
        shared_ptr<string> exception_ {};
        shared_ptr<int64_t> latencyMills_ {};
        shared_ptr<int32_t> nodeCount_ {};
        shared_ptr<string> process_ {};
        shared_ptr<int64_t> startTime_ {};
        shared_ptr<string> stateType_ {};
        shared_ptr<string> subState_ {};
        shared_ptr<vector<StatusInfo::SubStatusInfo>> subStatusInfo_ {};
      };

      virtual bool empty() const override { return this->actionName_ == nullptr
        && this->actionParams_ == nullptr && this->actionResultAccessList_ == nullptr && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->metaNow_ == nullptr
        && this->metaOld_ == nullptr && this->ownerId_ == nullptr && this->process_ == nullptr && this->recordDiff_ == nullptr && this->recordIds_ == nullptr
        && this->requestId_ == nullptr && this->startTime_ == nullptr && this->stateType_ == nullptr && this->statusInfo_ == nullptr && this->userId_ == nullptr
        && this->userInfo_ == nullptr && this->userType_ == nullptr; };
      // actionName Field Functions 
      bool hasActionName() const { return this->actionName_ != nullptr;};
      void deleteActionName() { this->actionName_ = nullptr;};
      inline string getActionName() const { DARABONBA_PTR_GET_DEFAULT(actionName_, "") };
      inline Result& setActionName(string actionName) { DARABONBA_PTR_SET_VALUE(actionName_, actionName) };


      // actionParams Field Functions 
      bool hasActionParams() const { return this->actionParams_ != nullptr;};
      void deleteActionParams() { this->actionParams_ = nullptr;};
      inline       const Darabonba::Json & getActionParams() const { DARABONBA_GET(actionParams_) };
      Darabonba::Json & getActionParams() { DARABONBA_GET(actionParams_) };
      inline Result& setActionParams(const Darabonba::Json & actionParams) { DARABONBA_SET_VALUE(actionParams_, actionParams) };
      inline Result& setActionParams(Darabonba::Json && actionParams) { DARABONBA_SET_RVALUE(actionParams_, actionParams) };


      // actionResultAccessList Field Functions 
      bool hasActionResultAccessList() const { return this->actionResultAccessList_ != nullptr;};
      void deleteActionResultAccessList() { this->actionResultAccessList_ = nullptr;};
      inline const vector<string> & getActionResultAccessList() const { DARABONBA_PTR_GET_CONST(actionResultAccessList_, vector<string>) };
      inline vector<string> getActionResultAccessList() { DARABONBA_PTR_GET(actionResultAccessList_, vector<string>) };
      inline Result& setActionResultAccessList(const vector<string> & actionResultAccessList) { DARABONBA_PTR_SET_VALUE(actionResultAccessList_, actionResultAccessList) };
      inline Result& setActionResultAccessList(vector<string> && actionResultAccessList) { DARABONBA_PTR_SET_RVALUE(actionResultAccessList_, actionResultAccessList) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Result& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Result& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // metaNow Field Functions 
      bool hasMetaNow() const { return this->metaNow_ != nullptr;};
      void deleteMetaNow() { this->metaNow_ = nullptr;};
      inline string getMetaNow() const { DARABONBA_PTR_GET_DEFAULT(metaNow_, "") };
      inline Result& setMetaNow(string metaNow) { DARABONBA_PTR_SET_VALUE(metaNow_, metaNow) };


      // metaOld Field Functions 
      bool hasMetaOld() const { return this->metaOld_ != nullptr;};
      void deleteMetaOld() { this->metaOld_ = nullptr;};
      inline string getMetaOld() const { DARABONBA_PTR_GET_DEFAULT(metaOld_, "") };
      inline Result& setMetaOld(string metaOld) { DARABONBA_PTR_SET_VALUE(metaOld_, metaOld) };


      // ownerId Field Functions 
      bool hasOwnerId() const { return this->ownerId_ != nullptr;};
      void deleteOwnerId() { this->ownerId_ = nullptr;};
      inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
      inline Result& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


      // process Field Functions 
      bool hasProcess() const { return this->process_ != nullptr;};
      void deleteProcess() { this->process_ = nullptr;};
      inline string getProcess() const { DARABONBA_PTR_GET_DEFAULT(process_, "") };
      inline Result& setProcess(string process) { DARABONBA_PTR_SET_VALUE(process_, process) };


      // recordDiff Field Functions 
      bool hasRecordDiff() const { return this->recordDiff_ != nullptr;};
      void deleteRecordDiff() { this->recordDiff_ = nullptr;};
      inline       const Darabonba::Json & getRecordDiff() const { DARABONBA_GET(recordDiff_) };
      Darabonba::Json & getRecordDiff() { DARABONBA_GET(recordDiff_) };
      inline Result& setRecordDiff(const Darabonba::Json & recordDiff) { DARABONBA_SET_VALUE(recordDiff_, recordDiff) };
      inline Result& setRecordDiff(Darabonba::Json && recordDiff) { DARABONBA_SET_RVALUE(recordDiff_, recordDiff) };


      // recordIds Field Functions 
      bool hasRecordIds() const { return this->recordIds_ != nullptr;};
      void deleteRecordIds() { this->recordIds_ = nullptr;};
      inline const vector<string> & getRecordIds() const { DARABONBA_PTR_GET_CONST(recordIds_, vector<string>) };
      inline vector<string> getRecordIds() { DARABONBA_PTR_GET(recordIds_, vector<string>) };
      inline Result& setRecordIds(const vector<string> & recordIds) { DARABONBA_PTR_SET_VALUE(recordIds_, recordIds) };
      inline Result& setRecordIds(vector<string> && recordIds) { DARABONBA_PTR_SET_RVALUE(recordIds_, recordIds) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Result& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Result& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // stateType Field Functions 
      bool hasStateType() const { return this->stateType_ != nullptr;};
      void deleteStateType() { this->stateType_ = nullptr;};
      inline string getStateType() const { DARABONBA_PTR_GET_DEFAULT(stateType_, "") };
      inline Result& setStateType(string stateType) { DARABONBA_PTR_SET_VALUE(stateType_, stateType) };


      // statusInfo Field Functions 
      bool hasStatusInfo() const { return this->statusInfo_ != nullptr;};
      void deleteStatusInfo() { this->statusInfo_ = nullptr;};
      inline const vector<Result::StatusInfo> & getStatusInfo() const { DARABONBA_PTR_GET_CONST(statusInfo_, vector<Result::StatusInfo>) };
      inline vector<Result::StatusInfo> getStatusInfo() { DARABONBA_PTR_GET(statusInfo_, vector<Result::StatusInfo>) };
      inline Result& setStatusInfo(const vector<Result::StatusInfo> & statusInfo) { DARABONBA_PTR_SET_VALUE(statusInfo_, statusInfo) };
      inline Result& setStatusInfo(vector<Result::StatusInfo> && statusInfo) { DARABONBA_PTR_SET_RVALUE(statusInfo_, statusInfo) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Result& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userInfo Field Functions 
      bool hasUserInfo() const { return this->userInfo_ != nullptr;};
      void deleteUserInfo() { this->userInfo_ = nullptr;};
      inline string getUserInfo() const { DARABONBA_PTR_GET_DEFAULT(userInfo_, "") };
      inline Result& setUserInfo(string userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };


      // userType Field Functions 
      bool hasUserType() const { return this->userType_ != nullptr;};
      void deleteUserType() { this->userType_ = nullptr;};
      inline string getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
      inline Result& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


    protected:
      shared_ptr<string> actionName_ {};
      Darabonba::Json actionParams_ {};
      shared_ptr<vector<string>> actionResultAccessList_ {};
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> metaNow_ {};
      shared_ptr<string> metaOld_ {};
      shared_ptr<string> ownerId_ {};
      shared_ptr<string> process_ {};
      Darabonba::Json recordDiff_ {};
      shared_ptr<vector<string>> recordIds_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<string> stateType_ {};
      shared_ptr<vector<Result::StatusInfo>> statusInfo_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> userInfo_ {};
      shared_ptr<string> userType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListActionRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListActionRecordsResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListActionRecordsResponseBody::Result>) };
    inline vector<ListActionRecordsResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListActionRecordsResponseBody::Result>) };
    inline ListActionRecordsResponseBody& setResult(const vector<ListActionRecordsResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListActionRecordsResponseBody& setResult(vector<ListActionRecordsResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListActionRecordsResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
