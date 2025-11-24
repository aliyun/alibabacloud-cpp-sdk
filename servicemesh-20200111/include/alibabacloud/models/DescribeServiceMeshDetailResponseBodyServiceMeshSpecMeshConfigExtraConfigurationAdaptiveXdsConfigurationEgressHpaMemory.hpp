// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGEXTRACONFIGURATIONADAPTIVEXDSCONFIGURATIONEGRESSHPAMEMORY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGEXTRACONFIGURATIONADAPTIVEXDSCONFIGURATIONEGRESSHPAMEMORY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaMemory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaMemory& obj) { 
      DARABONBA_PTR_TO_JSON(TargetAverageUtilization, targetAverageUtilization_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaMemory& obj) { 
      DARABONBA_PTR_FROM_JSON(TargetAverageUtilization, targetAverageUtilization_);
    };
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaMemory() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaMemory(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaMemory &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaMemory(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaMemory &&) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaMemory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaMemory() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaMemory& operator=(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaMemory &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaMemory& operator=(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaMemory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->targetAverageUtilization_ == nullptr; };
    // targetAverageUtilization Field Functions 
    bool hasTargetAverageUtilization() const { return this->targetAverageUtilization_ != nullptr;};
    void deleteTargetAverageUtilization() { this->targetAverageUtilization_ = nullptr;};
    inline int32_t targetAverageUtilization() const { DARABONBA_PTR_GET_DEFAULT(targetAverageUtilization_, 0) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaMemory& setTargetAverageUtilization(int32_t targetAverageUtilization) { DARABONBA_PTR_SET_VALUE(targetAverageUtilization_, targetAverageUtilization) };


  protected:
    // The expected memory usage when HPA is enabled. Valid values: 1 to 100. If the memory usage exceeds this value, the number of pod replicas increases. If the memory usage is less than this value, the number of pod replicas decreases.
    std::shared_ptr<int32_t> targetAverageUtilization_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
