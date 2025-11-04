// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENOTIFICATIONCONFIGURATIONSRESPONSEBODYNOTIFICATIONCONFIGURATIONMODELS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENOTIFICATIONCONFIGURATIONSRESPONSEBODYNOTIFICATIONCONFIGURATIONMODELS_HPP_
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
  class DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels& obj) { 
      DARABONBA_PTR_TO_JSON(MessageEncoding, messageEncoding_);
      DARABONBA_PTR_TO_JSON(NotificationArn, notificationArn_);
      DARABONBA_PTR_TO_JSON(NotificationTypes, notificationTypes_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels& obj) { 
      DARABONBA_PTR_FROM_JSON(MessageEncoding, messageEncoding_);
      DARABONBA_PTR_FROM_JSON(NotificationArn, notificationArn_);
      DARABONBA_PTR_FROM_JSON(NotificationTypes, notificationTypes_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
    };
    DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels() = default ;
    DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels(const DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels &) = default ;
    DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels(DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels &&) = default ;
    DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels() = default ;
    DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels& operator=(const DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels &) = default ;
    DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels& operator=(DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->messageEncoding_ == nullptr
        && return this->notificationArn_ == nullptr && return this->notificationTypes_ == nullptr && return this->scalingGroupId_ == nullptr && return this->timeZone_ == nullptr; };
    // messageEncoding Field Functions 
    bool hasMessageEncoding() const { return this->messageEncoding_ != nullptr;};
    void deleteMessageEncoding() { this->messageEncoding_ = nullptr;};
    inline string messageEncoding() const { DARABONBA_PTR_GET_DEFAULT(messageEncoding_, "") };
    inline DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels& setMessageEncoding(string messageEncoding) { DARABONBA_PTR_SET_VALUE(messageEncoding_, messageEncoding) };


    // notificationArn Field Functions 
    bool hasNotificationArn() const { return this->notificationArn_ != nullptr;};
    void deleteNotificationArn() { this->notificationArn_ = nullptr;};
    inline string notificationArn() const { DARABONBA_PTR_GET_DEFAULT(notificationArn_, "") };
    inline DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels& setNotificationArn(string notificationArn) { DARABONBA_PTR_SET_VALUE(notificationArn_, notificationArn) };


    // notificationTypes Field Functions 
    bool hasNotificationTypes() const { return this->notificationTypes_ != nullptr;};
    void deleteNotificationTypes() { this->notificationTypes_ = nullptr;};
    inline const vector<string> & notificationTypes() const { DARABONBA_PTR_GET_CONST(notificationTypes_, vector<string>) };
    inline vector<string> notificationTypes() { DARABONBA_PTR_GET(notificationTypes_, vector<string>) };
    inline DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels& setNotificationTypes(const vector<string> & notificationTypes) { DARABONBA_PTR_SET_VALUE(notificationTypes_, notificationTypes) };
    inline DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels& setNotificationTypes(vector<string> && notificationTypes) { DARABONBA_PTR_SET_RVALUE(notificationTypes_, notificationTypes) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string timeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    std::shared_ptr<string> messageEncoding_ = nullptr;
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
    std::shared_ptr<string> notificationArn_ = nullptr;
    // The types of the notifications.
    std::shared_ptr<vector<string>> notificationTypes_ = nullptr;
    // The ID of the scaling group.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
    // The time zone of the notification. The value must be in UTC. For example, a value of UTC+8 indicates that the time is 8 hours ahead of Coordinated Universal Time, and a value of UTC-7 indicates that the time is 7 hours behind Coordinated Universal Time.
    std::shared_ptr<string> timeZone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
