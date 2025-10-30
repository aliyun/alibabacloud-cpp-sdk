// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDATASKEWRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDATASKEWRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstanceDataSkewResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceDataSkewResponseBodyItems& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceDataSkewResponseBodyItems& obj) { 
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
    DescribeDBInstanceDataSkewResponseBodyItems() = default ;
    DescribeDBInstanceDataSkewResponseBodyItems(const DescribeDBInstanceDataSkewResponseBodyItems &) = default ;
    DescribeDBInstanceDataSkewResponseBodyItems(DescribeDBInstanceDataSkewResponseBodyItems &&) = default ;
    DescribeDBInstanceDataSkewResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceDataSkewResponseBodyItems() = default ;
    DescribeDBInstanceDataSkewResponseBodyItems& operator=(const DescribeDBInstanceDataSkewResponseBodyItems &) = default ;
    DescribeDBInstanceDataSkewResponseBodyItems& operator=(DescribeDBInstanceDataSkewResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseName_ == nullptr
        && return this->distributeKey_ == nullptr && return this->owner_ == nullptr && return this->schemaName_ == nullptr && return this->sequence_ == nullptr && return this->tableName_ == nullptr
        && return this->tableSize_ == nullptr && return this->tableSkew_ == nullptr && return this->timeLastUpdated_ == nullptr; };
    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline DescribeDBInstanceDataSkewResponseBodyItems& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // distributeKey Field Functions 
    bool hasDistributeKey() const { return this->distributeKey_ != nullptr;};
    void deleteDistributeKey() { this->distributeKey_ = nullptr;};
    inline string distributeKey() const { DARABONBA_PTR_GET_DEFAULT(distributeKey_, "") };
    inline DescribeDBInstanceDataSkewResponseBodyItems& setDistributeKey(string distributeKey) { DARABONBA_PTR_SET_VALUE(distributeKey_, distributeKey) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline DescribeDBInstanceDataSkewResponseBodyItems& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline DescribeDBInstanceDataSkewResponseBodyItems& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline DescribeDBInstanceDataSkewResponseBodyItems& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeDBInstanceDataSkewResponseBodyItems& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tableSize Field Functions 
    bool hasTableSize() const { return this->tableSize_ != nullptr;};
    void deleteTableSize() { this->tableSize_ = nullptr;};
    inline string tableSize() const { DARABONBA_PTR_GET_DEFAULT(tableSize_, "") };
    inline DescribeDBInstanceDataSkewResponseBodyItems& setTableSize(string tableSize) { DARABONBA_PTR_SET_VALUE(tableSize_, tableSize) };


    // tableSkew Field Functions 
    bool hasTableSkew() const { return this->tableSkew_ != nullptr;};
    void deleteTableSkew() { this->tableSkew_ = nullptr;};
    inline string tableSkew() const { DARABONBA_PTR_GET_DEFAULT(tableSkew_, "") };
    inline DescribeDBInstanceDataSkewResponseBodyItems& setTableSkew(string tableSkew) { DARABONBA_PTR_SET_VALUE(tableSkew_, tableSkew) };


    // timeLastUpdated Field Functions 
    bool hasTimeLastUpdated() const { return this->timeLastUpdated_ != nullptr;};
    void deleteTimeLastUpdated() { this->timeLastUpdated_ = nullptr;};
    inline string timeLastUpdated() const { DARABONBA_PTR_GET_DEFAULT(timeLastUpdated_, "") };
    inline DescribeDBInstanceDataSkewResponseBodyItems& setTimeLastUpdated(string timeLastUpdated) { DARABONBA_PTR_SET_VALUE(timeLastUpdated_, timeLastUpdated) };


  protected:
    // The name of the database.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The distribution key of the table.
    std::shared_ptr<string> distributeKey_ = nullptr;
    // The owner of the table.
    std::shared_ptr<string> owner_ = nullptr;
    // The name of the schema.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The sequence number of the data skew case. All data skew cases are sorted by severity in descending order.
    std::shared_ptr<int32_t> sequence_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
    // The total number of rows in the table.
    std::shared_ptr<string> tableSize_ = nullptr;
    // The skew ratio of the table. Valid values: 0 to 100. Unit: %. A greater value indicates that the table is more severely skewed. A smaller value indicates less impact on query performance. A value of 0 indicates no data skew.
    std::shared_ptr<string> tableSkew_ = nullptr;
    // The time when the table was last deleted, inserted, or updated.
    std::shared_ptr<string> timeLastUpdated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
