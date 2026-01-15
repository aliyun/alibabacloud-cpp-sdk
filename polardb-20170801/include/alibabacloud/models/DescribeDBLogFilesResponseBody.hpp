// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBLOGFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBLOGFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBLogFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBLogFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DBInstanceType, DBInstanceType_);
      DARABONBA_PTR_TO_JSON(HaLogItems, haLogItems_);
      DARABONBA_PTR_TO_JSON(HaStatus, haStatus_);
      DARABONBA_PTR_TO_JSON(ItemsNumbers, itemsNumbers_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SwitchListItems, switchListItems_);
      DARABONBA_PTR_TO_JSON(SwitchLogItems, switchLogItems_);
      DARABONBA_PTR_TO_JSON(TotalRecords, totalRecords_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBLogFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DBInstanceType, DBInstanceType_);
      DARABONBA_PTR_FROM_JSON(HaLogItems, haLogItems_);
      DARABONBA_PTR_FROM_JSON(HaStatus, haStatus_);
      DARABONBA_PTR_FROM_JSON(ItemsNumbers, itemsNumbers_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SwitchListItems, switchListItems_);
      DARABONBA_PTR_FROM_JSON(SwitchLogItems, switchLogItems_);
      DARABONBA_PTR_FROM_JSON(TotalRecords, totalRecords_);
    };
    DescribeDBLogFilesResponseBody() = default ;
    DescribeDBLogFilesResponseBody(const DescribeDBLogFilesResponseBody &) = default ;
    DescribeDBLogFilesResponseBody(DescribeDBLogFilesResponseBody &&) = default ;
    DescribeDBLogFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBLogFilesResponseBody() = default ;
    DescribeDBLogFilesResponseBody& operator=(const DescribeDBLogFilesResponseBody &) = default ;
    DescribeDBLogFilesResponseBody& operator=(DescribeDBLogFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SwitchLogItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SwitchLogItems& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
        DARABONBA_PTR_TO_JSON(DstDbType, dstDbType_);
        DARABONBA_PTR_TO_JSON(EventFinishTime, eventFinishTime_);
        DARABONBA_PTR_TO_JSON(EventStartTime, eventStartTime_);
        DARABONBA_PTR_TO_JSON(SimulateListId, simulateListId_);
        DARABONBA_PTR_TO_JSON(SimulateStatus, simulateStatus_);
        DARABONBA_PTR_TO_JSON(Simulatecode, simulatecode_);
        DARABONBA_PTR_TO_JSON(SrcDbType, srcDbType_);
        DARABONBA_PTR_TO_JSON(SwitchStepItems, switchStepItems_);
      };
      friend void from_json(const Darabonba::Json& j, SwitchLogItems& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
        DARABONBA_PTR_FROM_JSON(DstDbType, dstDbType_);
        DARABONBA_PTR_FROM_JSON(EventFinishTime, eventFinishTime_);
        DARABONBA_PTR_FROM_JSON(EventStartTime, eventStartTime_);
        DARABONBA_PTR_FROM_JSON(SimulateListId, simulateListId_);
        DARABONBA_PTR_FROM_JSON(SimulateStatus, simulateStatus_);
        DARABONBA_PTR_FROM_JSON(Simulatecode, simulatecode_);
        DARABONBA_PTR_FROM_JSON(SrcDbType, srcDbType_);
        DARABONBA_PTR_FROM_JSON(SwitchStepItems, switchStepItems_);
      };
      SwitchLogItems() = default ;
      SwitchLogItems(const SwitchLogItems &) = default ;
      SwitchLogItems(SwitchLogItems &&) = default ;
      SwitchLogItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SwitchLogItems() = default ;
      SwitchLogItems& operator=(const SwitchLogItems &) = default ;
      SwitchLogItems& operator=(SwitchLogItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SwitchStepItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SwitchStepItems& obj) { 
          DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
          DARABONBA_PTR_TO_JSON(SimulatePhase, simulatePhase_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(StepMsg, stepMsg_);
          DARABONBA_PTR_TO_JSON(StepName, stepName_);
          DARABONBA_PTR_TO_JSON(TimeCost, timeCost_);
        };
        friend void from_json(const Darabonba::Json& j, SwitchStepItems& obj) { 
          DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
          DARABONBA_PTR_FROM_JSON(SimulatePhase, simulatePhase_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(StepMsg, stepMsg_);
          DARABONBA_PTR_FROM_JSON(StepName, stepName_);
          DARABONBA_PTR_FROM_JSON(TimeCost, timeCost_);
        };
        SwitchStepItems() = default ;
        SwitchStepItems(const SwitchStepItems &) = default ;
        SwitchStepItems(SwitchStepItems &&) = default ;
        SwitchStepItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SwitchStepItems() = default ;
        SwitchStepItems& operator=(const SwitchStepItems &) = default ;
        SwitchStepItems& operator=(SwitchStepItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->DBNodeId_ == nullptr
        && this->endTime_ == nullptr && this->isSuccess_ == nullptr && this->simulatePhase_ == nullptr && this->startTime_ == nullptr && this->stepMsg_ == nullptr
        && this->stepName_ == nullptr && this->timeCost_ == nullptr; };
        // DBNodeId Field Functions 
        bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
        void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
        inline string getDBNodeId() const { DARABONBA_PTR_GET_DEFAULT(DBNodeId_, "") };
        inline SwitchStepItems& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline SwitchStepItems& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // isSuccess Field Functions 
        bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
        void deleteIsSuccess() { this->isSuccess_ = nullptr;};
        inline string getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, "") };
        inline SwitchStepItems& setIsSuccess(string isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


        // simulatePhase Field Functions 
        bool hasSimulatePhase() const { return this->simulatePhase_ != nullptr;};
        void deleteSimulatePhase() { this->simulatePhase_ = nullptr;};
        inline string getSimulatePhase() const { DARABONBA_PTR_GET_DEFAULT(simulatePhase_, "") };
        inline SwitchStepItems& setSimulatePhase(string simulatePhase) { DARABONBA_PTR_SET_VALUE(simulatePhase_, simulatePhase) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline SwitchStepItems& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // stepMsg Field Functions 
        bool hasStepMsg() const { return this->stepMsg_ != nullptr;};
        void deleteStepMsg() { this->stepMsg_ = nullptr;};
        inline string getStepMsg() const { DARABONBA_PTR_GET_DEFAULT(stepMsg_, "") };
        inline SwitchStepItems& setStepMsg(string stepMsg) { DARABONBA_PTR_SET_VALUE(stepMsg_, stepMsg) };


        // stepName Field Functions 
        bool hasStepName() const { return this->stepName_ != nullptr;};
        void deleteStepName() { this->stepName_ = nullptr;};
        inline string getStepName() const { DARABONBA_PTR_GET_DEFAULT(stepName_, "") };
        inline SwitchStepItems& setStepName(string stepName) { DARABONBA_PTR_SET_VALUE(stepName_, stepName) };


        // timeCost Field Functions 
        bool hasTimeCost() const { return this->timeCost_ != nullptr;};
        void deleteTimeCost() { this->timeCost_ = nullptr;};
        inline string getTimeCost() const { DARABONBA_PTR_GET_DEFAULT(timeCost_, "") };
        inline SwitchStepItems& setTimeCost(string timeCost) { DARABONBA_PTR_SET_VALUE(timeCost_, timeCost) };


      protected:
        shared_ptr<string> DBNodeId_ {};
        shared_ptr<string> endTime_ {};
        shared_ptr<string> isSuccess_ {};
        shared_ptr<string> simulatePhase_ {};
        shared_ptr<string> startTime_ {};
        shared_ptr<string> stepMsg_ {};
        shared_ptr<string> stepName_ {};
        shared_ptr<string> timeCost_ {};
      };

      virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->dstDbType_ == nullptr && this->eventFinishTime_ == nullptr && this->eventStartTime_ == nullptr && this->simulateListId_ == nullptr && this->simulateStatus_ == nullptr
        && this->simulatecode_ == nullptr && this->srcDbType_ == nullptr && this->switchStepItems_ == nullptr; };
      // DBInstanceId Field Functions 
      bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
      void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
      inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
      inline SwitchLogItems& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


      // dstDbType Field Functions 
      bool hasDstDbType() const { return this->dstDbType_ != nullptr;};
      void deleteDstDbType() { this->dstDbType_ = nullptr;};
      inline string getDstDbType() const { DARABONBA_PTR_GET_DEFAULT(dstDbType_, "") };
      inline SwitchLogItems& setDstDbType(string dstDbType) { DARABONBA_PTR_SET_VALUE(dstDbType_, dstDbType) };


      // eventFinishTime Field Functions 
      bool hasEventFinishTime() const { return this->eventFinishTime_ != nullptr;};
      void deleteEventFinishTime() { this->eventFinishTime_ = nullptr;};
      inline string getEventFinishTime() const { DARABONBA_PTR_GET_DEFAULT(eventFinishTime_, "") };
      inline SwitchLogItems& setEventFinishTime(string eventFinishTime) { DARABONBA_PTR_SET_VALUE(eventFinishTime_, eventFinishTime) };


      // eventStartTime Field Functions 
      bool hasEventStartTime() const { return this->eventStartTime_ != nullptr;};
      void deleteEventStartTime() { this->eventStartTime_ = nullptr;};
      inline string getEventStartTime() const { DARABONBA_PTR_GET_DEFAULT(eventStartTime_, "") };
      inline SwitchLogItems& setEventStartTime(string eventStartTime) { DARABONBA_PTR_SET_VALUE(eventStartTime_, eventStartTime) };


      // simulateListId Field Functions 
      bool hasSimulateListId() const { return this->simulateListId_ != nullptr;};
      void deleteSimulateListId() { this->simulateListId_ = nullptr;};
      inline string getSimulateListId() const { DARABONBA_PTR_GET_DEFAULT(simulateListId_, "") };
      inline SwitchLogItems& setSimulateListId(string simulateListId) { DARABONBA_PTR_SET_VALUE(simulateListId_, simulateListId) };


      // simulateStatus Field Functions 
      bool hasSimulateStatus() const { return this->simulateStatus_ != nullptr;};
      void deleteSimulateStatus() { this->simulateStatus_ = nullptr;};
      inline string getSimulateStatus() const { DARABONBA_PTR_GET_DEFAULT(simulateStatus_, "") };
      inline SwitchLogItems& setSimulateStatus(string simulateStatus) { DARABONBA_PTR_SET_VALUE(simulateStatus_, simulateStatus) };


      // simulatecode Field Functions 
      bool hasSimulatecode() const { return this->simulatecode_ != nullptr;};
      void deleteSimulatecode() { this->simulatecode_ = nullptr;};
      inline string getSimulatecode() const { DARABONBA_PTR_GET_DEFAULT(simulatecode_, "") };
      inline SwitchLogItems& setSimulatecode(string simulatecode) { DARABONBA_PTR_SET_VALUE(simulatecode_, simulatecode) };


      // srcDbType Field Functions 
      bool hasSrcDbType() const { return this->srcDbType_ != nullptr;};
      void deleteSrcDbType() { this->srcDbType_ = nullptr;};
      inline string getSrcDbType() const { DARABONBA_PTR_GET_DEFAULT(srcDbType_, "") };
      inline SwitchLogItems& setSrcDbType(string srcDbType) { DARABONBA_PTR_SET_VALUE(srcDbType_, srcDbType) };


      // switchStepItems Field Functions 
      bool hasSwitchStepItems() const { return this->switchStepItems_ != nullptr;};
      void deleteSwitchStepItems() { this->switchStepItems_ = nullptr;};
      inline const vector<SwitchLogItems::SwitchStepItems> & getSwitchStepItems() const { DARABONBA_PTR_GET_CONST(switchStepItems_, vector<SwitchLogItems::SwitchStepItems>) };
      inline vector<SwitchLogItems::SwitchStepItems> getSwitchStepItems() { DARABONBA_PTR_GET(switchStepItems_, vector<SwitchLogItems::SwitchStepItems>) };
      inline SwitchLogItems& setSwitchStepItems(const vector<SwitchLogItems::SwitchStepItems> & switchStepItems) { DARABONBA_PTR_SET_VALUE(switchStepItems_, switchStepItems) };
      inline SwitchLogItems& setSwitchStepItems(vector<SwitchLogItems::SwitchStepItems> && switchStepItems) { DARABONBA_PTR_SET_RVALUE(switchStepItems_, switchStepItems) };


    protected:
      shared_ptr<string> DBInstanceId_ {};
      shared_ptr<string> dstDbType_ {};
      shared_ptr<string> eventFinishTime_ {};
      shared_ptr<string> eventStartTime_ {};
      shared_ptr<string> simulateListId_ {};
      shared_ptr<string> simulateStatus_ {};
      shared_ptr<string> simulatecode_ {};
      shared_ptr<string> srcDbType_ {};
      shared_ptr<vector<SwitchLogItems::SwitchStepItems>> switchStepItems_ {};
    };

    class SwitchListItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SwitchListItems& obj) { 
        DARABONBA_PTR_TO_JSON(DBNodeCrashList, DBNodeCrashList_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(EventFinishTime, eventFinishTime_);
        DARABONBA_PTR_TO_JSON(EventStartTime, eventStartTime_);
        DARABONBA_PTR_TO_JSON(FaultInjectionType, faultInjectionType_);
        DARABONBA_PTR_TO_JSON(SimulateListId, simulateListId_);
        DARABONBA_PTR_TO_JSON(SimulateMode, simulateMode_);
        DARABONBA_PTR_TO_JSON(SimulateStatus, simulateStatus_);
        DARABONBA_PTR_TO_JSON(SimulateTaskId, simulateTaskId_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(SwitchLogItems, switchLogItems_);
        DARABONBA_PTR_TO_JSON(SwitchStepItems, switchStepItems_);
      };
      friend void from_json(const Darabonba::Json& j, SwitchListItems& obj) { 
        DARABONBA_PTR_FROM_JSON(DBNodeCrashList, DBNodeCrashList_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(EventFinishTime, eventFinishTime_);
        DARABONBA_PTR_FROM_JSON(EventStartTime, eventStartTime_);
        DARABONBA_PTR_FROM_JSON(FaultInjectionType, faultInjectionType_);
        DARABONBA_PTR_FROM_JSON(SimulateListId, simulateListId_);
        DARABONBA_PTR_FROM_JSON(SimulateMode, simulateMode_);
        DARABONBA_PTR_FROM_JSON(SimulateStatus, simulateStatus_);
        DARABONBA_PTR_FROM_JSON(SimulateTaskId, simulateTaskId_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(SwitchLogItems, switchLogItems_);
        DARABONBA_PTR_FROM_JSON(SwitchStepItems, switchStepItems_);
      };
      SwitchListItems() = default ;
      SwitchListItems(const SwitchListItems &) = default ;
      SwitchListItems(SwitchListItems &&) = default ;
      SwitchListItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SwitchListItems() = default ;
      SwitchListItems& operator=(const SwitchListItems &) = default ;
      SwitchListItems& operator=(SwitchListItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SwitchStepItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SwitchStepItems& obj) { 
          DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
          DARABONBA_PTR_TO_JSON(SimulatePhase, simulatePhase_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(StepName, stepName_);
          DARABONBA_PTR_TO_JSON(TimeCost, timeCost_);
        };
        friend void from_json(const Darabonba::Json& j, SwitchStepItems& obj) { 
          DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
          DARABONBA_PTR_FROM_JSON(SimulatePhase, simulatePhase_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(StepName, stepName_);
          DARABONBA_PTR_FROM_JSON(TimeCost, timeCost_);
        };
        SwitchStepItems() = default ;
        SwitchStepItems(const SwitchStepItems &) = default ;
        SwitchStepItems(SwitchStepItems &&) = default ;
        SwitchStepItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SwitchStepItems() = default ;
        SwitchStepItems& operator=(const SwitchStepItems &) = default ;
        SwitchStepItems& operator=(SwitchStepItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->DBNodeId_ == nullptr
        && this->endTime_ == nullptr && this->isSuccess_ == nullptr && this->simulatePhase_ == nullptr && this->startTime_ == nullptr && this->stepName_ == nullptr
        && this->timeCost_ == nullptr; };
        // DBNodeId Field Functions 
        bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
        void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
        inline string getDBNodeId() const { DARABONBA_PTR_GET_DEFAULT(DBNodeId_, "") };
        inline SwitchStepItems& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline SwitchStepItems& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // isSuccess Field Functions 
        bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
        void deleteIsSuccess() { this->isSuccess_ = nullptr;};
        inline string getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, "") };
        inline SwitchStepItems& setIsSuccess(string isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


        // simulatePhase Field Functions 
        bool hasSimulatePhase() const { return this->simulatePhase_ != nullptr;};
        void deleteSimulatePhase() { this->simulatePhase_ = nullptr;};
        inline string getSimulatePhase() const { DARABONBA_PTR_GET_DEFAULT(simulatePhase_, "") };
        inline SwitchStepItems& setSimulatePhase(string simulatePhase) { DARABONBA_PTR_SET_VALUE(simulatePhase_, simulatePhase) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline SwitchStepItems& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // stepName Field Functions 
        bool hasStepName() const { return this->stepName_ != nullptr;};
        void deleteStepName() { this->stepName_ = nullptr;};
        inline string getStepName() const { DARABONBA_PTR_GET_DEFAULT(stepName_, "") };
        inline SwitchStepItems& setStepName(string stepName) { DARABONBA_PTR_SET_VALUE(stepName_, stepName) };


        // timeCost Field Functions 
        bool hasTimeCost() const { return this->timeCost_ != nullptr;};
        void deleteTimeCost() { this->timeCost_ = nullptr;};
        inline string getTimeCost() const { DARABONBA_PTR_GET_DEFAULT(timeCost_, "") };
        inline SwitchStepItems& setTimeCost(string timeCost) { DARABONBA_PTR_SET_VALUE(timeCost_, timeCost) };


      protected:
        shared_ptr<string> DBNodeId_ {};
        shared_ptr<string> endTime_ {};
        shared_ptr<string> isSuccess_ {};
        shared_ptr<string> simulatePhase_ {};
        shared_ptr<string> startTime_ {};
        shared_ptr<string> stepName_ {};
        shared_ptr<string> timeCost_ {};
      };

      class SwitchLogItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SwitchLogItems& obj) { 
          DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_TO_JSON(DstDbType, dstDbType_);
          DARABONBA_PTR_TO_JSON(EventFinishTime, eventFinishTime_);
          DARABONBA_PTR_TO_JSON(EventStartTime, eventStartTime_);
          DARABONBA_PTR_TO_JSON(SimulateListId, simulateListId_);
          DARABONBA_PTR_TO_JSON(SimulateLogId, simulateLogId_);
          DARABONBA_PTR_TO_JSON(SimulateStatus, simulateStatus_);
          DARABONBA_PTR_TO_JSON(SrcDbType, srcDbType_);
          DARABONBA_PTR_TO_JSON(SwitchStepItems, switchStepItems_);
        };
        friend void from_json(const Darabonba::Json& j, SwitchLogItems& obj) { 
          DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_FROM_JSON(DstDbType, dstDbType_);
          DARABONBA_PTR_FROM_JSON(EventFinishTime, eventFinishTime_);
          DARABONBA_PTR_FROM_JSON(EventStartTime, eventStartTime_);
          DARABONBA_PTR_FROM_JSON(SimulateListId, simulateListId_);
          DARABONBA_PTR_FROM_JSON(SimulateLogId, simulateLogId_);
          DARABONBA_PTR_FROM_JSON(SimulateStatus, simulateStatus_);
          DARABONBA_PTR_FROM_JSON(SrcDbType, srcDbType_);
          DARABONBA_PTR_FROM_JSON(SwitchStepItems, switchStepItems_);
        };
        SwitchLogItems() = default ;
        SwitchLogItems(const SwitchLogItems &) = default ;
        SwitchLogItems(SwitchLogItems &&) = default ;
        SwitchLogItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SwitchLogItems() = default ;
        SwitchLogItems& operator=(const SwitchLogItems &) = default ;
        SwitchLogItems& operator=(SwitchLogItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SwitchStepItems : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SwitchStepItems& obj) { 
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
            DARABONBA_PTR_TO_JSON(SimulatePhase, simulatePhase_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            DARABONBA_PTR_TO_JSON(StepName, stepName_);
            DARABONBA_PTR_TO_JSON(TimeCost, timeCost_);
          };
          friend void from_json(const Darabonba::Json& j, SwitchStepItems& obj) { 
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
            DARABONBA_PTR_FROM_JSON(SimulatePhase, simulatePhase_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            DARABONBA_PTR_FROM_JSON(StepName, stepName_);
            DARABONBA_PTR_FROM_JSON(TimeCost, timeCost_);
          };
          SwitchStepItems() = default ;
          SwitchStepItems(const SwitchStepItems &) = default ;
          SwitchStepItems(SwitchStepItems &&) = default ;
          SwitchStepItems(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SwitchStepItems() = default ;
          SwitchStepItems& operator=(const SwitchStepItems &) = default ;
          SwitchStepItems& operator=(SwitchStepItems &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->endTime_ == nullptr
        && this->isSuccess_ == nullptr && this->simulatePhase_ == nullptr && this->startTime_ == nullptr && this->stepName_ == nullptr && this->timeCost_ == nullptr; };
          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
          inline SwitchStepItems& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // isSuccess Field Functions 
          bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
          void deleteIsSuccess() { this->isSuccess_ = nullptr;};
          inline string getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, "") };
          inline SwitchStepItems& setIsSuccess(string isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


          // simulatePhase Field Functions 
          bool hasSimulatePhase() const { return this->simulatePhase_ != nullptr;};
          void deleteSimulatePhase() { this->simulatePhase_ = nullptr;};
          inline string getSimulatePhase() const { DARABONBA_PTR_GET_DEFAULT(simulatePhase_, "") };
          inline SwitchStepItems& setSimulatePhase(string simulatePhase) { DARABONBA_PTR_SET_VALUE(simulatePhase_, simulatePhase) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline SwitchStepItems& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // stepName Field Functions 
          bool hasStepName() const { return this->stepName_ != nullptr;};
          void deleteStepName() { this->stepName_ = nullptr;};
          inline string getStepName() const { DARABONBA_PTR_GET_DEFAULT(stepName_, "") };
          inline SwitchStepItems& setStepName(string stepName) { DARABONBA_PTR_SET_VALUE(stepName_, stepName) };


          // timeCost Field Functions 
          bool hasTimeCost() const { return this->timeCost_ != nullptr;};
          void deleteTimeCost() { this->timeCost_ = nullptr;};
          inline string getTimeCost() const { DARABONBA_PTR_GET_DEFAULT(timeCost_, "") };
          inline SwitchStepItems& setTimeCost(string timeCost) { DARABONBA_PTR_SET_VALUE(timeCost_, timeCost) };


        protected:
          shared_ptr<string> endTime_ {};
          shared_ptr<string> isSuccess_ {};
          shared_ptr<string> simulatePhase_ {};
          shared_ptr<string> startTime_ {};
          shared_ptr<string> stepName_ {};
          shared_ptr<string> timeCost_ {};
        };

        virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->dstDbType_ == nullptr && this->eventFinishTime_ == nullptr && this->eventStartTime_ == nullptr && this->simulateListId_ == nullptr && this->simulateLogId_ == nullptr
        && this->simulateStatus_ == nullptr && this->srcDbType_ == nullptr && this->switchStepItems_ == nullptr; };
        // DBInstanceId Field Functions 
        bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
        void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
        inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
        inline SwitchLogItems& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


        // dstDbType Field Functions 
        bool hasDstDbType() const { return this->dstDbType_ != nullptr;};
        void deleteDstDbType() { this->dstDbType_ = nullptr;};
        inline string getDstDbType() const { DARABONBA_PTR_GET_DEFAULT(dstDbType_, "") };
        inline SwitchLogItems& setDstDbType(string dstDbType) { DARABONBA_PTR_SET_VALUE(dstDbType_, dstDbType) };


        // eventFinishTime Field Functions 
        bool hasEventFinishTime() const { return this->eventFinishTime_ != nullptr;};
        void deleteEventFinishTime() { this->eventFinishTime_ = nullptr;};
        inline string getEventFinishTime() const { DARABONBA_PTR_GET_DEFAULT(eventFinishTime_, "") };
        inline SwitchLogItems& setEventFinishTime(string eventFinishTime) { DARABONBA_PTR_SET_VALUE(eventFinishTime_, eventFinishTime) };


        // eventStartTime Field Functions 
        bool hasEventStartTime() const { return this->eventStartTime_ != nullptr;};
        void deleteEventStartTime() { this->eventStartTime_ = nullptr;};
        inline string getEventStartTime() const { DARABONBA_PTR_GET_DEFAULT(eventStartTime_, "") };
        inline SwitchLogItems& setEventStartTime(string eventStartTime) { DARABONBA_PTR_SET_VALUE(eventStartTime_, eventStartTime) };


        // simulateListId Field Functions 
        bool hasSimulateListId() const { return this->simulateListId_ != nullptr;};
        void deleteSimulateListId() { this->simulateListId_ = nullptr;};
        inline string getSimulateListId() const { DARABONBA_PTR_GET_DEFAULT(simulateListId_, "") };
        inline SwitchLogItems& setSimulateListId(string simulateListId) { DARABONBA_PTR_SET_VALUE(simulateListId_, simulateListId) };


        // simulateLogId Field Functions 
        bool hasSimulateLogId() const { return this->simulateLogId_ != nullptr;};
        void deleteSimulateLogId() { this->simulateLogId_ = nullptr;};
        inline string getSimulateLogId() const { DARABONBA_PTR_GET_DEFAULT(simulateLogId_, "") };
        inline SwitchLogItems& setSimulateLogId(string simulateLogId) { DARABONBA_PTR_SET_VALUE(simulateLogId_, simulateLogId) };


        // simulateStatus Field Functions 
        bool hasSimulateStatus() const { return this->simulateStatus_ != nullptr;};
        void deleteSimulateStatus() { this->simulateStatus_ = nullptr;};
        inline string getSimulateStatus() const { DARABONBA_PTR_GET_DEFAULT(simulateStatus_, "") };
        inline SwitchLogItems& setSimulateStatus(string simulateStatus) { DARABONBA_PTR_SET_VALUE(simulateStatus_, simulateStatus) };


        // srcDbType Field Functions 
        bool hasSrcDbType() const { return this->srcDbType_ != nullptr;};
        void deleteSrcDbType() { this->srcDbType_ = nullptr;};
        inline string getSrcDbType() const { DARABONBA_PTR_GET_DEFAULT(srcDbType_, "") };
        inline SwitchLogItems& setSrcDbType(string srcDbType) { DARABONBA_PTR_SET_VALUE(srcDbType_, srcDbType) };


        // switchStepItems Field Functions 
        bool hasSwitchStepItems() const { return this->switchStepItems_ != nullptr;};
        void deleteSwitchStepItems() { this->switchStepItems_ = nullptr;};
        inline const vector<SwitchLogItems::SwitchStepItems> & getSwitchStepItems() const { DARABONBA_PTR_GET_CONST(switchStepItems_, vector<SwitchLogItems::SwitchStepItems>) };
        inline vector<SwitchLogItems::SwitchStepItems> getSwitchStepItems() { DARABONBA_PTR_GET(switchStepItems_, vector<SwitchLogItems::SwitchStepItems>) };
        inline SwitchLogItems& setSwitchStepItems(const vector<SwitchLogItems::SwitchStepItems> & switchStepItems) { DARABONBA_PTR_SET_VALUE(switchStepItems_, switchStepItems) };
        inline SwitchLogItems& setSwitchStepItems(vector<SwitchLogItems::SwitchStepItems> && switchStepItems) { DARABONBA_PTR_SET_RVALUE(switchStepItems_, switchStepItems) };


      protected:
        shared_ptr<string> DBInstanceId_ {};
        shared_ptr<string> dstDbType_ {};
        shared_ptr<string> eventFinishTime_ {};
        shared_ptr<string> eventStartTime_ {};
        shared_ptr<string> simulateListId_ {};
        shared_ptr<string> simulateLogId_ {};
        shared_ptr<string> simulateStatus_ {};
        shared_ptr<string> srcDbType_ {};
        shared_ptr<vector<SwitchLogItems::SwitchStepItems>> switchStepItems_ {};
      };

      virtual bool empty() const override { return this->DBNodeCrashList_ == nullptr
        && this->endTime_ == nullptr && this->eventFinishTime_ == nullptr && this->eventStartTime_ == nullptr && this->faultInjectionType_ == nullptr && this->simulateListId_ == nullptr
        && this->simulateMode_ == nullptr && this->simulateStatus_ == nullptr && this->simulateTaskId_ == nullptr && this->startTime_ == nullptr && this->switchLogItems_ == nullptr
        && this->switchStepItems_ == nullptr; };
      // DBNodeCrashList Field Functions 
      bool hasDBNodeCrashList() const { return this->DBNodeCrashList_ != nullptr;};
      void deleteDBNodeCrashList() { this->DBNodeCrashList_ = nullptr;};
      inline const vector<string> & getDBNodeCrashList() const { DARABONBA_PTR_GET_CONST(DBNodeCrashList_, vector<string>) };
      inline vector<string> getDBNodeCrashList() { DARABONBA_PTR_GET(DBNodeCrashList_, vector<string>) };
      inline SwitchListItems& setDBNodeCrashList(const vector<string> & DBNodeCrashList) { DARABONBA_PTR_SET_VALUE(DBNodeCrashList_, DBNodeCrashList) };
      inline SwitchListItems& setDBNodeCrashList(vector<string> && DBNodeCrashList) { DARABONBA_PTR_SET_RVALUE(DBNodeCrashList_, DBNodeCrashList) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline SwitchListItems& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // eventFinishTime Field Functions 
      bool hasEventFinishTime() const { return this->eventFinishTime_ != nullptr;};
      void deleteEventFinishTime() { this->eventFinishTime_ = nullptr;};
      inline string getEventFinishTime() const { DARABONBA_PTR_GET_DEFAULT(eventFinishTime_, "") };
      inline SwitchListItems& setEventFinishTime(string eventFinishTime) { DARABONBA_PTR_SET_VALUE(eventFinishTime_, eventFinishTime) };


      // eventStartTime Field Functions 
      bool hasEventStartTime() const { return this->eventStartTime_ != nullptr;};
      void deleteEventStartTime() { this->eventStartTime_ = nullptr;};
      inline string getEventStartTime() const { DARABONBA_PTR_GET_DEFAULT(eventStartTime_, "") };
      inline SwitchListItems& setEventStartTime(string eventStartTime) { DARABONBA_PTR_SET_VALUE(eventStartTime_, eventStartTime) };


      // faultInjectionType Field Functions 
      bool hasFaultInjectionType() const { return this->faultInjectionType_ != nullptr;};
      void deleteFaultInjectionType() { this->faultInjectionType_ = nullptr;};
      inline string getFaultInjectionType() const { DARABONBA_PTR_GET_DEFAULT(faultInjectionType_, "") };
      inline SwitchListItems& setFaultInjectionType(string faultInjectionType) { DARABONBA_PTR_SET_VALUE(faultInjectionType_, faultInjectionType) };


      // simulateListId Field Functions 
      bool hasSimulateListId() const { return this->simulateListId_ != nullptr;};
      void deleteSimulateListId() { this->simulateListId_ = nullptr;};
      inline string getSimulateListId() const { DARABONBA_PTR_GET_DEFAULT(simulateListId_, "") };
      inline SwitchListItems& setSimulateListId(string simulateListId) { DARABONBA_PTR_SET_VALUE(simulateListId_, simulateListId) };


      // simulateMode Field Functions 
      bool hasSimulateMode() const { return this->simulateMode_ != nullptr;};
      void deleteSimulateMode() { this->simulateMode_ = nullptr;};
      inline string getSimulateMode() const { DARABONBA_PTR_GET_DEFAULT(simulateMode_, "") };
      inline SwitchListItems& setSimulateMode(string simulateMode) { DARABONBA_PTR_SET_VALUE(simulateMode_, simulateMode) };


      // simulateStatus Field Functions 
      bool hasSimulateStatus() const { return this->simulateStatus_ != nullptr;};
      void deleteSimulateStatus() { this->simulateStatus_ = nullptr;};
      inline string getSimulateStatus() const { DARABONBA_PTR_GET_DEFAULT(simulateStatus_, "") };
      inline SwitchListItems& setSimulateStatus(string simulateStatus) { DARABONBA_PTR_SET_VALUE(simulateStatus_, simulateStatus) };


      // simulateTaskId Field Functions 
      bool hasSimulateTaskId() const { return this->simulateTaskId_ != nullptr;};
      void deleteSimulateTaskId() { this->simulateTaskId_ = nullptr;};
      inline string getSimulateTaskId() const { DARABONBA_PTR_GET_DEFAULT(simulateTaskId_, "") };
      inline SwitchListItems& setSimulateTaskId(string simulateTaskId) { DARABONBA_PTR_SET_VALUE(simulateTaskId_, simulateTaskId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline SwitchListItems& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // switchLogItems Field Functions 
      bool hasSwitchLogItems() const { return this->switchLogItems_ != nullptr;};
      void deleteSwitchLogItems() { this->switchLogItems_ = nullptr;};
      inline const vector<SwitchListItems::SwitchLogItems> & getSwitchLogItems() const { DARABONBA_PTR_GET_CONST(switchLogItems_, vector<SwitchListItems::SwitchLogItems>) };
      inline vector<SwitchListItems::SwitchLogItems> getSwitchLogItems() { DARABONBA_PTR_GET(switchLogItems_, vector<SwitchListItems::SwitchLogItems>) };
      inline SwitchListItems& setSwitchLogItems(const vector<SwitchListItems::SwitchLogItems> & switchLogItems) { DARABONBA_PTR_SET_VALUE(switchLogItems_, switchLogItems) };
      inline SwitchListItems& setSwitchLogItems(vector<SwitchListItems::SwitchLogItems> && switchLogItems) { DARABONBA_PTR_SET_RVALUE(switchLogItems_, switchLogItems) };


      // switchStepItems Field Functions 
      bool hasSwitchStepItems() const { return this->switchStepItems_ != nullptr;};
      void deleteSwitchStepItems() { this->switchStepItems_ = nullptr;};
      inline const vector<SwitchListItems::SwitchStepItems> & getSwitchStepItems() const { DARABONBA_PTR_GET_CONST(switchStepItems_, vector<SwitchListItems::SwitchStepItems>) };
      inline vector<SwitchListItems::SwitchStepItems> getSwitchStepItems() { DARABONBA_PTR_GET(switchStepItems_, vector<SwitchListItems::SwitchStepItems>) };
      inline SwitchListItems& setSwitchStepItems(const vector<SwitchListItems::SwitchStepItems> & switchStepItems) { DARABONBA_PTR_SET_VALUE(switchStepItems_, switchStepItems) };
      inline SwitchListItems& setSwitchStepItems(vector<SwitchListItems::SwitchStepItems> && switchStepItems) { DARABONBA_PTR_SET_RVALUE(switchStepItems_, switchStepItems) };


    protected:
      shared_ptr<vector<string>> DBNodeCrashList_ {};
      shared_ptr<string> endTime_ {};
      shared_ptr<string> eventFinishTime_ {};
      shared_ptr<string> eventStartTime_ {};
      shared_ptr<string> faultInjectionType_ {};
      shared_ptr<string> simulateListId_ {};
      shared_ptr<string> simulateMode_ {};
      shared_ptr<string> simulateStatus_ {};
      shared_ptr<string> simulateTaskId_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<vector<SwitchListItems::SwitchLogItems>> switchLogItems_ {};
      shared_ptr<vector<SwitchListItems::SwitchStepItems>> switchStepItems_ {};
    };

    class HaLogItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HaLogItems& obj) { 
        DARABONBA_PTR_TO_JSON(AffectedSessions, affectedSessions_);
        DARABONBA_PTR_TO_JSON(FromDBType, fromDBType_);
        DARABONBA_PTR_TO_JSON(SwitchCauseCode, switchCauseCode_);
        DARABONBA_PTR_TO_JSON(SwitchCauseDetail, switchCauseDetail_);
        DARABONBA_PTR_TO_JSON(SwitchFinishTime, switchFinishTime_);
        DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
        DARABONBA_PTR_TO_JSON(SwitchStartTime, switchStartTime_);
        DARABONBA_PTR_TO_JSON(SwitchType, switchType_);
        DARABONBA_PTR_TO_JSON(TotalSessions, totalSessions_);
      };
      friend void from_json(const Darabonba::Json& j, HaLogItems& obj) { 
        DARABONBA_PTR_FROM_JSON(AffectedSessions, affectedSessions_);
        DARABONBA_PTR_FROM_JSON(FromDBType, fromDBType_);
        DARABONBA_PTR_FROM_JSON(SwitchCauseCode, switchCauseCode_);
        DARABONBA_PTR_FROM_JSON(SwitchCauseDetail, switchCauseDetail_);
        DARABONBA_PTR_FROM_JSON(SwitchFinishTime, switchFinishTime_);
        DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
        DARABONBA_PTR_FROM_JSON(SwitchStartTime, switchStartTime_);
        DARABONBA_PTR_FROM_JSON(SwitchType, switchType_);
        DARABONBA_PTR_FROM_JSON(TotalSessions, totalSessions_);
      };
      HaLogItems() = default ;
      HaLogItems(const HaLogItems &) = default ;
      HaLogItems(HaLogItems &&) = default ;
      HaLogItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HaLogItems() = default ;
      HaLogItems& operator=(const HaLogItems &) = default ;
      HaLogItems& operator=(HaLogItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->affectedSessions_ == nullptr
        && this->fromDBType_ == nullptr && this->switchCauseCode_ == nullptr && this->switchCauseDetail_ == nullptr && this->switchFinishTime_ == nullptr && this->switchId_ == nullptr
        && this->switchStartTime_ == nullptr && this->switchType_ == nullptr && this->totalSessions_ == nullptr; };
      // affectedSessions Field Functions 
      bool hasAffectedSessions() const { return this->affectedSessions_ != nullptr;};
      void deleteAffectedSessions() { this->affectedSessions_ = nullptr;};
      inline int64_t getAffectedSessions() const { DARABONBA_PTR_GET_DEFAULT(affectedSessions_, 0L) };
      inline HaLogItems& setAffectedSessions(int64_t affectedSessions) { DARABONBA_PTR_SET_VALUE(affectedSessions_, affectedSessions) };


      // fromDBType Field Functions 
      bool hasFromDBType() const { return this->fromDBType_ != nullptr;};
      void deleteFromDBType() { this->fromDBType_ = nullptr;};
      inline string getFromDBType() const { DARABONBA_PTR_GET_DEFAULT(fromDBType_, "") };
      inline HaLogItems& setFromDBType(string fromDBType) { DARABONBA_PTR_SET_VALUE(fromDBType_, fromDBType) };


      // switchCauseCode Field Functions 
      bool hasSwitchCauseCode() const { return this->switchCauseCode_ != nullptr;};
      void deleteSwitchCauseCode() { this->switchCauseCode_ = nullptr;};
      inline string getSwitchCauseCode() const { DARABONBA_PTR_GET_DEFAULT(switchCauseCode_, "") };
      inline HaLogItems& setSwitchCauseCode(string switchCauseCode) { DARABONBA_PTR_SET_VALUE(switchCauseCode_, switchCauseCode) };


      // switchCauseDetail Field Functions 
      bool hasSwitchCauseDetail() const { return this->switchCauseDetail_ != nullptr;};
      void deleteSwitchCauseDetail() { this->switchCauseDetail_ = nullptr;};
      inline string getSwitchCauseDetail() const { DARABONBA_PTR_GET_DEFAULT(switchCauseDetail_, "") };
      inline HaLogItems& setSwitchCauseDetail(string switchCauseDetail) { DARABONBA_PTR_SET_VALUE(switchCauseDetail_, switchCauseDetail) };


      // switchFinishTime Field Functions 
      bool hasSwitchFinishTime() const { return this->switchFinishTime_ != nullptr;};
      void deleteSwitchFinishTime() { this->switchFinishTime_ = nullptr;};
      inline string getSwitchFinishTime() const { DARABONBA_PTR_GET_DEFAULT(switchFinishTime_, "") };
      inline HaLogItems& setSwitchFinishTime(string switchFinishTime) { DARABONBA_PTR_SET_VALUE(switchFinishTime_, switchFinishTime) };


      // switchId Field Functions 
      bool hasSwitchId() const { return this->switchId_ != nullptr;};
      void deleteSwitchId() { this->switchId_ = nullptr;};
      inline string getSwitchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
      inline HaLogItems& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


      // switchStartTime Field Functions 
      bool hasSwitchStartTime() const { return this->switchStartTime_ != nullptr;};
      void deleteSwitchStartTime() { this->switchStartTime_ = nullptr;};
      inline string getSwitchStartTime() const { DARABONBA_PTR_GET_DEFAULT(switchStartTime_, "") };
      inline HaLogItems& setSwitchStartTime(string switchStartTime) { DARABONBA_PTR_SET_VALUE(switchStartTime_, switchStartTime) };


      // switchType Field Functions 
      bool hasSwitchType() const { return this->switchType_ != nullptr;};
      void deleteSwitchType() { this->switchType_ = nullptr;};
      inline int64_t getSwitchType() const { DARABONBA_PTR_GET_DEFAULT(switchType_, 0L) };
      inline HaLogItems& setSwitchType(int64_t switchType) { DARABONBA_PTR_SET_VALUE(switchType_, switchType) };


      // totalSessions Field Functions 
      bool hasTotalSessions() const { return this->totalSessions_ != nullptr;};
      void deleteTotalSessions() { this->totalSessions_ = nullptr;};
      inline int64_t getTotalSessions() const { DARABONBA_PTR_GET_DEFAULT(totalSessions_, 0L) };
      inline HaLogItems& setTotalSessions(int64_t totalSessions) { DARABONBA_PTR_SET_VALUE(totalSessions_, totalSessions) };


    protected:
      shared_ptr<int64_t> affectedSessions_ {};
      shared_ptr<string> fromDBType_ {};
      shared_ptr<string> switchCauseCode_ {};
      shared_ptr<string> switchCauseDetail_ {};
      shared_ptr<string> switchFinishTime_ {};
      shared_ptr<string> switchId_ {};
      shared_ptr<string> switchStartTime_ {};
      shared_ptr<int64_t> switchType_ {};
      shared_ptr<int64_t> totalSessions_ {};
    };

    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->DBInstanceType_ == nullptr && this->haLogItems_ == nullptr && this->haStatus_ == nullptr && this->itemsNumbers_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->switchListItems_ == nullptr && this->switchLogItems_ == nullptr && this->totalRecords_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeDBLogFilesResponseBody& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // DBInstanceType Field Functions 
    bool hasDBInstanceType() const { return this->DBInstanceType_ != nullptr;};
    void deleteDBInstanceType() { this->DBInstanceType_ = nullptr;};
    inline string getDBInstanceType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceType_, "") };
    inline DescribeDBLogFilesResponseBody& setDBInstanceType(string DBInstanceType) { DARABONBA_PTR_SET_VALUE(DBInstanceType_, DBInstanceType) };


    // haLogItems Field Functions 
    bool hasHaLogItems() const { return this->haLogItems_ != nullptr;};
    void deleteHaLogItems() { this->haLogItems_ = nullptr;};
    inline const vector<DescribeDBLogFilesResponseBody::HaLogItems> & getHaLogItems() const { DARABONBA_PTR_GET_CONST(haLogItems_, vector<DescribeDBLogFilesResponseBody::HaLogItems>) };
    inline vector<DescribeDBLogFilesResponseBody::HaLogItems> getHaLogItems() { DARABONBA_PTR_GET(haLogItems_, vector<DescribeDBLogFilesResponseBody::HaLogItems>) };
    inline DescribeDBLogFilesResponseBody& setHaLogItems(const vector<DescribeDBLogFilesResponseBody::HaLogItems> & haLogItems) { DARABONBA_PTR_SET_VALUE(haLogItems_, haLogItems) };
    inline DescribeDBLogFilesResponseBody& setHaLogItems(vector<DescribeDBLogFilesResponseBody::HaLogItems> && haLogItems) { DARABONBA_PTR_SET_RVALUE(haLogItems_, haLogItems) };


    // haStatus Field Functions 
    bool hasHaStatus() const { return this->haStatus_ != nullptr;};
    void deleteHaStatus() { this->haStatus_ = nullptr;};
    inline int32_t getHaStatus() const { DARABONBA_PTR_GET_DEFAULT(haStatus_, 0) };
    inline DescribeDBLogFilesResponseBody& setHaStatus(int32_t haStatus) { DARABONBA_PTR_SET_VALUE(haStatus_, haStatus) };


    // itemsNumbers Field Functions 
    bool hasItemsNumbers() const { return this->itemsNumbers_ != nullptr;};
    void deleteItemsNumbers() { this->itemsNumbers_ = nullptr;};
    inline int32_t getItemsNumbers() const { DARABONBA_PTR_GET_DEFAULT(itemsNumbers_, 0) };
    inline DescribeDBLogFilesResponseBody& setItemsNumbers(int32_t itemsNumbers) { DARABONBA_PTR_SET_VALUE(itemsNumbers_, itemsNumbers) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDBLogFilesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDBLogFilesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBLogFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // switchListItems Field Functions 
    bool hasSwitchListItems() const { return this->switchListItems_ != nullptr;};
    void deleteSwitchListItems() { this->switchListItems_ = nullptr;};
    inline const vector<DescribeDBLogFilesResponseBody::SwitchListItems> & getSwitchListItems() const { DARABONBA_PTR_GET_CONST(switchListItems_, vector<DescribeDBLogFilesResponseBody::SwitchListItems>) };
    inline vector<DescribeDBLogFilesResponseBody::SwitchListItems> getSwitchListItems() { DARABONBA_PTR_GET(switchListItems_, vector<DescribeDBLogFilesResponseBody::SwitchListItems>) };
    inline DescribeDBLogFilesResponseBody& setSwitchListItems(const vector<DescribeDBLogFilesResponseBody::SwitchListItems> & switchListItems) { DARABONBA_PTR_SET_VALUE(switchListItems_, switchListItems) };
    inline DescribeDBLogFilesResponseBody& setSwitchListItems(vector<DescribeDBLogFilesResponseBody::SwitchListItems> && switchListItems) { DARABONBA_PTR_SET_RVALUE(switchListItems_, switchListItems) };


    // switchLogItems Field Functions 
    bool hasSwitchLogItems() const { return this->switchLogItems_ != nullptr;};
    void deleteSwitchLogItems() { this->switchLogItems_ = nullptr;};
    inline const vector<DescribeDBLogFilesResponseBody::SwitchLogItems> & getSwitchLogItems() const { DARABONBA_PTR_GET_CONST(switchLogItems_, vector<DescribeDBLogFilesResponseBody::SwitchLogItems>) };
    inline vector<DescribeDBLogFilesResponseBody::SwitchLogItems> getSwitchLogItems() { DARABONBA_PTR_GET(switchLogItems_, vector<DescribeDBLogFilesResponseBody::SwitchLogItems>) };
    inline DescribeDBLogFilesResponseBody& setSwitchLogItems(const vector<DescribeDBLogFilesResponseBody::SwitchLogItems> & switchLogItems) { DARABONBA_PTR_SET_VALUE(switchLogItems_, switchLogItems) };
    inline DescribeDBLogFilesResponseBody& setSwitchLogItems(vector<DescribeDBLogFilesResponseBody::SwitchLogItems> && switchLogItems) { DARABONBA_PTR_SET_RVALUE(switchLogItems_, switchLogItems) };


    // totalRecords Field Functions 
    bool hasTotalRecords() const { return this->totalRecords_ != nullptr;};
    void deleteTotalRecords() { this->totalRecords_ = nullptr;};
    inline int32_t getTotalRecords() const { DARABONBA_PTR_GET_DEFAULT(totalRecords_, 0) };
    inline DescribeDBLogFilesResponseBody& setTotalRecords(int32_t totalRecords) { DARABONBA_PTR_SET_VALUE(totalRecords_, totalRecords) };


  protected:
    shared_ptr<string> DBInstanceName_ {};
    shared_ptr<string> DBInstanceType_ {};
    shared_ptr<vector<DescribeDBLogFilesResponseBody::HaLogItems>> haLogItems_ {};
    shared_ptr<int32_t> haStatus_ {};
    shared_ptr<int32_t> itemsNumbers_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeDBLogFilesResponseBody::SwitchListItems>> switchListItems_ {};
    shared_ptr<vector<DescribeDBLogFilesResponseBody::SwitchLogItems>> switchLogItems_ {};
    shared_ptr<int32_t> totalRecords_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
