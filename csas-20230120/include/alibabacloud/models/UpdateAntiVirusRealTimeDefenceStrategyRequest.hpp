// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEANTIVIRUSREALTIMEDEFENCESTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEANTIVIRUSREALTIMEDEFENCESTRATEGYREQUEST_HPP_
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
  class UpdateAntiVirusRealTimeDefenceStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAntiVirusRealTimeDefenceStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HighRiskOperation, highRiskOperation_);
      DARABONBA_PTR_TO_JSON(LowRiskOperation, lowRiskOperation_);
      DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_TO_JSON(MaxCpuUsage, maxCpuUsage_);
      DARABONBA_PTR_TO_JSON(MidRiskOperation, midRiskOperation_);
      DARABONBA_PTR_TO_JSON(ScanTargets, scanTargets_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAntiVirusRealTimeDefenceStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HighRiskOperation, highRiskOperation_);
      DARABONBA_PTR_FROM_JSON(LowRiskOperation, lowRiskOperation_);
      DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_FROM_JSON(MaxCpuUsage, maxCpuUsage_);
      DARABONBA_PTR_FROM_JSON(MidRiskOperation, midRiskOperation_);
      DARABONBA_PTR_FROM_JSON(ScanTargets, scanTargets_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
    };
    UpdateAntiVirusRealTimeDefenceStrategyRequest() = default ;
    UpdateAntiVirusRealTimeDefenceStrategyRequest(const UpdateAntiVirusRealTimeDefenceStrategyRequest &) = default ;
    UpdateAntiVirusRealTimeDefenceStrategyRequest(UpdateAntiVirusRealTimeDefenceStrategyRequest &&) = default ;
    UpdateAntiVirusRealTimeDefenceStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAntiVirusRealTimeDefenceStrategyRequest() = default ;
    UpdateAntiVirusRealTimeDefenceStrategyRequest& operator=(const UpdateAntiVirusRealTimeDefenceStrategyRequest &) = default ;
    UpdateAntiVirusRealTimeDefenceStrategyRequest& operator=(UpdateAntiVirusRealTimeDefenceStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->highRiskOperation_ == nullptr
        && this->lowRiskOperation_ == nullptr && this->matchMode_ == nullptr && this->maxCpuUsage_ == nullptr && this->midRiskOperation_ == nullptr && this->scanTargets_ == nullptr
        && this->status_ == nullptr && this->userGroupIds_ == nullptr && this->whitelist_ == nullptr; };
    // highRiskOperation Field Functions 
    bool hasHighRiskOperation() const { return this->highRiskOperation_ != nullptr;};
    void deleteHighRiskOperation() { this->highRiskOperation_ = nullptr;};
    inline string getHighRiskOperation() const { DARABONBA_PTR_GET_DEFAULT(highRiskOperation_, "") };
    inline UpdateAntiVirusRealTimeDefenceStrategyRequest& setHighRiskOperation(string highRiskOperation) { DARABONBA_PTR_SET_VALUE(highRiskOperation_, highRiskOperation) };


    // lowRiskOperation Field Functions 
    bool hasLowRiskOperation() const { return this->lowRiskOperation_ != nullptr;};
    void deleteLowRiskOperation() { this->lowRiskOperation_ = nullptr;};
    inline string getLowRiskOperation() const { DARABONBA_PTR_GET_DEFAULT(lowRiskOperation_, "") };
    inline UpdateAntiVirusRealTimeDefenceStrategyRequest& setLowRiskOperation(string lowRiskOperation) { DARABONBA_PTR_SET_VALUE(lowRiskOperation_, lowRiskOperation) };


    // matchMode Field Functions 
    bool hasMatchMode() const { return this->matchMode_ != nullptr;};
    void deleteMatchMode() { this->matchMode_ = nullptr;};
    inline string getMatchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
    inline UpdateAntiVirusRealTimeDefenceStrategyRequest& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


    // maxCpuUsage Field Functions 
    bool hasMaxCpuUsage() const { return this->maxCpuUsage_ != nullptr;};
    void deleteMaxCpuUsage() { this->maxCpuUsage_ = nullptr;};
    inline int64_t getMaxCpuUsage() const { DARABONBA_PTR_GET_DEFAULT(maxCpuUsage_, 0L) };
    inline UpdateAntiVirusRealTimeDefenceStrategyRequest& setMaxCpuUsage(int64_t maxCpuUsage) { DARABONBA_PTR_SET_VALUE(maxCpuUsage_, maxCpuUsage) };


    // midRiskOperation Field Functions 
    bool hasMidRiskOperation() const { return this->midRiskOperation_ != nullptr;};
    void deleteMidRiskOperation() { this->midRiskOperation_ = nullptr;};
    inline string getMidRiskOperation() const { DARABONBA_PTR_GET_DEFAULT(midRiskOperation_, "") };
    inline UpdateAntiVirusRealTimeDefenceStrategyRequest& setMidRiskOperation(string midRiskOperation) { DARABONBA_PTR_SET_VALUE(midRiskOperation_, midRiskOperation) };


    // scanTargets Field Functions 
    bool hasScanTargets() const { return this->scanTargets_ != nullptr;};
    void deleteScanTargets() { this->scanTargets_ = nullptr;};
    inline const vector<string> & getScanTargets() const { DARABONBA_PTR_GET_CONST(scanTargets_, vector<string>) };
    inline vector<string> getScanTargets() { DARABONBA_PTR_GET(scanTargets_, vector<string>) };
    inline UpdateAntiVirusRealTimeDefenceStrategyRequest& setScanTargets(const vector<string> & scanTargets) { DARABONBA_PTR_SET_VALUE(scanTargets_, scanTargets) };
    inline UpdateAntiVirusRealTimeDefenceStrategyRequest& setScanTargets(vector<string> && scanTargets) { DARABONBA_PTR_SET_RVALUE(scanTargets_, scanTargets) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateAntiVirusRealTimeDefenceStrategyRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline UpdateAntiVirusRealTimeDefenceStrategyRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline UpdateAntiVirusRealTimeDefenceStrategyRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline const vector<string> & getWhitelist() const { DARABONBA_PTR_GET_CONST(whitelist_, vector<string>) };
    inline vector<string> getWhitelist() { DARABONBA_PTR_GET(whitelist_, vector<string>) };
    inline UpdateAntiVirusRealTimeDefenceStrategyRequest& setWhitelist(const vector<string> & whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };
    inline UpdateAntiVirusRealTimeDefenceStrategyRequest& setWhitelist(vector<string> && whitelist) { DARABONBA_PTR_SET_RVALUE(whitelist_, whitelist) };


  protected:
    // The action to take on high-risk virus files. Required when configuring the real-time defense policy for the first time. Valid values:
    // - **Quarantine**: Quarantines quarantined file.
    // - **Notify**: Reports an alert only without taking action on quarantined file.
    shared_ptr<string> highRiskOperation_ {};
    // The action to take on low-risk virus files. Required when configuring the real-time defense policy for the first time. Valid values:
    // - **Quarantine**: Quarantines quarantined file.
    // - **Notify**: Reports an alert only without taking action on quarantined file.
    // - **None**: Takes no action.
    shared_ptr<string> lowRiskOperation_ {};
    // The matching mode for the effective scope. Required when configuring the real-time defense policy for the first time. Valid values:
    // - **UserGroupAll**: Applies to all users under the current Alibaba Cloud account.
    // - **UserGroupNormal**: Applies only to users in specified user groups. UserGroupIds is required in this case.
    shared_ptr<string> matchMode_ {};
    // The maximum percentage of endpoint CPU that real-time defense can consume. Valid values: 0 to 100. When configuring for the first time, the value is stored as 0 but takes effect as 30.
    shared_ptr<int64_t> maxCpuUsage_ {};
    // The action to take on medium-risk virus files. Required when configuring the real-time defense policy for the first time. Valid values:
    // - **Quarantine**: Quarantines quarantined file.
    // - **Notify**: Reports an alert only without taking action on quarantined file.
    shared_ptr<string> midRiskOperation_ {};
    // The collection of virus types to be handled by real-time defense. Duplicates are not allowed. Required when configuring the real-time defense policy for the first time. When the policy already exists, this parameter performs a full replacement. The collection you pass in replaces the existing configuration.
    shared_ptr<vector<string>> scanTargets_ {};
    // The enabling status. Required when configuring the real-time defense policy for the first time. Valid values:
    // - **Enabled**: Enabled.
    // - **Disabled**: Disabled.
    shared_ptr<string> status_ {};
    // The collection of user group IDs to which the policy applies. Required when MatchMode is set to UserGroupNormal. Not allowed when MatchMode is set to UserGroupAll. At least 1 and at most 100 entries are allowed. Duplicates are not allowed. When MatchMode is UserGroupNormal, you must pass in the complete user group collection on every call, even when modifying only other parameters.
    shared_ptr<vector<string>> userGroupIds_ {};
    // The exception user list. Users in this list are excluded from real-time defense. A maximum of 1000 entries are allowed. Duplicates are not allowed. This parameter performs a full replacement. The list you pass in replaces the existing list.
    shared_ptr<vector<string>> whitelist_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
