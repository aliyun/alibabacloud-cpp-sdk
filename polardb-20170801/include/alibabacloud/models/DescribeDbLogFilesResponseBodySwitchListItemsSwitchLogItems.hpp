// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBLOGFILESRESPONSEBODYSWITCHLISTITEMSSWITCHLOGITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBLOGFILESRESPONSEBODYSWITCHLISTITEMSSWITCHLOGITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItemsSwitchStepItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DstDbType, dstDbType_);
      DARABONBA_PTR_TO_JSON(EventFinishTime, eventFinishTime_);
      DARABONBA_PTR_TO_JSON(EventStartTime, eventStartTime_);
      DARABONBA_PTR_TO_JSON(SimulateListId, simulateListId_);
      DARABONBA_PTR_TO_JSON(SimulateLogId, simulateLogId_);
      DARABONBA_PTR_TO_JSON(SimulateStatus, simulateStatus_);
      DARABONBA_PTR_TO_JSON(SrcDbType, srcDbType_);
      DARABONBA_PTR_TO_JSON(SwitchStepItems, switchStepItems_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DstDbType, dstDbType_);
      DARABONBA_PTR_FROM_JSON(EventFinishTime, eventFinishTime_);
      DARABONBA_PTR_FROM_JSON(EventStartTime, eventStartTime_);
      DARABONBA_PTR_FROM_JSON(SimulateListId, simulateListId_);
      DARABONBA_PTR_FROM_JSON(SimulateLogId, simulateLogId_);
      DARABONBA_PTR_FROM_JSON(SimulateStatus, simulateStatus_);
      DARABONBA_PTR_FROM_JSON(SrcDbType, srcDbType_);
      DARABONBA_PTR_FROM_JSON(SwitchStepItems, switchStepItems_);
    };
    DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems() = default ;
    DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems(const DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems &) = default ;
    DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems(DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems &&) = default ;
    DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems() = default ;
    DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems& operator=(const DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems &) = default ;
    DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems& operator=(DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->dstDbType_ == nullptr && return this->eventFinishTime_ == nullptr && return this->eventStartTime_ == nullptr && return this->simulateListId_ == nullptr && return this->simulateLogId_ == nullptr
        && return this->simulateStatus_ == nullptr && return this->srcDbType_ == nullptr && return this->switchStepItems_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // dstDbType Field Functions 
    bool hasDstDbType() const { return this->dstDbType_ != nullptr;};
    void deleteDstDbType() { this->dstDbType_ = nullptr;};
    inline string dstDbType() const { DARABONBA_PTR_GET_DEFAULT(dstDbType_, "") };
    inline DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems& setDstDbType(string dstDbType) { DARABONBA_PTR_SET_VALUE(dstDbType_, dstDbType) };


    // eventFinishTime Field Functions 
    bool hasEventFinishTime() const { return this->eventFinishTime_ != nullptr;};
    void deleteEventFinishTime() { this->eventFinishTime_ = nullptr;};
    inline string eventFinishTime() const { DARABONBA_PTR_GET_DEFAULT(eventFinishTime_, "") };
    inline DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems& setEventFinishTime(string eventFinishTime) { DARABONBA_PTR_SET_VALUE(eventFinishTime_, eventFinishTime) };


    // eventStartTime Field Functions 
    bool hasEventStartTime() const { return this->eventStartTime_ != nullptr;};
    void deleteEventStartTime() { this->eventStartTime_ = nullptr;};
    inline string eventStartTime() const { DARABONBA_PTR_GET_DEFAULT(eventStartTime_, "") };
    inline DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems& setEventStartTime(string eventStartTime) { DARABONBA_PTR_SET_VALUE(eventStartTime_, eventStartTime) };


    // simulateListId Field Functions 
    bool hasSimulateListId() const { return this->simulateListId_ != nullptr;};
    void deleteSimulateListId() { this->simulateListId_ = nullptr;};
    inline string simulateListId() const { DARABONBA_PTR_GET_DEFAULT(simulateListId_, "") };
    inline DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems& setSimulateListId(string simulateListId) { DARABONBA_PTR_SET_VALUE(simulateListId_, simulateListId) };


    // simulateLogId Field Functions 
    bool hasSimulateLogId() const { return this->simulateLogId_ != nullptr;};
    void deleteSimulateLogId() { this->simulateLogId_ = nullptr;};
    inline string simulateLogId() const { DARABONBA_PTR_GET_DEFAULT(simulateLogId_, "") };
    inline DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems& setSimulateLogId(string simulateLogId) { DARABONBA_PTR_SET_VALUE(simulateLogId_, simulateLogId) };


    // simulateStatus Field Functions 
    bool hasSimulateStatus() const { return this->simulateStatus_ != nullptr;};
    void deleteSimulateStatus() { this->simulateStatus_ = nullptr;};
    inline string simulateStatus() const { DARABONBA_PTR_GET_DEFAULT(simulateStatus_, "") };
    inline DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems& setSimulateStatus(string simulateStatus) { DARABONBA_PTR_SET_VALUE(simulateStatus_, simulateStatus) };


    // srcDbType Field Functions 
    bool hasSrcDbType() const { return this->srcDbType_ != nullptr;};
    void deleteSrcDbType() { this->srcDbType_ = nullptr;};
    inline string srcDbType() const { DARABONBA_PTR_GET_DEFAULT(srcDbType_, "") };
    inline DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems& setSrcDbType(string srcDbType) { DARABONBA_PTR_SET_VALUE(srcDbType_, srcDbType) };


    // switchStepItems Field Functions 
    bool hasSwitchStepItems() const { return this->switchStepItems_ != nullptr;};
    void deleteSwitchStepItems() { this->switchStepItems_ = nullptr;};
    inline const vector<Models::DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItemsSwitchStepItems> & switchStepItems() const { DARABONBA_PTR_GET_CONST(switchStepItems_, vector<Models::DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItemsSwitchStepItems>) };
    inline vector<Models::DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItemsSwitchStepItems> switchStepItems() { DARABONBA_PTR_GET(switchStepItems_, vector<Models::DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItemsSwitchStepItems>) };
    inline DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems& setSwitchStepItems(const vector<Models::DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItemsSwitchStepItems> & switchStepItems) { DARABONBA_PTR_SET_VALUE(switchStepItems_, switchStepItems) };
    inline DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItems& setSwitchStepItems(vector<Models::DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItemsSwitchStepItems> && switchStepItems) { DARABONBA_PTR_SET_RVALUE(switchStepItems_, switchStepItems) };


  protected:
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<string> dstDbType_ = nullptr;
    std::shared_ptr<string> eventFinishTime_ = nullptr;
    std::shared_ptr<string> eventStartTime_ = nullptr;
    std::shared_ptr<string> simulateListId_ = nullptr;
    std::shared_ptr<string> simulateLogId_ = nullptr;
    std::shared_ptr<string> simulateStatus_ = nullptr;
    std::shared_ptr<string> srcDbType_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDBLogFilesResponseBodySwitchListItemsSwitchLogItemsSwitchStepItems>> switchStepItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
