// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEALBILLSETTLEMENTQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_MEALBILLSETTLEMENTQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MealBillSettlementQueryResponseBodyModuleItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class MealBillSettlementQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MealBillSettlementQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(corp_id, corpId_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(period_end, periodEnd_);
      DARABONBA_PTR_TO_JSON(period_start, periodStart_);
      DARABONBA_PTR_TO_JSON(scroll_id, scrollId_);
      DARABONBA_PTR_TO_JSON(total_num, totalNum_);
      DARABONBA_PTR_TO_JSON(total_size, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, MealBillSettlementQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(period_end, periodEnd_);
      DARABONBA_PTR_FROM_JSON(period_start, periodStart_);
      DARABONBA_PTR_FROM_JSON(scroll_id, scrollId_);
      DARABONBA_PTR_FROM_JSON(total_num, totalNum_);
      DARABONBA_PTR_FROM_JSON(total_size, totalSize_);
    };
    MealBillSettlementQueryResponseBodyModule() = default ;
    MealBillSettlementQueryResponseBodyModule(const MealBillSettlementQueryResponseBodyModule &) = default ;
    MealBillSettlementQueryResponseBodyModule(MealBillSettlementQueryResponseBodyModule &&) = default ;
    MealBillSettlementQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MealBillSettlementQueryResponseBodyModule() = default ;
    MealBillSettlementQueryResponseBodyModule& operator=(const MealBillSettlementQueryResponseBodyModule &) = default ;
    MealBillSettlementQueryResponseBodyModule& operator=(MealBillSettlementQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->corpId_ != nullptr && this->items_ != nullptr && this->orderId_ != nullptr && this->periodEnd_ != nullptr && this->periodStart_ != nullptr
        && this->scrollId_ != nullptr && this->totalNum_ != nullptr && this->totalSize_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline int32_t category() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
    inline MealBillSettlementQueryResponseBodyModule& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline MealBillSettlementQueryResponseBodyModule& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::MealBillSettlementQueryResponseBodyModuleItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::MealBillSettlementQueryResponseBodyModuleItems>) };
    inline vector<Models::MealBillSettlementQueryResponseBodyModuleItems> items() { DARABONBA_PTR_GET(items_, vector<Models::MealBillSettlementQueryResponseBodyModuleItems>) };
    inline MealBillSettlementQueryResponseBodyModule& setItems(const vector<Models::MealBillSettlementQueryResponseBodyModuleItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline MealBillSettlementQueryResponseBodyModule& setItems(vector<Models::MealBillSettlementQueryResponseBodyModuleItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline MealBillSettlementQueryResponseBodyModule& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // periodEnd Field Functions 
    bool hasPeriodEnd() const { return this->periodEnd_ != nullptr;};
    void deletePeriodEnd() { this->periodEnd_ = nullptr;};
    inline string periodEnd() const { DARABONBA_PTR_GET_DEFAULT(periodEnd_, "") };
    inline MealBillSettlementQueryResponseBodyModule& setPeriodEnd(string periodEnd) { DARABONBA_PTR_SET_VALUE(periodEnd_, periodEnd) };


    // periodStart Field Functions 
    bool hasPeriodStart() const { return this->periodStart_ != nullptr;};
    void deletePeriodStart() { this->periodStart_ = nullptr;};
    inline string periodStart() const { DARABONBA_PTR_GET_DEFAULT(periodStart_, "") };
    inline MealBillSettlementQueryResponseBodyModule& setPeriodStart(string periodStart) { DARABONBA_PTR_SET_VALUE(periodStart_, periodStart) };


    // scrollId Field Functions 
    bool hasScrollId() const { return this->scrollId_ != nullptr;};
    void deleteScrollId() { this->scrollId_ = nullptr;};
    inline string scrollId() const { DARABONBA_PTR_GET_DEFAULT(scrollId_, "") };
    inline MealBillSettlementQueryResponseBodyModule& setScrollId(string scrollId) { DARABONBA_PTR_SET_VALUE(scrollId_, scrollId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline MealBillSettlementQueryResponseBodyModule& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int64_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
    inline MealBillSettlementQueryResponseBodyModule& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    std::shared_ptr<int32_t> category_ = nullptr;
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<vector<Models::MealBillSettlementQueryResponseBodyModuleItems>> items_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> periodEnd_ = nullptr;
    std::shared_ptr<string> periodStart_ = nullptr;
    std::shared_ptr<string> scrollId_ = nullptr;
    std::shared_ptr<int64_t> totalNum_ = nullptr;
    std::shared_ptr<int64_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
