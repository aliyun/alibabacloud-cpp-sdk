// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCREENALARMEVENTLISTRESPONSEBODYSUSPEVENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCREENALARMEVENTLISTRESPONSEBODYSUSPEVENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20210114
{
namespace Models
{
  class DescribeScreenAlarmEventListResponseBodySuspEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScreenAlarmEventListResponseBodySuspEvents& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmEventName, alarmEventName_);
      DARABONBA_PTR_TO_JSON(AlarmEventType, alarmEventType_);
      DARABONBA_PTR_TO_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
      DARABONBA_PTR_TO_JSON(CanBeDealOnLine, canBeDealOnLine_);
      DARABONBA_PTR_TO_JSON(CanCancelFault, canCancelFault_);
      DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(Dealed, dealed_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(SaleVersion, saleVersion_);
      DARABONBA_PTR_TO_JSON(Solution, solution_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(SuspiciousEventCount, suspiciousEventCount_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScreenAlarmEventListResponseBodySuspEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmEventName, alarmEventName_);
      DARABONBA_PTR_FROM_JSON(AlarmEventType, alarmEventType_);
      DARABONBA_PTR_FROM_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
      DARABONBA_PTR_FROM_JSON(CanBeDealOnLine, canBeDealOnLine_);
      DARABONBA_PTR_FROM_JSON(CanCancelFault, canCancelFault_);
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(Dealed, dealed_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(SaleVersion, saleVersion_);
      DARABONBA_PTR_FROM_JSON(Solution, solution_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(SuspiciousEventCount, suspiciousEventCount_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeScreenAlarmEventListResponseBodySuspEvents() = default ;
    DescribeScreenAlarmEventListResponseBodySuspEvents(const DescribeScreenAlarmEventListResponseBodySuspEvents &) = default ;
    DescribeScreenAlarmEventListResponseBodySuspEvents(DescribeScreenAlarmEventListResponseBodySuspEvents &&) = default ;
    DescribeScreenAlarmEventListResponseBodySuspEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScreenAlarmEventListResponseBodySuspEvents() = default ;
    DescribeScreenAlarmEventListResponseBodySuspEvents& operator=(const DescribeScreenAlarmEventListResponseBodySuspEvents &) = default ;
    DescribeScreenAlarmEventListResponseBodySuspEvents& operator=(DescribeScreenAlarmEventListResponseBodySuspEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmEventName_ == nullptr
        && return this->alarmEventType_ == nullptr && return this->alarmUniqueInfo_ == nullptr && return this->canBeDealOnLine_ == nullptr && return this->canCancelFault_ == nullptr && return this->dataSource_ == nullptr
        && return this->dealed_ == nullptr && return this->description_ == nullptr && return this->endTime_ == nullptr && return this->instanceName_ == nullptr && return this->internetIp_ == nullptr
        && return this->intranetIp_ == nullptr && return this->level_ == nullptr && return this->saleVersion_ == nullptr && return this->solution_ == nullptr && return this->startTime_ == nullptr
        && return this->suspiciousEventCount_ == nullptr && return this->uuid_ == nullptr; };
    // alarmEventName Field Functions 
    bool hasAlarmEventName() const { return this->alarmEventName_ != nullptr;};
    void deleteAlarmEventName() { this->alarmEventName_ = nullptr;};
    inline string alarmEventName() const { DARABONBA_PTR_GET_DEFAULT(alarmEventName_, "") };
    inline DescribeScreenAlarmEventListResponseBodySuspEvents& setAlarmEventName(string alarmEventName) { DARABONBA_PTR_SET_VALUE(alarmEventName_, alarmEventName) };


    // alarmEventType Field Functions 
    bool hasAlarmEventType() const { return this->alarmEventType_ != nullptr;};
    void deleteAlarmEventType() { this->alarmEventType_ = nullptr;};
    inline string alarmEventType() const { DARABONBA_PTR_GET_DEFAULT(alarmEventType_, "") };
    inline DescribeScreenAlarmEventListResponseBodySuspEvents& setAlarmEventType(string alarmEventType) { DARABONBA_PTR_SET_VALUE(alarmEventType_, alarmEventType) };


    // alarmUniqueInfo Field Functions 
    bool hasAlarmUniqueInfo() const { return this->alarmUniqueInfo_ != nullptr;};
    void deleteAlarmUniqueInfo() { this->alarmUniqueInfo_ = nullptr;};
    inline string alarmUniqueInfo() const { DARABONBA_PTR_GET_DEFAULT(alarmUniqueInfo_, "") };
    inline DescribeScreenAlarmEventListResponseBodySuspEvents& setAlarmUniqueInfo(string alarmUniqueInfo) { DARABONBA_PTR_SET_VALUE(alarmUniqueInfo_, alarmUniqueInfo) };


    // canBeDealOnLine Field Functions 
    bool hasCanBeDealOnLine() const { return this->canBeDealOnLine_ != nullptr;};
    void deleteCanBeDealOnLine() { this->canBeDealOnLine_ = nullptr;};
    inline bool canBeDealOnLine() const { DARABONBA_PTR_GET_DEFAULT(canBeDealOnLine_, false) };
    inline DescribeScreenAlarmEventListResponseBodySuspEvents& setCanBeDealOnLine(bool canBeDealOnLine) { DARABONBA_PTR_SET_VALUE(canBeDealOnLine_, canBeDealOnLine) };


    // canCancelFault Field Functions 
    bool hasCanCancelFault() const { return this->canCancelFault_ != nullptr;};
    void deleteCanCancelFault() { this->canCancelFault_ = nullptr;};
    inline bool canCancelFault() const { DARABONBA_PTR_GET_DEFAULT(canCancelFault_, false) };
    inline DescribeScreenAlarmEventListResponseBodySuspEvents& setCanCancelFault(bool canCancelFault) { DARABONBA_PTR_SET_VALUE(canCancelFault_, canCancelFault) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline string dataSource() const { DARABONBA_PTR_GET_DEFAULT(dataSource_, "") };
    inline DescribeScreenAlarmEventListResponseBodySuspEvents& setDataSource(string dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };


    // dealed Field Functions 
    bool hasDealed() const { return this->dealed_ != nullptr;};
    void deleteDealed() { this->dealed_ = nullptr;};
    inline bool dealed() const { DARABONBA_PTR_GET_DEFAULT(dealed_, false) };
    inline DescribeScreenAlarmEventListResponseBodySuspEvents& setDealed(bool dealed) { DARABONBA_PTR_SET_VALUE(dealed_, dealed) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeScreenAlarmEventListResponseBodySuspEvents& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeScreenAlarmEventListResponseBodySuspEvents& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeScreenAlarmEventListResponseBodySuspEvents& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeScreenAlarmEventListResponseBodySuspEvents& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeScreenAlarmEventListResponseBodySuspEvents& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeScreenAlarmEventListResponseBodySuspEvents& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // saleVersion Field Functions 
    bool hasSaleVersion() const { return this->saleVersion_ != nullptr;};
    void deleteSaleVersion() { this->saleVersion_ = nullptr;};
    inline string saleVersion() const { DARABONBA_PTR_GET_DEFAULT(saleVersion_, "") };
    inline DescribeScreenAlarmEventListResponseBodySuspEvents& setSaleVersion(string saleVersion) { DARABONBA_PTR_SET_VALUE(saleVersion_, saleVersion) };


    // solution Field Functions 
    bool hasSolution() const { return this->solution_ != nullptr;};
    void deleteSolution() { this->solution_ = nullptr;};
    inline string solution() const { DARABONBA_PTR_GET_DEFAULT(solution_, "") };
    inline DescribeScreenAlarmEventListResponseBodySuspEvents& setSolution(string solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeScreenAlarmEventListResponseBodySuspEvents& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // suspiciousEventCount Field Functions 
    bool hasSuspiciousEventCount() const { return this->suspiciousEventCount_ != nullptr;};
    void deleteSuspiciousEventCount() { this->suspiciousEventCount_ = nullptr;};
    inline int32_t suspiciousEventCount() const { DARABONBA_PTR_GET_DEFAULT(suspiciousEventCount_, 0) };
    inline DescribeScreenAlarmEventListResponseBodySuspEvents& setSuspiciousEventCount(int32_t suspiciousEventCount) { DARABONBA_PTR_SET_VALUE(suspiciousEventCount_, suspiciousEventCount) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeScreenAlarmEventListResponseBodySuspEvents& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    std::shared_ptr<string> alarmEventName_ = nullptr;
    std::shared_ptr<string> alarmEventType_ = nullptr;
    std::shared_ptr<string> alarmUniqueInfo_ = nullptr;
    std::shared_ptr<bool> canBeDealOnLine_ = nullptr;
    std::shared_ptr<bool> canCancelFault_ = nullptr;
    std::shared_ptr<string> dataSource_ = nullptr;
    std::shared_ptr<bool> dealed_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> internetIp_ = nullptr;
    std::shared_ptr<string> intranetIp_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<string> saleVersion_ = nullptr;
    std::shared_ptr<string> solution_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<int32_t> suspiciousEventCount_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif
