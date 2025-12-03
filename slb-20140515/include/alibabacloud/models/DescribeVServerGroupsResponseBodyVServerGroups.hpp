// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSERVERGROUPSRESPONSEBODYVSERVERGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSERVERGROUPSRESPONSEBODYVSERVERGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeVServerGroupsResponseBodyVServerGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVServerGroupsResponseBodyVServerGroups& obj) { 
      DARABONBA_PTR_TO_JSON(VServerGroup, VServerGroup_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVServerGroupsResponseBodyVServerGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(VServerGroup, VServerGroup_);
    };
    DescribeVServerGroupsResponseBodyVServerGroups() = default ;
    DescribeVServerGroupsResponseBodyVServerGroups(const DescribeVServerGroupsResponseBodyVServerGroups &) = default ;
    DescribeVServerGroupsResponseBodyVServerGroups(DescribeVServerGroupsResponseBodyVServerGroups &&) = default ;
    DescribeVServerGroupsResponseBodyVServerGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVServerGroupsResponseBodyVServerGroups() = default ;
    DescribeVServerGroupsResponseBodyVServerGroups& operator=(const DescribeVServerGroupsResponseBodyVServerGroups &) = default ;
    DescribeVServerGroupsResponseBodyVServerGroups& operator=(DescribeVServerGroupsResponseBodyVServerGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->VServerGroup_ == nullptr; };
    // VServerGroup Field Functions 
    bool hasVServerGroup() const { return this->VServerGroup_ != nullptr;};
    void deleteVServerGroup() { this->VServerGroup_ = nullptr;};
    inline const vector<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup> & VServerGroup() const { DARABONBA_PTR_GET_CONST(VServerGroup_, vector<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup>) };
    inline vector<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup> VServerGroup() { DARABONBA_PTR_GET(VServerGroup_, vector<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup>) };
    inline DescribeVServerGroupsResponseBodyVServerGroups& setVServerGroup(const vector<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup> & VServerGroup) { DARABONBA_PTR_SET_VALUE(VServerGroup_, VServerGroup) };
    inline DescribeVServerGroupsResponseBodyVServerGroups& setVServerGroup(vector<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup> && VServerGroup) { DARABONBA_PTR_SET_RVALUE(VServerGroup_, VServerGroup) };


  protected:
    std::shared_ptr<vector<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup>> VServerGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
