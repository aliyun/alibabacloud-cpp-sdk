// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERSRESPONSEBODYUSERSGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERSRESPONSEBODYUSERSGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeUsersResponseBodyUsersGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsersResponseBodyUsersGroups& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsersResponseBodyUsersGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    DescribeUsersResponseBodyUsersGroups() = default ;
    DescribeUsersResponseBodyUsersGroups(const DescribeUsersResponseBodyUsersGroups &) = default ;
    DescribeUsersResponseBodyUsersGroups(DescribeUsersResponseBodyUsersGroups &&) = default ;
    DescribeUsersResponseBodyUsersGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsersResponseBodyUsersGroups() = default ;
    DescribeUsersResponseBodyUsersGroups& operator=(const DescribeUsersResponseBodyUsersGroups &) = default ;
    DescribeUsersResponseBodyUsersGroups& operator=(DescribeUsersResponseBodyUsersGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupId_ != nullptr
        && this->groupName_ != nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeUsersResponseBodyUsersGroups& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeUsersResponseBodyUsersGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // The ID of the user group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the user group.
    std::shared_ptr<string> groupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
