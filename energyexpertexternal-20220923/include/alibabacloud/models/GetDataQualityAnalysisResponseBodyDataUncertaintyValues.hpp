// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYANALYSISRESPONSEBODYDATAUNCERTAINTYVALUES_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYANALYSISRESPONSEBODYDATAUNCERTAINTYVALUES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDataQualityAnalysisResponseBodyDataUncertaintyValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityAnalysisResponseBodyDataUncertaintyValues& obj) { 
      DARABONBA_PTR_TO_JSON(inventory, inventory_);
      DARABONBA_PTR_TO_JSON(uncertaintyContribution, uncertaintyContribution_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityAnalysisResponseBodyDataUncertaintyValues& obj) { 
      DARABONBA_PTR_FROM_JSON(inventory, inventory_);
      DARABONBA_PTR_FROM_JSON(uncertaintyContribution, uncertaintyContribution_);
    };
    GetDataQualityAnalysisResponseBodyDataUncertaintyValues() = default ;
    GetDataQualityAnalysisResponseBodyDataUncertaintyValues(const GetDataQualityAnalysisResponseBodyDataUncertaintyValues &) = default ;
    GetDataQualityAnalysisResponseBodyDataUncertaintyValues(GetDataQualityAnalysisResponseBodyDataUncertaintyValues &&) = default ;
    GetDataQualityAnalysisResponseBodyDataUncertaintyValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityAnalysisResponseBodyDataUncertaintyValues() = default ;
    GetDataQualityAnalysisResponseBodyDataUncertaintyValues& operator=(const GetDataQualityAnalysisResponseBodyDataUncertaintyValues &) = default ;
    GetDataQualityAnalysisResponseBodyDataUncertaintyValues& operator=(GetDataQualityAnalysisResponseBodyDataUncertaintyValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inventory_ != nullptr
        && this->uncertaintyContribution_ != nullptr; };
    // inventory Field Functions 
    bool hasInventory() const { return this->inventory_ != nullptr;};
    void deleteInventory() { this->inventory_ = nullptr;};
    inline string inventory() const { DARABONBA_PTR_GET_DEFAULT(inventory_, "") };
    inline GetDataQualityAnalysisResponseBodyDataUncertaintyValues& setInventory(string inventory) { DARABONBA_PTR_SET_VALUE(inventory_, inventory) };


    // uncertaintyContribution Field Functions 
    bool hasUncertaintyContribution() const { return this->uncertaintyContribution_ != nullptr;};
    void deleteUncertaintyContribution() { this->uncertaintyContribution_ = nullptr;};
    inline string uncertaintyContribution() const { DARABONBA_PTR_GET_DEFAULT(uncertaintyContribution_, "") };
    inline GetDataQualityAnalysisResponseBodyDataUncertaintyValues& setUncertaintyContribution(string uncertaintyContribution) { DARABONBA_PTR_SET_VALUE(uncertaintyContribution_, uncertaintyContribution) };


  protected:
    // The name of the inventory. Format: process name / inventory name.
    std::shared_ptr<string> inventory_ = nullptr;
    // Inventory uncertainty absolute contribution size. The impact of the quality of each inventory data on the carbon footprint results in the modeling process, when the uncertain contribution of a list is large, please improve its data quality as much as possible to improve the accuracy of carbon footprint analysis. The meaning of "1.4964" is not determined to contribute 1.4964 kgCO₂ e/unit, where unit is the unit of the product.
    std::shared_ptr<string> uncertaintyContribution_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
