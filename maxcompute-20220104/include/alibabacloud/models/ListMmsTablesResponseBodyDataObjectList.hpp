// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSTABLESRESPONSEBODYDATAOBJECTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSTABLESRESPONSEBODYDATAOBJECTLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMmsTablesResponseBodyDataObjectListSchema.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsTablesResponseBodyDataObjectList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsTablesResponseBodyDataObjectList& obj) { 
      DARABONBA_PTR_TO_JSON(dbId, dbId_);
      DARABONBA_PTR_TO_JSON(dbName, dbName_);
      DARABONBA_PTR_TO_JSON(dstName, dstName_);
      DARABONBA_PTR_TO_JSON(dstProjectName, dstProjectName_);
      DARABONBA_PTR_TO_JSON(dstSchemaName, dstSchemaName_);
      DARABONBA_PTR_TO_JSON(extra, extra_);
      DARABONBA_PTR_TO_JSON(hasPartitions, hasPartitions_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(inputFormat, inputFormat_);
      DARABONBA_PTR_TO_JSON(lastDdlTime, lastDdlTime_);
      DARABONBA_PTR_TO_JSON(location, location_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(numRows, numRows_);
      DARABONBA_PTR_TO_JSON(outputFormat, outputFormat_);
      DARABONBA_PTR_TO_JSON(owner, owner_);
      DARABONBA_PTR_TO_JSON(partitions, partitions_);
      DARABONBA_PTR_TO_JSON(partitionsDoing, partitionsDoing_);
      DARABONBA_PTR_TO_JSON(partitionsDone, partitionsDone_);
      DARABONBA_PTR_TO_JSON(partitionsFailed, partitionsFailed_);
      DARABONBA_PTR_TO_JSON(schema, schema_);
      DARABONBA_PTR_TO_JSON(serde, serde_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(sourceName, sourceName_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsTablesResponseBodyDataObjectList& obj) { 
      DARABONBA_PTR_FROM_JSON(dbId, dbId_);
      DARABONBA_PTR_FROM_JSON(dbName, dbName_);
      DARABONBA_PTR_FROM_JSON(dstName, dstName_);
      DARABONBA_PTR_FROM_JSON(dstProjectName, dstProjectName_);
      DARABONBA_PTR_FROM_JSON(dstSchemaName, dstSchemaName_);
      DARABONBA_PTR_FROM_JSON(extra, extra_);
      DARABONBA_PTR_FROM_JSON(hasPartitions, hasPartitions_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(inputFormat, inputFormat_);
      DARABONBA_PTR_FROM_JSON(lastDdlTime, lastDdlTime_);
      DARABONBA_PTR_FROM_JSON(location, location_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(numRows, numRows_);
      DARABONBA_PTR_FROM_JSON(outputFormat, outputFormat_);
      DARABONBA_PTR_FROM_JSON(owner, owner_);
      DARABONBA_PTR_FROM_JSON(partitions, partitions_);
      DARABONBA_PTR_FROM_JSON(partitionsDoing, partitionsDoing_);
      DARABONBA_PTR_FROM_JSON(partitionsDone, partitionsDone_);
      DARABONBA_PTR_FROM_JSON(partitionsFailed, partitionsFailed_);
      DARABONBA_PTR_FROM_JSON(schema, schema_);
      DARABONBA_PTR_FROM_JSON(serde, serde_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(sourceName, sourceName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
    };
    ListMmsTablesResponseBodyDataObjectList() = default ;
    ListMmsTablesResponseBodyDataObjectList(const ListMmsTablesResponseBodyDataObjectList &) = default ;
    ListMmsTablesResponseBodyDataObjectList(ListMmsTablesResponseBodyDataObjectList &&) = default ;
    ListMmsTablesResponseBodyDataObjectList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsTablesResponseBodyDataObjectList() = default ;
    ListMmsTablesResponseBodyDataObjectList& operator=(const ListMmsTablesResponseBodyDataObjectList &) = default ;
    ListMmsTablesResponseBodyDataObjectList& operator=(ListMmsTablesResponseBodyDataObjectList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbId_ == nullptr
        && return this->dbName_ == nullptr && return this->dstName_ == nullptr && return this->dstProjectName_ == nullptr && return this->dstSchemaName_ == nullptr && return this->extra_ == nullptr
        && return this->hasPartitions_ == nullptr && return this->id_ == nullptr && return this->inputFormat_ == nullptr && return this->lastDdlTime_ == nullptr && return this->location_ == nullptr
        && return this->name_ == nullptr && return this->numRows_ == nullptr && return this->outputFormat_ == nullptr && return this->owner_ == nullptr && return this->partitions_ == nullptr
        && return this->partitionsDoing_ == nullptr && return this->partitionsDone_ == nullptr && return this->partitionsFailed_ == nullptr && return this->schema_ == nullptr && return this->serde_ == nullptr
        && return this->size_ == nullptr && return this->sourceId_ == nullptr && return this->sourceName_ == nullptr && return this->status_ == nullptr && return this->type_ == nullptr
        && return this->updated_ == nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline ListMmsTablesResponseBodyDataObjectList& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ListMmsTablesResponseBodyDataObjectList& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // dstName Field Functions 
    bool hasDstName() const { return this->dstName_ != nullptr;};
    void deleteDstName() { this->dstName_ = nullptr;};
    inline string dstName() const { DARABONBA_PTR_GET_DEFAULT(dstName_, "") };
    inline ListMmsTablesResponseBodyDataObjectList& setDstName(string dstName) { DARABONBA_PTR_SET_VALUE(dstName_, dstName) };


    // dstProjectName Field Functions 
    bool hasDstProjectName() const { return this->dstProjectName_ != nullptr;};
    void deleteDstProjectName() { this->dstProjectName_ = nullptr;};
    inline string dstProjectName() const { DARABONBA_PTR_GET_DEFAULT(dstProjectName_, "") };
    inline ListMmsTablesResponseBodyDataObjectList& setDstProjectName(string dstProjectName) { DARABONBA_PTR_SET_VALUE(dstProjectName_, dstProjectName) };


    // dstSchemaName Field Functions 
    bool hasDstSchemaName() const { return this->dstSchemaName_ != nullptr;};
    void deleteDstSchemaName() { this->dstSchemaName_ = nullptr;};
    inline string dstSchemaName() const { DARABONBA_PTR_GET_DEFAULT(dstSchemaName_, "") };
    inline ListMmsTablesResponseBodyDataObjectList& setDstSchemaName(string dstSchemaName) { DARABONBA_PTR_SET_VALUE(dstSchemaName_, dstSchemaName) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline ListMmsTablesResponseBodyDataObjectList& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // hasPartitions Field Functions 
    bool hasHasPartitions() const { return this->hasPartitions_ != nullptr;};
    void deleteHasPartitions() { this->hasPartitions_ = nullptr;};
    inline bool hasPartitions() const { DARABONBA_PTR_GET_DEFAULT(hasPartitions_, false) };
    inline ListMmsTablesResponseBodyDataObjectList& setHasPartitions(bool hasPartitions) { DARABONBA_PTR_SET_VALUE(hasPartitions_, hasPartitions) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListMmsTablesResponseBodyDataObjectList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // inputFormat Field Functions 
    bool hasInputFormat() const { return this->inputFormat_ != nullptr;};
    void deleteInputFormat() { this->inputFormat_ = nullptr;};
    inline string inputFormat() const { DARABONBA_PTR_GET_DEFAULT(inputFormat_, "") };
    inline ListMmsTablesResponseBodyDataObjectList& setInputFormat(string inputFormat) { DARABONBA_PTR_SET_VALUE(inputFormat_, inputFormat) };


    // lastDdlTime Field Functions 
    bool hasLastDdlTime() const { return this->lastDdlTime_ != nullptr;};
    void deleteLastDdlTime() { this->lastDdlTime_ = nullptr;};
    inline string lastDdlTime() const { DARABONBA_PTR_GET_DEFAULT(lastDdlTime_, "") };
    inline ListMmsTablesResponseBodyDataObjectList& setLastDdlTime(string lastDdlTime) { DARABONBA_PTR_SET_VALUE(lastDdlTime_, lastDdlTime) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline ListMmsTablesResponseBodyDataObjectList& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMmsTablesResponseBodyDataObjectList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // numRows Field Functions 
    bool hasNumRows() const { return this->numRows_ != nullptr;};
    void deleteNumRows() { this->numRows_ = nullptr;};
    inline int64_t numRows() const { DARABONBA_PTR_GET_DEFAULT(numRows_, 0L) };
    inline ListMmsTablesResponseBodyDataObjectList& setNumRows(int64_t numRows) { DARABONBA_PTR_SET_VALUE(numRows_, numRows) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string outputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline ListMmsTablesResponseBodyDataObjectList& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListMmsTablesResponseBodyDataObjectList& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // partitions Field Functions 
    bool hasPartitions() const { return this->partitions_ != nullptr;};
    void deletePartitions() { this->partitions_ = nullptr;};
    inline int32_t partitions() const { DARABONBA_PTR_GET_DEFAULT(partitions_, 0) };
    inline ListMmsTablesResponseBodyDataObjectList& setPartitions(int32_t partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };


    // partitionsDoing Field Functions 
    bool hasPartitionsDoing() const { return this->partitionsDoing_ != nullptr;};
    void deletePartitionsDoing() { this->partitionsDoing_ = nullptr;};
    inline int32_t partitionsDoing() const { DARABONBA_PTR_GET_DEFAULT(partitionsDoing_, 0) };
    inline ListMmsTablesResponseBodyDataObjectList& setPartitionsDoing(int32_t partitionsDoing) { DARABONBA_PTR_SET_VALUE(partitionsDoing_, partitionsDoing) };


    // partitionsDone Field Functions 
    bool hasPartitionsDone() const { return this->partitionsDone_ != nullptr;};
    void deletePartitionsDone() { this->partitionsDone_ = nullptr;};
    inline int32_t partitionsDone() const { DARABONBA_PTR_GET_DEFAULT(partitionsDone_, 0) };
    inline ListMmsTablesResponseBodyDataObjectList& setPartitionsDone(int32_t partitionsDone) { DARABONBA_PTR_SET_VALUE(partitionsDone_, partitionsDone) };


    // partitionsFailed Field Functions 
    bool hasPartitionsFailed() const { return this->partitionsFailed_ != nullptr;};
    void deletePartitionsFailed() { this->partitionsFailed_ = nullptr;};
    inline int32_t partitionsFailed() const { DARABONBA_PTR_GET_DEFAULT(partitionsFailed_, 0) };
    inline ListMmsTablesResponseBodyDataObjectList& setPartitionsFailed(int32_t partitionsFailed) { DARABONBA_PTR_SET_VALUE(partitionsFailed_, partitionsFailed) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline const Models::ListMmsTablesResponseBodyDataObjectListSchema & schema() const { DARABONBA_PTR_GET_CONST(schema_, Models::ListMmsTablesResponseBodyDataObjectListSchema) };
    inline Models::ListMmsTablesResponseBodyDataObjectListSchema schema() { DARABONBA_PTR_GET(schema_, Models::ListMmsTablesResponseBodyDataObjectListSchema) };
    inline ListMmsTablesResponseBodyDataObjectList& setSchema(const Models::ListMmsTablesResponseBodyDataObjectListSchema & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
    inline ListMmsTablesResponseBodyDataObjectList& setSchema(Models::ListMmsTablesResponseBodyDataObjectListSchema && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


    // serde Field Functions 
    bool hasSerde() const { return this->serde_ != nullptr;};
    void deleteSerde() { this->serde_ = nullptr;};
    inline string serde() const { DARABONBA_PTR_GET_DEFAULT(serde_, "") };
    inline ListMmsTablesResponseBodyDataObjectList& setSerde(string serde) { DARABONBA_PTR_SET_VALUE(serde_, serde) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ListMmsTablesResponseBodyDataObjectList& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline int64_t sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
    inline ListMmsTablesResponseBodyDataObjectList& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceName Field Functions 
    bool hasSourceName() const { return this->sourceName_ != nullptr;};
    void deleteSourceName() { this->sourceName_ = nullptr;};
    inline string sourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
    inline ListMmsTablesResponseBodyDataObjectList& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListMmsTablesResponseBodyDataObjectList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListMmsTablesResponseBodyDataObjectList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline bool updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, false) };
    inline ListMmsTablesResponseBodyDataObjectList& setUpdated(bool updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


  protected:
    std::shared_ptr<int64_t> dbId_ = nullptr;
    std::shared_ptr<string> dbName_ = nullptr;
    std::shared_ptr<string> dstName_ = nullptr;
    std::shared_ptr<string> dstProjectName_ = nullptr;
    std::shared_ptr<string> dstSchemaName_ = nullptr;
    std::shared_ptr<string> extra_ = nullptr;
    std::shared_ptr<bool> hasPartitions_ = nullptr;
    // table ID
    std::shared_ptr<int64_t> id_ = nullptr;
    // inputFormat
    std::shared_ptr<string> inputFormat_ = nullptr;
    // lastDdlTime
    std::shared_ptr<string> lastDdlTime_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> numRows_ = nullptr;
    // outFormat
    std::shared_ptr<string> outputFormat_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<int32_t> partitions_ = nullptr;
    std::shared_ptr<int32_t> partitionsDoing_ = nullptr;
    std::shared_ptr<int32_t> partitionsDone_ = nullptr;
    std::shared_ptr<int32_t> partitionsFailed_ = nullptr;
    std::shared_ptr<Models::ListMmsTablesResponseBodyDataObjectListSchema> schema_ = nullptr;
    // serde
    std::shared_ptr<string> serde_ = nullptr;
    std::shared_ptr<int64_t> size_ = nullptr;
    std::shared_ptr<int64_t> sourceId_ = nullptr;
    std::shared_ptr<string> sourceName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<bool> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
