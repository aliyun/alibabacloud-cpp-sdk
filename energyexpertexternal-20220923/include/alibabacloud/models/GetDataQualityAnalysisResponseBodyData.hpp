// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYANALYSISRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYANALYSISRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDataQualityAnalysisResponseBodyDataDataQuality.hpp>
#include <alibabacloud/models/GetDataQualityAnalysisResponseBodyDataDataQualityResult.hpp>
#include <alibabacloud/models/GetDataQualityAnalysisResponseBodyDataSensitivityList.hpp>
#include <alibabacloud/models/GetDataQualityAnalysisResponseBodyDataUncertaintyValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDataQualityAnalysisResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityAnalysisResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(dataQuality, dataQuality_);
      DARABONBA_PTR_TO_JSON(dataQualityResult, dataQualityResult_);
      DARABONBA_PTR_TO_JSON(sensitivityList, sensitivityList_);
      DARABONBA_PTR_TO_JSON(uncertainty, uncertainty_);
      DARABONBA_PTR_TO_JSON(uncertaintyValues, uncertaintyValues_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityAnalysisResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(dataQuality, dataQuality_);
      DARABONBA_PTR_FROM_JSON(dataQualityResult, dataQualityResult_);
      DARABONBA_PTR_FROM_JSON(sensitivityList, sensitivityList_);
      DARABONBA_PTR_FROM_JSON(uncertainty, uncertainty_);
      DARABONBA_PTR_FROM_JSON(uncertaintyValues, uncertaintyValues_);
    };
    GetDataQualityAnalysisResponseBodyData() = default ;
    GetDataQualityAnalysisResponseBodyData(const GetDataQualityAnalysisResponseBodyData &) = default ;
    GetDataQualityAnalysisResponseBodyData(GetDataQualityAnalysisResponseBodyData &&) = default ;
    GetDataQualityAnalysisResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityAnalysisResponseBodyData() = default ;
    GetDataQualityAnalysisResponseBodyData& operator=(const GetDataQualityAnalysisResponseBodyData &) = default ;
    GetDataQualityAnalysisResponseBodyData& operator=(GetDataQualityAnalysisResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataQuality_ != nullptr
        && this->dataQualityResult_ != nullptr && this->sensitivityList_ != nullptr && this->uncertainty_ != nullptr && this->uncertaintyValues_ != nullptr; };
    // dataQuality Field Functions 
    bool hasDataQuality() const { return this->dataQuality_ != nullptr;};
    void deleteDataQuality() { this->dataQuality_ = nullptr;};
    inline const vector<Models::GetDataQualityAnalysisResponseBodyDataDataQuality> & dataQuality() const { DARABONBA_PTR_GET_CONST(dataQuality_, vector<Models::GetDataQualityAnalysisResponseBodyDataDataQuality>) };
    inline vector<Models::GetDataQualityAnalysisResponseBodyDataDataQuality> dataQuality() { DARABONBA_PTR_GET(dataQuality_, vector<Models::GetDataQualityAnalysisResponseBodyDataDataQuality>) };
    inline GetDataQualityAnalysisResponseBodyData& setDataQuality(const vector<Models::GetDataQualityAnalysisResponseBodyDataDataQuality> & dataQuality) { DARABONBA_PTR_SET_VALUE(dataQuality_, dataQuality) };
    inline GetDataQualityAnalysisResponseBodyData& setDataQuality(vector<Models::GetDataQualityAnalysisResponseBodyDataDataQuality> && dataQuality) { DARABONBA_PTR_SET_RVALUE(dataQuality_, dataQuality) };


    // dataQualityResult Field Functions 
    bool hasDataQualityResult() const { return this->dataQualityResult_ != nullptr;};
    void deleteDataQualityResult() { this->dataQualityResult_ = nullptr;};
    inline const Models::GetDataQualityAnalysisResponseBodyDataDataQualityResult & dataQualityResult() const { DARABONBA_PTR_GET_CONST(dataQualityResult_, Models::GetDataQualityAnalysisResponseBodyDataDataQualityResult) };
    inline Models::GetDataQualityAnalysisResponseBodyDataDataQualityResult dataQualityResult() { DARABONBA_PTR_GET(dataQualityResult_, Models::GetDataQualityAnalysisResponseBodyDataDataQualityResult) };
    inline GetDataQualityAnalysisResponseBodyData& setDataQualityResult(const Models::GetDataQualityAnalysisResponseBodyDataDataQualityResult & dataQualityResult) { DARABONBA_PTR_SET_VALUE(dataQualityResult_, dataQualityResult) };
    inline GetDataQualityAnalysisResponseBodyData& setDataQualityResult(Models::GetDataQualityAnalysisResponseBodyDataDataQualityResult && dataQualityResult) { DARABONBA_PTR_SET_RVALUE(dataQualityResult_, dataQualityResult) };


    // sensitivityList Field Functions 
    bool hasSensitivityList() const { return this->sensitivityList_ != nullptr;};
    void deleteSensitivityList() { this->sensitivityList_ = nullptr;};
    inline const vector<Models::GetDataQualityAnalysisResponseBodyDataSensitivityList> & sensitivityList() const { DARABONBA_PTR_GET_CONST(sensitivityList_, vector<Models::GetDataQualityAnalysisResponseBodyDataSensitivityList>) };
    inline vector<Models::GetDataQualityAnalysisResponseBodyDataSensitivityList> sensitivityList() { DARABONBA_PTR_GET(sensitivityList_, vector<Models::GetDataQualityAnalysisResponseBodyDataSensitivityList>) };
    inline GetDataQualityAnalysisResponseBodyData& setSensitivityList(const vector<Models::GetDataQualityAnalysisResponseBodyDataSensitivityList> & sensitivityList) { DARABONBA_PTR_SET_VALUE(sensitivityList_, sensitivityList) };
    inline GetDataQualityAnalysisResponseBodyData& setSensitivityList(vector<Models::GetDataQualityAnalysisResponseBodyDataSensitivityList> && sensitivityList) { DARABONBA_PTR_SET_RVALUE(sensitivityList_, sensitivityList) };


    // uncertainty Field Functions 
    bool hasUncertainty() const { return this->uncertainty_ != nullptr;};
    void deleteUncertainty() { this->uncertainty_ = nullptr;};
    inline string uncertainty() const { DARABONBA_PTR_GET_DEFAULT(uncertainty_, "") };
    inline GetDataQualityAnalysisResponseBodyData& setUncertainty(string uncertainty) { DARABONBA_PTR_SET_VALUE(uncertainty_, uncertainty) };


    // uncertaintyValues Field Functions 
    bool hasUncertaintyValues() const { return this->uncertaintyValues_ != nullptr;};
    void deleteUncertaintyValues() { this->uncertaintyValues_ = nullptr;};
    inline const vector<Models::GetDataQualityAnalysisResponseBodyDataUncertaintyValues> & uncertaintyValues() const { DARABONBA_PTR_GET_CONST(uncertaintyValues_, vector<Models::GetDataQualityAnalysisResponseBodyDataUncertaintyValues>) };
    inline vector<Models::GetDataQualityAnalysisResponseBodyDataUncertaintyValues> uncertaintyValues() { DARABONBA_PTR_GET(uncertaintyValues_, vector<Models::GetDataQualityAnalysisResponseBodyDataUncertaintyValues>) };
    inline GetDataQualityAnalysisResponseBodyData& setUncertaintyValues(const vector<Models::GetDataQualityAnalysisResponseBodyDataUncertaintyValues> & uncertaintyValues) { DARABONBA_PTR_SET_VALUE(uncertaintyValues_, uncertaintyValues) };
    inline GetDataQualityAnalysisResponseBodyData& setUncertaintyValues(vector<Models::GetDataQualityAnalysisResponseBodyDataUncertaintyValues> && uncertaintyValues) { DARABONBA_PTR_SET_RVALUE(uncertaintyValues_, uncertaintyValues) };


  protected:
    // Score of each inventory.
    std::shared_ptr<vector<Models::GetDataQualityAnalysisResponseBodyDataDataQuality>> dataQuality_ = nullptr;
    // Data quality result.
    std::shared_ptr<Models::GetDataQualityAnalysisResponseBodyDataDataQualityResult> dataQualityResult_ = nullptr;
    // Sensitivity analysis list
    std::shared_ptr<vector<Models::GetDataQualityAnalysisResponseBodyDataSensitivityList>> sensitivityList_ = nullptr;
    // Uncertainty value. The model\\"s overall percentage uncertainty results. "10.00%" symbolizes a 10.00% uncertainty, indicating that the carbon footprint lies within ±10.00%. This is derived from a weighted aggregation of individual inventory uncertainties.
    std::shared_ptr<string> uncertainty_ = nullptr;
    // Uncertainty list
    std::shared_ptr<vector<Models::GetDataQualityAnalysisResponseBodyDataUncertaintyValues>> uncertaintyValues_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
