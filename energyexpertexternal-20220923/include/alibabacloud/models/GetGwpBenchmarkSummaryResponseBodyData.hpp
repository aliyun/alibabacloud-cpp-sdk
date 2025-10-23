// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGWPBENCHMARKSUMMARYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETGWPBENCHMARKSUMMARYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetGwpBenchmarkSummaryResponseBodyDataItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetGwpBenchmarkSummaryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGwpBenchmarkSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(quantity, quantity_);
      DARABONBA_PTR_TO_JSON(unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, GetGwpBenchmarkSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(unit, unit_);
    };
    GetGwpBenchmarkSummaryResponseBodyData() = default ;
    GetGwpBenchmarkSummaryResponseBodyData(const GetGwpBenchmarkSummaryResponseBodyData &) = default ;
    GetGwpBenchmarkSummaryResponseBodyData(GetGwpBenchmarkSummaryResponseBodyData &&) = default ;
    GetGwpBenchmarkSummaryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGwpBenchmarkSummaryResponseBodyData() = default ;
    GetGwpBenchmarkSummaryResponseBodyData& operator=(const GetGwpBenchmarkSummaryResponseBodyData &) = default ;
    GetGwpBenchmarkSummaryResponseBodyData& operator=(GetGwpBenchmarkSummaryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && return this->quantity_ == nullptr && return this->unit_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::GetGwpBenchmarkSummaryResponseBodyDataItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::GetGwpBenchmarkSummaryResponseBodyDataItems>) };
    inline vector<Models::GetGwpBenchmarkSummaryResponseBodyDataItems> items() { DARABONBA_PTR_GET(items_, vector<Models::GetGwpBenchmarkSummaryResponseBodyDataItems>) };
    inline GetGwpBenchmarkSummaryResponseBodyData& setItems(const vector<Models::GetGwpBenchmarkSummaryResponseBodyDataItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetGwpBenchmarkSummaryResponseBodyData& setItems(vector<Models::GetGwpBenchmarkSummaryResponseBodyDataItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int64_t quantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0L) };
    inline GetGwpBenchmarkSummaryResponseBodyData& setQuantity(int64_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline GetGwpBenchmarkSummaryResponseBodyData& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    // Carbon Reduction Contribution Top4 Details.
    std::shared_ptr<vector<Models::GetGwpBenchmarkSummaryResponseBodyDataItems>> items_ = nullptr;
    // Emission amount is presented with four decimal places. Normally, modeling doesn\\"t result in negative values, but users can represent carbon reductions as negatives. The amount, paired with the unit, defines the emissions. Both are dynamically adjusted. If emissions exceed `1000 kgCO₂e/productUnit`, they convert to `tCO₂e/productUnit`. If they fall below `1 kgCO₂e/productUnit`, they convert to `gCO₂e/productUnit`. Otherwise, they stay in `kgCO₂e/productUnit`.
    std::shared_ptr<int64_t> quantity_ = nullptr;
    // Unit of emissions. The default value is `kgCO₂e/productUnit.` `productUnit` is the unit selected for the product. The unit value is changed to `tCO₂e/productUnit` or `gCO₂e/productUnit`. For more information, see the remarks in the quantity column.
    std::shared_ptr<string> unit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
