// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSECUREALARMLISTRESPONSEBODYALARMLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSECUREALARMLISTRESPONSEBODYALARMLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDomainSecureAlarmListResponseBodyAlarmList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainSecureAlarmListResponseBodyAlarmList& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmEventName, alarmEventName_);
      DARABONBA_PTR_TO_JSON(AlarmEventNameOriginal, alarmEventNameOriginal_);
      DARABONBA_PTR_TO_JSON(AlarmEventType, alarmEventType_);
      DARABONBA_PTR_TO_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
      DARABONBA_PTR_TO_JSON(AutoBreaking, autoBreaking_);
      DARABONBA_PTR_TO_JSON(CanBeDealOnLine, canBeDealOnLine_);
      DARABONBA_PTR_TO_JSON(CanCancelFault, canCancelFault_);
      DARABONBA_PTR_TO_JSON(ContainHwMode, containHwMode_);
      DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(Dealed, dealed_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(HasTraceInfo, hasTraceInfo_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(OperateErrorCode, operateErrorCode_);
      DARABONBA_PTR_TO_JSON(OperateTime, operateTime_);
      DARABONBA_PTR_TO_JSON(SaleVersion, saleVersion_);
      DARABONBA_PTR_TO_JSON(SecurityEventIds, securityEventIds_);
      DARABONBA_PTR_TO_JSON(Solution, solution_);
      DARABONBA_PTR_TO_JSON(Stages, stages_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(SuspiciousEventCount, suspiciousEventCount_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainSecureAlarmListResponseBodyAlarmList& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmEventName, alarmEventName_);
      DARABONBA_PTR_FROM_JSON(AlarmEventNameOriginal, alarmEventNameOriginal_);
      DARABONBA_PTR_FROM_JSON(AlarmEventType, alarmEventType_);
      DARABONBA_PTR_FROM_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
      DARABONBA_PTR_FROM_JSON(AutoBreaking, autoBreaking_);
      DARABONBA_PTR_FROM_JSON(CanBeDealOnLine, canBeDealOnLine_);
      DARABONBA_PTR_FROM_JSON(CanCancelFault, canCancelFault_);
      DARABONBA_PTR_FROM_JSON(ContainHwMode, containHwMode_);
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(Dealed, dealed_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(HasTraceInfo, hasTraceInfo_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(OperateErrorCode, operateErrorCode_);
      DARABONBA_PTR_FROM_JSON(OperateTime, operateTime_);
      DARABONBA_PTR_FROM_JSON(SaleVersion, saleVersion_);
      DARABONBA_PTR_FROM_JSON(SecurityEventIds, securityEventIds_);
      DARABONBA_PTR_FROM_JSON(Solution, solution_);
      DARABONBA_PTR_FROM_JSON(Stages, stages_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(SuspiciousEventCount, suspiciousEventCount_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeDomainSecureAlarmListResponseBodyAlarmList() = default ;
    DescribeDomainSecureAlarmListResponseBodyAlarmList(const DescribeDomainSecureAlarmListResponseBodyAlarmList &) = default ;
    DescribeDomainSecureAlarmListResponseBodyAlarmList(DescribeDomainSecureAlarmListResponseBodyAlarmList &&) = default ;
    DescribeDomainSecureAlarmListResponseBodyAlarmList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainSecureAlarmListResponseBodyAlarmList() = default ;
    DescribeDomainSecureAlarmListResponseBodyAlarmList& operator=(const DescribeDomainSecureAlarmListResponseBodyAlarmList &) = default ;
    DescribeDomainSecureAlarmListResponseBodyAlarmList& operator=(DescribeDomainSecureAlarmListResponseBodyAlarmList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmEventName_ == nullptr
        && return this->alarmEventNameOriginal_ == nullptr && return this->alarmEventType_ == nullptr && return this->alarmUniqueInfo_ == nullptr && return this->autoBreaking_ == nullptr && return this->canBeDealOnLine_ == nullptr
        && return this->canCancelFault_ == nullptr && return this->containHwMode_ == nullptr && return this->dataSource_ == nullptr && return this->dealed_ == nullptr && return this->description_ == nullptr
        && return this->endTime_ == nullptr && return this->gmtModified_ == nullptr && return this->hasTraceInfo_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr
        && return this->internetIp_ == nullptr && return this->intranetIp_ == nullptr && return this->level_ == nullptr && return this->operateErrorCode_ == nullptr && return this->operateTime_ == nullptr
        && return this->saleVersion_ == nullptr && return this->securityEventIds_ == nullptr && return this->solution_ == nullptr && return this->stages_ == nullptr && return this->startTime_ == nullptr
        && return this->suspiciousEventCount_ == nullptr && return this->uuid_ == nullptr; };
    // alarmEventName Field Functions 
    bool hasAlarmEventName() const { return this->alarmEventName_ != nullptr;};
    void deleteAlarmEventName() { this->alarmEventName_ = nullptr;};
    inline string alarmEventName() const { DARABONBA_PTR_GET_DEFAULT(alarmEventName_, "") };
    inline DescribeDomainSecureAlarmListResponseBodyAlarmList& setAlarmEventName(string alarmEventName) { DARABONBA_PTR_SET_VALUE(alarmEventName_, alarmEventName) };


    // alarmEventNameOriginal Field Functions 
    bool hasAlarmEventNameOriginal() const { return this->alarmEventNameOriginal_ != nullptr;};
    void deleteAlarmEventNameOriginal() { this->alarmEventNameOriginal_ = nullptr;};
    inline string alarmEventNameOriginal() const { DARABONBA_PTR_GET_DEFAULT(alarmEventNameOriginal_, "") };
    inline DescribeDomainSecureAlarmListResponseBodyAlarmList& setAlarmEventNameOriginal(string alarmEventNameOriginal) { DARABONBA_PTR_SET_VALUE(alarmEventNameOriginal_, alarmEventNameOriginal) };


    // alarmEventType Field Functions 
    bool hasAlarmEventType() const { return this->alarmEventType_ != nullptr;};
    void deleteAlarmEventType() { this->alarmEventType_ = nullptr;};
    inline string alarmEventType() const { DARABONBA_PTR_GET_DEFAULT(alarmEventType_, "") };
    inline DescribeDomainSecureAlarmListResponseBodyAlarmList& setAlarmEventType(string alarmEventType) { DARABONBA_PTR_SET_VALUE(alarmEventType_, alarmEventType) };


    // alarmUniqueInfo Field Functions 
    bool hasAlarmUniqueInfo() const { return this->alarmUniqueInfo_ != nullptr;};
    void deleteAlarmUniqueInfo() { this->alarmUniqueInfo_ = nullptr;};
    inline string alarmUniqueInfo() const { DARABONBA_PTR_GET_DEFAULT(alarmUniqueInfo_, "") };
    inline DescribeDomainSecureAlarmListResponseBodyAlarmList& setAlarmUniqueInfo(string alarmUniqueInfo) { DARABONBA_PTR_SET_VALUE(alarmUniqueInfo_, alarmUniqueInfo) };


    // autoBreaking Field Functions 
    bool hasAutoBreaking() const { return this->autoBreaking_ != nullptr;};
    void deleteAutoBreaking() { this->autoBreaking_ = nullptr;};
    inline bool autoBreaking() const { DARABONBA_PTR_GET_DEFAULT(autoBreaking_, false) };
    inline DescribeDomainSecureAlarmListResponseBodyAlarmList& setAutoBreaking(bool autoBreaking) { DARABONBA_PTR_SET_VALUE(autoBreaking_, autoBreaking) };


    // canBeDealOnLine Field Functions 
    bool hasCanBeDealOnLine() const { return this->canBeDealOnLine_ != nullptr;};
    void deleteCanBeDealOnLine() { this->canBeDealOnLine_ = nullptr;};
    inline bool canBeDealOnLine() const { DARABONBA_PTR_GET_DEFAULT(canBeDealOnLine_, false) };
    inline DescribeDomainSecureAlarmListResponseBodyAlarmList& setCanBeDealOnLine(bool canBeDealOnLine) { DARABONBA_PTR_SET_VALUE(canBeDealOnLine_, canBeDealOnLine) };


    // canCancelFault Field Functions 
    bool hasCanCancelFault() const { return this->canCancelFault_ != nullptr;};
    void deleteCanCancelFault() { this->canCancelFault_ = nullptr;};
    inline bool canCancelFault() const { DARABONBA_PTR_GET_DEFAULT(canCancelFault_, false) };
    inline DescribeDomainSecureAlarmListResponseBodyAlarmList& setCanCancelFault(bool canCancelFault) { DARABONBA_PTR_SET_VALUE(canCancelFault_, canCancelFault) };


    // containHwMode Field Functions 
    bool hasContainHwMode() const { return this->containHwMode_ != nullptr;};
    void deleteContainHwMode() { this->containHwMode_ = nullptr;};
    inline bool containHwMode() const { DARABONBA_PTR_GET_DEFAULT(containHwMode_, false) };
    inline DescribeDomainSecureAlarmListResponseBodyAlarmList& setContainHwMode(bool containHwMode) { DARABONBA_PTR_SET_VALUE(containHwMode_, containHwMode) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline string dataSource() const { DARABONBA_PTR_GET_DEFAULT(dataSource_, "") };
    inline DescribeDomainSecureAlarmListResponseBodyAlarmList& setDataSource(string dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };


    // dealed Field Functions 
    bool hasDealed() const { return this->dealed_ != nullptr;};
    void deleteDealed() { this->dealed_ = nullptr;};
    inline bool dealed() const { DARABONBA_PTR_GET_DEFAULT(dealed_, false) };
    inline DescribeDomainSecureAlarmListResponseBodyAlarmList& setDealed(bool dealed) { DARABONBA_PTR_SET_VALUE(dealed_, dealed) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDomainSecureAlarmListResponseBodyAlarmList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeDomainSecureAlarmListResponseBodyAlarmList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeDomainSecureAlarmListResponseBodyAlarmList& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // hasTraceInfo Field Functions 
    bool hasHasTraceInfo() const { return this->hasTraceInfo_ != nullptr;};
    void deleteHasTraceInfo() { this->hasTraceInfo_ = nullptr;};
    inline bool hasTraceInfo() const { DARABONBA_PTR_GET_DEFAULT(hasTraceInfo_, false) };
    inline DescribeDomainSecureAlarmListResponseBodyAlarmList& setHasTraceInfo(bool hasTraceInfo) { DARABONBA_PTR_SET_VALUE(hasTraceInfo_, hasTraceInfo) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDomainSecureAlarmListResponseBodyAlarmList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeDomainSecureAlarmListResponseBodyAlarmList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeDomainSecureAlarmListResponseBodyAlarmList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeDomainSecureAlarmListResponseBodyAlarmList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeDomainSecureAlarmListResponseBodyAlarmList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // operateErrorCode Field Functions 
    bool hasOperateErrorCode() const { return this->operateErrorCode_ != nullptr;};
    void deleteOperateErrorCode() { this->operateErrorCode_ = nullptr;};
    inline string operateErrorCode() const { DARABONBA_PTR_GET_DEFAULT(operateErrorCode_, "") };
    inline DescribeDomainSecureAlarmListResponseBodyAlarmList& setOperateErrorCode(string operateErrorCode) { DARABONBA_PTR_SET_VALUE(operateErrorCode_, operateErrorCode) };


    // operateTime Field Functions 
    bool hasOperateTime() const { return this->operateTime_ != nullptr;};
    void deleteOperateTime() { this->operateTime_ = nullptr;};
    inline int64_t operateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, 0L) };
    inline DescribeDomainSecureAlarmListResponseBodyAlarmList& setOperateTime(int64_t operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


    // saleVersion Field Functions 
    bool hasSaleVersion() const { return this->saleVersion_ != nullptr;};
    void deleteSaleVersion() { this->saleVersion_ = nullptr;};
    inline string saleVersion() const { DARABONBA_PTR_GET_DEFAULT(saleVersion_, "") };
    inline DescribeDomainSecureAlarmListResponseBodyAlarmList& setSaleVersion(string saleVersion) { DARABONBA_PTR_SET_VALUE(saleVersion_, saleVersion) };


    // securityEventIds Field Functions 
    bool hasSecurityEventIds() const { return this->securityEventIds_ != nullptr;};
    void deleteSecurityEventIds() { this->securityEventIds_ = nullptr;};
    inline string securityEventIds() const { DARABONBA_PTR_GET_DEFAULT(securityEventIds_, "") };
    inline DescribeDomainSecureAlarmListResponseBodyAlarmList& setSecurityEventIds(string securityEventIds) { DARABONBA_PTR_SET_VALUE(securityEventIds_, securityEventIds) };


    // solution Field Functions 
    bool hasSolution() const { return this->solution_ != nullptr;};
    void deleteSolution() { this->solution_ = nullptr;};
    inline string solution() const { DARABONBA_PTR_GET_DEFAULT(solution_, "") };
    inline DescribeDomainSecureAlarmListResponseBodyAlarmList& setSolution(string solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };


    // stages Field Functions 
    bool hasStages() const { return this->stages_ != nullptr;};
    void deleteStages() { this->stages_ = nullptr;};
    inline string stages() const { DARABONBA_PTR_GET_DEFAULT(stages_, "") };
    inline DescribeDomainSecureAlarmListResponseBodyAlarmList& setStages(string stages) { DARABONBA_PTR_SET_VALUE(stages_, stages) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDomainSecureAlarmListResponseBodyAlarmList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // suspiciousEventCount Field Functions 
    bool hasSuspiciousEventCount() const { return this->suspiciousEventCount_ != nullptr;};
    void deleteSuspiciousEventCount() { this->suspiciousEventCount_ = nullptr;};
    inline int32_t suspiciousEventCount() const { DARABONBA_PTR_GET_DEFAULT(suspiciousEventCount_, 0) };
    inline DescribeDomainSecureAlarmListResponseBodyAlarmList& setSuspiciousEventCount(int32_t suspiciousEventCount) { DARABONBA_PTR_SET_VALUE(suspiciousEventCount_, suspiciousEventCount) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeDomainSecureAlarmListResponseBodyAlarmList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The name of the alert event.
    std::shared_ptr<string> alarmEventName_ = nullptr;
    // The original parent name of the alert event.
    std::shared_ptr<string> alarmEventNameOriginal_ = nullptr;
    // The type of the alert event.
    std::shared_ptr<string> alarmEventType_ = nullptr;
    // The unique ID of the alert event.
    std::shared_ptr<string> alarmUniqueInfo_ = nullptr;
    // Indicates whether automatic defense is enabled.
    std::shared_ptr<bool> autoBreaking_ = nullptr;
    // Indicates whether the alert event can be handled online, such as quarantining the source file of the malicious process, adding the alert event to the whitelist, and ignoring the alert event. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> canBeDealOnLine_ = nullptr;
    // Indicates whether you can cancel marking the alert event as a false positive. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> canCancelFault_ = nullptr;
    // Indicates whether the safeguard mode for major activities is supported.
    std::shared_ptr<bool> containHwMode_ = nullptr;
    // The data source of the alert event.
    std::shared_ptr<string> dataSource_ = nullptr;
    // Indicates whether the alert event is handled. Valid values:
    // 
    // *   **N**: unhandled
    // *   **Y**: handled
    std::shared_ptr<bool> dealed_ = nullptr;
    // The description of the alert event.
    std::shared_ptr<string> description_ = nullptr;
    // The timestamp generated when the alert event was last detected. Unit: milliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The time of the last modification.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // Indicates whether the alert event has tracing information. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> hasTraceInfo_ = nullptr;
    // The instance ID of the affected asset.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name of the affected asset.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the affected instance.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The risk level of the alert event. Valid values:
    // 
    // *   **serious**
    // *   **suspicious**
    // *   **remind**
    std::shared_ptr<string> level_ = nullptr;
    // The handling result code of the alert event.
    std::shared_ptr<string> operateErrorCode_ = nullptr;
    // The timestamp generated when the alert event was handled. Unit: milliseconds.
    std::shared_ptr<int64_t> operateTime_ = nullptr;
    // The edition of Security Center in which the alert event can be detected. Valid values:
    // 
    // *   **0**: Basic edition.
    // *   **1**: Advanced edition.
    // *   **2**: Enterprise edition.
    std::shared_ptr<string> saleVersion_ = nullptr;
    // The ID of the associated alert event.
    std::shared_ptr<string> securityEventIds_ = nullptr;
    // The solution to the alert event.
    std::shared_ptr<string> solution_ = nullptr;
    // The stage at which the attack or intrusion is detected.
    std::shared_ptr<string> stages_ = nullptr;
    // The timestamp generated when the alert event was first detected. Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The total number of security alerts in your website assets.
    std::shared_ptr<int32_t> suspiciousEventCount_ = nullptr;
    // The unique ID of the associated instance.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
