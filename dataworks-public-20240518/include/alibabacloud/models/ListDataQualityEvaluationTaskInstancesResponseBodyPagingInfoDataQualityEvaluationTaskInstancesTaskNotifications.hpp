// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYEVALUATIONTASKINSTANCESRESPONSEBODYPAGINGINFODATAQUALITYEVALUATIONTASKINSTANCESTASKNOTIFICATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYEVALUATIONTASKINSTANCESRESPONSEBODYPAGINGINFODATAQUALITYEVALUATIONTASKINSTANCESTASKNOTIFICATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotificationsNotifications.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotifications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotifications& obj) { 
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(Notifications, notifications_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotifications& obj) { 
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(Notifications, notifications_);
    };
    ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotifications() = default ;
    ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotifications(const ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotifications &) = default ;
    ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotifications(ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotifications &&) = default ;
    ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotifications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotifications() = default ;
    ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotifications& operator=(const ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotifications &) = default ;
    ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotifications& operator=(ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotifications &&) = default ;
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
    inline ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotifications& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // notifications Field Functions 
    bool hasNotifications() const { return this->notifications_ != nullptr;};
    void deleteNotifications() { this->notifications_ = nullptr;};
    inline const vector<Models::ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotificationsNotifications> & notifications() const { DARABONBA_PTR_GET_CONST(notifications_, vector<Models::ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotificationsNotifications>) };
    inline vector<Models::ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotificationsNotifications> notifications() { DARABONBA_PTR_GET(notifications_, vector<Models::ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotificationsNotifications>) };
    inline ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotifications& setNotifications(const vector<Models::ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotificationsNotifications> & notifications) { DARABONBA_PTR_SET_VALUE(notifications_, notifications) };
    inline ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotifications& setNotifications(vector<Models::ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotificationsNotifications> && notifications) { DARABONBA_PTR_SET_RVALUE(notifications_, notifications) };


  protected:
    // The trigger condition of the alert notification.
    std::shared_ptr<string> condition_ = nullptr;
    // The configurations for the alert notification.
    std::shared_ptr<vector<Models::ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstancesTaskNotificationsNotifications>> notifications_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
