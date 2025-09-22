// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETRUNNINGPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETRUNNINGPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class SetRunningPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetRunningPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(controlType, controlType_);
      DARABONBA_PTR_TO_JSON(dateType, dateType_);
      DARABONBA_PTR_TO_JSON(earliestStartupTime, earliestStartupTime_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(factoryId, factoryId_);
      DARABONBA_PTR_TO_JSON(latestShutdownTime, latestShutdownTime_);
      DARABONBA_PTR_TO_JSON(maxCarbonDioxide, maxCarbonDioxide_);
      DARABONBA_PTR_TO_JSON(maxTem, maxTem_);
      DARABONBA_PTR_TO_JSON(minTem, minTem_);
      DARABONBA_PTR_TO_JSON(pKey, pKey_);
      DARABONBA_PTR_TO_JSON(seasonMode, seasonMode_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(statisticsTime, statisticsTime_);
      DARABONBA_PTR_TO_JSON(systemId, systemId_);
      DARABONBA_PTR_TO_JSON(workingEndTime, workingEndTime_);
      DARABONBA_PTR_TO_JSON(workingStartTime, workingStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, SetRunningPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(controlType, controlType_);
      DARABONBA_PTR_FROM_JSON(dateType, dateType_);
      DARABONBA_PTR_FROM_JSON(earliestStartupTime, earliestStartupTime_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(factoryId, factoryId_);
      DARABONBA_PTR_FROM_JSON(latestShutdownTime, latestShutdownTime_);
      DARABONBA_PTR_FROM_JSON(maxCarbonDioxide, maxCarbonDioxide_);
      DARABONBA_PTR_FROM_JSON(maxTem, maxTem_);
      DARABONBA_PTR_FROM_JSON(minTem, minTem_);
      DARABONBA_PTR_FROM_JSON(pKey, pKey_);
      DARABONBA_PTR_FROM_JSON(seasonMode, seasonMode_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(statisticsTime, statisticsTime_);
      DARABONBA_PTR_FROM_JSON(systemId, systemId_);
      DARABONBA_PTR_FROM_JSON(workingEndTime, workingEndTime_);
      DARABONBA_PTR_FROM_JSON(workingStartTime, workingStartTime_);
    };
    SetRunningPlanRequest() = default ;
    SetRunningPlanRequest(const SetRunningPlanRequest &) = default ;
    SetRunningPlanRequest(SetRunningPlanRequest &&) = default ;
    SetRunningPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetRunningPlanRequest() = default ;
    SetRunningPlanRequest& operator=(const SetRunningPlanRequest &) = default ;
    SetRunningPlanRequest& operator=(SetRunningPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->controlType_ != nullptr
        && this->dateType_ != nullptr && this->earliestStartupTime_ != nullptr && this->endTime_ != nullptr && this->factoryId_ != nullptr && this->latestShutdownTime_ != nullptr
        && this->maxCarbonDioxide_ != nullptr && this->maxTem_ != nullptr && this->minTem_ != nullptr && this->pKey_ != nullptr && this->seasonMode_ != nullptr
        && this->startTime_ != nullptr && this->statisticsTime_ != nullptr && this->systemId_ != nullptr && this->workingEndTime_ != nullptr && this->workingStartTime_ != nullptr; };
    // controlType Field Functions 
    bool hasControlType() const { return this->controlType_ != nullptr;};
    void deleteControlType() { this->controlType_ = nullptr;};
    inline int32_t controlType() const { DARABONBA_PTR_GET_DEFAULT(controlType_, 0) };
    inline SetRunningPlanRequest& setControlType(int32_t controlType) { DARABONBA_PTR_SET_VALUE(controlType_, controlType) };


    // dateType Field Functions 
    bool hasDateType() const { return this->dateType_ != nullptr;};
    void deleteDateType() { this->dateType_ = nullptr;};
    inline int32_t dateType() const { DARABONBA_PTR_GET_DEFAULT(dateType_, 0) };
    inline SetRunningPlanRequest& setDateType(int32_t dateType) { DARABONBA_PTR_SET_VALUE(dateType_, dateType) };


    // earliestStartupTime Field Functions 
    bool hasEarliestStartupTime() const { return this->earliestStartupTime_ != nullptr;};
    void deleteEarliestStartupTime() { this->earliestStartupTime_ = nullptr;};
    inline string earliestStartupTime() const { DARABONBA_PTR_GET_DEFAULT(earliestStartupTime_, "") };
    inline SetRunningPlanRequest& setEarliestStartupTime(string earliestStartupTime) { DARABONBA_PTR_SET_VALUE(earliestStartupTime_, earliestStartupTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline SetRunningPlanRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // factoryId Field Functions 
    bool hasFactoryId() const { return this->factoryId_ != nullptr;};
    void deleteFactoryId() { this->factoryId_ = nullptr;};
    inline string factoryId() const { DARABONBA_PTR_GET_DEFAULT(factoryId_, "") };
    inline SetRunningPlanRequest& setFactoryId(string factoryId) { DARABONBA_PTR_SET_VALUE(factoryId_, factoryId) };


    // latestShutdownTime Field Functions 
    bool hasLatestShutdownTime() const { return this->latestShutdownTime_ != nullptr;};
    void deleteLatestShutdownTime() { this->latestShutdownTime_ = nullptr;};
    inline string latestShutdownTime() const { DARABONBA_PTR_GET_DEFAULT(latestShutdownTime_, "") };
    inline SetRunningPlanRequest& setLatestShutdownTime(string latestShutdownTime) { DARABONBA_PTR_SET_VALUE(latestShutdownTime_, latestShutdownTime) };


    // maxCarbonDioxide Field Functions 
    bool hasMaxCarbonDioxide() const { return this->maxCarbonDioxide_ != nullptr;};
    void deleteMaxCarbonDioxide() { this->maxCarbonDioxide_ = nullptr;};
    inline double maxCarbonDioxide() const { DARABONBA_PTR_GET_DEFAULT(maxCarbonDioxide_, 0.0) };
    inline SetRunningPlanRequest& setMaxCarbonDioxide(double maxCarbonDioxide) { DARABONBA_PTR_SET_VALUE(maxCarbonDioxide_, maxCarbonDioxide) };


    // maxTem Field Functions 
    bool hasMaxTem() const { return this->maxTem_ != nullptr;};
    void deleteMaxTem() { this->maxTem_ = nullptr;};
    inline double maxTem() const { DARABONBA_PTR_GET_DEFAULT(maxTem_, 0.0) };
    inline SetRunningPlanRequest& setMaxTem(double maxTem) { DARABONBA_PTR_SET_VALUE(maxTem_, maxTem) };


    // minTem Field Functions 
    bool hasMinTem() const { return this->minTem_ != nullptr;};
    void deleteMinTem() { this->minTem_ = nullptr;};
    inline double minTem() const { DARABONBA_PTR_GET_DEFAULT(minTem_, 0.0) };
    inline SetRunningPlanRequest& setMinTem(double minTem) { DARABONBA_PTR_SET_VALUE(minTem_, minTem) };


    // pKey Field Functions 
    bool hasPKey() const { return this->pKey_ != nullptr;};
    void deletePKey() { this->pKey_ = nullptr;};
    inline string pKey() const { DARABONBA_PTR_GET_DEFAULT(pKey_, "") };
    inline SetRunningPlanRequest& setPKey(string pKey) { DARABONBA_PTR_SET_VALUE(pKey_, pKey) };


    // seasonMode Field Functions 
    bool hasSeasonMode() const { return this->seasonMode_ != nullptr;};
    void deleteSeasonMode() { this->seasonMode_ = nullptr;};
    inline int32_t seasonMode() const { DARABONBA_PTR_GET_DEFAULT(seasonMode_, 0) };
    inline SetRunningPlanRequest& setSeasonMode(int32_t seasonMode) { DARABONBA_PTR_SET_VALUE(seasonMode_, seasonMode) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline SetRunningPlanRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statisticsTime Field Functions 
    bool hasStatisticsTime() const { return this->statisticsTime_ != nullptr;};
    void deleteStatisticsTime() { this->statisticsTime_ = nullptr;};
    inline string statisticsTime() const { DARABONBA_PTR_GET_DEFAULT(statisticsTime_, "") };
    inline SetRunningPlanRequest& setStatisticsTime(string statisticsTime) { DARABONBA_PTR_SET_VALUE(statisticsTime_, statisticsTime) };


    // systemId Field Functions 
    bool hasSystemId() const { return this->systemId_ != nullptr;};
    void deleteSystemId() { this->systemId_ = nullptr;};
    inline string systemId() const { DARABONBA_PTR_GET_DEFAULT(systemId_, "") };
    inline SetRunningPlanRequest& setSystemId(string systemId) { DARABONBA_PTR_SET_VALUE(systemId_, systemId) };


    // workingEndTime Field Functions 
    bool hasWorkingEndTime() const { return this->workingEndTime_ != nullptr;};
    void deleteWorkingEndTime() { this->workingEndTime_ = nullptr;};
    inline string workingEndTime() const { DARABONBA_PTR_GET_DEFAULT(workingEndTime_, "") };
    inline SetRunningPlanRequest& setWorkingEndTime(string workingEndTime) { DARABONBA_PTR_SET_VALUE(workingEndTime_, workingEndTime) };


    // workingStartTime Field Functions 
    bool hasWorkingStartTime() const { return this->workingStartTime_ != nullptr;};
    void deleteWorkingStartTime() { this->workingStartTime_ = nullptr;};
    inline string workingStartTime() const { DARABONBA_PTR_GET_DEFAULT(workingStartTime_, "") };
    inline SetRunningPlanRequest& setWorkingStartTime(string workingStartTime) { DARABONBA_PTR_SET_VALUE(workingStartTime_, workingStartTime) };


  protected:
    std::shared_ptr<int32_t> controlType_ = nullptr;
    std::shared_ptr<int32_t> dateType_ = nullptr;
    std::shared_ptr<string> earliestStartupTime_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> factoryId_ = nullptr;
    std::shared_ptr<string> latestShutdownTime_ = nullptr;
    std::shared_ptr<double> maxCarbonDioxide_ = nullptr;
    std::shared_ptr<double> maxTem_ = nullptr;
    std::shared_ptr<double> minTem_ = nullptr;
    std::shared_ptr<string> pKey_ = nullptr;
    std::shared_ptr<int32_t> seasonMode_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> statisticsTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> systemId_ = nullptr;
    std::shared_ptr<string> workingEndTime_ = nullptr;
    std::shared_ptr<string> workingStartTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
