// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEAUTOSCALERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEAUTOSCALERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateServiceAutoScalerRequestBehavior.hpp>
#include <vector>
#include <alibabacloud/models/CreateServiceAutoScalerRequestScaleStrategies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateServiceAutoScalerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceAutoScalerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(behavior, behavior_);
      DARABONBA_PTR_TO_JSON(max, max_);
      DARABONBA_PTR_TO_JSON(min, min_);
      DARABONBA_PTR_TO_JSON(scaleStrategies, scaleStrategies_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceAutoScalerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(behavior, behavior_);
      DARABONBA_PTR_FROM_JSON(max, max_);
      DARABONBA_PTR_FROM_JSON(min, min_);
      DARABONBA_PTR_FROM_JSON(scaleStrategies, scaleStrategies_);
    };
    CreateServiceAutoScalerRequest() = default ;
    CreateServiceAutoScalerRequest(const CreateServiceAutoScalerRequest &) = default ;
    CreateServiceAutoScalerRequest(CreateServiceAutoScalerRequest &&) = default ;
    CreateServiceAutoScalerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceAutoScalerRequest() = default ;
    CreateServiceAutoScalerRequest& operator=(const CreateServiceAutoScalerRequest &) = default ;
    CreateServiceAutoScalerRequest& operator=(CreateServiceAutoScalerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->behavior_ == nullptr
        && return this->max_ == nullptr && return this->min_ == nullptr && return this->scaleStrategies_ == nullptr; };
    // behavior Field Functions 
    bool hasBehavior() const { return this->behavior_ != nullptr;};
    void deleteBehavior() { this->behavior_ = nullptr;};
    inline const CreateServiceAutoScalerRequestBehavior & behavior() const { DARABONBA_PTR_GET_CONST(behavior_, CreateServiceAutoScalerRequestBehavior) };
    inline CreateServiceAutoScalerRequestBehavior behavior() { DARABONBA_PTR_GET(behavior_, CreateServiceAutoScalerRequestBehavior) };
    inline CreateServiceAutoScalerRequest& setBehavior(const CreateServiceAutoScalerRequestBehavior & behavior) { DARABONBA_PTR_SET_VALUE(behavior_, behavior) };
    inline CreateServiceAutoScalerRequest& setBehavior(CreateServiceAutoScalerRequestBehavior && behavior) { DARABONBA_PTR_SET_RVALUE(behavior_, behavior) };


    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline int32_t max() const { DARABONBA_PTR_GET_DEFAULT(max_, 0) };
    inline CreateServiceAutoScalerRequest& setMax(int32_t max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline int32_t min() const { DARABONBA_PTR_GET_DEFAULT(min_, 0) };
    inline CreateServiceAutoScalerRequest& setMin(int32_t min) { DARABONBA_PTR_SET_VALUE(min_, min) };


    // scaleStrategies Field Functions 
    bool hasScaleStrategies() const { return this->scaleStrategies_ != nullptr;};
    void deleteScaleStrategies() { this->scaleStrategies_ = nullptr;};
    inline const vector<CreateServiceAutoScalerRequestScaleStrategies> & scaleStrategies() const { DARABONBA_PTR_GET_CONST(scaleStrategies_, vector<CreateServiceAutoScalerRequestScaleStrategies>) };
    inline vector<CreateServiceAutoScalerRequestScaleStrategies> scaleStrategies() { DARABONBA_PTR_GET(scaleStrategies_, vector<CreateServiceAutoScalerRequestScaleStrategies>) };
    inline CreateServiceAutoScalerRequest& setScaleStrategies(const vector<CreateServiceAutoScalerRequestScaleStrategies> & scaleStrategies) { DARABONBA_PTR_SET_VALUE(scaleStrategies_, scaleStrategies) };
    inline CreateServiceAutoScalerRequest& setScaleStrategies(vector<CreateServiceAutoScalerRequestScaleStrategies> && scaleStrategies) { DARABONBA_PTR_SET_RVALUE(scaleStrategies_, scaleStrategies) };


  protected:
    // The Autoscaler operation.
    std::shared_ptr<CreateServiceAutoScalerRequestBehavior> behavior_ = nullptr;
    // The maximum number of instances in the service. The value of max must be greater than the value of min.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> max_ = nullptr;
    // The minimum number of instances in the service.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> min_ = nullptr;
    // The service for which the metric is specified. If you do not set this parameter, the current service is specified by default.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateServiceAutoScalerRequestScaleStrategies>> scaleStrategies_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
