// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGWPINVENTORYSUMMARYRESPONSEBODYDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_GETGWPINVENTORYSUMMARYRESPONSEBODYDATAITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetGwpInventorySummaryResponseBodyDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGwpInventorySummaryResponseBodyDataItems& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(percent, percent_);
      DARABONBA_PTR_TO_JSON(quantity, quantity_);
      DARABONBA_PTR_TO_JSON(unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, GetGwpInventorySummaryResponseBodyDataItems& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(percent, percent_);
      DARABONBA_PTR_FROM_JSON(quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(unit, unit_);
    };
    GetGwpInventorySummaryResponseBodyDataItems() = default ;
    GetGwpInventorySummaryResponseBodyDataItems(const GetGwpInventorySummaryResponseBodyDataItems &) = default ;
    GetGwpInventorySummaryResponseBodyDataItems(GetGwpInventorySummaryResponseBodyDataItems &&) = default ;
    GetGwpInventorySummaryResponseBodyDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGwpInventorySummaryResponseBodyDataItems() = default ;
    GetGwpInventorySummaryResponseBodyDataItems& operator=(const GetGwpInventorySummaryResponseBodyDataItems &) = default ;
    GetGwpInventorySummaryResponseBodyDataItems& operator=(GetGwpInventorySummaryResponseBodyDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->percent_ == nullptr && return this->quantity_ == nullptr && return this->unit_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetGwpInventorySummaryResponseBodyDataItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline string percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
    inline GetGwpInventorySummaryResponseBodyDataItems& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline double quantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0.0) };
    inline GetGwpInventorySummaryResponseBodyDataItems& setQuantity(double quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline GetGwpInventorySummaryResponseBodyDataItems& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    // Inventory resource type name.
    std::shared_ptr<string> name_ = nullptr;
    // Percentage.
    std::shared_ptr<string> percent_ = nullptr;
    // Quantity.
    std::shared_ptr<double> quantity_ = nullptr;
    // The unit.
    std::shared_ptr<string> unit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
