// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICEREQUESTSCHEDULEROPTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICEREQUESTSCHEDULEROPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePriceRequestSchedulerOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceRequestSchedulerOptions& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHostId, dedicatedHostId_);
      DARABONBA_PTR_TO_JSON(DeploymentSetStrategy, deploymentSetStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceRequestSchedulerOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHostId, dedicatedHostId_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetStrategy, deploymentSetStrategy_);
    };
    DescribePriceRequestSchedulerOptions() = default ;
    DescribePriceRequestSchedulerOptions(const DescribePriceRequestSchedulerOptions &) = default ;
    DescribePriceRequestSchedulerOptions(DescribePriceRequestSchedulerOptions &&) = default ;
    DescribePriceRequestSchedulerOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceRequestSchedulerOptions() = default ;
    DescribePriceRequestSchedulerOptions& operator=(const DescribePriceRequestSchedulerOptions &) = default ;
    DescribePriceRequestSchedulerOptions& operator=(DescribePriceRequestSchedulerOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dedicatedHostId_ != nullptr
        && this->deploymentSetStrategy_ != nullptr; };
    // dedicatedHostId Field Functions 
    bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
    void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
    inline string dedicatedHostId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostId_, "") };
    inline DescribePriceRequestSchedulerOptions& setDedicatedHostId(string dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };


    // deploymentSetStrategy Field Functions 
    bool hasDeploymentSetStrategy() const { return this->deploymentSetStrategy_ != nullptr;};
    void deleteDeploymentSetStrategy() { this->deploymentSetStrategy_ = nullptr;};
    inline string deploymentSetStrategy() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetStrategy_, "") };
    inline DescribePriceRequestSchedulerOptions& setDeploymentSetStrategy(string deploymentSetStrategy) { DARABONBA_PTR_SET_VALUE(deploymentSetStrategy_, deploymentSetStrategy) };


  protected:
    // This parameter takes effect only when ResourceType is set to instance.
    // 
    // The ID of the dedicated host. You can call the [DescribeDedicatedHosts](https://help.aliyun.com/document_detail/134242.html) operation to query the dedicated host list.
    std::shared_ptr<string> dedicatedHostId_ = nullptr;
    std::shared_ptr<string> deploymentSetStrategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
