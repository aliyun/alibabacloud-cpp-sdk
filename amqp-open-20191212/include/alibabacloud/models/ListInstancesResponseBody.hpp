// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODY_HPP_
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
  class ListInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListInstancesResponseBody() = default ;
    ListInstancesResponseBody(const ListInstancesResponseBody &) = default ;
    ListInstancesResponseBody(ListInstancesResponseBody &&) = default ;
    ListInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBody() = default ;
    ListInstancesResponseBody& operator=(const ListInstancesResponseBody &) = default ;
    ListInstancesResponseBody& operator=(ListInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Instances, instances_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Instances, instances_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
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
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(VswitchIds, vswitchIds_);
        };
        friend void from_json(const Darabonba::Json& j, Instances& obj) { 
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
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(VswitchIds, vswitchIds_);
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
        && this->instanceName_ == nullptr && this->instanceType_ == nullptr && this->kmsKeyId_ == nullptr && this->listenerMode_ == nullptr && this->maxEipTps_ == nullptr
        && this->maxQueue_ == nullptr && this->maxTps_ == nullptr && this->maxVhost_ == nullptr && this->orderCreateTime_ == nullptr && this->orderType_ == nullptr
        && this->privateEndpoint_ == nullptr && this->provisionedCapacity_ == nullptr && this->publicEndpoint_ == nullptr && this->resourceGroupId_ == nullptr && this->securityGroupId_ == nullptr
        && this->serverlessSwitch_ == nullptr && this->status_ == nullptr && this->storageSize_ == nullptr && this->supportEIP_ == nullptr && this->tags_ == nullptr
        && this->vpcId_ == nullptr && this->vswitchIds_ == nullptr; };
        // autoRenewInstance Field Functions 
        bool hasAutoRenewInstance() const { return this->autoRenewInstance_ != nullptr;};
        void deleteAutoRenewInstance() { this->autoRenewInstance_ = nullptr;};
        inline bool getAutoRenewInstance() const { DARABONBA_PTR_GET_DEFAULT(autoRenewInstance_, false) };
        inline Instances& setAutoRenewInstance(bool autoRenewInstance) { DARABONBA_PTR_SET_VALUE(autoRenewInstance_, autoRenewInstance) };


        // classicEndpoint Field Functions 
        bool hasClassicEndpoint() const { return this->classicEndpoint_ != nullptr;};
        void deleteClassicEndpoint() { this->classicEndpoint_ = nullptr;};
        inline string getClassicEndpoint() const { DARABONBA_PTR_GET_DEFAULT(classicEndpoint_, "") };
        inline Instances& setClassicEndpoint(string classicEndpoint) { DARABONBA_PTR_SET_VALUE(classicEndpoint_, classicEndpoint) };


        // edition Field Functions 
        bool hasEdition() const { return this->edition_ != nullptr;};
        void deleteEdition() { this->edition_ = nullptr;};
        inline string getEdition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
        inline Instances& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


        // encryptedInstance Field Functions 
        bool hasEncryptedInstance() const { return this->encryptedInstance_ != nullptr;};
        void deleteEncryptedInstance() { this->encryptedInstance_ = nullptr;};
        inline bool getEncryptedInstance() const { DARABONBA_PTR_GET_DEFAULT(encryptedInstance_, false) };
        inline Instances& setEncryptedInstance(bool encryptedInstance) { DARABONBA_PTR_SET_VALUE(encryptedInstance_, encryptedInstance) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
        inline Instances& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Instances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline Instances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline Instances& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // kmsKeyId Field Functions 
        bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
        void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
        inline string getKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
        inline Instances& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


        // listenerMode Field Functions 
        bool hasListenerMode() const { return this->listenerMode_ != nullptr;};
        void deleteListenerMode() { this->listenerMode_ = nullptr;};
        inline string getListenerMode() const { DARABONBA_PTR_GET_DEFAULT(listenerMode_, "") };
        inline Instances& setListenerMode(string listenerMode) { DARABONBA_PTR_SET_VALUE(listenerMode_, listenerMode) };


        // maxEipTps Field Functions 
        bool hasMaxEipTps() const { return this->maxEipTps_ != nullptr;};
        void deleteMaxEipTps() { this->maxEipTps_ = nullptr;};
        inline int32_t getMaxEipTps() const { DARABONBA_PTR_GET_DEFAULT(maxEipTps_, 0) };
        inline Instances& setMaxEipTps(int32_t maxEipTps) { DARABONBA_PTR_SET_VALUE(maxEipTps_, maxEipTps) };


        // maxQueue Field Functions 
        bool hasMaxQueue() const { return this->maxQueue_ != nullptr;};
        void deleteMaxQueue() { this->maxQueue_ = nullptr;};
        inline int32_t getMaxQueue() const { DARABONBA_PTR_GET_DEFAULT(maxQueue_, 0) };
        inline Instances& setMaxQueue(int32_t maxQueue) { DARABONBA_PTR_SET_VALUE(maxQueue_, maxQueue) };


        // maxTps Field Functions 
        bool hasMaxTps() const { return this->maxTps_ != nullptr;};
        void deleteMaxTps() { this->maxTps_ = nullptr;};
        inline int32_t getMaxTps() const { DARABONBA_PTR_GET_DEFAULT(maxTps_, 0) };
        inline Instances& setMaxTps(int32_t maxTps) { DARABONBA_PTR_SET_VALUE(maxTps_, maxTps) };


        // maxVhost Field Functions 
        bool hasMaxVhost() const { return this->maxVhost_ != nullptr;};
        void deleteMaxVhost() { this->maxVhost_ = nullptr;};
        inline int32_t getMaxVhost() const { DARABONBA_PTR_GET_DEFAULT(maxVhost_, 0) };
        inline Instances& setMaxVhost(int32_t maxVhost) { DARABONBA_PTR_SET_VALUE(maxVhost_, maxVhost) };


        // orderCreateTime Field Functions 
        bool hasOrderCreateTime() const { return this->orderCreateTime_ != nullptr;};
        void deleteOrderCreateTime() { this->orderCreateTime_ = nullptr;};
        inline int64_t getOrderCreateTime() const { DARABONBA_PTR_GET_DEFAULT(orderCreateTime_, 0L) };
        inline Instances& setOrderCreateTime(int64_t orderCreateTime) { DARABONBA_PTR_SET_VALUE(orderCreateTime_, orderCreateTime) };


        // orderType Field Functions 
        bool hasOrderType() const { return this->orderType_ != nullptr;};
        void deleteOrderType() { this->orderType_ = nullptr;};
        inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
        inline Instances& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


        // privateEndpoint Field Functions 
        bool hasPrivateEndpoint() const { return this->privateEndpoint_ != nullptr;};
        void deletePrivateEndpoint() { this->privateEndpoint_ = nullptr;};
        inline string getPrivateEndpoint() const { DARABONBA_PTR_GET_DEFAULT(privateEndpoint_, "") };
        inline Instances& setPrivateEndpoint(string privateEndpoint) { DARABONBA_PTR_SET_VALUE(privateEndpoint_, privateEndpoint) };


        // provisionedCapacity Field Functions 
        bool hasProvisionedCapacity() const { return this->provisionedCapacity_ != nullptr;};
        void deleteProvisionedCapacity() { this->provisionedCapacity_ = nullptr;};
        inline int32_t getProvisionedCapacity() const { DARABONBA_PTR_GET_DEFAULT(provisionedCapacity_, 0) };
        inline Instances& setProvisionedCapacity(int32_t provisionedCapacity) { DARABONBA_PTR_SET_VALUE(provisionedCapacity_, provisionedCapacity) };


        // publicEndpoint Field Functions 
        bool hasPublicEndpoint() const { return this->publicEndpoint_ != nullptr;};
        void deletePublicEndpoint() { this->publicEndpoint_ = nullptr;};
        inline string getPublicEndpoint() const { DARABONBA_PTR_GET_DEFAULT(publicEndpoint_, "") };
        inline Instances& setPublicEndpoint(string publicEndpoint) { DARABONBA_PTR_SET_VALUE(publicEndpoint_, publicEndpoint) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Instances& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
        inline Instances& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


        // serverlessSwitch Field Functions 
        bool hasServerlessSwitch() const { return this->serverlessSwitch_ != nullptr;};
        void deleteServerlessSwitch() { this->serverlessSwitch_ = nullptr;};
        inline bool getServerlessSwitch() const { DARABONBA_PTR_GET_DEFAULT(serverlessSwitch_, false) };
        inline Instances& setServerlessSwitch(bool serverlessSwitch) { DARABONBA_PTR_SET_VALUE(serverlessSwitch_, serverlessSwitch) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Instances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // storageSize Field Functions 
        bool hasStorageSize() const { return this->storageSize_ != nullptr;};
        void deleteStorageSize() { this->storageSize_ = nullptr;};
        inline int32_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
        inline Instances& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


        // supportEIP Field Functions 
        bool hasSupportEIP() const { return this->supportEIP_ != nullptr;};
        void deleteSupportEIP() { this->supportEIP_ = nullptr;};
        inline bool getSupportEIP() const { DARABONBA_PTR_GET_DEFAULT(supportEIP_, false) };
        inline Instances& setSupportEIP(bool supportEIP) { DARABONBA_PTR_SET_VALUE(supportEIP_, supportEIP) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<Instances::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Instances::Tags>) };
        inline vector<Instances::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Instances::Tags>) };
        inline Instances& setTags(const vector<Instances::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Instances& setTags(vector<Instances::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline Instances& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vswitchIds Field Functions 
        bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
        void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
        inline const vector<string> & getVswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, vector<string>) };
        inline vector<string> getVswitchIds() { DARABONBA_PTR_GET(vswitchIds_, vector<string>) };
        inline Instances& setVswitchIds(const vector<string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
        inline Instances& setVswitchIds(vector<string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


      protected:
        // Indicates whether auto-renewal is enabled for the instance.
        shared_ptr<bool> autoRenewInstance_ {};
        // The classic network endpoint. This parameter is deprecated.
        shared_ptr<string> classicEndpoint_ {};
        // The deployment architecture, which is applicable only to Serverless Edition instances. Valid values:
        // 
        // - shared: A shared architecture, used for reserved, elastic (shared), and pay-as-you-go instances.
        // 
        // - dedicated: A dedicated architecture, used for reserved and elastic (dedicated) instances.
        shared_ptr<string> edition_ {};
        // Indicates whether storage encryption is enabled for the instance.
        shared_ptr<bool> encryptedInstance_ {};
        // The expiration timestamp of the instance, in milliseconds.
        shared_ptr<int64_t> expireTime_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The instance name.
        shared_ptr<string> instanceName_ {};
        // The instance type. Valid values:
        // 
        // - professional: Professional Edition
        // 
        // - enterprise: Enterprise Edition
        // 
        // - vip: Platinum Edition
        // 
        // <props="china">
        // 
        // - serverless: Serverless Edition
        shared_ptr<string> instanceType_ {};
        // The ID of the KMS key used for data disk encryption.
        shared_ptr<string> kmsKeyId_ {};
        // The port listener mode of the instance. `tcp_and_ssl` enables both port `5672` and port `5671`, while `ssl_only` enables only port `5671`.
        shared_ptr<string> listenerMode_ {};
        // The peak transactions per second (TPS) of the instance over the public network.
        shared_ptr<int32_t> maxEipTps_ {};
        // The maximum number of queues for the instance.
        shared_ptr<int32_t> maxQueue_ {};
        // The peak transactions per second (TPS) of the instance over the private network.
        shared_ptr<int32_t> maxTps_ {};
        // The maximum number of vhosts for the instance.
        shared_ptr<int32_t> maxVhost_ {};
        // The creation timestamp of the order, in milliseconds.
        shared_ptr<int64_t> orderCreateTime_ {};
        // The billing method. Valid values:
        // 
        // - PRE_PAID: The instance uses the subscription billing method.
        // 
        // - POST_PAID: The instance uses the pay-as-you-go billing method.
        shared_ptr<string> orderType_ {};
        // The VPC endpoint of the instance.
        shared_ptr<string> privateEndpoint_ {};
        // The reserved TPS capacity for reserved and elastic instances.
        shared_ptr<int32_t> provisionedCapacity_ {};
        // The public endpoint of the instance.
        shared_ptr<string> publicEndpoint_ {};
        // The resource group ID.
        shared_ptr<string> resourceGroupId_ {};
        // The ID of the security group to which the instance belongs. This security group is used for PrivateLink endpoint creation.
        shared_ptr<string> securityGroupId_ {};
        shared_ptr<bool> serverlessSwitch_ {};
        // The instance status. Valid values:
        // 
        // - DEPLOYING: The instance is being deployed.
        // 
        // - EXPIRED: The instance has expired.
        // 
        // - SERVING: The instance is running.
        // 
        // - RELEASED: The instance is released.
        shared_ptr<string> status_ {};
        // The storage capacity of the disk. Unit: GB.
        // 
        // > This parameter returns a value of **-1** for Professional Edition and Enterprise Edition instances, to which it does not apply.
        shared_ptr<int32_t> storageSize_ {};
        // Indicates whether the instance supports EIPs.
        shared_ptr<bool> supportEIP_ {};
        // The tags attached to the instance.
        shared_ptr<vector<Instances::Tags>> tags_ {};
        // The ID of the VPC in which the instance resides. This VPC is used for PrivateLink endpoint creation.
        shared_ptr<string> vpcId_ {};
        // The IDs of the VSwitches to which the instance is connected. These VSwitches are used for PrivateLink endpoint creation.
        shared_ptr<vector<string>> vswitchIds_ {};
      };

      virtual bool empty() const override { return this->instances_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
      // instances Field Functions 
      bool hasInstances() const { return this->instances_ != nullptr;};
      void deleteInstances() { this->instances_ = nullptr;};
      inline const vector<Data::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<Data::Instances>) };
      inline vector<Data::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<Data::Instances>) };
      inline Data& setInstances(const vector<Data::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
      inline Data& setInstances(vector<Data::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Data& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    protected:
      // A list of instances.
      shared_ptr<vector<Data::Instances>> instances_ {};
      // The maximum number of entries returned per page.
      shared_ptr<int32_t> maxResults_ {};
      // The token for the next page of results. If this field is empty, it means all results have been returned.
      shared_ptr<string> nextToken_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListInstancesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListInstancesResponseBody::Data) };
    inline ListInstancesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListInstancesResponseBody::Data) };
    inline ListInstancesResponseBody& setData(const ListInstancesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListInstancesResponseBody& setData(ListInstancesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<ListInstancesResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
