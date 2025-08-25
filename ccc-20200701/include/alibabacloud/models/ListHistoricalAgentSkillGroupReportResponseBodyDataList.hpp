// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHISTORICALAGENTSKILLGROUPREPORTRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTHISTORICALAGENTSKILLGROUPREPORTRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back.hpp>
#include <alibabacloud/models/ListHistoricalAgentSkillGroupReportResponseBodyDataListInbound.hpp>
#include <alibabacloud/models/ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal.hpp>
#include <alibabacloud/models/ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound.hpp>
#include <alibabacloud/models/ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListHistoricalAgentSkillGroupReportResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHistoricalAgentSkillGroupReportResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_PTR_TO_JSON(Back2Back, back2Back_);
      DARABONBA_PTR_TO_JSON(DisplayId, displayId_);
      DARABONBA_PTR_TO_JSON(Inbound, inbound_);
      DARABONBA_PTR_TO_JSON(Internal, internal_);
      DARABONBA_PTR_TO_JSON(Outbound, outbound_);
      DARABONBA_PTR_TO_JSON(Overall, overall_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(SkillGroupName, skillGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ListHistoricalAgentSkillGroupReportResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_PTR_FROM_JSON(Back2Back, back2Back_);
      DARABONBA_PTR_FROM_JSON(DisplayId, displayId_);
      DARABONBA_PTR_FROM_JSON(Inbound, inbound_);
      DARABONBA_PTR_FROM_JSON(Internal, internal_);
      DARABONBA_PTR_FROM_JSON(Outbound, outbound_);
      DARABONBA_PTR_FROM_JSON(Overall, overall_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(SkillGroupName, skillGroupName_);
    };
    ListHistoricalAgentSkillGroupReportResponseBodyDataList() = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataList(const ListHistoricalAgentSkillGroupReportResponseBodyDataList &) = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataList(ListHistoricalAgentSkillGroupReportResponseBodyDataList &&) = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHistoricalAgentSkillGroupReportResponseBodyDataList() = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataList& operator=(const ListHistoricalAgentSkillGroupReportResponseBodyDataList &) = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataList& operator=(ListHistoricalAgentSkillGroupReportResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentId_ != nullptr
        && this->agentName_ != nullptr && this->back2Back_ != nullptr && this->displayId_ != nullptr && this->inbound_ != nullptr && this->internal_ != nullptr
        && this->outbound_ != nullptr && this->overall_ != nullptr && this->skillGroupId_ != nullptr && this->skillGroupName_ != nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataList& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string agentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataList& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // back2Back Field Functions 
    bool hasBack2Back() const { return this->back2Back_ != nullptr;};
    void deleteBack2Back() { this->back2Back_ = nullptr;};
    inline const Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back & back2Back() const { DARABONBA_PTR_GET_CONST(back2Back_, Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back) };
    inline Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back back2Back() { DARABONBA_PTR_GET(back2Back_, Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataList& setBack2Back(const Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back & back2Back) { DARABONBA_PTR_SET_VALUE(back2Back_, back2Back) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataList& setBack2Back(Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back && back2Back) { DARABONBA_PTR_SET_RVALUE(back2Back_, back2Back) };


    // displayId Field Functions 
    bool hasDisplayId() const { return this->displayId_ != nullptr;};
    void deleteDisplayId() { this->displayId_ = nullptr;};
    inline string displayId() const { DARABONBA_PTR_GET_DEFAULT(displayId_, "") };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataList& setDisplayId(string displayId) { DARABONBA_PTR_SET_VALUE(displayId_, displayId) };


    // inbound Field Functions 
    bool hasInbound() const { return this->inbound_ != nullptr;};
    void deleteInbound() { this->inbound_ = nullptr;};
    inline const Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListInbound & inbound() const { DARABONBA_PTR_GET_CONST(inbound_, Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListInbound) };
    inline Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListInbound inbound() { DARABONBA_PTR_GET(inbound_, Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListInbound) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataList& setInbound(const Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListInbound & inbound) { DARABONBA_PTR_SET_VALUE(inbound_, inbound) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataList& setInbound(Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListInbound && inbound) { DARABONBA_PTR_SET_RVALUE(inbound_, inbound) };


    // internal Field Functions 
    bool hasInternal() const { return this->internal_ != nullptr;};
    void deleteInternal() { this->internal_ = nullptr;};
    inline const Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal & internal() const { DARABONBA_PTR_GET_CONST(internal_, Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal) };
    inline Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal internal() { DARABONBA_PTR_GET(internal_, Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataList& setInternal(const Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal & internal) { DARABONBA_PTR_SET_VALUE(internal_, internal) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataList& setInternal(Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal && internal) { DARABONBA_PTR_SET_RVALUE(internal_, internal) };


    // outbound Field Functions 
    bool hasOutbound() const { return this->outbound_ != nullptr;};
    void deleteOutbound() { this->outbound_ = nullptr;};
    inline const Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound & outbound() const { DARABONBA_PTR_GET_CONST(outbound_, Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound) };
    inline Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound outbound() { DARABONBA_PTR_GET(outbound_, Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataList& setOutbound(const Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound & outbound) { DARABONBA_PTR_SET_VALUE(outbound_, outbound) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataList& setOutbound(Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound && outbound) { DARABONBA_PTR_SET_RVALUE(outbound_, outbound) };


    // overall Field Functions 
    bool hasOverall() const { return this->overall_ != nullptr;};
    void deleteOverall() { this->overall_ = nullptr;};
    inline const Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall & overall() const { DARABONBA_PTR_GET_CONST(overall_, Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall) };
    inline Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall overall() { DARABONBA_PTR_GET(overall_, Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataList& setOverall(const Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall & overall) { DARABONBA_PTR_SET_VALUE(overall_, overall) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataList& setOverall(Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall && overall) { DARABONBA_PTR_SET_RVALUE(overall_, overall) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataList& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    // skillGroupName Field Functions 
    bool hasSkillGroupName() const { return this->skillGroupName_ != nullptr;};
    void deleteSkillGroupName() { this->skillGroupName_ = nullptr;};
    inline string skillGroupName() const { DARABONBA_PTR_GET_DEFAULT(skillGroupName_, "") };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataList& setSkillGroupName(string skillGroupName) { DARABONBA_PTR_SET_VALUE(skillGroupName_, skillGroupName) };


  protected:
    std::shared_ptr<string> agentId_ = nullptr;
    std::shared_ptr<string> agentName_ = nullptr;
    std::shared_ptr<Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back> back2Back_ = nullptr;
    std::shared_ptr<string> displayId_ = nullptr;
    std::shared_ptr<Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListInbound> inbound_ = nullptr;
    std::shared_ptr<Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal> internal_ = nullptr;
    std::shared_ptr<Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound> outbound_ = nullptr;
    std::shared_ptr<Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall> overall_ = nullptr;
    std::shared_ptr<string> skillGroupId_ = nullptr;
    std::shared_ptr<string> skillGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
