// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAQUALITYEVALUATIONTASKREQUESTNOTIFICATIONSNOTIFICATIONS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAQUALITYEVALUATIONTASKREQUESTNOTIFICATIONSNOTIFICATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels.hpp>
#include <alibabacloud/models/UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDataQualityEvaluationTaskRequestNotificationsNotifications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataQualityEvaluationTaskRequestNotificationsNotifications& obj) { 
      DARABONBA_PTR_TO_JSON(NotificationChannels, notificationChannels_);
      DARABONBA_PTR_TO_JSON(NotificationReceivers, notificationReceivers_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataQualityEvaluationTaskRequestNotificationsNotifications& obj) { 
      DARABONBA_PTR_FROM_JSON(NotificationChannels, notificationChannels_);
      DARABONBA_PTR_FROM_JSON(NotificationReceivers, notificationReceivers_);
    };
    UpdateDataQualityEvaluationTaskRequestNotificationsNotifications() = default ;
    UpdateDataQualityEvaluationTaskRequestNotificationsNotifications(const UpdateDataQualityEvaluationTaskRequestNotificationsNotifications &) = default ;
    UpdateDataQualityEvaluationTaskRequestNotificationsNotifications(UpdateDataQualityEvaluationTaskRequestNotificationsNotifications &&) = default ;
    UpdateDataQualityEvaluationTaskRequestNotificationsNotifications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataQualityEvaluationTaskRequestNotificationsNotifications() = default ;
    UpdateDataQualityEvaluationTaskRequestNotificationsNotifications& operator=(const UpdateDataQualityEvaluationTaskRequestNotificationsNotifications &) = default ;
    UpdateDataQualityEvaluationTaskRequestNotificationsNotifications& operator=(UpdateDataQualityEvaluationTaskRequestNotificationsNotifications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->notificationChannels_ == nullptr
        && return this->notificationReceivers_ == nullptr; };
    // notificationChannels Field Functions 
    bool hasNotificationChannels() const { return this->notificationChannels_ != nullptr;};
    void deleteNotificationChannels() { this->notificationChannels_ = nullptr;};
    inline const vector<Models::UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels> & notificationChannels() const { DARABONBA_PTR_GET_CONST(notificationChannels_, vector<Models::UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels>) };
    inline vector<Models::UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels> notificationChannels() { DARABONBA_PTR_GET(notificationChannels_, vector<Models::UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels>) };
    inline UpdateDataQualityEvaluationTaskRequestNotificationsNotifications& setNotificationChannels(const vector<Models::UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels> & notificationChannels) { DARABONBA_PTR_SET_VALUE(notificationChannels_, notificationChannels) };
    inline UpdateDataQualityEvaluationTaskRequestNotificationsNotifications& setNotificationChannels(vector<Models::UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels> && notificationChannels) { DARABONBA_PTR_SET_RVALUE(notificationChannels_, notificationChannels) };


    // notificationReceivers Field Functions 
    bool hasNotificationReceivers() const { return this->notificationReceivers_ != nullptr;};
    void deleteNotificationReceivers() { this->notificationReceivers_ = nullptr;};
    inline const vector<Models::UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers> & notificationReceivers() const { DARABONBA_PTR_GET_CONST(notificationReceivers_, vector<Models::UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers>) };
    inline vector<Models::UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers> notificationReceivers() { DARABONBA_PTR_GET(notificationReceivers_, vector<Models::UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers>) };
    inline UpdateDataQualityEvaluationTaskRequestNotificationsNotifications& setNotificationReceivers(const vector<Models::UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers> & notificationReceivers) { DARABONBA_PTR_SET_VALUE(notificationReceivers_, notificationReceivers) };
    inline UpdateDataQualityEvaluationTaskRequestNotificationsNotifications& setNotificationReceivers(vector<Models::UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers> && notificationReceivers) { DARABONBA_PTR_SET_RVALUE(notificationReceivers_, notificationReceivers) };


  protected:
    // The alert notification methods.
    std::shared_ptr<vector<Models::UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels>> notificationChannels_ = nullptr;
    // The configurations of alert recipients.
    std::shared_ptr<vector<Models::UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers>> notificationReceivers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
