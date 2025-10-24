// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSJOBSRESPONSEBODYDATAOBJECTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSJOBSRESPONSEBODYDATAOBJECTLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMmsJobsResponseBodyDataObjectListConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsJobsResponseBodyDataObjectList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsJobsResponseBodyDataObjectList& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(dbId, dbId_);
      DARABONBA_PTR_TO_JSON(dstDbName, dstDbName_);
      DARABONBA_PTR_TO_JSON(dstSchemaName, dstSchemaName_);
      DARABONBA_PTR_TO_JSON(eta, eta_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(sourceName, sourceName_);
      DARABONBA_PTR_TO_JSON(srcDbName, srcDbName_);
      DARABONBA_PTR_TO_JSON(srcSchemaName, srcSchemaName_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(stopped, stopped_);
      DARABONBA_PTR_TO_JSON(taskDone, taskDone_);
      DARABONBA_PTR_TO_JSON(taskNum, taskNum_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsJobsResponseBodyDataObjectList& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(dbId, dbId_);
      DARABONBA_PTR_FROM_JSON(dstDbName, dstDbName_);
      DARABONBA_PTR_FROM_JSON(dstSchemaName, dstSchemaName_);
      DARABONBA_PTR_FROM_JSON(eta, eta_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(sourceName, sourceName_);
      DARABONBA_PTR_FROM_JSON(srcDbName, srcDbName_);
      DARABONBA_PTR_FROM_JSON(srcSchemaName, srcSchemaName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(stopped, stopped_);
      DARABONBA_PTR_FROM_JSON(taskDone, taskDone_);
      DARABONBA_PTR_FROM_JSON(taskNum, taskNum_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListMmsJobsResponseBodyDataObjectList() = default ;
    ListMmsJobsResponseBodyDataObjectList(const ListMmsJobsResponseBodyDataObjectList &) = default ;
    ListMmsJobsResponseBodyDataObjectList(ListMmsJobsResponseBodyDataObjectList &&) = default ;
    ListMmsJobsResponseBodyDataObjectList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsJobsResponseBodyDataObjectList() = default ;
    ListMmsJobsResponseBodyDataObjectList& operator=(const ListMmsJobsResponseBodyDataObjectList &) = default ;
    ListMmsJobsResponseBodyDataObjectList& operator=(ListMmsJobsResponseBodyDataObjectList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->createTime_ == nullptr && return this->dbId_ == nullptr && return this->dstDbName_ == nullptr && return this->dstSchemaName_ == nullptr && return this->eta_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr && return this->sourceId_ == nullptr && return this->sourceName_ == nullptr && return this->srcDbName_ == nullptr
        && return this->srcSchemaName_ == nullptr && return this->status_ == nullptr && return this->stopped_ == nullptr && return this->taskDone_ == nullptr && return this->taskNum_ == nullptr
        && return this->type_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const Models::ListMmsJobsResponseBodyDataObjectListConfig & config() const { DARABONBA_PTR_GET_CONST(config_, Models::ListMmsJobsResponseBodyDataObjectListConfig) };
    inline Models::ListMmsJobsResponseBodyDataObjectListConfig config() { DARABONBA_PTR_GET(config_, Models::ListMmsJobsResponseBodyDataObjectListConfig) };
    inline ListMmsJobsResponseBodyDataObjectList& setConfig(const Models::ListMmsJobsResponseBodyDataObjectListConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline ListMmsJobsResponseBodyDataObjectList& setConfig(Models::ListMmsJobsResponseBodyDataObjectListConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListMmsJobsResponseBodyDataObjectList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline ListMmsJobsResponseBodyDataObjectList& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dstDbName Field Functions 
    bool hasDstDbName() const { return this->dstDbName_ != nullptr;};
    void deleteDstDbName() { this->dstDbName_ = nullptr;};
    inline string dstDbName() const { DARABONBA_PTR_GET_DEFAULT(dstDbName_, "") };
    inline ListMmsJobsResponseBodyDataObjectList& setDstDbName(string dstDbName) { DARABONBA_PTR_SET_VALUE(dstDbName_, dstDbName) };


    // dstSchemaName Field Functions 
    bool hasDstSchemaName() const { return this->dstSchemaName_ != nullptr;};
    void deleteDstSchemaName() { this->dstSchemaName_ = nullptr;};
    inline string dstSchemaName() const { DARABONBA_PTR_GET_DEFAULT(dstSchemaName_, "") };
    inline ListMmsJobsResponseBodyDataObjectList& setDstSchemaName(string dstSchemaName) { DARABONBA_PTR_SET_VALUE(dstSchemaName_, dstSchemaName) };


    // eta Field Functions 
    bool hasEta() const { return this->eta_ != nullptr;};
    void deleteEta() { this->eta_ = nullptr;};
    inline string eta() const { DARABONBA_PTR_GET_DEFAULT(eta_, "") };
    inline ListMmsJobsResponseBodyDataObjectList& setEta(string eta) { DARABONBA_PTR_SET_VALUE(eta_, eta) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListMmsJobsResponseBodyDataObjectList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMmsJobsResponseBodyDataObjectList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline int64_t sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
    inline ListMmsJobsResponseBodyDataObjectList& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceName Field Functions 
    bool hasSourceName() const { return this->sourceName_ != nullptr;};
    void deleteSourceName() { this->sourceName_ = nullptr;};
    inline string sourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
    inline ListMmsJobsResponseBodyDataObjectList& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


    // srcDbName Field Functions 
    bool hasSrcDbName() const { return this->srcDbName_ != nullptr;};
    void deleteSrcDbName() { this->srcDbName_ = nullptr;};
    inline string srcDbName() const { DARABONBA_PTR_GET_DEFAULT(srcDbName_, "") };
    inline ListMmsJobsResponseBodyDataObjectList& setSrcDbName(string srcDbName) { DARABONBA_PTR_SET_VALUE(srcDbName_, srcDbName) };


    // srcSchemaName Field Functions 
    bool hasSrcSchemaName() const { return this->srcSchemaName_ != nullptr;};
    void deleteSrcSchemaName() { this->srcSchemaName_ = nullptr;};
    inline string srcSchemaName() const { DARABONBA_PTR_GET_DEFAULT(srcSchemaName_, "") };
    inline ListMmsJobsResponseBodyDataObjectList& setSrcSchemaName(string srcSchemaName) { DARABONBA_PTR_SET_VALUE(srcSchemaName_, srcSchemaName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListMmsJobsResponseBodyDataObjectList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stopped Field Functions 
    bool hasStopped() const { return this->stopped_ != nullptr;};
    void deleteStopped() { this->stopped_ = nullptr;};
    inline bool stopped() const { DARABONBA_PTR_GET_DEFAULT(stopped_, false) };
    inline ListMmsJobsResponseBodyDataObjectList& setStopped(bool stopped) { DARABONBA_PTR_SET_VALUE(stopped_, stopped) };


    // taskDone Field Functions 
    bool hasTaskDone() const { return this->taskDone_ != nullptr;};
    void deleteTaskDone() { this->taskDone_ = nullptr;};
    inline int32_t taskDone() const { DARABONBA_PTR_GET_DEFAULT(taskDone_, 0) };
    inline ListMmsJobsResponseBodyDataObjectList& setTaskDone(int32_t taskDone) { DARABONBA_PTR_SET_VALUE(taskDone_, taskDone) };


    // taskNum Field Functions 
    bool hasTaskNum() const { return this->taskNum_ != nullptr;};
    void deleteTaskNum() { this->taskNum_ = nullptr;};
    inline int32_t taskNum() const { DARABONBA_PTR_GET_DEFAULT(taskNum_, 0) };
    inline ListMmsJobsResponseBodyDataObjectList& setTaskNum(int32_t taskNum) { DARABONBA_PTR_SET_VALUE(taskNum_, taskNum) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListMmsJobsResponseBodyDataObjectList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::ListMmsJobsResponseBodyDataObjectListConfig> config_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int64_t> dbId_ = nullptr;
    std::shared_ptr<string> dstDbName_ = nullptr;
    std::shared_ptr<string> dstSchemaName_ = nullptr;
    std::shared_ptr<string> eta_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> sourceId_ = nullptr;
    std::shared_ptr<string> sourceName_ = nullptr;
    std::shared_ptr<string> srcDbName_ = nullptr;
    std::shared_ptr<string> srcSchemaName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<bool> stopped_ = nullptr;
    std::shared_ptr<int32_t> taskDone_ = nullptr;
    std::shared_ptr<int32_t> taskNum_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
