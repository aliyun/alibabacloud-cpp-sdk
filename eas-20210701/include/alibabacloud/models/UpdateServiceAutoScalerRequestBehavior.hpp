// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEAUTOSCALERREQUESTBEHAVIOR_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEAUTOSCALERREQUESTBEHAVIOR_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateServiceAutoScalerRequestBehaviorOnZero.hpp>
#include <alibabacloud/models/UpdateServiceAutoScalerRequestBehaviorScaleDown.hpp>
#include <alibabacloud/models/UpdateServiceAutoScalerRequestBehaviorScaleUp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateServiceAutoScalerRequestBehavior : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceAutoScalerRequestBehavior& obj) { 
      DARABONBA_PTR_TO_JSON(onZero, onZero_);
      DARABONBA_PTR_TO_JSON(scaleDown, scaleDown_);
      DARABONBA_PTR_TO_JSON(scaleUp, scaleUp_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceAutoScalerRequestBehavior& obj) { 
      DARABONBA_PTR_FROM_JSON(onZero, onZero_);
      DARABONBA_PTR_FROM_JSON(scaleDown, scaleDown_);
      DARABONBA_PTR_FROM_JSON(scaleUp, scaleUp_);
    };
    UpdateServiceAutoScalerRequestBehavior() = default ;
    UpdateServiceAutoScalerRequestBehavior(const UpdateServiceAutoScalerRequestBehavior &) = default ;
    UpdateServiceAutoScalerRequestBehavior(UpdateServiceAutoScalerRequestBehavior &&) = default ;
    UpdateServiceAutoScalerRequestBehavior(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceAutoScalerRequestBehavior() = default ;
    UpdateServiceAutoScalerRequestBehavior& operator=(const UpdateServiceAutoScalerRequestBehavior &) = default ;
    UpdateServiceAutoScalerRequestBehavior& operator=(UpdateServiceAutoScalerRequestBehavior &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->onZero_ == nullptr
        && return this->scaleDown_ == nullptr && return this->scaleUp_ == nullptr; };
    // onZero Field Functions 
    bool hasOnZero() const { return this->onZero_ != nullptr;};
    void deleteOnZero() { this->onZero_ = nullptr;};
    inline const Models::UpdateServiceAutoScalerRequestBehaviorOnZero & onZero() const { DARABONBA_PTR_GET_CONST(onZero_, Models::UpdateServiceAutoScalerRequestBehaviorOnZero) };
    inline Models::UpdateServiceAutoScalerRequestBehaviorOnZero onZero() { DARABONBA_PTR_GET(onZero_, Models::UpdateServiceAutoScalerRequestBehaviorOnZero) };
    inline UpdateServiceAutoScalerRequestBehavior& setOnZero(const Models::UpdateServiceAutoScalerRequestBehaviorOnZero & onZero) { DARABONBA_PTR_SET_VALUE(onZero_, onZero) };
    inline UpdateServiceAutoScalerRequestBehavior& setOnZero(Models::UpdateServiceAutoScalerRequestBehaviorOnZero && onZero) { DARABONBA_PTR_SET_RVALUE(onZero_, onZero) };


    // scaleDown Field Functions 
    bool hasScaleDown() const { return this->scaleDown_ != nullptr;};
    void deleteScaleDown() { this->scaleDown_ = nullptr;};
    inline const Models::UpdateServiceAutoScalerRequestBehaviorScaleDown & scaleDown() const { DARABONBA_PTR_GET_CONST(scaleDown_, Models::UpdateServiceAutoScalerRequestBehaviorScaleDown) };
    inline Models::UpdateServiceAutoScalerRequestBehaviorScaleDown scaleDown() { DARABONBA_PTR_GET(scaleDown_, Models::UpdateServiceAutoScalerRequestBehaviorScaleDown) };
    inline UpdateServiceAutoScalerRequestBehavior& setScaleDown(const Models::UpdateServiceAutoScalerRequestBehaviorScaleDown & scaleDown) { DARABONBA_PTR_SET_VALUE(scaleDown_, scaleDown) };
    inline UpdateServiceAutoScalerRequestBehavior& setScaleDown(Models::UpdateServiceAutoScalerRequestBehaviorScaleDown && scaleDown) { DARABONBA_PTR_SET_RVALUE(scaleDown_, scaleDown) };


    // scaleUp Field Functions 
    bool hasScaleUp() const { return this->scaleUp_ != nullptr;};
    void deleteScaleUp() { this->scaleUp_ = nullptr;};
    inline const Models::UpdateServiceAutoScalerRequestBehaviorScaleUp & scaleUp() const { DARABONBA_PTR_GET_CONST(scaleUp_, Models::UpdateServiceAutoScalerRequestBehaviorScaleUp) };
    inline Models::UpdateServiceAutoScalerRequestBehaviorScaleUp scaleUp() { DARABONBA_PTR_GET(scaleUp_, Models::UpdateServiceAutoScalerRequestBehaviorScaleUp) };
    inline UpdateServiceAutoScalerRequestBehavior& setScaleUp(const Models::UpdateServiceAutoScalerRequestBehaviorScaleUp & scaleUp) { DARABONBA_PTR_SET_VALUE(scaleUp_, scaleUp) };
    inline UpdateServiceAutoScalerRequestBehavior& setScaleUp(Models::UpdateServiceAutoScalerRequestBehaviorScaleUp && scaleUp) { DARABONBA_PTR_SET_RVALUE(scaleUp_, scaleUp) };


  protected:
    // The operation that reduces the number of instances to 0.
    std::shared_ptr<Models::UpdateServiceAutoScalerRequestBehaviorOnZero> onZero_ = nullptr;
    // The scale-in operation.
    std::shared_ptr<Models::UpdateServiceAutoScalerRequestBehaviorScaleDown> scaleDown_ = nullptr;
    // The scale-out operation.
    std::shared_ptr<Models::UpdateServiceAutoScalerRequestBehaviorScaleUp> scaleUp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
