// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHISTORICALAGENTSKILLGROUPREPORTRESPONSEBODYDATALISTOVERALLBREAKCODEDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTHISTORICALAGENTSKILLGROUPREPORTRESPONSEBODYDATALISTOVERALLBREAKCODEDETAILLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList& obj) { 
      DARABONBA_PTR_TO_JSON(BreakCode, breakCode_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
    };
    friend void from_json(const Darabonba::Json& j, ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(BreakCode, breakCode_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
    };
    ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList() = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList(const ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList &) = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList(ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList &&) = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList() = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList& operator=(const ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList &) = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList& operator=(ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->breakCode_ == nullptr
        && return this->count_ == nullptr && return this->duration_ == nullptr; };
    // breakCode Field Functions 
    bool hasBreakCode() const { return this->breakCode_ != nullptr;};
    void deleteBreakCode() { this->breakCode_ = nullptr;};
    inline string breakCode() const { DARABONBA_PTR_GET_DEFAULT(breakCode_, "") };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList& setBreakCode(string breakCode) { DARABONBA_PTR_SET_VALUE(breakCode_, breakCode) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


  protected:
    std::shared_ptr<string> breakCode_ = nullptr;
    std::shared_ptr<int64_t> count_ = nullptr;
    std::shared_ptr<int64_t> duration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
