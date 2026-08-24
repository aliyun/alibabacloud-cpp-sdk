// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETANTIVIRUSREALTIMEDEFENCESTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETANTIVIRUSREALTIMEDEFENCESTRATEGYRESPONSEBODY_HPP_
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
  class GetAntiVirusRealTimeDefenceStrategyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAntiVirusRealTimeDefenceStrategyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HighRiskOperation, highRiskOperation_);
      DARABONBA_PTR_TO_JSON(LowRiskOperation, lowRiskOperation_);
      DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_TO_JSON(MatchTargetIds, matchTargetIds_);
      DARABONBA_PTR_TO_JSON(MaxCpuUsage, maxCpuUsage_);
      DARABONBA_PTR_TO_JSON(MidRiskOperation, midRiskOperation_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScanTargets, scanTargets_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
    };
    friend void from_json(const Darabonba::Json& j, GetAntiVirusRealTimeDefenceStrategyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HighRiskOperation, highRiskOperation_);
      DARABONBA_PTR_FROM_JSON(LowRiskOperation, lowRiskOperation_);
      DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_FROM_JSON(MatchTargetIds, matchTargetIds_);
      DARABONBA_PTR_FROM_JSON(MaxCpuUsage, maxCpuUsage_);
      DARABONBA_PTR_FROM_JSON(MidRiskOperation, midRiskOperation_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScanTargets, scanTargets_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
    };
    GetAntiVirusRealTimeDefenceStrategyResponseBody() = default ;
    GetAntiVirusRealTimeDefenceStrategyResponseBody(const GetAntiVirusRealTimeDefenceStrategyResponseBody &) = default ;
    GetAntiVirusRealTimeDefenceStrategyResponseBody(GetAntiVirusRealTimeDefenceStrategyResponseBody &&) = default ;
    GetAntiVirusRealTimeDefenceStrategyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAntiVirusRealTimeDefenceStrategyResponseBody() = default ;
    GetAntiVirusRealTimeDefenceStrategyResponseBody& operator=(const GetAntiVirusRealTimeDefenceStrategyResponseBody &) = default ;
    GetAntiVirusRealTimeDefenceStrategyResponseBody& operator=(GetAntiVirusRealTimeDefenceStrategyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->highRiskOperation_ == nullptr
        && this->lowRiskOperation_ == nullptr && this->matchMode_ == nullptr && this->matchTargetIds_ == nullptr && this->maxCpuUsage_ == nullptr && this->midRiskOperation_ == nullptr
        && this->requestId_ == nullptr && this->scanTargets_ == nullptr && this->status_ == nullptr && this->strategyId_ == nullptr && this->whitelist_ == nullptr; };
    // highRiskOperation Field Functions 
    bool hasHighRiskOperation() const { return this->highRiskOperation_ != nullptr;};
    void deleteHighRiskOperation() { this->highRiskOperation_ = nullptr;};
    inline string getHighRiskOperation() const { DARABONBA_PTR_GET_DEFAULT(highRiskOperation_, "") };
    inline GetAntiVirusRealTimeDefenceStrategyResponseBody& setHighRiskOperation(string highRiskOperation) { DARABONBA_PTR_SET_VALUE(highRiskOperation_, highRiskOperation) };


    // lowRiskOperation Field Functions 
    bool hasLowRiskOperation() const { return this->lowRiskOperation_ != nullptr;};
    void deleteLowRiskOperation() { this->lowRiskOperation_ = nullptr;};
    inline string getLowRiskOperation() const { DARABONBA_PTR_GET_DEFAULT(lowRiskOperation_, "") };
    inline GetAntiVirusRealTimeDefenceStrategyResponseBody& setLowRiskOperation(string lowRiskOperation) { DARABONBA_PTR_SET_VALUE(lowRiskOperation_, lowRiskOperation) };


    // matchMode Field Functions 
    bool hasMatchMode() const { return this->matchMode_ != nullptr;};
    void deleteMatchMode() { this->matchMode_ = nullptr;};
    inline string getMatchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
    inline GetAntiVirusRealTimeDefenceStrategyResponseBody& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


    // matchTargetIds Field Functions 
    bool hasMatchTargetIds() const { return this->matchTargetIds_ != nullptr;};
    void deleteMatchTargetIds() { this->matchTargetIds_ = nullptr;};
    inline const vector<string> & getMatchTargetIds() const { DARABONBA_PTR_GET_CONST(matchTargetIds_, vector<string>) };
    inline vector<string> getMatchTargetIds() { DARABONBA_PTR_GET(matchTargetIds_, vector<string>) };
    inline GetAntiVirusRealTimeDefenceStrategyResponseBody& setMatchTargetIds(const vector<string> & matchTargetIds) { DARABONBA_PTR_SET_VALUE(matchTargetIds_, matchTargetIds) };
    inline GetAntiVirusRealTimeDefenceStrategyResponseBody& setMatchTargetIds(vector<string> && matchTargetIds) { DARABONBA_PTR_SET_RVALUE(matchTargetIds_, matchTargetIds) };


    // maxCpuUsage Field Functions 
    bool hasMaxCpuUsage() const { return this->maxCpuUsage_ != nullptr;};
    void deleteMaxCpuUsage() { this->maxCpuUsage_ = nullptr;};
    inline int64_t getMaxCpuUsage() const { DARABONBA_PTR_GET_DEFAULT(maxCpuUsage_, 0L) };
    inline GetAntiVirusRealTimeDefenceStrategyResponseBody& setMaxCpuUsage(int64_t maxCpuUsage) { DARABONBA_PTR_SET_VALUE(maxCpuUsage_, maxCpuUsage) };


    // midRiskOperation Field Functions 
    bool hasMidRiskOperation() const { return this->midRiskOperation_ != nullptr;};
    void deleteMidRiskOperation() { this->midRiskOperation_ = nullptr;};
    inline string getMidRiskOperation() const { DARABONBA_PTR_GET_DEFAULT(midRiskOperation_, "") };
    inline GetAntiVirusRealTimeDefenceStrategyResponseBody& setMidRiskOperation(string midRiskOperation) { DARABONBA_PTR_SET_VALUE(midRiskOperation_, midRiskOperation) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAntiVirusRealTimeDefenceStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scanTargets Field Functions 
    bool hasScanTargets() const { return this->scanTargets_ != nullptr;};
    void deleteScanTargets() { this->scanTargets_ = nullptr;};
    inline const vector<string> & getScanTargets() const { DARABONBA_PTR_GET_CONST(scanTargets_, vector<string>) };
    inline vector<string> getScanTargets() { DARABONBA_PTR_GET(scanTargets_, vector<string>) };
    inline GetAntiVirusRealTimeDefenceStrategyResponseBody& setScanTargets(const vector<string> & scanTargets) { DARABONBA_PTR_SET_VALUE(scanTargets_, scanTargets) };
    inline GetAntiVirusRealTimeDefenceStrategyResponseBody& setScanTargets(vector<string> && scanTargets) { DARABONBA_PTR_SET_RVALUE(scanTargets_, scanTargets) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAntiVirusRealTimeDefenceStrategyResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline string getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
    inline GetAntiVirusRealTimeDefenceStrategyResponseBody& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline const vector<string> & getWhitelist() const { DARABONBA_PTR_GET_CONST(whitelist_, vector<string>) };
    inline vector<string> getWhitelist() { DARABONBA_PTR_GET(whitelist_, vector<string>) };
    inline GetAntiVirusRealTimeDefenceStrategyResponseBody& setWhitelist(const vector<string> & whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };
    inline GetAntiVirusRealTimeDefenceStrategyResponseBody& setWhitelist(vector<string> && whitelist) { DARABONBA_PTR_SET_RVALUE(whitelist_, whitelist) };


  protected:
    // The action taken on high-risk virus files. Valid values:
    // - **Quarantine**: Quarantines quarantined file.
    // - **Notify**: Reports an alert only without taking action on quarantined file. Quarantine is returned if no real-time defense policy has been configured.
    shared_ptr<string> highRiskOperation_ {};
    // The action taken on low-risk virus files. Valid values:
    // - **Quarantine**: Quarantines quarantined file.
    // - **Notify**: Reports an alert only without taking action on quarantined file.
    // - **None**: Takes no action. None is returned if no real-time defense policy has been configured.
    shared_ptr<string> lowRiskOperation_ {};
    // The matching mode of the effective scope. Valid values:
    // - **UserGroupAll**: Applies to all users under the current Alibaba Cloud account.
    // - **UserGroupNormal**: Applies only to users in specified user groups. An empty string is returned if no real-time defense policy has been configured.
    shared_ptr<string> matchMode_ {};
    // The collection of user group IDs to which the policy applies. An empty list is returned when MatchMode is set to UserGroupAll.
    shared_ptr<vector<string>> matchTargetIds_ {};
    // The maximum percentage of endpoint CPU that real-time defense can use. The default value 30 is returned if a policy has been configured but this parameter is not separately set. 0 is returned if no real-time defense policy has been configured.
    shared_ptr<int64_t> maxCpuUsage_ {};
    // The action taken on medium-risk virus files. Valid values:
    // - **Quarantine**: Quarantines quarantined file.
    // - **Notify**: Reports an alert only without taking action on quarantined file. Notify is returned if no real-time defense policy has been configured.
    shared_ptr<string> midRiskOperation_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The collection of virus types that the real-time defense handles. An empty list is returned if no real-time defense policy has been configured.
    shared_ptr<vector<string>> scanTargets_ {};
    // The enabling status. Valid values:
    // - **Enabled**: Enabled.
    // - **Disabled**: Disabled. Disabled is returned if no real-time defense policy has been configured.
    shared_ptr<string> status_ {};
    // The ID of the real-time defense policy. An empty string is returned if no real-time defense policy has been configured.
    shared_ptr<string> strategyId_ {};
    // The list of exempted usernames. Users in this list are not subject to real-time defense. An empty list is returned if no exemption is configured.
    shared_ptr<vector<string>> whitelist_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
