// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYEVALUATIONTASKSRESPONSEBODYPAGINGINFODATAQUALITYEVALUATIONTASKSNOTIFICATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYEVALUATIONTASKSRESPONSEBODYPAGINGINFODATAQUALITYEVALUATIONTASKSNOTIFICATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotificationsNotifications.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotifications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotifications& obj) { 
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(Notifications, notifications_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotifications& obj) { 
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(Notifications, notifications_);
    };
    ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotifications() = default ;
    ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotifications(const ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotifications &) = default ;
    ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotifications(ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotifications &&) = default ;
    ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotifications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotifications() = default ;
    ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotifications& operator=(const ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotifications &) = default ;
    ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotifications& operator=(ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotifications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->condition_ == nullptr
        && return this->notifications_ == nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotifications& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // notifications Field Functions 
    bool hasNotifications() const { return this->notifications_ != nullptr;};
    void deleteNotifications() { this->notifications_ = nullptr;};
    inline const vector<Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotificationsNotifications> & notifications() const { DARABONBA_PTR_GET_CONST(notifications_, vector<Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotificationsNotifications>) };
    inline vector<Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotificationsNotifications> notifications() { DARABONBA_PTR_GET(notifications_, vector<Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotificationsNotifications>) };
    inline ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotifications& setNotifications(const vector<Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotificationsNotifications> & notifications) { DARABONBA_PTR_SET_VALUE(notifications_, notifications) };
    inline ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotifications& setNotifications(vector<Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotificationsNotifications> && notifications) { DARABONBA_PTR_SET_RVALUE(notifications_, notifications) };


  protected:
    // The trigger condition of the alert notification.
    std::shared_ptr<string> condition_ = nullptr;
    // The configurations for the alert notification.
    std::shared_ptr<vector<Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotificationsNotifications>> notifications_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
