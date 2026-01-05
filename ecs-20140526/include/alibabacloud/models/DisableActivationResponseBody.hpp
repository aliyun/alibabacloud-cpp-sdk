// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEACTIVATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DISABLEACTIVATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DisableActivationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableActivationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Activation, activation_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableActivationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Activation, activation_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DisableActivationResponseBody() = default ;
    DisableActivationResponseBody(const DisableActivationResponseBody &) = default ;
    DisableActivationResponseBody(DisableActivationResponseBody &&) = default ;
    DisableActivationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableActivationResponseBody() = default ;
    DisableActivationResponseBody& operator=(const DisableActivationResponseBody &) = default ;
    DisableActivationResponseBody& operator=(DisableActivationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Activation : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Activation& obj) { 
        DARABONBA_PTR_TO_JSON(ActivationId, activationId_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DeregisteredCount, deregisteredCount_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Disabled, disabled_);
        DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(IpAddressRange, ipAddressRange_);
        DARABONBA_PTR_TO_JSON(RegisteredCount, registeredCount_);
        DARABONBA_PTR_TO_JSON(TimeToLiveInHours, timeToLiveInHours_);
      };
      friend void from_json(const Darabonba::Json& j, Activation& obj) { 
        DARABONBA_PTR_FROM_JSON(ActivationId, activationId_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DeregisteredCount, deregisteredCount_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
        DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(IpAddressRange, ipAddressRange_);
        DARABONBA_PTR_FROM_JSON(RegisteredCount, registeredCount_);
        DARABONBA_PTR_FROM_JSON(TimeToLiveInHours, timeToLiveInHours_);
      };
      Activation() = default ;
      Activation(const Activation &) = default ;
      Activation(Activation &&) = default ;
      Activation(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Activation() = default ;
      Activation& operator=(const Activation &) = default ;
      Activation& operator=(Activation &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->activationId_ == nullptr
        && this->creationTime_ == nullptr && this->deregisteredCount_ == nullptr && this->description_ == nullptr && this->disabled_ == nullptr && this->instanceCount_ == nullptr
        && this->instanceName_ == nullptr && this->ipAddressRange_ == nullptr && this->registeredCount_ == nullptr && this->timeToLiveInHours_ == nullptr; };
      // activationId Field Functions 
      bool hasActivationId() const { return this->activationId_ != nullptr;};
      void deleteActivationId() { this->activationId_ = nullptr;};
      inline string getActivationId() const { DARABONBA_PTR_GET_DEFAULT(activationId_, "") };
      inline Activation& setActivationId(string activationId) { DARABONBA_PTR_SET_VALUE(activationId_, activationId) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Activation& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // deregisteredCount Field Functions 
      bool hasDeregisteredCount() const { return this->deregisteredCount_ != nullptr;};
      void deleteDeregisteredCount() { this->deregisteredCount_ = nullptr;};
      inline int32_t getDeregisteredCount() const { DARABONBA_PTR_GET_DEFAULT(deregisteredCount_, 0) };
      inline Activation& setDeregisteredCount(int32_t deregisteredCount) { DARABONBA_PTR_SET_VALUE(deregisteredCount_, deregisteredCount) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Activation& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // disabled Field Functions 
      bool hasDisabled() const { return this->disabled_ != nullptr;};
      void deleteDisabled() { this->disabled_ = nullptr;};
      inline bool getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
      inline Activation& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


      // instanceCount Field Functions 
      bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
      void deleteInstanceCount() { this->instanceCount_ = nullptr;};
      inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
      inline Activation& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Activation& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // ipAddressRange Field Functions 
      bool hasIpAddressRange() const { return this->ipAddressRange_ != nullptr;};
      void deleteIpAddressRange() { this->ipAddressRange_ = nullptr;};
      inline string getIpAddressRange() const { DARABONBA_PTR_GET_DEFAULT(ipAddressRange_, "") };
      inline Activation& setIpAddressRange(string ipAddressRange) { DARABONBA_PTR_SET_VALUE(ipAddressRange_, ipAddressRange) };


      // registeredCount Field Functions 
      bool hasRegisteredCount() const { return this->registeredCount_ != nullptr;};
      void deleteRegisteredCount() { this->registeredCount_ = nullptr;};
      inline int32_t getRegisteredCount() const { DARABONBA_PTR_GET_DEFAULT(registeredCount_, 0) };
      inline Activation& setRegisteredCount(int32_t registeredCount) { DARABONBA_PTR_SET_VALUE(registeredCount_, registeredCount) };


      // timeToLiveInHours Field Functions 
      bool hasTimeToLiveInHours() const { return this->timeToLiveInHours_ != nullptr;};
      void deleteTimeToLiveInHours() { this->timeToLiveInHours_ = nullptr;};
      inline int64_t getTimeToLiveInHours() const { DARABONBA_PTR_GET_DEFAULT(timeToLiveInHours_, 0L) };
      inline Activation& setTimeToLiveInHours(int64_t timeToLiveInHours) { DARABONBA_PTR_SET_VALUE(timeToLiveInHours_, timeToLiveInHours) };


    protected:
      // The ID of the activation code.
      shared_ptr<string> activationId_ {};
      // The number of instances that were deregistered.
      shared_ptr<string> creationTime_ {};
      // The maximum number of times that the activation code can be used to register managed instances.
      shared_ptr<int32_t> deregisteredCount_ {};
      // The number of registered instances.
      shared_ptr<string> description_ {};
      // The IP addresses of the hosts that can use the activation code.
      shared_ptr<bool> disabled_ {};
      // The description of the activation code.
      shared_ptr<int32_t> instanceCount_ {};
      // Indicates whether the activation code is disabled.
      shared_ptr<string> instanceName_ {};
      // The validity period of the activation code. Unit: hours.
      shared_ptr<string> ipAddressRange_ {};
      // The default prefix of the instance name.
      shared_ptr<int32_t> registeredCount_ {};
      // The activation code ID.
      shared_ptr<int64_t> timeToLiveInHours_ {};
    };

    virtual bool empty() const override { return this->activation_ == nullptr
        && this->requestId_ == nullptr; };
    // activation Field Functions 
    bool hasActivation() const { return this->activation_ != nullptr;};
    void deleteActivation() { this->activation_ = nullptr;};
    inline const DisableActivationResponseBody::Activation & getActivation() const { DARABONBA_PTR_GET_CONST(activation_, DisableActivationResponseBody::Activation) };
    inline DisableActivationResponseBody::Activation getActivation() { DARABONBA_PTR_GET(activation_, DisableActivationResponseBody::Activation) };
    inline DisableActivationResponseBody& setActivation(const DisableActivationResponseBody::Activation & activation) { DARABONBA_PTR_SET_VALUE(activation_, activation) };
    inline DisableActivationResponseBody& setActivation(DisableActivationResponseBody::Activation && activation) { DARABONBA_PTR_SET_RVALUE(activation_, activation) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DisableActivationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The time when the activation code was created.
    shared_ptr<DisableActivationResponseBody::Activation> activation_ {};
    // Details about the activation code and its usage information.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
