// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESHAREPERMISSIONRESPONSEBODYSHAREGROUPSSHAREGROUP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESHAREPERMISSIONRESPONSEBODYSHAREGROUPSSHAREGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImageSharePermissionResponseBodyShareGroupsShareGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageSharePermissionResponseBodyShareGroupsShareGroup& obj) { 
      DARABONBA_PTR_TO_JSON(Group, group_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageSharePermissionResponseBodyShareGroupsShareGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(Group, group_);
    };
    DescribeImageSharePermissionResponseBodyShareGroupsShareGroup() = default ;
    DescribeImageSharePermissionResponseBodyShareGroupsShareGroup(const DescribeImageSharePermissionResponseBodyShareGroupsShareGroup &) = default ;
    DescribeImageSharePermissionResponseBodyShareGroupsShareGroup(DescribeImageSharePermissionResponseBodyShareGroupsShareGroup &&) = default ;
    DescribeImageSharePermissionResponseBodyShareGroupsShareGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageSharePermissionResponseBodyShareGroupsShareGroup() = default ;
    DescribeImageSharePermissionResponseBodyShareGroupsShareGroup& operator=(const DescribeImageSharePermissionResponseBodyShareGroupsShareGroup &) = default ;
    DescribeImageSharePermissionResponseBodyShareGroupsShareGroup& operator=(DescribeImageSharePermissionResponseBodyShareGroupsShareGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->group_ != nullptr; };
    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline DescribeImageSharePermissionResponseBodyShareGroupsShareGroup& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


  protected:
    // The shared group.
    std::shared_ptr<string> group_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
