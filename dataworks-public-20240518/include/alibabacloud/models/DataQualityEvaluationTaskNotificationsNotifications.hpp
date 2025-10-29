// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAQUALITYEVALUATIONTASKNOTIFICATIONSNOTIFICATIONS_HPP_
#define ALIBABACLOUD_MODELS_DATAQUALITYEVALUATIONTASKNOTIFICATIONSNOTIFICATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DataQualityEvaluationTaskNotificationsNotificationsNotificationChannels.hpp>
#include <alibabacloud/models/DataQualityEvaluationTaskNotificationsNotificationsNotificationReceivers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DataQualityEvaluationTaskNotificationsNotifications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataQualityEvaluationTaskNotificationsNotifications& obj) { 
      DARABONBA_PTR_TO_JSON(NotificationChannels, notificationChannels_);
      DARABONBA_PTR_TO_JSON(NotificationReceivers, notificationReceivers_);
    };
    friend void from_json(const Darabonba::Json& j, DataQualityEvaluationTaskNotificationsNotifications& obj) { 
      DARABONBA_PTR_FROM_JSON(NotificationChannels, notificationChannels_);
      DARABONBA_PTR_FROM_JSON(NotificationReceivers, notificationReceivers_);
    };
    DataQualityEvaluationTaskNotificationsNotifications() = default ;
    DataQualityEvaluationTaskNotificationsNotifications(const DataQualityEvaluationTaskNotificationsNotifications &) = default ;
    DataQualityEvaluationTaskNotificationsNotifications(DataQualityEvaluationTaskNotificationsNotifications &&) = default ;
    DataQualityEvaluationTaskNotificationsNotifications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataQualityEvaluationTaskNotificationsNotifications() = default ;
    DataQualityEvaluationTaskNotificationsNotifications& operator=(const DataQualityEvaluationTaskNotificationsNotifications &) = default ;
    DataQualityEvaluationTaskNotificationsNotifications& operator=(DataQualityEvaluationTaskNotificationsNotifications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->notificationChannels_ == nullptr
        && return this->notificationReceivers_ == nullptr; };
    // notificationChannels Field Functions 
    bool hasNotificationChannels() const { return this->notificationChannels_ != nullptr;};
    void deleteNotificationChannels() { this->notificationChannels_ = nullptr;};
    inline const vector<Models::DataQualityEvaluationTaskNotificationsNotificationsNotificationChannels> & notificationChannels() const { DARABONBA_PTR_GET_CONST(notificationChannels_, vector<Models::DataQualityEvaluationTaskNotificationsNotificationsNotificationChannels>) };
    inline vector<Models::DataQualityEvaluationTaskNotificationsNotificationsNotificationChannels> notificationChannels() { DARABONBA_PTR_GET(notificationChannels_, vector<Models::DataQualityEvaluationTaskNotificationsNotificationsNotificationChannels>) };
    inline DataQualityEvaluationTaskNotificationsNotifications& setNotificationChannels(const vector<Models::DataQualityEvaluationTaskNotificationsNotificationsNotificationChannels> & notificationChannels) { DARABONBA_PTR_SET_VALUE(notificationChannels_, notificationChannels) };
    inline DataQualityEvaluationTaskNotificationsNotifications& setNotificationChannels(vector<Models::DataQualityEvaluationTaskNotificationsNotificationsNotificationChannels> && notificationChannels) { DARABONBA_PTR_SET_RVALUE(notificationChannels_, notificationChannels) };


    // notificationReceivers Field Functions 
    bool hasNotificationReceivers() const { return this->notificationReceivers_ != nullptr;};
    void deleteNotificationReceivers() { this->notificationReceivers_ = nullptr;};
    inline const vector<Models::DataQualityEvaluationTaskNotificationsNotificationsNotificationReceivers> & notificationReceivers() const { DARABONBA_PTR_GET_CONST(notificationReceivers_, vector<Models::DataQualityEvaluationTaskNotificationsNotificationsNotificationReceivers>) };
    inline vector<Models::DataQualityEvaluationTaskNotificationsNotificationsNotificationReceivers> notificationReceivers() { DARABONBA_PTR_GET(notificationReceivers_, vector<Models::DataQualityEvaluationTaskNotificationsNotificationsNotificationReceivers>) };
    inline DataQualityEvaluationTaskNotificationsNotifications& setNotificationReceivers(const vector<Models::DataQualityEvaluationTaskNotificationsNotificationsNotificationReceivers> & notificationReceivers) { DARABONBA_PTR_SET_VALUE(notificationReceivers_, notificationReceivers) };
    inline DataQualityEvaluationTaskNotificationsNotifications& setNotificationReceivers(vector<Models::DataQualityEvaluationTaskNotificationsNotificationsNotificationReceivers> && notificationReceivers) { DARABONBA_PTR_SET_RVALUE(notificationReceivers_, notificationReceivers) };


  protected:
    std::shared_ptr<vector<Models::DataQualityEvaluationTaskNotificationsNotificationsNotificationChannels>> notificationChannels_ = nullptr;
    std::shared_ptr<vector<Models::DataQualityEvaluationTaskNotificationsNotificationsNotificationReceivers>> notificationReceivers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
