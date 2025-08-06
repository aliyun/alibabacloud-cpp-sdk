// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYMENTSETSRESPONSEBODYDEPLOYMENTSETSDEPLOYMENTSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYMENTSETSRESPONSEBODYDEPLOYMENTSETSDEPLOYMENTSET_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities.hpp>
#include <alibabacloud/models/DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetInstanceIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(Capacities, capacities_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DeploymentSetDescription, deploymentSetDescription_);
      DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_TO_JSON(DeploymentSetName, deploymentSetName_);
      DARABONBA_PTR_TO_JSON(DeploymentStrategy, deploymentStrategy_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Granularity, granularity_);
      DARABONBA_PTR_TO_JSON(GroupCount, groupCount_);
      DARABONBA_PTR_TO_JSON(InstanceAmount, instanceAmount_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(Capacities, capacities_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetDescription, deploymentSetDescription_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetName, deploymentSetName_);
      DARABONBA_PTR_FROM_JSON(DeploymentStrategy, deploymentStrategy_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
      DARABONBA_PTR_FROM_JSON(GroupCount, groupCount_);
      DARABONBA_PTR_FROM_JSON(InstanceAmount, instanceAmount_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
    };
    DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet() = default ;
    DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet(const DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet &) = default ;
    DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet(DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet &&) = default ;
    DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet() = default ;
    DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& operator=(const DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet &) = default ;
    DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& operator=(DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->capacities_ != nullptr && this->creationTime_ != nullptr && this->deploymentSetDescription_ != nullptr && this->deploymentSetId_ != nullptr && this->deploymentSetName_ != nullptr
        && this->deploymentStrategy_ != nullptr && this->domain_ != nullptr && this->granularity_ != nullptr && this->groupCount_ != nullptr && this->instanceAmount_ != nullptr
        && this->instanceIds_ != nullptr && this->strategy_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // capacities Field Functions 
    bool hasCapacities() const { return this->capacities_ != nullptr;};
    void deleteCapacities() { this->capacities_ = nullptr;};
    inline const Models::DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities & capacities() const { DARABONBA_PTR_GET_CONST(capacities_, Models::DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities) };
    inline Models::DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities capacities() { DARABONBA_PTR_GET(capacities_, Models::DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities) };
    inline DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setCapacities(const Models::DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities & capacities) { DARABONBA_PTR_SET_VALUE(capacities_, capacities) };
    inline DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setCapacities(Models::DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities && capacities) { DARABONBA_PTR_SET_RVALUE(capacities_, capacities) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // deploymentSetDescription Field Functions 
    bool hasDeploymentSetDescription() const { return this->deploymentSetDescription_ != nullptr;};
    void deleteDeploymentSetDescription() { this->deploymentSetDescription_ = nullptr;};
    inline string deploymentSetDescription() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetDescription_, "") };
    inline DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setDeploymentSetDescription(string deploymentSetDescription) { DARABONBA_PTR_SET_VALUE(deploymentSetDescription_, deploymentSetDescription) };


    // deploymentSetId Field Functions 
    bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
    void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
    inline string deploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
    inline DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


    // deploymentSetName Field Functions 
    bool hasDeploymentSetName() const { return this->deploymentSetName_ != nullptr;};
    void deleteDeploymentSetName() { this->deploymentSetName_ = nullptr;};
    inline string deploymentSetName() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetName_, "") };
    inline DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setDeploymentSetName(string deploymentSetName) { DARABONBA_PTR_SET_VALUE(deploymentSetName_, deploymentSetName) };


    // deploymentStrategy Field Functions 
    bool hasDeploymentStrategy() const { return this->deploymentStrategy_ != nullptr;};
    void deleteDeploymentStrategy() { this->deploymentStrategy_ = nullptr;};
    inline string deploymentStrategy() const { DARABONBA_PTR_GET_DEFAULT(deploymentStrategy_, "") };
    inline DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setDeploymentStrategy(string deploymentStrategy) { DARABONBA_PTR_SET_VALUE(deploymentStrategy_, deploymentStrategy) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline string granularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
    inline DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


    // groupCount Field Functions 
    bool hasGroupCount() const { return this->groupCount_ != nullptr;};
    void deleteGroupCount() { this->groupCount_ = nullptr;};
    inline int32_t groupCount() const { DARABONBA_PTR_GET_DEFAULT(groupCount_, 0) };
    inline DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setGroupCount(int32_t groupCount) { DARABONBA_PTR_SET_VALUE(groupCount_, groupCount) };


    // instanceAmount Field Functions 
    bool hasInstanceAmount() const { return this->instanceAmount_ != nullptr;};
    void deleteInstanceAmount() { this->instanceAmount_ = nullptr;};
    inline int32_t instanceAmount() const { DARABONBA_PTR_GET_DEFAULT(instanceAmount_, 0) };
    inline DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setInstanceAmount(int32_t instanceAmount) { DARABONBA_PTR_SET_VALUE(instanceAmount_, instanceAmount) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const Models::DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetInstanceIds & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, Models::DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetInstanceIds) };
    inline Models::DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetInstanceIds instanceIds() { DARABONBA_PTR_GET(instanceIds_, Models::DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetInstanceIds) };
    inline DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setInstanceIds(const Models::DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetInstanceIds & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setInstanceIds(Models::DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetInstanceIds && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline string strategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
    inline DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


  protected:
    std::shared_ptr<int64_t> accountId_ = nullptr;
    // Details of the capacities of the deployment set. This parameter is valid only when the deployment set contains ECS instances. The value contains information about the capacities of the deployment set in different zones.
    std::shared_ptr<Models::DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities> capacities_ = nullptr;
    // The time when the deployment set was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the deployment set.
    std::shared_ptr<string> deploymentSetDescription_ = nullptr;
    // The ID of the deployment set.
    std::shared_ptr<string> deploymentSetId_ = nullptr;
    // The name of the deployment set.
    std::shared_ptr<string> deploymentSetName_ = nullptr;
    // The deployment strategy. The return value of this parameter is the value of the `Strategy` request parameter.
    std::shared_ptr<string> deploymentStrategy_ = nullptr;
    // The deployment domain.
    std::shared_ptr<string> domain_ = nullptr;
    // The deployment granularity.
    std::shared_ptr<string> granularity_ = nullptr;
    // The number of deployment set groups in the deployment set.
    // 
    // >  This parameter is valid only when the Strategy request parameter is set to AvailabilityGroup.
    std::shared_ptr<int32_t> groupCount_ = nullptr;
    // The number of instances in the deployment set.
    std::shared_ptr<int32_t> instanceAmount_ = nullptr;
    // The IDs of the Elastic Compute Service (ECS) instances in the deployment set.
    std::shared_ptr<Models::DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetInstanceIds> instanceIds_ = nullptr;
    // The deployment strategy.
    std::shared_ptr<string> strategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
