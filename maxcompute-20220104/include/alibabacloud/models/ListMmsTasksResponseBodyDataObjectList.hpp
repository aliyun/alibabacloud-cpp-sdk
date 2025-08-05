// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSTASKSRESPONSEBODYDATAOBJECTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSTASKSRESPONSEBODYDATAOBJECTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsTasksResponseBodyDataObjectList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsTasksResponseBodyDataObjectList& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(dbId, dbId_);
      DARABONBA_PTR_TO_JSON(dstDbName, dstDbName_);
      DARABONBA_PTR_TO_JSON(dstSchemaName, dstSchemaName_);
      DARABONBA_PTR_TO_JSON(dstTableName, dstTableName_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(jobId, jobId_);
      DARABONBA_PTR_TO_JSON(jobName, jobName_);
      DARABONBA_PTR_TO_JSON(retriedTimes, retriedTimes_);
      DARABONBA_PTR_TO_JSON(running, running_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(sourceName, sourceName_);
      DARABONBA_PTR_TO_JSON(srcDbName, srcDbName_);
      DARABONBA_PTR_TO_JSON(srcSchemaName, srcSchemaName_);
      DARABONBA_PTR_TO_JSON(srcTableName, srcTableName_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(stopped, stopped_);
      DARABONBA_PTR_TO_JSON(tableId, tableId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsTasksResponseBodyDataObjectList& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(dbId, dbId_);
      DARABONBA_PTR_FROM_JSON(dstDbName, dstDbName_);
      DARABONBA_PTR_FROM_JSON(dstSchemaName, dstSchemaName_);
      DARABONBA_PTR_FROM_JSON(dstTableName, dstTableName_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(jobId, jobId_);
      DARABONBA_PTR_FROM_JSON(jobName, jobName_);
      DARABONBA_PTR_FROM_JSON(retriedTimes, retriedTimes_);
      DARABONBA_PTR_FROM_JSON(running, running_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(sourceName, sourceName_);
      DARABONBA_PTR_FROM_JSON(srcDbName, srcDbName_);
      DARABONBA_PTR_FROM_JSON(srcSchemaName, srcSchemaName_);
      DARABONBA_PTR_FROM_JSON(srcTableName, srcTableName_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(stopped, stopped_);
      DARABONBA_PTR_FROM_JSON(tableId, tableId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListMmsTasksResponseBodyDataObjectList() = default ;
    ListMmsTasksResponseBodyDataObjectList(const ListMmsTasksResponseBodyDataObjectList &) = default ;
    ListMmsTasksResponseBodyDataObjectList(ListMmsTasksResponseBodyDataObjectList &&) = default ;
    ListMmsTasksResponseBodyDataObjectList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsTasksResponseBodyDataObjectList() = default ;
    ListMmsTasksResponseBodyDataObjectList& operator=(const ListMmsTasksResponseBodyDataObjectList &) = default ;
    ListMmsTasksResponseBodyDataObjectList& operator=(ListMmsTasksResponseBodyDataObjectList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->dbId_ != nullptr && this->dstDbName_ != nullptr && this->dstSchemaName_ != nullptr && this->dstTableName_ != nullptr && this->endTime_ != nullptr
        && this->id_ != nullptr && this->jobId_ != nullptr && this->jobName_ != nullptr && this->retriedTimes_ != nullptr && this->running_ != nullptr
        && this->sourceId_ != nullptr && this->sourceName_ != nullptr && this->srcDbName_ != nullptr && this->srcSchemaName_ != nullptr && this->srcTableName_ != nullptr
        && this->startTime_ != nullptr && this->status_ != nullptr && this->stopped_ != nullptr && this->tableId_ != nullptr && this->type_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListMmsTasksResponseBodyDataObjectList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline ListMmsTasksResponseBodyDataObjectList& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dstDbName Field Functions 
    bool hasDstDbName() const { return this->dstDbName_ != nullptr;};
    void deleteDstDbName() { this->dstDbName_ = nullptr;};
    inline string dstDbName() const { DARABONBA_PTR_GET_DEFAULT(dstDbName_, "") };
    inline ListMmsTasksResponseBodyDataObjectList& setDstDbName(string dstDbName) { DARABONBA_PTR_SET_VALUE(dstDbName_, dstDbName) };


    // dstSchemaName Field Functions 
    bool hasDstSchemaName() const { return this->dstSchemaName_ != nullptr;};
    void deleteDstSchemaName() { this->dstSchemaName_ = nullptr;};
    inline string dstSchemaName() const { DARABONBA_PTR_GET_DEFAULT(dstSchemaName_, "") };
    inline ListMmsTasksResponseBodyDataObjectList& setDstSchemaName(string dstSchemaName) { DARABONBA_PTR_SET_VALUE(dstSchemaName_, dstSchemaName) };


    // dstTableName Field Functions 
    bool hasDstTableName() const { return this->dstTableName_ != nullptr;};
    void deleteDstTableName() { this->dstTableName_ = nullptr;};
    inline string dstTableName() const { DARABONBA_PTR_GET_DEFAULT(dstTableName_, "") };
    inline ListMmsTasksResponseBodyDataObjectList& setDstTableName(string dstTableName) { DARABONBA_PTR_SET_VALUE(dstTableName_, dstTableName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListMmsTasksResponseBodyDataObjectList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListMmsTasksResponseBodyDataObjectList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline ListMmsTasksResponseBodyDataObjectList& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline ListMmsTasksResponseBodyDataObjectList& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // retriedTimes Field Functions 
    bool hasRetriedTimes() const { return this->retriedTimes_ != nullptr;};
    void deleteRetriedTimes() { this->retriedTimes_ = nullptr;};
    inline int32_t retriedTimes() const { DARABONBA_PTR_GET_DEFAULT(retriedTimes_, 0) };
    inline ListMmsTasksResponseBodyDataObjectList& setRetriedTimes(int32_t retriedTimes) { DARABONBA_PTR_SET_VALUE(retriedTimes_, retriedTimes) };


    // running Field Functions 
    bool hasRunning() const { return this->running_ != nullptr;};
    void deleteRunning() { this->running_ = nullptr;};
    inline bool running() const { DARABONBA_PTR_GET_DEFAULT(running_, false) };
    inline ListMmsTasksResponseBodyDataObjectList& setRunning(bool running) { DARABONBA_PTR_SET_VALUE(running_, running) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline int64_t sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
    inline ListMmsTasksResponseBodyDataObjectList& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceName Field Functions 
    bool hasSourceName() const { return this->sourceName_ != nullptr;};
    void deleteSourceName() { this->sourceName_ = nullptr;};
    inline string sourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
    inline ListMmsTasksResponseBodyDataObjectList& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


    // srcDbName Field Functions 
    bool hasSrcDbName() const { return this->srcDbName_ != nullptr;};
    void deleteSrcDbName() { this->srcDbName_ = nullptr;};
    inline string srcDbName() const { DARABONBA_PTR_GET_DEFAULT(srcDbName_, "") };
    inline ListMmsTasksResponseBodyDataObjectList& setSrcDbName(string srcDbName) { DARABONBA_PTR_SET_VALUE(srcDbName_, srcDbName) };


    // srcSchemaName Field Functions 
    bool hasSrcSchemaName() const { return this->srcSchemaName_ != nullptr;};
    void deleteSrcSchemaName() { this->srcSchemaName_ = nullptr;};
    inline string srcSchemaName() const { DARABONBA_PTR_GET_DEFAULT(srcSchemaName_, "") };
    inline ListMmsTasksResponseBodyDataObjectList& setSrcSchemaName(string srcSchemaName) { DARABONBA_PTR_SET_VALUE(srcSchemaName_, srcSchemaName) };


    // srcTableName Field Functions 
    bool hasSrcTableName() const { return this->srcTableName_ != nullptr;};
    void deleteSrcTableName() { this->srcTableName_ = nullptr;};
    inline string srcTableName() const { DARABONBA_PTR_GET_DEFAULT(srcTableName_, "") };
    inline ListMmsTasksResponseBodyDataObjectList& setSrcTableName(string srcTableName) { DARABONBA_PTR_SET_VALUE(srcTableName_, srcTableName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListMmsTasksResponseBodyDataObjectList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListMmsTasksResponseBodyDataObjectList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stopped Field Functions 
    bool hasStopped() const { return this->stopped_ != nullptr;};
    void deleteStopped() { this->stopped_ = nullptr;};
    inline bool stopped() const { DARABONBA_PTR_GET_DEFAULT(stopped_, false) };
    inline ListMmsTasksResponseBodyDataObjectList& setStopped(bool stopped) { DARABONBA_PTR_SET_VALUE(stopped_, stopped) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline int64_t tableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, 0L) };
    inline ListMmsTasksResponseBodyDataObjectList& setTableId(int64_t tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListMmsTasksResponseBodyDataObjectList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int64_t> dbId_ = nullptr;
    std::shared_ptr<string> dstDbName_ = nullptr;
    std::shared_ptr<string> dstSchemaName_ = nullptr;
    std::shared_ptr<string> dstTableName_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int64_t> jobId_ = nullptr;
    std::shared_ptr<string> jobName_ = nullptr;
    std::shared_ptr<int32_t> retriedTimes_ = nullptr;
    std::shared_ptr<bool> running_ = nullptr;
    std::shared_ptr<int64_t> sourceId_ = nullptr;
    std::shared_ptr<string> sourceName_ = nullptr;
    std::shared_ptr<string> srcDbName_ = nullptr;
    std::shared_ptr<string> srcSchemaName_ = nullptr;
    std::shared_ptr<string> srcTableName_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<bool> stopped_ = nullptr;
    std::shared_ptr<int64_t> tableId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
