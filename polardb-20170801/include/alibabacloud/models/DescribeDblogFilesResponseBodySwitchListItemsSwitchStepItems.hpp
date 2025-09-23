// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBLOGFILESRESPONSEBODYSWITCHLISTITEMSSWITCHSTEPITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBLOGFILESRESPONSEBODYSWITCHLISTITEMSSWITCHSTEPITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBLogFilesResponseBodySwitchListItemsSwitchStepItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBLogFilesResponseBodySwitchListItemsSwitchStepItems& obj) { 
      DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(SimulatePhase, simulatePhase_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StepName, stepName_);
      DARABONBA_PTR_TO_JSON(TimeCost, timeCost_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBLogFilesResponseBodySwitchListItemsSwitchStepItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(SimulatePhase, simulatePhase_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StepName, stepName_);
      DARABONBA_PTR_FROM_JSON(TimeCost, timeCost_);
    };
    DescribeDBLogFilesResponseBodySwitchListItemsSwitchStepItems() = default ;
    DescribeDBLogFilesResponseBodySwitchListItemsSwitchStepItems(const DescribeDBLogFilesResponseBodySwitchListItemsSwitchStepItems &) = default ;
    DescribeDBLogFilesResponseBodySwitchListItemsSwitchStepItems(DescribeDBLogFilesResponseBodySwitchListItemsSwitchStepItems &&) = default ;
    DescribeDBLogFilesResponseBodySwitchListItemsSwitchStepItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBLogFilesResponseBodySwitchListItemsSwitchStepItems() = default ;
    DescribeDBLogFilesResponseBodySwitchListItemsSwitchStepItems& operator=(const DescribeDBLogFilesResponseBodySwitchListItemsSwitchStepItems &) = default ;
    DescribeDBLogFilesResponseBodySwitchListItemsSwitchStepItems& operator=(DescribeDBLogFilesResponseBodySwitchListItemsSwitchStepItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBNodeId_ != nullptr
        && this->endTime_ != nullptr && this->isSuccess_ != nullptr && this->simulatePhase_ != nullptr && this->startTime_ != nullptr && this->stepName_ != nullptr
        && this->timeCost_ != nullptr; };
    // DBNodeId Field Functions 
    bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
    void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
    inline string DBNodeId() const { DARABONBA_PTR_GET_DEFAULT(DBNodeId_, "") };
    inline DescribeDBLogFilesResponseBodySwitchListItemsSwitchStepItems& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDBLogFilesResponseBodySwitchListItemsSwitchStepItems& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline string isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, "") };
    inline DescribeDBLogFilesResponseBodySwitchListItemsSwitchStepItems& setIsSuccess(string isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // simulatePhase Field Functions 
    bool hasSimulatePhase() const { return this->simulatePhase_ != nullptr;};
    void deleteSimulatePhase() { this->simulatePhase_ = nullptr;};
    inline string simulatePhase() const { DARABONBA_PTR_GET_DEFAULT(simulatePhase_, "") };
    inline DescribeDBLogFilesResponseBodySwitchListItemsSwitchStepItems& setSimulatePhase(string simulatePhase) { DARABONBA_PTR_SET_VALUE(simulatePhase_, simulatePhase) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDBLogFilesResponseBodySwitchListItemsSwitchStepItems& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // stepName Field Functions 
    bool hasStepName() const { return this->stepName_ != nullptr;};
    void deleteStepName() { this->stepName_ = nullptr;};
    inline string stepName() const { DARABONBA_PTR_GET_DEFAULT(stepName_, "") };
    inline DescribeDBLogFilesResponseBodySwitchListItemsSwitchStepItems& setStepName(string stepName) { DARABONBA_PTR_SET_VALUE(stepName_, stepName) };


    // timeCost Field Functions 
    bool hasTimeCost() const { return this->timeCost_ != nullptr;};
    void deleteTimeCost() { this->timeCost_ = nullptr;};
    inline string timeCost() const { DARABONBA_PTR_GET_DEFAULT(timeCost_, "") };
    inline DescribeDBLogFilesResponseBodySwitchListItemsSwitchStepItems& setTimeCost(string timeCost) { DARABONBA_PTR_SET_VALUE(timeCost_, timeCost) };


  protected:
    std::shared_ptr<string> DBNodeId_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> isSuccess_ = nullptr;
    std::shared_ptr<string> simulatePhase_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> stepName_ = nullptr;
    std::shared_ptr<string> timeCost_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
