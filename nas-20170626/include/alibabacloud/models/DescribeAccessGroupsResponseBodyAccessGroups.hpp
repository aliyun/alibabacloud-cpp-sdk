// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSGROUPSRESPONSEBODYACCESSGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSGROUPSRESPONSEBODYACCESSGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeAccessGroupsResponseBodyAccessGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessGroupsResponseBodyAccessGroups& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroup, accessGroup_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessGroupsResponseBodyAccessGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroup, accessGroup_);
    };
    DescribeAccessGroupsResponseBodyAccessGroups() = default ;
    DescribeAccessGroupsResponseBodyAccessGroups(const DescribeAccessGroupsResponseBodyAccessGroups &) = default ;
    DescribeAccessGroupsResponseBodyAccessGroups(DescribeAccessGroupsResponseBodyAccessGroups &&) = default ;
    DescribeAccessGroupsResponseBodyAccessGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessGroupsResponseBodyAccessGroups() = default ;
    DescribeAccessGroupsResponseBodyAccessGroups& operator=(const DescribeAccessGroupsResponseBodyAccessGroups &) = default ;
    DescribeAccessGroupsResponseBodyAccessGroups& operator=(DescribeAccessGroupsResponseBodyAccessGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessGroup_ == nullptr; };
    // accessGroup Field Functions 
    bool hasAccessGroup() const { return this->accessGroup_ != nullptr;};
    void deleteAccessGroup() { this->accessGroup_ = nullptr;};
    inline const vector<Models::DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup> & accessGroup() const { DARABONBA_PTR_GET_CONST(accessGroup_, vector<Models::DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup>) };
    inline vector<Models::DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup> accessGroup() { DARABONBA_PTR_GET(accessGroup_, vector<Models::DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup>) };
    inline DescribeAccessGroupsResponseBodyAccessGroups& setAccessGroup(const vector<Models::DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup> & accessGroup) { DARABONBA_PTR_SET_VALUE(accessGroup_, accessGroup) };
    inline DescribeAccessGroupsResponseBodyAccessGroups& setAccessGroup(vector<Models::DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup> && accessGroup) { DARABONBA_PTR_SET_RVALUE(accessGroup_, accessGroup) };


  protected:
    std::shared_ptr<vector<Models::DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup>> accessGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
