// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCDEPLOYMENTSETSRESPONSEBODYDEPLOYMENTSETSDEPLOYMENTSETCAPACITIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCDEPLOYMENTSETSRESPONSEBODYDEPLOYMENTSETSDEPLOYMENTSETCAPACITIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities& obj) { 
      DARABONBA_PTR_TO_JSON(Capacity, capacity_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities& obj) { 
      DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
    };
    DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities() = default ;
    DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities(const DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities &) = default ;
    DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities(DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities &&) = default ;
    DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities() = default ;
    DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities& operator=(const DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities &) = default ;
    DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities& operator=(DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capacity_ == nullptr; };
    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline const vector<Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity> & capacity() const { DARABONBA_PTR_GET_CONST(capacity_, vector<Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity>) };
    inline vector<Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity> capacity() { DARABONBA_PTR_GET(capacity_, vector<Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity>) };
    inline DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities& setCapacity(const vector<Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity> & capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };
    inline DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacities& setCapacity(vector<Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity> && capacity) { DARABONBA_PTR_SET_RVALUE(capacity_, capacity) };


  protected:
    std::shared_ptr<vector<Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity>> capacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
