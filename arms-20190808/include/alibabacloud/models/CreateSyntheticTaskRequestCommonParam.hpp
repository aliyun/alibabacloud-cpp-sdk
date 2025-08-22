// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESYNTHETICTASKREQUESTCOMMONPARAM_HPP_
#define ALIBABACLOUD_MODELS_CREATESYNTHETICTASKREQUESTCOMMONPARAM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateSyntheticTaskRequestCommonParamAlertList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateSyntheticTaskRequestCommonParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSyntheticTaskRequestCommonParam& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmFlag, alarmFlag_);
      DARABONBA_PTR_TO_JSON(AlertList, alertList_);
      DARABONBA_PTR_TO_JSON(AlertNotifierId, alertNotifierId_);
      DARABONBA_PTR_TO_JSON(AlertPolicyId, alertPolicyId_);
      DARABONBA_PTR_TO_JSON(MonitorSamples, monitorSamples_);
      DARABONBA_PTR_TO_JSON(StartExecutionTime, startExecutionTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSyntheticTaskRequestCommonParam& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmFlag, alarmFlag_);
      DARABONBA_PTR_FROM_JSON(AlertList, alertList_);
      DARABONBA_PTR_FROM_JSON(AlertNotifierId, alertNotifierId_);
      DARABONBA_PTR_FROM_JSON(AlertPolicyId, alertPolicyId_);
      DARABONBA_PTR_FROM_JSON(MonitorSamples, monitorSamples_);
      DARABONBA_PTR_FROM_JSON(StartExecutionTime, startExecutionTime_);
    };
    CreateSyntheticTaskRequestCommonParam() = default ;
    CreateSyntheticTaskRequestCommonParam(const CreateSyntheticTaskRequestCommonParam &) = default ;
    CreateSyntheticTaskRequestCommonParam(CreateSyntheticTaskRequestCommonParam &&) = default ;
    CreateSyntheticTaskRequestCommonParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSyntheticTaskRequestCommonParam() = default ;
    CreateSyntheticTaskRequestCommonParam& operator=(const CreateSyntheticTaskRequestCommonParam &) = default ;
    CreateSyntheticTaskRequestCommonParam& operator=(CreateSyntheticTaskRequestCommonParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmFlag_ != nullptr
        && this->alertList_ != nullptr && this->alertNotifierId_ != nullptr && this->alertPolicyId_ != nullptr && this->monitorSamples_ != nullptr && this->startExecutionTime_ != nullptr; };
    // alarmFlag Field Functions 
    bool hasAlarmFlag() const { return this->alarmFlag_ != nullptr;};
    void deleteAlarmFlag() { this->alarmFlag_ = nullptr;};
    inline string alarmFlag() const { DARABONBA_PTR_GET_DEFAULT(alarmFlag_, "") };
    inline CreateSyntheticTaskRequestCommonParam& setAlarmFlag(string alarmFlag) { DARABONBA_PTR_SET_VALUE(alarmFlag_, alarmFlag) };


    // alertList Field Functions 
    bool hasAlertList() const { return this->alertList_ != nullptr;};
    void deleteAlertList() { this->alertList_ = nullptr;};
    inline const vector<Models::CreateSyntheticTaskRequestCommonParamAlertList> & alertList() const { DARABONBA_PTR_GET_CONST(alertList_, vector<Models::CreateSyntheticTaskRequestCommonParamAlertList>) };
    inline vector<Models::CreateSyntheticTaskRequestCommonParamAlertList> alertList() { DARABONBA_PTR_GET(alertList_, vector<Models::CreateSyntheticTaskRequestCommonParamAlertList>) };
    inline CreateSyntheticTaskRequestCommonParam& setAlertList(const vector<Models::CreateSyntheticTaskRequestCommonParamAlertList> & alertList) { DARABONBA_PTR_SET_VALUE(alertList_, alertList) };
    inline CreateSyntheticTaskRequestCommonParam& setAlertList(vector<Models::CreateSyntheticTaskRequestCommonParamAlertList> && alertList) { DARABONBA_PTR_SET_RVALUE(alertList_, alertList) };


    // alertNotifierId Field Functions 
    bool hasAlertNotifierId() const { return this->alertNotifierId_ != nullptr;};
    void deleteAlertNotifierId() { this->alertNotifierId_ = nullptr;};
    inline string alertNotifierId() const { DARABONBA_PTR_GET_DEFAULT(alertNotifierId_, "") };
    inline CreateSyntheticTaskRequestCommonParam& setAlertNotifierId(string alertNotifierId) { DARABONBA_PTR_SET_VALUE(alertNotifierId_, alertNotifierId) };


    // alertPolicyId Field Functions 
    bool hasAlertPolicyId() const { return this->alertPolicyId_ != nullptr;};
    void deleteAlertPolicyId() { this->alertPolicyId_ = nullptr;};
    inline string alertPolicyId() const { DARABONBA_PTR_GET_DEFAULT(alertPolicyId_, "") };
    inline CreateSyntheticTaskRequestCommonParam& setAlertPolicyId(string alertPolicyId) { DARABONBA_PTR_SET_VALUE(alertPolicyId_, alertPolicyId) };


    // monitorSamples Field Functions 
    bool hasMonitorSamples() const { return this->monitorSamples_ != nullptr;};
    void deleteMonitorSamples() { this->monitorSamples_ = nullptr;};
    inline int64_t monitorSamples() const { DARABONBA_PTR_GET_DEFAULT(monitorSamples_, 0L) };
    inline CreateSyntheticTaskRequestCommonParam& setMonitorSamples(int64_t monitorSamples) { DARABONBA_PTR_SET_VALUE(monitorSamples_, monitorSamples) };


    // startExecutionTime Field Functions 
    bool hasStartExecutionTime() const { return this->startExecutionTime_ != nullptr;};
    void deleteStartExecutionTime() { this->startExecutionTime_ = nullptr;};
    inline int64_t startExecutionTime() const { DARABONBA_PTR_GET_DEFAULT(startExecutionTime_, 0L) };
    inline CreateSyntheticTaskRequestCommonParam& setStartExecutionTime(int64_t startExecutionTime) { DARABONBA_PTR_SET_VALUE(startExecutionTime_, startExecutionTime) };


  protected:
    // Specifies whether to create an alert rule.
    // 
    // *   1: creates an alert.
    // *   0: does not create an alert.
    std::shared_ptr<string> alarmFlag_ = nullptr;
    // The alert parameters.
    std::shared_ptr<vector<Models::CreateSyntheticTaskRequestCommonParamAlertList>> alertList_ = nullptr;
    // The ID of the alert recipient. Separate multiple recipients with commas (,).
    std::shared_ptr<string> alertNotifierId_ = nullptr;
    // The ID of the notification policy.
    std::shared_ptr<string> alertPolicyId_ = nullptr;
    // Specifies whether to evenly distribute monitoring samples. Valid values:
    // 
    // *   0: no
    // *   1: yes
    std::shared_ptr<int64_t> monitorSamples_ = nullptr;
    // The time when execution starts.
    std::shared_ptr<int64_t> startExecutionTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
