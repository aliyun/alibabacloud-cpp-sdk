// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICSTRENGTHRESPONSEBODYELASTICSTRENGTHMODELS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICSTRENGTHRESPONSEBODYELASTICSTRENGTHMODELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeElasticStrengthResponseBodyElasticStrengthModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticStrengthResponseBodyElasticStrengthModels& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticStrength, elasticStrength_);
      DARABONBA_PTR_TO_JSON(ResourcePools, resourcePools_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(TotalStrength, totalStrength_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticStrengthResponseBodyElasticStrengthModels& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticStrength, elasticStrength_);
      DARABONBA_PTR_FROM_JSON(ResourcePools, resourcePools_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(TotalStrength, totalStrength_);
    };
    DescribeElasticStrengthResponseBodyElasticStrengthModels() = default ;
    DescribeElasticStrengthResponseBodyElasticStrengthModels(const DescribeElasticStrengthResponseBodyElasticStrengthModels &) = default ;
    DescribeElasticStrengthResponseBodyElasticStrengthModels(DescribeElasticStrengthResponseBodyElasticStrengthModels &&) = default ;
    DescribeElasticStrengthResponseBodyElasticStrengthModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticStrengthResponseBodyElasticStrengthModels() = default ;
    DescribeElasticStrengthResponseBodyElasticStrengthModels& operator=(const DescribeElasticStrengthResponseBodyElasticStrengthModels &) = default ;
    DescribeElasticStrengthResponseBodyElasticStrengthModels& operator=(DescribeElasticStrengthResponseBodyElasticStrengthModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elasticStrength_ != nullptr
        && this->resourcePools_ != nullptr && this->scalingGroupId_ != nullptr && this->totalStrength_ != nullptr; };
    // elasticStrength Field Functions 
    bool hasElasticStrength() const { return this->elasticStrength_ != nullptr;};
    void deleteElasticStrength() { this->elasticStrength_ = nullptr;};
    inline string elasticStrength() const { DARABONBA_PTR_GET_DEFAULT(elasticStrength_, "") };
    inline DescribeElasticStrengthResponseBodyElasticStrengthModels& setElasticStrength(string elasticStrength) { DARABONBA_PTR_SET_VALUE(elasticStrength_, elasticStrength) };


    // resourcePools Field Functions 
    bool hasResourcePools() const { return this->resourcePools_ != nullptr;};
    void deleteResourcePools() { this->resourcePools_ = nullptr;};
    inline const vector<Models::DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools> & resourcePools() const { DARABONBA_PTR_GET_CONST(resourcePools_, vector<Models::DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools>) };
    inline vector<Models::DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools> resourcePools() { DARABONBA_PTR_GET(resourcePools_, vector<Models::DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools>) };
    inline DescribeElasticStrengthResponseBodyElasticStrengthModels& setResourcePools(const vector<Models::DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools> & resourcePools) { DARABONBA_PTR_SET_VALUE(resourcePools_, resourcePools) };
    inline DescribeElasticStrengthResponseBodyElasticStrengthModels& setResourcePools(vector<Models::DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools> && resourcePools) { DARABONBA_PTR_SET_RVALUE(resourcePools_, resourcePools) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DescribeElasticStrengthResponseBodyElasticStrengthModels& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // totalStrength Field Functions 
    bool hasTotalStrength() const { return this->totalStrength_ != nullptr;};
    void deleteTotalStrength() { this->totalStrength_ = nullptr;};
    inline double totalStrength() const { DARABONBA_PTR_GET_DEFAULT(totalStrength_, 0.0) };
    inline DescribeElasticStrengthResponseBodyElasticStrengthModels& setTotalStrength(double totalStrength) { DARABONBA_PTR_SET_VALUE(totalStrength_, totalStrength) };


  protected:
    // The scaling strength level of the scaling group. Valid values:
    // 
    // *   Strong
    // *   Medium
    // *   Weak
    std::shared_ptr<string> elasticStrength_ = nullptr;
    // The resource pools.
    std::shared_ptr<vector<Models::DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools>> resourcePools_ = nullptr;
    // The ID of the scaling group.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
    // The scaling strength score of the scaling group. Each combination of instance type + zone is scored from 0 to 1 based on its availability, with 0 being the weakest scaling strength and 1 being the strongest. The scaling strength score of the scaling group is measured by the combined scores of all the combinations of instance type + zone.
    // 
    // **
    // 
    // **Warning** This parameter is deprecated.
    std::shared_ptr<double> totalStrength_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
