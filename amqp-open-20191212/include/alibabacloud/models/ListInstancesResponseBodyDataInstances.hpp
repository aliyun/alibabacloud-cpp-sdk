// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYDATAINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYDATAINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstancesResponseBodyDataInstancesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class ListInstancesResponseBodyDataInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyDataInstances& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenewInstance, autoRenewInstance_);
      DARABONBA_PTR_TO_JSON(ClassicEndpoint, classicEndpoint_);
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(EncryptedInstance, encryptedInstance_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(KmsKeyId, kmsKeyId_);
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
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_TO_JSON(SupportEIP, supportEIP_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyDataInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenewInstance, autoRenewInstance_);
      DARABONBA_PTR_FROM_JSON(ClassicEndpoint, classicEndpoint_);
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(EncryptedInstance, encryptedInstance_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(KmsKeyId, kmsKeyId_);
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
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_FROM_JSON(SupportEIP, supportEIP_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListInstancesResponseBodyDataInstances() = default ;
    ListInstancesResponseBodyDataInstances(const ListInstancesResponseBodyDataInstances &) = default ;
    ListInstancesResponseBodyDataInstances(ListInstancesResponseBodyDataInstances &&) = default ;
    ListInstancesResponseBodyDataInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyDataInstances() = default ;
    ListInstancesResponseBodyDataInstances& operator=(const ListInstancesResponseBodyDataInstances &) = default ;
    ListInstancesResponseBodyDataInstances& operator=(ListInstancesResponseBodyDataInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenewInstance_ == nullptr
        && return this->classicEndpoint_ == nullptr && return this->edition_ == nullptr && return this->encryptedInstance_ == nullptr && return this->expireTime_ == nullptr && return this->instanceId_ == nullptr
        && return this->instanceName_ == nullptr && return this->instanceType_ == nullptr && return this->kmsKeyId_ == nullptr && return this->maxEipTps_ == nullptr && return this->maxQueue_ == nullptr
        && return this->maxTps_ == nullptr && return this->maxVhost_ == nullptr && return this->orderCreateTime_ == nullptr && return this->orderType_ == nullptr && return this->privateEndpoint_ == nullptr
        && return this->provisionedCapacity_ == nullptr && return this->publicEndpoint_ == nullptr && return this->resourceGroupId_ == nullptr && return this->status_ == nullptr && return this->storageSize_ == nullptr
        && return this->supportEIP_ == nullptr && return this->tags_ == nullptr; };
    // autoRenewInstance Field Functions 
    bool hasAutoRenewInstance() const { return this->autoRenewInstance_ != nullptr;};
    void deleteAutoRenewInstance() { this->autoRenewInstance_ = nullptr;};
    inline bool autoRenewInstance() const { DARABONBA_PTR_GET_DEFAULT(autoRenewInstance_, false) };
    inline ListInstancesResponseBodyDataInstances& setAutoRenewInstance(bool autoRenewInstance) { DARABONBA_PTR_SET_VALUE(autoRenewInstance_, autoRenewInstance) };


    // classicEndpoint Field Functions 
    bool hasClassicEndpoint() const { return this->classicEndpoint_ != nullptr;};
    void deleteClassicEndpoint() { this->classicEndpoint_ = nullptr;};
    inline string classicEndpoint() const { DARABONBA_PTR_GET_DEFAULT(classicEndpoint_, "") };
    inline ListInstancesResponseBodyDataInstances& setClassicEndpoint(string classicEndpoint) { DARABONBA_PTR_SET_VALUE(classicEndpoint_, classicEndpoint) };


    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string edition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline ListInstancesResponseBodyDataInstances& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // encryptedInstance Field Functions 
    bool hasEncryptedInstance() const { return this->encryptedInstance_ != nullptr;};
    void deleteEncryptedInstance() { this->encryptedInstance_ = nullptr;};
    inline bool encryptedInstance() const { DARABONBA_PTR_GET_DEFAULT(encryptedInstance_, false) };
    inline ListInstancesResponseBodyDataInstances& setEncryptedInstance(bool encryptedInstance) { DARABONBA_PTR_SET_VALUE(encryptedInstance_, encryptedInstance) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline ListInstancesResponseBodyDataInstances& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstancesResponseBodyDataInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListInstancesResponseBodyDataInstances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListInstancesResponseBodyDataInstances& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string kmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline ListInstancesResponseBodyDataInstances& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


    // maxEipTps Field Functions 
    bool hasMaxEipTps() const { return this->maxEipTps_ != nullptr;};
    void deleteMaxEipTps() { this->maxEipTps_ = nullptr;};
    inline int32_t maxEipTps() const { DARABONBA_PTR_GET_DEFAULT(maxEipTps_, 0) };
    inline ListInstancesResponseBodyDataInstances& setMaxEipTps(int32_t maxEipTps) { DARABONBA_PTR_SET_VALUE(maxEipTps_, maxEipTps) };


    // maxQueue Field Functions 
    bool hasMaxQueue() const { return this->maxQueue_ != nullptr;};
    void deleteMaxQueue() { this->maxQueue_ = nullptr;};
    inline int32_t maxQueue() const { DARABONBA_PTR_GET_DEFAULT(maxQueue_, 0) };
    inline ListInstancesResponseBodyDataInstances& setMaxQueue(int32_t maxQueue) { DARABONBA_PTR_SET_VALUE(maxQueue_, maxQueue) };


    // maxTps Field Functions 
    bool hasMaxTps() const { return this->maxTps_ != nullptr;};
    void deleteMaxTps() { this->maxTps_ = nullptr;};
    inline int32_t maxTps() const { DARABONBA_PTR_GET_DEFAULT(maxTps_, 0) };
    inline ListInstancesResponseBodyDataInstances& setMaxTps(int32_t maxTps) { DARABONBA_PTR_SET_VALUE(maxTps_, maxTps) };


    // maxVhost Field Functions 
    bool hasMaxVhost() const { return this->maxVhost_ != nullptr;};
    void deleteMaxVhost() { this->maxVhost_ = nullptr;};
    inline int32_t maxVhost() const { DARABONBA_PTR_GET_DEFAULT(maxVhost_, 0) };
    inline ListInstancesResponseBodyDataInstances& setMaxVhost(int32_t maxVhost) { DARABONBA_PTR_SET_VALUE(maxVhost_, maxVhost) };


    // orderCreateTime Field Functions 
    bool hasOrderCreateTime() const { return this->orderCreateTime_ != nullptr;};
    void deleteOrderCreateTime() { this->orderCreateTime_ = nullptr;};
    inline int64_t orderCreateTime() const { DARABONBA_PTR_GET_DEFAULT(orderCreateTime_, 0L) };
    inline ListInstancesResponseBodyDataInstances& setOrderCreateTime(int64_t orderCreateTime) { DARABONBA_PTR_SET_VALUE(orderCreateTime_, orderCreateTime) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ListInstancesResponseBodyDataInstances& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // privateEndpoint Field Functions 
    bool hasPrivateEndpoint() const { return this->privateEndpoint_ != nullptr;};
    void deletePrivateEndpoint() { this->privateEndpoint_ = nullptr;};
    inline string privateEndpoint() const { DARABONBA_PTR_GET_DEFAULT(privateEndpoint_, "") };
    inline ListInstancesResponseBodyDataInstances& setPrivateEndpoint(string privateEndpoint) { DARABONBA_PTR_SET_VALUE(privateEndpoint_, privateEndpoint) };


    // provisionedCapacity Field Functions 
    bool hasProvisionedCapacity() const { return this->provisionedCapacity_ != nullptr;};
    void deleteProvisionedCapacity() { this->provisionedCapacity_ = nullptr;};
    inline int32_t provisionedCapacity() const { DARABONBA_PTR_GET_DEFAULT(provisionedCapacity_, 0) };
    inline ListInstancesResponseBodyDataInstances& setProvisionedCapacity(int32_t provisionedCapacity) { DARABONBA_PTR_SET_VALUE(provisionedCapacity_, provisionedCapacity) };


    // publicEndpoint Field Functions 
    bool hasPublicEndpoint() const { return this->publicEndpoint_ != nullptr;};
    void deletePublicEndpoint() { this->publicEndpoint_ = nullptr;};
    inline string publicEndpoint() const { DARABONBA_PTR_GET_DEFAULT(publicEndpoint_, "") };
    inline ListInstancesResponseBodyDataInstances& setPublicEndpoint(string publicEndpoint) { DARABONBA_PTR_SET_VALUE(publicEndpoint_, publicEndpoint) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListInstancesResponseBodyDataInstances& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstancesResponseBodyDataInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int32_t storageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
    inline ListInstancesResponseBodyDataInstances& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    // supportEIP Field Functions 
    bool hasSupportEIP() const { return this->supportEIP_ != nullptr;};
    void deleteSupportEIP() { this->supportEIP_ = nullptr;};
    inline bool supportEIP() const { DARABONBA_PTR_GET_DEFAULT(supportEIP_, false) };
    inline ListInstancesResponseBodyDataInstances& setSupportEIP(bool supportEIP) { DARABONBA_PTR_SET_VALUE(supportEIP_, supportEIP) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListInstancesResponseBodyDataInstancesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListInstancesResponseBodyDataInstancesTags>) };
    inline vector<Models::ListInstancesResponseBodyDataInstancesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListInstancesResponseBodyDataInstancesTags>) };
    inline ListInstancesResponseBodyDataInstances& setTags(const vector<Models::ListInstancesResponseBodyDataInstancesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListInstancesResponseBodyDataInstances& setTags(vector<Models::ListInstancesResponseBodyDataInstancesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // Indicates whether the instance is automatically renewed.
    std::shared_ptr<bool> autoRenewInstance_ = nullptr;
    // The endpoint that is used to access the instance over the classic network. This parameter is no longer available.
    std::shared_ptr<string> classicEndpoint_ = nullptr;
    std::shared_ptr<string> edition_ = nullptr;
    // Indicates whether the encryption at rest feature is enabled for the instance.
    std::shared_ptr<bool> encryptedInstance_ = nullptr;
    // The timestamp that indicates when the instance expires. Unit: milliseconds.
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    // The instance ID
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The instance type.
    // 
    // *   PROFESSIONAL: Professional Edition
    // *   ENTERPRISE: Enterprise Edition
    // *   VIP: Enterprise Platinum Edition
    std::shared_ptr<string> instanceType_ = nullptr;
    // The ID of the Key Management Service (KMS) key used for the data disk.
    std::shared_ptr<string> kmsKeyId_ = nullptr;
    // The maximum number of Internet-based transactions per second (TPS) for the instance.
    std::shared_ptr<int32_t> maxEipTps_ = nullptr;
    // The maximum number of queues on the instance.
    std::shared_ptr<int32_t> maxQueue_ = nullptr;
    // The maximum number of VPC-based TPS for the instance.
    std::shared_ptr<int32_t> maxTps_ = nullptr;
    // The maximum number of vhosts on the instance.
    std::shared_ptr<int32_t> maxVhost_ = nullptr;
    // The timestamp that indicates when the order was created. Unit: milliseconds.
    std::shared_ptr<int64_t> orderCreateTime_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   PrePaid: the subscription billing method.
    // *   POST_PAID: the pay-as-you-go billing method.
    std::shared_ptr<string> orderType_ = nullptr;
    // The virtual private cloud (VPC) endpoint of the instance.
    std::shared_ptr<string> privateEndpoint_ = nullptr;
    std::shared_ptr<int32_t> provisionedCapacity_ = nullptr;
    // The public endpoint of the instance.
    std::shared_ptr<string> publicEndpoint_ = nullptr;
    // The ID of the resource group to which the instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The instance status. Valid values:
    // 
    // *   DEPLOYING: The instance is being deployed.
    // *   EXPIRED: The instance is expired.
    // *   SERVING: The instance is running.
    // *   RELEASED: The instance is released.
    std::shared_ptr<string> status_ = nullptr;
    // The disk size. Unit: GB.
    // 
    // >  For Professional Edition instances and Enterprise Edition instances, this parameter is unavailable and \\*\\*-1\\*\\* is returned.
    std::shared_ptr<int32_t> storageSize_ = nullptr;
    // Indicates whether the instance supports elastic IP addresses (EIPs).
    std::shared_ptr<bool> supportEIP_ = nullptr;
    // The tags that are added to the instance.
    std::shared_ptr<vector<Models::ListInstancesResponseBodyDataInstancesTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
