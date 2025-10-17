// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPSLIFECYCLESTRATEGYRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPSLIFECYCLESTRATEGYRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApsLifecycleStrategyResponseBodyItemsOperationTables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ListApsLifecycleStrategyResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApsLifecycleStrategyResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(ApsJobId, apsJobId_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(OperationTables, operationTables_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StrategyDatabases, strategyDatabases_);
      DARABONBA_PTR_TO_JSON(StrategyDesc, strategyDesc_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_TO_JSON(StrategyTables, strategyTables_);
      DARABONBA_PTR_TO_JSON(StrategyType, strategyType_);
      DARABONBA_PTR_TO_JSON(StrategyValue, strategyValue_);
    };
    friend void from_json(const Darabonba::Json& j, ListApsLifecycleStrategyResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ApsJobId, apsJobId_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(OperationTables, operationTables_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StrategyDatabases, strategyDatabases_);
      DARABONBA_PTR_FROM_JSON(StrategyDesc, strategyDesc_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_FROM_JSON(StrategyTables, strategyTables_);
      DARABONBA_PTR_FROM_JSON(StrategyType, strategyType_);
      DARABONBA_PTR_FROM_JSON(StrategyValue, strategyValue_);
    };
    ListApsLifecycleStrategyResponseBodyItems() = default ;
    ListApsLifecycleStrategyResponseBodyItems(const ListApsLifecycleStrategyResponseBodyItems &) = default ;
    ListApsLifecycleStrategyResponseBodyItems(ListApsLifecycleStrategyResponseBodyItems &&) = default ;
    ListApsLifecycleStrategyResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApsLifecycleStrategyResponseBodyItems() = default ;
    ListApsLifecycleStrategyResponseBodyItems& operator=(const ListApsLifecycleStrategyResponseBodyItems &) = default ;
    ListApsLifecycleStrategyResponseBodyItems& operator=(ListApsLifecycleStrategyResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apsJobId_ == nullptr
        && return this->createdTime_ == nullptr && return this->DBClusterId_ == nullptr && return this->modifiedTime_ == nullptr && return this->operationTables_ == nullptr && return this->status_ == nullptr
        && return this->strategyDatabases_ == nullptr && return this->strategyDesc_ == nullptr && return this->strategyName_ == nullptr && return this->strategyTables_ == nullptr && return this->strategyType_ == nullptr
        && return this->strategyValue_ == nullptr; };
    // apsJobId Field Functions 
    bool hasApsJobId() const { return this->apsJobId_ != nullptr;};
    void deleteApsJobId() { this->apsJobId_ = nullptr;};
    inline string apsJobId() const { DARABONBA_PTR_GET_DEFAULT(apsJobId_, "") };
    inline ListApsLifecycleStrategyResponseBodyItems& setApsJobId(string apsJobId) { DARABONBA_PTR_SET_VALUE(apsJobId_, apsJobId) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline ListApsLifecycleStrategyResponseBodyItems& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ListApsLifecycleStrategyResponseBodyItems& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline ListApsLifecycleStrategyResponseBodyItems& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // operationTables Field Functions 
    bool hasOperationTables() const { return this->operationTables_ != nullptr;};
    void deleteOperationTables() { this->operationTables_ = nullptr;};
    inline const vector<Models::ListApsLifecycleStrategyResponseBodyItemsOperationTables> & operationTables() const { DARABONBA_PTR_GET_CONST(operationTables_, vector<Models::ListApsLifecycleStrategyResponseBodyItemsOperationTables>) };
    inline vector<Models::ListApsLifecycleStrategyResponseBodyItemsOperationTables> operationTables() { DARABONBA_PTR_GET(operationTables_, vector<Models::ListApsLifecycleStrategyResponseBodyItemsOperationTables>) };
    inline ListApsLifecycleStrategyResponseBodyItems& setOperationTables(const vector<Models::ListApsLifecycleStrategyResponseBodyItemsOperationTables> & operationTables) { DARABONBA_PTR_SET_VALUE(operationTables_, operationTables) };
    inline ListApsLifecycleStrategyResponseBodyItems& setOperationTables(vector<Models::ListApsLifecycleStrategyResponseBodyItemsOperationTables> && operationTables) { DARABONBA_PTR_SET_RVALUE(operationTables_, operationTables) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListApsLifecycleStrategyResponseBodyItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strategyDatabases Field Functions 
    bool hasStrategyDatabases() const { return this->strategyDatabases_ != nullptr;};
    void deleteStrategyDatabases() { this->strategyDatabases_ = nullptr;};
    inline int64_t strategyDatabases() const { DARABONBA_PTR_GET_DEFAULT(strategyDatabases_, 0L) };
    inline ListApsLifecycleStrategyResponseBodyItems& setStrategyDatabases(int64_t strategyDatabases) { DARABONBA_PTR_SET_VALUE(strategyDatabases_, strategyDatabases) };


    // strategyDesc Field Functions 
    bool hasStrategyDesc() const { return this->strategyDesc_ != nullptr;};
    void deleteStrategyDesc() { this->strategyDesc_ = nullptr;};
    inline string strategyDesc() const { DARABONBA_PTR_GET_DEFAULT(strategyDesc_, "") };
    inline ListApsLifecycleStrategyResponseBodyItems& setStrategyDesc(string strategyDesc) { DARABONBA_PTR_SET_VALUE(strategyDesc_, strategyDesc) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string strategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline ListApsLifecycleStrategyResponseBodyItems& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


    // strategyTables Field Functions 
    bool hasStrategyTables() const { return this->strategyTables_ != nullptr;};
    void deleteStrategyTables() { this->strategyTables_ = nullptr;};
    inline int64_t strategyTables() const { DARABONBA_PTR_GET_DEFAULT(strategyTables_, 0L) };
    inline ListApsLifecycleStrategyResponseBodyItems& setStrategyTables(int64_t strategyTables) { DARABONBA_PTR_SET_VALUE(strategyTables_, strategyTables) };


    // strategyType Field Functions 
    bool hasStrategyType() const { return this->strategyType_ != nullptr;};
    void deleteStrategyType() { this->strategyType_ = nullptr;};
    inline string strategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, "") };
    inline ListApsLifecycleStrategyResponseBodyItems& setStrategyType(string strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


    // strategyValue Field Functions 
    bool hasStrategyValue() const { return this->strategyValue_ != nullptr;};
    void deleteStrategyValue() { this->strategyValue_ = nullptr;};
    inline string strategyValue() const { DARABONBA_PTR_GET_DEFAULT(strategyValue_, "") };
    inline ListApsLifecycleStrategyResponseBodyItems& setStrategyValue(string strategyValue) { DARABONBA_PTR_SET_VALUE(strategyValue_, strategyValue) };


  protected:
    // The job ID.
    std::shared_ptr<string> apsJobId_ = nullptr;
    // The time when the policy was created.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The time when the policy was modified.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The operation tables.
    std::shared_ptr<vector<Models::ListApsLifecycleStrategyResponseBodyItemsOperationTables>> operationTables_ = nullptr;
    // The status of the lifecycle management policy. Valid values:
    // 
    // 1.  on: enables the current policy.
    // 2.  off: disables the current policy.
    std::shared_ptr<string> status_ = nullptr;
    // The number of databases that are managed during the lifecycle management.
    std::shared_ptr<int64_t> strategyDatabases_ = nullptr;
    // The description of the lifecycle management policy.
    std::shared_ptr<string> strategyDesc_ = nullptr;
    // The name of the lifecycle management policy.
    std::shared_ptr<string> strategyName_ = nullptr;
    // The number of tables that are managed during the lifecycle management.
    std::shared_ptr<int64_t> strategyTables_ = nullptr;
    // The type of the lifecycle management policy.
    std::shared_ptr<string> strategyType_ = nullptr;
    // The value of the lifecycle management policy.
    std::shared_ptr<string> strategyValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
