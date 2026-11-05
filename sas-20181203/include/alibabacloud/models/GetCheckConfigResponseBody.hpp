// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKCONFIGRESPONSEBODY_HPP_
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
  class GetCheckConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(CycleDays, cycleDays_);
      DARABONBA_PTR_TO_JSON(DaysOfMonth, daysOfMonth_);
      DARABONBA_PTR_TO_JSON(EnableAddCheck, enableAddCheck_);
      DARABONBA_PTR_TO_JSON(EnableAutoCheck, enableAutoCheck_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EndTimeSeconds, endTimeSeconds_);
      DARABONBA_PTR_TO_JSON(Exists, exists_);
      DARABONBA_PTR_TO_JSON(Frequency, frequency_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SelectedChecks, selectedChecks_);
      DARABONBA_PTR_TO_JSON(Standards, standards_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StartTimeSeconds, startTimeSeconds_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(CycleDays, cycleDays_);
      DARABONBA_PTR_FROM_JSON(DaysOfMonth, daysOfMonth_);
      DARABONBA_PTR_FROM_JSON(EnableAddCheck, enableAddCheck_);
      DARABONBA_PTR_FROM_JSON(EnableAutoCheck, enableAutoCheck_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EndTimeSeconds, endTimeSeconds_);
      DARABONBA_PTR_FROM_JSON(Exists, exists_);
      DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SelectedChecks, selectedChecks_);
      DARABONBA_PTR_FROM_JSON(Standards, standards_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StartTimeSeconds, startTimeSeconds_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
    };
    GetCheckConfigResponseBody() = default ;
    GetCheckConfigResponseBody(const GetCheckConfigResponseBody &) = default ;
    GetCheckConfigResponseBody(GetCheckConfigResponseBody &&) = default ;
    GetCheckConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckConfigResponseBody() = default ;
    GetCheckConfigResponseBody& operator=(const GetCheckConfigResponseBody &) = default ;
    GetCheckConfigResponseBody& operator=(GetCheckConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Standards : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Standards& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ShowName, showName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Standards& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ShowName, showName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Standards() = default ;
      Standards(const Standards &) = default ;
      Standards(Standards &&) = default ;
      Standards(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Standards() = default ;
      Standards& operator=(const Standards &) = default ;
      Standards& operator=(Standards &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->showName_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Standards& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // showName Field Functions 
      bool hasShowName() const { return this->showName_ != nullptr;};
      void deleteShowName() { this->showName_ = nullptr;};
      inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
      inline Standards& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Standards& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Standards& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The ID of the check item.
      shared_ptr<int64_t> id_ {};
      // The name of the check item.
      shared_ptr<string> showName_ {};
      // The enabling status of the check item. Valid values:
      // 
      // - **ON**: Enabled.
      // - **OFF**: Disabled.
      shared_ptr<string> status_ {};
      // The type of the check item. Valid values:
      // 
      // - **RISK**: cloud service configuration management
      // - **IDENTITY_PERMISSION**: identity and permission management
      // - **COMPLIANCE**: compliance
      shared_ptr<string> type_ {};
    };

    class SelectedChecks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SelectedChecks& obj) { 
        DARABONBA_PTR_TO_JSON(CheckId, checkId_);
        DARABONBA_PTR_TO_JSON(SectionId, sectionId_);
      };
      friend void from_json(const Darabonba::Json& j, SelectedChecks& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
        DARABONBA_PTR_FROM_JSON(SectionId, sectionId_);
      };
      SelectedChecks() = default ;
      SelectedChecks(const SelectedChecks &) = default ;
      SelectedChecks(SelectedChecks &&) = default ;
      SelectedChecks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SelectedChecks() = default ;
      SelectedChecks& operator=(const SelectedChecks &) = default ;
      SelectedChecks& operator=(SelectedChecks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkId_ == nullptr
        && this->sectionId_ == nullptr; };
      // checkId Field Functions 
      bool hasCheckId() const { return this->checkId_ != nullptr;};
      void deleteCheckId() { this->checkId_ = nullptr;};
      inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
      inline SelectedChecks& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


      // sectionId Field Functions 
      bool hasSectionId() const { return this->sectionId_ != nullptr;};
      void deleteSectionId() { this->sectionId_ = nullptr;};
      inline int64_t getSectionId() const { DARABONBA_PTR_GET_DEFAULT(sectionId_, 0L) };
      inline SelectedChecks& setSectionId(int64_t sectionId) { DARABONBA_PTR_SET_VALUE(sectionId_, sectionId) };


    protected:
      // The ID of the check item.
      shared_ptr<int64_t> checkId_ {};
      // The section ID of the check item.
      shared_ptr<int64_t> sectionId_ {};
    };

    virtual bool empty() const override { return this->configId_ == nullptr
        && this->cycleDays_ == nullptr && this->daysOfMonth_ == nullptr && this->enableAddCheck_ == nullptr && this->enableAutoCheck_ == nullptr && this->endTime_ == nullptr
        && this->endTimeSeconds_ == nullptr && this->exists_ == nullptr && this->frequency_ == nullptr && this->isDefault_ == nullptr && this->requestId_ == nullptr
        && this->selectedChecks_ == nullptr && this->standards_ == nullptr && this->startTime_ == nullptr && this->startTimeSeconds_ == nullptr && this->strategyName_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline GetCheckConfigResponseBody& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // cycleDays Field Functions 
    bool hasCycleDays() const { return this->cycleDays_ != nullptr;};
    void deleteCycleDays() { this->cycleDays_ = nullptr;};
    inline const vector<int32_t> & getCycleDays() const { DARABONBA_PTR_GET_CONST(cycleDays_, vector<int32_t>) };
    inline vector<int32_t> getCycleDays() { DARABONBA_PTR_GET(cycleDays_, vector<int32_t>) };
    inline GetCheckConfigResponseBody& setCycleDays(const vector<int32_t> & cycleDays) { DARABONBA_PTR_SET_VALUE(cycleDays_, cycleDays) };
    inline GetCheckConfigResponseBody& setCycleDays(vector<int32_t> && cycleDays) { DARABONBA_PTR_SET_RVALUE(cycleDays_, cycleDays) };


    // daysOfMonth Field Functions 
    bool hasDaysOfMonth() const { return this->daysOfMonth_ != nullptr;};
    void deleteDaysOfMonth() { this->daysOfMonth_ = nullptr;};
    inline const vector<int32_t> & getDaysOfMonth() const { DARABONBA_PTR_GET_CONST(daysOfMonth_, vector<int32_t>) };
    inline vector<int32_t> getDaysOfMonth() { DARABONBA_PTR_GET(daysOfMonth_, vector<int32_t>) };
    inline GetCheckConfigResponseBody& setDaysOfMonth(const vector<int32_t> & daysOfMonth) { DARABONBA_PTR_SET_VALUE(daysOfMonth_, daysOfMonth) };
    inline GetCheckConfigResponseBody& setDaysOfMonth(vector<int32_t> && daysOfMonth) { DARABONBA_PTR_SET_RVALUE(daysOfMonth_, daysOfMonth) };


    // enableAddCheck Field Functions 
    bool hasEnableAddCheck() const { return this->enableAddCheck_ != nullptr;};
    void deleteEnableAddCheck() { this->enableAddCheck_ = nullptr;};
    inline bool getEnableAddCheck() const { DARABONBA_PTR_GET_DEFAULT(enableAddCheck_, false) };
    inline GetCheckConfigResponseBody& setEnableAddCheck(bool enableAddCheck) { DARABONBA_PTR_SET_VALUE(enableAddCheck_, enableAddCheck) };


    // enableAutoCheck Field Functions 
    bool hasEnableAutoCheck() const { return this->enableAutoCheck_ != nullptr;};
    void deleteEnableAutoCheck() { this->enableAutoCheck_ = nullptr;};
    inline bool getEnableAutoCheck() const { DARABONBA_PTR_GET_DEFAULT(enableAutoCheck_, false) };
    inline GetCheckConfigResponseBody& setEnableAutoCheck(bool enableAutoCheck) { DARABONBA_PTR_SET_VALUE(enableAutoCheck_, enableAutoCheck) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int32_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
    inline GetCheckConfigResponseBody& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // endTimeSeconds Field Functions 
    bool hasEndTimeSeconds() const { return this->endTimeSeconds_ != nullptr;};
    void deleteEndTimeSeconds() { this->endTimeSeconds_ = nullptr;};
    inline int32_t getEndTimeSeconds() const { DARABONBA_PTR_GET_DEFAULT(endTimeSeconds_, 0) };
    inline GetCheckConfigResponseBody& setEndTimeSeconds(int32_t endTimeSeconds) { DARABONBA_PTR_SET_VALUE(endTimeSeconds_, endTimeSeconds) };


    // exists Field Functions 
    bool hasExists() const { return this->exists_ != nullptr;};
    void deleteExists() { this->exists_ = nullptr;};
    inline bool getExists() const { DARABONBA_PTR_GET_DEFAULT(exists_, false) };
    inline GetCheckConfigResponseBody& setExists(bool exists) { DARABONBA_PTR_SET_VALUE(exists_, exists) };


    // frequency Field Functions 
    bool hasFrequency() const { return this->frequency_ != nullptr;};
    void deleteFrequency() { this->frequency_ = nullptr;};
    inline string getFrequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, "") };
    inline GetCheckConfigResponseBody& setFrequency(string frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline GetCheckConfigResponseBody& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCheckConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // selectedChecks Field Functions 
    bool hasSelectedChecks() const { return this->selectedChecks_ != nullptr;};
    void deleteSelectedChecks() { this->selectedChecks_ = nullptr;};
    inline const vector<GetCheckConfigResponseBody::SelectedChecks> & getSelectedChecks() const { DARABONBA_PTR_GET_CONST(selectedChecks_, vector<GetCheckConfigResponseBody::SelectedChecks>) };
    inline vector<GetCheckConfigResponseBody::SelectedChecks> getSelectedChecks() { DARABONBA_PTR_GET(selectedChecks_, vector<GetCheckConfigResponseBody::SelectedChecks>) };
    inline GetCheckConfigResponseBody& setSelectedChecks(const vector<GetCheckConfigResponseBody::SelectedChecks> & selectedChecks) { DARABONBA_PTR_SET_VALUE(selectedChecks_, selectedChecks) };
    inline GetCheckConfigResponseBody& setSelectedChecks(vector<GetCheckConfigResponseBody::SelectedChecks> && selectedChecks) { DARABONBA_PTR_SET_RVALUE(selectedChecks_, selectedChecks) };


    // standards Field Functions 
    bool hasStandards() const { return this->standards_ != nullptr;};
    void deleteStandards() { this->standards_ = nullptr;};
    inline const vector<GetCheckConfigResponseBody::Standards> & getStandards() const { DARABONBA_PTR_GET_CONST(standards_, vector<GetCheckConfigResponseBody::Standards>) };
    inline vector<GetCheckConfigResponseBody::Standards> getStandards() { DARABONBA_PTR_GET(standards_, vector<GetCheckConfigResponseBody::Standards>) };
    inline GetCheckConfigResponseBody& setStandards(const vector<GetCheckConfigResponseBody::Standards> & standards) { DARABONBA_PTR_SET_VALUE(standards_, standards) };
    inline GetCheckConfigResponseBody& setStandards(vector<GetCheckConfigResponseBody::Standards> && standards) { DARABONBA_PTR_SET_RVALUE(standards_, standards) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int32_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0) };
    inline GetCheckConfigResponseBody& setStartTime(int32_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // startTimeSeconds Field Functions 
    bool hasStartTimeSeconds() const { return this->startTimeSeconds_ != nullptr;};
    void deleteStartTimeSeconds() { this->startTimeSeconds_ = nullptr;};
    inline int32_t getStartTimeSeconds() const { DARABONBA_PTR_GET_DEFAULT(startTimeSeconds_, 0) };
    inline GetCheckConfigResponseBody& setStartTimeSeconds(int32_t startTimeSeconds) { DARABONBA_PTR_SET_VALUE(startTimeSeconds_, startTimeSeconds) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline GetCheckConfigResponseBody& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


  protected:
    // The policy ID.
    shared_ptr<string> configId_ {};
    // The periodic check time.
    shared_ptr<vector<int32_t>> cycleDays_ {};
    // The list of days when the policy cycle is monthly.
    shared_ptr<vector<int32_t>> daysOfMonth_ {};
    // Specifies whether to check new check items by default when new check items are added to the selected regulations. Valid values:
    // 
    // - **true**: Enabled.
    // - **false**: Disabled.
    shared_ptr<bool> enableAddCheck_ {};
    // Specifies whether to enable automatic periodic checks. Valid values:
    // 
    // - **true**: Enabled.
    // - **false**: Disabled.
    shared_ptr<bool> enableAutoCheck_ {};
    // The end time of the check time period, which indicates the hour of the day. The start time and end time of the query can only be selected from the following time intervals.
    // 
    // - **0 to 6**: When the start time is 0, the end time must be set to 6 on the same day.
    // - **6 to 12**: When the start time is 6, the end time must be set to 12 on the same day.
    // - **12 to 18**: When the start time is 12, the end time must be set to 18 on the same day.
    // - **18 to 24**: When the start time is 18, the end time must be set to 24 on the same day. The unit is hours (h).
    shared_ptr<int32_t> endTime_ {};
    // The end time of the check, in seconds from 00:00:00 on the current day. Valid values: 1 to 86400. The value 86400 indicates 00:00:00 on the next day. This value is directly passed through from the database and is the only authoritative source for the exact window. For the system default policy (Frequency=6HOURLY) row, this value is always null (not 0), and callers must perform null checks.
    shared_ptr<int32_t> endTimeSeconds_ {};
    // Indicates whether the requested ConfigId has a corresponding policy. When the value is false, the operation still returns a success response and the remaining configuration fields are empty. Callers should render an empty state based on this value and not rely on error codes.
    shared_ptr<bool> exists_ {};
    // The frequency type. Valid values:
    // - DAILY: daily
    // - WEEKLY: weekly
    // - MONTHLY: monthly
    // - 6HOURLY: every 6 hours
    shared_ptr<string> frequency_ {};
    // Indicates whether the policy is the default policy.
    shared_ptr<bool> isDefault_ {};
    // The ID of the request. It is a unique identifier generated by Alibaba Cloud for the request and can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // The check items selected in the policy.
    shared_ptr<vector<GetCheckConfigResponseBody::SelectedChecks>> selectedChecks_ {};
    // The list of check item information.
    shared_ptr<vector<GetCheckConfigResponseBody::Standards>> standards_ {};
    // The start time of the check time period, which indicates the hour of the day. The unit is hours (h).
    shared_ptr<int32_t> startTime_ {};
    // The start time of the check, in seconds from 00:00:00 on the current day. Valid values: 0 to 86399. This value is directly passed through from the database and is the only authoritative source for the exact window. For the system default policy (Frequency=6HOURLY) row, this value is always null (not 0), and callers must perform null checks. Do not use the derived StartTime to reverse-engineer this value because the conversion is irreversible.
    shared_ptr<int32_t> startTimeSeconds_ {};
    // The policy name.
    shared_ptr<string> strategyName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
