// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESOFTWARELIBDISTRIBUTETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESOFTWARELIBDISTRIBUTETASKREQUEST_HPP_
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
  class CreateSoftwarelibDistributeTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSoftwarelibDistributeTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DevTags, devTags_);
      DARABONBA_PTR_TO_JSON(DeviceGroupIds, deviceGroupIds_);
      DARABONBA_PTR_TO_JSON(ExecuteMode, executeMode_);
      DARABONBA_PTR_TO_JSON(ExecuteParameters, executeParameters_);
      DARABONBA_PTR_TO_JSON(ExecutePeriod, executePeriod_);
      DARABONBA_PTR_TO_JSON(ExpireMode, expireMode_);
      DARABONBA_PTR_TO_JSON(GmtExpired, gmtExpired_);
      DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RetryTimes, retryTimes_);
      DARABONBA_PTR_TO_JSON(RunAsAccount, runAsAccount_);
      DARABONBA_PTR_TO_JSON(SoftwareId, softwareId_);
      DARABONBA_PTR_TO_JSON(SoftwareName, softwareName_);
      DARABONBA_PTR_TO_JSON(SupportOs, supportOs_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSoftwarelibDistributeTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DevTags, devTags_);
      DARABONBA_PTR_FROM_JSON(DeviceGroupIds, deviceGroupIds_);
      DARABONBA_PTR_FROM_JSON(ExecuteMode, executeMode_);
      DARABONBA_PTR_FROM_JSON(ExecuteParameters, executeParameters_);
      DARABONBA_PTR_FROM_JSON(ExecutePeriod, executePeriod_);
      DARABONBA_PTR_FROM_JSON(ExpireMode, expireMode_);
      DARABONBA_PTR_FROM_JSON(GmtExpired, gmtExpired_);
      DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RetryTimes, retryTimes_);
      DARABONBA_PTR_FROM_JSON(RunAsAccount, runAsAccount_);
      DARABONBA_PTR_FROM_JSON(SoftwareId, softwareId_);
      DARABONBA_PTR_FROM_JSON(SoftwareName, softwareName_);
      DARABONBA_PTR_FROM_JSON(SupportOs, supportOs_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    CreateSoftwarelibDistributeTaskRequest() = default ;
    CreateSoftwarelibDistributeTaskRequest(const CreateSoftwarelibDistributeTaskRequest &) = default ;
    CreateSoftwarelibDistributeTaskRequest(CreateSoftwarelibDistributeTaskRequest &&) = default ;
    CreateSoftwarelibDistributeTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSoftwarelibDistributeTaskRequest() = default ;
    CreateSoftwarelibDistributeTaskRequest& operator=(const CreateSoftwarelibDistributeTaskRequest &) = default ;
    CreateSoftwarelibDistributeTaskRequest& operator=(CreateSoftwarelibDistributeTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->devTags_ == nullptr
        && this->deviceGroupIds_ == nullptr && this->executeMode_ == nullptr && this->executeParameters_ == nullptr && this->executePeriod_ == nullptr && this->expireMode_ == nullptr
        && this->gmtExpired_ == nullptr && this->matchMode_ == nullptr && this->name_ == nullptr && this->retryTimes_ == nullptr && this->runAsAccount_ == nullptr
        && this->softwareId_ == nullptr && this->softwareName_ == nullptr && this->supportOs_ == nullptr && this->taskType_ == nullptr && this->timeout_ == nullptr
        && this->userGroupIds_ == nullptr && this->versionId_ == nullptr; };
    // devTags Field Functions 
    bool hasDevTags() const { return this->devTags_ != nullptr;};
    void deleteDevTags() { this->devTags_ = nullptr;};
    inline const vector<string> & getDevTags() const { DARABONBA_PTR_GET_CONST(devTags_, vector<string>) };
    inline vector<string> getDevTags() { DARABONBA_PTR_GET(devTags_, vector<string>) };
    inline CreateSoftwarelibDistributeTaskRequest& setDevTags(const vector<string> & devTags) { DARABONBA_PTR_SET_VALUE(devTags_, devTags) };
    inline CreateSoftwarelibDistributeTaskRequest& setDevTags(vector<string> && devTags) { DARABONBA_PTR_SET_RVALUE(devTags_, devTags) };


    // deviceGroupIds Field Functions 
    bool hasDeviceGroupIds() const { return this->deviceGroupIds_ != nullptr;};
    void deleteDeviceGroupIds() { this->deviceGroupIds_ = nullptr;};
    inline const vector<string> & getDeviceGroupIds() const { DARABONBA_PTR_GET_CONST(deviceGroupIds_, vector<string>) };
    inline vector<string> getDeviceGroupIds() { DARABONBA_PTR_GET(deviceGroupIds_, vector<string>) };
    inline CreateSoftwarelibDistributeTaskRequest& setDeviceGroupIds(const vector<string> & deviceGroupIds) { DARABONBA_PTR_SET_VALUE(deviceGroupIds_, deviceGroupIds) };
    inline CreateSoftwarelibDistributeTaskRequest& setDeviceGroupIds(vector<string> && deviceGroupIds) { DARABONBA_PTR_SET_RVALUE(deviceGroupIds_, deviceGroupIds) };


    // executeMode Field Functions 
    bool hasExecuteMode() const { return this->executeMode_ != nullptr;};
    void deleteExecuteMode() { this->executeMode_ = nullptr;};
    inline string getExecuteMode() const { DARABONBA_PTR_GET_DEFAULT(executeMode_, "") };
    inline CreateSoftwarelibDistributeTaskRequest& setExecuteMode(string executeMode) { DARABONBA_PTR_SET_VALUE(executeMode_, executeMode) };


    // executeParameters Field Functions 
    bool hasExecuteParameters() const { return this->executeParameters_ != nullptr;};
    void deleteExecuteParameters() { this->executeParameters_ = nullptr;};
    inline string getExecuteParameters() const { DARABONBA_PTR_GET_DEFAULT(executeParameters_, "") };
    inline CreateSoftwarelibDistributeTaskRequest& setExecuteParameters(string executeParameters) { DARABONBA_PTR_SET_VALUE(executeParameters_, executeParameters) };


    // executePeriod Field Functions 
    bool hasExecutePeriod() const { return this->executePeriod_ != nullptr;};
    void deleteExecutePeriod() { this->executePeriod_ = nullptr;};
    inline string getExecutePeriod() const { DARABONBA_PTR_GET_DEFAULT(executePeriod_, "") };
    inline CreateSoftwarelibDistributeTaskRequest& setExecutePeriod(string executePeriod) { DARABONBA_PTR_SET_VALUE(executePeriod_, executePeriod) };


    // expireMode Field Functions 
    bool hasExpireMode() const { return this->expireMode_ != nullptr;};
    void deleteExpireMode() { this->expireMode_ = nullptr;};
    inline string getExpireMode() const { DARABONBA_PTR_GET_DEFAULT(expireMode_, "") };
    inline CreateSoftwarelibDistributeTaskRequest& setExpireMode(string expireMode) { DARABONBA_PTR_SET_VALUE(expireMode_, expireMode) };


    // gmtExpired Field Functions 
    bool hasGmtExpired() const { return this->gmtExpired_ != nullptr;};
    void deleteGmtExpired() { this->gmtExpired_ = nullptr;};
    inline string getGmtExpired() const { DARABONBA_PTR_GET_DEFAULT(gmtExpired_, "") };
    inline CreateSoftwarelibDistributeTaskRequest& setGmtExpired(string gmtExpired) { DARABONBA_PTR_SET_VALUE(gmtExpired_, gmtExpired) };


    // matchMode Field Functions 
    bool hasMatchMode() const { return this->matchMode_ != nullptr;};
    void deleteMatchMode() { this->matchMode_ = nullptr;};
    inline string getMatchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
    inline CreateSoftwarelibDistributeTaskRequest& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSoftwarelibDistributeTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // retryTimes Field Functions 
    bool hasRetryTimes() const { return this->retryTimes_ != nullptr;};
    void deleteRetryTimes() { this->retryTimes_ = nullptr;};
    inline string getRetryTimes() const { DARABONBA_PTR_GET_DEFAULT(retryTimes_, "") };
    inline CreateSoftwarelibDistributeTaskRequest& setRetryTimes(string retryTimes) { DARABONBA_PTR_SET_VALUE(retryTimes_, retryTimes) };


    // runAsAccount Field Functions 
    bool hasRunAsAccount() const { return this->runAsAccount_ != nullptr;};
    void deleteRunAsAccount() { this->runAsAccount_ = nullptr;};
    inline string getRunAsAccount() const { DARABONBA_PTR_GET_DEFAULT(runAsAccount_, "") };
    inline CreateSoftwarelibDistributeTaskRequest& setRunAsAccount(string runAsAccount) { DARABONBA_PTR_SET_VALUE(runAsAccount_, runAsAccount) };


    // softwareId Field Functions 
    bool hasSoftwareId() const { return this->softwareId_ != nullptr;};
    void deleteSoftwareId() { this->softwareId_ = nullptr;};
    inline string getSoftwareId() const { DARABONBA_PTR_GET_DEFAULT(softwareId_, "") };
    inline CreateSoftwarelibDistributeTaskRequest& setSoftwareId(string softwareId) { DARABONBA_PTR_SET_VALUE(softwareId_, softwareId) };


    // softwareName Field Functions 
    bool hasSoftwareName() const { return this->softwareName_ != nullptr;};
    void deleteSoftwareName() { this->softwareName_ = nullptr;};
    inline string getSoftwareName() const { DARABONBA_PTR_GET_DEFAULT(softwareName_, "") };
    inline CreateSoftwarelibDistributeTaskRequest& setSoftwareName(string softwareName) { DARABONBA_PTR_SET_VALUE(softwareName_, softwareName) };


    // supportOs Field Functions 
    bool hasSupportOs() const { return this->supportOs_ != nullptr;};
    void deleteSupportOs() { this->supportOs_ = nullptr;};
    inline string getSupportOs() const { DARABONBA_PTR_GET_DEFAULT(supportOs_, "") };
    inline CreateSoftwarelibDistributeTaskRequest& setSupportOs(string supportOs) { DARABONBA_PTR_SET_VALUE(supportOs_, supportOs) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline CreateSoftwarelibDistributeTaskRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline string getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, "") };
    inline CreateSoftwarelibDistributeTaskRequest& setTimeout(string timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline CreateSoftwarelibDistributeTaskRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline CreateSoftwarelibDistributeTaskRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline CreateSoftwarelibDistributeTaskRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The collection of terminal device IDs. Duplicate values are not allowed. Each ID must not exceed 1000 characters in length. This parameter is required when MatchMode is set to DevTagNormal. This parameter is not allowed when MatchMode is set to other values. Otherwise, the request is rejected.
    shared_ptr<vector<string>> devTags_ {};
    // The collection of device group IDs. Duplicate values are not allowed. This parameter is required when MatchMode is set to DeviceGroupNormal. This parameter is not allowed when MatchMode is set to other values. Otherwise, the request is rejected. You can call [ListDeviceGroups](~~ListDeviceGroups~~) to obtain the values.
    shared_ptr<vector<string>> deviceGroupIds_ {};
    // The execution mode. Valid values:
    // - **Once**: immediate execution.
    // - **Schedule**: scheduled execution.
    shared_ptr<string> executeMode_ {};
    // The scheduling execution parameters in JSON format.
    shared_ptr<string> executeParameters_ {};
    // The task execution cycle in JSON format. The validType field specifies the cycle type. Valid values:
    // - **Once**: one-time execution.
    // - **Interval**: execution at intervals.
    // - **Weekly**: weekly execution.
    shared_ptr<string> executePeriod_ {};
    // The expiration type. Valid values:
    // - **Expire**: expires at the time specified by GmtExpired.
    // - **Never**: never expires.
    shared_ptr<string> expireMode_ {};
    // The task expiration time as a millisecond-level UNIX timestamp. This parameter takes effect only when ExpireMode is set to Expire.
    shared_ptr<string> gmtExpired_ {};
    // The policy matching target type. Valid values:
    // - **UserGroupAll**: all users.
    // - **UserGroupNormal**: specified user groups.
    // - **DevTagNormal**: specified devices.
    // - **DeviceGroupNormal**: specified device groups.
    // - **DevTagAll**: all devices.
    // - **None**: not configured.
    shared_ptr<string> matchMode_ {};
    // The task name. The name must be 1 to 64 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The number of retries after a task failure.
    shared_ptr<string> retryTimes_ {};
    // The administrator account name used to run the task on Windows. The name must not exceed 128 characters in length.
    shared_ptr<string> runAsAccount_ {};
    // The software ID in the software library. You can call [ListSoftwarelibSoftware](~~ListSoftwarelibSoftware~~) to obtain the value.
    shared_ptr<string> softwareId_ {};
    // The software name. The name must not exceed 128 characters in length.
    shared_ptr<string> softwareName_ {};
    // The operating system to which the task applies. Only a single value is supported. Valid values:
    // - **Windows**: Windows.
    // - **Mac(Apple)**: macOS with Apple silicon.
    // - **Mac(Intel)**: macOS with Intel processors.
    shared_ptr<string> supportOs_ {};
    // The task type. Valid values:
    // - **server**: a task delivered from the console.
    // - **client**: a task initiated from the client.
    shared_ptr<string> taskType_ {};
    // The task execution timeout period. Unit: seconds. For example, a value of 3600 indicates 1 hour.
    shared_ptr<string> timeout_ {};
    // The collection of user group IDs. Duplicate values are not allowed. This parameter is required and must contain at least one value when MatchMode is set to UserGroupNormal. This parameter is not allowed when MatchMode is set to other values. Otherwise, the request is rejected. You can call [ListUserGroups](~~ListUserGroups~~) to obtain the values.
    shared_ptr<vector<string>> userGroupIds_ {};
    // The ID of the software version to distribute. You can call [ListSoftwarelibVersion](~~ListSoftwarelibVersion~~) to obtain the value.
    shared_ptr<string> versionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
