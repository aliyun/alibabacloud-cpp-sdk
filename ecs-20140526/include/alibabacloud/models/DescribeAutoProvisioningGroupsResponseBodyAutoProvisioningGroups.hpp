// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOPROVISIONINGGROUPSRESPONSEBODYAUTOPROVISIONINGGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOPROVISIONINGGROUPSRESPONSEBODYAUTOPROVISIONINGGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroups& obj) { 
      DARABONBA_PTR_TO_JSON(AutoProvisioningGroup, autoProvisioningGroup_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoProvisioningGroup, autoProvisioningGroup_);
    };
    DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroups() = default ;
    DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroups(const DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroups &) = default ;
    DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroups(DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroups &&) = default ;
    DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroups() = default ;
    DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroups& operator=(const DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroups &) = default ;
    DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroups& operator=(DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoProvisioningGroup_ == nullptr; };
    // autoProvisioningGroup Field Functions 
    bool hasAutoProvisioningGroup() const { return this->autoProvisioningGroup_ != nullptr;};
    void deleteAutoProvisioningGroup() { this->autoProvisioningGroup_ = nullptr;};
    inline const vector<Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup> & autoProvisioningGroup() const { DARABONBA_PTR_GET_CONST(autoProvisioningGroup_, vector<Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup>) };
    inline vector<Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup> autoProvisioningGroup() { DARABONBA_PTR_GET(autoProvisioningGroup_, vector<Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup>) };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroups& setAutoProvisioningGroup(const vector<Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup> & autoProvisioningGroup) { DARABONBA_PTR_SET_VALUE(autoProvisioningGroup_, autoProvisioningGroup) };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroups& setAutoProvisioningGroup(vector<Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup> && autoProvisioningGroup) { DARABONBA_PTR_SET_RVALUE(autoProvisioningGroup_, autoProvisioningGroup) };


  protected:
    std::shared_ptr<vector<Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup>> autoProvisioningGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
