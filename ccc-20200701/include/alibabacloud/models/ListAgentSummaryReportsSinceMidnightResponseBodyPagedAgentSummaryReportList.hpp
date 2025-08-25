// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTSUMMARYREPORTSSINCEMIDNIGHTRESPONSEBODYPAGEDAGENTSUMMARYREPORTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTSUMMARYREPORTSSINCEMIDNIGHTRESPONSEBODYPAGEDAGENTSUMMARYREPORTLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound.hpp>
#include <alibabacloud/models/ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound.hpp>
#include <alibabacloud/models/ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportList& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_PTR_TO_JSON(Inbound, inbound_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LoginName, loginName_);
      DARABONBA_PTR_TO_JSON(Outbound, outbound_);
      DARABONBA_PTR_TO_JSON(Overall, overall_);
      DARABONBA_PTR_TO_JSON(SkillGroupIds, skillGroupIds_);
      DARABONBA_PTR_TO_JSON(SkillGroupNames, skillGroupNames_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportList& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_PTR_FROM_JSON(Inbound, inbound_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LoginName, loginName_);
      DARABONBA_PTR_FROM_JSON(Outbound, outbound_);
      DARABONBA_PTR_FROM_JSON(Overall, overall_);
      DARABONBA_PTR_FROM_JSON(SkillGroupIds, skillGroupIds_);
      DARABONBA_PTR_FROM_JSON(SkillGroupNames, skillGroupNames_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportList() = default ;
    ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportList(const ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportList &) = default ;
    ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportList(ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportList &&) = default ;
    ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportList() = default ;
    ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportList& operator=(const ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportList &) = default ;
    ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportList& operator=(ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentId_ != nullptr
        && this->agentName_ != nullptr && this->inbound_ != nullptr && this->instanceId_ != nullptr && this->loginName_ != nullptr && this->outbound_ != nullptr
        && this->overall_ != nullptr && this->skillGroupIds_ != nullptr && this->skillGroupNames_ != nullptr && this->timestamp_ != nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportList& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string agentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportList& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // inbound Field Functions 
    bool hasInbound() const { return this->inbound_ != nullptr;};
    void deleteInbound() { this->inbound_ = nullptr;};
    inline const Models::ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound & inbound() const { DARABONBA_PTR_GET_CONST(inbound_, Models::ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound) };
    inline Models::ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound inbound() { DARABONBA_PTR_GET(inbound_, Models::ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportList& setInbound(const Models::ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound & inbound) { DARABONBA_PTR_SET_VALUE(inbound_, inbound) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportList& setInbound(Models::ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound && inbound) { DARABONBA_PTR_SET_RVALUE(inbound_, inbound) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // loginName Field Functions 
    bool hasLoginName() const { return this->loginName_ != nullptr;};
    void deleteLoginName() { this->loginName_ = nullptr;};
    inline string loginName() const { DARABONBA_PTR_GET_DEFAULT(loginName_, "") };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportList& setLoginName(string loginName) { DARABONBA_PTR_SET_VALUE(loginName_, loginName) };


    // outbound Field Functions 
    bool hasOutbound() const { return this->outbound_ != nullptr;};
    void deleteOutbound() { this->outbound_ = nullptr;};
    inline const Models::ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound & outbound() const { DARABONBA_PTR_GET_CONST(outbound_, Models::ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound) };
    inline Models::ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound outbound() { DARABONBA_PTR_GET(outbound_, Models::ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportList& setOutbound(const Models::ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound & outbound) { DARABONBA_PTR_SET_VALUE(outbound_, outbound) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportList& setOutbound(Models::ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound && outbound) { DARABONBA_PTR_SET_RVALUE(outbound_, outbound) };


    // overall Field Functions 
    bool hasOverall() const { return this->overall_ != nullptr;};
    void deleteOverall() { this->overall_ = nullptr;};
    inline const Models::ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall & overall() const { DARABONBA_PTR_GET_CONST(overall_, Models::ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall) };
    inline Models::ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall overall() { DARABONBA_PTR_GET(overall_, Models::ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportList& setOverall(const Models::ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall & overall) { DARABONBA_PTR_SET_VALUE(overall_, overall) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportList& setOverall(Models::ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall && overall) { DARABONBA_PTR_SET_RVALUE(overall_, overall) };


    // skillGroupIds Field Functions 
    bool hasSkillGroupIds() const { return this->skillGroupIds_ != nullptr;};
    void deleteSkillGroupIds() { this->skillGroupIds_ = nullptr;};
    inline string skillGroupIds() const { DARABONBA_PTR_GET_DEFAULT(skillGroupIds_, "") };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportList& setSkillGroupIds(string skillGroupIds) { DARABONBA_PTR_SET_VALUE(skillGroupIds_, skillGroupIds) };


    // skillGroupNames Field Functions 
    bool hasSkillGroupNames() const { return this->skillGroupNames_ != nullptr;};
    void deleteSkillGroupNames() { this->skillGroupNames_ = nullptr;};
    inline string skillGroupNames() const { DARABONBA_PTR_GET_DEFAULT(skillGroupNames_, "") };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportList& setSkillGroupNames(string skillGroupNames) { DARABONBA_PTR_SET_VALUE(skillGroupNames_, skillGroupNames) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportList& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    std::shared_ptr<string> agentId_ = nullptr;
    std::shared_ptr<string> agentName_ = nullptr;
    std::shared_ptr<Models::ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound> inbound_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> loginName_ = nullptr;
    std::shared_ptr<Models::ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound> outbound_ = nullptr;
    std::shared_ptr<Models::ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall> overall_ = nullptr;
    std::shared_ptr<string> skillGroupIds_ = nullptr;
    std::shared_ptr<string> skillGroupNames_ = nullptr;
    std::shared_ptr<string> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
