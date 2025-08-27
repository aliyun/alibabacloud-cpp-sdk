// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODYMODULEFLIGHTLISTFLIGHTRULELISTREFUNDRULEITEM_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODYMODULEFLIGHTLISTFLIGHTRULELISTREFUNDRULEITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItemExtraContents.hpp>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem& obj) { 
      DARABONBA_PTR_TO_JSON(extra_contents, extraContents_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(refund_sub_items, refundSubItems_);
      DARABONBA_PTR_TO_JSON(sub_table_head, subTableHead_);
      DARABONBA_PTR_TO_JSON(table_head, tableHead_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem& obj) { 
      DARABONBA_PTR_FROM_JSON(extra_contents, extraContents_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(refund_sub_items, refundSubItems_);
      DARABONBA_PTR_FROM_JSON(sub_table_head, subTableHead_);
      DARABONBA_PTR_FROM_JSON(table_head, tableHead_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem() = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem(const FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem &) = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem(FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem &&) = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem() = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem& operator=(const FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem &) = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem& operator=(FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extraContents_ != nullptr
        && this->index_ != nullptr && this->refundSubItems_ != nullptr && this->subTableHead_ != nullptr && this->tableHead_ != nullptr && this->title_ != nullptr
        && this->type_ != nullptr; };
    // extraContents Field Functions 
    bool hasExtraContents() const { return this->extraContents_ != nullptr;};
    void deleteExtraContents() { this->extraContents_ = nullptr;};
    inline const vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItemExtraContents> & extraContents() const { DARABONBA_PTR_GET_CONST(extraContents_, vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItemExtraContents>) };
    inline vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItemExtraContents> extraContents() { DARABONBA_PTR_GET(extraContents_, vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItemExtraContents>) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem& setExtraContents(const vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItemExtraContents> & extraContents) { DARABONBA_PTR_SET_VALUE(extraContents_, extraContents) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem& setExtraContents(vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItemExtraContents> && extraContents) { DARABONBA_PTR_SET_RVALUE(extraContents_, extraContents) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // refundSubItems Field Functions 
    bool hasRefundSubItems() const { return this->refundSubItems_ != nullptr;};
    void deleteRefundSubItems() { this->refundSubItems_ = nullptr;};
    inline const vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItems> & refundSubItems() const { DARABONBA_PTR_GET_CONST(refundSubItems_, vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItems>) };
    inline vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItems> refundSubItems() { DARABONBA_PTR_GET(refundSubItems_, vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItems>) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem& setRefundSubItems(const vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItems> & refundSubItems) { DARABONBA_PTR_SET_VALUE(refundSubItems_, refundSubItems) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem& setRefundSubItems(vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItems> && refundSubItems) { DARABONBA_PTR_SET_RVALUE(refundSubItems_, refundSubItems) };


    // subTableHead Field Functions 
    bool hasSubTableHead() const { return this->subTableHead_ != nullptr;};
    void deleteSubTableHead() { this->subTableHead_ = nullptr;};
    inline const vector<string> & subTableHead() const { DARABONBA_PTR_GET_CONST(subTableHead_, vector<string>) };
    inline vector<string> subTableHead() { DARABONBA_PTR_GET(subTableHead_, vector<string>) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem& setSubTableHead(const vector<string> & subTableHead) { DARABONBA_PTR_SET_VALUE(subTableHead_, subTableHead) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem& setSubTableHead(vector<string> && subTableHead) { DARABONBA_PTR_SET_RVALUE(subTableHead_, subTableHead) };


    // tableHead Field Functions 
    bool hasTableHead() const { return this->tableHead_ != nullptr;};
    void deleteTableHead() { this->tableHead_ = nullptr;};
    inline string tableHead() const { DARABONBA_PTR_GET_DEFAULT(tableHead_, "") };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem& setTableHead(string tableHead) { DARABONBA_PTR_SET_VALUE(tableHead_, tableHead) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItemExtraContents>> extraContents_ = nullptr;
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItems>> refundSubItems_ = nullptr;
    std::shared_ptr<vector<string>> subTableHead_ = nullptr;
    std::shared_ptr<string> tableHead_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
