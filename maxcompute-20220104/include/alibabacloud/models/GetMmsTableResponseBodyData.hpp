// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMMSTABLERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMMSTABLERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMmsTableResponseBodyDataSchema.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetMmsTableResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMmsTableResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(dbId, dbId_);
      DARABONBA_PTR_TO_JSON(dbName, dbName_);
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
    friend void from_json(const Darabonba::Json& j, GetMmsTableResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(dbId, dbId_);
      DARABONBA_PTR_FROM_JSON(dbName, dbName_);
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
    GetMmsTableResponseBodyData() = default ;
    GetMmsTableResponseBodyData(const GetMmsTableResponseBodyData &) = default ;
    GetMmsTableResponseBodyData(GetMmsTableResponseBodyData &&) = default ;
    GetMmsTableResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMmsTableResponseBodyData() = default ;
    GetMmsTableResponseBodyData& operator=(const GetMmsTableResponseBodyData &) = default ;
    GetMmsTableResponseBodyData& operator=(GetMmsTableResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbId_ != nullptr
        && this->dbName_ != nullptr && this->extra_ != nullptr && this->hasPartitions_ != nullptr && this->id_ != nullptr && this->inputFormat_ != nullptr
        && this->lastDdlTime_ != nullptr && this->location_ != nullptr && this->name_ != nullptr && this->numRows_ != nullptr && this->outputFormat_ != nullptr
        && this->owner_ != nullptr && this->partitions_ != nullptr && this->partitionsDoing_ != nullptr && this->partitionsDone_ != nullptr && this->partitionsFailed_ != nullptr
        && this->schema_ != nullptr && this->serde_ != nullptr && this->size_ != nullptr && this->sourceId_ != nullptr && this->sourceName_ != nullptr
        && this->status_ != nullptr && this->type_ != nullptr && this->updated_ != nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline GetMmsTableResponseBodyData& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline GetMmsTableResponseBodyData& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline GetMmsTableResponseBodyData& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // hasPartitions Field Functions 
    bool hasHasPartitions() const { return this->hasPartitions_ != nullptr;};
    void deleteHasPartitions() { this->hasPartitions_ = nullptr;};
    inline bool hasPartitions() const { DARABONBA_PTR_GET_DEFAULT(hasPartitions_, false) };
    inline GetMmsTableResponseBodyData& setHasPartitions(bool hasPartitions) { DARABONBA_PTR_SET_VALUE(hasPartitions_, hasPartitions) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetMmsTableResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // inputFormat Field Functions 
    bool hasInputFormat() const { return this->inputFormat_ != nullptr;};
    void deleteInputFormat() { this->inputFormat_ = nullptr;};
    inline string inputFormat() const { DARABONBA_PTR_GET_DEFAULT(inputFormat_, "") };
    inline GetMmsTableResponseBodyData& setInputFormat(string inputFormat) { DARABONBA_PTR_SET_VALUE(inputFormat_, inputFormat) };


    // lastDdlTime Field Functions 
    bool hasLastDdlTime() const { return this->lastDdlTime_ != nullptr;};
    void deleteLastDdlTime() { this->lastDdlTime_ = nullptr;};
    inline string lastDdlTime() const { DARABONBA_PTR_GET_DEFAULT(lastDdlTime_, "") };
    inline GetMmsTableResponseBodyData& setLastDdlTime(string lastDdlTime) { DARABONBA_PTR_SET_VALUE(lastDdlTime_, lastDdlTime) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline GetMmsTableResponseBodyData& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetMmsTableResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // numRows Field Functions 
    bool hasNumRows() const { return this->numRows_ != nullptr;};
    void deleteNumRows() { this->numRows_ = nullptr;};
    inline int64_t numRows() const { DARABONBA_PTR_GET_DEFAULT(numRows_, 0L) };
    inline GetMmsTableResponseBodyData& setNumRows(int64_t numRows) { DARABONBA_PTR_SET_VALUE(numRows_, numRows) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string outputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline GetMmsTableResponseBodyData& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetMmsTableResponseBodyData& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // partitions Field Functions 
    bool hasPartitions() const { return this->partitions_ != nullptr;};
    void deletePartitions() { this->partitions_ = nullptr;};
    inline int32_t partitions() const { DARABONBA_PTR_GET_DEFAULT(partitions_, 0) };
    inline GetMmsTableResponseBodyData& setPartitions(int32_t partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };


    // partitionsDoing Field Functions 
    bool hasPartitionsDoing() const { return this->partitionsDoing_ != nullptr;};
    void deletePartitionsDoing() { this->partitionsDoing_ = nullptr;};
    inline int32_t partitionsDoing() const { DARABONBA_PTR_GET_DEFAULT(partitionsDoing_, 0) };
    inline GetMmsTableResponseBodyData& setPartitionsDoing(int32_t partitionsDoing) { DARABONBA_PTR_SET_VALUE(partitionsDoing_, partitionsDoing) };


    // partitionsDone Field Functions 
    bool hasPartitionsDone() const { return this->partitionsDone_ != nullptr;};
    void deletePartitionsDone() { this->partitionsDone_ = nullptr;};
    inline int32_t partitionsDone() const { DARABONBA_PTR_GET_DEFAULT(partitionsDone_, 0) };
    inline GetMmsTableResponseBodyData& setPartitionsDone(int32_t partitionsDone) { DARABONBA_PTR_SET_VALUE(partitionsDone_, partitionsDone) };


    // partitionsFailed Field Functions 
    bool hasPartitionsFailed() const { return this->partitionsFailed_ != nullptr;};
    void deletePartitionsFailed() { this->partitionsFailed_ = nullptr;};
    inline int32_t partitionsFailed() const { DARABONBA_PTR_GET_DEFAULT(partitionsFailed_, 0) };
    inline GetMmsTableResponseBodyData& setPartitionsFailed(int32_t partitionsFailed) { DARABONBA_PTR_SET_VALUE(partitionsFailed_, partitionsFailed) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline const Models::GetMmsTableResponseBodyDataSchema & schema() const { DARABONBA_PTR_GET_CONST(schema_, Models::GetMmsTableResponseBodyDataSchema) };
    inline Models::GetMmsTableResponseBodyDataSchema schema() { DARABONBA_PTR_GET(schema_, Models::GetMmsTableResponseBodyDataSchema) };
    inline GetMmsTableResponseBodyData& setSchema(const Models::GetMmsTableResponseBodyDataSchema & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
    inline GetMmsTableResponseBodyData& setSchema(Models::GetMmsTableResponseBodyDataSchema && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


    // serde Field Functions 
    bool hasSerde() const { return this->serde_ != nullptr;};
    void deleteSerde() { this->serde_ = nullptr;};
    inline string serde() const { DARABONBA_PTR_GET_DEFAULT(serde_, "") };
    inline GetMmsTableResponseBodyData& setSerde(string serde) { DARABONBA_PTR_SET_VALUE(serde_, serde) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline GetMmsTableResponseBodyData& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline int64_t sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
    inline GetMmsTableResponseBodyData& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceName Field Functions 
    bool hasSourceName() const { return this->sourceName_ != nullptr;};
    void deleteSourceName() { this->sourceName_ = nullptr;};
    inline string sourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
    inline GetMmsTableResponseBodyData& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetMmsTableResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetMmsTableResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline bool updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, false) };
    inline GetMmsTableResponseBodyData& setUpdated(bool updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


  protected:
    std::shared_ptr<int64_t> dbId_ = nullptr;
    std::shared_ptr<string> dbName_ = nullptr;
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
    // outputFormat
    std::shared_ptr<string> outputFormat_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<int32_t> partitions_ = nullptr;
    std::shared_ptr<int32_t> partitionsDoing_ = nullptr;
    std::shared_ptr<int32_t> partitionsDone_ = nullptr;
    std::shared_ptr<int32_t> partitionsFailed_ = nullptr;
    std::shared_ptr<Models::GetMmsTableResponseBodyDataSchema> schema_ = nullptr;
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
