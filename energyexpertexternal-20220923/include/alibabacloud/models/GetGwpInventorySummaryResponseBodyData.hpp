// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGWPINVENTORYSUMMARYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETGWPINVENTORYSUMMARYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetGwpInventorySummaryResponseBodyDataItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetGwpInventorySummaryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGwpInventorySummaryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(quantity, quantity_);
      DARABONBA_PTR_TO_JSON(resultGenerateTime, resultGenerateTime_);
      DARABONBA_PTR_TO_JSON(unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, GetGwpInventorySummaryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(resultGenerateTime, resultGenerateTime_);
      DARABONBA_PTR_FROM_JSON(unit, unit_);
    };
    GetGwpInventorySummaryResponseBodyData() = default ;
    GetGwpInventorySummaryResponseBodyData(const GetGwpInventorySummaryResponseBodyData &) = default ;
    GetGwpInventorySummaryResponseBodyData(GetGwpInventorySummaryResponseBodyData &&) = default ;
    GetGwpInventorySummaryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGwpInventorySummaryResponseBodyData() = default ;
    GetGwpInventorySummaryResponseBodyData& operator=(const GetGwpInventorySummaryResponseBodyData &) = default ;
    GetGwpInventorySummaryResponseBodyData& operator=(GetGwpInventorySummaryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && return this->quantity_ == nullptr && return this->resultGenerateTime_ == nullptr && return this->unit_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::GetGwpInventorySummaryResponseBodyDataItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::GetGwpInventorySummaryResponseBodyDataItems>) };
    inline vector<Models::GetGwpInventorySummaryResponseBodyDataItems> items() { DARABONBA_PTR_GET(items_, vector<Models::GetGwpInventorySummaryResponseBodyDataItems>) };
    inline GetGwpInventorySummaryResponseBodyData& setItems(const vector<Models::GetGwpInventorySummaryResponseBodyDataItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetGwpInventorySummaryResponseBodyData& setItems(vector<Models::GetGwpInventorySummaryResponseBodyDataItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline double quantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0.0) };
    inline GetGwpInventorySummaryResponseBodyData& setQuantity(double quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // resultGenerateTime Field Functions 
    bool hasResultGenerateTime() const { return this->resultGenerateTime_ != nullptr;};
    void deleteResultGenerateTime() { this->resultGenerateTime_ = nullptr;};
    inline int64_t resultGenerateTime() const { DARABONBA_PTR_GET_DEFAULT(resultGenerateTime_, 0L) };
    inline GetGwpInventorySummaryResponseBodyData& setResultGenerateTime(int64_t resultGenerateTime) { DARABONBA_PTR_SET_VALUE(resultGenerateTime_, resultGenerateTime) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline GetGwpInventorySummaryResponseBodyData& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    // Top 4 types of carbon footprint contribution.
    std::shared_ptr<vector<Models::GetGwpInventorySummaryResponseBodyDataItems>> items_ = nullptr;
    // The emission quantity.
    std::shared_ptr<double> quantity_ = nullptr;
    // The time when the result was generated, in the millisecond timestamp format.
    std::shared_ptr<int64_t> resultGenerateTime_ = nullptr;
    // Emission Unit.
    std::shared_ptr<string> unit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
