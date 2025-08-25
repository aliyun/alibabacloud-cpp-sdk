// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREALTIMESKILLGROUPSTATESRESPONSEBODYDATALISTBREAKCODEDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTREALTIMESKILLGROUPSTATESRESPONSEBODYDATALISTBREAKCODEDETAILLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListRealtimeSkillGroupStatesResponseBodyDataListBreakCodeDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRealtimeSkillGroupStatesResponseBodyDataListBreakCodeDetailList& obj) { 
      DARABONBA_PTR_TO_JSON(BreakCode, breakCode_);
      DARABONBA_PTR_TO_JSON(Count, count_);
    };
    friend void from_json(const Darabonba::Json& j, ListRealtimeSkillGroupStatesResponseBodyDataListBreakCodeDetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(BreakCode, breakCode_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
    };
    ListRealtimeSkillGroupStatesResponseBodyDataListBreakCodeDetailList() = default ;
    ListRealtimeSkillGroupStatesResponseBodyDataListBreakCodeDetailList(const ListRealtimeSkillGroupStatesResponseBodyDataListBreakCodeDetailList &) = default ;
    ListRealtimeSkillGroupStatesResponseBodyDataListBreakCodeDetailList(ListRealtimeSkillGroupStatesResponseBodyDataListBreakCodeDetailList &&) = default ;
    ListRealtimeSkillGroupStatesResponseBodyDataListBreakCodeDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRealtimeSkillGroupStatesResponseBodyDataListBreakCodeDetailList() = default ;
    ListRealtimeSkillGroupStatesResponseBodyDataListBreakCodeDetailList& operator=(const ListRealtimeSkillGroupStatesResponseBodyDataListBreakCodeDetailList &) = default ;
    ListRealtimeSkillGroupStatesResponseBodyDataListBreakCodeDetailList& operator=(ListRealtimeSkillGroupStatesResponseBodyDataListBreakCodeDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->breakCode_ != nullptr
        && this->count_ != nullptr; };
    // breakCode Field Functions 
    bool hasBreakCode() const { return this->breakCode_ != nullptr;};
    void deleteBreakCode() { this->breakCode_ = nullptr;};
    inline string breakCode() const { DARABONBA_PTR_GET_DEFAULT(breakCode_, "") };
    inline ListRealtimeSkillGroupStatesResponseBodyDataListBreakCodeDetailList& setBreakCode(string breakCode) { DARABONBA_PTR_SET_VALUE(breakCode_, breakCode) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListRealtimeSkillGroupStatesResponseBodyDataListBreakCodeDetailList& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


  protected:
    std::shared_ptr<string> breakCode_ = nullptr;
    std::shared_ptr<int64_t> count_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
