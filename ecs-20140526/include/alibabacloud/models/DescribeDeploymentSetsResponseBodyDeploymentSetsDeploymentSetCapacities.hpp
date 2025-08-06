// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYMENTSETSRESPONSEBODYDEPLOYMENTSETSDEPLOYMENTSETCAPACITIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYMENTSETSRESPONSEBODYDEPLOYMENTSETSDEPLOYMENTSETCAPACITIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities& obj) { 
      DARABONBA_PTR_TO_JSON(Capacity, capacity_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities& obj) { 
      DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
    };
    DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities() = default ;
    DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities(const DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities &) = default ;
    DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities(DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities &&) = default ;
    DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities() = default ;
    DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities& operator=(const DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities &) = default ;
    DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities& operator=(DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->capacity_ != nullptr; };
    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline const vector<Models::DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity> & capacity() const { DARABONBA_PTR_GET_CONST(capacity_, vector<Models::DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity>) };
    inline vector<Models::DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity> capacity() { DARABONBA_PTR_GET(capacity_, vector<Models::DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity>) };
    inline DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities& setCapacity(const vector<Models::DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity> & capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };
    inline DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities& setCapacity(vector<Models::DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity> && capacity) { DARABONBA_PTR_SET_RVALUE(capacity_, capacity) };


  protected:
    std::shared_ptr<vector<Models::DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity>> capacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
