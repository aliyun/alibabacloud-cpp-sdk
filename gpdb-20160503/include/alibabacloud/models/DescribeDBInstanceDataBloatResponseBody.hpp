// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDATABLOATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDATABLOATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstanceDataBloatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceDataBloatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceDataBloatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDBInstanceDataBloatResponseBody() = default ;
    DescribeDBInstanceDataBloatResponseBody(const DescribeDBInstanceDataBloatResponseBody &) = default ;
    DescribeDBInstanceDataBloatResponseBody(DescribeDBInstanceDataBloatResponseBody &&) = default ;
    DescribeDBInstanceDataBloatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceDataBloatResponseBody() = default ;
    DescribeDBInstanceDataBloatResponseBody& operator=(const DescribeDBInstanceDataBloatResponseBody &) = default ;
    DescribeDBInstanceDataBloatResponseBody& operator=(DescribeDBInstanceDataBloatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(BloatCeoff, bloatCeoff_);
        DARABONBA_PTR_TO_JSON(BloatSize, bloatSize_);
        DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_TO_JSON(ExpectTableSize, expectTableSize_);
        DARABONBA_PTR_TO_JSON(RealTableSize, realTableSize_);
        DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_TO_JSON(Sequence, sequence_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
        DARABONBA_PTR_TO_JSON(SuggestedAction, suggestedAction_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
        DARABONBA_PTR_TO_JSON(TimeLastUpdated, timeLastUpdated_);
        DARABONBA_PTR_TO_JSON(TimeLastVacuumed, timeLastVacuumed_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(BloatCeoff, bloatCeoff_);
        DARABONBA_PTR_FROM_JSON(BloatSize, bloatSize_);
        DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_FROM_JSON(ExpectTableSize, expectTableSize_);
        DARABONBA_PTR_FROM_JSON(RealTableSize, realTableSize_);
        DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
        DARABONBA_PTR_FROM_JSON(SuggestedAction, suggestedAction_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        DARABONBA_PTR_FROM_JSON(TimeLastUpdated, timeLastUpdated_);
        DARABONBA_PTR_FROM_JSON(TimeLastVacuumed, timeLastVacuumed_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bloatCeoff_ == nullptr
        && this->bloatSize_ == nullptr && this->databaseName_ == nullptr && this->expectTableSize_ == nullptr && this->realTableSize_ == nullptr && this->schemaName_ == nullptr
        && this->sequence_ == nullptr && this->storageType_ == nullptr && this->suggestedAction_ == nullptr && this->tableName_ == nullptr && this->timeLastUpdated_ == nullptr
        && this->timeLastVacuumed_ == nullptr; };
      // bloatCeoff Field Functions 
      bool hasBloatCeoff() const { return this->bloatCeoff_ != nullptr;};
      void deleteBloatCeoff() { this->bloatCeoff_ = nullptr;};
      inline string getBloatCeoff() const { DARABONBA_PTR_GET_DEFAULT(bloatCeoff_, "") };
      inline Items& setBloatCeoff(string bloatCeoff) { DARABONBA_PTR_SET_VALUE(bloatCeoff_, bloatCeoff) };


      // bloatSize Field Functions 
      bool hasBloatSize() const { return this->bloatSize_ != nullptr;};
      void deleteBloatSize() { this->bloatSize_ = nullptr;};
      inline string getBloatSize() const { DARABONBA_PTR_GET_DEFAULT(bloatSize_, "") };
      inline Items& setBloatSize(string bloatSize) { DARABONBA_PTR_SET_VALUE(bloatSize_, bloatSize) };


      // databaseName Field Functions 
      bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
      void deleteDatabaseName() { this->databaseName_ = nullptr;};
      inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
      inline Items& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


      // expectTableSize Field Functions 
      bool hasExpectTableSize() const { return this->expectTableSize_ != nullptr;};
      void deleteExpectTableSize() { this->expectTableSize_ = nullptr;};
      inline string getExpectTableSize() const { DARABONBA_PTR_GET_DEFAULT(expectTableSize_, "") };
      inline Items& setExpectTableSize(string expectTableSize) { DARABONBA_PTR_SET_VALUE(expectTableSize_, expectTableSize) };


      // realTableSize Field Functions 
      bool hasRealTableSize() const { return this->realTableSize_ != nullptr;};
      void deleteRealTableSize() { this->realTableSize_ = nullptr;};
      inline string getRealTableSize() const { DARABONBA_PTR_GET_DEFAULT(realTableSize_, "") };
      inline Items& setRealTableSize(string realTableSize) { DARABONBA_PTR_SET_VALUE(realTableSize_, realTableSize) };


      // schemaName Field Functions 
      bool hasSchemaName() const { return this->schemaName_ != nullptr;};
      void deleteSchemaName() { this->schemaName_ = nullptr;};
      inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
      inline Items& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


      // sequence Field Functions 
      bool hasSequence() const { return this->sequence_ != nullptr;};
      void deleteSequence() { this->sequence_ = nullptr;};
      inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
      inline Items& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline Items& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      // suggestedAction Field Functions 
      bool hasSuggestedAction() const { return this->suggestedAction_ != nullptr;};
      void deleteSuggestedAction() { this->suggestedAction_ = nullptr;};
      inline string getSuggestedAction() const { DARABONBA_PTR_GET_DEFAULT(suggestedAction_, "") };
      inline Items& setSuggestedAction(string suggestedAction) { DARABONBA_PTR_SET_VALUE(suggestedAction_, suggestedAction) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline Items& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      // timeLastUpdated Field Functions 
      bool hasTimeLastUpdated() const { return this->timeLastUpdated_ != nullptr;};
      void deleteTimeLastUpdated() { this->timeLastUpdated_ = nullptr;};
      inline string getTimeLastUpdated() const { DARABONBA_PTR_GET_DEFAULT(timeLastUpdated_, "") };
      inline Items& setTimeLastUpdated(string timeLastUpdated) { DARABONBA_PTR_SET_VALUE(timeLastUpdated_, timeLastUpdated) };


      // timeLastVacuumed Field Functions 
      bool hasTimeLastVacuumed() const { return this->timeLastVacuumed_ != nullptr;};
      void deleteTimeLastVacuumed() { this->timeLastVacuumed_ = nullptr;};
      inline string getTimeLastVacuumed() const { DARABONBA_PTR_GET_DEFAULT(timeLastVacuumed_, "") };
      inline Items& setTimeLastVacuumed(string timeLastVacuumed) { DARABONBA_PTR_SET_VALUE(timeLastVacuumed_, timeLastVacuumed) };


    protected:
      // The coefficient of data bloat. It is calculated by using the following formula:
      // 
      // Bloat coefficient = Number of dead rows/Number of active rows.
      shared_ptr<string> bloatCeoff_ {};
      // The bloat size of the table. It indicates the amount of space that can be released.
      shared_ptr<string> bloatSize_ {};
      // The name of the database.
      shared_ptr<string> databaseName_ {};
      // The expected size of the table.
      // 
      // It indicates the size of the table that has no data bloat.
      shared_ptr<string> expectTableSize_ {};
      // The actual size of the table.
      shared_ptr<string> realTableSize_ {};
      // The name of the schema.
      shared_ptr<string> schemaName_ {};
      // The sequence number.
      shared_ptr<int32_t> sequence_ {};
      // The storage type of the table. Valid values:
      // 
      // *   **Heap Table**
      // *   **Append-Only Heap Table**
      // *   **Append-Only Columnar Table**
      shared_ptr<string> storageType_ {};
      // This parameter is not returned.
      shared_ptr<string> suggestedAction_ {};
      // The name of the table.
      shared_ptr<string> tableName_ {};
      // The time when the table was last deleted, inserted, or updated.
      shared_ptr<string> timeLastUpdated_ {};
      // The time when the table was last vacuumed. The time is displayed in UTC.
      shared_ptr<string> timeLastVacuumed_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeDBInstanceDataBloatResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeDBInstanceDataBloatResponseBody::Items>) };
    inline vector<DescribeDBInstanceDataBloatResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeDBInstanceDataBloatResponseBody::Items>) };
    inline DescribeDBInstanceDataBloatResponseBody& setItems(const vector<DescribeDBInstanceDataBloatResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBInstanceDataBloatResponseBody& setItems(vector<DescribeDBInstanceDataBloatResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDBInstanceDataBloatResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceDataBloatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDBInstanceDataBloatResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried data bloat.
    shared_ptr<vector<DescribeDBInstanceDataBloatResponseBody::Items>> items_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
