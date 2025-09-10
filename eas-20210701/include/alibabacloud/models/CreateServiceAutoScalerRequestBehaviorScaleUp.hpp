// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEAUTOSCALERREQUESTBEHAVIORSCALEUP_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEAUTOSCALERREQUESTBEHAVIORSCALEUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateServiceAutoScalerRequestBehaviorScaleUp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceAutoScalerRequestBehaviorScaleUp& obj) { 
      DARABONBA_PTR_TO_JSON(stabilizationWindowSeconds, stabilizationWindowSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceAutoScalerRequestBehaviorScaleUp& obj) { 
      DARABONBA_PTR_FROM_JSON(stabilizationWindowSeconds, stabilizationWindowSeconds_);
    };
    CreateServiceAutoScalerRequestBehaviorScaleUp() = default ;
    CreateServiceAutoScalerRequestBehaviorScaleUp(const CreateServiceAutoScalerRequestBehaviorScaleUp &) = default ;
    CreateServiceAutoScalerRequestBehaviorScaleUp(CreateServiceAutoScalerRequestBehaviorScaleUp &&) = default ;
    CreateServiceAutoScalerRequestBehaviorScaleUp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceAutoScalerRequestBehaviorScaleUp() = default ;
    CreateServiceAutoScalerRequestBehaviorScaleUp& operator=(const CreateServiceAutoScalerRequestBehaviorScaleUp &) = default ;
    CreateServiceAutoScalerRequestBehaviorScaleUp& operator=(CreateServiceAutoScalerRequestBehaviorScaleUp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->stabilizationWindowSeconds_ != nullptr; };
    // stabilizationWindowSeconds Field Functions 
    bool hasStabilizationWindowSeconds() const { return this->stabilizationWindowSeconds_ != nullptr;};
    void deleteStabilizationWindowSeconds() { this->stabilizationWindowSeconds_ = nullptr;};
    inline int32_t stabilizationWindowSeconds() const { DARABONBA_PTR_GET_DEFAULT(stabilizationWindowSeconds_, 0) };
    inline CreateServiceAutoScalerRequestBehaviorScaleUp& setStabilizationWindowSeconds(int32_t stabilizationWindowSeconds) { DARABONBA_PTR_SET_VALUE(stabilizationWindowSeconds_, stabilizationWindowSeconds) };


  protected:
    // The time window that is required before the scale-out operation is performed. The scale-out operation can be performed only if the specified metric exceeds the specified threshold in the specified time window. Default value: 0.
    std::shared_ptr<int32_t> stabilizationWindowSeconds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
