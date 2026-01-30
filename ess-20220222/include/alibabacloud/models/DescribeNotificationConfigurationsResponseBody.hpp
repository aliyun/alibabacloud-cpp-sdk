// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENOTIFICATIONCONFIGURATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENOTIFICATIONCONFIGURATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeNotificationConfigurationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNotificationConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NotificationConfigurationModels, notificationConfigurationModels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNotificationConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NotificationConfigurationModels, notificationConfigurationModels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNotificationConfigurationsResponseBody() = default ;
    DescribeNotificationConfigurationsResponseBody(const DescribeNotificationConfigurationsResponseBody &) = default ;
    DescribeNotificationConfigurationsResponseBody(DescribeNotificationConfigurationsResponseBody &&) = default ;
    DescribeNotificationConfigurationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNotificationConfigurationsResponseBody() = default ;
    DescribeNotificationConfigurationsResponseBody& operator=(const DescribeNotificationConfigurationsResponseBody &) = default ;
    DescribeNotificationConfigurationsResponseBody& operator=(DescribeNotificationConfigurationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NotificationConfigurationModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NotificationConfigurationModels& obj) { 
        DARABONBA_PTR_TO_JSON(MessageEncoding, messageEncoding_);
        DARABONBA_PTR_TO_JSON(NotificationArn, notificationArn_);
        DARABONBA_PTR_TO_JSON(NotificationTypes, notificationTypes_);
        DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
        DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
      };
      friend void from_json(const Darabonba::Json& j, NotificationConfigurationModels& obj) { 
        DARABONBA_PTR_FROM_JSON(MessageEncoding, messageEncoding_);
        DARABONBA_PTR_FROM_JSON(NotificationArn, notificationArn_);
        DARABONBA_PTR_FROM_JSON(NotificationTypes, notificationTypes_);
        DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
        DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
      };
      NotificationConfigurationModels() = default ;
      NotificationConfigurationModels(const NotificationConfigurationModels &) = default ;
      NotificationConfigurationModels(NotificationConfigurationModels &&) = default ;
      NotificationConfigurationModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NotificationConfigurationModels() = default ;
      NotificationConfigurationModels& operator=(const NotificationConfigurationModels &) = default ;
      NotificationConfigurationModels& operator=(NotificationConfigurationModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->messageEncoding_ == nullptr
        && this->notificationArn_ == nullptr && this->notificationTypes_ == nullptr && this->scalingGroupId_ == nullptr && this->timeZone_ == nullptr; };
      // messageEncoding Field Functions 
      bool hasMessageEncoding() const { return this->messageEncoding_ != nullptr;};
      void deleteMessageEncoding() { this->messageEncoding_ = nullptr;};
      inline string getMessageEncoding() const { DARABONBA_PTR_GET_DEFAULT(messageEncoding_, "") };
      inline NotificationConfigurationModels& setMessageEncoding(string messageEncoding) { DARABONBA_PTR_SET_VALUE(messageEncoding_, messageEncoding) };


      // notificationArn Field Functions 
      bool hasNotificationArn() const { return this->notificationArn_ != nullptr;};
      void deleteNotificationArn() { this->notificationArn_ = nullptr;};
      inline string getNotificationArn() const { DARABONBA_PTR_GET_DEFAULT(notificationArn_, "") };
      inline NotificationConfigurationModels& setNotificationArn(string notificationArn) { DARABONBA_PTR_SET_VALUE(notificationArn_, notificationArn) };


      // notificationTypes Field Functions 
      bool hasNotificationTypes() const { return this->notificationTypes_ != nullptr;};
      void deleteNotificationTypes() { this->notificationTypes_ = nullptr;};
      inline const vector<string> & getNotificationTypes() const { DARABONBA_PTR_GET_CONST(notificationTypes_, vector<string>) };
      inline vector<string> getNotificationTypes() { DARABONBA_PTR_GET(notificationTypes_, vector<string>) };
      inline NotificationConfigurationModels& setNotificationTypes(const vector<string> & notificationTypes) { DARABONBA_PTR_SET_VALUE(notificationTypes_, notificationTypes) };
      inline NotificationConfigurationModels& setNotificationTypes(vector<string> && notificationTypes) { DARABONBA_PTR_SET_RVALUE(notificationTypes_, notificationTypes) };


      // scalingGroupId Field Functions 
      bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
      void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
      inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
      inline NotificationConfigurationModels& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


      // timeZone Field Functions 
      bool hasTimeZone() const { return this->timeZone_ != nullptr;};
      void deleteTimeZone() { this->timeZone_ = nullptr;};
      inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
      inline NotificationConfigurationModels& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


    protected:
      shared_ptr<string> messageEncoding_ {};
      // The Alibaba Cloud Resource Name (ARN) of the notification recipient. The value is in one of the following formats:
      // 
      // *   If you specify CloudMonitor as the notification recipient, the value is in the acs:ess:{region-id}:{account-id}:cloudmonitor format.
      // *   If you specify a Simple Message Queue (SMQ, formerly MNS) as the notification recipient, the value is in the acs:mns:{region-id}:{account-id}:queue/{queuename} format.
      // *   If you specify an SMQ topic as the notification recipient, the value is in the acs:mns:{region-id}:{account-id}:topic/{topicname} format.
      // 
      // The variables in the preceding value formats have the following meanings:
      // 
      // *   region-id: the region ID of your scaling group.
      // *   account-id: the ID of your Alibaba Cloud account.
      // *   queuename: the name of the SMQ queue.
      // *   topicname: the name of the SMQ topic.
      shared_ptr<string> notificationArn_ {};
      // The types of the notifications.
      shared_ptr<vector<string>> notificationTypes_ {};
      // The ID of the scaling group.
      shared_ptr<string> scalingGroupId_ {};
      // The time zone of the notification. The value must be in UTC. For example, a value of UTC+8 indicates that the time is 8 hours ahead of Coordinated Universal Time, and a value of UTC-7 indicates that the time is 7 hours behind Coordinated Universal Time.
      shared_ptr<string> timeZone_ {};
    };

    virtual bool empty() const override { return this->notificationConfigurationModels_ == nullptr
        && this->requestId_ == nullptr; };
    // notificationConfigurationModels Field Functions 
    bool hasNotificationConfigurationModels() const { return this->notificationConfigurationModels_ != nullptr;};
    void deleteNotificationConfigurationModels() { this->notificationConfigurationModels_ = nullptr;};
    inline const vector<DescribeNotificationConfigurationsResponseBody::NotificationConfigurationModels> & getNotificationConfigurationModels() const { DARABONBA_PTR_GET_CONST(notificationConfigurationModels_, vector<DescribeNotificationConfigurationsResponseBody::NotificationConfigurationModels>) };
    inline vector<DescribeNotificationConfigurationsResponseBody::NotificationConfigurationModels> getNotificationConfigurationModels() { DARABONBA_PTR_GET(notificationConfigurationModels_, vector<DescribeNotificationConfigurationsResponseBody::NotificationConfigurationModels>) };
    inline DescribeNotificationConfigurationsResponseBody& setNotificationConfigurationModels(const vector<DescribeNotificationConfigurationsResponseBody::NotificationConfigurationModels> & notificationConfigurationModels) { DARABONBA_PTR_SET_VALUE(notificationConfigurationModels_, notificationConfigurationModels) };
    inline DescribeNotificationConfigurationsResponseBody& setNotificationConfigurationModels(vector<DescribeNotificationConfigurationsResponseBody::NotificationConfigurationModels> && notificationConfigurationModels) { DARABONBA_PTR_SET_RVALUE(notificationConfigurationModels_, notificationConfigurationModels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNotificationConfigurationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The notification settings.
    shared_ptr<vector<DescribeNotificationConfigurationsResponseBody::NotificationConfigurationModels>> notificationConfigurationModels_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
