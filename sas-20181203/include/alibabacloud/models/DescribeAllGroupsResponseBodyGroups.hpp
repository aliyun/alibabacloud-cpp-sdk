// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLGROUPSRESPONSEBODYGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLGROUPSRESPONSEBODYGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAllGroupsResponseBodyGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllGroupsResponseBodyGroups& obj) { 
      DARABONBA_PTR_TO_JSON(GroupFlag, groupFlag_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllGroupsResponseBodyGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupFlag, groupFlag_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    DescribeAllGroupsResponseBodyGroups() = default ;
    DescribeAllGroupsResponseBodyGroups(const DescribeAllGroupsResponseBodyGroups &) = default ;
    DescribeAllGroupsResponseBodyGroups(DescribeAllGroupsResponseBodyGroups &&) = default ;
    DescribeAllGroupsResponseBodyGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllGroupsResponseBodyGroups() = default ;
    DescribeAllGroupsResponseBodyGroups& operator=(const DescribeAllGroupsResponseBodyGroups &) = default ;
    DescribeAllGroupsResponseBodyGroups& operator=(DescribeAllGroupsResponseBodyGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupFlag_ != nullptr
        && this->groupId_ != nullptr && this->groupName_ != nullptr; };
    // groupFlag Field Functions 
    bool hasGroupFlag() const { return this->groupFlag_ != nullptr;};
    void deleteGroupFlag() { this->groupFlag_ = nullptr;};
    inline int32_t groupFlag() const { DARABONBA_PTR_GET_DEFAULT(groupFlag_, 0) };
    inline DescribeAllGroupsResponseBodyGroups& setGroupFlag(int32_t groupFlag) { DARABONBA_PTR_SET_VALUE(groupFlag_, groupFlag) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int32_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0) };
    inline DescribeAllGroupsResponseBodyGroups& setGroupId(int32_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeAllGroupsResponseBodyGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // The type of the server group. Valid values:
    // 
    // *   **0**: default group
    // *   **1**: other groups
    std::shared_ptr<int32_t> groupFlag_ = nullptr;
    // The ID of the server group.
    std::shared_ptr<int32_t> groupId_ = nullptr;
    // The name of the server group.
    std::shared_ptr<string> groupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
