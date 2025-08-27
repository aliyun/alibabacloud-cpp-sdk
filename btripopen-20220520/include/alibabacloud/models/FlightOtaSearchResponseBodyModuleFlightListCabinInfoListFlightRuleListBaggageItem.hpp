// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTOTASEARCHRESPONSEBODYMODULEFLIGHTLISTCABININFOLISTFLIGHTRULELISTBAGGAGEITEM_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTOTASEARCHRESPONSEBODYMODULEFLIGHTLISTCABININFOLISTFLIGHTRULELISTBAGGAGEITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemBaggageSubItems.hpp>
#include <alibabacloud/models/FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemTips.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem& obj) { 
      DARABONBA_PTR_TO_JSON(baggage_sub_items, baggageSubItems_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(table_head, tableHead_);
      DARABONBA_PTR_TO_JSON(tips, tips_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem& obj) { 
      DARABONBA_PTR_FROM_JSON(baggage_sub_items, baggageSubItems_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(table_head, tableHead_);
      DARABONBA_PTR_FROM_JSON(tips, tips_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem() = default ;
    FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem(const FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem &) = default ;
    FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem(FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem &&) = default ;
    FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem() = default ;
    FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem& operator=(const FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem &) = default ;
    FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem& operator=(FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baggageSubItems_ != nullptr
        && this->index_ != nullptr && this->tableHead_ != nullptr && this->tips_ != nullptr && this->title_ != nullptr && this->type_ != nullptr; };
    // baggageSubItems Field Functions 
    bool hasBaggageSubItems() const { return this->baggageSubItems_ != nullptr;};
    void deleteBaggageSubItems() { this->baggageSubItems_ = nullptr;};
    inline const vector<Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemBaggageSubItems> & baggageSubItems() const { DARABONBA_PTR_GET_CONST(baggageSubItems_, vector<Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemBaggageSubItems>) };
    inline vector<Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemBaggageSubItems> baggageSubItems() { DARABONBA_PTR_GET(baggageSubItems_, vector<Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemBaggageSubItems>) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem& setBaggageSubItems(const vector<Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemBaggageSubItems> & baggageSubItems) { DARABONBA_PTR_SET_VALUE(baggageSubItems_, baggageSubItems) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem& setBaggageSubItems(vector<Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemBaggageSubItems> && baggageSubItems) { DARABONBA_PTR_SET_RVALUE(baggageSubItems_, baggageSubItems) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // tableHead Field Functions 
    bool hasTableHead() const { return this->tableHead_ != nullptr;};
    void deleteTableHead() { this->tableHead_ = nullptr;};
    inline string tableHead() const { DARABONBA_PTR_GET_DEFAULT(tableHead_, "") };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem& setTableHead(string tableHead) { DARABONBA_PTR_SET_VALUE(tableHead_, tableHead) };


    // tips Field Functions 
    bool hasTips() const { return this->tips_ != nullptr;};
    void deleteTips() { this->tips_ = nullptr;};
    inline const Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemTips & tips() const { DARABONBA_PTR_GET_CONST(tips_, Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemTips) };
    inline Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemTips tips() { DARABONBA_PTR_GET(tips_, Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemTips) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem& setTips(const Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemTips & tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem& setTips(Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemTips && tips) { DARABONBA_PTR_SET_RVALUE(tips_, tips) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemBaggageSubItems>> baggageSubItems_ = nullptr;
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<string> tableHead_ = nullptr;
    std::shared_ptr<Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItemTips> tips_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
