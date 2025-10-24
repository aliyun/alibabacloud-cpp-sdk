// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEAUTOSCALERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEAUTOSCALERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateServiceAutoScalerRequestBehavior.hpp>
#include <vector>
#include <alibabacloud/models/UpdateServiceAutoScalerRequestScaleStrategies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateServiceAutoScalerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceAutoScalerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(behavior, behavior_);
      DARABONBA_PTR_TO_JSON(max, max_);
      DARABONBA_PTR_TO_JSON(min, min_);
      DARABONBA_PTR_TO_JSON(scaleStrategies, scaleStrategies_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceAutoScalerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(behavior, behavior_);
      DARABONBA_PTR_FROM_JSON(max, max_);
      DARABONBA_PTR_FROM_JSON(min, min_);
      DARABONBA_PTR_FROM_JSON(scaleStrategies, scaleStrategies_);
    };
    UpdateServiceAutoScalerRequest() = default ;
    UpdateServiceAutoScalerRequest(const UpdateServiceAutoScalerRequest &) = default ;
    UpdateServiceAutoScalerRequest(UpdateServiceAutoScalerRequest &&) = default ;
    UpdateServiceAutoScalerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceAutoScalerRequest() = default ;
    UpdateServiceAutoScalerRequest& operator=(const UpdateServiceAutoScalerRequest &) = default ;
    UpdateServiceAutoScalerRequest& operator=(UpdateServiceAutoScalerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->behavior_ == nullptr
        && return this->max_ == nullptr && return this->min_ == nullptr && return this->scaleStrategies_ == nullptr; };
    // behavior Field Functions 
    bool hasBehavior() const { return this->behavior_ != nullptr;};
    void deleteBehavior() { this->behavior_ = nullptr;};
    inline const UpdateServiceAutoScalerRequestBehavior & behavior() const { DARABONBA_PTR_GET_CONST(behavior_, UpdateServiceAutoScalerRequestBehavior) };
    inline UpdateServiceAutoScalerRequestBehavior behavior() { DARABONBA_PTR_GET(behavior_, UpdateServiceAutoScalerRequestBehavior) };
    inline UpdateServiceAutoScalerRequest& setBehavior(const UpdateServiceAutoScalerRequestBehavior & behavior) { DARABONBA_PTR_SET_VALUE(behavior_, behavior) };
    inline UpdateServiceAutoScalerRequest& setBehavior(UpdateServiceAutoScalerRequestBehavior && behavior) { DARABONBA_PTR_SET_RVALUE(behavior_, behavior) };


    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline int32_t max() const { DARABONBA_PTR_GET_DEFAULT(max_, 0) };
    inline UpdateServiceAutoScalerRequest& setMax(int32_t max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline int32_t min() const { DARABONBA_PTR_GET_DEFAULT(min_, 0) };
    inline UpdateServiceAutoScalerRequest& setMin(int32_t min) { DARABONBA_PTR_SET_VALUE(min_, min) };


    // scaleStrategies Field Functions 
    bool hasScaleStrategies() const { return this->scaleStrategies_ != nullptr;};
    void deleteScaleStrategies() { this->scaleStrategies_ = nullptr;};
    inline const vector<UpdateServiceAutoScalerRequestScaleStrategies> & scaleStrategies() const { DARABONBA_PTR_GET_CONST(scaleStrategies_, vector<UpdateServiceAutoScalerRequestScaleStrategies>) };
    inline vector<UpdateServiceAutoScalerRequestScaleStrategies> scaleStrategies() { DARABONBA_PTR_GET(scaleStrategies_, vector<UpdateServiceAutoScalerRequestScaleStrategies>) };
    inline UpdateServiceAutoScalerRequest& setScaleStrategies(const vector<UpdateServiceAutoScalerRequestScaleStrategies> & scaleStrategies) { DARABONBA_PTR_SET_VALUE(scaleStrategies_, scaleStrategies) };
    inline UpdateServiceAutoScalerRequest& setScaleStrategies(vector<UpdateServiceAutoScalerRequestScaleStrategies> && scaleStrategies) { DARABONBA_PTR_SET_RVALUE(scaleStrategies_, scaleStrategies) };


  protected:
    // The Autoscaler operation.
    std::shared_ptr<UpdateServiceAutoScalerRequestBehavior> behavior_ = nullptr;
    // The maximum number of instances. The value must be greater than that of the min parameter.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> max_ = nullptr;
    // The minimum number of instances. The value must be greater than 0.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> min_ = nullptr;
    // The auto scaling policies.
    // 
    // This parameter is required.
    std::shared_ptr<vector<UpdateServiceAutoScalerRequestScaleStrategies>> scaleStrategies_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
