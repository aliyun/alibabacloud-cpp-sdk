// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCAPACITYRESERVATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCAPACITYRESERVATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ModifyCapacityReservationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCapacityReservationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(MinimumLoadBalancerCapacity, minimumLoadBalancerCapacity_);
      DARABONBA_PTR_TO_JSON(ResetCapacityReservation, resetCapacityReservation_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCapacityReservationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(MinimumLoadBalancerCapacity, minimumLoadBalancerCapacity_);
      DARABONBA_PTR_FROM_JSON(ResetCapacityReservation, resetCapacityReservation_);
    };
    ModifyCapacityReservationRequest() = default ;
    ModifyCapacityReservationRequest(const ModifyCapacityReservationRequest &) = default ;
    ModifyCapacityReservationRequest(ModifyCapacityReservationRequest &&) = default ;
    ModifyCapacityReservationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCapacityReservationRequest() = default ;
    ModifyCapacityReservationRequest& operator=(const ModifyCapacityReservationRequest &) = default ;
    ModifyCapacityReservationRequest& operator=(ModifyCapacityReservationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MinimumLoadBalancerCapacity : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MinimumLoadBalancerCapacity& obj) { 
        DARABONBA_PTR_TO_JSON(CapacityUnits, capacityUnits_);
      };
      friend void from_json(const Darabonba::Json& j, MinimumLoadBalancerCapacity& obj) { 
        DARABONBA_PTR_FROM_JSON(CapacityUnits, capacityUnits_);
      };
      MinimumLoadBalancerCapacity() = default ;
      MinimumLoadBalancerCapacity(const MinimumLoadBalancerCapacity &) = default ;
      MinimumLoadBalancerCapacity(MinimumLoadBalancerCapacity &&) = default ;
      MinimumLoadBalancerCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MinimumLoadBalancerCapacity() = default ;
      MinimumLoadBalancerCapacity& operator=(const MinimumLoadBalancerCapacity &) = default ;
      MinimumLoadBalancerCapacity& operator=(MinimumLoadBalancerCapacity &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->capacityUnits_ == nullptr; };
      // capacityUnits Field Functions 
      bool hasCapacityUnits() const { return this->capacityUnits_ != nullptr;};
      void deleteCapacityUnits() { this->capacityUnits_ = nullptr;};
      inline int32_t getCapacityUnits() const { DARABONBA_PTR_GET_DEFAULT(capacityUnits_, 0) };
      inline MinimumLoadBalancerCapacity& setCapacityUnits(int32_t capacityUnits) { DARABONBA_PTR_SET_VALUE(capacityUnits_, capacityUnits) };


    protected:
      shared_ptr<int32_t> capacityUnits_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->loadBalancerId_ == nullptr && this->minimumLoadBalancerCapacity_ == nullptr && this->resetCapacityReservation_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyCapacityReservationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyCapacityReservationRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline ModifyCapacityReservationRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // minimumLoadBalancerCapacity Field Functions 
    bool hasMinimumLoadBalancerCapacity() const { return this->minimumLoadBalancerCapacity_ != nullptr;};
    void deleteMinimumLoadBalancerCapacity() { this->minimumLoadBalancerCapacity_ = nullptr;};
    inline const ModifyCapacityReservationRequest::MinimumLoadBalancerCapacity & getMinimumLoadBalancerCapacity() const { DARABONBA_PTR_GET_CONST(minimumLoadBalancerCapacity_, ModifyCapacityReservationRequest::MinimumLoadBalancerCapacity) };
    inline ModifyCapacityReservationRequest::MinimumLoadBalancerCapacity getMinimumLoadBalancerCapacity() { DARABONBA_PTR_GET(minimumLoadBalancerCapacity_, ModifyCapacityReservationRequest::MinimumLoadBalancerCapacity) };
    inline ModifyCapacityReservationRequest& setMinimumLoadBalancerCapacity(const ModifyCapacityReservationRequest::MinimumLoadBalancerCapacity & minimumLoadBalancerCapacity) { DARABONBA_PTR_SET_VALUE(minimumLoadBalancerCapacity_, minimumLoadBalancerCapacity) };
    inline ModifyCapacityReservationRequest& setMinimumLoadBalancerCapacity(ModifyCapacityReservationRequest::MinimumLoadBalancerCapacity && minimumLoadBalancerCapacity) { DARABONBA_PTR_SET_RVALUE(minimumLoadBalancerCapacity_, minimumLoadBalancerCapacity) };


    // resetCapacityReservation Field Functions 
    bool hasResetCapacityReservation() const { return this->resetCapacityReservation_ != nullptr;};
    void deleteResetCapacityReservation() { this->resetCapacityReservation_ = nullptr;};
    inline bool getResetCapacityReservation() const { DARABONBA_PTR_GET_DEFAULT(resetCapacityReservation_, false) };
    inline ModifyCapacityReservationRequest& setResetCapacityReservation(bool resetCapacityReservation) { DARABONBA_PTR_SET_VALUE(resetCapacityReservation_, resetCapacityReservation) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<bool> dryRun_ {};
    // This parameter is required.
    shared_ptr<string> loadBalancerId_ {};
    shared_ptr<ModifyCapacityReservationRequest::MinimumLoadBalancerCapacity> minimumLoadBalancerCapacity_ {};
    shared_ptr<bool> resetCapacityReservation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
