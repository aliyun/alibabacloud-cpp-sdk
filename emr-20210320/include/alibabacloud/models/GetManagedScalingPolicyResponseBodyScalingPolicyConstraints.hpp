// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMANAGEDSCALINGPOLICYRESPONSEBODYSCALINGPOLICYCONSTRAINTS_HPP_
#define ALIBABACLOUD_MODELS_GETMANAGEDSCALINGPOLICYRESPONSEBODYSCALINGPOLICYCONSTRAINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetManagedScalingPolicyResponseBodyScalingPolicyConstraints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetManagedScalingPolicyResponseBodyScalingPolicyConstraints& obj) { 
      DARABONBA_PTR_TO_JSON(MaxCapacity, maxCapacity_);
      DARABONBA_PTR_TO_JSON(MaxOnDemandCapacity, maxOnDemandCapacity_);
      DARABONBA_PTR_TO_JSON(MinCapacity, minCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, GetManagedScalingPolicyResponseBodyScalingPolicyConstraints& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxCapacity, maxCapacity_);
      DARABONBA_PTR_FROM_JSON(MaxOnDemandCapacity, maxOnDemandCapacity_);
      DARABONBA_PTR_FROM_JSON(MinCapacity, minCapacity_);
    };
    GetManagedScalingPolicyResponseBodyScalingPolicyConstraints() = default ;
    GetManagedScalingPolicyResponseBodyScalingPolicyConstraints(const GetManagedScalingPolicyResponseBodyScalingPolicyConstraints &) = default ;
    GetManagedScalingPolicyResponseBodyScalingPolicyConstraints(GetManagedScalingPolicyResponseBodyScalingPolicyConstraints &&) = default ;
    GetManagedScalingPolicyResponseBodyScalingPolicyConstraints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetManagedScalingPolicyResponseBodyScalingPolicyConstraints() = default ;
    GetManagedScalingPolicyResponseBodyScalingPolicyConstraints& operator=(const GetManagedScalingPolicyResponseBodyScalingPolicyConstraints &) = default ;
    GetManagedScalingPolicyResponseBodyScalingPolicyConstraints& operator=(GetManagedScalingPolicyResponseBodyScalingPolicyConstraints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxCapacity_ != nullptr
        && this->maxOnDemandCapacity_ != nullptr && this->minCapacity_ != nullptr; };
    // maxCapacity Field Functions 
    bool hasMaxCapacity() const { return this->maxCapacity_ != nullptr;};
    void deleteMaxCapacity() { this->maxCapacity_ = nullptr;};
    inline int32_t maxCapacity() const { DARABONBA_PTR_GET_DEFAULT(maxCapacity_, 0) };
    inline GetManagedScalingPolicyResponseBodyScalingPolicyConstraints& setMaxCapacity(int32_t maxCapacity) { DARABONBA_PTR_SET_VALUE(maxCapacity_, maxCapacity) };


    // maxOnDemandCapacity Field Functions 
    bool hasMaxOnDemandCapacity() const { return this->maxOnDemandCapacity_ != nullptr;};
    void deleteMaxOnDemandCapacity() { this->maxOnDemandCapacity_ = nullptr;};
    inline int32_t maxOnDemandCapacity() const { DARABONBA_PTR_GET_DEFAULT(maxOnDemandCapacity_, 0) };
    inline GetManagedScalingPolicyResponseBodyScalingPolicyConstraints& setMaxOnDemandCapacity(int32_t maxOnDemandCapacity) { DARABONBA_PTR_SET_VALUE(maxOnDemandCapacity_, maxOnDemandCapacity) };


    // minCapacity Field Functions 
    bool hasMinCapacity() const { return this->minCapacity_ != nullptr;};
    void deleteMinCapacity() { this->minCapacity_ = nullptr;};
    inline int32_t minCapacity() const { DARABONBA_PTR_GET_DEFAULT(minCapacity_, 0) };
    inline GetManagedScalingPolicyResponseBodyScalingPolicyConstraints& setMinCapacity(int32_t minCapacity) { DARABONBA_PTR_SET_VALUE(minCapacity_, minCapacity) };


  protected:
    // 最大值
    std::shared_ptr<int32_t> maxCapacity_ = nullptr;
    // 最大按量数量
    std::shared_ptr<int32_t> maxOnDemandCapacity_ = nullptr;
    // 最小值
    std::shared_ptr<int32_t> minCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
