// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_TO_JSON(EventSourceName, eventSourceName_);
      DARABONBA_ANY_TO_JSON(ExternalSourceConfig, externalSourceConfig_);
      DARABONBA_PTR_TO_JSON(ExternalSourceType, externalSourceType_);
      DARABONBA_PTR_TO_JSON(LinkedExternalSource, linkedExternalSource_);
      DARABONBA_PTR_TO_JSON(SourceHttpEventParameters, sourceHttpEventParameters_);
      DARABONBA_PTR_TO_JSON(SourceKafkaParameters, sourceKafkaParameters_);
      DARABONBA_PTR_TO_JSON(SourceMNSParameters, sourceMNSParameters_);
      DARABONBA_PTR_TO_JSON(SourceOSSEventParameters, sourceOSSEventParameters_);
      DARABONBA_PTR_TO_JSON(SourceRabbitMQParameters, sourceRabbitMQParameters_);
      DARABONBA_PTR_TO_JSON(SourceRocketMQParameters, sourceRocketMQParameters_);
      DARABONBA_PTR_TO_JSON(SourceSLSParameters, sourceSLSParameters_);
      DARABONBA_PTR_TO_JSON(SourceScheduledEventParameters, sourceScheduledEventParameters_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_FROM_JSON(EventSourceName, eventSourceName_);
      DARABONBA_ANY_FROM_JSON(ExternalSourceConfig, externalSourceConfig_);
      DARABONBA_PTR_FROM_JSON(ExternalSourceType, externalSourceType_);
      DARABONBA_PTR_FROM_JSON(LinkedExternalSource, linkedExternalSource_);
      DARABONBA_PTR_FROM_JSON(SourceHttpEventParameters, sourceHttpEventParameters_);
      DARABONBA_PTR_FROM_JSON(SourceKafkaParameters, sourceKafkaParameters_);
      DARABONBA_PTR_FROM_JSON(SourceMNSParameters, sourceMNSParameters_);
      DARABONBA_PTR_FROM_JSON(SourceOSSEventParameters, sourceOSSEventParameters_);
      DARABONBA_PTR_FROM_JSON(SourceRabbitMQParameters, sourceRabbitMQParameters_);
      DARABONBA_PTR_FROM_JSON(SourceRocketMQParameters, sourceRocketMQParameters_);
      DARABONBA_PTR_FROM_JSON(SourceSLSParameters, sourceSLSParameters_);
      DARABONBA_PTR_FROM_JSON(SourceScheduledEventParameters, sourceScheduledEventParameters_);
    };
    UpdateEventSourceRequest() = default ;
    UpdateEventSourceRequest(const UpdateEventSourceRequest &) = default ;
    UpdateEventSourceRequest(UpdateEventSourceRequest &&) = default ;
    UpdateEventSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventSourceRequest() = default ;
    UpdateEventSourceRequest& operator=(const UpdateEventSourceRequest &) = default ;
    UpdateEventSourceRequest& operator=(UpdateEventSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SourceScheduledEventParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceScheduledEventParameters& obj) { 
        DARABONBA_PTR_TO_JSON(Schedule, schedule_);
        DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
      };
      friend void from_json(const Darabonba::Json& j, SourceScheduledEventParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
        DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
      };
      SourceScheduledEventParameters() = default ;
      SourceScheduledEventParameters(const SourceScheduledEventParameters &) = default ;
      SourceScheduledEventParameters(SourceScheduledEventParameters &&) = default ;
      SourceScheduledEventParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceScheduledEventParameters() = default ;
      SourceScheduledEventParameters& operator=(const SourceScheduledEventParameters &) = default ;
      SourceScheduledEventParameters& operator=(SourceScheduledEventParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->schedule_ == nullptr
        && this->timeZone_ == nullptr && this->userData_ == nullptr; };
      // schedule Field Functions 
      bool hasSchedule() const { return this->schedule_ != nullptr;};
      void deleteSchedule() { this->schedule_ = nullptr;};
      inline string getSchedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
      inline SourceScheduledEventParameters& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


      // timeZone Field Functions 
      bool hasTimeZone() const { return this->timeZone_ != nullptr;};
      void deleteTimeZone() { this->timeZone_ = nullptr;};
      inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
      inline SourceScheduledEventParameters& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline SourceScheduledEventParameters& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    protected:
      // The cron expression.
      shared_ptr<string> schedule_ {};
      // The time zone in which the cron expression is executed.
      shared_ptr<string> timeZone_ {};
      // The user data that is displayed in a JSON string.
      shared_ptr<string> userData_ {};
    };

    class SourceSLSParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceSLSParameters& obj) { 
        DARABONBA_PTR_TO_JSON(ConsumePosition, consumePosition_);
        DARABONBA_PTR_TO_JSON(LogStore, logStore_);
        DARABONBA_PTR_TO_JSON(Project, project_);
        DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      };
      friend void from_json(const Darabonba::Json& j, SourceSLSParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(ConsumePosition, consumePosition_);
        DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
        DARABONBA_PTR_FROM_JSON(Project, project_);
        DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      };
      SourceSLSParameters() = default ;
      SourceSLSParameters(const SourceSLSParameters &) = default ;
      SourceSLSParameters(SourceSLSParameters &&) = default ;
      SourceSLSParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceSLSParameters() = default ;
      SourceSLSParameters& operator=(const SourceSLSParameters &) = default ;
      SourceSLSParameters& operator=(SourceSLSParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->consumePosition_ == nullptr
        && this->logStore_ == nullptr && this->project_ == nullptr && this->roleName_ == nullptr; };
      // consumePosition Field Functions 
      bool hasConsumePosition() const { return this->consumePosition_ != nullptr;};
      void deleteConsumePosition() { this->consumePosition_ = nullptr;};
      inline string getConsumePosition() const { DARABONBA_PTR_GET_DEFAULT(consumePosition_, "") };
      inline SourceSLSParameters& setConsumePosition(string consumePosition) { DARABONBA_PTR_SET_VALUE(consumePosition_, consumePosition) };


      // logStore Field Functions 
      bool hasLogStore() const { return this->logStore_ != nullptr;};
      void deleteLogStore() { this->logStore_ = nullptr;};
      inline string getLogStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
      inline SourceSLSParameters& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


      // project Field Functions 
      bool hasProject() const { return this->project_ != nullptr;};
      void deleteProject() { this->project_ = nullptr;};
      inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
      inline SourceSLSParameters& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


      // roleName Field Functions 
      bool hasRoleName() const { return this->roleName_ != nullptr;};
      void deleteRoleName() { this->roleName_ = nullptr;};
      inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
      inline SourceSLSParameters& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    protected:
      // The starting consumer offset. The value begin indicates the earliest offset, and the value end indicates the latest offset. You can also specify a time in seconds to start consumption.
      shared_ptr<string> consumePosition_ {};
      // The Log Service Logstore.
      shared_ptr<string> logStore_ {};
      // The Log Service project.
      shared_ptr<string> project_ {};
      // The role name. If you want to authorize EventBridge to use this role to read logs in Log Service, you must select Alibaba Cloud Service for Selected Trusted Entity and EventBridge for Select Trusted Service when you create the role in the RAM console. For information about the permission policy of this role, see Create a custom event source of the Log Service type.
      shared_ptr<string> roleName_ {};
    };

    class SourceRocketMQParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceRocketMQParameters& obj) { 
        DARABONBA_PTR_TO_JSON(AuthType, authType_);
        DARABONBA_PTR_TO_JSON(GroupID, groupID_);
        DARABONBA_PTR_TO_JSON(InstanceEndpoint, instanceEndpoint_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceNetwork, instanceNetwork_);
        DARABONBA_PTR_TO_JSON(InstancePassword, instancePassword_);
        DARABONBA_PTR_TO_JSON(InstanceSecurityGroupId, instanceSecurityGroupId_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(InstanceUsername, instanceUsername_);
        DARABONBA_PTR_TO_JSON(InstanceVSwitchIds, instanceVSwitchIds_);
        DARABONBA_PTR_TO_JSON(InstanceVpcId, instanceVpcId_);
        DARABONBA_PTR_TO_JSON(Offset, offset_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_TO_JSON(Topic, topic_);
      };
      friend void from_json(const Darabonba::Json& j, SourceRocketMQParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthType, authType_);
        DARABONBA_PTR_FROM_JSON(GroupID, groupID_);
        DARABONBA_PTR_FROM_JSON(InstanceEndpoint, instanceEndpoint_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceNetwork, instanceNetwork_);
        DARABONBA_PTR_FROM_JSON(InstancePassword, instancePassword_);
        DARABONBA_PTR_FROM_JSON(InstanceSecurityGroupId, instanceSecurityGroupId_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(InstanceUsername, instanceUsername_);
        DARABONBA_PTR_FROM_JSON(InstanceVSwitchIds, instanceVSwitchIds_);
        DARABONBA_PTR_FROM_JSON(InstanceVpcId, instanceVpcId_);
        DARABONBA_PTR_FROM_JSON(Offset, offset_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_FROM_JSON(Topic, topic_);
      };
      SourceRocketMQParameters() = default ;
      SourceRocketMQParameters(const SourceRocketMQParameters &) = default ;
      SourceRocketMQParameters(SourceRocketMQParameters &&) = default ;
      SourceRocketMQParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceRocketMQParameters() = default ;
      SourceRocketMQParameters& operator=(const SourceRocketMQParameters &) = default ;
      SourceRocketMQParameters& operator=(SourceRocketMQParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authType_ == nullptr
        && this->groupID_ == nullptr && this->instanceEndpoint_ == nullptr && this->instanceId_ == nullptr && this->instanceNetwork_ == nullptr && this->instancePassword_ == nullptr
        && this->instanceSecurityGroupId_ == nullptr && this->instanceType_ == nullptr && this->instanceUsername_ == nullptr && this->instanceVSwitchIds_ == nullptr && this->instanceVpcId_ == nullptr
        && this->offset_ == nullptr && this->regionId_ == nullptr && this->tag_ == nullptr && this->timestamp_ == nullptr && this->topic_ == nullptr; };
      // authType Field Functions 
      bool hasAuthType() const { return this->authType_ != nullptr;};
      void deleteAuthType() { this->authType_ = nullptr;};
      inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
      inline SourceRocketMQParameters& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


      // groupID Field Functions 
      bool hasGroupID() const { return this->groupID_ != nullptr;};
      void deleteGroupID() { this->groupID_ = nullptr;};
      inline string getGroupID() const { DARABONBA_PTR_GET_DEFAULT(groupID_, "") };
      inline SourceRocketMQParameters& setGroupID(string groupID) { DARABONBA_PTR_SET_VALUE(groupID_, groupID) };


      // instanceEndpoint Field Functions 
      bool hasInstanceEndpoint() const { return this->instanceEndpoint_ != nullptr;};
      void deleteInstanceEndpoint() { this->instanceEndpoint_ = nullptr;};
      inline string getInstanceEndpoint() const { DARABONBA_PTR_GET_DEFAULT(instanceEndpoint_, "") };
      inline SourceRocketMQParameters& setInstanceEndpoint(string instanceEndpoint) { DARABONBA_PTR_SET_VALUE(instanceEndpoint_, instanceEndpoint) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline SourceRocketMQParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceNetwork Field Functions 
      bool hasInstanceNetwork() const { return this->instanceNetwork_ != nullptr;};
      void deleteInstanceNetwork() { this->instanceNetwork_ = nullptr;};
      inline string getInstanceNetwork() const { DARABONBA_PTR_GET_DEFAULT(instanceNetwork_, "") };
      inline SourceRocketMQParameters& setInstanceNetwork(string instanceNetwork) { DARABONBA_PTR_SET_VALUE(instanceNetwork_, instanceNetwork) };


      // instancePassword Field Functions 
      bool hasInstancePassword() const { return this->instancePassword_ != nullptr;};
      void deleteInstancePassword() { this->instancePassword_ = nullptr;};
      inline string getInstancePassword() const { DARABONBA_PTR_GET_DEFAULT(instancePassword_, "") };
      inline SourceRocketMQParameters& setInstancePassword(string instancePassword) { DARABONBA_PTR_SET_VALUE(instancePassword_, instancePassword) };


      // instanceSecurityGroupId Field Functions 
      bool hasInstanceSecurityGroupId() const { return this->instanceSecurityGroupId_ != nullptr;};
      void deleteInstanceSecurityGroupId() { this->instanceSecurityGroupId_ = nullptr;};
      inline string getInstanceSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(instanceSecurityGroupId_, "") };
      inline SourceRocketMQParameters& setInstanceSecurityGroupId(string instanceSecurityGroupId) { DARABONBA_PTR_SET_VALUE(instanceSecurityGroupId_, instanceSecurityGroupId) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline SourceRocketMQParameters& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // instanceUsername Field Functions 
      bool hasInstanceUsername() const { return this->instanceUsername_ != nullptr;};
      void deleteInstanceUsername() { this->instanceUsername_ = nullptr;};
      inline string getInstanceUsername() const { DARABONBA_PTR_GET_DEFAULT(instanceUsername_, "") };
      inline SourceRocketMQParameters& setInstanceUsername(string instanceUsername) { DARABONBA_PTR_SET_VALUE(instanceUsername_, instanceUsername) };


      // instanceVSwitchIds Field Functions 
      bool hasInstanceVSwitchIds() const { return this->instanceVSwitchIds_ != nullptr;};
      void deleteInstanceVSwitchIds() { this->instanceVSwitchIds_ = nullptr;};
      inline string getInstanceVSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(instanceVSwitchIds_, "") };
      inline SourceRocketMQParameters& setInstanceVSwitchIds(string instanceVSwitchIds) { DARABONBA_PTR_SET_VALUE(instanceVSwitchIds_, instanceVSwitchIds) };


      // instanceVpcId Field Functions 
      bool hasInstanceVpcId() const { return this->instanceVpcId_ != nullptr;};
      void deleteInstanceVpcId() { this->instanceVpcId_ = nullptr;};
      inline string getInstanceVpcId() const { DARABONBA_PTR_GET_DEFAULT(instanceVpcId_, "") };
      inline SourceRocketMQParameters& setInstanceVpcId(string instanceVpcId) { DARABONBA_PTR_SET_VALUE(instanceVpcId_, instanceVpcId) };


      // offset Field Functions 
      bool hasOffset() const { return this->offset_ != nullptr;};
      void deleteOffset() { this->offset_ = nullptr;};
      inline string getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, "") };
      inline SourceRocketMQParameters& setOffset(string offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline SourceRocketMQParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline SourceRocketMQParameters& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline SourceRocketMQParameters& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // topic Field Functions 
      bool hasTopic() const { return this->topic_ != nullptr;};
      void deleteTopic() { this->topic_ = nullptr;};
      inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
      inline SourceRocketMQParameters& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    protected:
      // The authentication type. You can set this parameter to ACL or leave this parameter empty.
      shared_ptr<string> authType_ {};
      // The ID of the consumer group on the Message Queue for Apache RocketMQ instance.
      shared_ptr<string> groupID_ {};
      // The endpoint that is used to access the Message Queue for Apache RocketMQ instance.
      shared_ptr<string> instanceEndpoint_ {};
      // The ID of the Message Queue for Apache RocketMQ instance. For more information, see [Limits](https://help.aliyun.com/document_detail/163289.html).
      shared_ptr<string> instanceId_ {};
      // None.
      shared_ptr<string> instanceNetwork_ {};
      // The password that is used to access the Message Queue for Apache RocketMQ instance.
      shared_ptr<string> instancePassword_ {};
      // The ID of the security group to which the Message Queue for Apache RocketMQ instance belongs.
      shared_ptr<string> instanceSecurityGroupId_ {};
      // The type of the Message Queue for Apache RocketMQ instance. Valid values:
      // 
      // *   Cloud_4: Message Queue for Apache RocketMQ 4.0 instance.
      // *   Cloud_5: Message Queue for Apache RocketMQ 5.0 instance.
      shared_ptr<string> instanceType_ {};
      // The username that is used to access the Message Queue for Apache RocketMQ instance.
      shared_ptr<string> instanceUsername_ {};
      // The ID of the vSwitch with which the Message Queue for Apache RocketMQ instance is associated.
      shared_ptr<string> instanceVSwitchIds_ {};
      // The ID of the virtual private cloud (VPC) in which the Message Queue for Apache RocketMQ instance resides.
      shared_ptr<string> instanceVpcId_ {};
      // The offset from which message consumption starts. Valid values:
      // 
      // *   CONSUME_FROM_LAST_OFFSET: Start message consumption from the latest offset.
      // *   CONSUME_FROM_FIRST_OFFSET: Start message consumption from the earliest offset.
      // *   CONSUME_FROM_TIMESTAMP: Start message consumption from the offset at the specified point in time.
      // 
      // Default value: CONSUME_FROM_LAST_OFFSET.
      shared_ptr<string> offset_ {};
      // The region where the Message Queue for Apache RocketMQ instance resides.
      shared_ptr<string> regionId_ {};
      // The tag that is used to filter messages.
      shared_ptr<string> tag_ {};
      // The timestamp that specifies the time from which messages are consumed. This parameter is valid only if you set Offset to CONSUME_FROM_TIMESTAMP.
      shared_ptr<int64_t> timestamp_ {};
      // The name of the topic on the Message Queue for Apache RocketMQ instance. For more information, see [Limits](https://help.aliyun.com/document_detail/163289.html).
      shared_ptr<string> topic_ {};
    };

    class SourceRabbitMQParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceRabbitMQParameters& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(QueueName, queueName_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(VirtualHostName, virtualHostName_);
      };
      friend void from_json(const Darabonba::Json& j, SourceRabbitMQParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(VirtualHostName, virtualHostName_);
      };
      SourceRabbitMQParameters() = default ;
      SourceRabbitMQParameters(const SourceRabbitMQParameters &) = default ;
      SourceRabbitMQParameters(SourceRabbitMQParameters &&) = default ;
      SourceRabbitMQParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceRabbitMQParameters() = default ;
      SourceRabbitMQParameters& operator=(const SourceRabbitMQParameters &) = default ;
      SourceRabbitMQParameters& operator=(SourceRabbitMQParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->queueName_ == nullptr && this->regionId_ == nullptr && this->virtualHostName_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline SourceRabbitMQParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // queueName Field Functions 
      bool hasQueueName() const { return this->queueName_ != nullptr;};
      void deleteQueueName() { this->queueName_ = nullptr;};
      inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
      inline SourceRabbitMQParameters& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline SourceRabbitMQParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // virtualHostName Field Functions 
      bool hasVirtualHostName() const { return this->virtualHostName_ != nullptr;};
      void deleteVirtualHostName() { this->virtualHostName_ = nullptr;};
      inline string getVirtualHostName() const { DARABONBA_PTR_GET_DEFAULT(virtualHostName_, "") };
      inline SourceRabbitMQParameters& setVirtualHostName(string virtualHostName) { DARABONBA_PTR_SET_VALUE(virtualHostName_, virtualHostName) };


    protected:
      // The ID of the Message Queue for RabbitMQ instance. For more information, see [Limits](https://help.aliyun.com/document_detail/163289.html).
      shared_ptr<string> instanceId_ {};
      // The name of the queue on the Message Queue for RabbitMQ instance. For more information, see [Limits](https://help.aliyun.com/document_detail/163289.html).
      shared_ptr<string> queueName_ {};
      // The ID of the region where the Message Queue for RabbitMQ instance resides.
      shared_ptr<string> regionId_ {};
      // The name of the vhost of the Message Queue for RabbitMQ instance. For more information, see [Limits](https://help.aliyun.com/document_detail/163289.html).
      shared_ptr<string> virtualHostName_ {};
    };

    class SourceOSSEventParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceOSSEventParameters& obj) { 
        DARABONBA_PTR_TO_JSON(EventTypes, eventTypes_);
        DARABONBA_PTR_TO_JSON(MatchRules, matchRules_);
        DARABONBA_PTR_TO_JSON(StsRoleArn, stsRoleArn_);
      };
      friend void from_json(const Darabonba::Json& j, SourceOSSEventParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(EventTypes, eventTypes_);
        DARABONBA_PTR_FROM_JSON(MatchRules, matchRules_);
        DARABONBA_PTR_FROM_JSON(StsRoleArn, stsRoleArn_);
      };
      SourceOSSEventParameters() = default ;
      SourceOSSEventParameters(const SourceOSSEventParameters &) = default ;
      SourceOSSEventParameters(SourceOSSEventParameters &&) = default ;
      SourceOSSEventParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceOSSEventParameters() = default ;
      SourceOSSEventParameters& operator=(const SourceOSSEventParameters &) = default ;
      SourceOSSEventParameters& operator=(SourceOSSEventParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->eventTypes_ == nullptr
        && this->matchRules_ == nullptr && this->stsRoleArn_ == nullptr; };
      // eventTypes Field Functions 
      bool hasEventTypes() const { return this->eventTypes_ != nullptr;};
      void deleteEventTypes() { this->eventTypes_ = nullptr;};
      inline const vector<string> & getEventTypes() const { DARABONBA_PTR_GET_CONST(eventTypes_, vector<string>) };
      inline vector<string> getEventTypes() { DARABONBA_PTR_GET(eventTypes_, vector<string>) };
      inline SourceOSSEventParameters& setEventTypes(const vector<string> & eventTypes) { DARABONBA_PTR_SET_VALUE(eventTypes_, eventTypes) };
      inline SourceOSSEventParameters& setEventTypes(vector<string> && eventTypes) { DARABONBA_PTR_SET_RVALUE(eventTypes_, eventTypes) };


      // matchRules Field Functions 
      bool hasMatchRules() const { return this->matchRules_ != nullptr;};
      void deleteMatchRules() { this->matchRules_ = nullptr;};
      inline const vector<vector<SourceOSSEventParameters::MatchRules>> & getMatchRules() const { DARABONBA_PTR_GET_CONST(matchRules_, vector<vector<SourceOSSEventParameters::MatchRules>>) };
      inline vector<vector<SourceOSSEventParameters::MatchRules>> getMatchRules() { DARABONBA_PTR_GET(matchRules_, vector<vector<SourceOSSEventParameters::MatchRules>>) };
      inline SourceOSSEventParameters& setMatchRules(const vector<vector<SourceOSSEventParameters::MatchRules>> & matchRules) { DARABONBA_PTR_SET_VALUE(matchRules_, matchRules) };
      inline SourceOSSEventParameters& setMatchRules(vector<vector<SourceOSSEventParameters::MatchRules>> && matchRules) { DARABONBA_PTR_SET_RVALUE(matchRules_, matchRules) };


      // stsRoleArn Field Functions 
      bool hasStsRoleArn() const { return this->stsRoleArn_ != nullptr;};
      void deleteStsRoleArn() { this->stsRoleArn_ = nullptr;};
      inline string getStsRoleArn() const { DARABONBA_PTR_GET_DEFAULT(stsRoleArn_, "") };
      inline SourceOSSEventParameters& setStsRoleArn(string stsRoleArn) { DARABONBA_PTR_SET_VALUE(stsRoleArn_, stsRoleArn) };


    protected:
      shared_ptr<vector<string>> eventTypes_ {};
      shared_ptr<vector<vector<SourceOSSEventParameters::MatchRules>>> matchRules_ {};
      shared_ptr<string> stsRoleArn_ {};
    };

    class SourceMNSParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceMNSParameters& obj) { 
        DARABONBA_PTR_TO_JSON(IsBase64Decode, isBase64Decode_);
        DARABONBA_PTR_TO_JSON(QueueName, queueName_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, SourceMNSParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(IsBase64Decode, isBase64Decode_);
        DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      SourceMNSParameters() = default ;
      SourceMNSParameters(const SourceMNSParameters &) = default ;
      SourceMNSParameters(SourceMNSParameters &&) = default ;
      SourceMNSParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceMNSParameters() = default ;
      SourceMNSParameters& operator=(const SourceMNSParameters &) = default ;
      SourceMNSParameters& operator=(SourceMNSParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->isBase64Decode_ == nullptr
        && this->queueName_ == nullptr && this->regionId_ == nullptr; };
      // isBase64Decode Field Functions 
      bool hasIsBase64Decode() const { return this->isBase64Decode_ != nullptr;};
      void deleteIsBase64Decode() { this->isBase64Decode_ = nullptr;};
      inline bool getIsBase64Decode() const { DARABONBA_PTR_GET_DEFAULT(isBase64Decode_, false) };
      inline SourceMNSParameters& setIsBase64Decode(bool isBase64Decode) { DARABONBA_PTR_SET_VALUE(isBase64Decode_, isBase64Decode) };


      // queueName Field Functions 
      bool hasQueueName() const { return this->queueName_ != nullptr;};
      void deleteQueueName() { this->queueName_ = nullptr;};
      inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
      inline SourceMNSParameters& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline SourceMNSParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // Indicates whether Base64 decoding is enabled. By default, Base64 decoding is enabled.
      shared_ptr<bool> isBase64Decode_ {};
      // The name of the MNS queue.
      shared_ptr<string> queueName_ {};
      // The region where the MNS queue resides.
      shared_ptr<string> regionId_ {};
    };

    class SourceKafkaParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceKafkaParameters& obj) { 
        DARABONBA_PTR_TO_JSON(ConsumerGroup, consumerGroup_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(MaximumTasks, maximumTasks_);
        DARABONBA_PTR_TO_JSON(Network, network_);
        DARABONBA_PTR_TO_JSON(OffsetReset, offsetReset_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(Topic, topic_);
        DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, SourceKafkaParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(ConsumerGroup, consumerGroup_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(MaximumTasks, maximumTasks_);
        DARABONBA_PTR_FROM_JSON(Network, network_);
        DARABONBA_PTR_FROM_JSON(OffsetReset, offsetReset_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(Topic, topic_);
        DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      SourceKafkaParameters() = default ;
      SourceKafkaParameters(const SourceKafkaParameters &) = default ;
      SourceKafkaParameters(SourceKafkaParameters &&) = default ;
      SourceKafkaParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceKafkaParameters() = default ;
      SourceKafkaParameters& operator=(const SourceKafkaParameters &) = default ;
      SourceKafkaParameters& operator=(SourceKafkaParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->consumerGroup_ == nullptr
        && this->instanceId_ == nullptr && this->maximumTasks_ == nullptr && this->network_ == nullptr && this->offsetReset_ == nullptr && this->regionId_ == nullptr
        && this->securityGroupId_ == nullptr && this->topic_ == nullptr && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr; };
      // consumerGroup Field Functions 
      bool hasConsumerGroup() const { return this->consumerGroup_ != nullptr;};
      void deleteConsumerGroup() { this->consumerGroup_ = nullptr;};
      inline string getConsumerGroup() const { DARABONBA_PTR_GET_DEFAULT(consumerGroup_, "") };
      inline SourceKafkaParameters& setConsumerGroup(string consumerGroup) { DARABONBA_PTR_SET_VALUE(consumerGroup_, consumerGroup) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline SourceKafkaParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // maximumTasks Field Functions 
      bool hasMaximumTasks() const { return this->maximumTasks_ != nullptr;};
      void deleteMaximumTasks() { this->maximumTasks_ = nullptr;};
      inline int32_t getMaximumTasks() const { DARABONBA_PTR_GET_DEFAULT(maximumTasks_, 0) };
      inline SourceKafkaParameters& setMaximumTasks(int32_t maximumTasks) { DARABONBA_PTR_SET_VALUE(maximumTasks_, maximumTasks) };


      // network Field Functions 
      bool hasNetwork() const { return this->network_ != nullptr;};
      void deleteNetwork() { this->network_ = nullptr;};
      inline string getNetwork() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
      inline SourceKafkaParameters& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


      // offsetReset Field Functions 
      bool hasOffsetReset() const { return this->offsetReset_ != nullptr;};
      void deleteOffsetReset() { this->offsetReset_ = nullptr;};
      inline string getOffsetReset() const { DARABONBA_PTR_GET_DEFAULT(offsetReset_, "") };
      inline SourceKafkaParameters& setOffsetReset(string offsetReset) { DARABONBA_PTR_SET_VALUE(offsetReset_, offsetReset) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline SourceKafkaParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline SourceKafkaParameters& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // topic Field Functions 
      bool hasTopic() const { return this->topic_ != nullptr;};
      void deleteTopic() { this->topic_ = nullptr;};
      inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
      inline SourceKafkaParameters& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


      // vSwitchIds Field Functions 
      bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
      void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
      inline string getVSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIds_, "") };
      inline SourceKafkaParameters& setVSwitchIds(string vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline SourceKafkaParameters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The ID of the consumer group that subscribes to the topic.
      shared_ptr<string> consumerGroup_ {};
      // The ID of the Message Queue for Apache Kafka instance.
      shared_ptr<string> instanceId_ {};
      // The maximum number of consumers.
      shared_ptr<int32_t> maximumTasks_ {};
      // The network. Valid values: Default and PublicNetwork. Default value: Default. The value PublicNetwork indicates a self-managed network.
      shared_ptr<string> network_ {};
      // The consumer offset.
      shared_ptr<string> offsetReset_ {};
      // The ID of the region where the Message Queue for Apache Kafka instance resides.
      shared_ptr<string> regionId_ {};
      // The ID of the security group to which the Message Queue for Apache Kafka instance belongs. This parameter is required only if you set Network to PublicNetwork.
      shared_ptr<string> securityGroupId_ {};
      // The name of the topic on the Message Queue for Apache Kafka instance.
      shared_ptr<string> topic_ {};
      // The ID of the vSwitch with which the Message Queue for Apache Kafka instance is associated. This parameter is required only if you set Network to PublicNetwork.
      shared_ptr<string> vSwitchIds_ {};
      // The ID of the VPC in which the Message Queue for Apache Kafka instance resides. This parameter is required only if you set Network to PublicNetwork.
      shared_ptr<string> vpcId_ {};
    };

    class SourceHttpEventParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceHttpEventParameters& obj) { 
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Method, method_);
        DARABONBA_PTR_TO_JSON(Referer, referer_);
        DARABONBA_PTR_TO_JSON(SecurityConfig, securityConfig_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, SourceHttpEventParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Method, method_);
        DARABONBA_PTR_FROM_JSON(Referer, referer_);
        DARABONBA_PTR_FROM_JSON(SecurityConfig, securityConfig_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      SourceHttpEventParameters() = default ;
      SourceHttpEventParameters(const SourceHttpEventParameters &) = default ;
      SourceHttpEventParameters(SourceHttpEventParameters &&) = default ;
      SourceHttpEventParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceHttpEventParameters() = default ;
      SourceHttpEventParameters& operator=(const SourceHttpEventParameters &) = default ;
      SourceHttpEventParameters& operator=(SourceHttpEventParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ip_ == nullptr
        && this->method_ == nullptr && this->referer_ == nullptr && this->securityConfig_ == nullptr && this->type_ == nullptr; };
      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline const vector<string> & getIp() const { DARABONBA_PTR_GET_CONST(ip_, vector<string>) };
      inline vector<string> getIp() { DARABONBA_PTR_GET(ip_, vector<string>) };
      inline SourceHttpEventParameters& setIp(const vector<string> & ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };
      inline SourceHttpEventParameters& setIp(vector<string> && ip) { DARABONBA_PTR_SET_RVALUE(ip_, ip) };


      // method Field Functions 
      bool hasMethod() const { return this->method_ != nullptr;};
      void deleteMethod() { this->method_ = nullptr;};
      inline const vector<string> & getMethod() const { DARABONBA_PTR_GET_CONST(method_, vector<string>) };
      inline vector<string> getMethod() { DARABONBA_PTR_GET(method_, vector<string>) };
      inline SourceHttpEventParameters& setMethod(const vector<string> & method) { DARABONBA_PTR_SET_VALUE(method_, method) };
      inline SourceHttpEventParameters& setMethod(vector<string> && method) { DARABONBA_PTR_SET_RVALUE(method_, method) };


      // referer Field Functions 
      bool hasReferer() const { return this->referer_ != nullptr;};
      void deleteReferer() { this->referer_ = nullptr;};
      inline const vector<string> & getReferer() const { DARABONBA_PTR_GET_CONST(referer_, vector<string>) };
      inline vector<string> getReferer() { DARABONBA_PTR_GET(referer_, vector<string>) };
      inline SourceHttpEventParameters& setReferer(const vector<string> & referer) { DARABONBA_PTR_SET_VALUE(referer_, referer) };
      inline SourceHttpEventParameters& setReferer(vector<string> && referer) { DARABONBA_PTR_SET_RVALUE(referer_, referer) };


      // securityConfig Field Functions 
      bool hasSecurityConfig() const { return this->securityConfig_ != nullptr;};
      void deleteSecurityConfig() { this->securityConfig_ = nullptr;};
      inline string getSecurityConfig() const { DARABONBA_PTR_GET_DEFAULT(securityConfig_, "") };
      inline SourceHttpEventParameters& setSecurityConfig(string securityConfig) { DARABONBA_PTR_SET_VALUE(securityConfig_, securityConfig) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline SourceHttpEventParameters& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The CIDR block that is used for security settings. This parameter is required only if SecurityConfig is set to ip. You can enter a CIDR block or an IP address.
      shared_ptr<vector<string>> ip_ {};
      // The HTTP request method supported by the generated webhook URL. You can select multiple values. Valid values:
      // 
      // *   GET
      // *   POST
      // *   PUT
      // *   PATCH
      // *   DELETE
      // *   HEAD
      // *   OPTIONS
      // *   TRACE
      // *   CONNECT
      shared_ptr<vector<string>> method_ {};
      // The security domain name. This parameter is required only if SecurityConfig is set to referer. You can enter a domain name.
      shared_ptr<vector<string>> referer_ {};
      // The type of security settings. Valid values:
      // 
      // *   none: No configuration is required.
      // *   ip: CIDR block.
      // *   referer: security domain name.
      shared_ptr<string> securityConfig_ {};
      // The protocol type that is supported by the generated webhook URL. Valid values:
      // 
      // *   HTTP
      // *   HTTPS
      // *   HTTP\\&HTTPS
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->eventBusName_ == nullptr && this->eventSourceName_ == nullptr && this->externalSourceConfig_ == nullptr && this->externalSourceType_ == nullptr && this->linkedExternalSource_ == nullptr
        && this->sourceHttpEventParameters_ == nullptr && this->sourceKafkaParameters_ == nullptr && this->sourceMNSParameters_ == nullptr && this->sourceOSSEventParameters_ == nullptr && this->sourceRabbitMQParameters_ == nullptr
        && this->sourceRocketMQParameters_ == nullptr && this->sourceSLSParameters_ == nullptr && this->sourceScheduledEventParameters_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateEventSourceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string getEventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline UpdateEventSourceRequest& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


    // eventSourceName Field Functions 
    bool hasEventSourceName() const { return this->eventSourceName_ != nullptr;};
    void deleteEventSourceName() { this->eventSourceName_ = nullptr;};
    inline string getEventSourceName() const { DARABONBA_PTR_GET_DEFAULT(eventSourceName_, "") };
    inline UpdateEventSourceRequest& setEventSourceName(string eventSourceName) { DARABONBA_PTR_SET_VALUE(eventSourceName_, eventSourceName) };


    // externalSourceConfig Field Functions 
    bool hasExternalSourceConfig() const { return this->externalSourceConfig_ != nullptr;};
    void deleteExternalSourceConfig() { this->externalSourceConfig_ = nullptr;};
    inline     const Darabonba::Json & getExternalSourceConfig() const { DARABONBA_GET(externalSourceConfig_) };
    Darabonba::Json & getExternalSourceConfig() { DARABONBA_GET(externalSourceConfig_) };
    inline UpdateEventSourceRequest& setExternalSourceConfig(const Darabonba::Json & externalSourceConfig) { DARABONBA_SET_VALUE(externalSourceConfig_, externalSourceConfig) };
    inline UpdateEventSourceRequest& setExternalSourceConfig(Darabonba::Json && externalSourceConfig) { DARABONBA_SET_RVALUE(externalSourceConfig_, externalSourceConfig) };


    // externalSourceType Field Functions 
    bool hasExternalSourceType() const { return this->externalSourceType_ != nullptr;};
    void deleteExternalSourceType() { this->externalSourceType_ = nullptr;};
    inline string getExternalSourceType() const { DARABONBA_PTR_GET_DEFAULT(externalSourceType_, "") };
    inline UpdateEventSourceRequest& setExternalSourceType(string externalSourceType) { DARABONBA_PTR_SET_VALUE(externalSourceType_, externalSourceType) };


    // linkedExternalSource Field Functions 
    bool hasLinkedExternalSource() const { return this->linkedExternalSource_ != nullptr;};
    void deleteLinkedExternalSource() { this->linkedExternalSource_ = nullptr;};
    inline bool getLinkedExternalSource() const { DARABONBA_PTR_GET_DEFAULT(linkedExternalSource_, false) };
    inline UpdateEventSourceRequest& setLinkedExternalSource(bool linkedExternalSource) { DARABONBA_PTR_SET_VALUE(linkedExternalSource_, linkedExternalSource) };


    // sourceHttpEventParameters Field Functions 
    bool hasSourceHttpEventParameters() const { return this->sourceHttpEventParameters_ != nullptr;};
    void deleteSourceHttpEventParameters() { this->sourceHttpEventParameters_ = nullptr;};
    inline const UpdateEventSourceRequest::SourceHttpEventParameters & getSourceHttpEventParameters() const { DARABONBA_PTR_GET_CONST(sourceHttpEventParameters_, UpdateEventSourceRequest::SourceHttpEventParameters) };
    inline UpdateEventSourceRequest::SourceHttpEventParameters getSourceHttpEventParameters() { DARABONBA_PTR_GET(sourceHttpEventParameters_, UpdateEventSourceRequest::SourceHttpEventParameters) };
    inline UpdateEventSourceRequest& setSourceHttpEventParameters(const UpdateEventSourceRequest::SourceHttpEventParameters & sourceHttpEventParameters) { DARABONBA_PTR_SET_VALUE(sourceHttpEventParameters_, sourceHttpEventParameters) };
    inline UpdateEventSourceRequest& setSourceHttpEventParameters(UpdateEventSourceRequest::SourceHttpEventParameters && sourceHttpEventParameters) { DARABONBA_PTR_SET_RVALUE(sourceHttpEventParameters_, sourceHttpEventParameters) };


    // sourceKafkaParameters Field Functions 
    bool hasSourceKafkaParameters() const { return this->sourceKafkaParameters_ != nullptr;};
    void deleteSourceKafkaParameters() { this->sourceKafkaParameters_ = nullptr;};
    inline const UpdateEventSourceRequest::SourceKafkaParameters & getSourceKafkaParameters() const { DARABONBA_PTR_GET_CONST(sourceKafkaParameters_, UpdateEventSourceRequest::SourceKafkaParameters) };
    inline UpdateEventSourceRequest::SourceKafkaParameters getSourceKafkaParameters() { DARABONBA_PTR_GET(sourceKafkaParameters_, UpdateEventSourceRequest::SourceKafkaParameters) };
    inline UpdateEventSourceRequest& setSourceKafkaParameters(const UpdateEventSourceRequest::SourceKafkaParameters & sourceKafkaParameters) { DARABONBA_PTR_SET_VALUE(sourceKafkaParameters_, sourceKafkaParameters) };
    inline UpdateEventSourceRequest& setSourceKafkaParameters(UpdateEventSourceRequest::SourceKafkaParameters && sourceKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sourceKafkaParameters_, sourceKafkaParameters) };


    // sourceMNSParameters Field Functions 
    bool hasSourceMNSParameters() const { return this->sourceMNSParameters_ != nullptr;};
    void deleteSourceMNSParameters() { this->sourceMNSParameters_ = nullptr;};
    inline const UpdateEventSourceRequest::SourceMNSParameters & getSourceMNSParameters() const { DARABONBA_PTR_GET_CONST(sourceMNSParameters_, UpdateEventSourceRequest::SourceMNSParameters) };
    inline UpdateEventSourceRequest::SourceMNSParameters getSourceMNSParameters() { DARABONBA_PTR_GET(sourceMNSParameters_, UpdateEventSourceRequest::SourceMNSParameters) };
    inline UpdateEventSourceRequest& setSourceMNSParameters(const UpdateEventSourceRequest::SourceMNSParameters & sourceMNSParameters) { DARABONBA_PTR_SET_VALUE(sourceMNSParameters_, sourceMNSParameters) };
    inline UpdateEventSourceRequest& setSourceMNSParameters(UpdateEventSourceRequest::SourceMNSParameters && sourceMNSParameters) { DARABONBA_PTR_SET_RVALUE(sourceMNSParameters_, sourceMNSParameters) };


    // sourceOSSEventParameters Field Functions 
    bool hasSourceOSSEventParameters() const { return this->sourceOSSEventParameters_ != nullptr;};
    void deleteSourceOSSEventParameters() { this->sourceOSSEventParameters_ = nullptr;};
    inline const UpdateEventSourceRequest::SourceOSSEventParameters & getSourceOSSEventParameters() const { DARABONBA_PTR_GET_CONST(sourceOSSEventParameters_, UpdateEventSourceRequest::SourceOSSEventParameters) };
    inline UpdateEventSourceRequest::SourceOSSEventParameters getSourceOSSEventParameters() { DARABONBA_PTR_GET(sourceOSSEventParameters_, UpdateEventSourceRequest::SourceOSSEventParameters) };
    inline UpdateEventSourceRequest& setSourceOSSEventParameters(const UpdateEventSourceRequest::SourceOSSEventParameters & sourceOSSEventParameters) { DARABONBA_PTR_SET_VALUE(sourceOSSEventParameters_, sourceOSSEventParameters) };
    inline UpdateEventSourceRequest& setSourceOSSEventParameters(UpdateEventSourceRequest::SourceOSSEventParameters && sourceOSSEventParameters) { DARABONBA_PTR_SET_RVALUE(sourceOSSEventParameters_, sourceOSSEventParameters) };


    // sourceRabbitMQParameters Field Functions 
    bool hasSourceRabbitMQParameters() const { return this->sourceRabbitMQParameters_ != nullptr;};
    void deleteSourceRabbitMQParameters() { this->sourceRabbitMQParameters_ = nullptr;};
    inline const UpdateEventSourceRequest::SourceRabbitMQParameters & getSourceRabbitMQParameters() const { DARABONBA_PTR_GET_CONST(sourceRabbitMQParameters_, UpdateEventSourceRequest::SourceRabbitMQParameters) };
    inline UpdateEventSourceRequest::SourceRabbitMQParameters getSourceRabbitMQParameters() { DARABONBA_PTR_GET(sourceRabbitMQParameters_, UpdateEventSourceRequest::SourceRabbitMQParameters) };
    inline UpdateEventSourceRequest& setSourceRabbitMQParameters(const UpdateEventSourceRequest::SourceRabbitMQParameters & sourceRabbitMQParameters) { DARABONBA_PTR_SET_VALUE(sourceRabbitMQParameters_, sourceRabbitMQParameters) };
    inline UpdateEventSourceRequest& setSourceRabbitMQParameters(UpdateEventSourceRequest::SourceRabbitMQParameters && sourceRabbitMQParameters) { DARABONBA_PTR_SET_RVALUE(sourceRabbitMQParameters_, sourceRabbitMQParameters) };


    // sourceRocketMQParameters Field Functions 
    bool hasSourceRocketMQParameters() const { return this->sourceRocketMQParameters_ != nullptr;};
    void deleteSourceRocketMQParameters() { this->sourceRocketMQParameters_ = nullptr;};
    inline const UpdateEventSourceRequest::SourceRocketMQParameters & getSourceRocketMQParameters() const { DARABONBA_PTR_GET_CONST(sourceRocketMQParameters_, UpdateEventSourceRequest::SourceRocketMQParameters) };
    inline UpdateEventSourceRequest::SourceRocketMQParameters getSourceRocketMQParameters() { DARABONBA_PTR_GET(sourceRocketMQParameters_, UpdateEventSourceRequest::SourceRocketMQParameters) };
    inline UpdateEventSourceRequest& setSourceRocketMQParameters(const UpdateEventSourceRequest::SourceRocketMQParameters & sourceRocketMQParameters) { DARABONBA_PTR_SET_VALUE(sourceRocketMQParameters_, sourceRocketMQParameters) };
    inline UpdateEventSourceRequest& setSourceRocketMQParameters(UpdateEventSourceRequest::SourceRocketMQParameters && sourceRocketMQParameters) { DARABONBA_PTR_SET_RVALUE(sourceRocketMQParameters_, sourceRocketMQParameters) };


    // sourceSLSParameters Field Functions 
    bool hasSourceSLSParameters() const { return this->sourceSLSParameters_ != nullptr;};
    void deleteSourceSLSParameters() { this->sourceSLSParameters_ = nullptr;};
    inline const UpdateEventSourceRequest::SourceSLSParameters & getSourceSLSParameters() const { DARABONBA_PTR_GET_CONST(sourceSLSParameters_, UpdateEventSourceRequest::SourceSLSParameters) };
    inline UpdateEventSourceRequest::SourceSLSParameters getSourceSLSParameters() { DARABONBA_PTR_GET(sourceSLSParameters_, UpdateEventSourceRequest::SourceSLSParameters) };
    inline UpdateEventSourceRequest& setSourceSLSParameters(const UpdateEventSourceRequest::SourceSLSParameters & sourceSLSParameters) { DARABONBA_PTR_SET_VALUE(sourceSLSParameters_, sourceSLSParameters) };
    inline UpdateEventSourceRequest& setSourceSLSParameters(UpdateEventSourceRequest::SourceSLSParameters && sourceSLSParameters) { DARABONBA_PTR_SET_RVALUE(sourceSLSParameters_, sourceSLSParameters) };


    // sourceScheduledEventParameters Field Functions 
    bool hasSourceScheduledEventParameters() const { return this->sourceScheduledEventParameters_ != nullptr;};
    void deleteSourceScheduledEventParameters() { this->sourceScheduledEventParameters_ = nullptr;};
    inline const UpdateEventSourceRequest::SourceScheduledEventParameters & getSourceScheduledEventParameters() const { DARABONBA_PTR_GET_CONST(sourceScheduledEventParameters_, UpdateEventSourceRequest::SourceScheduledEventParameters) };
    inline UpdateEventSourceRequest::SourceScheduledEventParameters getSourceScheduledEventParameters() { DARABONBA_PTR_GET(sourceScheduledEventParameters_, UpdateEventSourceRequest::SourceScheduledEventParameters) };
    inline UpdateEventSourceRequest& setSourceScheduledEventParameters(const UpdateEventSourceRequest::SourceScheduledEventParameters & sourceScheduledEventParameters) { DARABONBA_PTR_SET_VALUE(sourceScheduledEventParameters_, sourceScheduledEventParameters) };
    inline UpdateEventSourceRequest& setSourceScheduledEventParameters(UpdateEventSourceRequest::SourceScheduledEventParameters && sourceScheduledEventParameters) { DARABONBA_PTR_SET_RVALUE(sourceScheduledEventParameters_, sourceScheduledEventParameters) };


  protected:
    // The description of the event source.
    shared_ptr<string> description_ {};
    // The event bus with which the event source is associated.
    // 
    // This parameter is required.
    shared_ptr<string> eventBusName_ {};
    // The name of the event source.
    // 
    // This parameter is required.
    shared_ptr<string> eventSourceName_ {};
    // The configurations of the external data source.
    Darabonba::Json externalSourceConfig_ {};
    // The type of the external data source.
    shared_ptr<string> externalSourceType_ {};
    // Specifies whether to connect to an external data source.
    shared_ptr<bool> linkedExternalSource_ {};
    // The parameters that are configured if the event source is HTTP events.
    shared_ptr<UpdateEventSourceRequest::SourceHttpEventParameters> sourceHttpEventParameters_ {};
    // The parameters that are configured if the event source is Message Queue for Apache Kafka.
    shared_ptr<UpdateEventSourceRequest::SourceKafkaParameters> sourceKafkaParameters_ {};
    // The parameters that are configured if the event source is Message Service (MNS).
    shared_ptr<UpdateEventSourceRequest::SourceMNSParameters> sourceMNSParameters_ {};
    shared_ptr<UpdateEventSourceRequest::SourceOSSEventParameters> sourceOSSEventParameters_ {};
    // The parameters that are configured if the event source is Message Queue for RabbitMQ.
    shared_ptr<UpdateEventSourceRequest::SourceRabbitMQParameters> sourceRabbitMQParameters_ {};
    // The parameters that are configured if the event source is Message Queue for Apache RocketMQ.
    shared_ptr<UpdateEventSourceRequest::SourceRocketMQParameters> sourceRocketMQParameters_ {};
    // SourceSLSParameters
    shared_ptr<UpdateEventSourceRequest::SourceSLSParameters> sourceSLSParameters_ {};
    // The parameters that are configured if you specify scheduled events as the event source.
    shared_ptr<UpdateEventSourceRequest::SourceScheduledEventParameters> sourceScheduledEventParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
