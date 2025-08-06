// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODYDEDICATEDHOSTSDEDICATEDHOSTINSTANCESINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODYDEDICATEDHOSTSDEDICATEDHOSTINSTANCESINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostInstancesInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostInstancesInstance& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceOwnerId, instanceOwnerId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(SocketId, socketId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostInstancesInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceOwnerId, instanceOwnerId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(SocketId, socketId_);
    };
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostInstancesInstance() = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostInstancesInstance(const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostInstancesInstance &) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostInstancesInstance(DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostInstancesInstance &&) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostInstancesInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostInstancesInstance() = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostInstancesInstance& operator=(const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostInstancesInstance &) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostInstancesInstance& operator=(DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostInstancesInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->instanceOwnerId_ != nullptr && this->instanceType_ != nullptr && this->socketId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostInstancesInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceOwnerId Field Functions 
    bool hasInstanceOwnerId() const { return this->instanceOwnerId_ != nullptr;};
    void deleteInstanceOwnerId() { this->instanceOwnerId_ = nullptr;};
    inline int64_t instanceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(instanceOwnerId_, 0L) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostInstancesInstance& setInstanceOwnerId(int64_t instanceOwnerId) { DARABONBA_PTR_SET_VALUE(instanceOwnerId_, instanceOwnerId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostInstancesInstance& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // socketId Field Functions 
    bool hasSocketId() const { return this->socketId_ != nullptr;};
    void deleteSocketId() { this->socketId_ = nullptr;};
    inline string socketId() const { DARABONBA_PTR_GET_DEFAULT(socketId_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostInstancesInstance& setSocketId(string socketId) { DARABONBA_PTR_SET_VALUE(socketId_, socketId) };


  protected:
    // The ID of the ECS instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the ECS instance owner.
    std::shared_ptr<int64_t> instanceOwnerId_ = nullptr;
    // The instance type of the ECS instance that was created on the dedicated host.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The ID of the socket to which the ECS instance belongs.
    std::shared_ptr<string> socketId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
