// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWINSTANCEREQUESTRENEWINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENEWINSTANCEREQUESTRENEWINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class RenewInstanceRequestRenewInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewInstanceRequestRenewInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, RenewInstanceRequestRenewInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    RenewInstanceRequestRenewInstanceRequest() = default ;
    RenewInstanceRequestRenewInstanceRequest(const RenewInstanceRequestRenewInstanceRequest &) = default ;
    RenewInstanceRequestRenewInstanceRequest(RenewInstanceRequestRenewInstanceRequest &&) = default ;
    RenewInstanceRequestRenewInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewInstanceRequestRenewInstanceRequest() = default ;
    RenewInstanceRequestRenewInstanceRequest& operator=(const RenewInstanceRequestRenewInstanceRequest &) = default ;
    RenewInstanceRequestRenewInstanceRequest& operator=(RenewInstanceRequestRenewInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && return this->instanceId_ == nullptr && return this->pricingCycle_ == nullptr && return this->region_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline RenewInstanceRequestRenewInstanceRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RenewInstanceRequestRenewInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline RenewInstanceRequestRenewInstanceRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline RenewInstanceRequestRenewInstanceRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> duration_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> pricingCycle_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
