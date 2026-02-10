// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPSTRUCTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPSTRUCTRESPONSEBODY_HPP_
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
  class DescribeGroupStructResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupStructResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupFather, groupFather_);
      DARABONBA_PTR_TO_JSON(GroupFlag, groupFlag_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupIndex, groupIndex_);
      DARABONBA_PTR_TO_JSON(GroupLevel, groupLevel_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(MachineNum, machineNum_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupStructResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupFather, groupFather_);
      DARABONBA_PTR_FROM_JSON(GroupFlag, groupFlag_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupIndex, groupIndex_);
      DARABONBA_PTR_FROM_JSON(GroupLevel, groupLevel_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(MachineNum, machineNum_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGroupStructResponseBody() = default ;
    DescribeGroupStructResponseBody(const DescribeGroupStructResponseBody &) = default ;
    DescribeGroupStructResponseBody(DescribeGroupStructResponseBody &&) = default ;
    DescribeGroupStructResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupStructResponseBody() = default ;
    DescribeGroupStructResponseBody& operator=(const DescribeGroupStructResponseBody &) = default ;
    DescribeGroupStructResponseBody& operator=(DescribeGroupStructResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupFather_ == nullptr
        && this->groupFlag_ == nullptr && this->groupId_ == nullptr && this->groupIndex_ == nullptr && this->groupLevel_ == nullptr && this->groupName_ == nullptr
        && this->groups_ == nullptr && this->machineNum_ == nullptr && this->requestId_ == nullptr; };
    // groupFather Field Functions 
    bool hasGroupFather() const { return this->groupFather_ != nullptr;};
    void deleteGroupFather() { this->groupFather_ = nullptr;};
    inline int32_t getGroupFather() const { DARABONBA_PTR_GET_DEFAULT(groupFather_, 0) };
    inline DescribeGroupStructResponseBody& setGroupFather(int32_t groupFather) { DARABONBA_PTR_SET_VALUE(groupFather_, groupFather) };


    // groupFlag Field Functions 
    bool hasGroupFlag() const { return this->groupFlag_ != nullptr;};
    void deleteGroupFlag() { this->groupFlag_ = nullptr;};
    inline int32_t getGroupFlag() const { DARABONBA_PTR_GET_DEFAULT(groupFlag_, 0) };
    inline DescribeGroupStructResponseBody& setGroupFlag(int32_t groupFlag) { DARABONBA_PTR_SET_VALUE(groupFlag_, groupFlag) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DescribeGroupStructResponseBody& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupIndex Field Functions 
    bool hasGroupIndex() const { return this->groupIndex_ != nullptr;};
    void deleteGroupIndex() { this->groupIndex_ = nullptr;};
    inline int32_t getGroupIndex() const { DARABONBA_PTR_GET_DEFAULT(groupIndex_, 0) };
    inline DescribeGroupStructResponseBody& setGroupIndex(int32_t groupIndex) { DARABONBA_PTR_SET_VALUE(groupIndex_, groupIndex) };


    // groupLevel Field Functions 
    bool hasGroupLevel() const { return this->groupLevel_ != nullptr;};
    void deleteGroupLevel() { this->groupLevel_ = nullptr;};
    inline int32_t getGroupLevel() const { DARABONBA_PTR_GET_DEFAULT(groupLevel_, 0) };
    inline DescribeGroupStructResponseBody& setGroupLevel(int32_t groupLevel) { DARABONBA_PTR_SET_VALUE(groupLevel_, groupLevel) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeGroupStructResponseBody& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<string> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<string>) };
    inline vector<string> getGroups() { DARABONBA_PTR_GET(groups_, vector<string>) };
    inline DescribeGroupStructResponseBody& setGroups(const vector<string> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline DescribeGroupStructResponseBody& setGroups(vector<string> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // machineNum Field Functions 
    bool hasMachineNum() const { return this->machineNum_ != nullptr;};
    void deleteMachineNum() { this->machineNum_ = nullptr;};
    inline int32_t getMachineNum() const { DARABONBA_PTR_GET_DEFAULT(machineNum_, 0) };
    inline DescribeGroupStructResponseBody& setMachineNum(int32_t machineNum) { DARABONBA_PTR_SET_VALUE(machineNum_, machineNum) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupStructResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The parent node of the group.
    shared_ptr<int32_t> groupFather_ {};
    // The type of the server group. Valid values:
    // 
    // *   **0**: the default group
    // *   **1**: other groups
    shared_ptr<int32_t> groupFlag_ {};
    // The ID of the server group.
    shared_ptr<int64_t> groupId_ {};
    // The sequence number.
    shared_ptr<int32_t> groupIndex_ {};
    // The level of the application group.
    shared_ptr<int32_t> groupLevel_ {};
    // The name of the server group.
    shared_ptr<string> groupName_ {};
    // An array that consists of child groups.
    shared_ptr<vector<string>> groups_ {};
    // The number of servers in the group.
    shared_ptr<int32_t> machineNum_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
