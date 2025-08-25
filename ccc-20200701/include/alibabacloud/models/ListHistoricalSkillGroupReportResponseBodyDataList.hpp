// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHISTORICALSKILLGROUPREPORTRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTHISTORICALSKILLGROUPREPORTRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListHistoricalSkillGroupReportResponseBodyDataListBack2Back.hpp>
#include <alibabacloud/models/ListHistoricalSkillGroupReportResponseBodyDataListInbound.hpp>
#include <alibabacloud/models/ListHistoricalSkillGroupReportResponseBodyDataListOutbound.hpp>
#include <alibabacloud/models/ListHistoricalSkillGroupReportResponseBodyDataListOverall.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListHistoricalSkillGroupReportResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHistoricalSkillGroupReportResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Back2Back, back2Back_);
      DARABONBA_PTR_TO_JSON(Inbound, inbound_);
      DARABONBA_PTR_TO_JSON(Outbound, outbound_);
      DARABONBA_PTR_TO_JSON(Overall, overall_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(SkillGroupName, skillGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ListHistoricalSkillGroupReportResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Back2Back, back2Back_);
      DARABONBA_PTR_FROM_JSON(Inbound, inbound_);
      DARABONBA_PTR_FROM_JSON(Outbound, outbound_);
      DARABONBA_PTR_FROM_JSON(Overall, overall_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(SkillGroupName, skillGroupName_);
    };
    ListHistoricalSkillGroupReportResponseBodyDataList() = default ;
    ListHistoricalSkillGroupReportResponseBodyDataList(const ListHistoricalSkillGroupReportResponseBodyDataList &) = default ;
    ListHistoricalSkillGroupReportResponseBodyDataList(ListHistoricalSkillGroupReportResponseBodyDataList &&) = default ;
    ListHistoricalSkillGroupReportResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHistoricalSkillGroupReportResponseBodyDataList() = default ;
    ListHistoricalSkillGroupReportResponseBodyDataList& operator=(const ListHistoricalSkillGroupReportResponseBodyDataList &) = default ;
    ListHistoricalSkillGroupReportResponseBodyDataList& operator=(ListHistoricalSkillGroupReportResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->back2Back_ != nullptr
        && this->inbound_ != nullptr && this->outbound_ != nullptr && this->overall_ != nullptr && this->skillGroupId_ != nullptr && this->skillGroupName_ != nullptr; };
    // back2Back Field Functions 
    bool hasBack2Back() const { return this->back2Back_ != nullptr;};
    void deleteBack2Back() { this->back2Back_ = nullptr;};
    inline const Models::ListHistoricalSkillGroupReportResponseBodyDataListBack2Back & back2Back() const { DARABONBA_PTR_GET_CONST(back2Back_, Models::ListHistoricalSkillGroupReportResponseBodyDataListBack2Back) };
    inline Models::ListHistoricalSkillGroupReportResponseBodyDataListBack2Back back2Back() { DARABONBA_PTR_GET(back2Back_, Models::ListHistoricalSkillGroupReportResponseBodyDataListBack2Back) };
    inline ListHistoricalSkillGroupReportResponseBodyDataList& setBack2Back(const Models::ListHistoricalSkillGroupReportResponseBodyDataListBack2Back & back2Back) { DARABONBA_PTR_SET_VALUE(back2Back_, back2Back) };
    inline ListHistoricalSkillGroupReportResponseBodyDataList& setBack2Back(Models::ListHistoricalSkillGroupReportResponseBodyDataListBack2Back && back2Back) { DARABONBA_PTR_SET_RVALUE(back2Back_, back2Back) };


    // inbound Field Functions 
    bool hasInbound() const { return this->inbound_ != nullptr;};
    void deleteInbound() { this->inbound_ = nullptr;};
    inline const Models::ListHistoricalSkillGroupReportResponseBodyDataListInbound & inbound() const { DARABONBA_PTR_GET_CONST(inbound_, Models::ListHistoricalSkillGroupReportResponseBodyDataListInbound) };
    inline Models::ListHistoricalSkillGroupReportResponseBodyDataListInbound inbound() { DARABONBA_PTR_GET(inbound_, Models::ListHistoricalSkillGroupReportResponseBodyDataListInbound) };
    inline ListHistoricalSkillGroupReportResponseBodyDataList& setInbound(const Models::ListHistoricalSkillGroupReportResponseBodyDataListInbound & inbound) { DARABONBA_PTR_SET_VALUE(inbound_, inbound) };
    inline ListHistoricalSkillGroupReportResponseBodyDataList& setInbound(Models::ListHistoricalSkillGroupReportResponseBodyDataListInbound && inbound) { DARABONBA_PTR_SET_RVALUE(inbound_, inbound) };


    // outbound Field Functions 
    bool hasOutbound() const { return this->outbound_ != nullptr;};
    void deleteOutbound() { this->outbound_ = nullptr;};
    inline const Models::ListHistoricalSkillGroupReportResponseBodyDataListOutbound & outbound() const { DARABONBA_PTR_GET_CONST(outbound_, Models::ListHistoricalSkillGroupReportResponseBodyDataListOutbound) };
    inline Models::ListHistoricalSkillGroupReportResponseBodyDataListOutbound outbound() { DARABONBA_PTR_GET(outbound_, Models::ListHistoricalSkillGroupReportResponseBodyDataListOutbound) };
    inline ListHistoricalSkillGroupReportResponseBodyDataList& setOutbound(const Models::ListHistoricalSkillGroupReportResponseBodyDataListOutbound & outbound) { DARABONBA_PTR_SET_VALUE(outbound_, outbound) };
    inline ListHistoricalSkillGroupReportResponseBodyDataList& setOutbound(Models::ListHistoricalSkillGroupReportResponseBodyDataListOutbound && outbound) { DARABONBA_PTR_SET_RVALUE(outbound_, outbound) };


    // overall Field Functions 
    bool hasOverall() const { return this->overall_ != nullptr;};
    void deleteOverall() { this->overall_ = nullptr;};
    inline const Models::ListHistoricalSkillGroupReportResponseBodyDataListOverall & overall() const { DARABONBA_PTR_GET_CONST(overall_, Models::ListHistoricalSkillGroupReportResponseBodyDataListOverall) };
    inline Models::ListHistoricalSkillGroupReportResponseBodyDataListOverall overall() { DARABONBA_PTR_GET(overall_, Models::ListHistoricalSkillGroupReportResponseBodyDataListOverall) };
    inline ListHistoricalSkillGroupReportResponseBodyDataList& setOverall(const Models::ListHistoricalSkillGroupReportResponseBodyDataListOverall & overall) { DARABONBA_PTR_SET_VALUE(overall_, overall) };
    inline ListHistoricalSkillGroupReportResponseBodyDataList& setOverall(Models::ListHistoricalSkillGroupReportResponseBodyDataListOverall && overall) { DARABONBA_PTR_SET_RVALUE(overall_, overall) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline ListHistoricalSkillGroupReportResponseBodyDataList& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    // skillGroupName Field Functions 
    bool hasSkillGroupName() const { return this->skillGroupName_ != nullptr;};
    void deleteSkillGroupName() { this->skillGroupName_ = nullptr;};
    inline string skillGroupName() const { DARABONBA_PTR_GET_DEFAULT(skillGroupName_, "") };
    inline ListHistoricalSkillGroupReportResponseBodyDataList& setSkillGroupName(string skillGroupName) { DARABONBA_PTR_SET_VALUE(skillGroupName_, skillGroupName) };


  protected:
    std::shared_ptr<Models::ListHistoricalSkillGroupReportResponseBodyDataListBack2Back> back2Back_ = nullptr;
    std::shared_ptr<Models::ListHistoricalSkillGroupReportResponseBodyDataListInbound> inbound_ = nullptr;
    std::shared_ptr<Models::ListHistoricalSkillGroupReportResponseBodyDataListOutbound> outbound_ = nullptr;
    std::shared_ptr<Models::ListHistoricalSkillGroupReportResponseBodyDataListOverall> overall_ = nullptr;
    std::shared_ptr<string> skillGroupId_ = nullptr;
    std::shared_ptr<string> skillGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
