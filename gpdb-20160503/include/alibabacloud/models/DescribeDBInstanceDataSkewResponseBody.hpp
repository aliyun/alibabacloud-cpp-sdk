// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDATASKEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDATASKEWRESPONSEBODY_HPP_
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
  class DescribeDBInstanceDataSkewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceDataSkewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceDataSkewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDBInstanceDataSkewResponseBody() = default ;
    DescribeDBInstanceDataSkewResponseBody(const DescribeDBInstanceDataSkewResponseBody &) = default ;
    DescribeDBInstanceDataSkewResponseBody(DescribeDBInstanceDataSkewResponseBody &&) = default ;
    DescribeDBInstanceDataSkewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceDataSkewResponseBody() = default ;
    DescribeDBInstanceDataSkewResponseBody& operator=(const DescribeDBInstanceDataSkewResponseBody &) = default ;
    DescribeDBInstanceDataSkewResponseBody& operator=(DescribeDBInstanceDataSkewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_TO_JSON(DistributeKey, distributeKey_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_TO_JSON(Sequence, sequence_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
        DARABONBA_PTR_TO_JSON(TableSize, tableSize_);
        DARABONBA_PTR_TO_JSON(TableSkew, tableSkew_);
        DARABONBA_PTR_TO_JSON(TimeLastUpdated, timeLastUpdated_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_FROM_JSON(DistributeKey, distributeKey_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        DARABONBA_PTR_FROM_JSON(TableSize, tableSize_);
        DARABONBA_PTR_FROM_JSON(TableSkew, tableSkew_);
        DARABONBA_PTR_FROM_JSON(TimeLastUpdated, timeLastUpdated_);
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
      virtual bool empty() const override { return this->databaseName_ == nullptr
        && this->distributeKey_ == nullptr && this->owner_ == nullptr && this->schemaName_ == nullptr && this->sequence_ == nullptr && this->tableName_ == nullptr
        && this->tableSize_ == nullptr && this->tableSkew_ == nullptr && this->timeLastUpdated_ == nullptr; };
      // databaseName Field Functions 
      bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
      void deleteDatabaseName() { this->databaseName_ = nullptr;};
      inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
      inline Items& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


      // distributeKey Field Functions 
      bool hasDistributeKey() const { return this->distributeKey_ != nullptr;};
      void deleteDistributeKey() { this->distributeKey_ = nullptr;};
      inline string getDistributeKey() const { DARABONBA_PTR_GET_DEFAULT(distributeKey_, "") };
      inline Items& setDistributeKey(string distributeKey) { DARABONBA_PTR_SET_VALUE(distributeKey_, distributeKey) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Items& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


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


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline Items& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      // tableSize Field Functions 
      bool hasTableSize() const { return this->tableSize_ != nullptr;};
      void deleteTableSize() { this->tableSize_ = nullptr;};
      inline string getTableSize() const { DARABONBA_PTR_GET_DEFAULT(tableSize_, "") };
      inline Items& setTableSize(string tableSize) { DARABONBA_PTR_SET_VALUE(tableSize_, tableSize) };


      // tableSkew Field Functions 
      bool hasTableSkew() const { return this->tableSkew_ != nullptr;};
      void deleteTableSkew() { this->tableSkew_ = nullptr;};
      inline string getTableSkew() const { DARABONBA_PTR_GET_DEFAULT(tableSkew_, "") };
      inline Items& setTableSkew(string tableSkew) { DARABONBA_PTR_SET_VALUE(tableSkew_, tableSkew) };


      // timeLastUpdated Field Functions 
      bool hasTimeLastUpdated() const { return this->timeLastUpdated_ != nullptr;};
      void deleteTimeLastUpdated() { this->timeLastUpdated_ = nullptr;};
      inline string getTimeLastUpdated() const { DARABONBA_PTR_GET_DEFAULT(timeLastUpdated_, "") };
      inline Items& setTimeLastUpdated(string timeLastUpdated) { DARABONBA_PTR_SET_VALUE(timeLastUpdated_, timeLastUpdated) };


    protected:
      // The name of the database.
      shared_ptr<string> databaseName_ {};
      // The distribution key of the table.
      shared_ptr<string> distributeKey_ {};
      // The owner of the table.
      shared_ptr<string> owner_ {};
      // The name of the schema.
      shared_ptr<string> schemaName_ {};
      // The sequence number of the data skew case. All data skew cases are sorted by severity in descending order.
      shared_ptr<int32_t> sequence_ {};
      // The name of the table.
      shared_ptr<string> tableName_ {};
      // The total number of rows in the table.
      shared_ptr<string> tableSize_ {};
      // The skew ratio of the table. Valid values: 0 to 100. Unit: %. A greater value indicates that the table is more severely skewed. A smaller value indicates less impact on query performance. A value of 0 indicates no data skew.
      shared_ptr<string> tableSkew_ {};
      // The time when the table was last deleted, inserted, or updated.
      shared_ptr<string> timeLastUpdated_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeDBInstanceDataSkewResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeDBInstanceDataSkewResponseBody::Items>) };
    inline vector<DescribeDBInstanceDataSkewResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeDBInstanceDataSkewResponseBody::Items>) };
    inline DescribeDBInstanceDataSkewResponseBody& setItems(const vector<DescribeDBInstanceDataSkewResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBInstanceDataSkewResponseBody& setItems(vector<DescribeDBInstanceDataSkewResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDBInstanceDataSkewResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceDataSkewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDBInstanceDataSkewResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about data skew.
    shared_ptr<vector<DescribeDBInstanceDataSkewResponseBody::Items>> items_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
