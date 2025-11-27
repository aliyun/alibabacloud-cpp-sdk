// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCDEPLOYMENTSETSRESPONSEBODYDEPLOYMENTSETSDEPLOYMENTSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCDEPLOYMENTSETSRESPONSEBODYDEPLOYMENTSETSDEPLOYMENTSET_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities.hpp>
#include <alibabacloud/models/DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetInstanceIds.hpp>
#include <alibabacloud/models/DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& obj) { 
      DARABONBA_PTR_TO_JSON(Capacities, capacities_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
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
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& obj) { 
      DARABONBA_PTR_FROM_JSON(Capacities, capacities_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
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
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet() = default ;
    DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet(const DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet &) = default ;
    DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet(DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet &&) = default ;
    DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet() = default ;
    DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& operator=(const DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet &) = default ;
    DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& operator=(DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capacities_ == nullptr
        && return this->createTime_ == nullptr && return this->deploymentSetDescription_ == nullptr && return this->deploymentSetId_ == nullptr && return this->deploymentSetName_ == nullptr && return this->deploymentStrategy_ == nullptr
        && return this->domain_ == nullptr && return this->granularity_ == nullptr && return this->groupCount_ == nullptr && return this->instanceAmount_ == nullptr && return this->instanceIds_ == nullptr
        && return this->strategy_ == nullptr && return this->tags_ == nullptr; };
    // capacities Field Functions 
    bool hasCapacities() const { return this->capacities_ != nullptr;};
    void deleteCapacities() { this->capacities_ = nullptr;};
    inline const Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities & capacities() const { DARABONBA_PTR_GET_CONST(capacities_, Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities) };
    inline Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities capacities() { DARABONBA_PTR_GET(capacities_, Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities) };
    inline DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setCapacities(const Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities & capacities) { DARABONBA_PTR_SET_VALUE(capacities_, capacities) };
    inline DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setCapacities(Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities && capacities) { DARABONBA_PTR_SET_RVALUE(capacities_, capacities) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // deploymentSetDescription Field Functions 
    bool hasDeploymentSetDescription() const { return this->deploymentSetDescription_ != nullptr;};
    void deleteDeploymentSetDescription() { this->deploymentSetDescription_ = nullptr;};
    inline string deploymentSetDescription() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetDescription_, "") };
    inline DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setDeploymentSetDescription(string deploymentSetDescription) { DARABONBA_PTR_SET_VALUE(deploymentSetDescription_, deploymentSetDescription) };


    // deploymentSetId Field Functions 
    bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
    void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
    inline string deploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
    inline DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


    // deploymentSetName Field Functions 
    bool hasDeploymentSetName() const { return this->deploymentSetName_ != nullptr;};
    void deleteDeploymentSetName() { this->deploymentSetName_ = nullptr;};
    inline string deploymentSetName() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetName_, "") };
    inline DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setDeploymentSetName(string deploymentSetName) { DARABONBA_PTR_SET_VALUE(deploymentSetName_, deploymentSetName) };


    // deploymentStrategy Field Functions 
    bool hasDeploymentStrategy() const { return this->deploymentStrategy_ != nullptr;};
    void deleteDeploymentStrategy() { this->deploymentStrategy_ = nullptr;};
    inline string deploymentStrategy() const { DARABONBA_PTR_GET_DEFAULT(deploymentStrategy_, "") };
    inline DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setDeploymentStrategy(string deploymentStrategy) { DARABONBA_PTR_SET_VALUE(deploymentStrategy_, deploymentStrategy) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline string granularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
    inline DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


    // groupCount Field Functions 
    bool hasGroupCount() const { return this->groupCount_ != nullptr;};
    void deleteGroupCount() { this->groupCount_ = nullptr;};
    inline int32_t groupCount() const { DARABONBA_PTR_GET_DEFAULT(groupCount_, 0) };
    inline DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setGroupCount(int32_t groupCount) { DARABONBA_PTR_SET_VALUE(groupCount_, groupCount) };


    // instanceAmount Field Functions 
    bool hasInstanceAmount() const { return this->instanceAmount_ != nullptr;};
    void deleteInstanceAmount() { this->instanceAmount_ = nullptr;};
    inline int32_t instanceAmount() const { DARABONBA_PTR_GET_DEFAULT(instanceAmount_, 0) };
    inline DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setInstanceAmount(int32_t instanceAmount) { DARABONBA_PTR_SET_VALUE(instanceAmount_, instanceAmount) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetInstanceIds & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetInstanceIds) };
    inline Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetInstanceIds instanceIds() { DARABONBA_PTR_GET(instanceIds_, Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetInstanceIds) };
    inline DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setInstanceIds(const Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetInstanceIds & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setInstanceIds(Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetInstanceIds && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline string strategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
    inline DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTags) };
    inline Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTags) };
    inline DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setTags(const Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet& setTags(Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The details of the capacities of the deployment set. This parameter is valid only when the deployment set contains existing RDS Custom instances. The value contains the details of the capacities of the deployment set in different zones.
    std::shared_ptr<Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities> capacities_ = nullptr;
    // The time when the deployment set was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The deployment set description.
    std::shared_ptr<string> deploymentSetDescription_ = nullptr;
    // The deployment set ID.
    std::shared_ptr<string> deploymentSetId_ = nullptr;
    // The deployment set name.
    std::shared_ptr<string> deploymentSetName_ = nullptr;
    // The deployment strategy. The return value of this parameter is the value of the `Strategy` request parameter.
    std::shared_ptr<string> deploymentStrategy_ = nullptr;
    // The deployment domain.
    std::shared_ptr<string> domain_ = nullptr;
    // The deployment granularity.
    std::shared_ptr<string> granularity_ = nullptr;
    // The number of groups in the deployment set.
    // 
    // >  This parameter is valid only when the Strategy request parameter is set to AvailabilityGroup.
    std::shared_ptr<int32_t> groupCount_ = nullptr;
    // The number of RDS Custom instances in the deployment set.
    std::shared_ptr<int32_t> instanceAmount_ = nullptr;
    // The ID of the RDS Custom instance in the deployment set.
    std::shared_ptr<Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetInstanceIds> instanceIds_ = nullptr;
    // The deployment strategy.
    std::shared_ptr<string> strategy_ = nullptr;
    std::shared_ptr<Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
