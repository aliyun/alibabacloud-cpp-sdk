// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DRPLANCONFIGURATIONDETAILMANAGEDSCALINGPOLICY_HPP_
#define ALIBABACLOUD_MODELS_DRPLANCONFIGURATIONDETAILMANAGEDSCALINGPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ManagedScalingConstraints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class DRPlanConfigurationDetailManagedScalingPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DRPlanConfigurationDetailManagedScalingPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(Constraints, constraints_);
    };
    friend void from_json(const Darabonba::Json& j, DRPlanConfigurationDetailManagedScalingPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(Constraints, constraints_);
    };
    DRPlanConfigurationDetailManagedScalingPolicy() = default ;
    DRPlanConfigurationDetailManagedScalingPolicy(const DRPlanConfigurationDetailManagedScalingPolicy &) = default ;
    DRPlanConfigurationDetailManagedScalingPolicy(DRPlanConfigurationDetailManagedScalingPolicy &&) = default ;
    DRPlanConfigurationDetailManagedScalingPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DRPlanConfigurationDetailManagedScalingPolicy() = default ;
    DRPlanConfigurationDetailManagedScalingPolicy& operator=(const DRPlanConfigurationDetailManagedScalingPolicy &) = default ;
    DRPlanConfigurationDetailManagedScalingPolicy& operator=(DRPlanConfigurationDetailManagedScalingPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->constraints_ == nullptr; };
    // constraints Field Functions 
    bool hasConstraints() const { return this->constraints_ != nullptr;};
    void deleteConstraints() { this->constraints_ = nullptr;};
    inline const Models::ManagedScalingConstraints & constraints() const { DARABONBA_PTR_GET_CONST(constraints_, Models::ManagedScalingConstraints) };
    inline Models::ManagedScalingConstraints constraints() { DARABONBA_PTR_GET(constraints_, Models::ManagedScalingConstraints) };
    inline DRPlanConfigurationDetailManagedScalingPolicy& setConstraints(const Models::ManagedScalingConstraints & constraints) { DARABONBA_PTR_SET_VALUE(constraints_, constraints) };
    inline DRPlanConfigurationDetailManagedScalingPolicy& setConstraints(Models::ManagedScalingConstraints && constraints) { DARABONBA_PTR_SET_RVALUE(constraints_, constraints) };


  protected:
    std::shared_ptr<Models::ManagedScalingConstraints> constraints_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
