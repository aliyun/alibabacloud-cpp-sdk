// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGEXTRACONFIGURATIONADAPTIVEXDSCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGEXTRACONFIGURATIONADAPTIVEXDSCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaCpu.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaMemory.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(EgressAutoscaleEnabled, egressAutoscaleEnabled_);
      DARABONBA_PTR_TO_JSON(EgressHpaCpu, egressHpaCpu_);
      DARABONBA_PTR_TO_JSON(EgressHpaMemory, egressHpaMemory_);
      DARABONBA_PTR_TO_JSON(EgressMaxReplica, egressMaxReplica_);
      DARABONBA_PTR_TO_JSON(EgressMinReplica, egressMinReplica_);
      DARABONBA_PTR_TO_JSON(EgressReplicaCount, egressReplicaCount_);
      DARABONBA_PTR_TO_JSON(EgressResources, egressResources_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(EgressAutoscaleEnabled, egressAutoscaleEnabled_);
      DARABONBA_PTR_FROM_JSON(EgressHpaCpu, egressHpaCpu_);
      DARABONBA_PTR_FROM_JSON(EgressHpaMemory, egressHpaMemory_);
      DARABONBA_PTR_FROM_JSON(EgressMaxReplica, egressMaxReplica_);
      DARABONBA_PTR_FROM_JSON(EgressMinReplica, egressMinReplica_);
      DARABONBA_PTR_FROM_JSON(EgressReplicaCount, egressReplicaCount_);
      DARABONBA_PTR_FROM_JSON(EgressResources, egressResources_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
    };
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration &&) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration& operator=(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration& operator=(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->egressAutoscaleEnabled_ == nullptr
        && return this->egressHpaCpu_ == nullptr && return this->egressHpaMemory_ == nullptr && return this->egressMaxReplica_ == nullptr && return this->egressMinReplica_ == nullptr && return this->egressReplicaCount_ == nullptr
        && return this->egressResources_ == nullptr && return this->enabled_ == nullptr; };
    // egressAutoscaleEnabled Field Functions 
    bool hasEgressAutoscaleEnabled() const { return this->egressAutoscaleEnabled_ != nullptr;};
    void deleteEgressAutoscaleEnabled() { this->egressAutoscaleEnabled_ = nullptr;};
    inline bool egressAutoscaleEnabled() const { DARABONBA_PTR_GET_DEFAULT(egressAutoscaleEnabled_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration& setEgressAutoscaleEnabled(bool egressAutoscaleEnabled) { DARABONBA_PTR_SET_VALUE(egressAutoscaleEnabled_, egressAutoscaleEnabled) };


    // egressHpaCpu Field Functions 
    bool hasEgressHpaCpu() const { return this->egressHpaCpu_ != nullptr;};
    void deleteEgressHpaCpu() { this->egressHpaCpu_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaCpu & egressHpaCpu() const { DARABONBA_PTR_GET_CONST(egressHpaCpu_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaCpu) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaCpu egressHpaCpu() { DARABONBA_PTR_GET(egressHpaCpu_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaCpu) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration& setEgressHpaCpu(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaCpu & egressHpaCpu) { DARABONBA_PTR_SET_VALUE(egressHpaCpu_, egressHpaCpu) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration& setEgressHpaCpu(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaCpu && egressHpaCpu) { DARABONBA_PTR_SET_RVALUE(egressHpaCpu_, egressHpaCpu) };


    // egressHpaMemory Field Functions 
    bool hasEgressHpaMemory() const { return this->egressHpaMemory_ != nullptr;};
    void deleteEgressHpaMemory() { this->egressHpaMemory_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaMemory & egressHpaMemory() const { DARABONBA_PTR_GET_CONST(egressHpaMemory_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaMemory) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaMemory egressHpaMemory() { DARABONBA_PTR_GET(egressHpaMemory_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaMemory) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration& setEgressHpaMemory(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaMemory & egressHpaMemory) { DARABONBA_PTR_SET_VALUE(egressHpaMemory_, egressHpaMemory) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration& setEgressHpaMemory(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaMemory && egressHpaMemory) { DARABONBA_PTR_SET_RVALUE(egressHpaMemory_, egressHpaMemory) };


    // egressMaxReplica Field Functions 
    bool hasEgressMaxReplica() const { return this->egressMaxReplica_ != nullptr;};
    void deleteEgressMaxReplica() { this->egressMaxReplica_ = nullptr;};
    inline int32_t egressMaxReplica() const { DARABONBA_PTR_GET_DEFAULT(egressMaxReplica_, 0) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration& setEgressMaxReplica(int32_t egressMaxReplica) { DARABONBA_PTR_SET_VALUE(egressMaxReplica_, egressMaxReplica) };


    // egressMinReplica Field Functions 
    bool hasEgressMinReplica() const { return this->egressMinReplica_ != nullptr;};
    void deleteEgressMinReplica() { this->egressMinReplica_ = nullptr;};
    inline int32_t egressMinReplica() const { DARABONBA_PTR_GET_DEFAULT(egressMinReplica_, 0) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration& setEgressMinReplica(int32_t egressMinReplica) { DARABONBA_PTR_SET_VALUE(egressMinReplica_, egressMinReplica) };


    // egressReplicaCount Field Functions 
    bool hasEgressReplicaCount() const { return this->egressReplicaCount_ != nullptr;};
    void deleteEgressReplicaCount() { this->egressReplicaCount_ = nullptr;};
    inline int32_t egressReplicaCount() const { DARABONBA_PTR_GET_DEFAULT(egressReplicaCount_, 0) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration& setEgressReplicaCount(int32_t egressReplicaCount) { DARABONBA_PTR_SET_VALUE(egressReplicaCount_, egressReplicaCount) };


    // egressResources Field Functions 
    bool hasEgressResources() const { return this->egressResources_ != nullptr;};
    void deleteEgressResources() { this->egressResources_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressResources & egressResources() const { DARABONBA_PTR_GET_CONST(egressResources_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressResources) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressResources egressResources() { DARABONBA_PTR_GET(egressResources_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressResources) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration& setEgressResources(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressResources & egressResources) { DARABONBA_PTR_SET_VALUE(egressResources_, egressResources) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration& setEgressResources(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressResources && egressResources) { DARABONBA_PTR_SET_RVALUE(egressResources_, egressResources) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


  protected:
    // Indicates whether Horizontal Pod Autoscaling (HPA) is enabled for the egress gateway.
    std::shared_ptr<bool> egressAutoscaleEnabled_ = nullptr;
    // The CPU resource configurations of the egress gateway when HPA is enabled.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaCpu> egressHpaCpu_ = nullptr;
    // The memory resource configurations of the egress gateway when HPA is enabled.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressHpaMemory> egressHpaMemory_ = nullptr;
    // The maximum number of egress gateway pod replicas when HPA is enabled.
    std::shared_ptr<int32_t> egressMaxReplica_ = nullptr;
    // The minimum number of egress gateway pod replicas when HPA is enabled.
    std::shared_ptr<int32_t> egressMinReplica_ = nullptr;
    // The number of the egress gateway pod replicas.
    std::shared_ptr<int32_t> egressReplicaCount_ = nullptr;
    // The resource configurations of the egress gateway that is used by adaptive xDS optimization.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressResources> egressResources_ = nullptr;
    // Indicates whether adaptive xDS optimization is enabled.
    std::shared_ptr<bool> enabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
