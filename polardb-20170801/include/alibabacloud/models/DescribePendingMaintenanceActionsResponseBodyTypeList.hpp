// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPENDINGMAINTENANCEACTIONSRESPONSEBODYTYPELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPENDINGMAINTENANCEACTIONSRESPONSEBODYTYPELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePendingMaintenanceActionsResponseBodyTypeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePendingMaintenanceActionsResponseBodyTypeList& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePendingMaintenanceActionsResponseBodyTypeList& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    DescribePendingMaintenanceActionsResponseBodyTypeList() = default ;
    DescribePendingMaintenanceActionsResponseBodyTypeList(const DescribePendingMaintenanceActionsResponseBodyTypeList &) = default ;
    DescribePendingMaintenanceActionsResponseBodyTypeList(DescribePendingMaintenanceActionsResponseBodyTypeList &&) = default ;
    DescribePendingMaintenanceActionsResponseBodyTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePendingMaintenanceActionsResponseBodyTypeList() = default ;
    DescribePendingMaintenanceActionsResponseBodyTypeList& operator=(const DescribePendingMaintenanceActionsResponseBodyTypeList &) = default ;
    DescribePendingMaintenanceActionsResponseBodyTypeList& operator=(DescribePendingMaintenanceActionsResponseBodyTypeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->taskType_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribePendingMaintenanceActionsResponseBodyTypeList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribePendingMaintenanceActionsResponseBodyTypeList& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The number of pending events.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The task type of pending events. Valid values:
    // 
    // *   **DatabaseSoftwareUpgrading**: database software upgrades
    // *   **DatabaseHardwareMaintenance**: hardware maintenance and upgrades
    // *   **DatabaseStorageUpgrading**: database storage upgrades
    // *   **DatabaseProxyUpgrading**: minor version upgrades of the proxy
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
