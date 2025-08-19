// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPGRADESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUPGRADESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetUpgradeStatusResponseBodyUpgradeTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class GetUpgradeStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUpgradeStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(error_message, errorMessage_);
      DARABONBA_PTR_TO_JSON(precheck_report_id, precheckReportId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(upgrade_step, upgradeStep_);
      DARABONBA_PTR_TO_JSON(upgrade_task, upgradeTask_);
    };
    friend void from_json(const Darabonba::Json& j, GetUpgradeStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(error_message, errorMessage_);
      DARABONBA_PTR_FROM_JSON(precheck_report_id, precheckReportId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(upgrade_step, upgradeStep_);
      DARABONBA_PTR_FROM_JSON(upgrade_task, upgradeTask_);
    };
    GetUpgradeStatusResponseBody() = default ;
    GetUpgradeStatusResponseBody(const GetUpgradeStatusResponseBody &) = default ;
    GetUpgradeStatusResponseBody(GetUpgradeStatusResponseBody &&) = default ;
    GetUpgradeStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUpgradeStatusResponseBody() = default ;
    GetUpgradeStatusResponseBody& operator=(const GetUpgradeStatusResponseBody &) = default ;
    GetUpgradeStatusResponseBody& operator=(GetUpgradeStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorMessage_ != nullptr
        && this->precheckReportId_ != nullptr && this->status_ != nullptr && this->upgradeStep_ != nullptr && this->upgradeTask_ != nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetUpgradeStatusResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // precheckReportId Field Functions 
    bool hasPrecheckReportId() const { return this->precheckReportId_ != nullptr;};
    void deletePrecheckReportId() { this->precheckReportId_ = nullptr;};
    inline string precheckReportId() const { DARABONBA_PTR_GET_DEFAULT(precheckReportId_, "") };
    inline GetUpgradeStatusResponseBody& setPrecheckReportId(string precheckReportId) { DARABONBA_PTR_SET_VALUE(precheckReportId_, precheckReportId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetUpgradeStatusResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // upgradeStep Field Functions 
    bool hasUpgradeStep() const { return this->upgradeStep_ != nullptr;};
    void deleteUpgradeStep() { this->upgradeStep_ = nullptr;};
    inline string upgradeStep() const { DARABONBA_PTR_GET_DEFAULT(upgradeStep_, "") };
    inline GetUpgradeStatusResponseBody& setUpgradeStep(string upgradeStep) { DARABONBA_PTR_SET_VALUE(upgradeStep_, upgradeStep) };


    // upgradeTask Field Functions 
    bool hasUpgradeTask() const { return this->upgradeTask_ != nullptr;};
    void deleteUpgradeTask() { this->upgradeTask_ = nullptr;};
    inline const GetUpgradeStatusResponseBodyUpgradeTask & upgradeTask() const { DARABONBA_PTR_GET_CONST(upgradeTask_, GetUpgradeStatusResponseBodyUpgradeTask) };
    inline GetUpgradeStatusResponseBodyUpgradeTask upgradeTask() { DARABONBA_PTR_GET(upgradeTask_, GetUpgradeStatusResponseBodyUpgradeTask) };
    inline GetUpgradeStatusResponseBody& setUpgradeTask(const GetUpgradeStatusResponseBodyUpgradeTask & upgradeTask) { DARABONBA_PTR_SET_VALUE(upgradeTask_, upgradeTask) };
    inline GetUpgradeStatusResponseBody& setUpgradeTask(GetUpgradeStatusResponseBodyUpgradeTask && upgradeTask) { DARABONBA_PTR_SET_RVALUE(upgradeTask_, upgradeTask) };


  protected:
    // The error message returned during the update.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the precheck report.
    std::shared_ptr<string> precheckReportId_ = nullptr;
    // The status of the update. Valid values:
    // 
    // *   `success`: The update is successful.
    // *   `fail`: The update failed.
    // *   `pause`: The update is paused.
    // *   `running`: The update is in progress.
    std::shared_ptr<string> status_ = nullptr;
    // The current phase of the update. Valid values:
    // 
    // *   `not_start`: The update is not started.
    // *   `prechecking`: The precheck is in progress.
    // *   `upgrading`: The cluster is being updated.
    // *   `pause`: The update is paused.
    // *   `success`: The update is successful.
    std::shared_ptr<string> upgradeStep_ = nullptr;
    // The details of the update task.
    std::shared_ptr<GetUpgradeStatusResponseBodyUpgradeTask> upgradeTask_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
