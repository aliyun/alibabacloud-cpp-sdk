// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDDLPUBLISHRECORDSRESPONSEBODYDDLPUBLISHRECORDLISTPUBLISHTASKINFOLISTPUBLISHJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDDLPUBLISHRECORDSRESPONSEBODYDDLPUBLISHRECORDLISTPUBLISHTASKINFOLISTPUBLISHJOBLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList& obj) { 
      DARABONBA_PTR_TO_JSON(DBTaskGroupId, DBTaskGroupId_);
      DARABONBA_PTR_TO_JSON(ExecuteCount, executeCount_);
      DARABONBA_PTR_TO_JSON(Scripts, scripts_);
      DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TaskJobStatus, taskJobStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(DBTaskGroupId, DBTaskGroupId_);
      DARABONBA_PTR_FROM_JSON(ExecuteCount, executeCount_);
      DARABONBA_PTR_FROM_JSON(Scripts, scripts_);
      DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TaskJobStatus, taskJobStatus_);
    };
    ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList() = default ;
    ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList(const ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList &) = default ;
    ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList(ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList &&) = default ;
    ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList() = default ;
    ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList& operator=(const ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList &) = default ;
    ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList& operator=(ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBTaskGroupId_ == nullptr
        && return this->executeCount_ == nullptr && return this->scripts_ == nullptr && return this->statusDesc_ == nullptr && return this->tableName_ == nullptr && return this->taskJobStatus_ == nullptr; };
    // DBTaskGroupId Field Functions 
    bool hasDBTaskGroupId() const { return this->DBTaskGroupId_ != nullptr;};
    void deleteDBTaskGroupId() { this->DBTaskGroupId_ = nullptr;};
    inline int64_t DBTaskGroupId() const { DARABONBA_PTR_GET_DEFAULT(DBTaskGroupId_, 0L) };
    inline ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList& setDBTaskGroupId(int64_t DBTaskGroupId) { DARABONBA_PTR_SET_VALUE(DBTaskGroupId_, DBTaskGroupId) };


    // executeCount Field Functions 
    bool hasExecuteCount() const { return this->executeCount_ != nullptr;};
    void deleteExecuteCount() { this->executeCount_ = nullptr;};
    inline int64_t executeCount() const { DARABONBA_PTR_GET_DEFAULT(executeCount_, 0L) };
    inline ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList& setExecuteCount(int64_t executeCount) { DARABONBA_PTR_SET_VALUE(executeCount_, executeCount) };


    // scripts Field Functions 
    bool hasScripts() const { return this->scripts_ != nullptr;};
    void deleteScripts() { this->scripts_ = nullptr;};
    inline string scripts() const { DARABONBA_PTR_GET_DEFAULT(scripts_, "") };
    inline ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList& setScripts(string scripts) { DARABONBA_PTR_SET_VALUE(scripts_, scripts) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // taskJobStatus Field Functions 
    bool hasTaskJobStatus() const { return this->taskJobStatus_ != nullptr;};
    void deleteTaskJobStatus() { this->taskJobStatus_ = nullptr;};
    inline string taskJobStatus() const { DARABONBA_PTR_GET_DEFAULT(taskJobStatus_, "") };
    inline ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList& setTaskJobStatus(string taskJobStatus) { DARABONBA_PTR_SET_VALUE(taskJobStatus_, taskJobStatus) };


  protected:
    // The ID of the SQL task group.
    std::shared_ptr<int64_t> DBTaskGroupId_ = nullptr;
    // The number of SQL statements that are executed.
    std::shared_ptr<int64_t> executeCount_ = nullptr;
    // The script for data changes.
    std::shared_ptr<string> scripts_ = nullptr;
    // The description of the state.
    std::shared_ptr<string> statusDesc_ = nullptr;
    // The name of the table after the change.
    std::shared_ptr<string> tableName_ = nullptr;
    // The state of the publishing task. Valid values:
    // 
    // *   **NONE**: The state of the task is unknown.
    // *   **SUCCESS**: The task is successful.
    // *   **FAIL**: The task fails.
    std::shared_ptr<string> taskJobStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
