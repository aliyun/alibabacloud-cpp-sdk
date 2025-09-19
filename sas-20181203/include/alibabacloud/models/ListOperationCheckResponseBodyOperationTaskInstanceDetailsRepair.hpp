// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONCHECKRESPONSEBODYOPERATIONTASKINSTANCEDETAILSREPAIR_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONCHECKRESPONSEBODYOPERATIONTASKINSTANCEDETAILSREPAIR_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepairRepairConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepair : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepair& obj) { 
      DARABONBA_PTR_TO_JSON(OperateTime, operateTime_);
      DARABONBA_PTR_TO_JSON(RepairConfigs, repairConfigs_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusShowName, statusShowName_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepair& obj) { 
      DARABONBA_PTR_FROM_JSON(OperateTime, operateTime_);
      DARABONBA_PTR_FROM_JSON(RepairConfigs, repairConfigs_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusShowName, statusShowName_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepair() = default ;
    ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepair(const ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepair &) = default ;
    ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepair(ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepair &&) = default ;
    ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepair(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepair() = default ;
    ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepair& operator=(const ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepair &) = default ;
    ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepair& operator=(ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepair &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operateTime_ != nullptr
        && this->repairConfigs_ != nullptr && this->status_ != nullptr && this->statusShowName_ != nullptr && this->taskId_ != nullptr; };
    // operateTime Field Functions 
    bool hasOperateTime() const { return this->operateTime_ != nullptr;};
    void deleteOperateTime() { this->operateTime_ = nullptr;};
    inline int64_t operateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, 0L) };
    inline ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepair& setOperateTime(int64_t operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


    // repairConfigs Field Functions 
    bool hasRepairConfigs() const { return this->repairConfigs_ != nullptr;};
    void deleteRepairConfigs() { this->repairConfigs_ = nullptr;};
    inline const vector<Models::ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepairRepairConfigs> & repairConfigs() const { DARABONBA_PTR_GET_CONST(repairConfigs_, vector<Models::ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepairRepairConfigs>) };
    inline vector<Models::ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepairRepairConfigs> repairConfigs() { DARABONBA_PTR_GET(repairConfigs_, vector<Models::ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepairRepairConfigs>) };
    inline ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepair& setRepairConfigs(const vector<Models::ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepairRepairConfigs> & repairConfigs) { DARABONBA_PTR_SET_VALUE(repairConfigs_, repairConfigs) };
    inline ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepair& setRepairConfigs(vector<Models::ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepairRepairConfigs> && repairConfigs) { DARABONBA_PTR_SET_RVALUE(repairConfigs_, repairConfigs) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepair& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusShowName Field Functions 
    bool hasStatusShowName() const { return this->statusShowName_ != nullptr;};
    void deleteStatusShowName() { this->statusShowName_ = nullptr;};
    inline string statusShowName() const { DARABONBA_PTR_GET_DEFAULT(statusShowName_, "") };
    inline ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepair& setStatusShowName(string statusShowName) { DARABONBA_PTR_SET_VALUE(statusShowName_, statusShowName) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepair& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // Timestamp for processing the risk. Unit: milliseconds.
    std::shared_ptr<int64_t> operateTime_ = nullptr;
    // Fix the corresponding configuration information.
    std::shared_ptr<vector<Models::ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepairRepairConfigs>> repairConfigs_ = nullptr;
    // Status of the corresponding task.
    std::shared_ptr<string> status_ = nullptr;
    // Display name of the repair task status.
    std::shared_ptr<string> statusShowName_ = nullptr;
    // TaskId of the operation task.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
