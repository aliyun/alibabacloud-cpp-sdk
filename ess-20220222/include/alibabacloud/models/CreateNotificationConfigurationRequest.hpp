// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENOTIFICATIONCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENOTIFICATIONCONFIGURATIONREQUEST_HPP_
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
  class CreateNotificationConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNotificationConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MessageEncoding, messageEncoding_);
      DARABONBA_PTR_TO_JSON(NotificationArn, notificationArn_);
      DARABONBA_PTR_TO_JSON(NotificationTypes, notificationTypes_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNotificationConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MessageEncoding, messageEncoding_);
      DARABONBA_PTR_FROM_JSON(NotificationArn, notificationArn_);
      DARABONBA_PTR_FROM_JSON(NotificationTypes, notificationTypes_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
    };
    CreateNotificationConfigurationRequest() = default ;
    CreateNotificationConfigurationRequest(const CreateNotificationConfigurationRequest &) = default ;
    CreateNotificationConfigurationRequest(CreateNotificationConfigurationRequest &&) = default ;
    CreateNotificationConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNotificationConfigurationRequest() = default ;
    CreateNotificationConfigurationRequest& operator=(const CreateNotificationConfigurationRequest &) = default ;
    CreateNotificationConfigurationRequest& operator=(CreateNotificationConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->messageEncoding_ == nullptr
        && return this->notificationArn_ == nullptr && return this->notificationTypes_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->scalingGroupId_ == nullptr && return this->timeZone_ == nullptr; };
    // messageEncoding Field Functions 
    bool hasMessageEncoding() const { return this->messageEncoding_ != nullptr;};
    void deleteMessageEncoding() { this->messageEncoding_ = nullptr;};
    inline string messageEncoding() const { DARABONBA_PTR_GET_DEFAULT(messageEncoding_, "") };
    inline CreateNotificationConfigurationRequest& setMessageEncoding(string messageEncoding) { DARABONBA_PTR_SET_VALUE(messageEncoding_, messageEncoding) };


    // notificationArn Field Functions 
    bool hasNotificationArn() const { return this->notificationArn_ != nullptr;};
    void deleteNotificationArn() { this->notificationArn_ = nullptr;};
    inline string notificationArn() const { DARABONBA_PTR_GET_DEFAULT(notificationArn_, "") };
    inline CreateNotificationConfigurationRequest& setNotificationArn(string notificationArn) { DARABONBA_PTR_SET_VALUE(notificationArn_, notificationArn) };


    // notificationTypes Field Functions 
    bool hasNotificationTypes() const { return this->notificationTypes_ != nullptr;};
    void deleteNotificationTypes() { this->notificationTypes_ = nullptr;};
    inline const vector<string> & notificationTypes() const { DARABONBA_PTR_GET_CONST(notificationTypes_, vector<string>) };
    inline vector<string> notificationTypes() { DARABONBA_PTR_GET(notificationTypes_, vector<string>) };
    inline CreateNotificationConfigurationRequest& setNotificationTypes(const vector<string> & notificationTypes) { DARABONBA_PTR_SET_VALUE(notificationTypes_, notificationTypes) };
    inline CreateNotificationConfigurationRequest& setNotificationTypes(vector<string> && notificationTypes) { DARABONBA_PTR_SET_RVALUE(notificationTypes_, notificationTypes) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateNotificationConfigurationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateNotificationConfigurationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateNotificationConfigurationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline CreateNotificationConfigurationRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string timeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline CreateNotificationConfigurationRequest& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    std::shared_ptr<string> messageEncoding_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of the notification recipient. The following list describes the value formats of this parameter:
    // 
    // *   If you specify CloudMonitor as the notification recipient, specify the value in the `acs:ess:{region-id}:{account-id}:cloudmonitor` format.
    // *   If you specify an SMQ queue as the notification recipient, specify the value in the `acs:mns:{region-id}:{account-id}:queue/{queuename}` format.
    // *   If you specify an SMQ topic as the notification recipient, specify the value in the `acs:mns:{region-id}:{account-id}:topic/{topicname}` format.
    // 
    // The variables in the preceding formats have the following meanings:
    // 
    // *   `region-id`: the region ID of the scaling group.
    // *   `account-id`: the ID of the Alibaba Cloud account.
    // *   `queuename`: the name of the SMQ queue.
    // *   `topicname`: the name of the SMQ topic.
    // 
    // This parameter is required.
    std::shared_ptr<string> notificationArn_ = nullptr;
    // The notification types. Specify multiple IDs in the repeated list form.
    // 
    // You can call the DescribeNotificationTypes operation to query the values of this parameter.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> notificationTypes_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the scaling group.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The ID of the scaling group.
    // 
    // This parameter is required.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
    // The time zone of the notification. Specify the value in UTC. For example, a value of UTC+8 specifies that the time is 8 hours ahead of Coordinated Universal Time, and a value of UTC-7 specifies that the time is 7 hours behind Coordinated Universal Time.
    std::shared_ptr<string> timeZone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
