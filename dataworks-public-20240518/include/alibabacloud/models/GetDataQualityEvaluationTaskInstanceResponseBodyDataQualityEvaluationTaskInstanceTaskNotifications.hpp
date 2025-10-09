// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYEVALUATIONTASKINSTANCERESPONSEBODYDATAQUALITYEVALUATIONTASKINSTANCETASKNOTIFICATIONS_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYEVALUATIONTASKINSTANCERESPONSEBODYDATAQUALITYEVALUATIONTASKINSTANCETASKNOTIFICATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceTaskNotificationsNotifications.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceTaskNotifications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceTaskNotifications& obj) { 
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(Notifications, notifications_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceTaskNotifications& obj) { 
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(Notifications, notifications_);
    };
    GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceTaskNotifications() = default ;
    GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceTaskNotifications(const GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceTaskNotifications &) = default ;
    GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceTaskNotifications(GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceTaskNotifications &&) = default ;
    GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceTaskNotifications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceTaskNotifications() = default ;
    GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceTaskNotifications& operator=(const GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceTaskNotifications &) = default ;
    GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceTaskNotifications& operator=(GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceTaskNotifications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->condition_ != nullptr
        && this->notifications_ != nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceTaskNotifications& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // notifications Field Functions 
    bool hasNotifications() const { return this->notifications_ != nullptr;};
    void deleteNotifications() { this->notifications_ = nullptr;};
    inline const vector<Models::GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceTaskNotificationsNotifications> & notifications() const { DARABONBA_PTR_GET_CONST(notifications_, vector<Models::GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceTaskNotificationsNotifications>) };
    inline vector<Models::GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceTaskNotificationsNotifications> notifications() { DARABONBA_PTR_GET(notifications_, vector<Models::GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceTaskNotificationsNotifications>) };
    inline GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceTaskNotifications& setNotifications(const vector<Models::GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceTaskNotificationsNotifications> & notifications) { DARABONBA_PTR_SET_VALUE(notifications_, notifications) };
    inline GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceTaskNotifications& setNotifications(vector<Models::GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceTaskNotificationsNotifications> && notifications) { DARABONBA_PTR_SET_RVALUE(notifications_, notifications) };


  protected:
    // The notification trigger condition. When this condition is met, the alert notification is triggered. Only two conditional expressions are supported:
    // 
    // *   Specify only one group of rule strength type and rule check status, such as `${severity} == "High" AND ${status} == "Critical"`. In this expression, the hook trigger condition is met if severity is High and status is Critical.
    // *   Specify multiple groups of rule strength types and rule check status, such as `(${severity} == "High" AND ${status} == "Critical") OR (${severity} == "Normal" AND ${status} == "Critical") OR (${severity} == "Normal" AND ${status} == "Error")`. In this expression, the hook trigger condition is met if severity is High and status is Critical, severity is Normal and status is Critical, or severity is Normal and status is Error. The enumeration of severity in a conditional expression is the same as the enumeration of severity in DataQualityRule. The enumeration of status in a conditional expression is the same as the enumeration of status in DataQualityResult.
    std::shared_ptr<string> condition_ = nullptr;
    // The alert notification methods.
    std::shared_ptr<vector<Models::GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceTaskNotificationsNotifications>> notifications_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
