// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADDONSRESPONSEBODYCOMPONENTGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADDONSRESPONSEBODYCOMPONENTGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAddonsResponseBodyComponentGroupsItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeAddonsResponseBodyComponentGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAddonsResponseBodyComponentGroups& obj) { 
      DARABONBA_PTR_TO_JSON(group_name, groupName_);
      DARABONBA_PTR_TO_JSON(items, items_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAddonsResponseBodyComponentGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(group_name, groupName_);
      DARABONBA_PTR_FROM_JSON(items, items_);
    };
    DescribeAddonsResponseBodyComponentGroups() = default ;
    DescribeAddonsResponseBodyComponentGroups(const DescribeAddonsResponseBodyComponentGroups &) = default ;
    DescribeAddonsResponseBodyComponentGroups(DescribeAddonsResponseBodyComponentGroups &&) = default ;
    DescribeAddonsResponseBodyComponentGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAddonsResponseBodyComponentGroups() = default ;
    DescribeAddonsResponseBodyComponentGroups& operator=(const DescribeAddonsResponseBodyComponentGroups &) = default ;
    DescribeAddonsResponseBodyComponentGroups& operator=(DescribeAddonsResponseBodyComponentGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupName_ != nullptr
        && this->items_ != nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeAddonsResponseBodyComponentGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::DescribeAddonsResponseBodyComponentGroupsItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::DescribeAddonsResponseBodyComponentGroupsItems>) };
    inline vector<Models::DescribeAddonsResponseBodyComponentGroupsItems> items() { DARABONBA_PTR_GET(items_, vector<Models::DescribeAddonsResponseBodyComponentGroupsItems>) };
    inline DescribeAddonsResponseBodyComponentGroups& setItems(const vector<Models::DescribeAddonsResponseBodyComponentGroupsItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeAddonsResponseBodyComponentGroups& setItems(vector<Models::DescribeAddonsResponseBodyComponentGroupsItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


  protected:
    // The name of the component group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The names of the components in the component group.
    std::shared_ptr<vector<Models::DescribeAddonsResponseBodyComponentGroupsItems>> items_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
