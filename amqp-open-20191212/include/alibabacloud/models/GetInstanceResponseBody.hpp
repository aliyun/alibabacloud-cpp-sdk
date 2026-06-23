// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class GetInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInstanceResponseBody() = default ;
    GetInstanceResponseBody(const GetInstanceResponseBody &) = default ;
    GetInstanceResponseBody(GetInstanceResponseBody &&) = default ;
    GetInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBody() = default ;
    GetInstanceResponseBody& operator=(const GetInstanceResponseBody &) = default ;
    GetInstanceResponseBody& operator=(GetInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AutoRenewInstance, autoRenewInstance_);
        DARABONBA_PTR_TO_JSON(ClassicEndpoint, classicEndpoint_);
        DARABONBA_PTR_TO_JSON(Edition, edition_);
        DARABONBA_PTR_TO_JSON(EncryptedInstance, encryptedInstance_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(KmsKeyId, kmsKeyId_);
        DARABONBA_PTR_TO_JSON(ListenerMode, listenerMode_);
        DARABONBA_PTR_TO_JSON(MaxConnections, maxConnections_);
        DARABONBA_PTR_TO_JSON(MaxEipTps, maxEipTps_);
        DARABONBA_PTR_TO_JSON(MaxQueue, maxQueue_);
        DARABONBA_PTR_TO_JSON(MaxTps, maxTps_);
        DARABONBA_PTR_TO_JSON(MaxVhost, maxVhost_);
        DARABONBA_PTR_TO_JSON(OrderCreateTime, orderCreateTime_);
        DARABONBA_PTR_TO_JSON(OrderType, orderType_);
        DARABONBA_PTR_TO_JSON(PrivateEndpoint, privateEndpoint_);
        DARABONBA_PTR_TO_JSON(ProvisionedCapacity, provisionedCapacity_);
        DARABONBA_PTR_TO_JSON(PublicEndpoint, publicEndpoint_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(ServerlessSwitch, serverlessSwitch_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
        DARABONBA_PTR_TO_JSON(SupportEIP, supportEIP_);
        DARABONBA_PTR_TO_JSON(SupportTracing, supportTracing_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TracingStorageTime, tracingStorageTime_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VswitchIds, vswitchIds_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoRenewInstance, autoRenewInstance_);
        DARABONBA_PTR_FROM_JSON(ClassicEndpoint, classicEndpoint_);
        DARABONBA_PTR_FROM_JSON(Edition, edition_);
        DARABONBA_PTR_FROM_JSON(EncryptedInstance, encryptedInstance_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(KmsKeyId, kmsKeyId_);
        DARABONBA_PTR_FROM_JSON(ListenerMode, listenerMode_);
        DARABONBA_PTR_FROM_JSON(MaxConnections, maxConnections_);
        DARABONBA_PTR_FROM_JSON(MaxEipTps, maxEipTps_);
        DARABONBA_PTR_FROM_JSON(MaxQueue, maxQueue_);
        DARABONBA_PTR_FROM_JSON(MaxTps, maxTps_);
        DARABONBA_PTR_FROM_JSON(MaxVhost, maxVhost_);
        DARABONBA_PTR_FROM_JSON(OrderCreateTime, orderCreateTime_);
        DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
        DARABONBA_PTR_FROM_JSON(PrivateEndpoint, privateEndpoint_);
        DARABONBA_PTR_FROM_JSON(ProvisionedCapacity, provisionedCapacity_);
        DARABONBA_PTR_FROM_JSON(PublicEndpoint, publicEndpoint_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(ServerlessSwitch, serverlessSwitch_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
        DARABONBA_PTR_FROM_JSON(SupportEIP, supportEIP_);
        DARABONBA_PTR_FROM_JSON(SupportTracing, supportTracing_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TracingStorageTime, tracingStorageTime_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VswitchIds, vswitchIds_);
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
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->autoRenewInstance_ == nullptr
        && this->classicEndpoint_ == nullptr && this->edition_ == nullptr && this->encryptedInstance_ == nullptr && this->expireTime_ == nullptr && this->instanceId_ == nullptr
        && this->instanceName_ == nullptr && this->instanceType_ == nullptr && this->kmsKeyId_ == nullptr && this->listenerMode_ == nullptr && this->maxConnections_ == nullptr
        && this->maxEipTps_ == nullptr && this->maxQueue_ == nullptr && this->maxTps_ == nullptr && this->maxVhost_ == nullptr && this->orderCreateTime_ == nullptr
        && this->orderType_ == nullptr && this->privateEndpoint_ == nullptr && this->provisionedCapacity_ == nullptr && this->publicEndpoint_ == nullptr && this->resourceGroupId_ == nullptr
        && this->securityGroupId_ == nullptr && this->serverlessSwitch_ == nullptr && this->status_ == nullptr && this->storageSize_ == nullptr && this->supportEIP_ == nullptr
        && this->supportTracing_ == nullptr && this->tags_ == nullptr && this->tracingStorageTime_ == nullptr && this->vpcId_ == nullptr && this->vswitchIds_ == nullptr; };
      // autoRenewInstance Field Functions 
      bool hasAutoRenewInstance() const { return this->autoRenewInstance_ != nullptr;};
      void deleteAutoRenewInstance() { this->autoRenewInstance_ = nullptr;};
      inline bool getAutoRenewInstance() const { DARABONBA_PTR_GET_DEFAULT(autoRenewInstance_, false) };
      inline Data& setAutoRenewInstance(bool autoRenewInstance) { DARABONBA_PTR_SET_VALUE(autoRenewInstance_, autoRenewInstance) };


      // classicEndpoint Field Functions 
      bool hasClassicEndpoint() const { return this->classicEndpoint_ != nullptr;};
      void deleteClassicEndpoint() { this->classicEndpoint_ = nullptr;};
      inline string getClassicEndpoint() const { DARABONBA_PTR_GET_DEFAULT(classicEndpoint_, "") };
      inline Data& setClassicEndpoint(string classicEndpoint) { DARABONBA_PTR_SET_VALUE(classicEndpoint_, classicEndpoint) };


      // edition Field Functions 
      bool hasEdition() const { return this->edition_ != nullptr;};
      void deleteEdition() { this->edition_ = nullptr;};
      inline string getEdition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
      inline Data& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


      // encryptedInstance Field Functions 
      bool hasEncryptedInstance() const { return this->encryptedInstance_ != nullptr;};
      void deleteEncryptedInstance() { this->encryptedInstance_ = nullptr;};
      inline bool getEncryptedInstance() const { DARABONBA_PTR_GET_DEFAULT(encryptedInstance_, false) };
      inline Data& setEncryptedInstance(bool encryptedInstance) { DARABONBA_PTR_SET_VALUE(encryptedInstance_, encryptedInstance) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
      inline Data& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Data& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline Data& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // kmsKeyId Field Functions 
      bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
      void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
      inline string getKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
      inline Data& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


      // listenerMode Field Functions 
      bool hasListenerMode() const { return this->listenerMode_ != nullptr;};
      void deleteListenerMode() { this->listenerMode_ = nullptr;};
      inline string getListenerMode() const { DARABONBA_PTR_GET_DEFAULT(listenerMode_, "") };
      inline Data& setListenerMode(string listenerMode) { DARABONBA_PTR_SET_VALUE(listenerMode_, listenerMode) };


      // maxConnections Field Functions 
      bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
      void deleteMaxConnections() { this->maxConnections_ = nullptr;};
      inline int32_t getMaxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, 0) };
      inline Data& setMaxConnections(int32_t maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


      // maxEipTps Field Functions 
      bool hasMaxEipTps() const { return this->maxEipTps_ != nullptr;};
      void deleteMaxEipTps() { this->maxEipTps_ = nullptr;};
      inline int32_t getMaxEipTps() const { DARABONBA_PTR_GET_DEFAULT(maxEipTps_, 0) };
      inline Data& setMaxEipTps(int32_t maxEipTps) { DARABONBA_PTR_SET_VALUE(maxEipTps_, maxEipTps) };


      // maxQueue Field Functions 
      bool hasMaxQueue() const { return this->maxQueue_ != nullptr;};
      void deleteMaxQueue() { this->maxQueue_ = nullptr;};
      inline int32_t getMaxQueue() const { DARABONBA_PTR_GET_DEFAULT(maxQueue_, 0) };
      inline Data& setMaxQueue(int32_t maxQueue) { DARABONBA_PTR_SET_VALUE(maxQueue_, maxQueue) };


      // maxTps Field Functions 
      bool hasMaxTps() const { return this->maxTps_ != nullptr;};
      void deleteMaxTps() { this->maxTps_ = nullptr;};
      inline int32_t getMaxTps() const { DARABONBA_PTR_GET_DEFAULT(maxTps_, 0) };
      inline Data& setMaxTps(int32_t maxTps) { DARABONBA_PTR_SET_VALUE(maxTps_, maxTps) };


      // maxVhost Field Functions 
      bool hasMaxVhost() const { return this->maxVhost_ != nullptr;};
      void deleteMaxVhost() { this->maxVhost_ = nullptr;};
      inline int32_t getMaxVhost() const { DARABONBA_PTR_GET_DEFAULT(maxVhost_, 0) };
      inline Data& setMaxVhost(int32_t maxVhost) { DARABONBA_PTR_SET_VALUE(maxVhost_, maxVhost) };


      // orderCreateTime Field Functions 
      bool hasOrderCreateTime() const { return this->orderCreateTime_ != nullptr;};
      void deleteOrderCreateTime() { this->orderCreateTime_ = nullptr;};
      inline int64_t getOrderCreateTime() const { DARABONBA_PTR_GET_DEFAULT(orderCreateTime_, 0L) };
      inline Data& setOrderCreateTime(int64_t orderCreateTime) { DARABONBA_PTR_SET_VALUE(orderCreateTime_, orderCreateTime) };


      // orderType Field Functions 
      bool hasOrderType() const { return this->orderType_ != nullptr;};
      void deleteOrderType() { this->orderType_ = nullptr;};
      inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
      inline Data& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


      // privateEndpoint Field Functions 
      bool hasPrivateEndpoint() const { return this->privateEndpoint_ != nullptr;};
      void deletePrivateEndpoint() { this->privateEndpoint_ = nullptr;};
      inline string getPrivateEndpoint() const { DARABONBA_PTR_GET_DEFAULT(privateEndpoint_, "") };
      inline Data& setPrivateEndpoint(string privateEndpoint) { DARABONBA_PTR_SET_VALUE(privateEndpoint_, privateEndpoint) };


      // provisionedCapacity Field Functions 
      bool hasProvisionedCapacity() const { return this->provisionedCapacity_ != nullptr;};
      void deleteProvisionedCapacity() { this->provisionedCapacity_ = nullptr;};
      inline int32_t getProvisionedCapacity() const { DARABONBA_PTR_GET_DEFAULT(provisionedCapacity_, 0) };
      inline Data& setProvisionedCapacity(int32_t provisionedCapacity) { DARABONBA_PTR_SET_VALUE(provisionedCapacity_, provisionedCapacity) };


      // publicEndpoint Field Functions 
      bool hasPublicEndpoint() const { return this->publicEndpoint_ != nullptr;};
      void deletePublicEndpoint() { this->publicEndpoint_ = nullptr;};
      inline string getPublicEndpoint() const { DARABONBA_PTR_GET_DEFAULT(publicEndpoint_, "") };
      inline Data& setPublicEndpoint(string publicEndpoint) { DARABONBA_PTR_SET_VALUE(publicEndpoint_, publicEndpoint) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Data& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline Data& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // serverlessSwitch Field Functions 
      bool hasServerlessSwitch() const { return this->serverlessSwitch_ != nullptr;};
      void deleteServerlessSwitch() { this->serverlessSwitch_ = nullptr;};
      inline bool getServerlessSwitch() const { DARABONBA_PTR_GET_DEFAULT(serverlessSwitch_, false) };
      inline Data& setServerlessSwitch(bool serverlessSwitch) { DARABONBA_PTR_SET_VALUE(serverlessSwitch_, serverlessSwitch) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageSize Field Functions 
      bool hasStorageSize() const { return this->storageSize_ != nullptr;};
      void deleteStorageSize() { this->storageSize_ = nullptr;};
      inline int32_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
      inline Data& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


      // supportEIP Field Functions 
      bool hasSupportEIP() const { return this->supportEIP_ != nullptr;};
      void deleteSupportEIP() { this->supportEIP_ = nullptr;};
      inline bool getSupportEIP() const { DARABONBA_PTR_GET_DEFAULT(supportEIP_, false) };
      inline Data& setSupportEIP(bool supportEIP) { DARABONBA_PTR_SET_VALUE(supportEIP_, supportEIP) };


      // supportTracing Field Functions 
      bool hasSupportTracing() const { return this->supportTracing_ != nullptr;};
      void deleteSupportTracing() { this->supportTracing_ = nullptr;};
      inline bool getSupportTracing() const { DARABONBA_PTR_GET_DEFAULT(supportTracing_, false) };
      inline Data& setSupportTracing(bool supportTracing) { DARABONBA_PTR_SET_VALUE(supportTracing_, supportTracing) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Data::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Data::Tags>) };
      inline vector<Data::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Data::Tags>) };
      inline Data& setTags(const vector<Data::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Data& setTags(vector<Data::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // tracingStorageTime Field Functions 
      bool hasTracingStorageTime() const { return this->tracingStorageTime_ != nullptr;};
      void deleteTracingStorageTime() { this->tracingStorageTime_ = nullptr;};
      inline int32_t getTracingStorageTime() const { DARABONBA_PTR_GET_DEFAULT(tracingStorageTime_, 0) };
      inline Data& setTracingStorageTime(int32_t tracingStorageTime) { DARABONBA_PTR_SET_VALUE(tracingStorageTime_, tracingStorageTime) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Data& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vswitchIds Field Functions 
      bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
      void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
      inline const vector<string> & getVswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, vector<string>) };
      inline vector<string> getVswitchIds() { DARABONBA_PTR_GET(vswitchIds_, vector<string>) };
      inline Data& setVswitchIds(const vector<string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
      inline Data& setVswitchIds(vector<string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


    protected:
      // Indicates whether auto-renewal is enabled for the instance.
      shared_ptr<bool> autoRenewInstance_ {};
      // The classic network endpoint. This parameter is deprecated.
      shared_ptr<string> classicEndpoint_ {};
      // The deployment architecture. Valid values:
      // 
      // - shared: shared architecture, which is suitable for reserved and elastic (shared) instances and pay-as-you-go instances.
      // 
      // - dedicated: dedicated architecture, which is suitable for reserved and elastic (dedicated) instances.
      shared_ptr<string> edition_ {};
      // Indicates whether storage encryption is enabled for the instance data.
      shared_ptr<bool> encryptedInstance_ {};
      // The timestamp that indicates when the instance expires, in milliseconds.
      // 
      // > The value is a long integer. Handle it with care in certain programming languages to prevent precision loss.
      shared_ptr<int64_t> expireTime_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The name of the instance. A length of 64 characters or less is recommended.
      shared_ptr<string> instanceName_ {};
      // The instance type.
      // 
      // - PROFESSIONAL: Professional Edition
      // 
      // - ENTERPRISE: Enterprise Edition
      // 
      // - VIP: Platinum Edition
      // 
      // - SERVERLESS: Serverless Edition
      shared_ptr<string> instanceType_ {};
      // The KMS key ID of the cloud disk.
      shared_ptr<string> kmsKeyId_ {};
      // The listener mode. A value of tcp_and_ssl enables both port 5672 and 5671, while ssl_only enables only port 5671.
      shared_ptr<string> listenerMode_ {};
      // The maximum number of connections.
      // 
      // For valid values, see the [ApsaraMQ for RabbitMQ purchase page](https://common-buy.aliyun.com/?commodityCode=ons_onsproxy_pre).
      shared_ptr<int32_t> maxConnections_ {};
      // The peak public TPS.
      // 
      // For valid values, see the [ApsaraMQ for RabbitMQ purchase page](https://common-buy.aliyun.com/?commodityCode=ons_onsproxy_pre).
      shared_ptr<int32_t> maxEipTps_ {};
      // The maximum number of queues for the instance.
      shared_ptr<int32_t> maxQueue_ {};
      // The peak private TPS.
      shared_ptr<int32_t> maxTps_ {};
      // The maximum number of vhosts for the instance.
      shared_ptr<int32_t> maxVhost_ {};
      // The timestamp that indicates when the order was created, in milliseconds.
      // 
      // > The value is a long integer. Handle it with care in certain programming languages to prevent precision loss.
      shared_ptr<int64_t> orderCreateTime_ {};
      // The billing method.
      // 
      // - PRE_PAID: subscription
      // 
      // - POST_PAID: pay-as-you-go
      shared_ptr<string> orderType_ {};
      // The VPC endpoint of the instance.
      shared_ptr<string> privateEndpoint_ {};
      // The reserved TPS capacity for reserved and elastic instances.
      shared_ptr<int32_t> provisionedCapacity_ {};
      // The public endpoint of the instance.
      shared_ptr<string> publicEndpoint_ {};
      // The ID of the resource group for the instance.
      shared_ptr<string> resourceGroupId_ {};
      // The security group ID used to create a PrivateLink endpoint for the instance.
      shared_ptr<string> securityGroupId_ {};
      shared_ptr<bool> serverlessSwitch_ {};
      // The instance status. Valid values:
      // 
      // - DEPLOYING: The instance is being deployed.
      // 
      // - EXPIRED: The instance has expired.
      // 
      // - SERVING: The instance is in service.
      // 
      // - RELEASED: The instance has been released.
      shared_ptr<string> status_ {};
      // The disk capacity. Unit: GB.
      // 
      // > For Professional and Enterprise Edition instances, this parameter returns **-1**.
      shared_ptr<int32_t> storageSize_ {};
      // Indicates whether the instance supports EIPs.
      shared_ptr<bool> supportEIP_ {};
      // Indicates whether the message trace feature is enabled.
      shared_ptr<bool> supportTracing_ {};
      // The list of tags.
      shared_ptr<vector<Data::Tags>> tags_ {};
      // The retention period of message traces. Unit: days. Valid values:
      // 
      // - 3: 3 days
      // 
      // - 7: 7 days
      // 
      // - 15: 15 days
      // 
      // This parameter applies only when `SupportTracing` is set to true.
      shared_ptr<int32_t> tracingStorageTime_ {};
      // The VPC ID used to create a PrivateLink endpoint for the instance.
      shared_ptr<string> vpcId_ {};
      // The VSwitch IDs used to create a PrivateLink endpoint for the instance.
      shared_ptr<vector<string>> vswitchIds_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetInstanceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetInstanceResponseBody::Data) };
    inline GetInstanceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetInstanceResponseBody::Data) };
    inline GetInstanceResponseBody& setData(const GetInstanceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetInstanceResponseBody& setData(GetInstanceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<GetInstanceResponseBody::Data> data_ {};
    // The unique ID generated for the request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
