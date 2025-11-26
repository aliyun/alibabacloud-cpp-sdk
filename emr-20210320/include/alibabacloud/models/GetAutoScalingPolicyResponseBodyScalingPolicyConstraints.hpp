// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOSCALINGPOLICYRESPONSEBODYSCALINGPOLICYCONSTRAINTS_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOSCALINGPOLICYRESPONSEBODYSCALINGPOLICYCONSTRAINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetAutoScalingPolicyResponseBodyScalingPolicyConstraints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoScalingPolicyResponseBodyScalingPolicyConstraints& obj) { 
      DARABONBA_PTR_TO_JSON(MaxCapacity, maxCapacity_);
      DARABONBA_PTR_TO_JSON(MinCapacity, minCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoScalingPolicyResponseBodyScalingPolicyConstraints& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxCapacity, maxCapacity_);
      DARABONBA_PTR_FROM_JSON(MinCapacity, minCapacity_);
    };
    GetAutoScalingPolicyResponseBodyScalingPolicyConstraints() = default ;
    GetAutoScalingPolicyResponseBodyScalingPolicyConstraints(const GetAutoScalingPolicyResponseBodyScalingPolicyConstraints &) = default ;
    GetAutoScalingPolicyResponseBodyScalingPolicyConstraints(GetAutoScalingPolicyResponseBodyScalingPolicyConstraints &&) = default ;
    GetAutoScalingPolicyResponseBodyScalingPolicyConstraints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoScalingPolicyResponseBodyScalingPolicyConstraints() = default ;
    GetAutoScalingPolicyResponseBodyScalingPolicyConstraints& operator=(const GetAutoScalingPolicyResponseBodyScalingPolicyConstraints &) = default ;
    GetAutoScalingPolicyResponseBodyScalingPolicyConstraints& operator=(GetAutoScalingPolicyResponseBodyScalingPolicyConstraints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxCapacity_ == nullptr
        && return this->minCapacity_ == nullptr; };
    // maxCapacity Field Functions 
    bool hasMaxCapacity() const { return this->maxCapacity_ != nullptr;};
    void deleteMaxCapacity() { this->maxCapacity_ = nullptr;};
    inline int32_t maxCapacity() const { DARABONBA_PTR_GET_DEFAULT(maxCapacity_, 0) };
    inline GetAutoScalingPolicyResponseBodyScalingPolicyConstraints& setMaxCapacity(int32_t maxCapacity) { DARABONBA_PTR_SET_VALUE(maxCapacity_, maxCapacity) };


    // minCapacity Field Functions 
    bool hasMinCapacity() const { return this->minCapacity_ != nullptr;};
    void deleteMinCapacity() { this->minCapacity_ = nullptr;};
    inline int32_t minCapacity() const { DARABONBA_PTR_GET_DEFAULT(minCapacity_, 0) };
    inline GetAutoScalingPolicyResponseBodyScalingPolicyConstraints& setMinCapacity(int32_t minCapacity) { DARABONBA_PTR_SET_VALUE(minCapacity_, minCapacity) };


  protected:
    // The maximum number of nodes in the node group. Default value: 2000.
    std::shared_ptr<int32_t> maxCapacity_ = nullptr;
    // The minimum number of nodes in the node group. Default value: 0.
    std::shared_ptr<int32_t> minCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
