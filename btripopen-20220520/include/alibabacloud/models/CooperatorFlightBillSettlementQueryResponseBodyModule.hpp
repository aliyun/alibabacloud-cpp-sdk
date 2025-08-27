// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COOPERATORFLIGHTBILLSETTLEMENTQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_COOPERATORFLIGHTBILLSETTLEMENTQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CooperatorFlightBillSettlementQueryResponseBodyModuleItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CooperatorFlightBillSettlementQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CooperatorFlightBillSettlementQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(corp_id, corpId_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(period_end, periodEnd_);
      DARABONBA_PTR_TO_JSON(period_start, periodStart_);
      DARABONBA_PTR_TO_JSON(scroll_id, scrollId_);
      DARABONBA_PTR_TO_JSON(total_size, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, CooperatorFlightBillSettlementQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(period_end, periodEnd_);
      DARABONBA_PTR_FROM_JSON(period_start, periodStart_);
      DARABONBA_PTR_FROM_JSON(scroll_id, scrollId_);
      DARABONBA_PTR_FROM_JSON(total_size, totalSize_);
    };
    CooperatorFlightBillSettlementQueryResponseBodyModule() = default ;
    CooperatorFlightBillSettlementQueryResponseBodyModule(const CooperatorFlightBillSettlementQueryResponseBodyModule &) = default ;
    CooperatorFlightBillSettlementQueryResponseBodyModule(CooperatorFlightBillSettlementQueryResponseBodyModule &&) = default ;
    CooperatorFlightBillSettlementQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CooperatorFlightBillSettlementQueryResponseBodyModule() = default ;
    CooperatorFlightBillSettlementQueryResponseBodyModule& operator=(const CooperatorFlightBillSettlementQueryResponseBodyModule &) = default ;
    CooperatorFlightBillSettlementQueryResponseBodyModule& operator=(CooperatorFlightBillSettlementQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->corpId_ != nullptr && this->items_ != nullptr && this->periodEnd_ != nullptr && this->periodStart_ != nullptr && this->scrollId_ != nullptr
        && this->totalSize_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline int32_t category() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
    inline CooperatorFlightBillSettlementQueryResponseBodyModule& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModule& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::CooperatorFlightBillSettlementQueryResponseBodyModuleItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::CooperatorFlightBillSettlementQueryResponseBodyModuleItems>) };
    inline vector<Models::CooperatorFlightBillSettlementQueryResponseBodyModuleItems> items() { DARABONBA_PTR_GET(items_, vector<Models::CooperatorFlightBillSettlementQueryResponseBodyModuleItems>) };
    inline CooperatorFlightBillSettlementQueryResponseBodyModule& setItems(const vector<Models::CooperatorFlightBillSettlementQueryResponseBodyModuleItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline CooperatorFlightBillSettlementQueryResponseBodyModule& setItems(vector<Models::CooperatorFlightBillSettlementQueryResponseBodyModuleItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // periodEnd Field Functions 
    bool hasPeriodEnd() const { return this->periodEnd_ != nullptr;};
    void deletePeriodEnd() { this->periodEnd_ = nullptr;};
    inline string periodEnd() const { DARABONBA_PTR_GET_DEFAULT(periodEnd_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModule& setPeriodEnd(string periodEnd) { DARABONBA_PTR_SET_VALUE(periodEnd_, periodEnd) };


    // periodStart Field Functions 
    bool hasPeriodStart() const { return this->periodStart_ != nullptr;};
    void deletePeriodStart() { this->periodStart_ = nullptr;};
    inline string periodStart() const { DARABONBA_PTR_GET_DEFAULT(periodStart_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModule& setPeriodStart(string periodStart) { DARABONBA_PTR_SET_VALUE(periodStart_, periodStart) };


    // scrollId Field Functions 
    bool hasScrollId() const { return this->scrollId_ != nullptr;};
    void deleteScrollId() { this->scrollId_ = nullptr;};
    inline string scrollId() const { DARABONBA_PTR_GET_DEFAULT(scrollId_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModule& setScrollId(string scrollId) { DARABONBA_PTR_SET_VALUE(scrollId_, scrollId) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int64_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
    inline CooperatorFlightBillSettlementQueryResponseBodyModule& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    std::shared_ptr<int32_t> category_ = nullptr;
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<vector<Models::CooperatorFlightBillSettlementQueryResponseBodyModuleItems>> items_ = nullptr;
    std::shared_ptr<string> periodEnd_ = nullptr;
    std::shared_ptr<string> periodStart_ = nullptr;
    std::shared_ptr<string> scrollId_ = nullptr;
    std::shared_ptr<int64_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
