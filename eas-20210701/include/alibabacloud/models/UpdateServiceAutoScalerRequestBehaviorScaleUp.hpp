// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEAUTOSCALERREQUESTBEHAVIORSCALEUP_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEAUTOSCALERREQUESTBEHAVIORSCALEUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateServiceAutoScalerRequestBehaviorScaleUp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceAutoScalerRequestBehaviorScaleUp& obj) { 
      DARABONBA_PTR_TO_JSON(stabilizationWindowSeconds, stabilizationWindowSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceAutoScalerRequestBehaviorScaleUp& obj) { 
      DARABONBA_PTR_FROM_JSON(stabilizationWindowSeconds, stabilizationWindowSeconds_);
    };
    UpdateServiceAutoScalerRequestBehaviorScaleUp() = default ;
    UpdateServiceAutoScalerRequestBehaviorScaleUp(const UpdateServiceAutoScalerRequestBehaviorScaleUp &) = default ;
    UpdateServiceAutoScalerRequestBehaviorScaleUp(UpdateServiceAutoScalerRequestBehaviorScaleUp &&) = default ;
    UpdateServiceAutoScalerRequestBehaviorScaleUp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceAutoScalerRequestBehaviorScaleUp() = default ;
    UpdateServiceAutoScalerRequestBehaviorScaleUp& operator=(const UpdateServiceAutoScalerRequestBehaviorScaleUp &) = default ;
    UpdateServiceAutoScalerRequestBehaviorScaleUp& operator=(UpdateServiceAutoScalerRequestBehaviorScaleUp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->stabilizationWindowSeconds_ != nullptr; };
    // stabilizationWindowSeconds Field Functions 
    bool hasStabilizationWindowSeconds() const { return this->stabilizationWindowSeconds_ != nullptr;};
    void deleteStabilizationWindowSeconds() { this->stabilizationWindowSeconds_ = nullptr;};
    inline int32_t stabilizationWindowSeconds() const { DARABONBA_PTR_GET_DEFAULT(stabilizationWindowSeconds_, 0) };
    inline UpdateServiceAutoScalerRequestBehaviorScaleUp& setStabilizationWindowSeconds(int32_t stabilizationWindowSeconds) { DARABONBA_PTR_SET_VALUE(stabilizationWindowSeconds_, stabilizationWindowSeconds) };


  protected:
    // The time window that is required before the scale-out operation is performed. Default value: 0. The scale-out operation can be performed only if the specified metric exceeds the specified threshold in the specified time window.
    std::shared_ptr<int32_t> stabilizationWindowSeconds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
