// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAQUALITYEVALUATIONTASKREQUESTNOTIFICATIONSNOTIFICATIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAQUALITYEVALUATIONTASKREQUESTNOTIFICATIONSNOTIFICATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels.hpp>
#include <alibabacloud/models/CreateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDataQualityEvaluationTaskRequestNotificationsNotifications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataQualityEvaluationTaskRequestNotificationsNotifications& obj) { 
      DARABONBA_PTR_TO_JSON(NotificationChannels, notificationChannels_);
      DARABONBA_PTR_TO_JSON(NotificationReceivers, notificationReceivers_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataQualityEvaluationTaskRequestNotificationsNotifications& obj) { 
      DARABONBA_PTR_FROM_JSON(NotificationChannels, notificationChannels_);
      DARABONBA_PTR_FROM_JSON(NotificationReceivers, notificationReceivers_);
    };
    CreateDataQualityEvaluationTaskRequestNotificationsNotifications() = default ;
    CreateDataQualityEvaluationTaskRequestNotificationsNotifications(const CreateDataQualityEvaluationTaskRequestNotificationsNotifications &) = default ;
    CreateDataQualityEvaluationTaskRequestNotificationsNotifications(CreateDataQualityEvaluationTaskRequestNotificationsNotifications &&) = default ;
    CreateDataQualityEvaluationTaskRequestNotificationsNotifications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataQualityEvaluationTaskRequestNotificationsNotifications() = default ;
    CreateDataQualityEvaluationTaskRequestNotificationsNotifications& operator=(const CreateDataQualityEvaluationTaskRequestNotificationsNotifications &) = default ;
    CreateDataQualityEvaluationTaskRequestNotificationsNotifications& operator=(CreateDataQualityEvaluationTaskRequestNotificationsNotifications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->notificationChannels_ != nullptr
        && this->notificationReceivers_ != nullptr; };
    // notificationChannels Field Functions 
    bool hasNotificationChannels() const { return this->notificationChannels_ != nullptr;};
    void deleteNotificationChannels() { this->notificationChannels_ = nullptr;};
    inline const vector<Models::CreateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels> & notificationChannels() const { DARABONBA_PTR_GET_CONST(notificationChannels_, vector<Models::CreateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels>) };
    inline vector<Models::CreateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels> notificationChannels() { DARABONBA_PTR_GET(notificationChannels_, vector<Models::CreateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels>) };
    inline CreateDataQualityEvaluationTaskRequestNotificationsNotifications& setNotificationChannels(const vector<Models::CreateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels> & notificationChannels) { DARABONBA_PTR_SET_VALUE(notificationChannels_, notificationChannels) };
    inline CreateDataQualityEvaluationTaskRequestNotificationsNotifications& setNotificationChannels(vector<Models::CreateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels> && notificationChannels) { DARABONBA_PTR_SET_RVALUE(notificationChannels_, notificationChannels) };


    // notificationReceivers Field Functions 
    bool hasNotificationReceivers() const { return this->notificationReceivers_ != nullptr;};
    void deleteNotificationReceivers() { this->notificationReceivers_ = nullptr;};
    inline const vector<Models::CreateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers> & notificationReceivers() const { DARABONBA_PTR_GET_CONST(notificationReceivers_, vector<Models::CreateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers>) };
    inline vector<Models::CreateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers> notificationReceivers() { DARABONBA_PTR_GET(notificationReceivers_, vector<Models::CreateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers>) };
    inline CreateDataQualityEvaluationTaskRequestNotificationsNotifications& setNotificationReceivers(const vector<Models::CreateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers> & notificationReceivers) { DARABONBA_PTR_SET_VALUE(notificationReceivers_, notificationReceivers) };
    inline CreateDataQualityEvaluationTaskRequestNotificationsNotifications& setNotificationReceivers(vector<Models::CreateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers> && notificationReceivers) { DARABONBA_PTR_SET_RVALUE(notificationReceivers_, notificationReceivers) };


  protected:
    // The alert notification methods.
    std::shared_ptr<vector<Models::CreateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels>> notificationChannels_ = nullptr;
    // The configurations of alert recipients.
    std::shared_ptr<vector<Models::CreateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationReceivers>> notificationReceivers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
