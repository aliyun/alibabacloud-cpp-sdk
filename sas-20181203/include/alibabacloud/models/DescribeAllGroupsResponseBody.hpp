// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAllGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAllGroupsResponseBody() = default ;
    DescribeAllGroupsResponseBody(const DescribeAllGroupsResponseBody &) = default ;
    DescribeAllGroupsResponseBody(DescribeAllGroupsResponseBody &&) = default ;
    DescribeAllGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllGroupsResponseBody() = default ;
    DescribeAllGroupsResponseBody& operator=(const DescribeAllGroupsResponseBody &) = default ;
    DescribeAllGroupsResponseBody& operator=(DescribeAllGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Groups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Groups& obj) { 
        DARABONBA_PTR_TO_JSON(GroupFlag, groupFlag_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      };
      friend void from_json(const Darabonba::Json& j, Groups& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupFlag, groupFlag_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      };
      Groups() = default ;
      Groups(const Groups &) = default ;
      Groups(Groups &&) = default ;
      Groups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Groups() = default ;
      Groups& operator=(const Groups &) = default ;
      Groups& operator=(Groups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupFlag_ == nullptr
        && this->groupId_ == nullptr && this->groupName_ == nullptr; };
      // groupFlag Field Functions 
      bool hasGroupFlag() const { return this->groupFlag_ != nullptr;};
      void deleteGroupFlag() { this->groupFlag_ = nullptr;};
      inline int32_t getGroupFlag() const { DARABONBA_PTR_GET_DEFAULT(groupFlag_, 0) };
      inline Groups& setGroupFlag(int32_t groupFlag) { DARABONBA_PTR_SET_VALUE(groupFlag_, groupFlag) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline int32_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0) };
      inline Groups& setGroupId(int32_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Groups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    protected:
      // The type of the server group. Valid values:
      // 
      // *   **0**: default group
      // *   **1**: other groups
      shared_ptr<int32_t> groupFlag_ {};
      // The ID of the server group.
      shared_ptr<int32_t> groupId_ {};
      // The name of the server group.
      shared_ptr<string> groupName_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->groups_ == nullptr && this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeAllGroupsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<DescribeAllGroupsResponseBody::Groups> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<DescribeAllGroupsResponseBody::Groups>) };
    inline vector<DescribeAllGroupsResponseBody::Groups> getGroups() { DARABONBA_PTR_GET(groups_, vector<DescribeAllGroupsResponseBody::Groups>) };
    inline DescribeAllGroupsResponseBody& setGroups(const vector<DescribeAllGroupsResponseBody::Groups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline DescribeAllGroupsResponseBody& setGroups(vector<DescribeAllGroupsResponseBody::Groups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAllGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The total number of server groups.
    shared_ptr<int32_t> count_ {};
    // The grouping information about the servers.
    shared_ptr<vector<DescribeAllGroupsResponseBody::Groups>> groups_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
