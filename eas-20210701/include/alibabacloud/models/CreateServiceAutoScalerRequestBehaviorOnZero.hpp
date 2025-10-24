// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEAUTOSCALERREQUESTBEHAVIORONZERO_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEAUTOSCALERREQUESTBEHAVIORONZERO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateServiceAutoScalerRequestBehaviorOnZero : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceAutoScalerRequestBehaviorOnZero& obj) { 
      DARABONBA_PTR_TO_JSON(scaleDownGracePeriodSeconds, scaleDownGracePeriodSeconds_);
      DARABONBA_PTR_TO_JSON(scaleUpActivationReplicas, scaleUpActivationReplicas_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceAutoScalerRequestBehaviorOnZero& obj) { 
      DARABONBA_PTR_FROM_JSON(scaleDownGracePeriodSeconds, scaleDownGracePeriodSeconds_);
      DARABONBA_PTR_FROM_JSON(scaleUpActivationReplicas, scaleUpActivationReplicas_);
    };
    CreateServiceAutoScalerRequestBehaviorOnZero() = default ;
    CreateServiceAutoScalerRequestBehaviorOnZero(const CreateServiceAutoScalerRequestBehaviorOnZero &) = default ;
    CreateServiceAutoScalerRequestBehaviorOnZero(CreateServiceAutoScalerRequestBehaviorOnZero &&) = default ;
    CreateServiceAutoScalerRequestBehaviorOnZero(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceAutoScalerRequestBehaviorOnZero() = default ;
    CreateServiceAutoScalerRequestBehaviorOnZero& operator=(const CreateServiceAutoScalerRequestBehaviorOnZero &) = default ;
    CreateServiceAutoScalerRequestBehaviorOnZero& operator=(CreateServiceAutoScalerRequestBehaviorOnZero &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scaleDownGracePeriodSeconds_ == nullptr
        && return this->scaleUpActivationReplicas_ == nullptr; };
    // scaleDownGracePeriodSeconds Field Functions 
    bool hasScaleDownGracePeriodSeconds() const { return this->scaleDownGracePeriodSeconds_ != nullptr;};
    void deleteScaleDownGracePeriodSeconds() { this->scaleDownGracePeriodSeconds_ = nullptr;};
    inline int32_t scaleDownGracePeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(scaleDownGracePeriodSeconds_, 0) };
    inline CreateServiceAutoScalerRequestBehaviorOnZero& setScaleDownGracePeriodSeconds(int32_t scaleDownGracePeriodSeconds) { DARABONBA_PTR_SET_VALUE(scaleDownGracePeriodSeconds_, scaleDownGracePeriodSeconds) };


    // scaleUpActivationReplicas Field Functions 
    bool hasScaleUpActivationReplicas() const { return this->scaleUpActivationReplicas_ != nullptr;};
    void deleteScaleUpActivationReplicas() { this->scaleUpActivationReplicas_ = nullptr;};
    inline int32_t scaleUpActivationReplicas() const { DARABONBA_PTR_GET_DEFAULT(scaleUpActivationReplicas_, 0) };
    inline CreateServiceAutoScalerRequestBehaviorOnZero& setScaleUpActivationReplicas(int32_t scaleUpActivationReplicas) { DARABONBA_PTR_SET_VALUE(scaleUpActivationReplicas_, scaleUpActivationReplicas) };


  protected:
    // The time window that is required before the number of instances is reduced to 0. The number of instances can be reduced to 0 only if no request is available or no traffic exists in the specified time window. Default value: 600.
    std::shared_ptr<int32_t> scaleDownGracePeriodSeconds_ = nullptr;
    // The number of instances that you want to create at a time if the number of instances is 0. Default value: 1.
    std::shared_ptr<int32_t> scaleUpActivationReplicas_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
