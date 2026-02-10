// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSECUREALARMLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSECUREALARMLISTRESPONSEBODY_HPP_
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
  class DescribeDomainSecureAlarmListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainSecureAlarmListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmList, alarmList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainSecureAlarmListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmList, alarmList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDomainSecureAlarmListResponseBody() = default ;
    DescribeDomainSecureAlarmListResponseBody(const DescribeDomainSecureAlarmListResponseBody &) = default ;
    DescribeDomainSecureAlarmListResponseBody(DescribeDomainSecureAlarmListResponseBody &&) = default ;
    DescribeDomainSecureAlarmListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainSecureAlarmListResponseBody() = default ;
    DescribeDomainSecureAlarmListResponseBody& operator=(const DescribeDomainSecureAlarmListResponseBody &) = default ;
    DescribeDomainSecureAlarmListResponseBody& operator=(DescribeDomainSecureAlarmListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AlarmList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlarmList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, AlarmList& obj) { 
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
      AlarmList() = default ;
      AlarmList(const AlarmList &) = default ;
      AlarmList(AlarmList &&) = default ;
      AlarmList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlarmList() = default ;
      AlarmList& operator=(const AlarmList &) = default ;
      AlarmList& operator=(AlarmList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alarmEventName_ == nullptr
        && this->alarmEventNameOriginal_ == nullptr && this->alarmEventType_ == nullptr && this->alarmUniqueInfo_ == nullptr && this->autoBreaking_ == nullptr && this->canBeDealOnLine_ == nullptr
        && this->canCancelFault_ == nullptr && this->containHwMode_ == nullptr && this->dataSource_ == nullptr && this->dealed_ == nullptr && this->description_ == nullptr
        && this->endTime_ == nullptr && this->gmtModified_ == nullptr && this->hasTraceInfo_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->level_ == nullptr && this->operateErrorCode_ == nullptr && this->operateTime_ == nullptr
        && this->saleVersion_ == nullptr && this->securityEventIds_ == nullptr && this->solution_ == nullptr && this->stages_ == nullptr && this->startTime_ == nullptr
        && this->suspiciousEventCount_ == nullptr && this->uuid_ == nullptr; };
      // alarmEventName Field Functions 
      bool hasAlarmEventName() const { return this->alarmEventName_ != nullptr;};
      void deleteAlarmEventName() { this->alarmEventName_ = nullptr;};
      inline string getAlarmEventName() const { DARABONBA_PTR_GET_DEFAULT(alarmEventName_, "") };
      inline AlarmList& setAlarmEventName(string alarmEventName) { DARABONBA_PTR_SET_VALUE(alarmEventName_, alarmEventName) };


      // alarmEventNameOriginal Field Functions 
      bool hasAlarmEventNameOriginal() const { return this->alarmEventNameOriginal_ != nullptr;};
      void deleteAlarmEventNameOriginal() { this->alarmEventNameOriginal_ = nullptr;};
      inline string getAlarmEventNameOriginal() const { DARABONBA_PTR_GET_DEFAULT(alarmEventNameOriginal_, "") };
      inline AlarmList& setAlarmEventNameOriginal(string alarmEventNameOriginal) { DARABONBA_PTR_SET_VALUE(alarmEventNameOriginal_, alarmEventNameOriginal) };


      // alarmEventType Field Functions 
      bool hasAlarmEventType() const { return this->alarmEventType_ != nullptr;};
      void deleteAlarmEventType() { this->alarmEventType_ = nullptr;};
      inline string getAlarmEventType() const { DARABONBA_PTR_GET_DEFAULT(alarmEventType_, "") };
      inline AlarmList& setAlarmEventType(string alarmEventType) { DARABONBA_PTR_SET_VALUE(alarmEventType_, alarmEventType) };


      // alarmUniqueInfo Field Functions 
      bool hasAlarmUniqueInfo() const { return this->alarmUniqueInfo_ != nullptr;};
      void deleteAlarmUniqueInfo() { this->alarmUniqueInfo_ = nullptr;};
      inline string getAlarmUniqueInfo() const { DARABONBA_PTR_GET_DEFAULT(alarmUniqueInfo_, "") };
      inline AlarmList& setAlarmUniqueInfo(string alarmUniqueInfo) { DARABONBA_PTR_SET_VALUE(alarmUniqueInfo_, alarmUniqueInfo) };


      // autoBreaking Field Functions 
      bool hasAutoBreaking() const { return this->autoBreaking_ != nullptr;};
      void deleteAutoBreaking() { this->autoBreaking_ = nullptr;};
      inline bool getAutoBreaking() const { DARABONBA_PTR_GET_DEFAULT(autoBreaking_, false) };
      inline AlarmList& setAutoBreaking(bool autoBreaking) { DARABONBA_PTR_SET_VALUE(autoBreaking_, autoBreaking) };


      // canBeDealOnLine Field Functions 
      bool hasCanBeDealOnLine() const { return this->canBeDealOnLine_ != nullptr;};
      void deleteCanBeDealOnLine() { this->canBeDealOnLine_ = nullptr;};
      inline bool getCanBeDealOnLine() const { DARABONBA_PTR_GET_DEFAULT(canBeDealOnLine_, false) };
      inline AlarmList& setCanBeDealOnLine(bool canBeDealOnLine) { DARABONBA_PTR_SET_VALUE(canBeDealOnLine_, canBeDealOnLine) };


      // canCancelFault Field Functions 
      bool hasCanCancelFault() const { return this->canCancelFault_ != nullptr;};
      void deleteCanCancelFault() { this->canCancelFault_ = nullptr;};
      inline bool getCanCancelFault() const { DARABONBA_PTR_GET_DEFAULT(canCancelFault_, false) };
      inline AlarmList& setCanCancelFault(bool canCancelFault) { DARABONBA_PTR_SET_VALUE(canCancelFault_, canCancelFault) };


      // containHwMode Field Functions 
      bool hasContainHwMode() const { return this->containHwMode_ != nullptr;};
      void deleteContainHwMode() { this->containHwMode_ = nullptr;};
      inline bool getContainHwMode() const { DARABONBA_PTR_GET_DEFAULT(containHwMode_, false) };
      inline AlarmList& setContainHwMode(bool containHwMode) { DARABONBA_PTR_SET_VALUE(containHwMode_, containHwMode) };


      // dataSource Field Functions 
      bool hasDataSource() const { return this->dataSource_ != nullptr;};
      void deleteDataSource() { this->dataSource_ = nullptr;};
      inline string getDataSource() const { DARABONBA_PTR_GET_DEFAULT(dataSource_, "") };
      inline AlarmList& setDataSource(string dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };


      // dealed Field Functions 
      bool hasDealed() const { return this->dealed_ != nullptr;};
      void deleteDealed() { this->dealed_ = nullptr;};
      inline bool getDealed() const { DARABONBA_PTR_GET_DEFAULT(dealed_, false) };
      inline AlarmList& setDealed(bool dealed) { DARABONBA_PTR_SET_VALUE(dealed_, dealed) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AlarmList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline AlarmList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline AlarmList& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // hasTraceInfo Field Functions 
      bool hasHasTraceInfo() const { return this->hasTraceInfo_ != nullptr;};
      void deleteHasTraceInfo() { this->hasTraceInfo_ = nullptr;};
      inline bool getHasTraceInfo() const { DARABONBA_PTR_GET_DEFAULT(hasTraceInfo_, false) };
      inline AlarmList& setHasTraceInfo(bool hasTraceInfo) { DARABONBA_PTR_SET_VALUE(hasTraceInfo_, hasTraceInfo) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline AlarmList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline AlarmList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline AlarmList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline AlarmList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline AlarmList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // operateErrorCode Field Functions 
      bool hasOperateErrorCode() const { return this->operateErrorCode_ != nullptr;};
      void deleteOperateErrorCode() { this->operateErrorCode_ = nullptr;};
      inline string getOperateErrorCode() const { DARABONBA_PTR_GET_DEFAULT(operateErrorCode_, "") };
      inline AlarmList& setOperateErrorCode(string operateErrorCode) { DARABONBA_PTR_SET_VALUE(operateErrorCode_, operateErrorCode) };


      // operateTime Field Functions 
      bool hasOperateTime() const { return this->operateTime_ != nullptr;};
      void deleteOperateTime() { this->operateTime_ = nullptr;};
      inline int64_t getOperateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, 0L) };
      inline AlarmList& setOperateTime(int64_t operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


      // saleVersion Field Functions 
      bool hasSaleVersion() const { return this->saleVersion_ != nullptr;};
      void deleteSaleVersion() { this->saleVersion_ = nullptr;};
      inline string getSaleVersion() const { DARABONBA_PTR_GET_DEFAULT(saleVersion_, "") };
      inline AlarmList& setSaleVersion(string saleVersion) { DARABONBA_PTR_SET_VALUE(saleVersion_, saleVersion) };


      // securityEventIds Field Functions 
      bool hasSecurityEventIds() const { return this->securityEventIds_ != nullptr;};
      void deleteSecurityEventIds() { this->securityEventIds_ = nullptr;};
      inline string getSecurityEventIds() const { DARABONBA_PTR_GET_DEFAULT(securityEventIds_, "") };
      inline AlarmList& setSecurityEventIds(string securityEventIds) { DARABONBA_PTR_SET_VALUE(securityEventIds_, securityEventIds) };


      // solution Field Functions 
      bool hasSolution() const { return this->solution_ != nullptr;};
      void deleteSolution() { this->solution_ = nullptr;};
      inline string getSolution() const { DARABONBA_PTR_GET_DEFAULT(solution_, "") };
      inline AlarmList& setSolution(string solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };


      // stages Field Functions 
      bool hasStages() const { return this->stages_ != nullptr;};
      void deleteStages() { this->stages_ = nullptr;};
      inline string getStages() const { DARABONBA_PTR_GET_DEFAULT(stages_, "") };
      inline AlarmList& setStages(string stages) { DARABONBA_PTR_SET_VALUE(stages_, stages) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline AlarmList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // suspiciousEventCount Field Functions 
      bool hasSuspiciousEventCount() const { return this->suspiciousEventCount_ != nullptr;};
      void deleteSuspiciousEventCount() { this->suspiciousEventCount_ = nullptr;};
      inline int32_t getSuspiciousEventCount() const { DARABONBA_PTR_GET_DEFAULT(suspiciousEventCount_, 0) };
      inline AlarmList& setSuspiciousEventCount(int32_t suspiciousEventCount) { DARABONBA_PTR_SET_VALUE(suspiciousEventCount_, suspiciousEventCount) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline AlarmList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The name of the alert event.
      shared_ptr<string> alarmEventName_ {};
      // The original parent name of the alert event.
      shared_ptr<string> alarmEventNameOriginal_ {};
      // The type of the alert event.
      shared_ptr<string> alarmEventType_ {};
      // The unique ID of the alert event.
      shared_ptr<string> alarmUniqueInfo_ {};
      // Indicates whether automatic defense is enabled.
      shared_ptr<bool> autoBreaking_ {};
      // Indicates whether the alert event can be handled online, such as quarantining the source file of the malicious process, adding the alert event to the whitelist, and ignoring the alert event. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> canBeDealOnLine_ {};
      // Indicates whether you can cancel marking the alert event as a false positive. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> canCancelFault_ {};
      // Indicates whether the safeguard mode for major activities is supported.
      shared_ptr<bool> containHwMode_ {};
      // The data source of the alert event.
      shared_ptr<string> dataSource_ {};
      // Indicates whether the alert event is handled. Valid values:
      // 
      // *   **N**: unhandled
      // *   **Y**: handled
      shared_ptr<bool> dealed_ {};
      // The description of the alert event.
      shared_ptr<string> description_ {};
      // The timestamp generated when the alert event was last detected. Unit: milliseconds.
      shared_ptr<int64_t> endTime_ {};
      // The time of the last modification.
      shared_ptr<int64_t> gmtModified_ {};
      // Indicates whether the alert event has tracing information. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> hasTraceInfo_ {};
      // The instance ID of the affected asset.
      shared_ptr<string> instanceId_ {};
      // The instance name of the affected asset.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the server.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the affected instance.
      shared_ptr<string> intranetIp_ {};
      // The risk level of the alert event. Valid values:
      // 
      // *   **serious**
      // *   **suspicious**
      // *   **remind**
      shared_ptr<string> level_ {};
      // The handling result code of the alert event.
      shared_ptr<string> operateErrorCode_ {};
      // The timestamp generated when the alert event was handled. Unit: milliseconds.
      shared_ptr<int64_t> operateTime_ {};
      // The edition of Security Center in which the alert event can be detected. Valid values:
      // 
      // *   **0**: Basic edition.
      // *   **1**: Advanced edition.
      // *   **2**: Enterprise edition.
      shared_ptr<string> saleVersion_ {};
      // The ID of the associated alert event.
      shared_ptr<string> securityEventIds_ {};
      // The solution to the alert event.
      shared_ptr<string> solution_ {};
      // The stage at which the attack or intrusion is detected.
      shared_ptr<string> stages_ {};
      // The timestamp generated when the alert event was first detected. Unit: milliseconds.
      shared_ptr<int64_t> startTime_ {};
      // The total number of security alerts in your website assets.
      shared_ptr<int32_t> suspiciousEventCount_ {};
      // The unique ID of the associated instance.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->alarmList_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // alarmList Field Functions 
    bool hasAlarmList() const { return this->alarmList_ != nullptr;};
    void deleteAlarmList() { this->alarmList_ = nullptr;};
    inline const vector<DescribeDomainSecureAlarmListResponseBody::AlarmList> & getAlarmList() const { DARABONBA_PTR_GET_CONST(alarmList_, vector<DescribeDomainSecureAlarmListResponseBody::AlarmList>) };
    inline vector<DescribeDomainSecureAlarmListResponseBody::AlarmList> getAlarmList() { DARABONBA_PTR_GET(alarmList_, vector<DescribeDomainSecureAlarmListResponseBody::AlarmList>) };
    inline DescribeDomainSecureAlarmListResponseBody& setAlarmList(const vector<DescribeDomainSecureAlarmListResponseBody::AlarmList> & alarmList) { DARABONBA_PTR_SET_VALUE(alarmList_, alarmList) };
    inline DescribeDomainSecureAlarmListResponseBody& setAlarmList(vector<DescribeDomainSecureAlarmListResponseBody::AlarmList> && alarmList) { DARABONBA_PTR_SET_RVALUE(alarmList_, alarmList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainSecureAlarmListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDomainSecureAlarmListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The security alerts in your website assets.
    shared_ptr<vector<DescribeDomainSecureAlarmListResponseBody::AlarmList>> alarmList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
