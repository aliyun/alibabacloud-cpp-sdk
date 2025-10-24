// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEAUTOSCALERREQUESTBEHAVIORSCALEDOWN_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEAUTOSCALERREQUESTBEHAVIORSCALEDOWN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateServiceAutoScalerRequestBehaviorScaleDown : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceAutoScalerRequestBehaviorScaleDown& obj) { 
      DARABONBA_PTR_TO_JSON(stabilizationWindowSeconds, stabilizationWindowSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceAutoScalerRequestBehaviorScaleDown& obj) { 
      DARABONBA_PTR_FROM_JSON(stabilizationWindowSeconds, stabilizationWindowSeconds_);
    };
    UpdateServiceAutoScalerRequestBehaviorScaleDown() = default ;
    UpdateServiceAutoScalerRequestBehaviorScaleDown(const UpdateServiceAutoScalerRequestBehaviorScaleDown &) = default ;
    UpdateServiceAutoScalerRequestBehaviorScaleDown(UpdateServiceAutoScalerRequestBehaviorScaleDown &&) = default ;
    UpdateServiceAutoScalerRequestBehaviorScaleDown(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceAutoScalerRequestBehaviorScaleDown() = default ;
    UpdateServiceAutoScalerRequestBehaviorScaleDown& operator=(const UpdateServiceAutoScalerRequestBehaviorScaleDown &) = default ;
    UpdateServiceAutoScalerRequestBehaviorScaleDown& operator=(UpdateServiceAutoScalerRequestBehaviorScaleDown &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->stabilizationWindowSeconds_ == nullptr; };
    // stabilizationWindowSeconds Field Functions 
    bool hasStabilizationWindowSeconds() const { return this->stabilizationWindowSeconds_ != nullptr;};
    void deleteStabilizationWindowSeconds() { this->stabilizationWindowSeconds_ = nullptr;};
    inline int32_t stabilizationWindowSeconds() const { DARABONBA_PTR_GET_DEFAULT(stabilizationWindowSeconds_, 0) };
    inline UpdateServiceAutoScalerRequestBehaviorScaleDown& setStabilizationWindowSeconds(int32_t stabilizationWindowSeconds) { DARABONBA_PTR_SET_VALUE(stabilizationWindowSeconds_, stabilizationWindowSeconds) };


  protected:
    // The time window that is required before the scale-in operation is performed. Default value: 300. The scale-in operation can be performed only if the specified metric drops below the threshold in the specified time window.
    std::shared_ptr<int32_t> stabilizationWindowSeconds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
