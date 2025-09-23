// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBLOGFILESRESPONSEBODYSWITCHLISTITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBLOGFILESRESPONSEBODYSWITCHLISTITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems.hpp>
#include <alibabacloud/models/DescribeDBLogFilesResponseBodySwitchListItemsSwitchStepItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBLogFilesResponseBodySwitchListItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBLogFilesResponseBodySwitchListItems& obj) { 
      DARABONBA_PTR_TO_JSON(DBNodeCrashList, DBNodeCrashList_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EventFinishTime, eventFinishTime_);
      DARABONBA_PTR_TO_JSON(EventStartTime, eventStartTime_);
      DARABONBA_PTR_TO_JSON(FaultInjectionType, faultInjectionType_);
      DARABONBA_PTR_TO_JSON(SimulateListId, simulateListId_);
      DARABONBA_PTR_TO_JSON(SimulateMode, simulateMode_);
      DARABONBA_PTR_TO_JSON(SimulateStatus, simulateStatus_);
      DARABONBA_PTR_TO_JSON(SimulateTaskId, simulateTaskId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(SwitchLogItems, switchLogItems_);
      DARABONBA_PTR_TO_JSON(SwitchStepItems, switchStepItems_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBLogFilesResponseBodySwitchListItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DBNodeCrashList, DBNodeCrashList_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EventFinishTime, eventFinishTime_);
      DARABONBA_PTR_FROM_JSON(EventStartTime, eventStartTime_);
      DARABONBA_PTR_FROM_JSON(FaultInjectionType, faultInjectionType_);
      DARABONBA_PTR_FROM_JSON(SimulateListId, simulateListId_);
      DARABONBA_PTR_FROM_JSON(SimulateMode, simulateMode_);
      DARABONBA_PTR_FROM_JSON(SimulateStatus, simulateStatus_);
      DARABONBA_PTR_FROM_JSON(SimulateTaskId, simulateTaskId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(SwitchLogItems, switchLogItems_);
      DARABONBA_PTR_FROM_JSON(SwitchStepItems, switchStepItems_);
    };
    DescribeDBLogFilesResponseBodySwitchListItems() = default ;
    DescribeDBLogFilesResponseBodySwitchListItems(const DescribeDBLogFilesResponseBodySwitchListItems &) = default ;
    DescribeDBLogFilesResponseBodySwitchListItems(DescribeDBLogFilesResponseBodySwitchListItems &&) = default ;
    DescribeDBLogFilesResponseBodySwitchListItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBLogFilesResponseBodySwitchListItems() = default ;
    DescribeDBLogFilesResponseBodySwitchListItems& operator=(const DescribeDBLogFilesResponseBodySwitchListItems &) = default ;
    DescribeDBLogFilesResponseBodySwitchListItems& operator=(DescribeDBLogFilesResponseBodySwitchListItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBNodeCrashList_ != nullptr
        && this->endTime_ != nullptr && this->eventFinishTime_ != nullptr && this->eventStartTime_ != nullptr && this->faultInjectionType_ != nullptr && this->simulateListId_ != nullptr
        && this->simulateMode_ != nullptr && this->simulateStatus_ != nullptr && this->simulateTaskId_ != nullptr && this->startTime_ != nullptr && this->switchLogItems_ != nullptr
        && this->switchStepItems_ != nullptr; };
    // DBNodeCrashList Field Functions 
    bool hasDBNodeCrashList() const { return this->DBNodeCrashList_ != nullptr;};
    void deleteDBNodeCrashList() { this->DBNodeCrashList_ = nullptr;};
    inline const vector<string> & DBNodeCrashList() const { DARABONBA_PTR_GET_CONST(DBNodeCrashList_, vector<string>) };
    inline vector<string> DBNodeCrashList() { DARABONBA_PTR_GET(DBNodeCrashList_, vector<string>) };
    inline DescribeDBLogFilesResponseBodySwitchListItems& setDBNodeCrashList(const vector<string> & DBNodeCrashList) { DARABONBA_PTR_SET_VALUE(DBNodeCrashList_, DBNodeCrashList) };
    inline DescribeDBLogFilesResponseBodySwitchListItems& setDBNodeCrashList(vector<string> && DBNodeCrashList) { DARABONBA_PTR_SET_RVALUE(DBNodeCrashList_, DBNodeCrashList) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDBLogFilesResponseBodySwitchListItems& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventFinishTime Field Functions 
    bool hasEventFinishTime() const { return this->eventFinishTime_ != nullptr;};
    void deleteEventFinishTime() { this->eventFinishTime_ = nullptr;};
    inline string eventFinishTime() const { DARABONBA_PTR_GET_DEFAULT(eventFinishTime_, "") };
    inline DescribeDBLogFilesResponseBodySwitchListItems& setEventFinishTime(string eventFinishTime) { DARABONBA_PTR_SET_VALUE(eventFinishTime_, eventFinishTime) };


    // eventStartTime Field Functions 
    bool hasEventStartTime() const { return this->eventStartTime_ != nullptr;};
    void deleteEventStartTime() { this->eventStartTime_ = nullptr;};
    inline string eventStartTime() const { DARABONBA_PTR_GET_DEFAULT(eventStartTime_, "") };
    inline DescribeDBLogFilesResponseBodySwitchListItems& setEventStartTime(string eventStartTime) { DARABONBA_PTR_SET_VALUE(eventStartTime_, eventStartTime) };


    // faultInjectionType Field Functions 
    bool hasFaultInjectionType() const { return this->faultInjectionType_ != nullptr;};
    void deleteFaultInjectionType() { this->faultInjectionType_ = nullptr;};
    inline string faultInjectionType() const { DARABONBA_PTR_GET_DEFAULT(faultInjectionType_, "") };
    inline DescribeDBLogFilesResponseBodySwitchListItems& setFaultInjectionType(string faultInjectionType) { DARABONBA_PTR_SET_VALUE(faultInjectionType_, faultInjectionType) };


    // simulateListId Field Functions 
    bool hasSimulateListId() const { return this->simulateListId_ != nullptr;};
    void deleteSimulateListId() { this->simulateListId_ = nullptr;};
    inline string simulateListId() const { DARABONBA_PTR_GET_DEFAULT(simulateListId_, "") };
    inline DescribeDBLogFilesResponseBodySwitchListItems& setSimulateListId(string simulateListId) { DARABONBA_PTR_SET_VALUE(simulateListId_, simulateListId) };


    // simulateMode Field Functions 
    bool hasSimulateMode() const { return this->simulateMode_ != nullptr;};
    void deleteSimulateMode() { this->simulateMode_ = nullptr;};
    inline string simulateMode() const { DARABONBA_PTR_GET_DEFAULT(simulateMode_, "") };
    inline DescribeDBLogFilesResponseBodySwitchListItems& setSimulateMode(string simulateMode) { DARABONBA_PTR_SET_VALUE(simulateMode_, simulateMode) };


    // simulateStatus Field Functions 
    bool hasSimulateStatus() const { return this->simulateStatus_ != nullptr;};
    void deleteSimulateStatus() { this->simulateStatus_ = nullptr;};
    inline string simulateStatus() const { DARABONBA_PTR_GET_DEFAULT(simulateStatus_, "") };
    inline DescribeDBLogFilesResponseBodySwitchListItems& setSimulateStatus(string simulateStatus) { DARABONBA_PTR_SET_VALUE(simulateStatus_, simulateStatus) };


    // simulateTaskId Field Functions 
    bool hasSimulateTaskId() const { return this->simulateTaskId_ != nullptr;};
    void deleteSimulateTaskId() { this->simulateTaskId_ = nullptr;};
    inline string simulateTaskId() const { DARABONBA_PTR_GET_DEFAULT(simulateTaskId_, "") };
    inline DescribeDBLogFilesResponseBodySwitchListItems& setSimulateTaskId(string simulateTaskId) { DARABONBA_PTR_SET_VALUE(simulateTaskId_, simulateTaskId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDBLogFilesResponseBodySwitchListItems& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // switchLogItems Field Functions 
    bool hasSwitchLogItems() const { return this->switchLogItems_ != nullptr;};
    void deleteSwitchLogItems() { this->switchLogItems_ = nullptr;};
    inline const vector<Models::DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems> & switchLogItems() const { DARABONBA_PTR_GET_CONST(switchLogItems_, vector<Models::DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems>) };
    inline vector<Models::DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems> switchLogItems() { DARABONBA_PTR_GET(switchLogItems_, vector<Models::DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems>) };
    inline DescribeDBLogFilesResponseBodySwitchListItems& setSwitchLogItems(const vector<Models::DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems> & switchLogItems) { DARABONBA_PTR_SET_VALUE(switchLogItems_, switchLogItems) };
    inline DescribeDBLogFilesResponseBodySwitchListItems& setSwitchLogItems(vector<Models::DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems> && switchLogItems) { DARABONBA_PTR_SET_RVALUE(switchLogItems_, switchLogItems) };


    // switchStepItems Field Functions 
    bool hasSwitchStepItems() const { return this->switchStepItems_ != nullptr;};
    void deleteSwitchStepItems() { this->switchStepItems_ = nullptr;};
    inline const vector<Models::DescribeDBLogFilesResponseBodySwitchListItemsSwitchStepItems> & switchStepItems() const { DARABONBA_PTR_GET_CONST(switchStepItems_, vector<Models::DescribeDBLogFilesResponseBodySwitchListItemsSwitchStepItems>) };
    inline vector<Models::DescribeDBLogFilesResponseBodySwitchListItemsSwitchStepItems> switchStepItems() { DARABONBA_PTR_GET(switchStepItems_, vector<Models::DescribeDBLogFilesResponseBodySwitchListItemsSwitchStepItems>) };
    inline DescribeDBLogFilesResponseBodySwitchListItems& setSwitchStepItems(const vector<Models::DescribeDBLogFilesResponseBodySwitchListItemsSwitchStepItems> & switchStepItems) { DARABONBA_PTR_SET_VALUE(switchStepItems_, switchStepItems) };
    inline DescribeDBLogFilesResponseBodySwitchListItems& setSwitchStepItems(vector<Models::DescribeDBLogFilesResponseBodySwitchListItemsSwitchStepItems> && switchStepItems) { DARABONBA_PTR_SET_RVALUE(switchStepItems_, switchStepItems) };


  protected:
    std::shared_ptr<vector<string>> DBNodeCrashList_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> eventFinishTime_ = nullptr;
    std::shared_ptr<string> eventStartTime_ = nullptr;
    std::shared_ptr<string> faultInjectionType_ = nullptr;
    std::shared_ptr<string> simulateListId_ = nullptr;
    std::shared_ptr<string> simulateMode_ = nullptr;
    std::shared_ptr<string> simulateStatus_ = nullptr;
    std::shared_ptr<string> simulateTaskId_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems>> switchLogItems_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDBLogFilesResponseBodySwitchListItemsSwitchStepItems>> switchStepItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
