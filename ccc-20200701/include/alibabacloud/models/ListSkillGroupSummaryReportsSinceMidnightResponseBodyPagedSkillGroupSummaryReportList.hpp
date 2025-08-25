// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLGROUPSUMMARYREPORTSSINCEMIDNIGHTRESPONSEBODYPAGEDSKILLGROUPSUMMARYREPORTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLGROUPSUMMARYREPORTSSINCEMIDNIGHTRESPONSEBODYPAGEDSKILLGROUPSUMMARYREPORTLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound.hpp>
#include <alibabacloud/models/ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound.hpp>
#include <alibabacloud/models/ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOverall.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportList& obj) { 
      DARABONBA_PTR_TO_JSON(Inbound, inbound_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Outbound, outbound_);
      DARABONBA_PTR_TO_JSON(Overall, overall_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(SkillGroupName, skillGroupName_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportList& obj) { 
      DARABONBA_PTR_FROM_JSON(Inbound, inbound_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Outbound, outbound_);
      DARABONBA_PTR_FROM_JSON(Overall, overall_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(SkillGroupName, skillGroupName_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportList() = default ;
    ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportList(const ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportList &) = default ;
    ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportList(ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportList &&) = default ;
    ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportList() = default ;
    ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportList& operator=(const ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportList &) = default ;
    ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportList& operator=(ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inbound_ != nullptr
        && this->instanceId_ != nullptr && this->outbound_ != nullptr && this->overall_ != nullptr && this->skillGroupId_ != nullptr && this->skillGroupName_ != nullptr
        && this->timestamp_ != nullptr; };
    // inbound Field Functions 
    bool hasInbound() const { return this->inbound_ != nullptr;};
    void deleteInbound() { this->inbound_ = nullptr;};
    inline const Models::ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound & inbound() const { DARABONBA_PTR_GET_CONST(inbound_, Models::ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound) };
    inline Models::ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound inbound() { DARABONBA_PTR_GET(inbound_, Models::ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportList& setInbound(const Models::ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound & inbound) { DARABONBA_PTR_SET_VALUE(inbound_, inbound) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportList& setInbound(Models::ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound && inbound) { DARABONBA_PTR_SET_RVALUE(inbound_, inbound) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // outbound Field Functions 
    bool hasOutbound() const { return this->outbound_ != nullptr;};
    void deleteOutbound() { this->outbound_ = nullptr;};
    inline const Models::ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound & outbound() const { DARABONBA_PTR_GET_CONST(outbound_, Models::ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound) };
    inline Models::ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound outbound() { DARABONBA_PTR_GET(outbound_, Models::ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportList& setOutbound(const Models::ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound & outbound) { DARABONBA_PTR_SET_VALUE(outbound_, outbound) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportList& setOutbound(Models::ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound && outbound) { DARABONBA_PTR_SET_RVALUE(outbound_, outbound) };


    // overall Field Functions 
    bool hasOverall() const { return this->overall_ != nullptr;};
    void deleteOverall() { this->overall_ = nullptr;};
    inline const Models::ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOverall & overall() const { DARABONBA_PTR_GET_CONST(overall_, Models::ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOverall) };
    inline Models::ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOverall overall() { DARABONBA_PTR_GET(overall_, Models::ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOverall) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportList& setOverall(const Models::ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOverall & overall) { DARABONBA_PTR_SET_VALUE(overall_, overall) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportList& setOverall(Models::ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOverall && overall) { DARABONBA_PTR_SET_RVALUE(overall_, overall) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportList& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    // skillGroupName Field Functions 
    bool hasSkillGroupName() const { return this->skillGroupName_ != nullptr;};
    void deleteSkillGroupName() { this->skillGroupName_ = nullptr;};
    inline string skillGroupName() const { DARABONBA_PTR_GET_DEFAULT(skillGroupName_, "") };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportList& setSkillGroupName(string skillGroupName) { DARABONBA_PTR_SET_VALUE(skillGroupName_, skillGroupName) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportList& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    std::shared_ptr<Models::ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound> inbound_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<Models::ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound> outbound_ = nullptr;
    std::shared_ptr<Models::ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOverall> overall_ = nullptr;
    std::shared_ptr<string> skillGroupId_ = nullptr;
    std::shared_ptr<string> skillGroupName_ = nullptr;
    std::shared_ptr<string> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
