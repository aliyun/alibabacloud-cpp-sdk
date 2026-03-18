// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSDBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSDBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsDbsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsDbsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsDbsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListMmsDbsResponseBody() = default ;
    ListMmsDbsResponseBody(const ListMmsDbsResponseBody &) = default ;
    ListMmsDbsResponseBody(ListMmsDbsResponseBody &&) = default ;
    ListMmsDbsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsDbsResponseBody() = default ;
    ListMmsDbsResponseBody& operator=(const ListMmsDbsResponseBody &) = default ;
    ListMmsDbsResponseBody& operator=(ListMmsDbsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(objectList, objectList_);
        DARABONBA_PTR_TO_JSON(pageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(objectList, objectList_);
        DARABONBA_PTR_FROM_JSON(pageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(total, total_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ObjectList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ObjectList& obj) { 
          DARABONBA_PTR_TO_JSON(createTime, createTime_);
          DARABONBA_PTR_TO_JSON(deleted, deleted_);
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
          DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(updated, updated_);
        };
        friend void from_json(const Darabonba::Json& j, ObjectList& obj) { 
          DARABONBA_PTR_FROM_JSON(createTime, createTime_);
          DARABONBA_PTR_FROM_JSON(deleted, deleted_);
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
          DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(updated, updated_);
        };
        ObjectList() = default ;
        ObjectList(const ObjectList &) = default ;
        ObjectList(ObjectList &&) = default ;
        ObjectList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ObjectList() = default ;
        ObjectList& operator=(const ObjectList &) = default ;
        ObjectList& operator=(ObjectList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->deleted_ == nullptr && this->description_ == nullptr && this->dstName_ == nullptr && this->dstProjectName_ == nullptr && this->extra_ == nullptr
        && this->id_ == nullptr && this->lastDdlTime_ == nullptr && this->location_ == nullptr && this->name_ == nullptr && this->numRows_ == nullptr
        && this->owner_ == nullptr && this->partitions_ == nullptr && this->partitionsDoing_ == nullptr && this->partitionsDone_ == nullptr && this->partitionsFailed_ == nullptr
        && this->size_ == nullptr && this->sourceId_ == nullptr && this->sourceName_ == nullptr && this->status_ == nullptr && this->tables_ == nullptr
        && this->tablesDoing_ == nullptr && this->tablesDone_ == nullptr && this->tablesFailed_ == nullptr && this->tablesPartDone_ == nullptr && this->updateTime_ == nullptr
        && this->updated_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline ObjectList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // deleted Field Functions 
        bool hasDeleted() const { return this->deleted_ != nullptr;};
        void deleteDeleted() { this->deleted_ = nullptr;};
        inline bool getDeleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, false) };
        inline ObjectList& setDeleted(bool deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ObjectList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // dstName Field Functions 
        bool hasDstName() const { return this->dstName_ != nullptr;};
        void deleteDstName() { this->dstName_ = nullptr;};
        inline string getDstName() const { DARABONBA_PTR_GET_DEFAULT(dstName_, "") };
        inline ObjectList& setDstName(string dstName) { DARABONBA_PTR_SET_VALUE(dstName_, dstName) };


        // dstProjectName Field Functions 
        bool hasDstProjectName() const { return this->dstProjectName_ != nullptr;};
        void deleteDstProjectName() { this->dstProjectName_ = nullptr;};
        inline string getDstProjectName() const { DARABONBA_PTR_GET_DEFAULT(dstProjectName_, "") };
        inline ObjectList& setDstProjectName(string dstProjectName) { DARABONBA_PTR_SET_VALUE(dstProjectName_, dstProjectName) };


        // extra Field Functions 
        bool hasExtra() const { return this->extra_ != nullptr;};
        void deleteExtra() { this->extra_ = nullptr;};
        inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
        inline ObjectList& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ObjectList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // lastDdlTime Field Functions 
        bool hasLastDdlTime() const { return this->lastDdlTime_ != nullptr;};
        void deleteLastDdlTime() { this->lastDdlTime_ = nullptr;};
        inline string getLastDdlTime() const { DARABONBA_PTR_GET_DEFAULT(lastDdlTime_, "") };
        inline ObjectList& setLastDdlTime(string lastDdlTime) { DARABONBA_PTR_SET_VALUE(lastDdlTime_, lastDdlTime) };


        // location Field Functions 
        bool hasLocation() const { return this->location_ != nullptr;};
        void deleteLocation() { this->location_ = nullptr;};
        inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
        inline ObjectList& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ObjectList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // numRows Field Functions 
        bool hasNumRows() const { return this->numRows_ != nullptr;};
        void deleteNumRows() { this->numRows_ = nullptr;};
        inline int64_t getNumRows() const { DARABONBA_PTR_GET_DEFAULT(numRows_, 0L) };
        inline ObjectList& setNumRows(int64_t numRows) { DARABONBA_PTR_SET_VALUE(numRows_, numRows) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline ObjectList& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // partitions Field Functions 
        bool hasPartitions() const { return this->partitions_ != nullptr;};
        void deletePartitions() { this->partitions_ = nullptr;};
        inline int32_t getPartitions() const { DARABONBA_PTR_GET_DEFAULT(partitions_, 0) };
        inline ObjectList& setPartitions(int32_t partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };


        // partitionsDoing Field Functions 
        bool hasPartitionsDoing() const { return this->partitionsDoing_ != nullptr;};
        void deletePartitionsDoing() { this->partitionsDoing_ = nullptr;};
        inline int32_t getPartitionsDoing() const { DARABONBA_PTR_GET_DEFAULT(partitionsDoing_, 0) };
        inline ObjectList& setPartitionsDoing(int32_t partitionsDoing) { DARABONBA_PTR_SET_VALUE(partitionsDoing_, partitionsDoing) };


        // partitionsDone Field Functions 
        bool hasPartitionsDone() const { return this->partitionsDone_ != nullptr;};
        void deletePartitionsDone() { this->partitionsDone_ = nullptr;};
        inline int32_t getPartitionsDone() const { DARABONBA_PTR_GET_DEFAULT(partitionsDone_, 0) };
        inline ObjectList& setPartitionsDone(int32_t partitionsDone) { DARABONBA_PTR_SET_VALUE(partitionsDone_, partitionsDone) };


        // partitionsFailed Field Functions 
        bool hasPartitionsFailed() const { return this->partitionsFailed_ != nullptr;};
        void deletePartitionsFailed() { this->partitionsFailed_ = nullptr;};
        inline int32_t getPartitionsFailed() const { DARABONBA_PTR_GET_DEFAULT(partitionsFailed_, 0) };
        inline ObjectList& setPartitionsFailed(int32_t partitionsFailed) { DARABONBA_PTR_SET_VALUE(partitionsFailed_, partitionsFailed) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
        inline ObjectList& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // sourceId Field Functions 
        bool hasSourceId() const { return this->sourceId_ != nullptr;};
        void deleteSourceId() { this->sourceId_ = nullptr;};
        inline int64_t getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
        inline ObjectList& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


        // sourceName Field Functions 
        bool hasSourceName() const { return this->sourceName_ != nullptr;};
        void deleteSourceName() { this->sourceName_ = nullptr;};
        inline string getSourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
        inline ObjectList& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ObjectList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tables Field Functions 
        bool hasTables() const { return this->tables_ != nullptr;};
        void deleteTables() { this->tables_ = nullptr;};
        inline int32_t getTables() const { DARABONBA_PTR_GET_DEFAULT(tables_, 0) };
        inline ObjectList& setTables(int32_t tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };


        // tablesDoing Field Functions 
        bool hasTablesDoing() const { return this->tablesDoing_ != nullptr;};
        void deleteTablesDoing() { this->tablesDoing_ = nullptr;};
        inline int32_t getTablesDoing() const { DARABONBA_PTR_GET_DEFAULT(tablesDoing_, 0) };
        inline ObjectList& setTablesDoing(int32_t tablesDoing) { DARABONBA_PTR_SET_VALUE(tablesDoing_, tablesDoing) };


        // tablesDone Field Functions 
        bool hasTablesDone() const { return this->tablesDone_ != nullptr;};
        void deleteTablesDone() { this->tablesDone_ = nullptr;};
        inline int32_t getTablesDone() const { DARABONBA_PTR_GET_DEFAULT(tablesDone_, 0) };
        inline ObjectList& setTablesDone(int32_t tablesDone) { DARABONBA_PTR_SET_VALUE(tablesDone_, tablesDone) };


        // tablesFailed Field Functions 
        bool hasTablesFailed() const { return this->tablesFailed_ != nullptr;};
        void deleteTablesFailed() { this->tablesFailed_ = nullptr;};
        inline int32_t getTablesFailed() const { DARABONBA_PTR_GET_DEFAULT(tablesFailed_, 0) };
        inline ObjectList& setTablesFailed(int32_t tablesFailed) { DARABONBA_PTR_SET_VALUE(tablesFailed_, tablesFailed) };


        // tablesPartDone Field Functions 
        bool hasTablesPartDone() const { return this->tablesPartDone_ != nullptr;};
        void deleteTablesPartDone() { this->tablesPartDone_ = nullptr;};
        inline int32_t getTablesPartDone() const { DARABONBA_PTR_GET_DEFAULT(tablesPartDone_, 0) };
        inline ObjectList& setTablesPartDone(int32_t tablesPartDone) { DARABONBA_PTR_SET_VALUE(tablesPartDone_, tablesPartDone) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline ObjectList& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // updated Field Functions 
        bool hasUpdated() const { return this->updated_ != nullptr;};
        void deleteUpdated() { this->updated_ = nullptr;};
        inline bool getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, false) };
        inline ObjectList& setUpdated(bool updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


      protected:
        // Time created in MMS
        shared_ptr<string> createTime_ {};
        // Whether deleted
        shared_ptr<bool> deleted_ {};
        // Database description
        shared_ptr<string> description_ {};
        // The MaxCompute schema corresponding to the source database. If the target MaxCompute project does not have a schema layer enabled, this value is null. By default, it is consistent with the source database name.
        shared_ptr<string> dstName_ {};
        // Target MaxCompute project name
        shared_ptr<string> dstProjectName_ {};
        // Other information stored in JSON format
        shared_ptr<string> extra_ {};
        // Database ID
        shared_ptr<int64_t> id_ {};
        // Last DDL Time
        shared_ptr<string> lastDdlTime_ {};
        // Database storage location
        shared_ptr<string> location_ {};
        // Database name
        shared_ptr<string> name_ {};
        // Number of database data rows
        shared_ptr<int64_t> numRows_ {};
        // Database owner
        shared_ptr<string> owner_ {};
        // Number of partitions
        shared_ptr<int32_t> partitions_ {};
        // Partitions being migrated
        shared_ptr<int32_t> partitionsDoing_ {};
        // Partitions migrated
        shared_ptr<int32_t> partitionsDone_ {};
        // Failed partitions
        shared_ptr<int32_t> partitionsFailed_ {};
        // Database data size in bytes
        shared_ptr<int64_t> size_ {};
        // Data source ID.
        shared_ptr<int64_t> sourceId_ {};
        // Data source name
        shared_ptr<string> sourceName_ {};
        // Migration status: INIT, DOING, FAILED, DONE, PART_DONE
        shared_ptr<string> status_ {};
        // Number of tables
        shared_ptr<int32_t> tables_ {};
        // Tables being migrated
        shared_ptr<int32_t> tablesDoing_ {};
        // Tables migrated
        shared_ptr<int32_t> tablesDone_ {};
        // Failed tables
        shared_ptr<int32_t> tablesFailed_ {};
        // Partially migrated tables
        shared_ptr<int32_t> tablesPartDone_ {};
        // Latest data update time
        shared_ptr<string> updateTime_ {};
        // Whether data is updated
        shared_ptr<bool> updated_ {};
      };

      virtual bool empty() const override { return this->objectList_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // objectList Field Functions 
      bool hasObjectList() const { return this->objectList_ != nullptr;};
      void deleteObjectList() { this->objectList_ = nullptr;};
      inline const vector<Data::ObjectList> & getObjectList() const { DARABONBA_PTR_GET_CONST(objectList_, vector<Data::ObjectList>) };
      inline vector<Data::ObjectList> getObjectList() { DARABONBA_PTR_GET(objectList_, vector<Data::ObjectList>) };
      inline Data& setObjectList(const vector<Data::ObjectList> & objectList) { DARABONBA_PTR_SET_VALUE(objectList_, objectList) };
      inline Data& setObjectList(vector<Data::ObjectList> && objectList) { DARABONBA_PTR_SET_RVALUE(objectList_, objectList) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Data& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // Database list
      shared_ptr<vector<Data::ObjectList>> objectList_ {};
      // Page number
      shared_ptr<int32_t> pageNum_ {};
      // Page size
      shared_ptr<int32_t> pageSize_ {};
      // Total number of records.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListMmsDbsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListMmsDbsResponseBody::Data) };
    inline ListMmsDbsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListMmsDbsResponseBody::Data) };
    inline ListMmsDbsResponseBody& setData(const ListMmsDbsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMmsDbsResponseBody& setData(ListMmsDbsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMmsDbsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returned data.
    shared_ptr<ListMmsDbsResponseBody::Data> data_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
