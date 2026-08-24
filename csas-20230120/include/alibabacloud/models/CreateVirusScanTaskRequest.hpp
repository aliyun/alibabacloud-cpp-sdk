// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVIRUSSCANTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVIRUSSCANTASKREQUEST_HPP_
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
  class CreateVirusScanTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVirusScanTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(HighRiskOperation, highRiskOperation_);
      DARABONBA_PTR_TO_JSON(LowRiskOperation, lowRiskOperation_);
      DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_TO_JSON(MaxCpuUsage, maxCpuUsage_);
      DARABONBA_PTR_TO_JSON(MidRiskOperation, midRiskOperation_);
      DARABONBA_PTR_TO_JSON(PerformanceMode, performanceMode_);
      DARABONBA_PTR_TO_JSON(ScanMode, scanMode_);
      DARABONBA_PTR_TO_JSON(ScanPath, scanPath_);
      DARABONBA_PTR_TO_JSON(ScanTargets, scanTargets_);
      DARABONBA_PTR_TO_JSON(TaskDescription, taskDescription_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVirusScanTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(HighRiskOperation, highRiskOperation_);
      DARABONBA_PTR_FROM_JSON(LowRiskOperation, lowRiskOperation_);
      DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_FROM_JSON(MaxCpuUsage, maxCpuUsage_);
      DARABONBA_PTR_FROM_JSON(MidRiskOperation, midRiskOperation_);
      DARABONBA_PTR_FROM_JSON(PerformanceMode, performanceMode_);
      DARABONBA_PTR_FROM_JSON(ScanMode, scanMode_);
      DARABONBA_PTR_FROM_JSON(ScanPath, scanPath_);
      DARABONBA_PTR_FROM_JSON(ScanTargets, scanTargets_);
      DARABONBA_PTR_FROM_JSON(TaskDescription, taskDescription_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
    };
    CreateVirusScanTaskRequest() = default ;
    CreateVirusScanTaskRequest(const CreateVirusScanTaskRequest &) = default ;
    CreateVirusScanTaskRequest(CreateVirusScanTaskRequest &&) = default ;
    CreateVirusScanTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVirusScanTaskRequest() = default ;
    CreateVirusScanTaskRequest& operator=(const CreateVirusScanTaskRequest &) = default ;
    CreateVirusScanTaskRequest& operator=(CreateVirusScanTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->highRiskOperation_ == nullptr && this->lowRiskOperation_ == nullptr && this->matchMode_ == nullptr && this->maxCpuUsage_ == nullptr && this->midRiskOperation_ == nullptr
        && this->performanceMode_ == nullptr && this->scanMode_ == nullptr && this->scanPath_ == nullptr && this->scanTargets_ == nullptr && this->taskDescription_ == nullptr
        && this->userGroupIds_ == nullptr && this->whitelist_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline CreateVirusScanTaskRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // highRiskOperation Field Functions 
    bool hasHighRiskOperation() const { return this->highRiskOperation_ != nullptr;};
    void deleteHighRiskOperation() { this->highRiskOperation_ = nullptr;};
    inline string getHighRiskOperation() const { DARABONBA_PTR_GET_DEFAULT(highRiskOperation_, "") };
    inline CreateVirusScanTaskRequest& setHighRiskOperation(string highRiskOperation) { DARABONBA_PTR_SET_VALUE(highRiskOperation_, highRiskOperation) };


    // lowRiskOperation Field Functions 
    bool hasLowRiskOperation() const { return this->lowRiskOperation_ != nullptr;};
    void deleteLowRiskOperation() { this->lowRiskOperation_ = nullptr;};
    inline string getLowRiskOperation() const { DARABONBA_PTR_GET_DEFAULT(lowRiskOperation_, "") };
    inline CreateVirusScanTaskRequest& setLowRiskOperation(string lowRiskOperation) { DARABONBA_PTR_SET_VALUE(lowRiskOperation_, lowRiskOperation) };


    // matchMode Field Functions 
    bool hasMatchMode() const { return this->matchMode_ != nullptr;};
    void deleteMatchMode() { this->matchMode_ = nullptr;};
    inline string getMatchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
    inline CreateVirusScanTaskRequest& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


    // maxCpuUsage Field Functions 
    bool hasMaxCpuUsage() const { return this->maxCpuUsage_ != nullptr;};
    void deleteMaxCpuUsage() { this->maxCpuUsage_ = nullptr;};
    inline int64_t getMaxCpuUsage() const { DARABONBA_PTR_GET_DEFAULT(maxCpuUsage_, 0L) };
    inline CreateVirusScanTaskRequest& setMaxCpuUsage(int64_t maxCpuUsage) { DARABONBA_PTR_SET_VALUE(maxCpuUsage_, maxCpuUsage) };


    // midRiskOperation Field Functions 
    bool hasMidRiskOperation() const { return this->midRiskOperation_ != nullptr;};
    void deleteMidRiskOperation() { this->midRiskOperation_ = nullptr;};
    inline string getMidRiskOperation() const { DARABONBA_PTR_GET_DEFAULT(midRiskOperation_, "") };
    inline CreateVirusScanTaskRequest& setMidRiskOperation(string midRiskOperation) { DARABONBA_PTR_SET_VALUE(midRiskOperation_, midRiskOperation) };


    // performanceMode Field Functions 
    bool hasPerformanceMode() const { return this->performanceMode_ != nullptr;};
    void deletePerformanceMode() { this->performanceMode_ = nullptr;};
    inline string getPerformanceMode() const { DARABONBA_PTR_GET_DEFAULT(performanceMode_, "") };
    inline CreateVirusScanTaskRequest& setPerformanceMode(string performanceMode) { DARABONBA_PTR_SET_VALUE(performanceMode_, performanceMode) };


    // scanMode Field Functions 
    bool hasScanMode() const { return this->scanMode_ != nullptr;};
    void deleteScanMode() { this->scanMode_ = nullptr;};
    inline string getScanMode() const { DARABONBA_PTR_GET_DEFAULT(scanMode_, "") };
    inline CreateVirusScanTaskRequest& setScanMode(string scanMode) { DARABONBA_PTR_SET_VALUE(scanMode_, scanMode) };


    // scanPath Field Functions 
    bool hasScanPath() const { return this->scanPath_ != nullptr;};
    void deleteScanPath() { this->scanPath_ = nullptr;};
    inline const vector<string> & getScanPath() const { DARABONBA_PTR_GET_CONST(scanPath_, vector<string>) };
    inline vector<string> getScanPath() { DARABONBA_PTR_GET(scanPath_, vector<string>) };
    inline CreateVirusScanTaskRequest& setScanPath(const vector<string> & scanPath) { DARABONBA_PTR_SET_VALUE(scanPath_, scanPath) };
    inline CreateVirusScanTaskRequest& setScanPath(vector<string> && scanPath) { DARABONBA_PTR_SET_RVALUE(scanPath_, scanPath) };


    // scanTargets Field Functions 
    bool hasScanTargets() const { return this->scanTargets_ != nullptr;};
    void deleteScanTargets() { this->scanTargets_ = nullptr;};
    inline const vector<string> & getScanTargets() const { DARABONBA_PTR_GET_CONST(scanTargets_, vector<string>) };
    inline vector<string> getScanTargets() { DARABONBA_PTR_GET(scanTargets_, vector<string>) };
    inline CreateVirusScanTaskRequest& setScanTargets(const vector<string> & scanTargets) { DARABONBA_PTR_SET_VALUE(scanTargets_, scanTargets) };
    inline CreateVirusScanTaskRequest& setScanTargets(vector<string> && scanTargets) { DARABONBA_PTR_SET_RVALUE(scanTargets_, scanTargets) };


    // taskDescription Field Functions 
    bool hasTaskDescription() const { return this->taskDescription_ != nullptr;};
    void deleteTaskDescription() { this->taskDescription_ = nullptr;};
    inline string getTaskDescription() const { DARABONBA_PTR_GET_DEFAULT(taskDescription_, "") };
    inline CreateVirusScanTaskRequest& setTaskDescription(string taskDescription) { DARABONBA_PTR_SET_VALUE(taskDescription_, taskDescription) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline CreateVirusScanTaskRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline CreateVirusScanTaskRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline const vector<string> & getWhitelist() const { DARABONBA_PTR_GET_CONST(whitelist_, vector<string>) };
    inline vector<string> getWhitelist() { DARABONBA_PTR_GET(whitelist_, vector<string>) };
    inline CreateVirusScanTaskRequest& setWhitelist(const vector<string> & whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };
    inline CreateVirusScanTaskRequest& setWhitelist(vector<string> && whitelist) { DARABONBA_PTR_SET_RVALUE(whitelist_, whitelist) };


  protected:
    // The task expiration time, in seconds-level UNIX timestamp. After this time, endpoints no longer pull and execute this task. If this parameter is not specified or the specified time is earlier than the current time, the value defaults to the current time plus 24 hours.
    shared_ptr<int64_t> endTime_ {};
    // The action to take on high-risk virus files. Valid values:
    // - **Quarantine**: quarantine quarantined file.
    // - **Notify**: report an alert only without taking action on quarantined file.
    // 
    // This parameter is required.
    shared_ptr<string> highRiskOperation_ {};
    // The action to take on low-risk virus files. Valid values:
    // - **Quarantine**: quarantine quarantined file.
    // - **Notify**: report an alert only without taking action on quarantined file.
    // - **None**: take no action.
    // 
    // This parameter is required.
    shared_ptr<string> lowRiskOperation_ {};
    // The matching mode for the effective scope. Valid values:
    // - **UserGroupAll**: applies to all users under the current Alibaba Cloud account.
    // - **UserGroupNormal**: applies only to users in specified user groups. UserGroupIds is required when this value is specified.
    // 
    // This parameter is required.
    shared_ptr<string> matchMode_ {};
    // The maximum percentage of endpoint CPU usage during scanning. Valid values: 0 to 100. If this parameter is not specified or is set to 0, the default value is determined by PerformanceMode: 50 for SecurityFirst, 30 for Balance, and 15 for ExperienceFirst.
    shared_ptr<int64_t> maxCpuUsage_ {};
    // The action to take on medium-risk virus files. Valid values:
    // - **Quarantine**: quarantine quarantined file.
    // - **Notify**: report an alert only without taking action on quarantined file.
    // 
    // This parameter is required.
    shared_ptr<string> midRiskOperation_ {};
    // The scan performance pattern. Valid values:
    // - **SecurityFirst**: security first. The default CPU usage limit is 50%.
    // - **Balance**: balanced. The default CPU usage limit is 30%.
    // - **ExperienceFirst**: experience first. The default CPU usage limit is 15%.
    // 
    // This parameter is required.
    shared_ptr<string> performanceMode_ {};
    // The scan path scope. Valid values:
    // - **Quick**: quick scan. Only system critical directories and common risk locations are scanned.
    // - **Full**: full disk scan.
    // - **Custom**: custom path scan. ScanPath is required when this value is specified.
    // 
    // This parameter is required.
    shared_ptr<string> scanMode_ {};
    // The collection of custom scan paths. This parameter is required when ScanMode is set to Custom and cannot be specified when ScanMode is set to Quick or Full. A maximum of 100 paths can be specified. Duplicate values are not allowed.
    shared_ptr<vector<string>> scanPath_ {};
    // The collection of virus types to be handled in this scan. At least one type must be specified. Duplicate values are not allowed.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> scanTargets_ {};
    // The task description. The description can be up to 128 characters in length and can contain Chinese characters, uppercase and lowercase letters, digits, spaces, periods (.), commas (,), semicolons (;), forward slashes (/), at signs (@), hyphens (-), and underscores (_).
    // 
    // This parameter is required.
    shared_ptr<string> taskDescription_ {};
    // The collection of user group IDs to which the task applies. This parameter is required when MatchMode is set to UserGroupNormal and cannot be specified when MatchMode is set to UserGroupAll. At least 1 and at most 100 IDs can be specified. Duplicate values are not allowed.
    shared_ptr<vector<string>> userGroupIds_ {};
    // The list of exempt users. Users in this list do not execute this scan task. A maximum of 1000 users can be specified. Duplicate values are not allowed.
    shared_ptr<vector<string>> whitelist_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
