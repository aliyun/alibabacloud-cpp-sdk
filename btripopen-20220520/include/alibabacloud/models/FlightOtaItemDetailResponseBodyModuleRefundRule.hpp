// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTOTAITEMDETAILRESPONSEBODYMODULEREFUNDRULE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTOTAITEMDETAILRESPONSEBODYMODULEREFUNDRULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightOtaItemDetailResponseBodyModuleRefundRuleExtraContents.hpp>
#include <alibabacloud/models/FlightOtaItemDetailResponseBodyModuleRefundRuleRefundSubItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOtaItemDetailResponseBodyModuleRefundRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOtaItemDetailResponseBodyModuleRefundRule& obj) { 
      DARABONBA_PTR_TO_JSON(extra_contents, extraContents_);
      DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
      DARABONBA_PTR_TO_JSON(free_baggage, freeBaggage_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(refund_sub_items, refundSubItems_);
      DARABONBA_PTR_TO_JSON(sub_table_head, subTableHead_);
      DARABONBA_PTR_TO_JSON(table_head, tableHead_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOtaItemDetailResponseBodyModuleRefundRule& obj) { 
      DARABONBA_PTR_FROM_JSON(extra_contents, extraContents_);
      DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
      DARABONBA_PTR_FROM_JSON(free_baggage, freeBaggage_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(refund_sub_items, refundSubItems_);
      DARABONBA_PTR_FROM_JSON(sub_table_head, subTableHead_);
      DARABONBA_PTR_FROM_JSON(table_head, tableHead_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    FlightOtaItemDetailResponseBodyModuleRefundRule() = default ;
    FlightOtaItemDetailResponseBodyModuleRefundRule(const FlightOtaItemDetailResponseBodyModuleRefundRule &) = default ;
    FlightOtaItemDetailResponseBodyModuleRefundRule(FlightOtaItemDetailResponseBodyModuleRefundRule &&) = default ;
    FlightOtaItemDetailResponseBodyModuleRefundRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOtaItemDetailResponseBodyModuleRefundRule() = default ;
    FlightOtaItemDetailResponseBodyModuleRefundRule& operator=(const FlightOtaItemDetailResponseBodyModuleRefundRule &) = default ;
    FlightOtaItemDetailResponseBodyModuleRefundRule& operator=(FlightOtaItemDetailResponseBodyModuleRefundRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extraContents_ != nullptr
        && this->flightNo_ != nullptr && this->freeBaggage_ != nullptr && this->index_ != nullptr && this->level_ != nullptr && this->refundSubItems_ != nullptr
        && this->subTableHead_ != nullptr && this->tableHead_ != nullptr && this->title_ != nullptr && this->type_ != nullptr; };
    // extraContents Field Functions 
    bool hasExtraContents() const { return this->extraContents_ != nullptr;};
    void deleteExtraContents() { this->extraContents_ = nullptr;};
    inline const vector<Models::FlightOtaItemDetailResponseBodyModuleRefundRuleExtraContents> & extraContents() const { DARABONBA_PTR_GET_CONST(extraContents_, vector<Models::FlightOtaItemDetailResponseBodyModuleRefundRuleExtraContents>) };
    inline vector<Models::FlightOtaItemDetailResponseBodyModuleRefundRuleExtraContents> extraContents() { DARABONBA_PTR_GET(extraContents_, vector<Models::FlightOtaItemDetailResponseBodyModuleRefundRuleExtraContents>) };
    inline FlightOtaItemDetailResponseBodyModuleRefundRule& setExtraContents(const vector<Models::FlightOtaItemDetailResponseBodyModuleRefundRuleExtraContents> & extraContents) { DARABONBA_PTR_SET_VALUE(extraContents_, extraContents) };
    inline FlightOtaItemDetailResponseBodyModuleRefundRule& setExtraContents(vector<Models::FlightOtaItemDetailResponseBodyModuleRefundRuleExtraContents> && extraContents) { DARABONBA_PTR_SET_RVALUE(extraContents_, extraContents) };


    // flightNo Field Functions 
    bool hasFlightNo() const { return this->flightNo_ != nullptr;};
    void deleteFlightNo() { this->flightNo_ = nullptr;};
    inline string flightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
    inline FlightOtaItemDetailResponseBodyModuleRefundRule& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


    // freeBaggage Field Functions 
    bool hasFreeBaggage() const { return this->freeBaggage_ != nullptr;};
    void deleteFreeBaggage() { this->freeBaggage_ = nullptr;};
    inline int32_t freeBaggage() const { DARABONBA_PTR_GET_DEFAULT(freeBaggage_, 0) };
    inline FlightOtaItemDetailResponseBodyModuleRefundRule& setFreeBaggage(int32_t freeBaggage) { DARABONBA_PTR_SET_VALUE(freeBaggage_, freeBaggage) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline FlightOtaItemDetailResponseBodyModuleRefundRule& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int32_t level() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
    inline FlightOtaItemDetailResponseBodyModuleRefundRule& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // refundSubItems Field Functions 
    bool hasRefundSubItems() const { return this->refundSubItems_ != nullptr;};
    void deleteRefundSubItems() { this->refundSubItems_ = nullptr;};
    inline const vector<Models::FlightOtaItemDetailResponseBodyModuleRefundRuleRefundSubItems> & refundSubItems() const { DARABONBA_PTR_GET_CONST(refundSubItems_, vector<Models::FlightOtaItemDetailResponseBodyModuleRefundRuleRefundSubItems>) };
    inline vector<Models::FlightOtaItemDetailResponseBodyModuleRefundRuleRefundSubItems> refundSubItems() { DARABONBA_PTR_GET(refundSubItems_, vector<Models::FlightOtaItemDetailResponseBodyModuleRefundRuleRefundSubItems>) };
    inline FlightOtaItemDetailResponseBodyModuleRefundRule& setRefundSubItems(const vector<Models::FlightOtaItemDetailResponseBodyModuleRefundRuleRefundSubItems> & refundSubItems) { DARABONBA_PTR_SET_VALUE(refundSubItems_, refundSubItems) };
    inline FlightOtaItemDetailResponseBodyModuleRefundRule& setRefundSubItems(vector<Models::FlightOtaItemDetailResponseBodyModuleRefundRuleRefundSubItems> && refundSubItems) { DARABONBA_PTR_SET_RVALUE(refundSubItems_, refundSubItems) };


    // subTableHead Field Functions 
    bool hasSubTableHead() const { return this->subTableHead_ != nullptr;};
    void deleteSubTableHead() { this->subTableHead_ = nullptr;};
    inline const vector<string> & subTableHead() const { DARABONBA_PTR_GET_CONST(subTableHead_, vector<string>) };
    inline vector<string> subTableHead() { DARABONBA_PTR_GET(subTableHead_, vector<string>) };
    inline FlightOtaItemDetailResponseBodyModuleRefundRule& setSubTableHead(const vector<string> & subTableHead) { DARABONBA_PTR_SET_VALUE(subTableHead_, subTableHead) };
    inline FlightOtaItemDetailResponseBodyModuleRefundRule& setSubTableHead(vector<string> && subTableHead) { DARABONBA_PTR_SET_RVALUE(subTableHead_, subTableHead) };


    // tableHead Field Functions 
    bool hasTableHead() const { return this->tableHead_ != nullptr;};
    void deleteTableHead() { this->tableHead_ = nullptr;};
    inline string tableHead() const { DARABONBA_PTR_GET_DEFAULT(tableHead_, "") };
    inline FlightOtaItemDetailResponseBodyModuleRefundRule& setTableHead(string tableHead) { DARABONBA_PTR_SET_VALUE(tableHead_, tableHead) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline FlightOtaItemDetailResponseBodyModuleRefundRule& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline FlightOtaItemDetailResponseBodyModuleRefundRule& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<Models::FlightOtaItemDetailResponseBodyModuleRefundRuleExtraContents>> extraContents_ = nullptr;
    std::shared_ptr<string> flightNo_ = nullptr;
    std::shared_ptr<int32_t> freeBaggage_ = nullptr;
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<int32_t> level_ = nullptr;
    std::shared_ptr<vector<Models::FlightOtaItemDetailResponseBodyModuleRefundRuleRefundSubItems>> refundSubItems_ = nullptr;
    // subTableHead
    std::shared_ptr<vector<string>> subTableHead_ = nullptr;
    std::shared_ptr<string> tableHead_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
