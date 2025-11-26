// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMANAGEDSCALINGPOLICYRESPONSEBODYSCALINGPOLICY_HPP_
#define ALIBABACLOUD_MODELS_GETMANAGEDSCALINGPOLICYRESPONSEBODYSCALINGPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetManagedScalingPolicyResponseBodyScalingPolicyConstraints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetManagedScalingPolicyResponseBodyScalingPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetManagedScalingPolicyResponseBodyScalingPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Constraints, constraints_);
      DARABONBA_PTR_TO_JSON(ScalingPolicyId, scalingPolicyId_);
    };
    friend void from_json(const Darabonba::Json& j, GetManagedScalingPolicyResponseBodyScalingPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Constraints, constraints_);
      DARABONBA_PTR_FROM_JSON(ScalingPolicyId, scalingPolicyId_);
    };
    GetManagedScalingPolicyResponseBodyScalingPolicy() = default ;
    GetManagedScalingPolicyResponseBodyScalingPolicy(const GetManagedScalingPolicyResponseBodyScalingPolicy &) = default ;
    GetManagedScalingPolicyResponseBodyScalingPolicy(GetManagedScalingPolicyResponseBodyScalingPolicy &&) = default ;
    GetManagedScalingPolicyResponseBodyScalingPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetManagedScalingPolicyResponseBodyScalingPolicy() = default ;
    GetManagedScalingPolicyResponseBodyScalingPolicy& operator=(const GetManagedScalingPolicyResponseBodyScalingPolicy &) = default ;
    GetManagedScalingPolicyResponseBodyScalingPolicy& operator=(GetManagedScalingPolicyResponseBodyScalingPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->constraints_ == nullptr && return this->scalingPolicyId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetManagedScalingPolicyResponseBodyScalingPolicy& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // constraints Field Functions 
    bool hasConstraints() const { return this->constraints_ != nullptr;};
    void deleteConstraints() { this->constraints_ = nullptr;};
    inline const Models::GetManagedScalingPolicyResponseBodyScalingPolicyConstraints & constraints() const { DARABONBA_PTR_GET_CONST(constraints_, Models::GetManagedScalingPolicyResponseBodyScalingPolicyConstraints) };
    inline Models::GetManagedScalingPolicyResponseBodyScalingPolicyConstraints constraints() { DARABONBA_PTR_GET(constraints_, Models::GetManagedScalingPolicyResponseBodyScalingPolicyConstraints) };
    inline GetManagedScalingPolicyResponseBodyScalingPolicy& setConstraints(const Models::GetManagedScalingPolicyResponseBodyScalingPolicyConstraints & constraints) { DARABONBA_PTR_SET_VALUE(constraints_, constraints) };
    inline GetManagedScalingPolicyResponseBodyScalingPolicy& setConstraints(Models::GetManagedScalingPolicyResponseBodyScalingPolicyConstraints && constraints) { DARABONBA_PTR_SET_RVALUE(constraints_, constraints) };


    // scalingPolicyId Field Functions 
    bool hasScalingPolicyId() const { return this->scalingPolicyId_ != nullptr;};
    void deleteScalingPolicyId() { this->scalingPolicyId_ = nullptr;};
    inline string scalingPolicyId() const { DARABONBA_PTR_GET_DEFAULT(scalingPolicyId_, "") };
    inline GetManagedScalingPolicyResponseBodyScalingPolicy& setScalingPolicyId(string scalingPolicyId) { DARABONBA_PTR_SET_VALUE(scalingPolicyId_, scalingPolicyId) };


  protected:
    // 集群ID。
    std::shared_ptr<string> clusterId_ = nullptr;
    // 最大最小值约束
    std::shared_ptr<Models::GetManagedScalingPolicyResponseBodyScalingPolicyConstraints> constraints_ = nullptr;
    // 伸缩策略ID。
    std::shared_ptr<string> scalingPolicyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
