// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHISTORICALAGENTREPORTRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTHISTORICALAGENTREPORTRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListHistoricalAgentReportResponseBodyDataListBack2Back.hpp>
#include <alibabacloud/models/ListHistoricalAgentReportResponseBodyDataListInbound.hpp>
#include <alibabacloud/models/ListHistoricalAgentReportResponseBodyDataListInternal.hpp>
#include <alibabacloud/models/ListHistoricalAgentReportResponseBodyDataListOutbound.hpp>
#include <alibabacloud/models/ListHistoricalAgentReportResponseBodyDataListOverall.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListHistoricalAgentReportResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHistoricalAgentReportResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_PTR_TO_JSON(Back2Back, back2Back_);
      DARABONBA_PTR_TO_JSON(DisplayId, displayId_);
      DARABONBA_PTR_TO_JSON(Inbound, inbound_);
      DARABONBA_PTR_TO_JSON(Internal, internal_);
      DARABONBA_PTR_TO_JSON(Outbound, outbound_);
      DARABONBA_PTR_TO_JSON(Overall, overall_);
      DARABONBA_PTR_TO_JSON(SkillGroupIds, skillGroupIds_);
      DARABONBA_PTR_TO_JSON(SkillGroupNames, skillGroupNames_);
    };
    friend void from_json(const Darabonba::Json& j, ListHistoricalAgentReportResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_PTR_FROM_JSON(Back2Back, back2Back_);
      DARABONBA_PTR_FROM_JSON(DisplayId, displayId_);
      DARABONBA_PTR_FROM_JSON(Inbound, inbound_);
      DARABONBA_PTR_FROM_JSON(Internal, internal_);
      DARABONBA_PTR_FROM_JSON(Outbound, outbound_);
      DARABONBA_PTR_FROM_JSON(Overall, overall_);
      DARABONBA_PTR_FROM_JSON(SkillGroupIds, skillGroupIds_);
      DARABONBA_PTR_FROM_JSON(SkillGroupNames, skillGroupNames_);
    };
    ListHistoricalAgentReportResponseBodyDataList() = default ;
    ListHistoricalAgentReportResponseBodyDataList(const ListHistoricalAgentReportResponseBodyDataList &) = default ;
    ListHistoricalAgentReportResponseBodyDataList(ListHistoricalAgentReportResponseBodyDataList &&) = default ;
    ListHistoricalAgentReportResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHistoricalAgentReportResponseBodyDataList() = default ;
    ListHistoricalAgentReportResponseBodyDataList& operator=(const ListHistoricalAgentReportResponseBodyDataList &) = default ;
    ListHistoricalAgentReportResponseBodyDataList& operator=(ListHistoricalAgentReportResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentId_ != nullptr
        && this->agentName_ != nullptr && this->back2Back_ != nullptr && this->displayId_ != nullptr && this->inbound_ != nullptr && this->internal_ != nullptr
        && this->outbound_ != nullptr && this->overall_ != nullptr && this->skillGroupIds_ != nullptr && this->skillGroupNames_ != nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline ListHistoricalAgentReportResponseBodyDataList& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string agentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline ListHistoricalAgentReportResponseBodyDataList& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // back2Back Field Functions 
    bool hasBack2Back() const { return this->back2Back_ != nullptr;};
    void deleteBack2Back() { this->back2Back_ = nullptr;};
    inline const Models::ListHistoricalAgentReportResponseBodyDataListBack2Back & back2Back() const { DARABONBA_PTR_GET_CONST(back2Back_, Models::ListHistoricalAgentReportResponseBodyDataListBack2Back) };
    inline Models::ListHistoricalAgentReportResponseBodyDataListBack2Back back2Back() { DARABONBA_PTR_GET(back2Back_, Models::ListHistoricalAgentReportResponseBodyDataListBack2Back) };
    inline ListHistoricalAgentReportResponseBodyDataList& setBack2Back(const Models::ListHistoricalAgentReportResponseBodyDataListBack2Back & back2Back) { DARABONBA_PTR_SET_VALUE(back2Back_, back2Back) };
    inline ListHistoricalAgentReportResponseBodyDataList& setBack2Back(Models::ListHistoricalAgentReportResponseBodyDataListBack2Back && back2Back) { DARABONBA_PTR_SET_RVALUE(back2Back_, back2Back) };


    // displayId Field Functions 
    bool hasDisplayId() const { return this->displayId_ != nullptr;};
    void deleteDisplayId() { this->displayId_ = nullptr;};
    inline string displayId() const { DARABONBA_PTR_GET_DEFAULT(displayId_, "") };
    inline ListHistoricalAgentReportResponseBodyDataList& setDisplayId(string displayId) { DARABONBA_PTR_SET_VALUE(displayId_, displayId) };


    // inbound Field Functions 
    bool hasInbound() const { return this->inbound_ != nullptr;};
    void deleteInbound() { this->inbound_ = nullptr;};
    inline const Models::ListHistoricalAgentReportResponseBodyDataListInbound & inbound() const { DARABONBA_PTR_GET_CONST(inbound_, Models::ListHistoricalAgentReportResponseBodyDataListInbound) };
    inline Models::ListHistoricalAgentReportResponseBodyDataListInbound inbound() { DARABONBA_PTR_GET(inbound_, Models::ListHistoricalAgentReportResponseBodyDataListInbound) };
    inline ListHistoricalAgentReportResponseBodyDataList& setInbound(const Models::ListHistoricalAgentReportResponseBodyDataListInbound & inbound) { DARABONBA_PTR_SET_VALUE(inbound_, inbound) };
    inline ListHistoricalAgentReportResponseBodyDataList& setInbound(Models::ListHistoricalAgentReportResponseBodyDataListInbound && inbound) { DARABONBA_PTR_SET_RVALUE(inbound_, inbound) };


    // internal Field Functions 
    bool hasInternal() const { return this->internal_ != nullptr;};
    void deleteInternal() { this->internal_ = nullptr;};
    inline const Models::ListHistoricalAgentReportResponseBodyDataListInternal & internal() const { DARABONBA_PTR_GET_CONST(internal_, Models::ListHistoricalAgentReportResponseBodyDataListInternal) };
    inline Models::ListHistoricalAgentReportResponseBodyDataListInternal internal() { DARABONBA_PTR_GET(internal_, Models::ListHistoricalAgentReportResponseBodyDataListInternal) };
    inline ListHistoricalAgentReportResponseBodyDataList& setInternal(const Models::ListHistoricalAgentReportResponseBodyDataListInternal & internal) { DARABONBA_PTR_SET_VALUE(internal_, internal) };
    inline ListHistoricalAgentReportResponseBodyDataList& setInternal(Models::ListHistoricalAgentReportResponseBodyDataListInternal && internal) { DARABONBA_PTR_SET_RVALUE(internal_, internal) };


    // outbound Field Functions 
    bool hasOutbound() const { return this->outbound_ != nullptr;};
    void deleteOutbound() { this->outbound_ = nullptr;};
    inline const Models::ListHistoricalAgentReportResponseBodyDataListOutbound & outbound() const { DARABONBA_PTR_GET_CONST(outbound_, Models::ListHistoricalAgentReportResponseBodyDataListOutbound) };
    inline Models::ListHistoricalAgentReportResponseBodyDataListOutbound outbound() { DARABONBA_PTR_GET(outbound_, Models::ListHistoricalAgentReportResponseBodyDataListOutbound) };
    inline ListHistoricalAgentReportResponseBodyDataList& setOutbound(const Models::ListHistoricalAgentReportResponseBodyDataListOutbound & outbound) { DARABONBA_PTR_SET_VALUE(outbound_, outbound) };
    inline ListHistoricalAgentReportResponseBodyDataList& setOutbound(Models::ListHistoricalAgentReportResponseBodyDataListOutbound && outbound) { DARABONBA_PTR_SET_RVALUE(outbound_, outbound) };


    // overall Field Functions 
    bool hasOverall() const { return this->overall_ != nullptr;};
    void deleteOverall() { this->overall_ = nullptr;};
    inline const Models::ListHistoricalAgentReportResponseBodyDataListOverall & overall() const { DARABONBA_PTR_GET_CONST(overall_, Models::ListHistoricalAgentReportResponseBodyDataListOverall) };
    inline Models::ListHistoricalAgentReportResponseBodyDataListOverall overall() { DARABONBA_PTR_GET(overall_, Models::ListHistoricalAgentReportResponseBodyDataListOverall) };
    inline ListHistoricalAgentReportResponseBodyDataList& setOverall(const Models::ListHistoricalAgentReportResponseBodyDataListOverall & overall) { DARABONBA_PTR_SET_VALUE(overall_, overall) };
    inline ListHistoricalAgentReportResponseBodyDataList& setOverall(Models::ListHistoricalAgentReportResponseBodyDataListOverall && overall) { DARABONBA_PTR_SET_RVALUE(overall_, overall) };


    // skillGroupIds Field Functions 
    bool hasSkillGroupIds() const { return this->skillGroupIds_ != nullptr;};
    void deleteSkillGroupIds() { this->skillGroupIds_ = nullptr;};
    inline string skillGroupIds() const { DARABONBA_PTR_GET_DEFAULT(skillGroupIds_, "") };
    inline ListHistoricalAgentReportResponseBodyDataList& setSkillGroupIds(string skillGroupIds) { DARABONBA_PTR_SET_VALUE(skillGroupIds_, skillGroupIds) };


    // skillGroupNames Field Functions 
    bool hasSkillGroupNames() const { return this->skillGroupNames_ != nullptr;};
    void deleteSkillGroupNames() { this->skillGroupNames_ = nullptr;};
    inline string skillGroupNames() const { DARABONBA_PTR_GET_DEFAULT(skillGroupNames_, "") };
    inline ListHistoricalAgentReportResponseBodyDataList& setSkillGroupNames(string skillGroupNames) { DARABONBA_PTR_SET_VALUE(skillGroupNames_, skillGroupNames) };


  protected:
    std::shared_ptr<string> agentId_ = nullptr;
    std::shared_ptr<string> agentName_ = nullptr;
    std::shared_ptr<Models::ListHistoricalAgentReportResponseBodyDataListBack2Back> back2Back_ = nullptr;
    std::shared_ptr<string> displayId_ = nullptr;
    std::shared_ptr<Models::ListHistoricalAgentReportResponseBodyDataListInbound> inbound_ = nullptr;
    std::shared_ptr<Models::ListHistoricalAgentReportResponseBodyDataListInternal> internal_ = nullptr;
    std::shared_ptr<Models::ListHistoricalAgentReportResponseBodyDataListOutbound> outbound_ = nullptr;
    std::shared_ptr<Models::ListHistoricalAgentReportResponseBodyDataListOverall> overall_ = nullptr;
    std::shared_ptr<string> skillGroupIds_ = nullptr;
    std::shared_ptr<string> skillGroupNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
