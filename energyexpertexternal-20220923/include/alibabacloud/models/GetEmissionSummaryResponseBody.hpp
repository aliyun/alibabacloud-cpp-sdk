// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEMISSIONSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEMISSIONSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetEmissionSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEmissionSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEmissionSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetEmissionSummaryResponseBody() = default ;
    GetEmissionSummaryResponseBody(const GetEmissionSummaryResponseBody &) = default ;
    GetEmissionSummaryResponseBody(GetEmissionSummaryResponseBody &&) = default ;
    GetEmissionSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEmissionSummaryResponseBody() = default ;
    GetEmissionSummaryResponseBody& operator=(const GetEmissionSummaryResponseBody &) = default ;
    GetEmissionSummaryResponseBody& operator=(GetEmissionSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actualEmissionRatio_ == nullptr
        && this->carbonSaveConversion_ == nullptr && this->currentPeriodCarbonEmissionData_ == nullptr && this->isWeighting_ == nullptr && this->lastPeriodCarbonEmissionData_ == nullptr && this->lastPeriodWeightingCarbonEmissionData_ == nullptr
        && this->ratio_ == nullptr && this->totalCarbonEmissionData_ == nullptr && this->weightingCarbonEmissionData_ == nullptr && this->weightingRatio_ == nullptr; };
      // actualEmissionRatio Field Functions 
      bool hasActualEmissionRatio() const { return this->actualEmissionRatio_ != nullptr;};
      void deleteActualEmissionRatio() { this->actualEmissionRatio_ = nullptr;};
      inline double getActualEmissionRatio() const { DARABONBA_PTR_GET_DEFAULT(actualEmissionRatio_, 0.0) };
      inline Data& setActualEmissionRatio(double actualEmissionRatio) { DARABONBA_PTR_SET_VALUE(actualEmissionRatio_, actualEmissionRatio) };


      // carbonSaveConversion Field Functions 
      bool hasCarbonSaveConversion() const { return this->carbonSaveConversion_ != nullptr;};
      void deleteCarbonSaveConversion() { this->carbonSaveConversion_ = nullptr;};
      inline double getCarbonSaveConversion() const { DARABONBA_PTR_GET_DEFAULT(carbonSaveConversion_, 0.0) };
      inline Data& setCarbonSaveConversion(double carbonSaveConversion) { DARABONBA_PTR_SET_VALUE(carbonSaveConversion_, carbonSaveConversion) };


      // currentPeriodCarbonEmissionData Field Functions 
      bool hasCurrentPeriodCarbonEmissionData() const { return this->currentPeriodCarbonEmissionData_ != nullptr;};
      void deleteCurrentPeriodCarbonEmissionData() { this->currentPeriodCarbonEmissionData_ = nullptr;};
      inline double getCurrentPeriodCarbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(currentPeriodCarbonEmissionData_, 0.0) };
      inline Data& setCurrentPeriodCarbonEmissionData(double currentPeriodCarbonEmissionData) { DARABONBA_PTR_SET_VALUE(currentPeriodCarbonEmissionData_, currentPeriodCarbonEmissionData) };


      // isWeighting Field Functions 
      bool hasIsWeighting() const { return this->isWeighting_ != nullptr;};
      void deleteIsWeighting() { this->isWeighting_ = nullptr;};
      inline bool getIsWeighting() const { DARABONBA_PTR_GET_DEFAULT(isWeighting_, false) };
      inline Data& setIsWeighting(bool isWeighting) { DARABONBA_PTR_SET_VALUE(isWeighting_, isWeighting) };


      // lastPeriodCarbonEmissionData Field Functions 
      bool hasLastPeriodCarbonEmissionData() const { return this->lastPeriodCarbonEmissionData_ != nullptr;};
      void deleteLastPeriodCarbonEmissionData() { this->lastPeriodCarbonEmissionData_ = nullptr;};
      inline double getLastPeriodCarbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(lastPeriodCarbonEmissionData_, 0.0) };
      inline Data& setLastPeriodCarbonEmissionData(double lastPeriodCarbonEmissionData) { DARABONBA_PTR_SET_VALUE(lastPeriodCarbonEmissionData_, lastPeriodCarbonEmissionData) };


      // lastPeriodWeightingCarbonEmissionData Field Functions 
      bool hasLastPeriodWeightingCarbonEmissionData() const { return this->lastPeriodWeightingCarbonEmissionData_ != nullptr;};
      void deleteLastPeriodWeightingCarbonEmissionData() { this->lastPeriodWeightingCarbonEmissionData_ = nullptr;};
      inline double getLastPeriodWeightingCarbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(lastPeriodWeightingCarbonEmissionData_, 0.0) };
      inline Data& setLastPeriodWeightingCarbonEmissionData(double lastPeriodWeightingCarbonEmissionData) { DARABONBA_PTR_SET_VALUE(lastPeriodWeightingCarbonEmissionData_, lastPeriodWeightingCarbonEmissionData) };


      // ratio Field Functions 
      bool hasRatio() const { return this->ratio_ != nullptr;};
      void deleteRatio() { this->ratio_ = nullptr;};
      inline double getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0.0) };
      inline Data& setRatio(double ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


      // totalCarbonEmissionData Field Functions 
      bool hasTotalCarbonEmissionData() const { return this->totalCarbonEmissionData_ != nullptr;};
      void deleteTotalCarbonEmissionData() { this->totalCarbonEmissionData_ = nullptr;};
      inline double getTotalCarbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(totalCarbonEmissionData_, 0.0) };
      inline Data& setTotalCarbonEmissionData(double totalCarbonEmissionData) { DARABONBA_PTR_SET_VALUE(totalCarbonEmissionData_, totalCarbonEmissionData) };


      // weightingCarbonEmissionData Field Functions 
      bool hasWeightingCarbonEmissionData() const { return this->weightingCarbonEmissionData_ != nullptr;};
      void deleteWeightingCarbonEmissionData() { this->weightingCarbonEmissionData_ = nullptr;};
      inline double getWeightingCarbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(weightingCarbonEmissionData_, 0.0) };
      inline Data& setWeightingCarbonEmissionData(double weightingCarbonEmissionData) { DARABONBA_PTR_SET_VALUE(weightingCarbonEmissionData_, weightingCarbonEmissionData) };


      // weightingRatio Field Functions 
      bool hasWeightingRatio() const { return this->weightingRatio_ != nullptr;};
      void deleteWeightingRatio() { this->weightingRatio_ = nullptr;};
      inline double getWeightingRatio() const { DARABONBA_PTR_GET_DEFAULT(weightingRatio_, 0.0) };
      inline Data& setWeightingRatio(double weightingRatio) { DARABONBA_PTR_SET_VALUE(weightingRatio_, weightingRatio) };


    protected:
      // Percentage of scheduled.
      shared_ptr<double> actualEmissionRatio_ {};
      // Carbon emissions reduction.
      shared_ptr<double> carbonSaveConversion_ {};
      // Statistical indicators for this cycle.
      shared_ptr<double> currentPeriodCarbonEmissionData_ {};
      // Whether to show the weighting ratio carbon emission.
      shared_ptr<bool> isWeighting_ {};
      // Last period statistical indicators.
      shared_ptr<double> lastPeriodCarbonEmissionData_ {};
      // Calculation of carbon emissions based on shareholding ratio in the last cycle.
      shared_ptr<double> lastPeriodWeightingCarbonEmissionData_ {};
      // Year-on-year.
      shared_ptr<double> ratio_ {};
      // Total carbon emissions.
      shared_ptr<double> totalCarbonEmissionData_ {};
      // Calculate carbon emissions by share ratio
      shared_ptr<double> weightingCarbonEmissionData_ {};
      // Year-on-year of weighting ratio carbon emissions.
      shared_ptr<double> weightingRatio_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetEmissionSummaryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetEmissionSummaryResponseBody::Data) };
    inline GetEmissionSummaryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetEmissionSummaryResponseBody::Data) };
    inline GetEmissionSummaryResponseBody& setData(const GetEmissionSummaryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetEmissionSummaryResponseBody& setData(GetEmissionSummaryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEmissionSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details of summarized data
    shared_ptr<GetEmissionSummaryResponseBody::Data> data_ {};
    // Id of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
