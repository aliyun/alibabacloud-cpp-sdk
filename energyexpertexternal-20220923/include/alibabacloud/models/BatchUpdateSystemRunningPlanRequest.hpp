// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUPDATESYSTEMRUNNINGPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHUPDATESYSTEMRUNNINGPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class BatchUpdateSystemRunningPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUpdateSystemRunningPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(controlType, controlType_);
      DARABONBA_PTR_TO_JSON(dateType, dateType_);
      DARABONBA_PTR_TO_JSON(earliestStartupTime, earliestStartupTime_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(factoryId, factoryId_);
      DARABONBA_PTR_TO_JSON(latestShutdownTime, latestShutdownTime_);
      DARABONBA_PTR_TO_JSON(maxCarbonDioxide, maxCarbonDioxide_);
      DARABONBA_PTR_TO_JSON(maxTem, maxTem_);
      DARABONBA_PTR_TO_JSON(minTem, minTem_);
      DARABONBA_PTR_TO_JSON(seasonMode, seasonMode_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(systemId, systemId_);
      DARABONBA_PTR_TO_JSON(workingEndTime, workingEndTime_);
      DARABONBA_PTR_TO_JSON(workingStartTime, workingStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUpdateSystemRunningPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(controlType, controlType_);
      DARABONBA_PTR_FROM_JSON(dateType, dateType_);
      DARABONBA_PTR_FROM_JSON(earliestStartupTime, earliestStartupTime_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(factoryId, factoryId_);
      DARABONBA_PTR_FROM_JSON(latestShutdownTime, latestShutdownTime_);
      DARABONBA_PTR_FROM_JSON(maxCarbonDioxide, maxCarbonDioxide_);
      DARABONBA_PTR_FROM_JSON(maxTem, maxTem_);
      DARABONBA_PTR_FROM_JSON(minTem, minTem_);
      DARABONBA_PTR_FROM_JSON(seasonMode, seasonMode_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(systemId, systemId_);
      DARABONBA_PTR_FROM_JSON(workingEndTime, workingEndTime_);
      DARABONBA_PTR_FROM_JSON(workingStartTime, workingStartTime_);
    };
    BatchUpdateSystemRunningPlanRequest() = default ;
    BatchUpdateSystemRunningPlanRequest(const BatchUpdateSystemRunningPlanRequest &) = default ;
    BatchUpdateSystemRunningPlanRequest(BatchUpdateSystemRunningPlanRequest &&) = default ;
    BatchUpdateSystemRunningPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUpdateSystemRunningPlanRequest() = default ;
    BatchUpdateSystemRunningPlanRequest& operator=(const BatchUpdateSystemRunningPlanRequest &) = default ;
    BatchUpdateSystemRunningPlanRequest& operator=(BatchUpdateSystemRunningPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->controlType_ == nullptr
        && this->dateType_ == nullptr && this->earliestStartupTime_ == nullptr && this->endTime_ == nullptr && this->factoryId_ == nullptr && this->latestShutdownTime_ == nullptr
        && this->maxCarbonDioxide_ == nullptr && this->maxTem_ == nullptr && this->minTem_ == nullptr && this->seasonMode_ == nullptr && this->startTime_ == nullptr
        && this->systemId_ == nullptr && this->workingEndTime_ == nullptr && this->workingStartTime_ == nullptr; };
    // controlType Field Functions 
    bool hasControlType() const { return this->controlType_ != nullptr;};
    void deleteControlType() { this->controlType_ = nullptr;};
    inline int32_t getControlType() const { DARABONBA_PTR_GET_DEFAULT(controlType_, 0) };
    inline BatchUpdateSystemRunningPlanRequest& setControlType(int32_t controlType) { DARABONBA_PTR_SET_VALUE(controlType_, controlType) };


    // dateType Field Functions 
    bool hasDateType() const { return this->dateType_ != nullptr;};
    void deleteDateType() { this->dateType_ = nullptr;};
    inline int32_t getDateType() const { DARABONBA_PTR_GET_DEFAULT(dateType_, 0) };
    inline BatchUpdateSystemRunningPlanRequest& setDateType(int32_t dateType) { DARABONBA_PTR_SET_VALUE(dateType_, dateType) };


    // earliestStartupTime Field Functions 
    bool hasEarliestStartupTime() const { return this->earliestStartupTime_ != nullptr;};
    void deleteEarliestStartupTime() { this->earliestStartupTime_ = nullptr;};
    inline string getEarliestStartupTime() const { DARABONBA_PTR_GET_DEFAULT(earliestStartupTime_, "") };
    inline BatchUpdateSystemRunningPlanRequest& setEarliestStartupTime(string earliestStartupTime) { DARABONBA_PTR_SET_VALUE(earliestStartupTime_, earliestStartupTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline BatchUpdateSystemRunningPlanRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // factoryId Field Functions 
    bool hasFactoryId() const { return this->factoryId_ != nullptr;};
    void deleteFactoryId() { this->factoryId_ = nullptr;};
    inline string getFactoryId() const { DARABONBA_PTR_GET_DEFAULT(factoryId_, "") };
    inline BatchUpdateSystemRunningPlanRequest& setFactoryId(string factoryId) { DARABONBA_PTR_SET_VALUE(factoryId_, factoryId) };


    // latestShutdownTime Field Functions 
    bool hasLatestShutdownTime() const { return this->latestShutdownTime_ != nullptr;};
    void deleteLatestShutdownTime() { this->latestShutdownTime_ = nullptr;};
    inline string getLatestShutdownTime() const { DARABONBA_PTR_GET_DEFAULT(latestShutdownTime_, "") };
    inline BatchUpdateSystemRunningPlanRequest& setLatestShutdownTime(string latestShutdownTime) { DARABONBA_PTR_SET_VALUE(latestShutdownTime_, latestShutdownTime) };


    // maxCarbonDioxide Field Functions 
    bool hasMaxCarbonDioxide() const { return this->maxCarbonDioxide_ != nullptr;};
    void deleteMaxCarbonDioxide() { this->maxCarbonDioxide_ = nullptr;};
    inline double getMaxCarbonDioxide() const { DARABONBA_PTR_GET_DEFAULT(maxCarbonDioxide_, 0.0) };
    inline BatchUpdateSystemRunningPlanRequest& setMaxCarbonDioxide(double maxCarbonDioxide) { DARABONBA_PTR_SET_VALUE(maxCarbonDioxide_, maxCarbonDioxide) };


    // maxTem Field Functions 
    bool hasMaxTem() const { return this->maxTem_ != nullptr;};
    void deleteMaxTem() { this->maxTem_ = nullptr;};
    inline double getMaxTem() const { DARABONBA_PTR_GET_DEFAULT(maxTem_, 0.0) };
    inline BatchUpdateSystemRunningPlanRequest& setMaxTem(double maxTem) { DARABONBA_PTR_SET_VALUE(maxTem_, maxTem) };


    // minTem Field Functions 
    bool hasMinTem() const { return this->minTem_ != nullptr;};
    void deleteMinTem() { this->minTem_ = nullptr;};
    inline double getMinTem() const { DARABONBA_PTR_GET_DEFAULT(minTem_, 0.0) };
    inline BatchUpdateSystemRunningPlanRequest& setMinTem(double minTem) { DARABONBA_PTR_SET_VALUE(minTem_, minTem) };


    // seasonMode Field Functions 
    bool hasSeasonMode() const { return this->seasonMode_ != nullptr;};
    void deleteSeasonMode() { this->seasonMode_ = nullptr;};
    inline int32_t getSeasonMode() const { DARABONBA_PTR_GET_DEFAULT(seasonMode_, 0) };
    inline BatchUpdateSystemRunningPlanRequest& setSeasonMode(int32_t seasonMode) { DARABONBA_PTR_SET_VALUE(seasonMode_, seasonMode) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline BatchUpdateSystemRunningPlanRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // systemId Field Functions 
    bool hasSystemId() const { return this->systemId_ != nullptr;};
    void deleteSystemId() { this->systemId_ = nullptr;};
    inline string getSystemId() const { DARABONBA_PTR_GET_DEFAULT(systemId_, "") };
    inline BatchUpdateSystemRunningPlanRequest& setSystemId(string systemId) { DARABONBA_PTR_SET_VALUE(systemId_, systemId) };


    // workingEndTime Field Functions 
    bool hasWorkingEndTime() const { return this->workingEndTime_ != nullptr;};
    void deleteWorkingEndTime() { this->workingEndTime_ = nullptr;};
    inline string getWorkingEndTime() const { DARABONBA_PTR_GET_DEFAULT(workingEndTime_, "") };
    inline BatchUpdateSystemRunningPlanRequest& setWorkingEndTime(string workingEndTime) { DARABONBA_PTR_SET_VALUE(workingEndTime_, workingEndTime) };


    // workingStartTime Field Functions 
    bool hasWorkingStartTime() const { return this->workingStartTime_ != nullptr;};
    void deleteWorkingStartTime() { this->workingStartTime_ = nullptr;};
    inline string getWorkingStartTime() const { DARABONBA_PTR_GET_DEFAULT(workingStartTime_, "") };
    inline BatchUpdateSystemRunningPlanRequest& setWorkingStartTime(string workingStartTime) { DARABONBA_PTR_SET_VALUE(workingStartTime_, workingStartTime) };


  protected:
    shared_ptr<int32_t> controlType_ {};
    shared_ptr<int32_t> dateType_ {};
    shared_ptr<string> earliestStartupTime_ {};
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // This parameter is required.
    shared_ptr<string> factoryId_ {};
    shared_ptr<string> latestShutdownTime_ {};
    shared_ptr<double> maxCarbonDioxide_ {};
    shared_ptr<double> maxTem_ {};
    shared_ptr<double> minTem_ {};
    shared_ptr<int32_t> seasonMode_ {};
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // This parameter is required.
    shared_ptr<string> systemId_ {};
    shared_ptr<string> workingEndTime_ {};
    shared_ptr<string> workingStartTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
