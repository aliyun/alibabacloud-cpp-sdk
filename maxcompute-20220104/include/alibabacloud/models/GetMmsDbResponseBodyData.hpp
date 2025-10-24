// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMMSDBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMMSDBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetMmsDbResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMmsDbResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(dstName, dstName_);
      DARABONBA_PTR_TO_JSON(dstProjectName, dstProjectName_);
      DARABONBA_PTR_TO_JSON(extra, extra_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(lastDdlTime, lastDdlTime_);
      DARABONBA_PTR_TO_JSON(location, location_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(numRows, numRows_);
      DARABONBA_PTR_TO_JSON(owner, owner_);
      DARABONBA_PTR_TO_JSON(partitions, partitions_);
      DARABONBA_PTR_TO_JSON(partitionsDoing, partitionsDoing_);
      DARABONBA_PTR_TO_JSON(partitionsDone, partitionsDone_);
      DARABONBA_PTR_TO_JSON(partitionsFailed, partitionsFailed_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(sourceName, sourceName_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tables, tables_);
      DARABONBA_PTR_TO_JSON(tablesDoing, tablesDoing_);
      DARABONBA_PTR_TO_JSON(tablesDone, tablesDone_);
      DARABONBA_PTR_TO_JSON(tablesFailed, tablesFailed_);
      DARABONBA_PTR_TO_JSON(tablesPartDone, tablesPartDone_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, GetMmsDbResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(dstName, dstName_);
      DARABONBA_PTR_FROM_JSON(dstProjectName, dstProjectName_);
      DARABONBA_PTR_FROM_JSON(extra, extra_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(lastDdlTime, lastDdlTime_);
      DARABONBA_PTR_FROM_JSON(location, location_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(numRows, numRows_);
      DARABONBA_PTR_FROM_JSON(owner, owner_);
      DARABONBA_PTR_FROM_JSON(partitions, partitions_);
      DARABONBA_PTR_FROM_JSON(partitionsDoing, partitionsDoing_);
      DARABONBA_PTR_FROM_JSON(partitionsDone, partitionsDone_);
      DARABONBA_PTR_FROM_JSON(partitionsFailed, partitionsFailed_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(sourceName, sourceName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tables, tables_);
      DARABONBA_PTR_FROM_JSON(tablesDoing, tablesDoing_);
      DARABONBA_PTR_FROM_JSON(tablesDone, tablesDone_);
      DARABONBA_PTR_FROM_JSON(tablesFailed, tablesFailed_);
      DARABONBA_PTR_FROM_JSON(tablesPartDone, tablesPartDone_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
    };
    GetMmsDbResponseBodyData() = default ;
    GetMmsDbResponseBodyData(const GetMmsDbResponseBodyData &) = default ;
    GetMmsDbResponseBodyData(GetMmsDbResponseBodyData &&) = default ;
    GetMmsDbResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMmsDbResponseBodyData() = default ;
    GetMmsDbResponseBodyData& operator=(const GetMmsDbResponseBodyData &) = default ;
    GetMmsDbResponseBodyData& operator=(GetMmsDbResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->dstName_ == nullptr && return this->dstProjectName_ == nullptr && return this->extra_ == nullptr && return this->id_ == nullptr && return this->lastDdlTime_ == nullptr
        && return this->location_ == nullptr && return this->name_ == nullptr && return this->numRows_ == nullptr && return this->owner_ == nullptr && return this->partitions_ == nullptr
        && return this->partitionsDoing_ == nullptr && return this->partitionsDone_ == nullptr && return this->partitionsFailed_ == nullptr && return this->size_ == nullptr && return this->sourceId_ == nullptr
        && return this->sourceName_ == nullptr && return this->status_ == nullptr && return this->tables_ == nullptr && return this->tablesDoing_ == nullptr && return this->tablesDone_ == nullptr
        && return this->tablesFailed_ == nullptr && return this->tablesPartDone_ == nullptr && return this->updated_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetMmsDbResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dstName Field Functions 
    bool hasDstName() const { return this->dstName_ != nullptr;};
    void deleteDstName() { this->dstName_ = nullptr;};
    inline string dstName() const { DARABONBA_PTR_GET_DEFAULT(dstName_, "") };
    inline GetMmsDbResponseBodyData& setDstName(string dstName) { DARABONBA_PTR_SET_VALUE(dstName_, dstName) };


    // dstProjectName Field Functions 
    bool hasDstProjectName() const { return this->dstProjectName_ != nullptr;};
    void deleteDstProjectName() { this->dstProjectName_ = nullptr;};
    inline string dstProjectName() const { DARABONBA_PTR_GET_DEFAULT(dstProjectName_, "") };
    inline GetMmsDbResponseBodyData& setDstProjectName(string dstProjectName) { DARABONBA_PTR_SET_VALUE(dstProjectName_, dstProjectName) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline GetMmsDbResponseBodyData& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetMmsDbResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastDdlTime Field Functions 
    bool hasLastDdlTime() const { return this->lastDdlTime_ != nullptr;};
    void deleteLastDdlTime() { this->lastDdlTime_ = nullptr;};
    inline string lastDdlTime() const { DARABONBA_PTR_GET_DEFAULT(lastDdlTime_, "") };
    inline GetMmsDbResponseBodyData& setLastDdlTime(string lastDdlTime) { DARABONBA_PTR_SET_VALUE(lastDdlTime_, lastDdlTime) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline GetMmsDbResponseBodyData& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetMmsDbResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // numRows Field Functions 
    bool hasNumRows() const { return this->numRows_ != nullptr;};
    void deleteNumRows() { this->numRows_ = nullptr;};
    inline int64_t numRows() const { DARABONBA_PTR_GET_DEFAULT(numRows_, 0L) };
    inline GetMmsDbResponseBodyData& setNumRows(int64_t numRows) { DARABONBA_PTR_SET_VALUE(numRows_, numRows) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetMmsDbResponseBodyData& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // partitions Field Functions 
    bool hasPartitions() const { return this->partitions_ != nullptr;};
    void deletePartitions() { this->partitions_ = nullptr;};
    inline int32_t partitions() const { DARABONBA_PTR_GET_DEFAULT(partitions_, 0) };
    inline GetMmsDbResponseBodyData& setPartitions(int32_t partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };


    // partitionsDoing Field Functions 
    bool hasPartitionsDoing() const { return this->partitionsDoing_ != nullptr;};
    void deletePartitionsDoing() { this->partitionsDoing_ = nullptr;};
    inline int32_t partitionsDoing() const { DARABONBA_PTR_GET_DEFAULT(partitionsDoing_, 0) };
    inline GetMmsDbResponseBodyData& setPartitionsDoing(int32_t partitionsDoing) { DARABONBA_PTR_SET_VALUE(partitionsDoing_, partitionsDoing) };


    // partitionsDone Field Functions 
    bool hasPartitionsDone() const { return this->partitionsDone_ != nullptr;};
    void deletePartitionsDone() { this->partitionsDone_ = nullptr;};
    inline int32_t partitionsDone() const { DARABONBA_PTR_GET_DEFAULT(partitionsDone_, 0) };
    inline GetMmsDbResponseBodyData& setPartitionsDone(int32_t partitionsDone) { DARABONBA_PTR_SET_VALUE(partitionsDone_, partitionsDone) };


    // partitionsFailed Field Functions 
    bool hasPartitionsFailed() const { return this->partitionsFailed_ != nullptr;};
    void deletePartitionsFailed() { this->partitionsFailed_ = nullptr;};
    inline int32_t partitionsFailed() const { DARABONBA_PTR_GET_DEFAULT(partitionsFailed_, 0) };
    inline GetMmsDbResponseBodyData& setPartitionsFailed(int32_t partitionsFailed) { DARABONBA_PTR_SET_VALUE(partitionsFailed_, partitionsFailed) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline GetMmsDbResponseBodyData& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline int64_t sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
    inline GetMmsDbResponseBodyData& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceName Field Functions 
    bool hasSourceName() const { return this->sourceName_ != nullptr;};
    void deleteSourceName() { this->sourceName_ = nullptr;};
    inline string sourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
    inline GetMmsDbResponseBodyData& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetMmsDbResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline int32_t tables() const { DARABONBA_PTR_GET_DEFAULT(tables_, 0) };
    inline GetMmsDbResponseBodyData& setTables(int32_t tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };


    // tablesDoing Field Functions 
    bool hasTablesDoing() const { return this->tablesDoing_ != nullptr;};
    void deleteTablesDoing() { this->tablesDoing_ = nullptr;};
    inline int32_t tablesDoing() const { DARABONBA_PTR_GET_DEFAULT(tablesDoing_, 0) };
    inline GetMmsDbResponseBodyData& setTablesDoing(int32_t tablesDoing) { DARABONBA_PTR_SET_VALUE(tablesDoing_, tablesDoing) };


    // tablesDone Field Functions 
    bool hasTablesDone() const { return this->tablesDone_ != nullptr;};
    void deleteTablesDone() { this->tablesDone_ = nullptr;};
    inline int32_t tablesDone() const { DARABONBA_PTR_GET_DEFAULT(tablesDone_, 0) };
    inline GetMmsDbResponseBodyData& setTablesDone(int32_t tablesDone) { DARABONBA_PTR_SET_VALUE(tablesDone_, tablesDone) };


    // tablesFailed Field Functions 
    bool hasTablesFailed() const { return this->tablesFailed_ != nullptr;};
    void deleteTablesFailed() { this->tablesFailed_ = nullptr;};
    inline int32_t tablesFailed() const { DARABONBA_PTR_GET_DEFAULT(tablesFailed_, 0) };
    inline GetMmsDbResponseBodyData& setTablesFailed(int32_t tablesFailed) { DARABONBA_PTR_SET_VALUE(tablesFailed_, tablesFailed) };


    // tablesPartDone Field Functions 
    bool hasTablesPartDone() const { return this->tablesPartDone_ != nullptr;};
    void deleteTablesPartDone() { this->tablesPartDone_ = nullptr;};
    inline int32_t tablesPartDone() const { DARABONBA_PTR_GET_DEFAULT(tablesPartDone_, 0) };
    inline GetMmsDbResponseBodyData& setTablesPartDone(int32_t tablesPartDone) { DARABONBA_PTR_SET_VALUE(tablesPartDone_, tablesPartDone) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline bool updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, false) };
    inline GetMmsDbResponseBodyData& setUpdated(bool updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> dstName_ = nullptr;
    std::shared_ptr<string> dstProjectName_ = nullptr;
    std::shared_ptr<string> extra_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    // last ddl time
    std::shared_ptr<string> lastDdlTime_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> numRows_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<int32_t> partitions_ = nullptr;
    std::shared_ptr<int32_t> partitionsDoing_ = nullptr;
    std::shared_ptr<int32_t> partitionsDone_ = nullptr;
    std::shared_ptr<int32_t> partitionsFailed_ = nullptr;
    std::shared_ptr<int64_t> size_ = nullptr;
    std::shared_ptr<int64_t> sourceId_ = nullptr;
    std::shared_ptr<string> sourceName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int32_t> tables_ = nullptr;
    std::shared_ptr<int32_t> tablesDoing_ = nullptr;
    std::shared_ptr<int32_t> tablesDone_ = nullptr;
    std::shared_ptr<int32_t> tablesFailed_ = nullptr;
    std::shared_ptr<int32_t> tablesPartDone_ = nullptr;
    std::shared_ptr<bool> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
