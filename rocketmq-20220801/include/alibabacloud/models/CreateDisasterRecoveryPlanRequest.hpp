// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDISASTERRECOVERYPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDISASTERRECOVERYPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class CreateDisasterRecoveryPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDisasterRecoveryPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(autoSyncCheckpoint, autoSyncCheckpoint_);
      DARABONBA_PTR_TO_JSON(instances, instances_);
      DARABONBA_PTR_TO_JSON(planDesc, planDesc_);
      DARABONBA_PTR_TO_JSON(planName, planName_);
      DARABONBA_PTR_TO_JSON(planType, planType_);
      DARABONBA_PTR_TO_JSON(syncCheckpointEnabled, syncCheckpointEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDisasterRecoveryPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(autoSyncCheckpoint, autoSyncCheckpoint_);
      DARABONBA_PTR_FROM_JSON(instances, instances_);
      DARABONBA_PTR_FROM_JSON(planDesc, planDesc_);
      DARABONBA_PTR_FROM_JSON(planName, planName_);
      DARABONBA_PTR_FROM_JSON(planType, planType_);
      DARABONBA_PTR_FROM_JSON(syncCheckpointEnabled, syncCheckpointEnabled_);
    };
    CreateDisasterRecoveryPlanRequest() = default ;
    CreateDisasterRecoveryPlanRequest(const CreateDisasterRecoveryPlanRequest &) = default ;
    CreateDisasterRecoveryPlanRequest(CreateDisasterRecoveryPlanRequest &&) = default ;
    CreateDisasterRecoveryPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDisasterRecoveryPlanRequest() = default ;
    CreateDisasterRecoveryPlanRequest& operator=(const CreateDisasterRecoveryPlanRequest &) = default ;
    CreateDisasterRecoveryPlanRequest& operator=(CreateDisasterRecoveryPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(authType, authType_);
        DARABONBA_PTR_TO_JSON(consumerGroupId, consumerGroupId_);
        DARABONBA_PTR_TO_JSON(endpointUrl, endpointUrl_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(instanceRole, instanceRole_);
        DARABONBA_PTR_TO_JSON(instanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(messageProperty, messageProperty_);
        DARABONBA_PTR_TO_JSON(networkType, networkType_);
        DARABONBA_PTR_TO_JSON(password, password_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(username, username_);
        DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(authType, authType_);
        DARABONBA_PTR_FROM_JSON(consumerGroupId, consumerGroupId_);
        DARABONBA_PTR_FROM_JSON(endpointUrl, endpointUrl_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(instanceRole, instanceRole_);
        DARABONBA_PTR_FROM_JSON(instanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(messageProperty, messageProperty_);
        DARABONBA_PTR_FROM_JSON(networkType, networkType_);
        DARABONBA_PTR_FROM_JSON(password, password_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(securityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(username, username_);
        DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MessageProperty : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MessageProperty& obj) { 
          DARABONBA_PTR_TO_JSON(propertyKey, propertyKey_);
          DARABONBA_PTR_TO_JSON(propertyValue, propertyValue_);
        };
        friend void from_json(const Darabonba::Json& j, MessageProperty& obj) { 
          DARABONBA_PTR_FROM_JSON(propertyKey, propertyKey_);
          DARABONBA_PTR_FROM_JSON(propertyValue, propertyValue_);
        };
        MessageProperty() = default ;
        MessageProperty(const MessageProperty &) = default ;
        MessageProperty(MessageProperty &&) = default ;
        MessageProperty(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MessageProperty() = default ;
        MessageProperty& operator=(const MessageProperty &) = default ;
        MessageProperty& operator=(MessageProperty &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->propertyKey_ == nullptr
        && this->propertyValue_ == nullptr; };
        // propertyKey Field Functions 
        bool hasPropertyKey() const { return this->propertyKey_ != nullptr;};
        void deletePropertyKey() { this->propertyKey_ = nullptr;};
        inline string getPropertyKey() const { DARABONBA_PTR_GET_DEFAULT(propertyKey_, "") };
        inline MessageProperty& setPropertyKey(string propertyKey) { DARABONBA_PTR_SET_VALUE(propertyKey_, propertyKey) };


        // propertyValue Field Functions 
        bool hasPropertyValue() const { return this->propertyValue_ != nullptr;};
        void deletePropertyValue() { this->propertyValue_ = nullptr;};
        inline string getPropertyValue() const { DARABONBA_PTR_GET_DEFAULT(propertyValue_, "") };
        inline MessageProperty& setPropertyValue(string propertyValue) { DARABONBA_PTR_SET_VALUE(propertyValue_, propertyValue) };


      protected:
        // The attribute key.
        shared_ptr<string> propertyKey_ {};
        // The attribute value.
        shared_ptr<string> propertyValue_ {};
      };

      virtual bool empty() const override { return this->authType_ == nullptr
        && this->consumerGroupId_ == nullptr && this->endpointUrl_ == nullptr && this->instanceId_ == nullptr && this->instanceRole_ == nullptr && this->instanceType_ == nullptr
        && this->messageProperty_ == nullptr && this->networkType_ == nullptr && this->password_ == nullptr && this->regionId_ == nullptr && this->securityGroupId_ == nullptr
        && this->username_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
      // authType Field Functions 
      bool hasAuthType() const { return this->authType_ != nullptr;};
      void deleteAuthType() { this->authType_ = nullptr;};
      inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
      inline Instances& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


      // consumerGroupId Field Functions 
      bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
      void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
      inline string getConsumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
      inline Instances& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


      // endpointUrl Field Functions 
      bool hasEndpointUrl() const { return this->endpointUrl_ != nullptr;};
      void deleteEndpointUrl() { this->endpointUrl_ = nullptr;};
      inline string getEndpointUrl() const { DARABONBA_PTR_GET_DEFAULT(endpointUrl_, "") };
      inline Instances& setEndpointUrl(string endpointUrl) { DARABONBA_PTR_SET_VALUE(endpointUrl_, endpointUrl) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Instances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceRole Field Functions 
      bool hasInstanceRole() const { return this->instanceRole_ != nullptr;};
      void deleteInstanceRole() { this->instanceRole_ = nullptr;};
      inline string getInstanceRole() const { DARABONBA_PTR_GET_DEFAULT(instanceRole_, "") };
      inline Instances& setInstanceRole(string instanceRole) { DARABONBA_PTR_SET_VALUE(instanceRole_, instanceRole) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline Instances& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // messageProperty Field Functions 
      bool hasMessageProperty() const { return this->messageProperty_ != nullptr;};
      void deleteMessageProperty() { this->messageProperty_ = nullptr;};
      inline const Instances::MessageProperty & getMessageProperty() const { DARABONBA_PTR_GET_CONST(messageProperty_, Instances::MessageProperty) };
      inline Instances::MessageProperty getMessageProperty() { DARABONBA_PTR_GET(messageProperty_, Instances::MessageProperty) };
      inline Instances& setMessageProperty(const Instances::MessageProperty & messageProperty) { DARABONBA_PTR_SET_VALUE(messageProperty_, messageProperty) };
      inline Instances& setMessageProperty(Instances::MessageProperty && messageProperty) { DARABONBA_PTR_SET_RVALUE(messageProperty_, messageProperty) };


      // networkType Field Functions 
      bool hasNetworkType() const { return this->networkType_ != nullptr;};
      void deleteNetworkType() { this->networkType_ = nullptr;};
      inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
      inline Instances& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline Instances& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Instances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline Instances& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline Instances& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline Instances& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Instances& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The authentication method. If you set instanceType to ALIYUN_ROCKETMQ and the instance is an ApsaraMQ for RocketMQ 4.0 instance, you do not need to specify this parameter.
      // 
      // *   NO_AUTH: no authentication
      // *   ACL_AUTH: access control list (ACL)-based authentication
      // 
      // Valid values:
      // 
      // *   NO_AUTH: no authentication
      // *   ACL_AUTH: access control list (ACL)-based authentication
      shared_ptr<string> authType_ {};
      // The ID of the consumer group.
      shared_ptr<string> consumerGroupId_ {};
      // The instance endpoint. This parameter is required only if you set instanceType to EXTERNAL_ROCKETMQ.
      shared_ptr<string> endpointUrl_ {};
      // The instance ID. This parameter is required only if you set instanceType to ALIYUN_ROCKETMQ.
      shared_ptr<string> instanceId_ {};
      // The instance role. Valid values:
      // 
      // *   ACTIVE: primary instance
      // *   Passive: secondary instance
      shared_ptr<string> instanceRole_ {};
      // The instance type. Valid values:
      // 
      // *   ALIYUN_ROCKETMQ: ApsaraMQ for RocketMQ instance
      // *   EXTERNAL_ROCKETMQ: external RocketMQ instance
      // 
      // Valid values:
      // 
      // *   ALIYUN_ROCKETMQ: ApsaraMQ for RocketMQ instance
      // *   EXTERNAL_ROCKETMQ: external RocketMQ instance
      shared_ptr<string> instanceType_ {};
      // The message attribute. When you synchronize a message to the destination cluster, the system automatically adds the attribute to the message for SQL-based filtering.
      shared_ptr<Instances::MessageProperty> messageProperty_ {};
      // The network type. This parameter is required only if you set instanceType to EXTERNAL_ROCKETMQ. Valid values:
      // 
      // *   TCP_INTERNET: Internet over TCP
      // *   TCP_VPC: virtual private cloud (VPC) over TCP.
      shared_ptr<string> networkType_ {};
      // The password used for authentication. This parameter is required only if you set authType to ACL_AUTH. If you set instanceType to ALIYUN_ROCKETMQ, you do not need to specify this parameter.
      shared_ptr<string> password_ {};
      // The region where the instance resides.
      shared_ptr<string> regionId_ {};
      // The ID of the security group to which the instance belongs. This parameter is required only if you set instanceType to EXTERNAL_ROCKETMQ and networkType to TCP_VPC.
      shared_ptr<string> securityGroupId_ {};
      // The username used for authentication. This parameter is required only if you set authType to ACL_AUTH.
      shared_ptr<string> username_ {};
      // The ID of the vSwitch with which the instance is associated. This parameter is required only if you set instanceType to EXTERNAL_ROCKETMQ and networkType to TCP_VPC.
      shared_ptr<string> vSwitchId_ {};
      // The ID of the VPC with which the instance is associated. This parameter is required only if you set instanceType to EXTERNAL_ROCKETMQ and networkType to TCP_VPC.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->autoSyncCheckpoint_ == nullptr
        && this->instances_ == nullptr && this->planDesc_ == nullptr && this->planName_ == nullptr && this->planType_ == nullptr && this->syncCheckpointEnabled_ == nullptr; };
    // autoSyncCheckpoint Field Functions 
    bool hasAutoSyncCheckpoint() const { return this->autoSyncCheckpoint_ != nullptr;};
    void deleteAutoSyncCheckpoint() { this->autoSyncCheckpoint_ = nullptr;};
    inline bool getAutoSyncCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(autoSyncCheckpoint_, false) };
    inline CreateDisasterRecoveryPlanRequest& setAutoSyncCheckpoint(bool autoSyncCheckpoint) { DARABONBA_PTR_SET_VALUE(autoSyncCheckpoint_, autoSyncCheckpoint) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<CreateDisasterRecoveryPlanRequest::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<CreateDisasterRecoveryPlanRequest::Instances>) };
    inline vector<CreateDisasterRecoveryPlanRequest::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<CreateDisasterRecoveryPlanRequest::Instances>) };
    inline CreateDisasterRecoveryPlanRequest& setInstances(const vector<CreateDisasterRecoveryPlanRequest::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline CreateDisasterRecoveryPlanRequest& setInstances(vector<CreateDisasterRecoveryPlanRequest::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // planDesc Field Functions 
    bool hasPlanDesc() const { return this->planDesc_ != nullptr;};
    void deletePlanDesc() { this->planDesc_ = nullptr;};
    inline string getPlanDesc() const { DARABONBA_PTR_GET_DEFAULT(planDesc_, "") };
    inline CreateDisasterRecoveryPlanRequest& setPlanDesc(string planDesc) { DARABONBA_PTR_SET_VALUE(planDesc_, planDesc) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline CreateDisasterRecoveryPlanRequest& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    // planType Field Functions 
    bool hasPlanType() const { return this->planType_ != nullptr;};
    void deletePlanType() { this->planType_ = nullptr;};
    inline string getPlanType() const { DARABONBA_PTR_GET_DEFAULT(planType_, "") };
    inline CreateDisasterRecoveryPlanRequest& setPlanType(string planType) { DARABONBA_PTR_SET_VALUE(planType_, planType) };


    // syncCheckpointEnabled Field Functions 
    bool hasSyncCheckpointEnabled() const { return this->syncCheckpointEnabled_ != nullptr;};
    void deleteSyncCheckpointEnabled() { this->syncCheckpointEnabled_ = nullptr;};
    inline bool getSyncCheckpointEnabled() const { DARABONBA_PTR_GET_DEFAULT(syncCheckpointEnabled_, false) };
    inline CreateDisasterRecoveryPlanRequest& setSyncCheckpointEnabled(bool syncCheckpointEnabled) { DARABONBA_PTR_SET_VALUE(syncCheckpointEnabled_, syncCheckpointEnabled) };


  protected:
    // Specifies whether to enable automatic consumer progress synchronization.
    // 
    // >  This parameter takes effect only when you set `syncCheckpointEnabled` to true.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> autoSyncCheckpoint_ {};
    // The instances involved in the Global Replicator task. You must specify this parameter.
    shared_ptr<vector<CreateDisasterRecoveryPlanRequest::Instances>> instances_ {};
    // The description of the Global Replicator task.
    shared_ptr<string> planDesc_ {};
    // The name of the Global Replicator task. You must specify this parameter.
    shared_ptr<string> planName_ {};
    // The type of the Global Replicator task. You must specify this parameter. For more information, see [Global Replicator](https://help.aliyun.com/document_detail/2843187.html). Valid values:
    // 
    // *   ACTIVE_PASSIVE: one-way backup
    // *   ACTIVE_ACTIVE: two-way backup
    shared_ptr<string> planType_ {};
    // Specifies whether to enable consumer progress synchronization.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> syncCheckpointEnabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
