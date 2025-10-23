// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEMISSIONSUMMARYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETEMISSIONSUMMARYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetEmissionSummaryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEmissionSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(actualEmissionRatio, actualEmissionRatio_);
      DARABONBA_PTR_TO_JSON(carbonSaveConversion, carbonSaveConversion_);
      DARABONBA_PTR_TO_JSON(currentPeriodCarbonEmissionData, currentPeriodCarbonEmissionData_);
      DARABONBA_PTR_TO_JSON(isWeighting, isWeighting_);
      DARABONBA_PTR_TO_JSON(lastPeriodCarbonEmissionData, lastPeriodCarbonEmissionData_);
      DARABONBA_PTR_TO_JSON(lastPeriodWeightingCarbonEmissionData, lastPeriodWeightingCarbonEmissionData_);
      DARABONBA_PTR_TO_JSON(ratio, ratio_);
      DARABONBA_PTR_TO_JSON(totalCarbonEmissionData, totalCarbonEmissionData_);
      DARABONBA_PTR_TO_JSON(weightingCarbonEmissionData, weightingCarbonEmissionData_);
      DARABONBA_PTR_TO_JSON(weightingRatio, weightingRatio_);
    };
    friend void from_json(const Darabonba::Json& j, GetEmissionSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(actualEmissionRatio, actualEmissionRatio_);
      DARABONBA_PTR_FROM_JSON(carbonSaveConversion, carbonSaveConversion_);
      DARABONBA_PTR_FROM_JSON(currentPeriodCarbonEmissionData, currentPeriodCarbonEmissionData_);
      DARABONBA_PTR_FROM_JSON(isWeighting, isWeighting_);
      DARABONBA_PTR_FROM_JSON(lastPeriodCarbonEmissionData, lastPeriodCarbonEmissionData_);
      DARABONBA_PTR_FROM_JSON(lastPeriodWeightingCarbonEmissionData, lastPeriodWeightingCarbonEmissionData_);
      DARABONBA_PTR_FROM_JSON(ratio, ratio_);
      DARABONBA_PTR_FROM_JSON(totalCarbonEmissionData, totalCarbonEmissionData_);
      DARABONBA_PTR_FROM_JSON(weightingCarbonEmissionData, weightingCarbonEmissionData_);
      DARABONBA_PTR_FROM_JSON(weightingRatio, weightingRatio_);
    };
    GetEmissionSummaryResponseBodyData() = default ;
    GetEmissionSummaryResponseBodyData(const GetEmissionSummaryResponseBodyData &) = default ;
    GetEmissionSummaryResponseBodyData(GetEmissionSummaryResponseBodyData &&) = default ;
    GetEmissionSummaryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEmissionSummaryResponseBodyData() = default ;
    GetEmissionSummaryResponseBodyData& operator=(const GetEmissionSummaryResponseBodyData &) = default ;
    GetEmissionSummaryResponseBodyData& operator=(GetEmissionSummaryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actualEmissionRatio_ == nullptr
        && return this->carbonSaveConversion_ == nullptr && return this->currentPeriodCarbonEmissionData_ == nullptr && return this->isWeighting_ == nullptr && return this->lastPeriodCarbonEmissionData_ == nullptr && return this->lastPeriodWeightingCarbonEmissionData_ == nullptr
        && return this->ratio_ == nullptr && return this->totalCarbonEmissionData_ == nullptr && return this->weightingCarbonEmissionData_ == nullptr && return this->weightingRatio_ == nullptr; };
    // actualEmissionRatio Field Functions 
    bool hasActualEmissionRatio() const { return this->actualEmissionRatio_ != nullptr;};
    void deleteActualEmissionRatio() { this->actualEmissionRatio_ = nullptr;};
    inline double actualEmissionRatio() const { DARABONBA_PTR_GET_DEFAULT(actualEmissionRatio_, 0.0) };
    inline GetEmissionSummaryResponseBodyData& setActualEmissionRatio(double actualEmissionRatio) { DARABONBA_PTR_SET_VALUE(actualEmissionRatio_, actualEmissionRatio) };


    // carbonSaveConversion Field Functions 
    bool hasCarbonSaveConversion() const { return this->carbonSaveConversion_ != nullptr;};
    void deleteCarbonSaveConversion() { this->carbonSaveConversion_ = nullptr;};
    inline double carbonSaveConversion() const { DARABONBA_PTR_GET_DEFAULT(carbonSaveConversion_, 0.0) };
    inline GetEmissionSummaryResponseBodyData& setCarbonSaveConversion(double carbonSaveConversion) { DARABONBA_PTR_SET_VALUE(carbonSaveConversion_, carbonSaveConversion) };


    // currentPeriodCarbonEmissionData Field Functions 
    bool hasCurrentPeriodCarbonEmissionData() const { return this->currentPeriodCarbonEmissionData_ != nullptr;};
    void deleteCurrentPeriodCarbonEmissionData() { this->currentPeriodCarbonEmissionData_ = nullptr;};
    inline double currentPeriodCarbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(currentPeriodCarbonEmissionData_, 0.0) };
    inline GetEmissionSummaryResponseBodyData& setCurrentPeriodCarbonEmissionData(double currentPeriodCarbonEmissionData) { DARABONBA_PTR_SET_VALUE(currentPeriodCarbonEmissionData_, currentPeriodCarbonEmissionData) };


    // isWeighting Field Functions 
    bool hasIsWeighting() const { return this->isWeighting_ != nullptr;};
    void deleteIsWeighting() { this->isWeighting_ = nullptr;};
    inline bool isWeighting() const { DARABONBA_PTR_GET_DEFAULT(isWeighting_, false) };
    inline GetEmissionSummaryResponseBodyData& setIsWeighting(bool isWeighting) { DARABONBA_PTR_SET_VALUE(isWeighting_, isWeighting) };


    // lastPeriodCarbonEmissionData Field Functions 
    bool hasLastPeriodCarbonEmissionData() const { return this->lastPeriodCarbonEmissionData_ != nullptr;};
    void deleteLastPeriodCarbonEmissionData() { this->lastPeriodCarbonEmissionData_ = nullptr;};
    inline double lastPeriodCarbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(lastPeriodCarbonEmissionData_, 0.0) };
    inline GetEmissionSummaryResponseBodyData& setLastPeriodCarbonEmissionData(double lastPeriodCarbonEmissionData) { DARABONBA_PTR_SET_VALUE(lastPeriodCarbonEmissionData_, lastPeriodCarbonEmissionData) };


    // lastPeriodWeightingCarbonEmissionData Field Functions 
    bool hasLastPeriodWeightingCarbonEmissionData() const { return this->lastPeriodWeightingCarbonEmissionData_ != nullptr;};
    void deleteLastPeriodWeightingCarbonEmissionData() { this->lastPeriodWeightingCarbonEmissionData_ = nullptr;};
    inline double lastPeriodWeightingCarbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(lastPeriodWeightingCarbonEmissionData_, 0.0) };
    inline GetEmissionSummaryResponseBodyData& setLastPeriodWeightingCarbonEmissionData(double lastPeriodWeightingCarbonEmissionData) { DARABONBA_PTR_SET_VALUE(lastPeriodWeightingCarbonEmissionData_, lastPeriodWeightingCarbonEmissionData) };


    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline double ratio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0.0) };
    inline GetEmissionSummaryResponseBodyData& setRatio(double ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // totalCarbonEmissionData Field Functions 
    bool hasTotalCarbonEmissionData() const { return this->totalCarbonEmissionData_ != nullptr;};
    void deleteTotalCarbonEmissionData() { this->totalCarbonEmissionData_ = nullptr;};
    inline double totalCarbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(totalCarbonEmissionData_, 0.0) };
    inline GetEmissionSummaryResponseBodyData& setTotalCarbonEmissionData(double totalCarbonEmissionData) { DARABONBA_PTR_SET_VALUE(totalCarbonEmissionData_, totalCarbonEmissionData) };


    // weightingCarbonEmissionData Field Functions 
    bool hasWeightingCarbonEmissionData() const { return this->weightingCarbonEmissionData_ != nullptr;};
    void deleteWeightingCarbonEmissionData() { this->weightingCarbonEmissionData_ = nullptr;};
    inline double weightingCarbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(weightingCarbonEmissionData_, 0.0) };
    inline GetEmissionSummaryResponseBodyData& setWeightingCarbonEmissionData(double weightingCarbonEmissionData) { DARABONBA_PTR_SET_VALUE(weightingCarbonEmissionData_, weightingCarbonEmissionData) };


    // weightingRatio Field Functions 
    bool hasWeightingRatio() const { return this->weightingRatio_ != nullptr;};
    void deleteWeightingRatio() { this->weightingRatio_ = nullptr;};
    inline double weightingRatio() const { DARABONBA_PTR_GET_DEFAULT(weightingRatio_, 0.0) };
    inline GetEmissionSummaryResponseBodyData& setWeightingRatio(double weightingRatio) { DARABONBA_PTR_SET_VALUE(weightingRatio_, weightingRatio) };


  protected:
    // Percentage of scheduled.
    std::shared_ptr<double> actualEmissionRatio_ = nullptr;
    // Carbon emissions reduction.
    std::shared_ptr<double> carbonSaveConversion_ = nullptr;
    // Statistical indicators for this cycle.
    std::shared_ptr<double> currentPeriodCarbonEmissionData_ = nullptr;
    // Whether to show the weighting ratio carbon emission.
    std::shared_ptr<bool> isWeighting_ = nullptr;
    // Last period statistical indicators.
    std::shared_ptr<double> lastPeriodCarbonEmissionData_ = nullptr;
    // Calculation of carbon emissions based on shareholding ratio in the last cycle.
    std::shared_ptr<double> lastPeriodWeightingCarbonEmissionData_ = nullptr;
    // Year-on-year.
    std::shared_ptr<double> ratio_ = nullptr;
    // Total carbon emissions.
    std::shared_ptr<double> totalCarbonEmissionData_ = nullptr;
    // Calculate carbon emissions by share ratio
    std::shared_ptr<double> weightingCarbonEmissionData_ = nullptr;
    // Year-on-year of weighting ratio carbon emissions.
    std::shared_ptr<double> weightingRatio_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
