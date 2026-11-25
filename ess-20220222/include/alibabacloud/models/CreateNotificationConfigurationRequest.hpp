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
        && this->notificationArn_ == nullptr && this->notificationTypes_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->scalingGroupId_ == nullptr && this->timeZone_ == nullptr; };
    // messageEncoding Field Functions 
    bool hasMessageEncoding() const { return this->messageEncoding_ != nullptr;};
    void deleteMessageEncoding() { this->messageEncoding_ = nullptr;};
    inline string getMessageEncoding() const { DARABONBA_PTR_GET_DEFAULT(messageEncoding_, "") };
    inline CreateNotificationConfigurationRequest& setMessageEncoding(string messageEncoding) { DARABONBA_PTR_SET_VALUE(messageEncoding_, messageEncoding) };


    // notificationArn Field Functions 
    bool hasNotificationArn() const { return this->notificationArn_ != nullptr;};
    void deleteNotificationArn() { this->notificationArn_ = nullptr;};
    inline string getNotificationArn() const { DARABONBA_PTR_GET_DEFAULT(notificationArn_, "") };
    inline CreateNotificationConfigurationRequest& setNotificationArn(string notificationArn) { DARABONBA_PTR_SET_VALUE(notificationArn_, notificationArn) };


    // notificationTypes Field Functions 
    bool hasNotificationTypes() const { return this->notificationTypes_ != nullptr;};
    void deleteNotificationTypes() { this->notificationTypes_ = nullptr;};
    inline const vector<string> & getNotificationTypes() const { DARABONBA_PTR_GET_CONST(notificationTypes_, vector<string>) };
    inline vector<string> getNotificationTypes() { DARABONBA_PTR_GET(notificationTypes_, vector<string>) };
    inline CreateNotificationConfigurationRequest& setNotificationTypes(const vector<string> & notificationTypes) { DARABONBA_PTR_SET_VALUE(notificationTypes_, notificationTypes) };
    inline CreateNotificationConfigurationRequest& setNotificationTypes(vector<string> && notificationTypes) { DARABONBA_PTR_SET_RVALUE(notificationTypes_, notificationTypes) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateNotificationConfigurationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateNotificationConfigurationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateNotificationConfigurationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline CreateNotificationConfigurationRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline CreateNotificationConfigurationRequest& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    // The encoding method for the notification content. Valid values:
    // 
    // - PlainText: no encoding. The content is transmitted in plaintext.
    // - Base64: Base64 encoding.
    // 
    // Default value: Base64.
    // > The Settings for this parameter are supported only for MNS notification recipients.
    shared_ptr<string> messageEncoding_ {};
    // The identifier of the notification recipient. The following notification methods are supported when you configure the Settings for this parameter:
    // 
    // - Cloud monitoring. Format: `acs:ess:{region-id}:{account-id}:cloudmonitor`.
    // - MNS queue. Format: `acs:mns:{region-id}:{account-id}:queue/{queuename}`.
    // - MNS topic. Format: `acs:mns:{region-id}:{account-id}:topic/{topicname}`.
    // 
    // Variables in the formats:
    // - `region-id`: the ID of the region where the scaling group resides.
    // - `account-id`: the Alibaba Cloud account ID. You can invoke the STS GetCallerIdentity operation to obtain the AccountId response parameter, or view it by clicking your profile picture in the upper-right corner of the Alibaba Cloud Management Console.
    // - `queuename`: the name of the MNS queue.
    // - `topicname`: the name of the MNS topic.
    // 
    // This parameter is required.
    shared_ptr<string> notificationArn_ {};
    // The types of Auto Scaling events and resource changes for which you want to receive notifications. You can specify multiple values by using a repeated list.
    // 
    // You can invoke the DescribeNotificationTypes operation to query parameter values.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> notificationTypes_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region to which the scaling group belongs.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    // The ID of the scaling group.
    // 
    // This parameter is required.
    shared_ptr<string> scalingGroupId_ {};
    // The time zone for notifications.
    // Specify the time zone offset from Coordinated Universal Time (UTC), such as UTC+8 or UTC-7.
    shared_ptr<string> timeZone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
