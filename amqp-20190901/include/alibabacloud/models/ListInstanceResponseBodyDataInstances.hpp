// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERESPONSEBODYDATAINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERESPONSEBODYDATAINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListInstanceResponseBodyDataInstancesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ListInstanceResponseBodyDataInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceResponseBodyDataInstances& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(ClassicEndpoint, classicEndpoint_);
      DARABONBA_PTR_TO_JSON(Expire, expire_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(MaxEIPTPS, maxEIPTPS_);
      DARABONBA_PTR_TO_JSON(MaxQueue, maxQueue_);
      DARABONBA_PTR_TO_JSON(MaxTPS, maxTPS_);
      DARABONBA_PTR_TO_JSON(MaxVhost, maxVhost_);
      DARABONBA_PTR_TO_JSON(OrderCreate, orderCreate_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(PrivateEndpoint, privateEndpoint_);
      DARABONBA_PTR_TO_JSON(PublicEndpoint, publicEndpoint_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_TO_JSON(SupportEIP, supportEIP_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceResponseBodyDataInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(ClassicEndpoint, classicEndpoint_);
      DARABONBA_PTR_FROM_JSON(Expire, expire_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(MaxEIPTPS, maxEIPTPS_);
      DARABONBA_PTR_FROM_JSON(MaxQueue, maxQueue_);
      DARABONBA_PTR_FROM_JSON(MaxTPS, maxTPS_);
      DARABONBA_PTR_FROM_JSON(MaxVhost, maxVhost_);
      DARABONBA_PTR_FROM_JSON(OrderCreate, orderCreate_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(PrivateEndpoint, privateEndpoint_);
      DARABONBA_PTR_FROM_JSON(PublicEndpoint, publicEndpoint_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_FROM_JSON(SupportEIP, supportEIP_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListInstanceResponseBodyDataInstances() = default ;
    ListInstanceResponseBodyDataInstances(const ListInstanceResponseBodyDataInstances &) = default ;
    ListInstanceResponseBodyDataInstances(ListInstanceResponseBodyDataInstances &&) = default ;
    ListInstanceResponseBodyDataInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceResponseBodyDataInstances() = default ;
    ListInstanceResponseBodyDataInstances& operator=(const ListInstanceResponseBodyDataInstances &) = default ;
    ListInstanceResponseBodyDataInstances& operator=(ListInstanceResponseBodyDataInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && return this->classicEndpoint_ == nullptr && return this->expire_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->instanceType_ == nullptr
        && return this->maxEIPTPS_ == nullptr && return this->maxQueue_ == nullptr && return this->maxTPS_ == nullptr && return this->maxVhost_ == nullptr && return this->orderCreate_ == nullptr
        && return this->orderType_ == nullptr && return this->privateEndpoint_ == nullptr && return this->publicEndpoint_ == nullptr && return this->status_ == nullptr && return this->storageSize_ == nullptr
        && return this->supportEIP_ == nullptr && return this->tags_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline ListInstanceResponseBodyDataInstances& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // classicEndpoint Field Functions 
    bool hasClassicEndpoint() const { return this->classicEndpoint_ != nullptr;};
    void deleteClassicEndpoint() { this->classicEndpoint_ = nullptr;};
    inline string classicEndpoint() const { DARABONBA_PTR_GET_DEFAULT(classicEndpoint_, "") };
    inline ListInstanceResponseBodyDataInstances& setClassicEndpoint(string classicEndpoint) { DARABONBA_PTR_SET_VALUE(classicEndpoint_, classicEndpoint) };


    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline int64_t expire() const { DARABONBA_PTR_GET_DEFAULT(expire_, 0L) };
    inline ListInstanceResponseBodyDataInstances& setExpire(int64_t expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstanceResponseBodyDataInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListInstanceResponseBodyDataInstances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListInstanceResponseBodyDataInstances& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // maxEIPTPS Field Functions 
    bool hasMaxEIPTPS() const { return this->maxEIPTPS_ != nullptr;};
    void deleteMaxEIPTPS() { this->maxEIPTPS_ = nullptr;};
    inline int32_t maxEIPTPS() const { DARABONBA_PTR_GET_DEFAULT(maxEIPTPS_, 0) };
    inline ListInstanceResponseBodyDataInstances& setMaxEIPTPS(int32_t maxEIPTPS) { DARABONBA_PTR_SET_VALUE(maxEIPTPS_, maxEIPTPS) };


    // maxQueue Field Functions 
    bool hasMaxQueue() const { return this->maxQueue_ != nullptr;};
    void deleteMaxQueue() { this->maxQueue_ = nullptr;};
    inline int32_t maxQueue() const { DARABONBA_PTR_GET_DEFAULT(maxQueue_, 0) };
    inline ListInstanceResponseBodyDataInstances& setMaxQueue(int32_t maxQueue) { DARABONBA_PTR_SET_VALUE(maxQueue_, maxQueue) };


    // maxTPS Field Functions 
    bool hasMaxTPS() const { return this->maxTPS_ != nullptr;};
    void deleteMaxTPS() { this->maxTPS_ = nullptr;};
    inline int32_t maxTPS() const { DARABONBA_PTR_GET_DEFAULT(maxTPS_, 0) };
    inline ListInstanceResponseBodyDataInstances& setMaxTPS(int32_t maxTPS) { DARABONBA_PTR_SET_VALUE(maxTPS_, maxTPS) };


    // maxVhost Field Functions 
    bool hasMaxVhost() const { return this->maxVhost_ != nullptr;};
    void deleteMaxVhost() { this->maxVhost_ = nullptr;};
    inline int32_t maxVhost() const { DARABONBA_PTR_GET_DEFAULT(maxVhost_, 0) };
    inline ListInstanceResponseBodyDataInstances& setMaxVhost(int32_t maxVhost) { DARABONBA_PTR_SET_VALUE(maxVhost_, maxVhost) };


    // orderCreate Field Functions 
    bool hasOrderCreate() const { return this->orderCreate_ != nullptr;};
    void deleteOrderCreate() { this->orderCreate_ = nullptr;};
    inline int64_t orderCreate() const { DARABONBA_PTR_GET_DEFAULT(orderCreate_, 0L) };
    inline ListInstanceResponseBodyDataInstances& setOrderCreate(int64_t orderCreate) { DARABONBA_PTR_SET_VALUE(orderCreate_, orderCreate) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ListInstanceResponseBodyDataInstances& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // privateEndpoint Field Functions 
    bool hasPrivateEndpoint() const { return this->privateEndpoint_ != nullptr;};
    void deletePrivateEndpoint() { this->privateEndpoint_ = nullptr;};
    inline string privateEndpoint() const { DARABONBA_PTR_GET_DEFAULT(privateEndpoint_, "") };
    inline ListInstanceResponseBodyDataInstances& setPrivateEndpoint(string privateEndpoint) { DARABONBA_PTR_SET_VALUE(privateEndpoint_, privateEndpoint) };


    // publicEndpoint Field Functions 
    bool hasPublicEndpoint() const { return this->publicEndpoint_ != nullptr;};
    void deletePublicEndpoint() { this->publicEndpoint_ = nullptr;};
    inline string publicEndpoint() const { DARABONBA_PTR_GET_DEFAULT(publicEndpoint_, "") };
    inline ListInstanceResponseBodyDataInstances& setPublicEndpoint(string publicEndpoint) { DARABONBA_PTR_SET_VALUE(publicEndpoint_, publicEndpoint) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstanceResponseBodyDataInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int32_t storageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
    inline ListInstanceResponseBodyDataInstances& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    // supportEIP Field Functions 
    bool hasSupportEIP() const { return this->supportEIP_ != nullptr;};
    void deleteSupportEIP() { this->supportEIP_ = nullptr;};
    inline bool supportEIP() const { DARABONBA_PTR_GET_DEFAULT(supportEIP_, false) };
    inline ListInstanceResponseBodyDataInstances& setSupportEIP(bool supportEIP) { DARABONBA_PTR_SET_VALUE(supportEIP_, supportEIP) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::ListInstanceResponseBodyDataInstancesTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::ListInstanceResponseBodyDataInstancesTags) };
    inline Models::ListInstanceResponseBodyDataInstancesTags tags() { DARABONBA_PTR_GET(tags_, Models::ListInstanceResponseBodyDataInstancesTags) };
    inline ListInstanceResponseBodyDataInstances& setTags(const Models::ListInstanceResponseBodyDataInstancesTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListInstanceResponseBodyDataInstances& setTags(Models::ListInstanceResponseBodyDataInstancesTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<bool> autoRenew_ = nullptr;
    std::shared_ptr<string> classicEndpoint_ = nullptr;
    std::shared_ptr<int64_t> expire_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<int32_t> maxEIPTPS_ = nullptr;
    std::shared_ptr<int32_t> maxQueue_ = nullptr;
    std::shared_ptr<int32_t> maxTPS_ = nullptr;
    std::shared_ptr<int32_t> maxVhost_ = nullptr;
    std::shared_ptr<int64_t> orderCreate_ = nullptr;
    std::shared_ptr<string> orderType_ = nullptr;
    std::shared_ptr<string> privateEndpoint_ = nullptr;
    std::shared_ptr<string> publicEndpoint_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int32_t> storageSize_ = nullptr;
    std::shared_ptr<bool> supportEIP_ = nullptr;
    std::shared_ptr<Models::ListInstanceResponseBodyDataInstancesTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
