// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESHAREPERMISSIONRESPONSEBODYSHAREGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESHAREPERMISSIONRESPONSEBODYSHAREGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageSharePermissionResponseBodyShareGroupsShareGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImageSharePermissionResponseBodyShareGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageSharePermissionResponseBodyShareGroups& obj) { 
      DARABONBA_PTR_TO_JSON(ShareGroup, shareGroup_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageSharePermissionResponseBodyShareGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(ShareGroup, shareGroup_);
    };
    DescribeImageSharePermissionResponseBodyShareGroups() = default ;
    DescribeImageSharePermissionResponseBodyShareGroups(const DescribeImageSharePermissionResponseBodyShareGroups &) = default ;
    DescribeImageSharePermissionResponseBodyShareGroups(DescribeImageSharePermissionResponseBodyShareGroups &&) = default ;
    DescribeImageSharePermissionResponseBodyShareGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageSharePermissionResponseBodyShareGroups() = default ;
    DescribeImageSharePermissionResponseBodyShareGroups& operator=(const DescribeImageSharePermissionResponseBodyShareGroups &) = default ;
    DescribeImageSharePermissionResponseBodyShareGroups& operator=(DescribeImageSharePermissionResponseBodyShareGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->shareGroup_ != nullptr; };
    // shareGroup Field Functions 
    bool hasShareGroup() const { return this->shareGroup_ != nullptr;};
    void deleteShareGroup() { this->shareGroup_ = nullptr;};
    inline const vector<Models::DescribeImageSharePermissionResponseBodyShareGroupsShareGroup> & shareGroup() const { DARABONBA_PTR_GET_CONST(shareGroup_, vector<Models::DescribeImageSharePermissionResponseBodyShareGroupsShareGroup>) };
    inline vector<Models::DescribeImageSharePermissionResponseBodyShareGroupsShareGroup> shareGroup() { DARABONBA_PTR_GET(shareGroup_, vector<Models::DescribeImageSharePermissionResponseBodyShareGroupsShareGroup>) };
    inline DescribeImageSharePermissionResponseBodyShareGroups& setShareGroup(const vector<Models::DescribeImageSharePermissionResponseBodyShareGroupsShareGroup> & shareGroup) { DARABONBA_PTR_SET_VALUE(shareGroup_, shareGroup) };
    inline DescribeImageSharePermissionResponseBodyShareGroups& setShareGroup(vector<Models::DescribeImageSharePermissionResponseBodyShareGroupsShareGroup> && shareGroup) { DARABONBA_PTR_SET_RVALUE(shareGroup_, shareGroup) };


  protected:
    std::shared_ptr<vector<Models::DescribeImageSharePermissionResponseBodyShareGroupsShareGroup>> shareGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
