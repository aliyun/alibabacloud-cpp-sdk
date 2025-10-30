// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDATABLOATRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDATABLOATRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstanceDataBloatResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceDataBloatResponseBodyItems& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceDataBloatResponseBodyItems& obj) { 
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
    DescribeDBInstanceDataBloatResponseBodyItems() = default ;
    DescribeDBInstanceDataBloatResponseBodyItems(const DescribeDBInstanceDataBloatResponseBodyItems &) = default ;
    DescribeDBInstanceDataBloatResponseBodyItems(DescribeDBInstanceDataBloatResponseBodyItems &&) = default ;
    DescribeDBInstanceDataBloatResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceDataBloatResponseBodyItems() = default ;
    DescribeDBInstanceDataBloatResponseBodyItems& operator=(const DescribeDBInstanceDataBloatResponseBodyItems &) = default ;
    DescribeDBInstanceDataBloatResponseBodyItems& operator=(DescribeDBInstanceDataBloatResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bloatCeoff_ == nullptr
        && return this->bloatSize_ == nullptr && return this->databaseName_ == nullptr && return this->expectTableSize_ == nullptr && return this->realTableSize_ == nullptr && return this->schemaName_ == nullptr
        && return this->sequence_ == nullptr && return this->storageType_ == nullptr && return this->suggestedAction_ == nullptr && return this->tableName_ == nullptr && return this->timeLastUpdated_ == nullptr
        && return this->timeLastVacuumed_ == nullptr; };
    // bloatCeoff Field Functions 
    bool hasBloatCeoff() const { return this->bloatCeoff_ != nullptr;};
    void deleteBloatCeoff() { this->bloatCeoff_ = nullptr;};
    inline string bloatCeoff() const { DARABONBA_PTR_GET_DEFAULT(bloatCeoff_, "") };
    inline DescribeDBInstanceDataBloatResponseBodyItems& setBloatCeoff(string bloatCeoff) { DARABONBA_PTR_SET_VALUE(bloatCeoff_, bloatCeoff) };


    // bloatSize Field Functions 
    bool hasBloatSize() const { return this->bloatSize_ != nullptr;};
    void deleteBloatSize() { this->bloatSize_ = nullptr;};
    inline string bloatSize() const { DARABONBA_PTR_GET_DEFAULT(bloatSize_, "") };
    inline DescribeDBInstanceDataBloatResponseBodyItems& setBloatSize(string bloatSize) { DARABONBA_PTR_SET_VALUE(bloatSize_, bloatSize) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline DescribeDBInstanceDataBloatResponseBodyItems& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // expectTableSize Field Functions 
    bool hasExpectTableSize() const { return this->expectTableSize_ != nullptr;};
    void deleteExpectTableSize() { this->expectTableSize_ = nullptr;};
    inline string expectTableSize() const { DARABONBA_PTR_GET_DEFAULT(expectTableSize_, "") };
    inline DescribeDBInstanceDataBloatResponseBodyItems& setExpectTableSize(string expectTableSize) { DARABONBA_PTR_SET_VALUE(expectTableSize_, expectTableSize) };


    // realTableSize Field Functions 
    bool hasRealTableSize() const { return this->realTableSize_ != nullptr;};
    void deleteRealTableSize() { this->realTableSize_ = nullptr;};
    inline string realTableSize() const { DARABONBA_PTR_GET_DEFAULT(realTableSize_, "") };
    inline DescribeDBInstanceDataBloatResponseBodyItems& setRealTableSize(string realTableSize) { DARABONBA_PTR_SET_VALUE(realTableSize_, realTableSize) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline DescribeDBInstanceDataBloatResponseBodyItems& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline DescribeDBInstanceDataBloatResponseBodyItems& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeDBInstanceDataBloatResponseBodyItems& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // suggestedAction Field Functions 
    bool hasSuggestedAction() const { return this->suggestedAction_ != nullptr;};
    void deleteSuggestedAction() { this->suggestedAction_ = nullptr;};
    inline string suggestedAction() const { DARABONBA_PTR_GET_DEFAULT(suggestedAction_, "") };
    inline DescribeDBInstanceDataBloatResponseBodyItems& setSuggestedAction(string suggestedAction) { DARABONBA_PTR_SET_VALUE(suggestedAction_, suggestedAction) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeDBInstanceDataBloatResponseBodyItems& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // timeLastUpdated Field Functions 
    bool hasTimeLastUpdated() const { return this->timeLastUpdated_ != nullptr;};
    void deleteTimeLastUpdated() { this->timeLastUpdated_ = nullptr;};
    inline string timeLastUpdated() const { DARABONBA_PTR_GET_DEFAULT(timeLastUpdated_, "") };
    inline DescribeDBInstanceDataBloatResponseBodyItems& setTimeLastUpdated(string timeLastUpdated) { DARABONBA_PTR_SET_VALUE(timeLastUpdated_, timeLastUpdated) };


    // timeLastVacuumed Field Functions 
    bool hasTimeLastVacuumed() const { return this->timeLastVacuumed_ != nullptr;};
    void deleteTimeLastVacuumed() { this->timeLastVacuumed_ = nullptr;};
    inline string timeLastVacuumed() const { DARABONBA_PTR_GET_DEFAULT(timeLastVacuumed_, "") };
    inline DescribeDBInstanceDataBloatResponseBodyItems& setTimeLastVacuumed(string timeLastVacuumed) { DARABONBA_PTR_SET_VALUE(timeLastVacuumed_, timeLastVacuumed) };


  protected:
    // The coefficient of data bloat. It is calculated by using the following formula:
    // 
    // Bloat coefficient = Number of dead rows/Number of active rows.
    std::shared_ptr<string> bloatCeoff_ = nullptr;
    // The bloat size of the table. It indicates the amount of space that can be released.
    std::shared_ptr<string> bloatSize_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The expected size of the table.
    // 
    // It indicates the size of the table that has no data bloat.
    std::shared_ptr<string> expectTableSize_ = nullptr;
    // The actual size of the table.
    std::shared_ptr<string> realTableSize_ = nullptr;
    // The name of the schema.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The sequence number.
    std::shared_ptr<int32_t> sequence_ = nullptr;
    // The storage type of the table. Valid values:
    // 
    // *   **Heap Table**
    // *   **Append-Only Heap Table**
    // *   **Append-Only Columnar Table**
    std::shared_ptr<string> storageType_ = nullptr;
    // This parameter is not returned.
    std::shared_ptr<string> suggestedAction_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
    // The time when the table was last deleted, inserted, or updated.
    std::shared_ptr<string> timeLastUpdated_ = nullptr;
    // The time when the table was last vacuumed. The time is displayed in UTC.
    std::shared_ptr<string> timeLastVacuumed_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
