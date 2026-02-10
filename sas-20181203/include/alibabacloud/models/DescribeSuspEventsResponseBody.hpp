// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSuspEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSuspEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuspEvents, suspEvents_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSuspEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuspEvents, suspEvents_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSuspEventsResponseBody() = default ;
    DescribeSuspEventsResponseBody(const DescribeSuspEventsResponseBody &) = default ;
    DescribeSuspEventsResponseBody(DescribeSuspEventsResponseBody &&) = default ;
    DescribeSuspEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSuspEventsResponseBody() = default ;
    DescribeSuspEventsResponseBody& operator=(const DescribeSuspEventsResponseBody &) = default ;
    DescribeSuspEventsResponseBody& operator=(DescribeSuspEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SuspEvents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SuspEvents& obj) { 
        DARABONBA_PTR_TO_JSON(Advanced, advanced_);
        DARABONBA_PTR_TO_JSON(AlarmEventName, alarmEventName_);
        DARABONBA_PTR_TO_JSON(AlarmEventNameDisplay, alarmEventNameDisplay_);
        DARABONBA_PTR_TO_JSON(AlarmEventType, alarmEventType_);
        DARABONBA_PTR_TO_JSON(AlarmEventTypeDisplay, alarmEventTypeDisplay_);
        DARABONBA_PTR_TO_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(AutoBreaking, autoBreaking_);
        DARABONBA_PTR_TO_JSON(CanBeDealOnLine, canBeDealOnLine_);
        DARABONBA_PTR_TO_JSON(CanCancelFault, canCancelFault_);
        DARABONBA_PTR_TO_JSON(ContainHwMode, containHwMode_);
        DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
        DARABONBA_PTR_TO_JSON(ContainerImageId, containerImageId_);
        DARABONBA_PTR_TO_JSON(ContainerImageName, containerImageName_);
        DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
        DARABONBA_PTR_TO_JSON(Desc, desc_);
        DARABONBA_PTR_TO_JSON(Details, details_);
        DARABONBA_PTR_TO_JSON(DisplaySandboxResult, displaySandboxResult_);
        DARABONBA_PTR_TO_JSON(EventNotes, eventNotes_);
        DARABONBA_PTR_TO_JSON(EventStatus, eventStatus_);
        DARABONBA_PTR_TO_JSON(EventSubType, eventSubType_);
        DARABONBA_PTR_TO_JSON(HasTraceInfo, hasTraceInfo_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ImageUuid, imageUuid_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(K8sClusterId, k8sClusterId_);
        DARABONBA_PTR_TO_JSON(K8sClusterName, k8sClusterName_);
        DARABONBA_PTR_TO_JSON(K8sNamespace, k8sNamespace_);
        DARABONBA_PTR_TO_JSON(K8sNodeId, k8sNodeId_);
        DARABONBA_PTR_TO_JSON(K8sNodeName, k8sNodeName_);
        DARABONBA_PTR_TO_JSON(K8sPodName, k8sPodName_);
        DARABONBA_PTR_TO_JSON(LargeModel, largeModel_);
        DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
        DARABONBA_PTR_TO_JSON(LastTimeStamp, lastTimeStamp_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(MaliciousRuleStatus, maliciousRuleStatus_);
        DARABONBA_PTR_TO_JSON(MarkList, markList_);
        DARABONBA_PTR_TO_JSON(MarkMisRules, markMisRules_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OccurrenceTime, occurrenceTime_);
        DARABONBA_PTR_TO_JSON(OccurrenceTimeStamp, occurrenceTimeStamp_);
        DARABONBA_PTR_TO_JSON(OperateErrorCode, operateErrorCode_);
        DARABONBA_PTR_TO_JSON(OperateMsg, operateMsg_);
        DARABONBA_PTR_TO_JSON(OperateTime, operateTime_);
        DARABONBA_PTR_TO_JSON(SaleVersion, saleVersion_);
        DARABONBA_PTR_TO_JSON(SecurityEventIds, securityEventIds_);
        DARABONBA_PTR_TO_JSON(SourceAliUid, sourceAliUid_);
        DARABONBA_PTR_TO_JSON(Stages, stages_);
        DARABONBA_PTR_TO_JSON(SupportOperateCode, supportOperateCode_);
        DARABONBA_PTR_TO_JSON(TacticItems, tacticItems_);
        DARABONBA_PTR_TO_JSON(UniqueInfo, uniqueInfo_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
      };
      friend void from_json(const Darabonba::Json& j, SuspEvents& obj) { 
        DARABONBA_PTR_FROM_JSON(Advanced, advanced_);
        DARABONBA_PTR_FROM_JSON(AlarmEventName, alarmEventName_);
        DARABONBA_PTR_FROM_JSON(AlarmEventNameDisplay, alarmEventNameDisplay_);
        DARABONBA_PTR_FROM_JSON(AlarmEventType, alarmEventType_);
        DARABONBA_PTR_FROM_JSON(AlarmEventTypeDisplay, alarmEventTypeDisplay_);
        DARABONBA_PTR_FROM_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(AutoBreaking, autoBreaking_);
        DARABONBA_PTR_FROM_JSON(CanBeDealOnLine, canBeDealOnLine_);
        DARABONBA_PTR_FROM_JSON(CanCancelFault, canCancelFault_);
        DARABONBA_PTR_FROM_JSON(ContainHwMode, containHwMode_);
        DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
        DARABONBA_PTR_FROM_JSON(ContainerImageId, containerImageId_);
        DARABONBA_PTR_FROM_JSON(ContainerImageName, containerImageName_);
        DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
        DARABONBA_PTR_FROM_JSON(Desc, desc_);
        DARABONBA_PTR_FROM_JSON(Details, details_);
        DARABONBA_PTR_FROM_JSON(DisplaySandboxResult, displaySandboxResult_);
        DARABONBA_PTR_FROM_JSON(EventNotes, eventNotes_);
        DARABONBA_PTR_FROM_JSON(EventStatus, eventStatus_);
        DARABONBA_PTR_FROM_JSON(EventSubType, eventSubType_);
        DARABONBA_PTR_FROM_JSON(HasTraceInfo, hasTraceInfo_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ImageUuid, imageUuid_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(K8sClusterId, k8sClusterId_);
        DARABONBA_PTR_FROM_JSON(K8sClusterName, k8sClusterName_);
        DARABONBA_PTR_FROM_JSON(K8sNamespace, k8sNamespace_);
        DARABONBA_PTR_FROM_JSON(K8sNodeId, k8sNodeId_);
        DARABONBA_PTR_FROM_JSON(K8sNodeName, k8sNodeName_);
        DARABONBA_PTR_FROM_JSON(K8sPodName, k8sPodName_);
        DARABONBA_PTR_FROM_JSON(LargeModel, largeModel_);
        DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
        DARABONBA_PTR_FROM_JSON(LastTimeStamp, lastTimeStamp_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(MaliciousRuleStatus, maliciousRuleStatus_);
        DARABONBA_PTR_FROM_JSON(MarkList, markList_);
        DARABONBA_PTR_FROM_JSON(MarkMisRules, markMisRules_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OccurrenceTime, occurrenceTime_);
        DARABONBA_PTR_FROM_JSON(OccurrenceTimeStamp, occurrenceTimeStamp_);
        DARABONBA_PTR_FROM_JSON(OperateErrorCode, operateErrorCode_);
        DARABONBA_PTR_FROM_JSON(OperateMsg, operateMsg_);
        DARABONBA_PTR_FROM_JSON(OperateTime, operateTime_);
        DARABONBA_PTR_FROM_JSON(SaleVersion, saleVersion_);
        DARABONBA_PTR_FROM_JSON(SecurityEventIds, securityEventIds_);
        DARABONBA_PTR_FROM_JSON(SourceAliUid, sourceAliUid_);
        DARABONBA_PTR_FROM_JSON(Stages, stages_);
        DARABONBA_PTR_FROM_JSON(SupportOperateCode, supportOperateCode_);
        DARABONBA_PTR_FROM_JSON(TacticItems, tacticItems_);
        DARABONBA_PTR_FROM_JSON(UniqueInfo, uniqueInfo_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
      };
      SuspEvents() = default ;
      SuspEvents(const SuspEvents &) = default ;
      SuspEvents(SuspEvents &&) = default ;
      SuspEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SuspEvents() = default ;
      SuspEvents& operator=(const SuspEvents &) = default ;
      SuspEvents& operator=(SuspEvents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TacticItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TacticItems& obj) { 
          DARABONBA_PTR_TO_JSON(TacticDisplayName, tacticDisplayName_);
          DARABONBA_PTR_TO_JSON(TacticId, tacticId_);
        };
        friend void from_json(const Darabonba::Json& j, TacticItems& obj) { 
          DARABONBA_PTR_FROM_JSON(TacticDisplayName, tacticDisplayName_);
          DARABONBA_PTR_FROM_JSON(TacticId, tacticId_);
        };
        TacticItems() = default ;
        TacticItems(const TacticItems &) = default ;
        TacticItems(TacticItems &&) = default ;
        TacticItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TacticItems() = default ;
        TacticItems& operator=(const TacticItems &) = default ;
        TacticItems& operator=(TacticItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tacticDisplayName_ == nullptr
        && this->tacticId_ == nullptr; };
        // tacticDisplayName Field Functions 
        bool hasTacticDisplayName() const { return this->tacticDisplayName_ != nullptr;};
        void deleteTacticDisplayName() { this->tacticDisplayName_ = nullptr;};
        inline string getTacticDisplayName() const { DARABONBA_PTR_GET_DEFAULT(tacticDisplayName_, "") };
        inline TacticItems& setTacticDisplayName(string tacticDisplayName) { DARABONBA_PTR_SET_VALUE(tacticDisplayName_, tacticDisplayName) };


        // tacticId Field Functions 
        bool hasTacticId() const { return this->tacticId_ != nullptr;};
        void deleteTacticId() { this->tacticId_ = nullptr;};
        inline string getTacticId() const { DARABONBA_PTR_GET_DEFAULT(tacticId_, "") };
        inline TacticItems& setTacticId(string tacticId) { DARABONBA_PTR_SET_VALUE(tacticId_, tacticId) };


      protected:
        // The tactic name of ATT\\&CK.
        shared_ptr<string> tacticDisplayName_ {};
        // The stage information about ATT\\&CK.
        shared_ptr<string> tacticId_ {};
      };

      class EventNotes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EventNotes& obj) { 
          DARABONBA_PTR_TO_JSON(Note, note_);
          DARABONBA_PTR_TO_JSON(NoteId, noteId_);
          DARABONBA_PTR_TO_JSON(NoteTime, noteTime_);
        };
        friend void from_json(const Darabonba::Json& j, EventNotes& obj) { 
          DARABONBA_PTR_FROM_JSON(Note, note_);
          DARABONBA_PTR_FROM_JSON(NoteId, noteId_);
          DARABONBA_PTR_FROM_JSON(NoteTime, noteTime_);
        };
        EventNotes() = default ;
        EventNotes(const EventNotes &) = default ;
        EventNotes(EventNotes &&) = default ;
        EventNotes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EventNotes() = default ;
        EventNotes& operator=(const EventNotes &) = default ;
        EventNotes& operator=(EventNotes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->note_ == nullptr
        && this->noteId_ == nullptr && this->noteTime_ == nullptr; };
        // note Field Functions 
        bool hasNote() const { return this->note_ != nullptr;};
        void deleteNote() { this->note_ = nullptr;};
        inline string getNote() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
        inline EventNotes& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


        // noteId Field Functions 
        bool hasNoteId() const { return this->noteId_ != nullptr;};
        void deleteNoteId() { this->noteId_ = nullptr;};
        inline int64_t getNoteId() const { DARABONBA_PTR_GET_DEFAULT(noteId_, 0L) };
        inline EventNotes& setNoteId(int64_t noteId) { DARABONBA_PTR_SET_VALUE(noteId_, noteId) };


        // noteTime Field Functions 
        bool hasNoteTime() const { return this->noteTime_ != nullptr;};
        void deleteNoteTime() { this->noteTime_ = nullptr;};
        inline string getNoteTime() const { DARABONBA_PTR_GET_DEFAULT(noteTime_, "") };
        inline EventNotes& setNoteTime(string noteTime) { DARABONBA_PTR_SET_VALUE(noteTime_, noteTime) };


      protected:
        // The note.
        shared_ptr<string> note_ {};
        // The ID of the note.
        shared_ptr<int64_t> noteId_ {};
        // The time when the note was created.
        shared_ptr<string> noteTime_ {};
      };

      class Details : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Details& obj) { 
          DARABONBA_PTR_TO_JSON(NameDisplay, nameDisplay_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Value, value_);
          DARABONBA_PTR_TO_JSON(ValueDisplay, valueDisplay_);
        };
        friend void from_json(const Darabonba::Json& j, Details& obj) { 
          DARABONBA_PTR_FROM_JSON(NameDisplay, nameDisplay_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
          DARABONBA_PTR_FROM_JSON(ValueDisplay, valueDisplay_);
        };
        Details() = default ;
        Details(const Details &) = default ;
        Details(Details &&) = default ;
        Details(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Details() = default ;
        Details& operator=(const Details &) = default ;
        Details& operator=(Details &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->nameDisplay_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr && this->valueDisplay_ == nullptr; };
        // nameDisplay Field Functions 
        bool hasNameDisplay() const { return this->nameDisplay_ != nullptr;};
        void deleteNameDisplay() { this->nameDisplay_ = nullptr;};
        inline string getNameDisplay() const { DARABONBA_PTR_GET_DEFAULT(nameDisplay_, "") };
        inline Details& setNameDisplay(string nameDisplay) { DARABONBA_PTR_SET_VALUE(nameDisplay_, nameDisplay) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Details& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Details& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        // valueDisplay Field Functions 
        bool hasValueDisplay() const { return this->valueDisplay_ != nullptr;};
        void deleteValueDisplay() { this->valueDisplay_ = nullptr;};
        inline string getValueDisplay() const { DARABONBA_PTR_GET_DEFAULT(valueDisplay_, "") };
        inline Details& setValueDisplay(string valueDisplay) { DARABONBA_PTR_SET_VALUE(valueDisplay_, valueDisplay) };


      protected:
        // The display name of the alert event.
        shared_ptr<string> nameDisplay_ {};
        // The type of the alert event.
        shared_ptr<string> type_ {};
        // The path of the alert event.
        shared_ptr<string> value_ {};
        // The display name of the path of the alert event.
        shared_ptr<string> valueDisplay_ {};
      };

      virtual bool empty() const override { return this->advanced_ == nullptr
        && this->alarmEventName_ == nullptr && this->alarmEventNameDisplay_ == nullptr && this->alarmEventType_ == nullptr && this->alarmEventTypeDisplay_ == nullptr && this->alarmUniqueInfo_ == nullptr
        && this->appName_ == nullptr && this->autoBreaking_ == nullptr && this->canBeDealOnLine_ == nullptr && this->canCancelFault_ == nullptr && this->containHwMode_ == nullptr
        && this->containerId_ == nullptr && this->containerImageId_ == nullptr && this->containerImageName_ == nullptr && this->dataSource_ == nullptr && this->desc_ == nullptr
        && this->details_ == nullptr && this->displaySandboxResult_ == nullptr && this->eventNotes_ == nullptr && this->eventStatus_ == nullptr && this->eventSubType_ == nullptr
        && this->hasTraceInfo_ == nullptr && this->id_ == nullptr && this->imageUuid_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->k8sClusterId_ == nullptr && this->k8sClusterName_ == nullptr && this->k8sNamespace_ == nullptr
        && this->k8sNodeId_ == nullptr && this->k8sNodeName_ == nullptr && this->k8sPodName_ == nullptr && this->largeModel_ == nullptr && this->lastTime_ == nullptr
        && this->lastTimeStamp_ == nullptr && this->level_ == nullptr && this->maliciousRuleStatus_ == nullptr && this->markList_ == nullptr && this->markMisRules_ == nullptr
        && this->name_ == nullptr && this->occurrenceTime_ == nullptr && this->occurrenceTimeStamp_ == nullptr && this->operateErrorCode_ == nullptr && this->operateMsg_ == nullptr
        && this->operateTime_ == nullptr && this->saleVersion_ == nullptr && this->securityEventIds_ == nullptr && this->sourceAliUid_ == nullptr && this->stages_ == nullptr
        && this->supportOperateCode_ == nullptr && this->tacticItems_ == nullptr && this->uniqueInfo_ == nullptr && this->uuid_ == nullptr && this->clusterId_ == nullptr; };
      // advanced Field Functions 
      bool hasAdvanced() const { return this->advanced_ != nullptr;};
      void deleteAdvanced() { this->advanced_ = nullptr;};
      inline bool getAdvanced() const { DARABONBA_PTR_GET_DEFAULT(advanced_, false) };
      inline SuspEvents& setAdvanced(bool advanced) { DARABONBA_PTR_SET_VALUE(advanced_, advanced) };


      // alarmEventName Field Functions 
      bool hasAlarmEventName() const { return this->alarmEventName_ != nullptr;};
      void deleteAlarmEventName() { this->alarmEventName_ = nullptr;};
      inline string getAlarmEventName() const { DARABONBA_PTR_GET_DEFAULT(alarmEventName_, "") };
      inline SuspEvents& setAlarmEventName(string alarmEventName) { DARABONBA_PTR_SET_VALUE(alarmEventName_, alarmEventName) };


      // alarmEventNameDisplay Field Functions 
      bool hasAlarmEventNameDisplay() const { return this->alarmEventNameDisplay_ != nullptr;};
      void deleteAlarmEventNameDisplay() { this->alarmEventNameDisplay_ = nullptr;};
      inline string getAlarmEventNameDisplay() const { DARABONBA_PTR_GET_DEFAULT(alarmEventNameDisplay_, "") };
      inline SuspEvents& setAlarmEventNameDisplay(string alarmEventNameDisplay) { DARABONBA_PTR_SET_VALUE(alarmEventNameDisplay_, alarmEventNameDisplay) };


      // alarmEventType Field Functions 
      bool hasAlarmEventType() const { return this->alarmEventType_ != nullptr;};
      void deleteAlarmEventType() { this->alarmEventType_ = nullptr;};
      inline string getAlarmEventType() const { DARABONBA_PTR_GET_DEFAULT(alarmEventType_, "") };
      inline SuspEvents& setAlarmEventType(string alarmEventType) { DARABONBA_PTR_SET_VALUE(alarmEventType_, alarmEventType) };


      // alarmEventTypeDisplay Field Functions 
      bool hasAlarmEventTypeDisplay() const { return this->alarmEventTypeDisplay_ != nullptr;};
      void deleteAlarmEventTypeDisplay() { this->alarmEventTypeDisplay_ = nullptr;};
      inline string getAlarmEventTypeDisplay() const { DARABONBA_PTR_GET_DEFAULT(alarmEventTypeDisplay_, "") };
      inline SuspEvents& setAlarmEventTypeDisplay(string alarmEventTypeDisplay) { DARABONBA_PTR_SET_VALUE(alarmEventTypeDisplay_, alarmEventTypeDisplay) };


      // alarmUniqueInfo Field Functions 
      bool hasAlarmUniqueInfo() const { return this->alarmUniqueInfo_ != nullptr;};
      void deleteAlarmUniqueInfo() { this->alarmUniqueInfo_ = nullptr;};
      inline string getAlarmUniqueInfo() const { DARABONBA_PTR_GET_DEFAULT(alarmUniqueInfo_, "") };
      inline SuspEvents& setAlarmUniqueInfo(string alarmUniqueInfo) { DARABONBA_PTR_SET_VALUE(alarmUniqueInfo_, alarmUniqueInfo) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline SuspEvents& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // autoBreaking Field Functions 
      bool hasAutoBreaking() const { return this->autoBreaking_ != nullptr;};
      void deleteAutoBreaking() { this->autoBreaking_ = nullptr;};
      inline bool getAutoBreaking() const { DARABONBA_PTR_GET_DEFAULT(autoBreaking_, false) };
      inline SuspEvents& setAutoBreaking(bool autoBreaking) { DARABONBA_PTR_SET_VALUE(autoBreaking_, autoBreaking) };


      // canBeDealOnLine Field Functions 
      bool hasCanBeDealOnLine() const { return this->canBeDealOnLine_ != nullptr;};
      void deleteCanBeDealOnLine() { this->canBeDealOnLine_ = nullptr;};
      inline bool getCanBeDealOnLine() const { DARABONBA_PTR_GET_DEFAULT(canBeDealOnLine_, false) };
      inline SuspEvents& setCanBeDealOnLine(bool canBeDealOnLine) { DARABONBA_PTR_SET_VALUE(canBeDealOnLine_, canBeDealOnLine) };


      // canCancelFault Field Functions 
      bool hasCanCancelFault() const { return this->canCancelFault_ != nullptr;};
      void deleteCanCancelFault() { this->canCancelFault_ = nullptr;};
      inline bool getCanCancelFault() const { DARABONBA_PTR_GET_DEFAULT(canCancelFault_, false) };
      inline SuspEvents& setCanCancelFault(bool canCancelFault) { DARABONBA_PTR_SET_VALUE(canCancelFault_, canCancelFault) };


      // containHwMode Field Functions 
      bool hasContainHwMode() const { return this->containHwMode_ != nullptr;};
      void deleteContainHwMode() { this->containHwMode_ = nullptr;};
      inline bool getContainHwMode() const { DARABONBA_PTR_GET_DEFAULT(containHwMode_, false) };
      inline SuspEvents& setContainHwMode(bool containHwMode) { DARABONBA_PTR_SET_VALUE(containHwMode_, containHwMode) };


      // containerId Field Functions 
      bool hasContainerId() const { return this->containerId_ != nullptr;};
      void deleteContainerId() { this->containerId_ = nullptr;};
      inline string getContainerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
      inline SuspEvents& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


      // containerImageId Field Functions 
      bool hasContainerImageId() const { return this->containerImageId_ != nullptr;};
      void deleteContainerImageId() { this->containerImageId_ = nullptr;};
      inline string getContainerImageId() const { DARABONBA_PTR_GET_DEFAULT(containerImageId_, "") };
      inline SuspEvents& setContainerImageId(string containerImageId) { DARABONBA_PTR_SET_VALUE(containerImageId_, containerImageId) };


      // containerImageName Field Functions 
      bool hasContainerImageName() const { return this->containerImageName_ != nullptr;};
      void deleteContainerImageName() { this->containerImageName_ = nullptr;};
      inline string getContainerImageName() const { DARABONBA_PTR_GET_DEFAULT(containerImageName_, "") };
      inline SuspEvents& setContainerImageName(string containerImageName) { DARABONBA_PTR_SET_VALUE(containerImageName_, containerImageName) };


      // dataSource Field Functions 
      bool hasDataSource() const { return this->dataSource_ != nullptr;};
      void deleteDataSource() { this->dataSource_ = nullptr;};
      inline string getDataSource() const { DARABONBA_PTR_GET_DEFAULT(dataSource_, "") };
      inline SuspEvents& setDataSource(string dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };


      // desc Field Functions 
      bool hasDesc() const { return this->desc_ != nullptr;};
      void deleteDesc() { this->desc_ = nullptr;};
      inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
      inline SuspEvents& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


      // details Field Functions 
      bool hasDetails() const { return this->details_ != nullptr;};
      void deleteDetails() { this->details_ = nullptr;};
      inline const vector<SuspEvents::Details> & getDetails() const { DARABONBA_PTR_GET_CONST(details_, vector<SuspEvents::Details>) };
      inline vector<SuspEvents::Details> getDetails() { DARABONBA_PTR_GET(details_, vector<SuspEvents::Details>) };
      inline SuspEvents& setDetails(const vector<SuspEvents::Details> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
      inline SuspEvents& setDetails(vector<SuspEvents::Details> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


      // displaySandboxResult Field Functions 
      bool hasDisplaySandboxResult() const { return this->displaySandboxResult_ != nullptr;};
      void deleteDisplaySandboxResult() { this->displaySandboxResult_ = nullptr;};
      inline bool getDisplaySandboxResult() const { DARABONBA_PTR_GET_DEFAULT(displaySandboxResult_, false) };
      inline SuspEvents& setDisplaySandboxResult(bool displaySandboxResult) { DARABONBA_PTR_SET_VALUE(displaySandboxResult_, displaySandboxResult) };


      // eventNotes Field Functions 
      bool hasEventNotes() const { return this->eventNotes_ != nullptr;};
      void deleteEventNotes() { this->eventNotes_ = nullptr;};
      inline const vector<SuspEvents::EventNotes> & getEventNotes() const { DARABONBA_PTR_GET_CONST(eventNotes_, vector<SuspEvents::EventNotes>) };
      inline vector<SuspEvents::EventNotes> getEventNotes() { DARABONBA_PTR_GET(eventNotes_, vector<SuspEvents::EventNotes>) };
      inline SuspEvents& setEventNotes(const vector<SuspEvents::EventNotes> & eventNotes) { DARABONBA_PTR_SET_VALUE(eventNotes_, eventNotes) };
      inline SuspEvents& setEventNotes(vector<SuspEvents::EventNotes> && eventNotes) { DARABONBA_PTR_SET_RVALUE(eventNotes_, eventNotes) };


      // eventStatus Field Functions 
      bool hasEventStatus() const { return this->eventStatus_ != nullptr;};
      void deleteEventStatus() { this->eventStatus_ = nullptr;};
      inline int32_t getEventStatus() const { DARABONBA_PTR_GET_DEFAULT(eventStatus_, 0) };
      inline SuspEvents& setEventStatus(int32_t eventStatus) { DARABONBA_PTR_SET_VALUE(eventStatus_, eventStatus) };


      // eventSubType Field Functions 
      bool hasEventSubType() const { return this->eventSubType_ != nullptr;};
      void deleteEventSubType() { this->eventSubType_ = nullptr;};
      inline string getEventSubType() const { DARABONBA_PTR_GET_DEFAULT(eventSubType_, "") };
      inline SuspEvents& setEventSubType(string eventSubType) { DARABONBA_PTR_SET_VALUE(eventSubType_, eventSubType) };


      // hasTraceInfo Field Functions 
      bool hasHasTraceInfo() const { return this->hasTraceInfo_ != nullptr;};
      void deleteHasTraceInfo() { this->hasTraceInfo_ = nullptr;};
      inline bool getHasTraceInfo() const { DARABONBA_PTR_GET_DEFAULT(hasTraceInfo_, false) };
      inline SuspEvents& setHasTraceInfo(bool hasTraceInfo) { DARABONBA_PTR_SET_VALUE(hasTraceInfo_, hasTraceInfo) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline SuspEvents& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // imageUuid Field Functions 
      bool hasImageUuid() const { return this->imageUuid_ != nullptr;};
      void deleteImageUuid() { this->imageUuid_ = nullptr;};
      inline string getImageUuid() const { DARABONBA_PTR_GET_DEFAULT(imageUuid_, "") };
      inline SuspEvents& setImageUuid(string imageUuid) { DARABONBA_PTR_SET_VALUE(imageUuid_, imageUuid) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline SuspEvents& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline SuspEvents& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline SuspEvents& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline SuspEvents& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // k8sClusterId Field Functions 
      bool hasK8sClusterId() const { return this->k8sClusterId_ != nullptr;};
      void deleteK8sClusterId() { this->k8sClusterId_ = nullptr;};
      inline string getK8sClusterId() const { DARABONBA_PTR_GET_DEFAULT(k8sClusterId_, "") };
      inline SuspEvents& setK8sClusterId(string k8sClusterId) { DARABONBA_PTR_SET_VALUE(k8sClusterId_, k8sClusterId) };


      // k8sClusterName Field Functions 
      bool hasK8sClusterName() const { return this->k8sClusterName_ != nullptr;};
      void deleteK8sClusterName() { this->k8sClusterName_ = nullptr;};
      inline string getK8sClusterName() const { DARABONBA_PTR_GET_DEFAULT(k8sClusterName_, "") };
      inline SuspEvents& setK8sClusterName(string k8sClusterName) { DARABONBA_PTR_SET_VALUE(k8sClusterName_, k8sClusterName) };


      // k8sNamespace Field Functions 
      bool hasK8sNamespace() const { return this->k8sNamespace_ != nullptr;};
      void deleteK8sNamespace() { this->k8sNamespace_ = nullptr;};
      inline string getK8sNamespace() const { DARABONBA_PTR_GET_DEFAULT(k8sNamespace_, "") };
      inline SuspEvents& setK8sNamespace(string k8sNamespace) { DARABONBA_PTR_SET_VALUE(k8sNamespace_, k8sNamespace) };


      // k8sNodeId Field Functions 
      bool hasK8sNodeId() const { return this->k8sNodeId_ != nullptr;};
      void deleteK8sNodeId() { this->k8sNodeId_ = nullptr;};
      inline string getK8sNodeId() const { DARABONBA_PTR_GET_DEFAULT(k8sNodeId_, "") };
      inline SuspEvents& setK8sNodeId(string k8sNodeId) { DARABONBA_PTR_SET_VALUE(k8sNodeId_, k8sNodeId) };


      // k8sNodeName Field Functions 
      bool hasK8sNodeName() const { return this->k8sNodeName_ != nullptr;};
      void deleteK8sNodeName() { this->k8sNodeName_ = nullptr;};
      inline string getK8sNodeName() const { DARABONBA_PTR_GET_DEFAULT(k8sNodeName_, "") };
      inline SuspEvents& setK8sNodeName(string k8sNodeName) { DARABONBA_PTR_SET_VALUE(k8sNodeName_, k8sNodeName) };


      // k8sPodName Field Functions 
      bool hasK8sPodName() const { return this->k8sPodName_ != nullptr;};
      void deleteK8sPodName() { this->k8sPodName_ = nullptr;};
      inline string getK8sPodName() const { DARABONBA_PTR_GET_DEFAULT(k8sPodName_, "") };
      inline SuspEvents& setK8sPodName(string k8sPodName) { DARABONBA_PTR_SET_VALUE(k8sPodName_, k8sPodName) };


      // largeModel Field Functions 
      bool hasLargeModel() const { return this->largeModel_ != nullptr;};
      void deleteLargeModel() { this->largeModel_ = nullptr;};
      inline bool getLargeModel() const { DARABONBA_PTR_GET_DEFAULT(largeModel_, false) };
      inline SuspEvents& setLargeModel(bool largeModel) { DARABONBA_PTR_SET_VALUE(largeModel_, largeModel) };


      // lastTime Field Functions 
      bool hasLastTime() const { return this->lastTime_ != nullptr;};
      void deleteLastTime() { this->lastTime_ = nullptr;};
      inline string getLastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, "") };
      inline SuspEvents& setLastTime(string lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


      // lastTimeStamp Field Functions 
      bool hasLastTimeStamp() const { return this->lastTimeStamp_ != nullptr;};
      void deleteLastTimeStamp() { this->lastTimeStamp_ = nullptr;};
      inline int64_t getLastTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(lastTimeStamp_, 0L) };
      inline SuspEvents& setLastTimeStamp(int64_t lastTimeStamp) { DARABONBA_PTR_SET_VALUE(lastTimeStamp_, lastTimeStamp) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline SuspEvents& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // maliciousRuleStatus Field Functions 
      bool hasMaliciousRuleStatus() const { return this->maliciousRuleStatus_ != nullptr;};
      void deleteMaliciousRuleStatus() { this->maliciousRuleStatus_ = nullptr;};
      inline string getMaliciousRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(maliciousRuleStatus_, "") };
      inline SuspEvents& setMaliciousRuleStatus(string maliciousRuleStatus) { DARABONBA_PTR_SET_VALUE(maliciousRuleStatus_, maliciousRuleStatus) };


      // markList Field Functions 
      bool hasMarkList() const { return this->markList_ != nullptr;};
      void deleteMarkList() { this->markList_ = nullptr;};
      inline const vector<string> & getMarkList() const { DARABONBA_PTR_GET_CONST(markList_, vector<string>) };
      inline vector<string> getMarkList() { DARABONBA_PTR_GET(markList_, vector<string>) };
      inline SuspEvents& setMarkList(const vector<string> & markList) { DARABONBA_PTR_SET_VALUE(markList_, markList) };
      inline SuspEvents& setMarkList(vector<string> && markList) { DARABONBA_PTR_SET_RVALUE(markList_, markList) };


      // markMisRules Field Functions 
      bool hasMarkMisRules() const { return this->markMisRules_ != nullptr;};
      void deleteMarkMisRules() { this->markMisRules_ = nullptr;};
      inline string getMarkMisRules() const { DARABONBA_PTR_GET_DEFAULT(markMisRules_, "") };
      inline SuspEvents& setMarkMisRules(string markMisRules) { DARABONBA_PTR_SET_VALUE(markMisRules_, markMisRules) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SuspEvents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // occurrenceTime Field Functions 
      bool hasOccurrenceTime() const { return this->occurrenceTime_ != nullptr;};
      void deleteOccurrenceTime() { this->occurrenceTime_ = nullptr;};
      inline string getOccurrenceTime() const { DARABONBA_PTR_GET_DEFAULT(occurrenceTime_, "") };
      inline SuspEvents& setOccurrenceTime(string occurrenceTime) { DARABONBA_PTR_SET_VALUE(occurrenceTime_, occurrenceTime) };


      // occurrenceTimeStamp Field Functions 
      bool hasOccurrenceTimeStamp() const { return this->occurrenceTimeStamp_ != nullptr;};
      void deleteOccurrenceTimeStamp() { this->occurrenceTimeStamp_ = nullptr;};
      inline int64_t getOccurrenceTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(occurrenceTimeStamp_, 0L) };
      inline SuspEvents& setOccurrenceTimeStamp(int64_t occurrenceTimeStamp) { DARABONBA_PTR_SET_VALUE(occurrenceTimeStamp_, occurrenceTimeStamp) };


      // operateErrorCode Field Functions 
      bool hasOperateErrorCode() const { return this->operateErrorCode_ != nullptr;};
      void deleteOperateErrorCode() { this->operateErrorCode_ = nullptr;};
      inline string getOperateErrorCode() const { DARABONBA_PTR_GET_DEFAULT(operateErrorCode_, "") };
      inline SuspEvents& setOperateErrorCode(string operateErrorCode) { DARABONBA_PTR_SET_VALUE(operateErrorCode_, operateErrorCode) };


      // operateMsg Field Functions 
      bool hasOperateMsg() const { return this->operateMsg_ != nullptr;};
      void deleteOperateMsg() { this->operateMsg_ = nullptr;};
      inline string getOperateMsg() const { DARABONBA_PTR_GET_DEFAULT(operateMsg_, "") };
      inline SuspEvents& setOperateMsg(string operateMsg) { DARABONBA_PTR_SET_VALUE(operateMsg_, operateMsg) };


      // operateTime Field Functions 
      bool hasOperateTime() const { return this->operateTime_ != nullptr;};
      void deleteOperateTime() { this->operateTime_ = nullptr;};
      inline int64_t getOperateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, 0L) };
      inline SuspEvents& setOperateTime(int64_t operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


      // saleVersion Field Functions 
      bool hasSaleVersion() const { return this->saleVersion_ != nullptr;};
      void deleteSaleVersion() { this->saleVersion_ = nullptr;};
      inline string getSaleVersion() const { DARABONBA_PTR_GET_DEFAULT(saleVersion_, "") };
      inline SuspEvents& setSaleVersion(string saleVersion) { DARABONBA_PTR_SET_VALUE(saleVersion_, saleVersion) };


      // securityEventIds Field Functions 
      bool hasSecurityEventIds() const { return this->securityEventIds_ != nullptr;};
      void deleteSecurityEventIds() { this->securityEventIds_ = nullptr;};
      inline string getSecurityEventIds() const { DARABONBA_PTR_GET_DEFAULT(securityEventIds_, "") };
      inline SuspEvents& setSecurityEventIds(string securityEventIds) { DARABONBA_PTR_SET_VALUE(securityEventIds_, securityEventIds) };


      // sourceAliUid Field Functions 
      bool hasSourceAliUid() const { return this->sourceAliUid_ != nullptr;};
      void deleteSourceAliUid() { this->sourceAliUid_ = nullptr;};
      inline int64_t getSourceAliUid() const { DARABONBA_PTR_GET_DEFAULT(sourceAliUid_, 0L) };
      inline SuspEvents& setSourceAliUid(int64_t sourceAliUid) { DARABONBA_PTR_SET_VALUE(sourceAliUid_, sourceAliUid) };


      // stages Field Functions 
      bool hasStages() const { return this->stages_ != nullptr;};
      void deleteStages() { this->stages_ = nullptr;};
      inline string getStages() const { DARABONBA_PTR_GET_DEFAULT(stages_, "") };
      inline SuspEvents& setStages(string stages) { DARABONBA_PTR_SET_VALUE(stages_, stages) };


      // supportOperateCode Field Functions 
      bool hasSupportOperateCode() const { return this->supportOperateCode_ != nullptr;};
      void deleteSupportOperateCode() { this->supportOperateCode_ = nullptr;};
      inline string getSupportOperateCode() const { DARABONBA_PTR_GET_DEFAULT(supportOperateCode_, "") };
      inline SuspEvents& setSupportOperateCode(string supportOperateCode) { DARABONBA_PTR_SET_VALUE(supportOperateCode_, supportOperateCode) };


      // tacticItems Field Functions 
      bool hasTacticItems() const { return this->tacticItems_ != nullptr;};
      void deleteTacticItems() { this->tacticItems_ = nullptr;};
      inline const vector<SuspEvents::TacticItems> & getTacticItems() const { DARABONBA_PTR_GET_CONST(tacticItems_, vector<SuspEvents::TacticItems>) };
      inline vector<SuspEvents::TacticItems> getTacticItems() { DARABONBA_PTR_GET(tacticItems_, vector<SuspEvents::TacticItems>) };
      inline SuspEvents& setTacticItems(const vector<SuspEvents::TacticItems> & tacticItems) { DARABONBA_PTR_SET_VALUE(tacticItems_, tacticItems) };
      inline SuspEvents& setTacticItems(vector<SuspEvents::TacticItems> && tacticItems) { DARABONBA_PTR_SET_RVALUE(tacticItems_, tacticItems) };


      // uniqueInfo Field Functions 
      bool hasUniqueInfo() const { return this->uniqueInfo_ != nullptr;};
      void deleteUniqueInfo() { this->uniqueInfo_ = nullptr;};
      inline string getUniqueInfo() const { DARABONBA_PTR_GET_DEFAULT(uniqueInfo_, "") };
      inline SuspEvents& setUniqueInfo(string uniqueInfo) { DARABONBA_PTR_SET_VALUE(uniqueInfo_, uniqueInfo) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline SuspEvents& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline SuspEvents& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    protected:
      // Indicates whether the alert event was analyzed offline.
      shared_ptr<bool> advanced_ {};
      // The name of the alert event.
      shared_ptr<string> alarmEventName_ {};
      // The name of the alert.
      shared_ptr<string> alarmEventNameDisplay_ {};
      // The type of the alert event.
      shared_ptr<string> alarmEventType_ {};
      // The display name of the type of the alert event.
      shared_ptr<string> alarmEventTypeDisplay_ {};
      // The unique ID of the alert event.
      shared_ptr<string> alarmUniqueInfo_ {};
      // The name of the application to which the alert event belongs.
      shared_ptr<string> appName_ {};
      // Indicates whether automatic defense is enabled.
      shared_ptr<bool> autoBreaking_ {};
      // Indicates whether you can handle the alert event online, such as quarantining the source file of the malicious process. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> canBeDealOnLine_ {};
      // Indicates whether you can cancel marking the alert event as a false positive. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> canCancelFault_ {};
      // Indicates whether the safeguard mode for major activities is enabled for the server. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> containHwMode_ {};
      // The ID of the container.
      shared_ptr<string> containerId_ {};
      // The ID of the container image.
      shared_ptr<string> containerImageId_ {};
      // The name of the container image.
      shared_ptr<string> containerImageName_ {};
      // The source of data. This parameter can be ignored.
      shared_ptr<string> dataSource_ {};
      // The impact of the alert event.
      shared_ptr<string> desc_ {};
      // The details of the alert event.
      shared_ptr<vector<SuspEvents::Details>> details_ {};
      // Indicates whether the alert event can be detected by cloud sandbox. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> displaySandboxResult_ {};
      // The note information about the alert event.
      shared_ptr<vector<SuspEvents::EventNotes>> eventNotes_ {};
      // The status of the alert event. Valid values:
      // 
      // *   **1**: pending handling
      // *   **2**: ignored
      // *   **4**: confirmed
      // *   **8**: marked as a false positive
      // *   **16**: handling
      // *   **32**: handled
      // *   **64**: expired
      // *   **604**: marked as a false positive by the system
      shared_ptr<int32_t> eventStatus_ {};
      // The subtype of the alert event.
      shared_ptr<string> eventSubType_ {};
      // Indicates whether the alert event has tracing information. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> hasTraceInfo_ {};
      // The unique ID of the alert event.
      shared_ptr<int64_t> id_ {};
      // The UUID of the image.
      shared_ptr<string> imageUuid_ {};
      // The instance ID of the affected asset.
      shared_ptr<string> instanceId_ {};
      // The name of the associated instance.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the associated instance.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the associated instance.
      shared_ptr<string> intranetIp_ {};
      // The ID of the Kubernetes cluster.
      shared_ptr<string> k8sClusterId_ {};
      // The name of the Kubernetes cluster.
      shared_ptr<string> k8sClusterName_ {};
      // The namespace of the Kubernetes cluster.
      shared_ptr<string> k8sNamespace_ {};
      // The ID of the Kubernetes node.
      shared_ptr<string> k8sNodeId_ {};
      // The name of the Kubernetes node.
      shared_ptr<string> k8sNodeName_ {};
      // The name of the Kubernetes pod.
      shared_ptr<string> k8sPodName_ {};
      // Indicates whether the large model analysis tag is supported. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> largeModel_ {};
      // The time when the alert event was last detected.
      shared_ptr<string> lastTime_ {};
      // The timestamp when the alert event was last detected. Unit: milliseconds.
      shared_ptr<int64_t> lastTimeStamp_ {};
      // The severity of the alert event. Valid values:
      // 
      // *   **serious**
      // *   **suspicious**
      // *   **remind**
      shared_ptr<string> level_ {};
      // The status of the malicious behavior defense rule. Valid values:
      // 
      // *   **open**
      // *   **close**
      shared_ptr<string> maliciousRuleStatus_ {};
      // The tags of the alert events.
      shared_ptr<vector<string>> markList_ {};
      // The advanced whitelist rule.
      shared_ptr<string> markMisRules_ {};
      // The complete name of the alert event.
      shared_ptr<string> name_ {};
      // The time when the alert event was first detected.
      shared_ptr<string> occurrenceTime_ {};
      // The timestamp when the alert event was first detected. Unit: milliseconds.
      shared_ptr<int64_t> occurrenceTimeStamp_ {};
      // The handling result code of the alert event.
      shared_ptr<string> operateErrorCode_ {};
      // The handing result message of the alert event.
      shared_ptr<string> operateMsg_ {};
      // The handling timestamp of the alert event. Unit: milliseconds.
      shared_ptr<int64_t> operateTime_ {};
      // The edition of Security Center in which the alert event can be detected. Valid values:
      // 
      // *   **0**: Basic edition
      // *   **1**: Enterprise edition
      shared_ptr<string> saleVersion_ {};
      // The ID of the associated alert event.
      shared_ptr<string> securityEventIds_ {};
      // The ID of the Alibaba Cloud account within which an alert is generated.
      shared_ptr<int64_t> sourceAliUid_ {};
      // The stage at which the attack is detected.
      shared_ptr<string> stages_ {};
      // Supported alarm operation types: 
      // - **AI.false_positive**: Suspected false positive 
      // - **AI.real_attack**: Real attack 
      // - **AI.Insufficient_information_to_evaluate**: Insufficient information to evaluate
      shared_ptr<string> supportOperateCode_ {};
      // The display name of the attack stage.
      shared_ptr<vector<SuspEvents::TacticItems>> tacticItems_ {};
      // The unique key of the alert.
      shared_ptr<string> uniqueInfo_ {};
      // The unique ID of the associated instance.
      shared_ptr<string> uuid_ {};
      // The ID of the cluster.
      shared_ptr<string> clusterId_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->suspEvents_ == nullptr && this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeSuspEventsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeSuspEventsResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSuspEventsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSuspEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // suspEvents Field Functions 
    bool hasSuspEvents() const { return this->suspEvents_ != nullptr;};
    void deleteSuspEvents() { this->suspEvents_ = nullptr;};
    inline const vector<DescribeSuspEventsResponseBody::SuspEvents> & getSuspEvents() const { DARABONBA_PTR_GET_CONST(suspEvents_, vector<DescribeSuspEventsResponseBody::SuspEvents>) };
    inline vector<DescribeSuspEventsResponseBody::SuspEvents> getSuspEvents() { DARABONBA_PTR_GET(suspEvents_, vector<DescribeSuspEventsResponseBody::SuspEvents>) };
    inline DescribeSuspEventsResponseBody& setSuspEvents(const vector<DescribeSuspEventsResponseBody::SuspEvents> & suspEvents) { DARABONBA_PTR_SET_VALUE(suspEvents_, suspEvents) };
    inline DescribeSuspEventsResponseBody& setSuspEvents(vector<DescribeSuspEventsResponseBody::SuspEvents> && suspEvents) { DARABONBA_PTR_SET_RVALUE(suspEvents_, suspEvents) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSuspEventsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned on the current page.
    shared_ptr<int32_t> count_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> currentPage_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the alert events.
    shared_ptr<vector<DescribeSuspEventsResponseBody::SuspEvents>> suspEvents_ {};
    // The total number of alert events.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
