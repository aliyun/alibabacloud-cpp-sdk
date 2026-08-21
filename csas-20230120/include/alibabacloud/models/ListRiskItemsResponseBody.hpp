// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRISKITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRISKITEMSRESPONSEBODY_HPP_
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
  class ListRiskItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRiskItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskItems, riskItems_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListRiskItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskItems, riskItems_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListRiskItemsResponseBody() = default ;
    ListRiskItemsResponseBody(const ListRiskItemsResponseBody &) = default ;
    ListRiskItemsResponseBody(ListRiskItemsResponseBody &&) = default ;
    ListRiskItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRiskItemsResponseBody() = default ;
    ListRiskItemsResponseBody& operator=(const ListRiskItemsResponseBody &) = default ;
    ListRiskItemsResponseBody& operator=(ListRiskItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RiskItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RiskItems& obj) { 
        DARABONBA_PTR_TO_JSON(AgentName, agentName_);
        DARABONBA_PTR_TO_JSON(AiConclusion, aiConclusion_);
        DARABONBA_PTR_TO_JSON(AiRiskConfirm, aiRiskConfirm_);
        DARABONBA_PTR_TO_JSON(CheckName, checkName_);
        DARABONBA_PTR_TO_JSON(Department, department_);
        DARABONBA_PTR_TO_JSON(GroupInfo, groupInfo_);
        DARABONBA_PTR_TO_JSON(Hostname, hostname_);
        DARABONBA_PTR_TO_JSON(InnerIp, innerIp_);
        DARABONBA_PTR_TO_JSON(Report, report_);
        DARABONBA_PTR_TO_JSON(RiskAnalysisPolicyNames, riskAnalysisPolicyNames_);
        DARABONBA_PTR_TO_JSON(RiskCategory, riskCategory_);
        DARABONBA_PTR_TO_JSON(RiskConfirm, riskConfirm_);
        DARABONBA_PTR_TO_JSON(RiskConfirmDesc, riskConfirmDesc_);
        DARABONBA_PTR_TO_JSON(RiskDesc, riskDesc_);
        DARABONBA_PTR_TO_JSON(RiskEndTime, riskEndTime_);
        DARABONBA_PTR_TO_JSON(RiskFeatureIds, riskFeatureIds_);
        DARABONBA_PTR_TO_JSON(RiskFoundTime, riskFoundTime_);
        DARABONBA_PTR_TO_JSON(RiskId, riskId_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(RiskScene, riskScene_);
        DARABONBA_PTR_TO_JSON(RiskStartTime, riskStartTime_);
        DARABONBA_PTR_TO_JSON(SaseUserId, saseUserId_);
        DARABONBA_PTR_TO_JSON(SkillName, skillName_);
        DARABONBA_PTR_TO_JSON(Solution, solution_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SupportAnalysis, supportAnalysis_);
        DARABONBA_PTR_TO_JSON(Username, username_);
      };
      friend void from_json(const Darabonba::Json& j, RiskItems& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
        DARABONBA_PTR_FROM_JSON(AiConclusion, aiConclusion_);
        DARABONBA_PTR_FROM_JSON(AiRiskConfirm, aiRiskConfirm_);
        DARABONBA_PTR_FROM_JSON(CheckName, checkName_);
        DARABONBA_PTR_FROM_JSON(Department, department_);
        DARABONBA_PTR_FROM_JSON(GroupInfo, groupInfo_);
        DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
        DARABONBA_PTR_FROM_JSON(InnerIp, innerIp_);
        DARABONBA_PTR_FROM_JSON(Report, report_);
        DARABONBA_PTR_FROM_JSON(RiskAnalysisPolicyNames, riskAnalysisPolicyNames_);
        DARABONBA_PTR_FROM_JSON(RiskCategory, riskCategory_);
        DARABONBA_PTR_FROM_JSON(RiskConfirm, riskConfirm_);
        DARABONBA_PTR_FROM_JSON(RiskConfirmDesc, riskConfirmDesc_);
        DARABONBA_PTR_FROM_JSON(RiskDesc, riskDesc_);
        DARABONBA_PTR_FROM_JSON(RiskEndTime, riskEndTime_);
        DARABONBA_PTR_FROM_JSON(RiskFeatureIds, riskFeatureIds_);
        DARABONBA_PTR_FROM_JSON(RiskFoundTime, riskFoundTime_);
        DARABONBA_PTR_FROM_JSON(RiskId, riskId_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(RiskScene, riskScene_);
        DARABONBA_PTR_FROM_JSON(RiskStartTime, riskStartTime_);
        DARABONBA_PTR_FROM_JSON(SaseUserId, saseUserId_);
        DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
        DARABONBA_PTR_FROM_JSON(Solution, solution_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SupportAnalysis, supportAnalysis_);
        DARABONBA_PTR_FROM_JSON(Username, username_);
      };
      RiskItems() = default ;
      RiskItems(const RiskItems &) = default ;
      RiskItems(RiskItems &&) = default ;
      RiskItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RiskItems() = default ;
      RiskItems& operator=(const RiskItems &) = default ;
      RiskItems& operator=(RiskItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentName_ == nullptr
        && this->aiConclusion_ == nullptr && this->aiRiskConfirm_ == nullptr && this->checkName_ == nullptr && this->department_ == nullptr && this->groupInfo_ == nullptr
        && this->hostname_ == nullptr && this->innerIp_ == nullptr && this->report_ == nullptr && this->riskAnalysisPolicyNames_ == nullptr && this->riskCategory_ == nullptr
        && this->riskConfirm_ == nullptr && this->riskConfirmDesc_ == nullptr && this->riskDesc_ == nullptr && this->riskEndTime_ == nullptr && this->riskFeatureIds_ == nullptr
        && this->riskFoundTime_ == nullptr && this->riskId_ == nullptr && this->riskLevel_ == nullptr && this->riskScene_ == nullptr && this->riskStartTime_ == nullptr
        && this->saseUserId_ == nullptr && this->skillName_ == nullptr && this->solution_ == nullptr && this->status_ == nullptr && this->supportAnalysis_ == nullptr
        && this->username_ == nullptr; };
      // agentName Field Functions 
      bool hasAgentName() const { return this->agentName_ != nullptr;};
      void deleteAgentName() { this->agentName_ = nullptr;};
      inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
      inline RiskItems& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


      // aiConclusion Field Functions 
      bool hasAiConclusion() const { return this->aiConclusion_ != nullptr;};
      void deleteAiConclusion() { this->aiConclusion_ = nullptr;};
      inline string getAiConclusion() const { DARABONBA_PTR_GET_DEFAULT(aiConclusion_, "") };
      inline RiskItems& setAiConclusion(string aiConclusion) { DARABONBA_PTR_SET_VALUE(aiConclusion_, aiConclusion) };


      // aiRiskConfirm Field Functions 
      bool hasAiRiskConfirm() const { return this->aiRiskConfirm_ != nullptr;};
      void deleteAiRiskConfirm() { this->aiRiskConfirm_ = nullptr;};
      inline string getAiRiskConfirm() const { DARABONBA_PTR_GET_DEFAULT(aiRiskConfirm_, "") };
      inline RiskItems& setAiRiskConfirm(string aiRiskConfirm) { DARABONBA_PTR_SET_VALUE(aiRiskConfirm_, aiRiskConfirm) };


      // checkName Field Functions 
      bool hasCheckName() const { return this->checkName_ != nullptr;};
      void deleteCheckName() { this->checkName_ = nullptr;};
      inline string getCheckName() const { DARABONBA_PTR_GET_DEFAULT(checkName_, "") };
      inline RiskItems& setCheckName(string checkName) { DARABONBA_PTR_SET_VALUE(checkName_, checkName) };


      // department Field Functions 
      bool hasDepartment() const { return this->department_ != nullptr;};
      void deleteDepartment() { this->department_ = nullptr;};
      inline string getDepartment() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
      inline RiskItems& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


      // groupInfo Field Functions 
      bool hasGroupInfo() const { return this->groupInfo_ != nullptr;};
      void deleteGroupInfo() { this->groupInfo_ = nullptr;};
      inline string getGroupInfo() const { DARABONBA_PTR_GET_DEFAULT(groupInfo_, "") };
      inline RiskItems& setGroupInfo(string groupInfo) { DARABONBA_PTR_SET_VALUE(groupInfo_, groupInfo) };


      // hostname Field Functions 
      bool hasHostname() const { return this->hostname_ != nullptr;};
      void deleteHostname() { this->hostname_ = nullptr;};
      inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
      inline RiskItems& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


      // innerIp Field Functions 
      bool hasInnerIp() const { return this->innerIp_ != nullptr;};
      void deleteInnerIp() { this->innerIp_ = nullptr;};
      inline string getInnerIp() const { DARABONBA_PTR_GET_DEFAULT(innerIp_, "") };
      inline RiskItems& setInnerIp(string innerIp) { DARABONBA_PTR_SET_VALUE(innerIp_, innerIp) };


      // report Field Functions 
      bool hasReport() const { return this->report_ != nullptr;};
      void deleteReport() { this->report_ = nullptr;};
      inline string getReport() const { DARABONBA_PTR_GET_DEFAULT(report_, "") };
      inline RiskItems& setReport(string report) { DARABONBA_PTR_SET_VALUE(report_, report) };


      // riskAnalysisPolicyNames Field Functions 
      bool hasRiskAnalysisPolicyNames() const { return this->riskAnalysisPolicyNames_ != nullptr;};
      void deleteRiskAnalysisPolicyNames() { this->riskAnalysisPolicyNames_ = nullptr;};
      inline const vector<string> & getRiskAnalysisPolicyNames() const { DARABONBA_PTR_GET_CONST(riskAnalysisPolicyNames_, vector<string>) };
      inline vector<string> getRiskAnalysisPolicyNames() { DARABONBA_PTR_GET(riskAnalysisPolicyNames_, vector<string>) };
      inline RiskItems& setRiskAnalysisPolicyNames(const vector<string> & riskAnalysisPolicyNames) { DARABONBA_PTR_SET_VALUE(riskAnalysisPolicyNames_, riskAnalysisPolicyNames) };
      inline RiskItems& setRiskAnalysisPolicyNames(vector<string> && riskAnalysisPolicyNames) { DARABONBA_PTR_SET_RVALUE(riskAnalysisPolicyNames_, riskAnalysisPolicyNames) };


      // riskCategory Field Functions 
      bool hasRiskCategory() const { return this->riskCategory_ != nullptr;};
      void deleteRiskCategory() { this->riskCategory_ = nullptr;};
      inline string getRiskCategory() const { DARABONBA_PTR_GET_DEFAULT(riskCategory_, "") };
      inline RiskItems& setRiskCategory(string riskCategory) { DARABONBA_PTR_SET_VALUE(riskCategory_, riskCategory) };


      // riskConfirm Field Functions 
      bool hasRiskConfirm() const { return this->riskConfirm_ != nullptr;};
      void deleteRiskConfirm() { this->riskConfirm_ = nullptr;};
      inline string getRiskConfirm() const { DARABONBA_PTR_GET_DEFAULT(riskConfirm_, "") };
      inline RiskItems& setRiskConfirm(string riskConfirm) { DARABONBA_PTR_SET_VALUE(riskConfirm_, riskConfirm) };


      // riskConfirmDesc Field Functions 
      bool hasRiskConfirmDesc() const { return this->riskConfirmDesc_ != nullptr;};
      void deleteRiskConfirmDesc() { this->riskConfirmDesc_ = nullptr;};
      inline string getRiskConfirmDesc() const { DARABONBA_PTR_GET_DEFAULT(riskConfirmDesc_, "") };
      inline RiskItems& setRiskConfirmDesc(string riskConfirmDesc) { DARABONBA_PTR_SET_VALUE(riskConfirmDesc_, riskConfirmDesc) };


      // riskDesc Field Functions 
      bool hasRiskDesc() const { return this->riskDesc_ != nullptr;};
      void deleteRiskDesc() { this->riskDesc_ = nullptr;};
      inline string getRiskDesc() const { DARABONBA_PTR_GET_DEFAULT(riskDesc_, "") };
      inline RiskItems& setRiskDesc(string riskDesc) { DARABONBA_PTR_SET_VALUE(riskDesc_, riskDesc) };


      // riskEndTime Field Functions 
      bool hasRiskEndTime() const { return this->riskEndTime_ != nullptr;};
      void deleteRiskEndTime() { this->riskEndTime_ = nullptr;};
      inline string getRiskEndTime() const { DARABONBA_PTR_GET_DEFAULT(riskEndTime_, "") };
      inline RiskItems& setRiskEndTime(string riskEndTime) { DARABONBA_PTR_SET_VALUE(riskEndTime_, riskEndTime) };


      // riskFeatureIds Field Functions 
      bool hasRiskFeatureIds() const { return this->riskFeatureIds_ != nullptr;};
      void deleteRiskFeatureIds() { this->riskFeatureIds_ = nullptr;};
      inline const vector<string> & getRiskFeatureIds() const { DARABONBA_PTR_GET_CONST(riskFeatureIds_, vector<string>) };
      inline vector<string> getRiskFeatureIds() { DARABONBA_PTR_GET(riskFeatureIds_, vector<string>) };
      inline RiskItems& setRiskFeatureIds(const vector<string> & riskFeatureIds) { DARABONBA_PTR_SET_VALUE(riskFeatureIds_, riskFeatureIds) };
      inline RiskItems& setRiskFeatureIds(vector<string> && riskFeatureIds) { DARABONBA_PTR_SET_RVALUE(riskFeatureIds_, riskFeatureIds) };


      // riskFoundTime Field Functions 
      bool hasRiskFoundTime() const { return this->riskFoundTime_ != nullptr;};
      void deleteRiskFoundTime() { this->riskFoundTime_ = nullptr;};
      inline string getRiskFoundTime() const { DARABONBA_PTR_GET_DEFAULT(riskFoundTime_, "") };
      inline RiskItems& setRiskFoundTime(string riskFoundTime) { DARABONBA_PTR_SET_VALUE(riskFoundTime_, riskFoundTime) };


      // riskId Field Functions 
      bool hasRiskId() const { return this->riskId_ != nullptr;};
      void deleteRiskId() { this->riskId_ = nullptr;};
      inline string getRiskId() const { DARABONBA_PTR_GET_DEFAULT(riskId_, "") };
      inline RiskItems& setRiskId(string riskId) { DARABONBA_PTR_SET_VALUE(riskId_, riskId) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline RiskItems& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // riskScene Field Functions 
      bool hasRiskScene() const { return this->riskScene_ != nullptr;};
      void deleteRiskScene() { this->riskScene_ = nullptr;};
      inline string getRiskScene() const { DARABONBA_PTR_GET_DEFAULT(riskScene_, "") };
      inline RiskItems& setRiskScene(string riskScene) { DARABONBA_PTR_SET_VALUE(riskScene_, riskScene) };


      // riskStartTime Field Functions 
      bool hasRiskStartTime() const { return this->riskStartTime_ != nullptr;};
      void deleteRiskStartTime() { this->riskStartTime_ = nullptr;};
      inline string getRiskStartTime() const { DARABONBA_PTR_GET_DEFAULT(riskStartTime_, "") };
      inline RiskItems& setRiskStartTime(string riskStartTime) { DARABONBA_PTR_SET_VALUE(riskStartTime_, riskStartTime) };


      // saseUserId Field Functions 
      bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
      void deleteSaseUserId() { this->saseUserId_ = nullptr;};
      inline string getSaseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
      inline RiskItems& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


      // skillName Field Functions 
      bool hasSkillName() const { return this->skillName_ != nullptr;};
      void deleteSkillName() { this->skillName_ = nullptr;};
      inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
      inline RiskItems& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


      // solution Field Functions 
      bool hasSolution() const { return this->solution_ != nullptr;};
      void deleteSolution() { this->solution_ = nullptr;};
      inline string getSolution() const { DARABONBA_PTR_GET_DEFAULT(solution_, "") };
      inline RiskItems& setSolution(string solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RiskItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // supportAnalysis Field Functions 
      bool hasSupportAnalysis() const { return this->supportAnalysis_ != nullptr;};
      void deleteSupportAnalysis() { this->supportAnalysis_ = nullptr;};
      inline bool getSupportAnalysis() const { DARABONBA_PTR_GET_DEFAULT(supportAnalysis_, false) };
      inline RiskItems& setSupportAnalysis(bool supportAnalysis) { DARABONBA_PTR_SET_VALUE(supportAnalysis_, supportAnalysis) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline RiskItems& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    protected:
      // The name of the Agent that generated the risk event. An empty string is returned for non-Agent risk scenarios.
      shared_ptr<string> agentName_ {};
      // The AI risk analysis conclusion.
      shared_ptr<string> aiConclusion_ {};
      // The risk judgment provided by AI. An empty string is returned if no AI analysis results exist. Valid values:
      // * `Risk`: determined as risky.
      // * `Ignore`: determined as not risky.
      shared_ptr<string> aiRiskConfirm_ {};
      // The name of the risk detection item.
      shared_ptr<string> checkName_ {};
      // The department to which the user associated with the risk event belongs.
      shared_ptr<string> department_ {};
      // The original organizational structure information of the user associated with the risk event.
      shared_ptr<string> groupInfo_ {};
      // The name of the endpoint device associated with the risk event.
      shared_ptr<string> hostname_ {};
      // The internal IP address of the endpoint associated with the risk event.
      shared_ptr<string> innerIp_ {};
      // The risk detection report or risk evidence.
      shared_ptr<string> report_ {};
      // The list of risk analysis policy names that were hit.
      shared_ptr<vector<string>> riskAnalysisPolicyNames_ {};
      // The risk category. Valid values:
      // - `data_safe`: data security.
      // - `identify_safe`: identity security.
      // - `device_safe`: device security.
      // - `access_safe`: access security.
      // - `ai_agent_safe`: Agent security.
      shared_ptr<string> riskCategory_ {};
      // The manually confirmed risk conclusion. An empty string is returned if not confirmed. Valid values:
      // * `Risk`: confirmed as risky.
      // * `Ignore`: confirmed as not risky.
      // * `Invalid`: confirmed as a false positive.
      shared_ptr<string> riskConfirm_ {};
      // The description of the risk event disposition.
      shared_ptr<string> riskConfirmDesc_ {};
      // The risk description.
      shared_ptr<string> riskDesc_ {};
      // The end time of the risky behavior, in the format of `yyyy-MM-dd HH:mm:ss`.
      shared_ptr<string> riskEndTime_ {};
      // The list of detection feature or detection item identifiers that triggered the risk event. A risk event may hit multiple identifiers. The specific values vary based on the risk scenario and detection rules.
      shared_ptr<vector<string>> riskFeatureIds_ {};
      // The time when the risk was detected, in the format of `yyyy-MM-dd HH:mm:ss`.
      shared_ptr<string> riskFoundTime_ {};
      // The risk event ID.
      shared_ptr<string> riskId_ {};
      // The risk level. Valid values:
      // - `High`: high risk.
      // - `Medium`: medium risk.
      // - `Low`: low risk.
      shared_ptr<string> riskLevel_ {};
      // The risk scenario. Valid values:
      // - `account_share`: account sharing.
      // - `account_stolen`: account theft.
      // - `device_share`: device sharing.
      // - `remote_logon`: remote logon from an unusual location.
      // - `sensitive_data_leakage`: sensitive data exfiltration.
      // - `lateral_scanning`: lateral scanning.
      // - `ai_skill_malware`: malicious Skill.
      // - `ai_config_check`: AI configuration check.
      // - `openclaw_vulnerability`: OpenClaw vulnerability.
      shared_ptr<string> riskScene_ {};
      // The start time of the risky behavior, in the format of `yyyy-MM-dd HH:mm:ss`.
      shared_ptr<string> riskStartTime_ {};
      // The SASE user ID associated with the risk event.
      shared_ptr<string> saseUserId_ {};
      // The name of the Agent Skill that generated the risk event. An empty string is returned for non-Agent risk scenarios.
      shared_ptr<string> skillName_ {};
      // The recommended remediation action for the risk event.
      shared_ptr<string> solution_ {};
      // The disposition status of the risk event. Valid values:
      // * `Unprocess`: unprocessed.
      // * `Processing`: being processed.
      // * `Processed`: processed.
      shared_ptr<string> status_ {};
      // Indicates whether AI risk analysis results exist. Valid values:
      // * `true`: AI risk analysis results exist.
      // * `false`: AI risk analysis results do not exist.
      shared_ptr<bool> supportAnalysis_ {};
      // The username associated with the risk event.
      shared_ptr<string> username_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->riskItems_ == nullptr && this->totalNum_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRiskItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskItems Field Functions 
    bool hasRiskItems() const { return this->riskItems_ != nullptr;};
    void deleteRiskItems() { this->riskItems_ = nullptr;};
    inline const vector<ListRiskItemsResponseBody::RiskItems> & getRiskItems() const { DARABONBA_PTR_GET_CONST(riskItems_, vector<ListRiskItemsResponseBody::RiskItems>) };
    inline vector<ListRiskItemsResponseBody::RiskItems> getRiskItems() { DARABONBA_PTR_GET(riskItems_, vector<ListRiskItemsResponseBody::RiskItems>) };
    inline ListRiskItemsResponseBody& setRiskItems(const vector<ListRiskItemsResponseBody::RiskItems> & riskItems) { DARABONBA_PTR_SET_VALUE(riskItems_, riskItems) };
    inline ListRiskItemsResponseBody& setRiskItems(vector<ListRiskItemsResponseBody::RiskItems> && riskItems) { DARABONBA_PTR_SET_RVALUE(riskItems_, riskItems) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ListRiskItemsResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of risk events.
    shared_ptr<vector<ListRiskItemsResponseBody::RiskItems>> riskItems_ {};
    // The total number of risk events that meet the query conditions.
    shared_ptr<int32_t> totalNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
