// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMMSTABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMMSTABLERESPONSEBODY_HPP_
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
  class GetMmsTableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMmsTableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMmsTableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetMmsTableResponseBody() = default ;
    GetMmsTableResponseBody(const GetMmsTableResponseBody &) = default ;
    GetMmsTableResponseBody(GetMmsTableResponseBody &&) = default ;
    GetMmsTableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMmsTableResponseBody() = default ;
    GetMmsTableResponseBody& operator=(const GetMmsTableResponseBody &) = default ;
    GetMmsTableResponseBody& operator=(GetMmsTableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      class Schema : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Schema& obj) { 
          DARABONBA_PTR_TO_JSON(columns, columns_);
          DARABONBA_PTR_TO_JSON(comment, comment_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(partitions, partitions_);
        };
        friend void from_json(const Darabonba::Json& j, Schema& obj) { 
          DARABONBA_PTR_FROM_JSON(columns, columns_);
          DARABONBA_PTR_FROM_JSON(comment, comment_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(partitions, partitions_);
        };
        Schema() = default ;
        Schema(const Schema &) = default ;
        Schema(Schema &&) = default ;
        Schema(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Schema() = default ;
        Schema& operator=(const Schema &) = default ;
        Schema& operator=(Schema &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Partitions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Partitions& obj) { 
            DARABONBA_PTR_TO_JSON(comment, comment_);
            DARABONBA_PTR_TO_JSON(defaultValue, defaultValue_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(nullable, nullable_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Partitions& obj) { 
            DARABONBA_PTR_FROM_JSON(comment, comment_);
            DARABONBA_PTR_FROM_JSON(defaultValue, defaultValue_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(nullable, nullable_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          Partitions() = default ;
          Partitions(const Partitions &) = default ;
          Partitions(Partitions &&) = default ;
          Partitions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Partitions() = default ;
          Partitions& operator=(const Partitions &) = default ;
          Partitions& operator=(Partitions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->comment_ == nullptr
        && this->defaultValue_ == nullptr && this->name_ == nullptr && this->nullable_ == nullptr && this->type_ == nullptr; };
          // comment Field Functions 
          bool hasComment() const { return this->comment_ != nullptr;};
          void deleteComment() { this->comment_ = nullptr;};
          inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
          inline Partitions& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


          // defaultValue Field Functions 
          bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
          void deleteDefaultValue() { this->defaultValue_ = nullptr;};
          inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
          inline Partitions& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Partitions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // nullable Field Functions 
          bool hasNullable() const { return this->nullable_ != nullptr;};
          void deleteNullable() { this->nullable_ = nullptr;};
          inline bool getNullable() const { DARABONBA_PTR_GET_DEFAULT(nullable_, false) };
          inline Partitions& setNullable(bool nullable) { DARABONBA_PTR_SET_VALUE(nullable_, nullable) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Partitions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> comment_ {};
          shared_ptr<string> defaultValue_ {};
          shared_ptr<string> name_ {};
          shared_ptr<bool> nullable_ {};
          shared_ptr<string> type_ {};
        };

        class Columns : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Columns& obj) { 
            DARABONBA_PTR_TO_JSON(comment, comment_);
            DARABONBA_PTR_TO_JSON(defaultValue, defaultValue_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(nullable, nullable_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Columns& obj) { 
            DARABONBA_PTR_FROM_JSON(comment, comment_);
            DARABONBA_PTR_FROM_JSON(defaultValue, defaultValue_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(nullable, nullable_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          Columns() = default ;
          Columns(const Columns &) = default ;
          Columns(Columns &&) = default ;
          Columns(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Columns() = default ;
          Columns& operator=(const Columns &) = default ;
          Columns& operator=(Columns &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->comment_ == nullptr
        && this->defaultValue_ == nullptr && this->name_ == nullptr && this->nullable_ == nullptr && this->type_ == nullptr; };
          // comment Field Functions 
          bool hasComment() const { return this->comment_ != nullptr;};
          void deleteComment() { this->comment_ = nullptr;};
          inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
          inline Columns& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


          // defaultValue Field Functions 
          bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
          void deleteDefaultValue() { this->defaultValue_ = nullptr;};
          inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
          inline Columns& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Columns& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // nullable Field Functions 
          bool hasNullable() const { return this->nullable_ != nullptr;};
          void deleteNullable() { this->nullable_ = nullptr;};
          inline bool getNullable() const { DARABONBA_PTR_GET_DEFAULT(nullable_, false) };
          inline Columns& setNullable(bool nullable) { DARABONBA_PTR_SET_VALUE(nullable_, nullable) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Columns& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> comment_ {};
          shared_ptr<string> defaultValue_ {};
          shared_ptr<string> name_ {};
          shared_ptr<bool> nullable_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->columns_ == nullptr
        && this->comment_ == nullptr && this->name_ == nullptr && this->partitions_ == nullptr; };
        // columns Field Functions 
        bool hasColumns() const { return this->columns_ != nullptr;};
        void deleteColumns() { this->columns_ = nullptr;};
        inline const vector<Schema::Columns> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<Schema::Columns>) };
        inline vector<Schema::Columns> getColumns() { DARABONBA_PTR_GET(columns_, vector<Schema::Columns>) };
        inline Schema& setColumns(const vector<Schema::Columns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
        inline Schema& setColumns(vector<Schema::Columns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline Schema& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Schema& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // partitions Field Functions 
        bool hasPartitions() const { return this->partitions_ != nullptr;};
        void deletePartitions() { this->partitions_ = nullptr;};
        inline const vector<Schema::Partitions> & getPartitions() const { DARABONBA_PTR_GET_CONST(partitions_, vector<Schema::Partitions>) };
        inline vector<Schema::Partitions> getPartitions() { DARABONBA_PTR_GET(partitions_, vector<Schema::Partitions>) };
        inline Schema& setPartitions(const vector<Schema::Partitions> & partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };
        inline Schema& setPartitions(vector<Schema::Partitions> && partitions) { DARABONBA_PTR_SET_RVALUE(partitions_, partitions) };


      protected:
        shared_ptr<vector<Schema::Columns>> columns_ {};
        shared_ptr<string> comment_ {};
        shared_ptr<string> name_ {};
        shared_ptr<vector<Schema::Partitions>> partitions_ {};
      };

      virtual bool empty() const override { return this->dbId_ == nullptr
        && this->dbName_ == nullptr && this->dstName_ == nullptr && this->dstProjectName_ == nullptr && this->dstSchemaName_ == nullptr && this->extra_ == nullptr
        && this->hasPartitions_ == nullptr && this->id_ == nullptr && this->inputFormat_ == nullptr && this->lastDdlTime_ == nullptr && this->location_ == nullptr
        && this->name_ == nullptr && this->numRows_ == nullptr && this->outputFormat_ == nullptr && this->owner_ == nullptr && this->partitions_ == nullptr
        && this->partitionsDoing_ == nullptr && this->partitionsDone_ == nullptr && this->partitionsFailed_ == nullptr && this->schema_ == nullptr && this->serde_ == nullptr
        && this->size_ == nullptr && this->sourceId_ == nullptr && this->sourceName_ == nullptr && this->status_ == nullptr && this->type_ == nullptr
        && this->updated_ == nullptr; };
      // dbId Field Functions 
      bool hasDbId() const { return this->dbId_ != nullptr;};
      void deleteDbId() { this->dbId_ = nullptr;};
      inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
      inline Data& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


      // dbName Field Functions 
      bool hasDbName() const { return this->dbName_ != nullptr;};
      void deleteDbName() { this->dbName_ = nullptr;};
      inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
      inline Data& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


      // dstName Field Functions 
      bool hasDstName() const { return this->dstName_ != nullptr;};
      void deleteDstName() { this->dstName_ = nullptr;};
      inline string getDstName() const { DARABONBA_PTR_GET_DEFAULT(dstName_, "") };
      inline Data& setDstName(string dstName) { DARABONBA_PTR_SET_VALUE(dstName_, dstName) };


      // dstProjectName Field Functions 
      bool hasDstProjectName() const { return this->dstProjectName_ != nullptr;};
      void deleteDstProjectName() { this->dstProjectName_ = nullptr;};
      inline string getDstProjectName() const { DARABONBA_PTR_GET_DEFAULT(dstProjectName_, "") };
      inline Data& setDstProjectName(string dstProjectName) { DARABONBA_PTR_SET_VALUE(dstProjectName_, dstProjectName) };


      // dstSchemaName Field Functions 
      bool hasDstSchemaName() const { return this->dstSchemaName_ != nullptr;};
      void deleteDstSchemaName() { this->dstSchemaName_ = nullptr;};
      inline string getDstSchemaName() const { DARABONBA_PTR_GET_DEFAULT(dstSchemaName_, "") };
      inline Data& setDstSchemaName(string dstSchemaName) { DARABONBA_PTR_SET_VALUE(dstSchemaName_, dstSchemaName) };


      // extra Field Functions 
      bool hasExtra() const { return this->extra_ != nullptr;};
      void deleteExtra() { this->extra_ = nullptr;};
      inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
      inline Data& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


      // hasPartitions Field Functions 
      bool hasHasPartitions() const { return this->hasPartitions_ != nullptr;};
      void deleteHasPartitions() { this->hasPartitions_ = nullptr;};
      inline bool getHasPartitions() const { DARABONBA_PTR_GET_DEFAULT(hasPartitions_, false) };
      inline Data& setHasPartitions(bool hasPartitions) { DARABONBA_PTR_SET_VALUE(hasPartitions_, hasPartitions) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // inputFormat Field Functions 
      bool hasInputFormat() const { return this->inputFormat_ != nullptr;};
      void deleteInputFormat() { this->inputFormat_ = nullptr;};
      inline string getInputFormat() const { DARABONBA_PTR_GET_DEFAULT(inputFormat_, "") };
      inline Data& setInputFormat(string inputFormat) { DARABONBA_PTR_SET_VALUE(inputFormat_, inputFormat) };


      // lastDdlTime Field Functions 
      bool hasLastDdlTime() const { return this->lastDdlTime_ != nullptr;};
      void deleteLastDdlTime() { this->lastDdlTime_ = nullptr;};
      inline string getLastDdlTime() const { DARABONBA_PTR_GET_DEFAULT(lastDdlTime_, "") };
      inline Data& setLastDdlTime(string lastDdlTime) { DARABONBA_PTR_SET_VALUE(lastDdlTime_, lastDdlTime) };


      // location Field Functions 
      bool hasLocation() const { return this->location_ != nullptr;};
      void deleteLocation() { this->location_ = nullptr;};
      inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
      inline Data& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // numRows Field Functions 
      bool hasNumRows() const { return this->numRows_ != nullptr;};
      void deleteNumRows() { this->numRows_ = nullptr;};
      inline int64_t getNumRows() const { DARABONBA_PTR_GET_DEFAULT(numRows_, 0L) };
      inline Data& setNumRows(int64_t numRows) { DARABONBA_PTR_SET_VALUE(numRows_, numRows) };


      // outputFormat Field Functions 
      bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
      void deleteOutputFormat() { this->outputFormat_ = nullptr;};
      inline string getOutputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
      inline Data& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Data& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // partitions Field Functions 
      bool hasPartitions() const { return this->partitions_ != nullptr;};
      void deletePartitions() { this->partitions_ = nullptr;};
      inline int32_t getPartitions() const { DARABONBA_PTR_GET_DEFAULT(partitions_, 0) };
      inline Data& setPartitions(int32_t partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };


      // partitionsDoing Field Functions 
      bool hasPartitionsDoing() const { return this->partitionsDoing_ != nullptr;};
      void deletePartitionsDoing() { this->partitionsDoing_ = nullptr;};
      inline int32_t getPartitionsDoing() const { DARABONBA_PTR_GET_DEFAULT(partitionsDoing_, 0) };
      inline Data& setPartitionsDoing(int32_t partitionsDoing) { DARABONBA_PTR_SET_VALUE(partitionsDoing_, partitionsDoing) };


      // partitionsDone Field Functions 
      bool hasPartitionsDone() const { return this->partitionsDone_ != nullptr;};
      void deletePartitionsDone() { this->partitionsDone_ = nullptr;};
      inline int32_t getPartitionsDone() const { DARABONBA_PTR_GET_DEFAULT(partitionsDone_, 0) };
      inline Data& setPartitionsDone(int32_t partitionsDone) { DARABONBA_PTR_SET_VALUE(partitionsDone_, partitionsDone) };


      // partitionsFailed Field Functions 
      bool hasPartitionsFailed() const { return this->partitionsFailed_ != nullptr;};
      void deletePartitionsFailed() { this->partitionsFailed_ = nullptr;};
      inline int32_t getPartitionsFailed() const { DARABONBA_PTR_GET_DEFAULT(partitionsFailed_, 0) };
      inline Data& setPartitionsFailed(int32_t partitionsFailed) { DARABONBA_PTR_SET_VALUE(partitionsFailed_, partitionsFailed) };


      // schema Field Functions 
      bool hasSchema() const { return this->schema_ != nullptr;};
      void deleteSchema() { this->schema_ = nullptr;};
      inline const Data::Schema & getSchema() const { DARABONBA_PTR_GET_CONST(schema_, Data::Schema) };
      inline Data::Schema getSchema() { DARABONBA_PTR_GET(schema_, Data::Schema) };
      inline Data& setSchema(const Data::Schema & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
      inline Data& setSchema(Data::Schema && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


      // serde Field Functions 
      bool hasSerde() const { return this->serde_ != nullptr;};
      void deleteSerde() { this->serde_ = nullptr;};
      inline string getSerde() const { DARABONBA_PTR_GET_DEFAULT(serde_, "") };
      inline Data& setSerde(string serde) { DARABONBA_PTR_SET_VALUE(serde_, serde) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline Data& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // sourceId Field Functions 
      bool hasSourceId() const { return this->sourceId_ != nullptr;};
      void deleteSourceId() { this->sourceId_ = nullptr;};
      inline int64_t getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
      inline Data& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


      // sourceName Field Functions 
      bool hasSourceName() const { return this->sourceName_ != nullptr;};
      void deleteSourceName() { this->sourceName_ = nullptr;};
      inline string getSourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
      inline Data& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updated Field Functions 
      bool hasUpdated() const { return this->updated_ != nullptr;};
      void deleteUpdated() { this->updated_ = nullptr;};
      inline bool getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, false) };
      inline Data& setUpdated(bool updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


    protected:
      shared_ptr<int64_t> dbId_ {};
      shared_ptr<string> dbName_ {};
      shared_ptr<string> dstName_ {};
      shared_ptr<string> dstProjectName_ {};
      shared_ptr<string> dstSchemaName_ {};
      shared_ptr<string> extra_ {};
      shared_ptr<bool> hasPartitions_ {};
      // table ID
      shared_ptr<int64_t> id_ {};
      // inputFormat
      shared_ptr<string> inputFormat_ {};
      // lastDdlTime
      shared_ptr<string> lastDdlTime_ {};
      shared_ptr<string> location_ {};
      shared_ptr<string> name_ {};
      shared_ptr<int64_t> numRows_ {};
      // outputFormat
      shared_ptr<string> outputFormat_ {};
      shared_ptr<string> owner_ {};
      shared_ptr<int32_t> partitions_ {};
      shared_ptr<int32_t> partitionsDoing_ {};
      shared_ptr<int32_t> partitionsDone_ {};
      shared_ptr<int32_t> partitionsFailed_ {};
      shared_ptr<Data::Schema> schema_ {};
      // serde
      shared_ptr<string> serde_ {};
      shared_ptr<int64_t> size_ {};
      shared_ptr<int64_t> sourceId_ {};
      shared_ptr<string> sourceName_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> type_ {};
      shared_ptr<bool> updated_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMmsTableResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMmsTableResponseBody::Data) };
    inline GetMmsTableResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMmsTableResponseBody::Data) };
    inline GetMmsTableResponseBody& setData(const GetMmsTableResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMmsTableResponseBody& setData(GetMmsTableResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMmsTableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetMmsTableResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
