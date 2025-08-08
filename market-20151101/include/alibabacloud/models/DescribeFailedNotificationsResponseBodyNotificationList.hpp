// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAILEDNOTIFICATIONSRESPONSEBODYNOTIFICATIONLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAILEDNOTIFICATIONSRESPONSEBODYNOTIFICATIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeFailedNotificationsResponseBodyNotificationList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFailedNotificationsResponseBodyNotificationList& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NotificationRequestId, notificationRequestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFailedNotificationsResponseBodyNotificationList& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NotificationRequestId, notificationRequestId_);
    };
    DescribeFailedNotificationsResponseBodyNotificationList() = default ;
    DescribeFailedNotificationsResponseBodyNotificationList(const DescribeFailedNotificationsResponseBodyNotificationList &) = default ;
    DescribeFailedNotificationsResponseBodyNotificationList(DescribeFailedNotificationsResponseBodyNotificationList &&) = default ;
    DescribeFailedNotificationsResponseBodyNotificationList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFailedNotificationsResponseBodyNotificationList() = default ;
    DescribeFailedNotificationsResponseBodyNotificationList& operator=(const DescribeFailedNotificationsResponseBodyNotificationList &) = default ;
    DescribeFailedNotificationsResponseBodyNotificationList& operator=(DescribeFailedNotificationsResponseBodyNotificationList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->createTime_ != nullptr && this->message_ != nullptr && this->notificationRequestId_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline DescribeFailedNotificationsResponseBodyNotificationList& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeFailedNotificationsResponseBodyNotificationList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeFailedNotificationsResponseBodyNotificationList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // notificationRequestId Field Functions 
    bool hasNotificationRequestId() const { return this->notificationRequestId_ != nullptr;};
    void deleteNotificationRequestId() { this->notificationRequestId_ = nullptr;};
    inline string notificationRequestId() const { DARABONBA_PTR_GET_DEFAULT(notificationRequestId_, "") };
    inline DescribeFailedNotificationsResponseBodyNotificationList& setNotificationRequestId(string notificationRequestId) { DARABONBA_PTR_SET_VALUE(notificationRequestId_, notificationRequestId) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> notificationRequestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
