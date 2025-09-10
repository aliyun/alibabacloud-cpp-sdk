// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEAUTOSCALERREQUESTBEHAVIOR_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEAUTOSCALERREQUESTBEHAVIOR_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateServiceAutoScalerRequestBehaviorOnZero.hpp>
#include <alibabacloud/models/CreateServiceAutoScalerRequestBehaviorScaleDown.hpp>
#include <alibabacloud/models/CreateServiceAutoScalerRequestBehaviorScaleUp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateServiceAutoScalerRequestBehavior : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceAutoScalerRequestBehavior& obj) { 
      DARABONBA_PTR_TO_JSON(onZero, onZero_);
      DARABONBA_PTR_TO_JSON(scaleDown, scaleDown_);
      DARABONBA_PTR_TO_JSON(scaleUp, scaleUp_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceAutoScalerRequestBehavior& obj) { 
      DARABONBA_PTR_FROM_JSON(onZero, onZero_);
      DARABONBA_PTR_FROM_JSON(scaleDown, scaleDown_);
      DARABONBA_PTR_FROM_JSON(scaleUp, scaleUp_);
    };
    CreateServiceAutoScalerRequestBehavior() = default ;
    CreateServiceAutoScalerRequestBehavior(const CreateServiceAutoScalerRequestBehavior &) = default ;
    CreateServiceAutoScalerRequestBehavior(CreateServiceAutoScalerRequestBehavior &&) = default ;
    CreateServiceAutoScalerRequestBehavior(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceAutoScalerRequestBehavior() = default ;
    CreateServiceAutoScalerRequestBehavior& operator=(const CreateServiceAutoScalerRequestBehavior &) = default ;
    CreateServiceAutoScalerRequestBehavior& operator=(CreateServiceAutoScalerRequestBehavior &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->onZero_ != nullptr
        && this->scaleDown_ != nullptr && this->scaleUp_ != nullptr; };
    // onZero Field Functions 
    bool hasOnZero() const { return this->onZero_ != nullptr;};
    void deleteOnZero() { this->onZero_ = nullptr;};
    inline const Models::CreateServiceAutoScalerRequestBehaviorOnZero & onZero() const { DARABONBA_PTR_GET_CONST(onZero_, Models::CreateServiceAutoScalerRequestBehaviorOnZero) };
    inline Models::CreateServiceAutoScalerRequestBehaviorOnZero onZero() { DARABONBA_PTR_GET(onZero_, Models::CreateServiceAutoScalerRequestBehaviorOnZero) };
    inline CreateServiceAutoScalerRequestBehavior& setOnZero(const Models::CreateServiceAutoScalerRequestBehaviorOnZero & onZero) { DARABONBA_PTR_SET_VALUE(onZero_, onZero) };
    inline CreateServiceAutoScalerRequestBehavior& setOnZero(Models::CreateServiceAutoScalerRequestBehaviorOnZero && onZero) { DARABONBA_PTR_SET_RVALUE(onZero_, onZero) };


    // scaleDown Field Functions 
    bool hasScaleDown() const { return this->scaleDown_ != nullptr;};
    void deleteScaleDown() { this->scaleDown_ = nullptr;};
    inline const Models::CreateServiceAutoScalerRequestBehaviorScaleDown & scaleDown() const { DARABONBA_PTR_GET_CONST(scaleDown_, Models::CreateServiceAutoScalerRequestBehaviorScaleDown) };
    inline Models::CreateServiceAutoScalerRequestBehaviorScaleDown scaleDown() { DARABONBA_PTR_GET(scaleDown_, Models::CreateServiceAutoScalerRequestBehaviorScaleDown) };
    inline CreateServiceAutoScalerRequestBehavior& setScaleDown(const Models::CreateServiceAutoScalerRequestBehaviorScaleDown & scaleDown) { DARABONBA_PTR_SET_VALUE(scaleDown_, scaleDown) };
    inline CreateServiceAutoScalerRequestBehavior& setScaleDown(Models::CreateServiceAutoScalerRequestBehaviorScaleDown && scaleDown) { DARABONBA_PTR_SET_RVALUE(scaleDown_, scaleDown) };


    // scaleUp Field Functions 
    bool hasScaleUp() const { return this->scaleUp_ != nullptr;};
    void deleteScaleUp() { this->scaleUp_ = nullptr;};
    inline const Models::CreateServiceAutoScalerRequestBehaviorScaleUp & scaleUp() const { DARABONBA_PTR_GET_CONST(scaleUp_, Models::CreateServiceAutoScalerRequestBehaviorScaleUp) };
    inline Models::CreateServiceAutoScalerRequestBehaviorScaleUp scaleUp() { DARABONBA_PTR_GET(scaleUp_, Models::CreateServiceAutoScalerRequestBehaviorScaleUp) };
    inline CreateServiceAutoScalerRequestBehavior& setScaleUp(const Models::CreateServiceAutoScalerRequestBehaviorScaleUp & scaleUp) { DARABONBA_PTR_SET_VALUE(scaleUp_, scaleUp) };
    inline CreateServiceAutoScalerRequestBehavior& setScaleUp(Models::CreateServiceAutoScalerRequestBehaviorScaleUp && scaleUp) { DARABONBA_PTR_SET_RVALUE(scaleUp_, scaleUp) };


  protected:
    // The operation that reduces the number of instances to 0.
    std::shared_ptr<Models::CreateServiceAutoScalerRequestBehaviorOnZero> onZero_ = nullptr;
    // The scale-in operation.
    std::shared_ptr<Models::CreateServiceAutoScalerRequestBehaviorScaleDown> scaleDown_ = nullptr;
    // The scale-out operation.
    std::shared_ptr<Models::CreateServiceAutoScalerRequestBehaviorScaleUp> scaleUp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
