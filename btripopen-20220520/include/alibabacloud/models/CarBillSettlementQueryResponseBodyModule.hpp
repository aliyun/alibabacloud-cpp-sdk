// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CARBILLSETTLEMENTQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_CARBILLSETTLEMENTQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CarBillSettlementQueryResponseBodyModuleDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CarBillSettlementQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CarBillSettlementQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(corp_id, corpId_);
      DARABONBA_PTR_TO_JSON(data_list, dataList_);
      DARABONBA_PTR_TO_JSON(period_end, periodEnd_);
      DARABONBA_PTR_TO_JSON(period_start, periodStart_);
      DARABONBA_PTR_TO_JSON(scroll_id, scrollId_);
      DARABONBA_PTR_TO_JSON(total_num, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, CarBillSettlementQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
      DARABONBA_PTR_FROM_JSON(data_list, dataList_);
      DARABONBA_PTR_FROM_JSON(period_end, periodEnd_);
      DARABONBA_PTR_FROM_JSON(period_start, periodStart_);
      DARABONBA_PTR_FROM_JSON(scroll_id, scrollId_);
      DARABONBA_PTR_FROM_JSON(total_num, totalNum_);
    };
    CarBillSettlementQueryResponseBodyModule() = default ;
    CarBillSettlementQueryResponseBodyModule(const CarBillSettlementQueryResponseBodyModule &) = default ;
    CarBillSettlementQueryResponseBodyModule(CarBillSettlementQueryResponseBodyModule &&) = default ;
    CarBillSettlementQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CarBillSettlementQueryResponseBodyModule() = default ;
    CarBillSettlementQueryResponseBodyModule& operator=(const CarBillSettlementQueryResponseBodyModule &) = default ;
    CarBillSettlementQueryResponseBodyModule& operator=(CarBillSettlementQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->corpId_ != nullptr && this->dataList_ != nullptr && this->periodEnd_ != nullptr && this->periodStart_ != nullptr && this->scrollId_ != nullptr
        && this->totalNum_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline int32_t category() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
    inline CarBillSettlementQueryResponseBodyModule& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline CarBillSettlementQueryResponseBodyModule& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<Models::CarBillSettlementQueryResponseBodyModuleDataList> & dataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<Models::CarBillSettlementQueryResponseBodyModuleDataList>) };
    inline vector<Models::CarBillSettlementQueryResponseBodyModuleDataList> dataList() { DARABONBA_PTR_GET(dataList_, vector<Models::CarBillSettlementQueryResponseBodyModuleDataList>) };
    inline CarBillSettlementQueryResponseBodyModule& setDataList(const vector<Models::CarBillSettlementQueryResponseBodyModuleDataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline CarBillSettlementQueryResponseBodyModule& setDataList(vector<Models::CarBillSettlementQueryResponseBodyModuleDataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // periodEnd Field Functions 
    bool hasPeriodEnd() const { return this->periodEnd_ != nullptr;};
    void deletePeriodEnd() { this->periodEnd_ = nullptr;};
    inline string periodEnd() const { DARABONBA_PTR_GET_DEFAULT(periodEnd_, "") };
    inline CarBillSettlementQueryResponseBodyModule& setPeriodEnd(string periodEnd) { DARABONBA_PTR_SET_VALUE(periodEnd_, periodEnd) };


    // periodStart Field Functions 
    bool hasPeriodStart() const { return this->periodStart_ != nullptr;};
    void deletePeriodStart() { this->periodStart_ = nullptr;};
    inline string periodStart() const { DARABONBA_PTR_GET_DEFAULT(periodStart_, "") };
    inline CarBillSettlementQueryResponseBodyModule& setPeriodStart(string periodStart) { DARABONBA_PTR_SET_VALUE(periodStart_, periodStart) };


    // scrollId Field Functions 
    bool hasScrollId() const { return this->scrollId_ != nullptr;};
    void deleteScrollId() { this->scrollId_ = nullptr;};
    inline string scrollId() const { DARABONBA_PTR_GET_DEFAULT(scrollId_, "") };
    inline CarBillSettlementQueryResponseBodyModule& setScrollId(string scrollId) { DARABONBA_PTR_SET_VALUE(scrollId_, scrollId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline CarBillSettlementQueryResponseBodyModule& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    std::shared_ptr<int32_t> category_ = nullptr;
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<vector<Models::CarBillSettlementQueryResponseBodyModuleDataList>> dataList_ = nullptr;
    std::shared_ptr<string> periodEnd_ = nullptr;
    std::shared_ptr<string> periodStart_ = nullptr;
    std::shared_ptr<string> scrollId_ = nullptr;
    std::shared_ptr<int64_t> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
