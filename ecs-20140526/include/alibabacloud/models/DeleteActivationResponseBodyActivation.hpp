// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEACTIVATIONRESPONSEBODYACTIVATION_HPP_
#define ALIBABACLOUD_MODELS_DELETEACTIVATIONRESPONSEBODYACTIVATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DeleteActivationResponseBodyActivation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteActivationResponseBodyActivation& obj) { 
      DARABONBA_PTR_TO_JSON(ActivationId, activationId_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DeregisteredCount, deregisteredCount_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(IpAddressRange, ipAddressRange_);
      DARABONBA_PTR_TO_JSON(RegisteredCount, registeredCount_);
      DARABONBA_PTR_TO_JSON(TimeToLiveInHours, timeToLiveInHours_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteActivationResponseBodyActivation& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivationId, activationId_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DeregisteredCount, deregisteredCount_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(IpAddressRange, ipAddressRange_);
      DARABONBA_PTR_FROM_JSON(RegisteredCount, registeredCount_);
      DARABONBA_PTR_FROM_JSON(TimeToLiveInHours, timeToLiveInHours_);
    };
    DeleteActivationResponseBodyActivation() = default ;
    DeleteActivationResponseBodyActivation(const DeleteActivationResponseBodyActivation &) = default ;
    DeleteActivationResponseBodyActivation(DeleteActivationResponseBodyActivation &&) = default ;
    DeleteActivationResponseBodyActivation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteActivationResponseBodyActivation() = default ;
    DeleteActivationResponseBodyActivation& operator=(const DeleteActivationResponseBodyActivation &) = default ;
    DeleteActivationResponseBodyActivation& operator=(DeleteActivationResponseBodyActivation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activationId_ != nullptr
        && this->creationTime_ != nullptr && this->deregisteredCount_ != nullptr && this->description_ != nullptr && this->instanceCount_ != nullptr && this->instanceName_ != nullptr
        && this->ipAddressRange_ != nullptr && this->registeredCount_ != nullptr && this->timeToLiveInHours_ != nullptr; };
    // activationId Field Functions 
    bool hasActivationId() const { return this->activationId_ != nullptr;};
    void deleteActivationId() { this->activationId_ = nullptr;};
    inline string activationId() const { DARABONBA_PTR_GET_DEFAULT(activationId_, "") };
    inline DeleteActivationResponseBodyActivation& setActivationId(string activationId) { DARABONBA_PTR_SET_VALUE(activationId_, activationId) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DeleteActivationResponseBodyActivation& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // deregisteredCount Field Functions 
    bool hasDeregisteredCount() const { return this->deregisteredCount_ != nullptr;};
    void deleteDeregisteredCount() { this->deregisteredCount_ = nullptr;};
    inline int32_t deregisteredCount() const { DARABONBA_PTR_GET_DEFAULT(deregisteredCount_, 0) };
    inline DeleteActivationResponseBodyActivation& setDeregisteredCount(int32_t deregisteredCount) { DARABONBA_PTR_SET_VALUE(deregisteredCount_, deregisteredCount) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DeleteActivationResponseBodyActivation& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline DeleteActivationResponseBodyActivation& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DeleteActivationResponseBodyActivation& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // ipAddressRange Field Functions 
    bool hasIpAddressRange() const { return this->ipAddressRange_ != nullptr;};
    void deleteIpAddressRange() { this->ipAddressRange_ = nullptr;};
    inline string ipAddressRange() const { DARABONBA_PTR_GET_DEFAULT(ipAddressRange_, "") };
    inline DeleteActivationResponseBodyActivation& setIpAddressRange(string ipAddressRange) { DARABONBA_PTR_SET_VALUE(ipAddressRange_, ipAddressRange) };


    // registeredCount Field Functions 
    bool hasRegisteredCount() const { return this->registeredCount_ != nullptr;};
    void deleteRegisteredCount() { this->registeredCount_ = nullptr;};
    inline int32_t registeredCount() const { DARABONBA_PTR_GET_DEFAULT(registeredCount_, 0) };
    inline DeleteActivationResponseBodyActivation& setRegisteredCount(int32_t registeredCount) { DARABONBA_PTR_SET_VALUE(registeredCount_, registeredCount) };


    // timeToLiveInHours Field Functions 
    bool hasTimeToLiveInHours() const { return this->timeToLiveInHours_ != nullptr;};
    void deleteTimeToLiveInHours() { this->timeToLiveInHours_ = nullptr;};
    inline int64_t timeToLiveInHours() const { DARABONBA_PTR_GET_DEFAULT(timeToLiveInHours_, 0L) };
    inline DeleteActivationResponseBodyActivation& setTimeToLiveInHours(int64_t timeToLiveInHours) { DARABONBA_PTR_SET_VALUE(timeToLiveInHours_, timeToLiveInHours) };


  protected:
    // The ID of the activation code.
    std::shared_ptr<string> activationId_ = nullptr;
    // The time when the activation code was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The number of instances that were deregistered.
    std::shared_ptr<int32_t> deregisteredCount_ = nullptr;
    // The description of the activation code.
    std::shared_ptr<string> description_ = nullptr;
    // The maximum number of times that the activation code can be used to register managed instances.
    std::shared_ptr<int32_t> instanceCount_ = nullptr;
    // The default instance name prefix.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The IP addresses of the hosts that are allowed to use the activation code.
    std::shared_ptr<string> ipAddressRange_ = nullptr;
    // The number of instances that were registered.
    std::shared_ptr<int32_t> registeredCount_ = nullptr;
    // The validity period of the activation code. Unit: hours.
    std::shared_ptr<int64_t> timeToLiveInHours_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
