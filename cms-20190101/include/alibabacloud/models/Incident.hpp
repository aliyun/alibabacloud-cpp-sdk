// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCIDENT_HPP_
#define ALIBABACLOUD_MODELS_INCIDENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class Incident : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Incident& obj) { 
      DARABONBA_PTR_TO_JSON(ActionTime, actionTime_);
      DARABONBA_PTR_TO_JSON(AlertCount, alertCount_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_ANY_TO_JSON(GroupingData, groupingData_);
      DARABONBA_PTR_TO_JSON(GroupingId, groupingId_);
      DARABONBA_PTR_TO_JSON(GroupingKey, groupingKey_);
      DARABONBA_PTR_TO_JSON(IncidentId, incidentId_);
      DARABONBA_PTR_TO_JSON(IncidentStatus, incidentStatus_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StrategyUuid, strategyUuid_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, Incident& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionTime, actionTime_);
      DARABONBA_PTR_FROM_JSON(AlertCount, alertCount_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_ANY_FROM_JSON(GroupingData, groupingData_);
      DARABONBA_PTR_FROM_JSON(GroupingId, groupingId_);
      DARABONBA_PTR_FROM_JSON(GroupingKey, groupingKey_);
      DARABONBA_PTR_FROM_JSON(IncidentId, incidentId_);
      DARABONBA_PTR_FROM_JSON(IncidentStatus, incidentStatus_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StrategyUuid, strategyUuid_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    Incident() = default ;
    Incident(const Incident &) = default ;
    Incident(Incident &&) = default ;
    Incident(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Incident() = default ;
    Incident& operator=(const Incident &) = default ;
    Incident& operator=(Incident &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionTime_ == nullptr
        && return this->alertCount_ == nullptr && return this->endTime_ == nullptr && return this->groupingData_ == nullptr && return this->groupingId_ == nullptr && return this->groupingKey_ == nullptr
        && return this->incidentId_ == nullptr && return this->incidentStatus_ == nullptr && return this->severity_ == nullptr && return this->startTime_ == nullptr && return this->strategyUuid_ == nullptr
        && return this->userId_ == nullptr; };
    // actionTime Field Functions 
    bool hasActionTime() const { return this->actionTime_ != nullptr;};
    void deleteActionTime() { this->actionTime_ = nullptr;};
    inline int64_t actionTime() const { DARABONBA_PTR_GET_DEFAULT(actionTime_, 0L) };
    inline Incident& setActionTime(int64_t actionTime) { DARABONBA_PTR_SET_VALUE(actionTime_, actionTime) };


    // alertCount Field Functions 
    bool hasAlertCount() const { return this->alertCount_ != nullptr;};
    void deleteAlertCount() { this->alertCount_ = nullptr;};
    inline int64_t alertCount() const { DARABONBA_PTR_GET_DEFAULT(alertCount_, 0L) };
    inline Incident& setAlertCount(int64_t alertCount) { DARABONBA_PTR_SET_VALUE(alertCount_, alertCount) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline Incident& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // groupingData Field Functions 
    bool hasGroupingData() const { return this->groupingData_ != nullptr;};
    void deleteGroupingData() { this->groupingData_ = nullptr;};
    inline     const Darabonba::Json & groupingData() const { DARABONBA_GET(groupingData_) };
    Darabonba::Json & groupingData() { DARABONBA_GET(groupingData_) };
    inline Incident& setGroupingData(const Darabonba::Json & groupingData) { DARABONBA_SET_VALUE(groupingData_, groupingData) };
    inline Incident& setGroupingData(Darabonba::Json & groupingData) { DARABONBA_SET_RVALUE(groupingData_, groupingData) };


    // groupingId Field Functions 
    bool hasGroupingId() const { return this->groupingId_ != nullptr;};
    void deleteGroupingId() { this->groupingId_ = nullptr;};
    inline string groupingId() const { DARABONBA_PTR_GET_DEFAULT(groupingId_, "") };
    inline Incident& setGroupingId(string groupingId) { DARABONBA_PTR_SET_VALUE(groupingId_, groupingId) };


    // groupingKey Field Functions 
    bool hasGroupingKey() const { return this->groupingKey_ != nullptr;};
    void deleteGroupingKey() { this->groupingKey_ = nullptr;};
    inline string groupingKey() const { DARABONBA_PTR_GET_DEFAULT(groupingKey_, "") };
    inline Incident& setGroupingKey(string groupingKey) { DARABONBA_PTR_SET_VALUE(groupingKey_, groupingKey) };


    // incidentId Field Functions 
    bool hasIncidentId() const { return this->incidentId_ != nullptr;};
    void deleteIncidentId() { this->incidentId_ = nullptr;};
    inline string incidentId() const { DARABONBA_PTR_GET_DEFAULT(incidentId_, "") };
    inline Incident& setIncidentId(string incidentId) { DARABONBA_PTR_SET_VALUE(incidentId_, incidentId) };


    // incidentStatus Field Functions 
    bool hasIncidentStatus() const { return this->incidentStatus_ != nullptr;};
    void deleteIncidentStatus() { this->incidentStatus_ = nullptr;};
    inline string incidentStatus() const { DARABONBA_PTR_GET_DEFAULT(incidentStatus_, "") };
    inline Incident& setIncidentStatus(string incidentStatus) { DARABONBA_PTR_SET_VALUE(incidentStatus_, incidentStatus) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline Incident& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline Incident& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // strategyUuid Field Functions 
    bool hasStrategyUuid() const { return this->strategyUuid_ != nullptr;};
    void deleteStrategyUuid() { this->strategyUuid_ = nullptr;};
    inline string strategyUuid() const { DARABONBA_PTR_GET_DEFAULT(strategyUuid_, "") };
    inline Incident& setStrategyUuid(string strategyUuid) { DARABONBA_PTR_SET_VALUE(strategyUuid_, strategyUuid) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline Incident& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int64_t> actionTime_ = nullptr;
    std::shared_ptr<int64_t> alertCount_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    Darabonba::Json groupingData_ = nullptr;
    std::shared_ptr<string> groupingId_ = nullptr;
    std::shared_ptr<string> groupingKey_ = nullptr;
    std::shared_ptr<string> incidentId_ = nullptr;
    std::shared_ptr<string> incidentStatus_ = nullptr;
    std::shared_ptr<string> severity_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> strategyUuid_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
