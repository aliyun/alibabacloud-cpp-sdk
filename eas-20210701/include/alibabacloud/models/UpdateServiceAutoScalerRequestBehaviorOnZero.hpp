// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEAUTOSCALERREQUESTBEHAVIORONZERO_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEAUTOSCALERREQUESTBEHAVIORONZERO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateServiceAutoScalerRequestBehaviorOnZero : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceAutoScalerRequestBehaviorOnZero& obj) { 
      DARABONBA_PTR_TO_JSON(scaleDownGracePeriodSeconds, scaleDownGracePeriodSeconds_);
      DARABONBA_PTR_TO_JSON(scaleUpActivationReplicas, scaleUpActivationReplicas_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceAutoScalerRequestBehaviorOnZero& obj) { 
      DARABONBA_PTR_FROM_JSON(scaleDownGracePeriodSeconds, scaleDownGracePeriodSeconds_);
      DARABONBA_PTR_FROM_JSON(scaleUpActivationReplicas, scaleUpActivationReplicas_);
    };
    UpdateServiceAutoScalerRequestBehaviorOnZero() = default ;
    UpdateServiceAutoScalerRequestBehaviorOnZero(const UpdateServiceAutoScalerRequestBehaviorOnZero &) = default ;
    UpdateServiceAutoScalerRequestBehaviorOnZero(UpdateServiceAutoScalerRequestBehaviorOnZero &&) = default ;
    UpdateServiceAutoScalerRequestBehaviorOnZero(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceAutoScalerRequestBehaviorOnZero() = default ;
    UpdateServiceAutoScalerRequestBehaviorOnZero& operator=(const UpdateServiceAutoScalerRequestBehaviorOnZero &) = default ;
    UpdateServiceAutoScalerRequestBehaviorOnZero& operator=(UpdateServiceAutoScalerRequestBehaviorOnZero &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->scaleDownGracePeriodSeconds_ != nullptr
        && this->scaleUpActivationReplicas_ != nullptr; };
    // scaleDownGracePeriodSeconds Field Functions 
    bool hasScaleDownGracePeriodSeconds() const { return this->scaleDownGracePeriodSeconds_ != nullptr;};
    void deleteScaleDownGracePeriodSeconds() { this->scaleDownGracePeriodSeconds_ = nullptr;};
    inline int32_t scaleDownGracePeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(scaleDownGracePeriodSeconds_, 0) };
    inline UpdateServiceAutoScalerRequestBehaviorOnZero& setScaleDownGracePeriodSeconds(int32_t scaleDownGracePeriodSeconds) { DARABONBA_PTR_SET_VALUE(scaleDownGracePeriodSeconds_, scaleDownGracePeriodSeconds) };


    // scaleUpActivationReplicas Field Functions 
    bool hasScaleUpActivationReplicas() const { return this->scaleUpActivationReplicas_ != nullptr;};
    void deleteScaleUpActivationReplicas() { this->scaleUpActivationReplicas_ = nullptr;};
    inline int32_t scaleUpActivationReplicas() const { DARABONBA_PTR_GET_DEFAULT(scaleUpActivationReplicas_, 0) };
    inline UpdateServiceAutoScalerRequestBehaviorOnZero& setScaleUpActivationReplicas(int32_t scaleUpActivationReplicas) { DARABONBA_PTR_SET_VALUE(scaleUpActivationReplicas_, scaleUpActivationReplicas) };


  protected:
    // The time window that is required before the number of instances is reduced to 0. Default value: 600. The number of instances can be reduced to 0 only if no request is available or no traffic exists in the specified time window.
    std::shared_ptr<int32_t> scaleDownGracePeriodSeconds_ = nullptr;
    // The number of instances that you want to create at a time if the number of instances is scaled out from 0. Default value: 1.
    std::shared_ptr<int32_t> scaleUpActivationReplicas_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
