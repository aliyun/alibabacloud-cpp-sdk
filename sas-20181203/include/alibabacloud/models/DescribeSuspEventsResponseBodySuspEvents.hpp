// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTSRESPONSEBODYSUSPEVENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTSRESPONSEBODYSUSPEVENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSuspEventsResponseBodySuspEventsDetails.hpp>
#include <alibabacloud/models/DescribeSuspEventsResponseBodySuspEventsEventNotes.hpp>
#include <alibabacloud/models/DescribeSuspEventsResponseBodySuspEventsTacticItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSuspEventsResponseBodySuspEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSuspEventsResponseBodySuspEvents& obj) { 
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
      DARABONBA_PTR_TO_JSON(TacticItems, tacticItems_);
      DARABONBA_PTR_TO_JSON(UniqueInfo, uniqueInfo_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSuspEventsResponseBodySuspEvents& obj) { 
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
      DARABONBA_PTR_FROM_JSON(TacticItems, tacticItems_);
      DARABONBA_PTR_FROM_JSON(UniqueInfo, uniqueInfo_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
    };
    DescribeSuspEventsResponseBodySuspEvents() = default ;
    DescribeSuspEventsResponseBodySuspEvents(const DescribeSuspEventsResponseBodySuspEvents &) = default ;
    DescribeSuspEventsResponseBodySuspEvents(DescribeSuspEventsResponseBodySuspEvents &&) = default ;
    DescribeSuspEventsResponseBodySuspEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSuspEventsResponseBodySuspEvents() = default ;
    DescribeSuspEventsResponseBodySuspEvents& operator=(const DescribeSuspEventsResponseBodySuspEvents &) = default ;
    DescribeSuspEventsResponseBodySuspEvents& operator=(DescribeSuspEventsResponseBodySuspEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->advanced_ != nullptr
        && this->alarmEventName_ != nullptr && this->alarmEventNameDisplay_ != nullptr && this->alarmEventType_ != nullptr && this->alarmEventTypeDisplay_ != nullptr && this->alarmUniqueInfo_ != nullptr
        && this->appName_ != nullptr && this->autoBreaking_ != nullptr && this->canBeDealOnLine_ != nullptr && this->canCancelFault_ != nullptr && this->containHwMode_ != nullptr
        && this->containerId_ != nullptr && this->containerImageId_ != nullptr && this->containerImageName_ != nullptr && this->dataSource_ != nullptr && this->desc_ != nullptr
        && this->details_ != nullptr && this->displaySandboxResult_ != nullptr && this->eventNotes_ != nullptr && this->eventStatus_ != nullptr && this->eventSubType_ != nullptr
        && this->hasTraceInfo_ != nullptr && this->id_ != nullptr && this->imageUuid_ != nullptr && this->instanceId_ != nullptr && this->instanceName_ != nullptr
        && this->internetIp_ != nullptr && this->intranetIp_ != nullptr && this->k8sClusterId_ != nullptr && this->k8sClusterName_ != nullptr && this->k8sNamespace_ != nullptr
        && this->k8sNodeId_ != nullptr && this->k8sNodeName_ != nullptr && this->k8sPodName_ != nullptr && this->largeModel_ != nullptr && this->lastTime_ != nullptr
        && this->lastTimeStamp_ != nullptr && this->level_ != nullptr && this->maliciousRuleStatus_ != nullptr && this->markList_ != nullptr && this->markMisRules_ != nullptr
        && this->name_ != nullptr && this->occurrenceTime_ != nullptr && this->occurrenceTimeStamp_ != nullptr && this->operateErrorCode_ != nullptr && this->operateMsg_ != nullptr
        && this->operateTime_ != nullptr && this->saleVersion_ != nullptr && this->securityEventIds_ != nullptr && this->sourceAliUid_ != nullptr && this->stages_ != nullptr
        && this->tacticItems_ != nullptr && this->uniqueInfo_ != nullptr && this->uuid_ != nullptr && this->clusterId_ != nullptr; };
    // advanced Field Functions 
    bool hasAdvanced() const { return this->advanced_ != nullptr;};
    void deleteAdvanced() { this->advanced_ = nullptr;};
    inline bool advanced() const { DARABONBA_PTR_GET_DEFAULT(advanced_, false) };
    inline DescribeSuspEventsResponseBodySuspEvents& setAdvanced(bool advanced) { DARABONBA_PTR_SET_VALUE(advanced_, advanced) };


    // alarmEventName Field Functions 
    bool hasAlarmEventName() const { return this->alarmEventName_ != nullptr;};
    void deleteAlarmEventName() { this->alarmEventName_ = nullptr;};
    inline string alarmEventName() const { DARABONBA_PTR_GET_DEFAULT(alarmEventName_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setAlarmEventName(string alarmEventName) { DARABONBA_PTR_SET_VALUE(alarmEventName_, alarmEventName) };


    // alarmEventNameDisplay Field Functions 
    bool hasAlarmEventNameDisplay() const { return this->alarmEventNameDisplay_ != nullptr;};
    void deleteAlarmEventNameDisplay() { this->alarmEventNameDisplay_ = nullptr;};
    inline string alarmEventNameDisplay() const { DARABONBA_PTR_GET_DEFAULT(alarmEventNameDisplay_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setAlarmEventNameDisplay(string alarmEventNameDisplay) { DARABONBA_PTR_SET_VALUE(alarmEventNameDisplay_, alarmEventNameDisplay) };


    // alarmEventType Field Functions 
    bool hasAlarmEventType() const { return this->alarmEventType_ != nullptr;};
    void deleteAlarmEventType() { this->alarmEventType_ = nullptr;};
    inline string alarmEventType() const { DARABONBA_PTR_GET_DEFAULT(alarmEventType_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setAlarmEventType(string alarmEventType) { DARABONBA_PTR_SET_VALUE(alarmEventType_, alarmEventType) };


    // alarmEventTypeDisplay Field Functions 
    bool hasAlarmEventTypeDisplay() const { return this->alarmEventTypeDisplay_ != nullptr;};
    void deleteAlarmEventTypeDisplay() { this->alarmEventTypeDisplay_ = nullptr;};
    inline string alarmEventTypeDisplay() const { DARABONBA_PTR_GET_DEFAULT(alarmEventTypeDisplay_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setAlarmEventTypeDisplay(string alarmEventTypeDisplay) { DARABONBA_PTR_SET_VALUE(alarmEventTypeDisplay_, alarmEventTypeDisplay) };


    // alarmUniqueInfo Field Functions 
    bool hasAlarmUniqueInfo() const { return this->alarmUniqueInfo_ != nullptr;};
    void deleteAlarmUniqueInfo() { this->alarmUniqueInfo_ = nullptr;};
    inline string alarmUniqueInfo() const { DARABONBA_PTR_GET_DEFAULT(alarmUniqueInfo_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setAlarmUniqueInfo(string alarmUniqueInfo) { DARABONBA_PTR_SET_VALUE(alarmUniqueInfo_, alarmUniqueInfo) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // autoBreaking Field Functions 
    bool hasAutoBreaking() const { return this->autoBreaking_ != nullptr;};
    void deleteAutoBreaking() { this->autoBreaking_ = nullptr;};
    inline bool autoBreaking() const { DARABONBA_PTR_GET_DEFAULT(autoBreaking_, false) };
    inline DescribeSuspEventsResponseBodySuspEvents& setAutoBreaking(bool autoBreaking) { DARABONBA_PTR_SET_VALUE(autoBreaking_, autoBreaking) };


    // canBeDealOnLine Field Functions 
    bool hasCanBeDealOnLine() const { return this->canBeDealOnLine_ != nullptr;};
    void deleteCanBeDealOnLine() { this->canBeDealOnLine_ = nullptr;};
    inline bool canBeDealOnLine() const { DARABONBA_PTR_GET_DEFAULT(canBeDealOnLine_, false) };
    inline DescribeSuspEventsResponseBodySuspEvents& setCanBeDealOnLine(bool canBeDealOnLine) { DARABONBA_PTR_SET_VALUE(canBeDealOnLine_, canBeDealOnLine) };


    // canCancelFault Field Functions 
    bool hasCanCancelFault() const { return this->canCancelFault_ != nullptr;};
    void deleteCanCancelFault() { this->canCancelFault_ = nullptr;};
    inline bool canCancelFault() const { DARABONBA_PTR_GET_DEFAULT(canCancelFault_, false) };
    inline DescribeSuspEventsResponseBodySuspEvents& setCanCancelFault(bool canCancelFault) { DARABONBA_PTR_SET_VALUE(canCancelFault_, canCancelFault) };


    // containHwMode Field Functions 
    bool hasContainHwMode() const { return this->containHwMode_ != nullptr;};
    void deleteContainHwMode() { this->containHwMode_ = nullptr;};
    inline bool containHwMode() const { DARABONBA_PTR_GET_DEFAULT(containHwMode_, false) };
    inline DescribeSuspEventsResponseBodySuspEvents& setContainHwMode(bool containHwMode) { DARABONBA_PTR_SET_VALUE(containHwMode_, containHwMode) };


    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string containerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


    // containerImageId Field Functions 
    bool hasContainerImageId() const { return this->containerImageId_ != nullptr;};
    void deleteContainerImageId() { this->containerImageId_ = nullptr;};
    inline string containerImageId() const { DARABONBA_PTR_GET_DEFAULT(containerImageId_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setContainerImageId(string containerImageId) { DARABONBA_PTR_SET_VALUE(containerImageId_, containerImageId) };


    // containerImageName Field Functions 
    bool hasContainerImageName() const { return this->containerImageName_ != nullptr;};
    void deleteContainerImageName() { this->containerImageName_ = nullptr;};
    inline string containerImageName() const { DARABONBA_PTR_GET_DEFAULT(containerImageName_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setContainerImageName(string containerImageName) { DARABONBA_PTR_SET_VALUE(containerImageName_, containerImageName) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline string dataSource() const { DARABONBA_PTR_GET_DEFAULT(dataSource_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setDataSource(string dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const vector<Models::DescribeSuspEventsResponseBodySuspEventsDetails> & details() const { DARABONBA_PTR_GET_CONST(details_, vector<Models::DescribeSuspEventsResponseBodySuspEventsDetails>) };
    inline vector<Models::DescribeSuspEventsResponseBodySuspEventsDetails> details() { DARABONBA_PTR_GET(details_, vector<Models::DescribeSuspEventsResponseBodySuspEventsDetails>) };
    inline DescribeSuspEventsResponseBodySuspEvents& setDetails(const vector<Models::DescribeSuspEventsResponseBodySuspEventsDetails> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline DescribeSuspEventsResponseBodySuspEvents& setDetails(vector<Models::DescribeSuspEventsResponseBodySuspEventsDetails> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // displaySandboxResult Field Functions 
    bool hasDisplaySandboxResult() const { return this->displaySandboxResult_ != nullptr;};
    void deleteDisplaySandboxResult() { this->displaySandboxResult_ = nullptr;};
    inline bool displaySandboxResult() const { DARABONBA_PTR_GET_DEFAULT(displaySandboxResult_, false) };
    inline DescribeSuspEventsResponseBodySuspEvents& setDisplaySandboxResult(bool displaySandboxResult) { DARABONBA_PTR_SET_VALUE(displaySandboxResult_, displaySandboxResult) };


    // eventNotes Field Functions 
    bool hasEventNotes() const { return this->eventNotes_ != nullptr;};
    void deleteEventNotes() { this->eventNotes_ = nullptr;};
    inline const vector<Models::DescribeSuspEventsResponseBodySuspEventsEventNotes> & eventNotes() const { DARABONBA_PTR_GET_CONST(eventNotes_, vector<Models::DescribeSuspEventsResponseBodySuspEventsEventNotes>) };
    inline vector<Models::DescribeSuspEventsResponseBodySuspEventsEventNotes> eventNotes() { DARABONBA_PTR_GET(eventNotes_, vector<Models::DescribeSuspEventsResponseBodySuspEventsEventNotes>) };
    inline DescribeSuspEventsResponseBodySuspEvents& setEventNotes(const vector<Models::DescribeSuspEventsResponseBodySuspEventsEventNotes> & eventNotes) { DARABONBA_PTR_SET_VALUE(eventNotes_, eventNotes) };
    inline DescribeSuspEventsResponseBodySuspEvents& setEventNotes(vector<Models::DescribeSuspEventsResponseBodySuspEventsEventNotes> && eventNotes) { DARABONBA_PTR_SET_RVALUE(eventNotes_, eventNotes) };


    // eventStatus Field Functions 
    bool hasEventStatus() const { return this->eventStatus_ != nullptr;};
    void deleteEventStatus() { this->eventStatus_ = nullptr;};
    inline int32_t eventStatus() const { DARABONBA_PTR_GET_DEFAULT(eventStatus_, 0) };
    inline DescribeSuspEventsResponseBodySuspEvents& setEventStatus(int32_t eventStatus) { DARABONBA_PTR_SET_VALUE(eventStatus_, eventStatus) };


    // eventSubType Field Functions 
    bool hasEventSubType() const { return this->eventSubType_ != nullptr;};
    void deleteEventSubType() { this->eventSubType_ = nullptr;};
    inline string eventSubType() const { DARABONBA_PTR_GET_DEFAULT(eventSubType_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setEventSubType(string eventSubType) { DARABONBA_PTR_SET_VALUE(eventSubType_, eventSubType) };


    // hasTraceInfo Field Functions 
    bool hasHasTraceInfo() const { return this->hasTraceInfo_ != nullptr;};
    void deleteHasTraceInfo() { this->hasTraceInfo_ = nullptr;};
    inline bool hasTraceInfo() const { DARABONBA_PTR_GET_DEFAULT(hasTraceInfo_, false) };
    inline DescribeSuspEventsResponseBodySuspEvents& setHasTraceInfo(bool hasTraceInfo) { DARABONBA_PTR_SET_VALUE(hasTraceInfo_, hasTraceInfo) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeSuspEventsResponseBodySuspEvents& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // imageUuid Field Functions 
    bool hasImageUuid() const { return this->imageUuid_ != nullptr;};
    void deleteImageUuid() { this->imageUuid_ = nullptr;};
    inline string imageUuid() const { DARABONBA_PTR_GET_DEFAULT(imageUuid_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setImageUuid(string imageUuid) { DARABONBA_PTR_SET_VALUE(imageUuid_, imageUuid) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // k8sClusterId Field Functions 
    bool hasK8sClusterId() const { return this->k8sClusterId_ != nullptr;};
    void deleteK8sClusterId() { this->k8sClusterId_ = nullptr;};
    inline string k8sClusterId() const { DARABONBA_PTR_GET_DEFAULT(k8sClusterId_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setK8sClusterId(string k8sClusterId) { DARABONBA_PTR_SET_VALUE(k8sClusterId_, k8sClusterId) };


    // k8sClusterName Field Functions 
    bool hasK8sClusterName() const { return this->k8sClusterName_ != nullptr;};
    void deleteK8sClusterName() { this->k8sClusterName_ = nullptr;};
    inline string k8sClusterName() const { DARABONBA_PTR_GET_DEFAULT(k8sClusterName_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setK8sClusterName(string k8sClusterName) { DARABONBA_PTR_SET_VALUE(k8sClusterName_, k8sClusterName) };


    // k8sNamespace Field Functions 
    bool hasK8sNamespace() const { return this->k8sNamespace_ != nullptr;};
    void deleteK8sNamespace() { this->k8sNamespace_ = nullptr;};
    inline string k8sNamespace() const { DARABONBA_PTR_GET_DEFAULT(k8sNamespace_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setK8sNamespace(string k8sNamespace) { DARABONBA_PTR_SET_VALUE(k8sNamespace_, k8sNamespace) };


    // k8sNodeId Field Functions 
    bool hasK8sNodeId() const { return this->k8sNodeId_ != nullptr;};
    void deleteK8sNodeId() { this->k8sNodeId_ = nullptr;};
    inline string k8sNodeId() const { DARABONBA_PTR_GET_DEFAULT(k8sNodeId_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setK8sNodeId(string k8sNodeId) { DARABONBA_PTR_SET_VALUE(k8sNodeId_, k8sNodeId) };


    // k8sNodeName Field Functions 
    bool hasK8sNodeName() const { return this->k8sNodeName_ != nullptr;};
    void deleteK8sNodeName() { this->k8sNodeName_ = nullptr;};
    inline string k8sNodeName() const { DARABONBA_PTR_GET_DEFAULT(k8sNodeName_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setK8sNodeName(string k8sNodeName) { DARABONBA_PTR_SET_VALUE(k8sNodeName_, k8sNodeName) };


    // k8sPodName Field Functions 
    bool hasK8sPodName() const { return this->k8sPodName_ != nullptr;};
    void deleteK8sPodName() { this->k8sPodName_ = nullptr;};
    inline string k8sPodName() const { DARABONBA_PTR_GET_DEFAULT(k8sPodName_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setK8sPodName(string k8sPodName) { DARABONBA_PTR_SET_VALUE(k8sPodName_, k8sPodName) };


    // largeModel Field Functions 
    bool hasLargeModel() const { return this->largeModel_ != nullptr;};
    void deleteLargeModel() { this->largeModel_ = nullptr;};
    inline bool largeModel() const { DARABONBA_PTR_GET_DEFAULT(largeModel_, false) };
    inline DescribeSuspEventsResponseBodySuspEvents& setLargeModel(bool largeModel) { DARABONBA_PTR_SET_VALUE(largeModel_, largeModel) };


    // lastTime Field Functions 
    bool hasLastTime() const { return this->lastTime_ != nullptr;};
    void deleteLastTime() { this->lastTime_ = nullptr;};
    inline string lastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setLastTime(string lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


    // lastTimeStamp Field Functions 
    bool hasLastTimeStamp() const { return this->lastTimeStamp_ != nullptr;};
    void deleteLastTimeStamp() { this->lastTimeStamp_ = nullptr;};
    inline int64_t lastTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(lastTimeStamp_, 0L) };
    inline DescribeSuspEventsResponseBodySuspEvents& setLastTimeStamp(int64_t lastTimeStamp) { DARABONBA_PTR_SET_VALUE(lastTimeStamp_, lastTimeStamp) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // maliciousRuleStatus Field Functions 
    bool hasMaliciousRuleStatus() const { return this->maliciousRuleStatus_ != nullptr;};
    void deleteMaliciousRuleStatus() { this->maliciousRuleStatus_ = nullptr;};
    inline string maliciousRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(maliciousRuleStatus_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setMaliciousRuleStatus(string maliciousRuleStatus) { DARABONBA_PTR_SET_VALUE(maliciousRuleStatus_, maliciousRuleStatus) };


    // markList Field Functions 
    bool hasMarkList() const { return this->markList_ != nullptr;};
    void deleteMarkList() { this->markList_ = nullptr;};
    inline const vector<string> & markList() const { DARABONBA_PTR_GET_CONST(markList_, vector<string>) };
    inline vector<string> markList() { DARABONBA_PTR_GET(markList_, vector<string>) };
    inline DescribeSuspEventsResponseBodySuspEvents& setMarkList(const vector<string> & markList) { DARABONBA_PTR_SET_VALUE(markList_, markList) };
    inline DescribeSuspEventsResponseBodySuspEvents& setMarkList(vector<string> && markList) { DARABONBA_PTR_SET_RVALUE(markList_, markList) };


    // markMisRules Field Functions 
    bool hasMarkMisRules() const { return this->markMisRules_ != nullptr;};
    void deleteMarkMisRules() { this->markMisRules_ = nullptr;};
    inline string markMisRules() const { DARABONBA_PTR_GET_DEFAULT(markMisRules_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setMarkMisRules(string markMisRules) { DARABONBA_PTR_SET_VALUE(markMisRules_, markMisRules) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // occurrenceTime Field Functions 
    bool hasOccurrenceTime() const { return this->occurrenceTime_ != nullptr;};
    void deleteOccurrenceTime() { this->occurrenceTime_ = nullptr;};
    inline string occurrenceTime() const { DARABONBA_PTR_GET_DEFAULT(occurrenceTime_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setOccurrenceTime(string occurrenceTime) { DARABONBA_PTR_SET_VALUE(occurrenceTime_, occurrenceTime) };


    // occurrenceTimeStamp Field Functions 
    bool hasOccurrenceTimeStamp() const { return this->occurrenceTimeStamp_ != nullptr;};
    void deleteOccurrenceTimeStamp() { this->occurrenceTimeStamp_ = nullptr;};
    inline int64_t occurrenceTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(occurrenceTimeStamp_, 0L) };
    inline DescribeSuspEventsResponseBodySuspEvents& setOccurrenceTimeStamp(int64_t occurrenceTimeStamp) { DARABONBA_PTR_SET_VALUE(occurrenceTimeStamp_, occurrenceTimeStamp) };


    // operateErrorCode Field Functions 
    bool hasOperateErrorCode() const { return this->operateErrorCode_ != nullptr;};
    void deleteOperateErrorCode() { this->operateErrorCode_ = nullptr;};
    inline string operateErrorCode() const { DARABONBA_PTR_GET_DEFAULT(operateErrorCode_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setOperateErrorCode(string operateErrorCode) { DARABONBA_PTR_SET_VALUE(operateErrorCode_, operateErrorCode) };


    // operateMsg Field Functions 
    bool hasOperateMsg() const { return this->operateMsg_ != nullptr;};
    void deleteOperateMsg() { this->operateMsg_ = nullptr;};
    inline string operateMsg() const { DARABONBA_PTR_GET_DEFAULT(operateMsg_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setOperateMsg(string operateMsg) { DARABONBA_PTR_SET_VALUE(operateMsg_, operateMsg) };


    // operateTime Field Functions 
    bool hasOperateTime() const { return this->operateTime_ != nullptr;};
    void deleteOperateTime() { this->operateTime_ = nullptr;};
    inline int64_t operateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, 0L) };
    inline DescribeSuspEventsResponseBodySuspEvents& setOperateTime(int64_t operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


    // saleVersion Field Functions 
    bool hasSaleVersion() const { return this->saleVersion_ != nullptr;};
    void deleteSaleVersion() { this->saleVersion_ = nullptr;};
    inline string saleVersion() const { DARABONBA_PTR_GET_DEFAULT(saleVersion_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setSaleVersion(string saleVersion) { DARABONBA_PTR_SET_VALUE(saleVersion_, saleVersion) };


    // securityEventIds Field Functions 
    bool hasSecurityEventIds() const { return this->securityEventIds_ != nullptr;};
    void deleteSecurityEventIds() { this->securityEventIds_ = nullptr;};
    inline string securityEventIds() const { DARABONBA_PTR_GET_DEFAULT(securityEventIds_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setSecurityEventIds(string securityEventIds) { DARABONBA_PTR_SET_VALUE(securityEventIds_, securityEventIds) };


    // sourceAliUid Field Functions 
    bool hasSourceAliUid() const { return this->sourceAliUid_ != nullptr;};
    void deleteSourceAliUid() { this->sourceAliUid_ = nullptr;};
    inline int64_t sourceAliUid() const { DARABONBA_PTR_GET_DEFAULT(sourceAliUid_, 0L) };
    inline DescribeSuspEventsResponseBodySuspEvents& setSourceAliUid(int64_t sourceAliUid) { DARABONBA_PTR_SET_VALUE(sourceAliUid_, sourceAliUid) };


    // stages Field Functions 
    bool hasStages() const { return this->stages_ != nullptr;};
    void deleteStages() { this->stages_ = nullptr;};
    inline string stages() const { DARABONBA_PTR_GET_DEFAULT(stages_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setStages(string stages) { DARABONBA_PTR_SET_VALUE(stages_, stages) };


    // tacticItems Field Functions 
    bool hasTacticItems() const { return this->tacticItems_ != nullptr;};
    void deleteTacticItems() { this->tacticItems_ = nullptr;};
    inline const vector<Models::DescribeSuspEventsResponseBodySuspEventsTacticItems> & tacticItems() const { DARABONBA_PTR_GET_CONST(tacticItems_, vector<Models::DescribeSuspEventsResponseBodySuspEventsTacticItems>) };
    inline vector<Models::DescribeSuspEventsResponseBodySuspEventsTacticItems> tacticItems() { DARABONBA_PTR_GET(tacticItems_, vector<Models::DescribeSuspEventsResponseBodySuspEventsTacticItems>) };
    inline DescribeSuspEventsResponseBodySuspEvents& setTacticItems(const vector<Models::DescribeSuspEventsResponseBodySuspEventsTacticItems> & tacticItems) { DARABONBA_PTR_SET_VALUE(tacticItems_, tacticItems) };
    inline DescribeSuspEventsResponseBodySuspEvents& setTacticItems(vector<Models::DescribeSuspEventsResponseBodySuspEventsTacticItems> && tacticItems) { DARABONBA_PTR_SET_RVALUE(tacticItems_, tacticItems) };


    // uniqueInfo Field Functions 
    bool hasUniqueInfo() const { return this->uniqueInfo_ != nullptr;};
    void deleteUniqueInfo() { this->uniqueInfo_ = nullptr;};
    inline string uniqueInfo() const { DARABONBA_PTR_GET_DEFAULT(uniqueInfo_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setUniqueInfo(string uniqueInfo) { DARABONBA_PTR_SET_VALUE(uniqueInfo_, uniqueInfo) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeSuspEventsResponseBodySuspEvents& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    // Indicates whether the alert event was analyzed offline.
    std::shared_ptr<bool> advanced_ = nullptr;
    // The name of the alert event.
    std::shared_ptr<string> alarmEventName_ = nullptr;
    // The name of the alert.
    std::shared_ptr<string> alarmEventNameDisplay_ = nullptr;
    // The type of the alert event.
    std::shared_ptr<string> alarmEventType_ = nullptr;
    // The display name of the type of the alert event.
    std::shared_ptr<string> alarmEventTypeDisplay_ = nullptr;
    // The unique ID of the alert event.
    std::shared_ptr<string> alarmUniqueInfo_ = nullptr;
    // The name of the application to which the alert event belongs.
    std::shared_ptr<string> appName_ = nullptr;
    // Indicates whether automatic defense is enabled.
    std::shared_ptr<bool> autoBreaking_ = nullptr;
    // Indicates whether you can handle the alert event online, such as quarantining the source file of the malicious process. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> canBeDealOnLine_ = nullptr;
    // Indicates whether you can cancel marking the alert event as a false positive. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> canCancelFault_ = nullptr;
    // Indicates whether the safeguard mode for major activities is enabled for the server. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> containHwMode_ = nullptr;
    // The ID of the container.
    std::shared_ptr<string> containerId_ = nullptr;
    // The ID of the container image.
    std::shared_ptr<string> containerImageId_ = nullptr;
    // The name of the container image.
    std::shared_ptr<string> containerImageName_ = nullptr;
    // The source of data. This parameter can be ignored.
    std::shared_ptr<string> dataSource_ = nullptr;
    // The impact of the alert event.
    std::shared_ptr<string> desc_ = nullptr;
    // The details of the alert event.
    std::shared_ptr<vector<Models::DescribeSuspEventsResponseBodySuspEventsDetails>> details_ = nullptr;
    // Indicates whether the alert event can be detected by cloud sandbox. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> displaySandboxResult_ = nullptr;
    // The note information about the alert event.
    std::shared_ptr<vector<Models::DescribeSuspEventsResponseBodySuspEventsEventNotes>> eventNotes_ = nullptr;
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
    std::shared_ptr<int32_t> eventStatus_ = nullptr;
    // The subtype of the alert event.
    std::shared_ptr<string> eventSubType_ = nullptr;
    // Indicates whether the alert event has tracing information. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> hasTraceInfo_ = nullptr;
    // The unique ID of the alert event.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The UUID of the image.
    std::shared_ptr<string> imageUuid_ = nullptr;
    // The instance ID of the affected asset.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the associated instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the associated instance.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the associated instance.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The ID of the Kubernetes cluster.
    std::shared_ptr<string> k8sClusterId_ = nullptr;
    // The name of the Kubernetes cluster.
    std::shared_ptr<string> k8sClusterName_ = nullptr;
    // The namespace of the Kubernetes cluster.
    std::shared_ptr<string> k8sNamespace_ = nullptr;
    // The ID of the Kubernetes node.
    std::shared_ptr<string> k8sNodeId_ = nullptr;
    // The name of the Kubernetes node.
    std::shared_ptr<string> k8sNodeName_ = nullptr;
    // The name of the Kubernetes pod.
    std::shared_ptr<string> k8sPodName_ = nullptr;
    // Indicates whether the large model analysis tag is supported. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> largeModel_ = nullptr;
    // The time when the alert event was last detected.
    std::shared_ptr<string> lastTime_ = nullptr;
    // The timestamp when the alert event was last detected. Unit: milliseconds.
    std::shared_ptr<int64_t> lastTimeStamp_ = nullptr;
    // The severity of the alert event. Valid values:
    // 
    // *   **serious**
    // *   **suspicious**
    // *   **remind**
    std::shared_ptr<string> level_ = nullptr;
    // The status of the malicious behavior defense rule. Valid values:
    // 
    // *   **open**
    // *   **close**
    std::shared_ptr<string> maliciousRuleStatus_ = nullptr;
    // The tags of the alert events.
    std::shared_ptr<vector<string>> markList_ = nullptr;
    // The advanced whitelist rule.
    std::shared_ptr<string> markMisRules_ = nullptr;
    // The complete name of the alert event.
    std::shared_ptr<string> name_ = nullptr;
    // The time when the alert event was first detected.
    std::shared_ptr<string> occurrenceTime_ = nullptr;
    // The timestamp when the alert event was first detected. Unit: milliseconds.
    std::shared_ptr<int64_t> occurrenceTimeStamp_ = nullptr;
    // The handling result code of the alert event.
    std::shared_ptr<string> operateErrorCode_ = nullptr;
    // The handing result message of the alert event.
    std::shared_ptr<string> operateMsg_ = nullptr;
    // The handling timestamp of the alert event. Unit: milliseconds.
    std::shared_ptr<int64_t> operateTime_ = nullptr;
    // The edition of Security Center in which the alert event can be detected. Valid values:
    // 
    // *   **0**: Basic edition
    // *   **1**: Enterprise edition
    std::shared_ptr<string> saleVersion_ = nullptr;
    // The ID of the associated alert event.
    std::shared_ptr<string> securityEventIds_ = nullptr;
    // The ID of the Alibaba Cloud account within which an alert is generated.
    std::shared_ptr<int64_t> sourceAliUid_ = nullptr;
    // The stage at which the attack is detected.
    std::shared_ptr<string> stages_ = nullptr;
    // The display name of the attack stage.
    std::shared_ptr<vector<Models::DescribeSuspEventsResponseBodySuspEventsTacticItems>> tacticItems_ = nullptr;
    // The unique key of the alert.
    std::shared_ptr<string> uniqueInfo_ = nullptr;
    // The unique ID of the associated instance.
    std::shared_ptr<string> uuid_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
