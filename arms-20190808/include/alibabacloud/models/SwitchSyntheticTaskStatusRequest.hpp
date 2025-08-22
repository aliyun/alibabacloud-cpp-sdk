// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHSYNTHETICTASKSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SWITCHSYNTHETICTASKSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SwitchSyntheticTaskStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchSyntheticTaskStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SwitchStatus, switchStatus_);
      DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchSyntheticTaskStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SwitchStatus, switchStatus_);
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
    };
    SwitchSyntheticTaskStatusRequest() = default ;
    SwitchSyntheticTaskStatusRequest(const SwitchSyntheticTaskStatusRequest &) = default ;
    SwitchSyntheticTaskStatusRequest(SwitchSyntheticTaskStatusRequest &&) = default ;
    SwitchSyntheticTaskStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchSyntheticTaskStatusRequest() = default ;
    SwitchSyntheticTaskStatusRequest& operator=(const SwitchSyntheticTaskStatusRequest &) = default ;
    SwitchSyntheticTaskStatusRequest& operator=(SwitchSyntheticTaskStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->switchStatus_ != nullptr
        && this->taskIds_ != nullptr; };
    // switchStatus Field Functions 
    bool hasSwitchStatus() const { return this->switchStatus_ != nullptr;};
    void deleteSwitchStatus() { this->switchStatus_ = nullptr;};
    inline int64_t switchStatus() const { DARABONBA_PTR_GET_DEFAULT(switchStatus_, 0L) };
    inline SwitchSyntheticTaskStatusRequest& setSwitchStatus(int64_t switchStatus) { DARABONBA_PTR_SET_VALUE(switchStatus_, switchStatus) };


    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline const vector<int64_t> & taskIds() const { DARABONBA_PTR_GET_CONST(taskIds_, vector<int64_t>) };
    inline vector<int64_t> taskIds() { DARABONBA_PTR_GET(taskIds_, vector<int64_t>) };
    inline SwitchSyntheticTaskStatusRequest& setTaskIds(const vector<int64_t> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
    inline SwitchSyntheticTaskStatusRequest& setTaskIds(vector<int64_t> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


  protected:
    // Specifies whether to start or stop the task. Valid values:
    // 
    // *   **0**: stops the task
    // *   **1**: starts the task
    std::shared_ptr<int64_t> switchStatus_ = nullptr;
    // The task IDs. You can specify up to 30 task IDs at a time.
    std::shared_ptr<vector<int64_t>> taskIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
