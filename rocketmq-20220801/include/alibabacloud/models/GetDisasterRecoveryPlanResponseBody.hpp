// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDISASTERRECOVERYPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDISASTERRECOVERYPLANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetDisasterRecoveryPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDisasterRecoveryPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(accessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDisasterRecoveryPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(accessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetDisasterRecoveryPlanResponseBody() = default ;
    GetDisasterRecoveryPlanResponseBody(const GetDisasterRecoveryPlanResponseBody &) = default ;
    GetDisasterRecoveryPlanResponseBody(GetDisasterRecoveryPlanResponseBody &&) = default ;
    GetDisasterRecoveryPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDisasterRecoveryPlanResponseBody() = default ;
    GetDisasterRecoveryPlanResponseBody& operator=(const GetDisasterRecoveryPlanResponseBody &) = default ;
    GetDisasterRecoveryPlanResponseBody& operator=(GetDisasterRecoveryPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(autoSyncCheckpoint, autoSyncCheckpoint_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(extInfo, extInfo_);
        DARABONBA_PTR_TO_JSON(instances, instances_);
        DARABONBA_PTR_TO_JSON(planDesc, planDesc_);
        DARABONBA_PTR_TO_JSON(planId, planId_);
        DARABONBA_PTR_TO_JSON(planName, planName_);
        DARABONBA_PTR_TO_JSON(planStatus, planStatus_);
        DARABONBA_PTR_TO_JSON(planType, planType_);
        DARABONBA_PTR_TO_JSON(syncCheckpointEnabled, syncCheckpointEnabled_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(autoSyncCheckpoint, autoSyncCheckpoint_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(extInfo, extInfo_);
        DARABONBA_PTR_FROM_JSON(instances, instances_);
        DARABONBA_PTR_FROM_JSON(planDesc, planDesc_);
        DARABONBA_PTR_FROM_JSON(planId, planId_);
        DARABONBA_PTR_FROM_JSON(planName, planName_);
        DARABONBA_PTR_FROM_JSON(planStatus, planStatus_);
        DARABONBA_PTR_FROM_JSON(planType, planType_);
        DARABONBA_PTR_FROM_JSON(syncCheckpointEnabled, syncCheckpointEnabled_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
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
        // The authentication type.
        shared_ptr<string> authType_ {};
        // The consumer Group ID.
        shared_ptr<string> consumerGroupId_ {};
        // The endpoint.
        shared_ptr<string> endpointUrl_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The instance role.
        shared_ptr<string> instanceRole_ {};
        // The instance type.
        shared_ptr<string> instanceType_ {};
        // The message attribute.
        shared_ptr<Instances::MessageProperty> messageProperty_ {};
        // The network type.
        shared_ptr<string> networkType_ {};
        // The password used for authentication.
        shared_ptr<string> password_ {};
        // The ID of the region where the instance resides.
        shared_ptr<string> regionId_ {};
        // The security group ID.
        shared_ptr<string> securityGroupId_ {};
        // The username used for authentication.
        shared_ptr<string> username_ {};
        // The vSwitch ID.
        shared_ptr<string> vSwitchId_ {};
        // The virtual private cloud (VPC) ID.
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->autoSyncCheckpoint_ == nullptr
        && this->createTime_ == nullptr && this->extInfo_ == nullptr && this->instances_ == nullptr && this->planDesc_ == nullptr && this->planId_ == nullptr
        && this->planName_ == nullptr && this->planStatus_ == nullptr && this->planType_ == nullptr && this->syncCheckpointEnabled_ == nullptr && this->updateTime_ == nullptr; };
      // autoSyncCheckpoint Field Functions 
      bool hasAutoSyncCheckpoint() const { return this->autoSyncCheckpoint_ != nullptr;};
      void deleteAutoSyncCheckpoint() { this->autoSyncCheckpoint_ = nullptr;};
      inline bool getAutoSyncCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(autoSyncCheckpoint_, false) };
      inline Data& setAutoSyncCheckpoint(bool autoSyncCheckpoint) { DARABONBA_PTR_SET_VALUE(autoSyncCheckpoint_, autoSyncCheckpoint) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // extInfo Field Functions 
      bool hasExtInfo() const { return this->extInfo_ != nullptr;};
      void deleteExtInfo() { this->extInfo_ = nullptr;};
      inline const map<string, string> & getExtInfo() const { DARABONBA_PTR_GET_CONST(extInfo_, map<string, string>) };
      inline map<string, string> getExtInfo() { DARABONBA_PTR_GET(extInfo_, map<string, string>) };
      inline Data& setExtInfo(const map<string, string> & extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };
      inline Data& setExtInfo(map<string, string> && extInfo) { DARABONBA_PTR_SET_RVALUE(extInfo_, extInfo) };


      // instances Field Functions 
      bool hasInstances() const { return this->instances_ != nullptr;};
      void deleteInstances() { this->instances_ = nullptr;};
      inline const vector<Data::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<Data::Instances>) };
      inline vector<Data::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<Data::Instances>) };
      inline Data& setInstances(const vector<Data::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
      inline Data& setInstances(vector<Data::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


      // planDesc Field Functions 
      bool hasPlanDesc() const { return this->planDesc_ != nullptr;};
      void deletePlanDesc() { this->planDesc_ = nullptr;};
      inline string getPlanDesc() const { DARABONBA_PTR_GET_DEFAULT(planDesc_, "") };
      inline Data& setPlanDesc(string planDesc) { DARABONBA_PTR_SET_VALUE(planDesc_, planDesc) };


      // planId Field Functions 
      bool hasPlanId() const { return this->planId_ != nullptr;};
      void deletePlanId() { this->planId_ = nullptr;};
      inline int64_t getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, 0L) };
      inline Data& setPlanId(int64_t planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


      // planName Field Functions 
      bool hasPlanName() const { return this->planName_ != nullptr;};
      void deletePlanName() { this->planName_ = nullptr;};
      inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
      inline Data& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


      // planStatus Field Functions 
      bool hasPlanStatus() const { return this->planStatus_ != nullptr;};
      void deletePlanStatus() { this->planStatus_ = nullptr;};
      inline string getPlanStatus() const { DARABONBA_PTR_GET_DEFAULT(planStatus_, "") };
      inline Data& setPlanStatus(string planStatus) { DARABONBA_PTR_SET_VALUE(planStatus_, planStatus) };


      // planType Field Functions 
      bool hasPlanType() const { return this->planType_ != nullptr;};
      void deletePlanType() { this->planType_ = nullptr;};
      inline string getPlanType() const { DARABONBA_PTR_GET_DEFAULT(planType_, "") };
      inline Data& setPlanType(string planType) { DARABONBA_PTR_SET_VALUE(planType_, planType) };


      // syncCheckpointEnabled Field Functions 
      bool hasSyncCheckpointEnabled() const { return this->syncCheckpointEnabled_ != nullptr;};
      void deleteSyncCheckpointEnabled() { this->syncCheckpointEnabled_ = nullptr;};
      inline bool getSyncCheckpointEnabled() const { DARABONBA_PTR_GET_DEFAULT(syncCheckpointEnabled_, false) };
      inline Data& setSyncCheckpointEnabled(bool syncCheckpointEnabled) { DARABONBA_PTR_SET_VALUE(syncCheckpointEnabled_, syncCheckpointEnabled) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Data& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // Indicates whether automatic consumer progress synchronization is enabled.
      // 
      // >  This parameter takes effect only when `syncCheckpointEnabled` is set to true.
      // 
      // Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> autoSyncCheckpoint_ {};
      // The time when the query task was created.
      shared_ptr<string> createTime_ {};
      // The extended information.
      shared_ptr<map<string, string>> extInfo_ {};
      // The instances involved in the Global Replicator task.
      shared_ptr<vector<Data::Instances>> instances_ {};
      // The description of the Global Replicator task.
      shared_ptr<string> planDesc_ {};
      // The ID of the Global Replicator task.
      shared_ptr<int64_t> planId_ {};
      // The name of the Global Replicator task.
      shared_ptr<string> planName_ {};
      // The status of the Global Replicator task. Valid values:
      // 
      // *   CREATED
      // *   RUNNING
      // *   DELETED
      shared_ptr<string> planStatus_ {};
      // The type of the Global Replicator task. Valid values:
      // 
      // *   ACTIVE_PASSIVE: one-way backup
      // *   ACTIVE_ACTIVE: two-way backup
      shared_ptr<string> planType_ {};
      // Indicates whether consumer progress synchronization is enabled.
      // 
      // Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> syncCheckpointEnabled_ {};
      // The time when the query task was last modified.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->httpStatusCode_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetDisasterRecoveryPlanResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDisasterRecoveryPlanResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDisasterRecoveryPlanResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDisasterRecoveryPlanResponseBody::Data) };
    inline GetDisasterRecoveryPlanResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDisasterRecoveryPlanResponseBody::Data) };
    inline GetDisasterRecoveryPlanResponseBody& setData(const GetDisasterRecoveryPlanResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDisasterRecoveryPlanResponseBody& setData(GetDisasterRecoveryPlanResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline GetDisasterRecoveryPlanResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline GetDisasterRecoveryPlanResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetDisasterRecoveryPlanResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDisasterRecoveryPlanResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDisasterRecoveryPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDisasterRecoveryPlanResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details about the access denial. This parameter is returned only if the access is denied because the Resource Access Management (RAM) user does not have the required permissions.
    shared_ptr<string> accessDeniedDetail_ {};
    // The error code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetDisasterRecoveryPlanResponseBody::Data> data_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic error message.
    shared_ptr<string> dynamicMessage_ {};
    // The response code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
