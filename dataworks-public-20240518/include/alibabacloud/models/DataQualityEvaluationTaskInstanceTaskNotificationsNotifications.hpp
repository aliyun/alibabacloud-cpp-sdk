// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAQUALITYEVALUATIONTASKINSTANCETASKNOTIFICATIONSNOTIFICATIONS_HPP_
#define ALIBABACLOUD_MODELS_DATAQUALITYEVALUATIONTASKINSTANCETASKNOTIFICATIONSNOTIFICATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationChannels.hpp>
#include <alibabacloud/models/DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationReceivers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DataQualityEvaluationTaskInstanceTaskNotificationsNotifications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataQualityEvaluationTaskInstanceTaskNotificationsNotifications& obj) { 
      DARABONBA_PTR_TO_JSON(NotificationChannels, notificationChannels_);
      DARABONBA_PTR_TO_JSON(NotificationReceivers, notificationReceivers_);
    };
    friend void from_json(const Darabonba::Json& j, DataQualityEvaluationTaskInstanceTaskNotificationsNotifications& obj) { 
      DARABONBA_PTR_FROM_JSON(NotificationChannels, notificationChannels_);
      DARABONBA_PTR_FROM_JSON(NotificationReceivers, notificationReceivers_);
    };
    DataQualityEvaluationTaskInstanceTaskNotificationsNotifications() = default ;
    DataQualityEvaluationTaskInstanceTaskNotificationsNotifications(const DataQualityEvaluationTaskInstanceTaskNotificationsNotifications &) = default ;
    DataQualityEvaluationTaskInstanceTaskNotificationsNotifications(DataQualityEvaluationTaskInstanceTaskNotificationsNotifications &&) = default ;
    DataQualityEvaluationTaskInstanceTaskNotificationsNotifications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataQualityEvaluationTaskInstanceTaskNotificationsNotifications() = default ;
    DataQualityEvaluationTaskInstanceTaskNotificationsNotifications& operator=(const DataQualityEvaluationTaskInstanceTaskNotificationsNotifications &) = default ;
    DataQualityEvaluationTaskInstanceTaskNotificationsNotifications& operator=(DataQualityEvaluationTaskInstanceTaskNotificationsNotifications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->notificationChannels_ != nullptr
        && this->notificationReceivers_ != nullptr; };
    // notificationChannels Field Functions 
    bool hasNotificationChannels() const { return this->notificationChannels_ != nullptr;};
    void deleteNotificationChannels() { this->notificationChannels_ = nullptr;};
    inline const vector<Models::DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationChannels> & notificationChannels() const { DARABONBA_PTR_GET_CONST(notificationChannels_, vector<Models::DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationChannels>) };
    inline vector<Models::DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationChannels> notificationChannels() { DARABONBA_PTR_GET(notificationChannels_, vector<Models::DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationChannels>) };
    inline DataQualityEvaluationTaskInstanceTaskNotificationsNotifications& setNotificationChannels(const vector<Models::DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationChannels> & notificationChannels) { DARABONBA_PTR_SET_VALUE(notificationChannels_, notificationChannels) };
    inline DataQualityEvaluationTaskInstanceTaskNotificationsNotifications& setNotificationChannels(vector<Models::DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationChannels> && notificationChannels) { DARABONBA_PTR_SET_RVALUE(notificationChannels_, notificationChannels) };


    // notificationReceivers Field Functions 
    bool hasNotificationReceivers() const { return this->notificationReceivers_ != nullptr;};
    void deleteNotificationReceivers() { this->notificationReceivers_ = nullptr;};
    inline const vector<Models::DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationReceivers> & notificationReceivers() const { DARABONBA_PTR_GET_CONST(notificationReceivers_, vector<Models::DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationReceivers>) };
    inline vector<Models::DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationReceivers> notificationReceivers() { DARABONBA_PTR_GET(notificationReceivers_, vector<Models::DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationReceivers>) };
    inline DataQualityEvaluationTaskInstanceTaskNotificationsNotifications& setNotificationReceivers(const vector<Models::DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationReceivers> & notificationReceivers) { DARABONBA_PTR_SET_VALUE(notificationReceivers_, notificationReceivers) };
    inline DataQualityEvaluationTaskInstanceTaskNotificationsNotifications& setNotificationReceivers(vector<Models::DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationReceivers> && notificationReceivers) { DARABONBA_PTR_SET_RVALUE(notificationReceivers_, notificationReceivers) };


  protected:
    std::shared_ptr<vector<Models::DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationChannels>> notificationChannels_ = nullptr;
    std::shared_ptr<vector<Models::DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationReceivers>> notificationReceivers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
