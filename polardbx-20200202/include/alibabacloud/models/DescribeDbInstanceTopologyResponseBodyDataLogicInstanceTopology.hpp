// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCETOPOLOGYRESPONSEBODYDATALOGICINSTANCETOPOLOGY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCETOPOLOGYRESPONSEBODYDATALOGICINSTANCETOPOLOGY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems.hpp>
#include <alibabacloud/models/DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceConnType, DBInstanceConnType_);
      DARABONBA_PTR_TO_JSON(DBInstanceCreateTime, DBInstanceCreateTime_);
      DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_TO_JSON(DBInstanceStatusDescription, DBInstanceStatusDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(HistoryItems, historyItems_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
      DARABONBA_PTR_TO_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_TO_JSON(MaintainStartTime, maintainStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceConnType, DBInstanceConnType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceCreateTime, DBInstanceCreateTime_);
      DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStatusDescription, DBInstanceStatusDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(HistoryItems, historyItems_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
      DARABONBA_PTR_FROM_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_FROM_JSON(MaintainStartTime, maintainStartTime_);
    };
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology() = default ;
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology(const DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology &) = default ;
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology(DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology &&) = default ;
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology() = default ;
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology& operator=(const DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology &) = default ;
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology& operator=(DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceConnType_ == nullptr
        && return this->DBInstanceCreateTime_ == nullptr && return this->DBInstanceDescription_ == nullptr && return this->DBInstanceId_ == nullptr && return this->DBInstanceName_ == nullptr && return this->DBInstanceStatus_ == nullptr
        && return this->DBInstanceStatusDescription_ == nullptr && return this->DBInstanceStorage_ == nullptr && return this->engine_ == nullptr && return this->engineVersion_ == nullptr && return this->historyItems_ == nullptr
        && return this->items_ == nullptr && return this->lockMode_ == nullptr && return this->lockReason_ == nullptr && return this->maintainEndTime_ == nullptr && return this->maintainStartTime_ == nullptr; };
    // DBInstanceConnType Field Functions 
    bool hasDBInstanceConnType() const { return this->DBInstanceConnType_ != nullptr;};
    void deleteDBInstanceConnType() { this->DBInstanceConnType_ = nullptr;};
    inline string DBInstanceConnType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceConnType_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology& setDBInstanceConnType(string DBInstanceConnType) { DARABONBA_PTR_SET_VALUE(DBInstanceConnType_, DBInstanceConnType) };


    // DBInstanceCreateTime Field Functions 
    bool hasDBInstanceCreateTime() const { return this->DBInstanceCreateTime_ != nullptr;};
    void deleteDBInstanceCreateTime() { this->DBInstanceCreateTime_ = nullptr;};
    inline string DBInstanceCreateTime() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceCreateTime_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology& setDBInstanceCreateTime(string DBInstanceCreateTime) { DARABONBA_PTR_SET_VALUE(DBInstanceCreateTime_, DBInstanceCreateTime) };


    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string DBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // DBInstanceStatus Field Functions 
    bool hasDBInstanceStatus() const { return this->DBInstanceStatus_ != nullptr;};
    void deleteDBInstanceStatus() { this->DBInstanceStatus_ = nullptr;};
    inline int32_t DBInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatus_, 0) };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology& setDBInstanceStatus(int32_t DBInstanceStatus) { DARABONBA_PTR_SET_VALUE(DBInstanceStatus_, DBInstanceStatus) };


    // DBInstanceStatusDescription Field Functions 
    bool hasDBInstanceStatusDescription() const { return this->DBInstanceStatusDescription_ != nullptr;};
    void deleteDBInstanceStatusDescription() { this->DBInstanceStatusDescription_ = nullptr;};
    inline string DBInstanceStatusDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatusDescription_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology& setDBInstanceStatusDescription(string DBInstanceStatusDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceStatusDescription_, DBInstanceStatusDescription) };


    // DBInstanceStorage Field Functions 
    bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
    void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
    inline int32_t DBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0) };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology& setDBInstanceStorage(int32_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // historyItems Field Functions 
    bool hasHistoryItems() const { return this->historyItems_ != nullptr;};
    void deleteHistoryItems() { this->historyItems_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems> & historyItems() const { DARABONBA_PTR_GET_CONST(historyItems_, vector<Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems>) };
    inline vector<Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems> historyItems() { DARABONBA_PTR_GET(historyItems_, vector<Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems>) };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology& setHistoryItems(const vector<Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems> & historyItems) { DARABONBA_PTR_SET_VALUE(historyItems_, historyItems) };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology& setHistoryItems(vector<Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems> && historyItems) { DARABONBA_PTR_SET_RVALUE(historyItems_, historyItems) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems>) };
    inline vector<Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems> items() { DARABONBA_PTR_GET(items_, vector<Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems>) };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology& setItems(const vector<Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology& setItems(vector<Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline int32_t lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, 0) };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology& setLockMode(int32_t lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string lockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


    // maintainEndTime Field Functions 
    bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
    void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
    inline string maintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


    // maintainStartTime Field Functions 
    bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
    void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
    inline string maintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


  protected:
    std::shared_ptr<string> DBInstanceConnType_ = nullptr;
    std::shared_ptr<string> DBInstanceCreateTime_ = nullptr;
    std::shared_ptr<string> DBInstanceDescription_ = nullptr;
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    std::shared_ptr<int32_t> DBInstanceStatus_ = nullptr;
    std::shared_ptr<string> DBInstanceStatusDescription_ = nullptr;
    std::shared_ptr<int32_t> DBInstanceStorage_ = nullptr;
    std::shared_ptr<string> engine_ = nullptr;
    std::shared_ptr<string> engineVersion_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems>> historyItems_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems>> items_ = nullptr;
    std::shared_ptr<int32_t> lockMode_ = nullptr;
    std::shared_ptr<string> lockReason_ = nullptr;
    std::shared_ptr<string> maintainEndTime_ = nullptr;
    std::shared_ptr<string> maintainStartTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
