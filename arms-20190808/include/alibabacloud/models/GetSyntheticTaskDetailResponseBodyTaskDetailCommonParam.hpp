// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNTHETICTASKDETAILRESPONSEBODYTASKDETAILCOMMONPARAM_HPP_
#define ALIBABACLOUD_MODELS_GETSYNTHETICTASKDETAILRESPONSEBODYTASKDETAILCOMMONPARAM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSyntheticTaskDetailResponseBodyTaskDetailCommonParamAlertList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetSyntheticTaskDetailResponseBodyTaskDetailCommonParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyntheticTaskDetailResponseBodyTaskDetailCommonParam& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmFlag, alarmFlag_);
      DARABONBA_PTR_TO_JSON(AlertList, alertList_);
      DARABONBA_PTR_TO_JSON(AlertNotifierId, alertNotifierId_);
      DARABONBA_PTR_TO_JSON(AlertPolicyId, alertPolicyId_);
      DARABONBA_PTR_TO_JSON(MonitorSamples, monitorSamples_);
      DARABONBA_PTR_TO_JSON(StartExecutionTime, startExecutionTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyntheticTaskDetailResponseBodyTaskDetailCommonParam& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmFlag, alarmFlag_);
      DARABONBA_PTR_FROM_JSON(AlertList, alertList_);
      DARABONBA_PTR_FROM_JSON(AlertNotifierId, alertNotifierId_);
      DARABONBA_PTR_FROM_JSON(AlertPolicyId, alertPolicyId_);
      DARABONBA_PTR_FROM_JSON(MonitorSamples, monitorSamples_);
      DARABONBA_PTR_FROM_JSON(StartExecutionTime, startExecutionTime_);
    };
    GetSyntheticTaskDetailResponseBodyTaskDetailCommonParam() = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailCommonParam(const GetSyntheticTaskDetailResponseBodyTaskDetailCommonParam &) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailCommonParam(GetSyntheticTaskDetailResponseBodyTaskDetailCommonParam &&) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailCommonParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyntheticTaskDetailResponseBodyTaskDetailCommonParam() = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailCommonParam& operator=(const GetSyntheticTaskDetailResponseBodyTaskDetailCommonParam &) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailCommonParam& operator=(GetSyntheticTaskDetailResponseBodyTaskDetailCommonParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmFlag_ != nullptr
        && this->alertList_ != nullptr && this->alertNotifierId_ != nullptr && this->alertPolicyId_ != nullptr && this->monitorSamples_ != nullptr && this->startExecutionTime_ != nullptr; };
    // alarmFlag Field Functions 
    bool hasAlarmFlag() const { return this->alarmFlag_ != nullptr;};
    void deleteAlarmFlag() { this->alarmFlag_ = nullptr;};
    inline int64_t alarmFlag() const { DARABONBA_PTR_GET_DEFAULT(alarmFlag_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailCommonParam& setAlarmFlag(int64_t alarmFlag) { DARABONBA_PTR_SET_VALUE(alarmFlag_, alarmFlag) };


    // alertList Field Functions 
    bool hasAlertList() const { return this->alertList_ != nullptr;};
    void deleteAlertList() { this->alertList_ = nullptr;};
    inline const vector<Models::GetSyntheticTaskDetailResponseBodyTaskDetailCommonParamAlertList> & alertList() const { DARABONBA_PTR_GET_CONST(alertList_, vector<Models::GetSyntheticTaskDetailResponseBodyTaskDetailCommonParamAlertList>) };
    inline vector<Models::GetSyntheticTaskDetailResponseBodyTaskDetailCommonParamAlertList> alertList() { DARABONBA_PTR_GET(alertList_, vector<Models::GetSyntheticTaskDetailResponseBodyTaskDetailCommonParamAlertList>) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailCommonParam& setAlertList(const vector<Models::GetSyntheticTaskDetailResponseBodyTaskDetailCommonParamAlertList> & alertList) { DARABONBA_PTR_SET_VALUE(alertList_, alertList) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailCommonParam& setAlertList(vector<Models::GetSyntheticTaskDetailResponseBodyTaskDetailCommonParamAlertList> && alertList) { DARABONBA_PTR_SET_RVALUE(alertList_, alertList) };


    // alertNotifierId Field Functions 
    bool hasAlertNotifierId() const { return this->alertNotifierId_ != nullptr;};
    void deleteAlertNotifierId() { this->alertNotifierId_ = nullptr;};
    inline string alertNotifierId() const { DARABONBA_PTR_GET_DEFAULT(alertNotifierId_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailCommonParam& setAlertNotifierId(string alertNotifierId) { DARABONBA_PTR_SET_VALUE(alertNotifierId_, alertNotifierId) };


    // alertPolicyId Field Functions 
    bool hasAlertPolicyId() const { return this->alertPolicyId_ != nullptr;};
    void deleteAlertPolicyId() { this->alertPolicyId_ = nullptr;};
    inline string alertPolicyId() const { DARABONBA_PTR_GET_DEFAULT(alertPolicyId_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailCommonParam& setAlertPolicyId(string alertPolicyId) { DARABONBA_PTR_SET_VALUE(alertPolicyId_, alertPolicyId) };


    // monitorSamples Field Functions 
    bool hasMonitorSamples() const { return this->monitorSamples_ != nullptr;};
    void deleteMonitorSamples() { this->monitorSamples_ = nullptr;};
    inline string monitorSamples() const { DARABONBA_PTR_GET_DEFAULT(monitorSamples_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailCommonParam& setMonitorSamples(string monitorSamples) { DARABONBA_PTR_SET_VALUE(monitorSamples_, monitorSamples) };


    // startExecutionTime Field Functions 
    bool hasStartExecutionTime() const { return this->startExecutionTime_ != nullptr;};
    void deleteStartExecutionTime() { this->startExecutionTime_ = nullptr;};
    inline string startExecutionTime() const { DARABONBA_PTR_GET_DEFAULT(startExecutionTime_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailCommonParam& setStartExecutionTime(string startExecutionTime) { DARABONBA_PTR_SET_VALUE(startExecutionTime_, startExecutionTime) };


  protected:
    // The identifier of the alert.
    std::shared_ptr<int64_t> alarmFlag_ = nullptr;
    // The list of alerts.
    std::shared_ptr<vector<Models::GetSyntheticTaskDetailResponseBodyTaskDetailCommonParamAlertList>> alertList_ = nullptr;
    // The ID of the alert identifier.
    std::shared_ptr<string> alertNotifierId_ = nullptr;
    // The ID of the alert policy.
    std::shared_ptr<string> alertPolicyId_ = nullptr;
    // The monitoring samples.
    std::shared_ptr<string> monitorSamples_ = nullptr;
    // The start time of the execution.
    std::shared_ptr<string> startExecutionTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
