// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVULSCANTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVULSCANTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateVulScanTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVulScanTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_TO_JSON(TaskDescription, taskDescription_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVulScanTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_FROM_JSON(TaskDescription, taskDescription_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
    };
    CreateVulScanTaskRequest() = default ;
    CreateVulScanTaskRequest(const CreateVulScanTaskRequest &) = default ;
    CreateVulScanTaskRequest(CreateVulScanTaskRequest &&) = default ;
    CreateVulScanTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVulScanTaskRequest() = default ;
    CreateVulScanTaskRequest& operator=(const CreateVulScanTaskRequest &) = default ;
    CreateVulScanTaskRequest& operator=(CreateVulScanTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTimestamp_ == nullptr
        && this->matchMode_ == nullptr && this->taskDescription_ == nullptr && this->taskName_ == nullptr && this->userGroupIds_ == nullptr && this->whitelist_ == nullptr; };
    // endTimestamp Field Functions 
    bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
    void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
    inline int64_t getEndTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, 0L) };
    inline CreateVulScanTaskRequest& setEndTimestamp(int64_t endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


    // matchMode Field Functions 
    bool hasMatchMode() const { return this->matchMode_ != nullptr;};
    void deleteMatchMode() { this->matchMode_ = nullptr;};
    inline string getMatchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
    inline CreateVulScanTaskRequest& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


    // taskDescription Field Functions 
    bool hasTaskDescription() const { return this->taskDescription_ != nullptr;};
    void deleteTaskDescription() { this->taskDescription_ = nullptr;};
    inline string getTaskDescription() const { DARABONBA_PTR_GET_DEFAULT(taskDescription_, "") };
    inline CreateVulScanTaskRequest& setTaskDescription(string taskDescription) { DARABONBA_PTR_SET_VALUE(taskDescription_, taskDescription) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateVulScanTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline CreateVulScanTaskRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline CreateVulScanTaskRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline const vector<string> & getWhitelist() const { DARABONBA_PTR_GET_CONST(whitelist_, vector<string>) };
    inline vector<string> getWhitelist() { DARABONBA_PTR_GET(whitelist_, vector<string>) };
    inline CreateVulScanTaskRequest& setWhitelist(const vector<string> & whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };
    inline CreateVulScanTaskRequest& setWhitelist(vector<string> && whitelist) { DARABONBA_PTR_SET_RVALUE(whitelist_, whitelist) };


  protected:
    // The task expiration time, in seconds-level UNIX timestamp. After this time is reached, endpoints no longer pull and execute this task, and incomplete scans are not continued.
    shared_ptr<int64_t> endTimestamp_ {};
    // The matching mode for the effective scope. Valid values:
    // 
    // - **UserGroupAll**: Takes effect for all users under the current Alibaba Cloud account.
    // - **UserGroupNormal**: Takes effect only for users in specified user groups. In this case, UserGroupIds is required.
    // 
    // This parameter is required.
    shared_ptr<string> matchMode_ {};
    // The task description.
    shared_ptr<string> taskDescription_ {};
    // The task name. The name can be up to 128 characters in length and can contain Chinese characters, uppercase and lowercase letters, digits, periods (.), underscores (_), and hyphens (-). Spaces are not supported.
    // 
    // This parameter is required.
    shared_ptr<string> taskName_ {};
    // The collection of user group IDs for which the task takes effect. This parameter is required when MatchMode is set to UserGroupNormal and cannot be specified when MatchMode is set to UserGroupAll. The collection must contain at least 1 and at most 100 entries. Duplicate values are not allowed.
    shared_ptr<vector<string>> userGroupIds_ {};
    // The list of exempt usernames. Users in this list are excluded from this scan. The list can contain up to 1000 entries. Duplicate values are not allowed.
    shared_ptr<vector<string>> whitelist_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
