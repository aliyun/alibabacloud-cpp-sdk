// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSRESOURCEGROUPSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSRESOURCEGROUPSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApsResourceGroupsResponseBodyDataResourceGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsResourceGroupsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsResourceGroupsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceGroups, resourceGroups_);
      DARABONBA_PTR_TO_JSON(Step, step_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsResourceGroupsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceGroups, resourceGroups_);
      DARABONBA_PTR_FROM_JSON(Step, step_);
    };
    DescribeApsResourceGroupsResponseBodyData() = default ;
    DescribeApsResourceGroupsResponseBodyData(const DescribeApsResourceGroupsResponseBodyData &) = default ;
    DescribeApsResourceGroupsResponseBodyData(DescribeApsResourceGroupsResponseBodyData &&) = default ;
    DescribeApsResourceGroupsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsResourceGroupsResponseBodyData() = default ;
    DescribeApsResourceGroupsResponseBodyData& operator=(const DescribeApsResourceGroupsResponseBodyData &) = default ;
    DescribeApsResourceGroupsResponseBodyData& operator=(DescribeApsResourceGroupsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceGroups_ != nullptr
        && this->step_ != nullptr; };
    // resourceGroups Field Functions 
    bool hasResourceGroups() const { return this->resourceGroups_ != nullptr;};
    void deleteResourceGroups() { this->resourceGroups_ = nullptr;};
    inline const vector<Models::DescribeApsResourceGroupsResponseBodyDataResourceGroups> & resourceGroups() const { DARABONBA_PTR_GET_CONST(resourceGroups_, vector<Models::DescribeApsResourceGroupsResponseBodyDataResourceGroups>) };
    inline vector<Models::DescribeApsResourceGroupsResponseBodyDataResourceGroups> resourceGroups() { DARABONBA_PTR_GET(resourceGroups_, vector<Models::DescribeApsResourceGroupsResponseBodyDataResourceGroups>) };
    inline DescribeApsResourceGroupsResponseBodyData& setResourceGroups(const vector<Models::DescribeApsResourceGroupsResponseBodyDataResourceGroups> & resourceGroups) { DARABONBA_PTR_SET_VALUE(resourceGroups_, resourceGroups) };
    inline DescribeApsResourceGroupsResponseBodyData& setResourceGroups(vector<Models::DescribeApsResourceGroupsResponseBodyDataResourceGroups> && resourceGroups) { DARABONBA_PTR_SET_RVALUE(resourceGroups_, resourceGroups) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline int64_t step() const { DARABONBA_PTR_GET_DEFAULT(step_, 0L) };
    inline DescribeApsResourceGroupsResponseBodyData& setStep(int64_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


  protected:
    // The queried resource groups.
    std::shared_ptr<vector<Models::DescribeApsResourceGroupsResponseBodyDataResourceGroups>> resourceGroups_ = nullptr;
    // The step size of resources. Unit: AnalyticDB compute units (ACUs).
    // 
    // *   If the value of GroupType is **Interactive**, 16 is returned.
    // *   If the value of GroupType is **Job**, 8 is returned.
    std::shared_ptr<int64_t> step_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
