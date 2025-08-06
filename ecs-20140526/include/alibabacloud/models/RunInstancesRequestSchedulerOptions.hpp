// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNINSTANCESREQUESTSCHEDULEROPTIONS_HPP_
#define ALIBABACLOUD_MODELS_RUNINSTANCESREQUESTSCHEDULEROPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class RunInstancesRequestSchedulerOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunInstancesRequestSchedulerOptions& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
    };
    friend void from_json(const Darabonba::Json& j, RunInstancesRequestSchedulerOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
    };
    RunInstancesRequestSchedulerOptions() = default ;
    RunInstancesRequestSchedulerOptions(const RunInstancesRequestSchedulerOptions &) = default ;
    RunInstancesRequestSchedulerOptions(RunInstancesRequestSchedulerOptions &&) = default ;
    RunInstancesRequestSchedulerOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunInstancesRequestSchedulerOptions() = default ;
    RunInstancesRequestSchedulerOptions& operator=(const RunInstancesRequestSchedulerOptions &) = default ;
    RunInstancesRequestSchedulerOptions& operator=(RunInstancesRequestSchedulerOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dedicatedHostClusterId_ != nullptr; };
    // dedicatedHostClusterId Field Functions 
    bool hasDedicatedHostClusterId() const { return this->dedicatedHostClusterId_ != nullptr;};
    void deleteDedicatedHostClusterId() { this->dedicatedHostClusterId_ = nullptr;};
    inline string dedicatedHostClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostClusterId_, "") };
    inline RunInstancesRequestSchedulerOptions& setDedicatedHostClusterId(string dedicatedHostClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusterId_, dedicatedHostClusterId) };


  protected:
    // The ID of the dedicated host cluster in which to create the instance. After this parameter is specified, the system selects one dedicated host from the specified cluster to create the instance.
    // 
    // > This parameter is valid only when the `Tenancy` parameter is set to `host`.
    // 
    // When you specify both the `DedicatedHostId` and `SchedulerOptions.DedicatedHostClusterId` parameters, take note of the following items:
    // 
    // *   If the specified dedicated host belongs to the specified dedicated host cluster, the instance is preferentially deployed on the specified dedicated host.
    // *   If the specified dedicated host does not belong to the specified dedicated host cluster, the instance cannot be created.
    // 
    // You can call the [DescribeDedicatedHostClusters](https://help.aliyun.com/document_detail/184145.html) operation to query the list of dedicated host cluster IDs.
    std::shared_ptr<string> dedicatedHostClusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
