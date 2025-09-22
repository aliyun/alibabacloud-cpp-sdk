// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGWPBENCHMARKSUMMARYRESPONSEBODYDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_GETGWPBENCHMARKSUMMARYRESPONSEBODYDATAITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetGwpBenchmarkSummaryResponseBodyDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGwpBenchmarkSummaryResponseBodyDataItems& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(percent, percent_);
      DARABONBA_PTR_TO_JSON(quantity, quantity_);
      DARABONBA_PTR_TO_JSON(unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, GetGwpBenchmarkSummaryResponseBodyDataItems& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(percent, percent_);
      DARABONBA_PTR_FROM_JSON(quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(unit, unit_);
    };
    GetGwpBenchmarkSummaryResponseBodyDataItems() = default ;
    GetGwpBenchmarkSummaryResponseBodyDataItems(const GetGwpBenchmarkSummaryResponseBodyDataItems &) = default ;
    GetGwpBenchmarkSummaryResponseBodyDataItems(GetGwpBenchmarkSummaryResponseBodyDataItems &&) = default ;
    GetGwpBenchmarkSummaryResponseBodyDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGwpBenchmarkSummaryResponseBodyDataItems() = default ;
    GetGwpBenchmarkSummaryResponseBodyDataItems& operator=(const GetGwpBenchmarkSummaryResponseBodyDataItems &) = default ;
    GetGwpBenchmarkSummaryResponseBodyDataItems& operator=(GetGwpBenchmarkSummaryResponseBodyDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->percent_ != nullptr && this->quantity_ != nullptr && this->unit_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetGwpBenchmarkSummaryResponseBodyDataItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline string percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
    inline GetGwpBenchmarkSummaryResponseBodyDataItems& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int64_t quantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0L) };
    inline GetGwpBenchmarkSummaryResponseBodyDataItems& setQuantity(int64_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline GetGwpBenchmarkSummaryResponseBodyDataItems& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    // Name of carbon reduction details.
    std::shared_ptr<string> name_ = nullptr;
    // Percentage of emissions. The value is of the string type. Two decimal places are reserved for numbers. For example, "99.01" indicates the 99.01% of this type of emissions to the total emissions. Note that the returned string itself does not contain a percent sign.
    std::shared_ptr<string> percent_ = nullptr;
    // Emission amount is presented with four decimal places. Normally, modeling doesn\\"t result in negative values, but users can represent carbon reductions as negatives. The amount, paired with the unit, defines the emissions. Both are dynamically adjusted. If emissions exceed `1000 kgCO₂e/productUnit`, they convert to `tCO₂e/productUnit`. If they fall below `1 kgCO₂e/productUnit`, they convert to `gCO₂e/productUnit`. Otherwise, they stay in `kgCO₂e/productUnit`.
    std::shared_ptr<int64_t> quantity_ = nullptr;
    // Unit of emissions. The default value is `kgCO₂e/productUnit.` `productUnit` is the unit selected for the product. The unit value is changed to `tCO₂e/productUnit` or `gCO₂e/productUnit`. For more information, see the remarks in the quantity column.
    std::shared_ptr<string> unit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
