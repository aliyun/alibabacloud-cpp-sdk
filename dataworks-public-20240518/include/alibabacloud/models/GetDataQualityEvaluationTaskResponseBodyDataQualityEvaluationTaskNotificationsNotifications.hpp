// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYEVALUATIONTASKRESPONSEBODYDATAQUALITYEVALUATIONTASKNOTIFICATIONSNOTIFICATIONS_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYEVALUATIONTASKRESPONSEBODYDATAQUALITYEVALUATIONTASKNOTIFICATIONSNOTIFICATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotificationsNotificationChannels.hpp>
#include <alibabacloud/models/GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotificationsNotificationReceivers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotifications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotifications& obj) { 
      DARABONBA_PTR_TO_JSON(NotificationChannels, notificationChannels_);
      DARABONBA_PTR_TO_JSON(NotificationReceivers, notificationReceivers_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotifications& obj) { 
      DARABONBA_PTR_FROM_JSON(NotificationChannels, notificationChannels_);
      DARABONBA_PTR_FROM_JSON(NotificationReceivers, notificationReceivers_);
    };
    GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotifications() = default ;
    GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotifications(const GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotifications &) = default ;
    GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotifications(GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotifications &&) = default ;
    GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotifications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotifications() = default ;
    GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotifications& operator=(const GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotifications &) = default ;
    GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotifications& operator=(GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotifications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->notificationChannels_ != nullptr
        && this->notificationReceivers_ != nullptr; };
    // notificationChannels Field Functions 
    bool hasNotificationChannels() const { return this->notificationChannels_ != nullptr;};
    void deleteNotificationChannels() { this->notificationChannels_ = nullptr;};
    inline const vector<Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotificationsNotificationChannels> & notificationChannels() const { DARABONBA_PTR_GET_CONST(notificationChannels_, vector<Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotificationsNotificationChannels>) };
    inline vector<Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotificationsNotificationChannels> notificationChannels() { DARABONBA_PTR_GET(notificationChannels_, vector<Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotificationsNotificationChannels>) };
    inline GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotifications& setNotificationChannels(const vector<Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotificationsNotificationChannels> & notificationChannels) { DARABONBA_PTR_SET_VALUE(notificationChannels_, notificationChannels) };
    inline GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotifications& setNotificationChannels(vector<Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotificationsNotificationChannels> && notificationChannels) { DARABONBA_PTR_SET_RVALUE(notificationChannels_, notificationChannels) };


    // notificationReceivers Field Functions 
    bool hasNotificationReceivers() const { return this->notificationReceivers_ != nullptr;};
    void deleteNotificationReceivers() { this->notificationReceivers_ = nullptr;};
    inline const vector<Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotificationsNotificationReceivers> & notificationReceivers() const { DARABONBA_PTR_GET_CONST(notificationReceivers_, vector<Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotificationsNotificationReceivers>) };
    inline vector<Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotificationsNotificationReceivers> notificationReceivers() { DARABONBA_PTR_GET(notificationReceivers_, vector<Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotificationsNotificationReceivers>) };
    inline GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotifications& setNotificationReceivers(const vector<Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotificationsNotificationReceivers> & notificationReceivers) { DARABONBA_PTR_SET_VALUE(notificationReceivers_, notificationReceivers) };
    inline GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotifications& setNotificationReceivers(vector<Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotificationsNotificationReceivers> && notificationReceivers) { DARABONBA_PTR_SET_RVALUE(notificationReceivers_, notificationReceivers) };


  protected:
    // The alert notification methods.
    std::shared_ptr<vector<Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotificationsNotificationChannels>> notificationChannels_ = nullptr;
    // The configurations of alert recipients.
    std::shared_ptr<vector<Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotificationsNotificationsNotificationReceivers>> notificationReceivers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
