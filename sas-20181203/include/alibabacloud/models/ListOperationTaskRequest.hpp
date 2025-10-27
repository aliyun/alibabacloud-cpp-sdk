// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOperationTaskRequestOperationTaskInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListOperationTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(OperationTaskInstances, operationTaskInstances_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Statuses, statuses_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(OperationTaskInstances, operationTaskInstances_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Statuses, statuses_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListOperationTaskRequest() = default ;
    ListOperationTaskRequest(const ListOperationTaskRequest &) = default ;
    ListOperationTaskRequest(ListOperationTaskRequest &&) = default ;
    ListOperationTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationTaskRequest() = default ;
    ListOperationTaskRequest& operator=(const ListOperationTaskRequest &) = default ;
    ListOperationTaskRequest& operator=(ListOperationTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkId_ == nullptr
        && return this->currentPage_ == nullptr && return this->lang_ == nullptr && return this->operationTaskInstances_ == nullptr && return this->pageSize_ == nullptr && return this->statuses_ == nullptr
        && return this->taskId_ == nullptr && return this->type_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline ListOperationTaskRequest& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListOperationTaskRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListOperationTaskRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // operationTaskInstances Field Functions 
    bool hasOperationTaskInstances() const { return this->operationTaskInstances_ != nullptr;};
    void deleteOperationTaskInstances() { this->operationTaskInstances_ = nullptr;};
    inline const vector<ListOperationTaskRequestOperationTaskInstances> & operationTaskInstances() const { DARABONBA_PTR_GET_CONST(operationTaskInstances_, vector<ListOperationTaskRequestOperationTaskInstances>) };
    inline vector<ListOperationTaskRequestOperationTaskInstances> operationTaskInstances() { DARABONBA_PTR_GET(operationTaskInstances_, vector<ListOperationTaskRequestOperationTaskInstances>) };
    inline ListOperationTaskRequest& setOperationTaskInstances(const vector<ListOperationTaskRequestOperationTaskInstances> & operationTaskInstances) { DARABONBA_PTR_SET_VALUE(operationTaskInstances_, operationTaskInstances) };
    inline ListOperationTaskRequest& setOperationTaskInstances(vector<ListOperationTaskRequestOperationTaskInstances> && operationTaskInstances) { DARABONBA_PTR_SET_RVALUE(operationTaskInstances_, operationTaskInstances) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOperationTaskRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // statuses Field Functions 
    bool hasStatuses() const { return this->statuses_ != nullptr;};
    void deleteStatuses() { this->statuses_ = nullptr;};
    inline const vector<string> & statuses() const { DARABONBA_PTR_GET_CONST(statuses_, vector<string>) };
    inline vector<string> statuses() { DARABONBA_PTR_GET(statuses_, vector<string>) };
    inline ListOperationTaskRequest& setStatuses(const vector<string> & statuses) { DARABONBA_PTR_SET_VALUE(statuses_, statuses) };
    inline ListOperationTaskRequest& setStatuses(vector<string> && statuses) { DARABONBA_PTR_SET_RVALUE(statuses_, statuses) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListOperationTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListOperationTaskRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the check item.
    // 
    // > You can call the [ListCheckResult](~~ListCheckResult~~) API to obtain the check item ID.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // The page number to display in a paginated query.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Set the language type for the request and response messages. The default value is **zh**. Values:
    // 
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The instance information of the operation tasks to be queried.
    std::shared_ptr<vector<ListOperationTaskRequestOperationTaskInstances>> operationTaskInstances_ = nullptr;
    // The maximum number of items to display per page in a paginated query.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // A list of task statuses. Multiple statuses should be separated by commas (,). Values:
    // 
    // - **INIT**: Initialization
    // - **FAIL**: Processing failed
    // - **THROTTLING**: Repairing concurrently
    // - **IN_BACKUP**: Backing up
    // - **BACKED_UP**: Backed up
    // - **BACKUP_FAIL**: Backup failed
    // - **REPAIRING**: Repairing
    // - **REPAIR_SUCCESS**: Repair succeeded
    // - **REPAIR_FAIL**: Repair failed
    // - **REPAIR_SUCCESS_VERIFYING**: Verifying repair success
    // - **REPAIR_SUCCESS_UNVERIFIED**: Repair success verification failed
    // - **REPAIR_SUCCESS_VERIFIED**: Repair success verified
    // - **REPAIR_RE_EXECUTE**: Re-executing repair
    // - **ROLL_BACKING**: Rolling back
    // - **ROLL_BACKED**: Rolled back
    // - **ROLL_BACK_FAIL**: Rollback failed
    // - **ROLL_BACK_INIT**: Rollback initiated
    // - **ROLL_BACK_VERIFYING**: Verifying rollback success
    // - **ROLL_BACK_UNVERIFIED**: Rollback success verification failed
    // - **ROLL_BACK_VERIFIED**: Rollback success verified
    std::shared_ptr<vector<string>> statuses_ = nullptr;
    // The ID of the task to be queried.
    std::shared_ptr<string> taskId_ = nullptr;
    // The type of operation task to be queried:
    // - REPAIR: Repair
    // - ROLLBACK: Rollback
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
