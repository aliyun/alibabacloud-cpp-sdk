// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODYMODULEFLIGHTLISTFLIGHTRULELISTBAGGAGEITEM_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODYMODULEFLIGHTLISTFLIGHTRULELISTBAGGAGEITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems.hpp>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemTips.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem& obj) { 
      DARABONBA_PTR_TO_JSON(baggage_sub_items, baggageSubItems_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(table_head, tableHead_);
      DARABONBA_PTR_TO_JSON(tips, tips_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem& obj) { 
      DARABONBA_PTR_FROM_JSON(baggage_sub_items, baggageSubItems_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(table_head, tableHead_);
      DARABONBA_PTR_FROM_JSON(tips, tips_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem() = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem(const FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem &) = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem(FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem &&) = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem() = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem& operator=(const FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem &) = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem& operator=(FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baggageSubItems_ != nullptr
        && this->index_ != nullptr && this->tableHead_ != nullptr && this->tips_ != nullptr && this->title_ != nullptr && this->type_ != nullptr; };
    // baggageSubItems Field Functions 
    bool hasBaggageSubItems() const { return this->baggageSubItems_ != nullptr;};
    void deleteBaggageSubItems() { this->baggageSubItems_ = nullptr;};
    inline const vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems> & baggageSubItems() const { DARABONBA_PTR_GET_CONST(baggageSubItems_, vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems>) };
    inline vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems> baggageSubItems() { DARABONBA_PTR_GET(baggageSubItems_, vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems>) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem& setBaggageSubItems(const vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems> & baggageSubItems) { DARABONBA_PTR_SET_VALUE(baggageSubItems_, baggageSubItems) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem& setBaggageSubItems(vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems> && baggageSubItems) { DARABONBA_PTR_SET_RVALUE(baggageSubItems_, baggageSubItems) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // tableHead Field Functions 
    bool hasTableHead() const { return this->tableHead_ != nullptr;};
    void deleteTableHead() { this->tableHead_ = nullptr;};
    inline string tableHead() const { DARABONBA_PTR_GET_DEFAULT(tableHead_, "") };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem& setTableHead(string tableHead) { DARABONBA_PTR_SET_VALUE(tableHead_, tableHead) };


    // tips Field Functions 
    bool hasTips() const { return this->tips_ != nullptr;};
    void deleteTips() { this->tips_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemTips & tips() const { DARABONBA_PTR_GET_CONST(tips_, Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemTips) };
    inline Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemTips tips() { DARABONBA_PTR_GET(tips_, Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemTips) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem& setTips(const Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemTips & tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem& setTips(Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemTips && tips) { DARABONBA_PTR_SET_RVALUE(tips_, tips) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems>> baggageSubItems_ = nullptr;
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<string> tableHead_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemTips> tips_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
