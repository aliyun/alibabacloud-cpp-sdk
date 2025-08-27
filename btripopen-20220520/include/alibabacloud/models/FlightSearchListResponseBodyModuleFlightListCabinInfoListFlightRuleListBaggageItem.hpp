// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODYMODULEFLIGHTLISTCABININFOLISTFLIGHTRULELISTBAGGAGEITEM_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODYMODULEFLIGHTLISTCABININFOLISTFLIGHTRULELISTBAGGAGEITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemBaggageSubItems.hpp>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemTips.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem& obj) { 
      DARABONBA_PTR_TO_JSON(baggage_sub_items, baggageSubItems_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(table_head, tableHead_);
      DARABONBA_PTR_TO_JSON(tips, tips_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem& obj) { 
      DARABONBA_PTR_FROM_JSON(baggage_sub_items, baggageSubItems_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(table_head, tableHead_);
      DARABONBA_PTR_FROM_JSON(tips, tips_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem() = default ;
    FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem(const FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem &) = default ;
    FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem(FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem &&) = default ;
    FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem() = default ;
    FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem& operator=(const FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem &) = default ;
    FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem& operator=(FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baggageSubItems_ != nullptr
        && this->index_ != nullptr && this->tableHead_ != nullptr && this->tips_ != nullptr && this->title_ != nullptr && this->type_ != nullptr; };
    // baggageSubItems Field Functions 
    bool hasBaggageSubItems() const { return this->baggageSubItems_ != nullptr;};
    void deleteBaggageSubItems() { this->baggageSubItems_ = nullptr;};
    inline const vector<Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemBaggageSubItems> & baggageSubItems() const { DARABONBA_PTR_GET_CONST(baggageSubItems_, vector<Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemBaggageSubItems>) };
    inline vector<Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemBaggageSubItems> baggageSubItems() { DARABONBA_PTR_GET(baggageSubItems_, vector<Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemBaggageSubItems>) };
    inline FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem& setBaggageSubItems(const vector<Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemBaggageSubItems> & baggageSubItems) { DARABONBA_PTR_SET_VALUE(baggageSubItems_, baggageSubItems) };
    inline FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem& setBaggageSubItems(vector<Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemBaggageSubItems> && baggageSubItems) { DARABONBA_PTR_SET_RVALUE(baggageSubItems_, baggageSubItems) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // tableHead Field Functions 
    bool hasTableHead() const { return this->tableHead_ != nullptr;};
    void deleteTableHead() { this->tableHead_ = nullptr;};
    inline string tableHead() const { DARABONBA_PTR_GET_DEFAULT(tableHead_, "") };
    inline FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem& setTableHead(string tableHead) { DARABONBA_PTR_SET_VALUE(tableHead_, tableHead) };


    // tips Field Functions 
    bool hasTips() const { return this->tips_ != nullptr;};
    void deleteTips() { this->tips_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemTips & tips() const { DARABONBA_PTR_GET_CONST(tips_, Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemTips) };
    inline Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemTips tips() { DARABONBA_PTR_GET(tips_, Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemTips) };
    inline FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem& setTips(const Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemTips & tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };
    inline FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem& setTips(Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemTips && tips) { DARABONBA_PTR_SET_RVALUE(tips_, tips) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemBaggageSubItems>> baggageSubItems_ = nullptr;
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<string> tableHead_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemTips> tips_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
