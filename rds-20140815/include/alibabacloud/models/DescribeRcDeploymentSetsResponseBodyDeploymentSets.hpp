// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCDEPLOYMENTSETSRESPONSEBODYDEPLOYMENTSETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCDEPLOYMENTSETSRESPONSEBODYDEPLOYMENTSETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCDeploymentSetsResponseBodyDeploymentSets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCDeploymentSetsResponseBodyDeploymentSets& obj) { 
      DARABONBA_PTR_TO_JSON(DeploymentSet, deploymentSet_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCDeploymentSetsResponseBodyDeploymentSets& obj) { 
      DARABONBA_PTR_FROM_JSON(DeploymentSet, deploymentSet_);
    };
    DescribeRCDeploymentSetsResponseBodyDeploymentSets() = default ;
    DescribeRCDeploymentSetsResponseBodyDeploymentSets(const DescribeRCDeploymentSetsResponseBodyDeploymentSets &) = default ;
    DescribeRCDeploymentSetsResponseBodyDeploymentSets(DescribeRCDeploymentSetsResponseBodyDeploymentSets &&) = default ;
    DescribeRCDeploymentSetsResponseBodyDeploymentSets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCDeploymentSetsResponseBodyDeploymentSets() = default ;
    DescribeRCDeploymentSetsResponseBodyDeploymentSets& operator=(const DescribeRCDeploymentSetsResponseBodyDeploymentSets &) = default ;
    DescribeRCDeploymentSetsResponseBodyDeploymentSets& operator=(DescribeRCDeploymentSetsResponseBodyDeploymentSets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentSet_ == nullptr; };
    // deploymentSet Field Functions 
    bool hasDeploymentSet() const { return this->deploymentSet_ != nullptr;};
    void deleteDeploymentSet() { this->deploymentSet_ = nullptr;};
    inline const vector<Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet> & deploymentSet() const { DARABONBA_PTR_GET_CONST(deploymentSet_, vector<Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet>) };
    inline vector<Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet> deploymentSet() { DARABONBA_PTR_GET(deploymentSet_, vector<Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet>) };
    inline DescribeRCDeploymentSetsResponseBodyDeploymentSets& setDeploymentSet(const vector<Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet> & deploymentSet) { DARABONBA_PTR_SET_VALUE(deploymentSet_, deploymentSet) };
    inline DescribeRCDeploymentSetsResponseBodyDeploymentSets& setDeploymentSet(vector<Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet> && deploymentSet) { DARABONBA_PTR_SET_RVALUE(deploymentSet_, deploymentSet) };


  protected:
    std::shared_ptr<vector<Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSet>> deploymentSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
