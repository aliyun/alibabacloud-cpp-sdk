// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYMENTSETSRESPONSEBODYDEPLOYMENTSETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYMENTSETSRESPONSEBODYDEPLOYMENTSETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDeploymentSetsResponseBodyDeploymentSets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeploymentSetsResponseBodyDeploymentSets& obj) { 
      DARABONBA_PTR_TO_JSON(DeploymentSet, deploymentSet_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeploymentSetsResponseBodyDeploymentSets& obj) { 
      DARABONBA_PTR_FROM_JSON(DeploymentSet, deploymentSet_);
    };
    DescribeDeploymentSetsResponseBodyDeploymentSets() = default ;
    DescribeDeploymentSetsResponseBodyDeploymentSets(const DescribeDeploymentSetsResponseBodyDeploymentSets &) = default ;
    DescribeDeploymentSetsResponseBodyDeploymentSets(DescribeDeploymentSetsResponseBodyDeploymentSets &&) = default ;
    DescribeDeploymentSetsResponseBodyDeploymentSets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeploymentSetsResponseBodyDeploymentSets() = default ;
    DescribeDeploymentSetsResponseBodyDeploymentSets& operator=(const DescribeDeploymentSetsResponseBodyDeploymentSets &) = default ;
    DescribeDeploymentSetsResponseBodyDeploymentSets& operator=(DescribeDeploymentSetsResponseBodyDeploymentSets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentSet_ == nullptr; };
    // deploymentSet Field Functions 
    bool hasDeploymentSet() const { return this->deploymentSet_ != nullptr;};
    void deleteDeploymentSet() { this->deploymentSet_ = nullptr;};
    inline const vector<Models::DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet> & deploymentSet() const { DARABONBA_PTR_GET_CONST(deploymentSet_, vector<Models::DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet>) };
    inline vector<Models::DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet> deploymentSet() { DARABONBA_PTR_GET(deploymentSet_, vector<Models::DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet>) };
    inline DescribeDeploymentSetsResponseBodyDeploymentSets& setDeploymentSet(const vector<Models::DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet> & deploymentSet) { DARABONBA_PTR_SET_VALUE(deploymentSet_, deploymentSet) };
    inline DescribeDeploymentSetsResponseBodyDeploymentSets& setDeploymentSet(vector<Models::DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet> && deploymentSet) { DARABONBA_PTR_SET_RVALUE(deploymentSet_, deploymentSet) };


  protected:
    std::shared_ptr<vector<Models::DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSet>> deploymentSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
