// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FIELDSCHEMAMODEL_HPP_
#define ALIBABACLOUD_MODELS_FIELDSCHEMAMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class FieldSchemaModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FieldSchemaModel& obj) { 
      DARABONBA_PTR_TO_JSON(AutoIncrement, autoIncrement_);
      DARABONBA_PTR_TO_JSON(ColumnRawName, columnRawName_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CompressFloatUseShort, compressFloatUseShort_);
      DARABONBA_PTR_TO_JSON(Compression, compression_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(Delimiter, delimiter_);
      DARABONBA_PTR_TO_JSON(Encode, encode_);
      DARABONBA_PTR_TO_JSON(IsPartitionKey, isPartitionKey_);
      DARABONBA_PTR_TO_JSON(MappedName, mappedName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Nullable, nullable_);
      DARABONBA_PTR_TO_JSON(OnUpdate, onUpdate_);
      DARABONBA_PTR_TO_JSON(OrdinalPosition, ordinalPosition_);
      DARABONBA_PTR_TO_JSON(PhysicalColumnName, physicalColumnName_);
      DARABONBA_PTR_TO_JSON(PkPosition, pkPosition_);
      DARABONBA_PTR_TO_JSON(Precision, precision_);
      DARABONBA_PTR_TO_JSON(Primarykey, primarykey_);
      DARABONBA_PTR_TO_JSON(Scale, scale_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(Tokenizer, tokenizer_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(ValueType, valueType_);
    };
    friend void from_json(const Darabonba::Json& j, FieldSchemaModel& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoIncrement, autoIncrement_);
      DARABONBA_PTR_FROM_JSON(ColumnRawName, columnRawName_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CompressFloatUseShort, compressFloatUseShort_);
      DARABONBA_PTR_FROM_JSON(Compression, compression_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(Delimiter, delimiter_);
      DARABONBA_PTR_FROM_JSON(Encode, encode_);
      DARABONBA_PTR_FROM_JSON(IsPartitionKey, isPartitionKey_);
      DARABONBA_PTR_FROM_JSON(MappedName, mappedName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Nullable, nullable_);
      DARABONBA_PTR_FROM_JSON(OnUpdate, onUpdate_);
      DARABONBA_PTR_FROM_JSON(OrdinalPosition, ordinalPosition_);
      DARABONBA_PTR_FROM_JSON(PhysicalColumnName, physicalColumnName_);
      DARABONBA_PTR_FROM_JSON(PkPosition, pkPosition_);
      DARABONBA_PTR_FROM_JSON(Precision, precision_);
      DARABONBA_PTR_FROM_JSON(Primarykey, primarykey_);
      DARABONBA_PTR_FROM_JSON(Scale, scale_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(Tokenizer, tokenizer_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
    };
    FieldSchemaModel() = default ;
    FieldSchemaModel(const FieldSchemaModel &) = default ;
    FieldSchemaModel(FieldSchemaModel &&) = default ;
    FieldSchemaModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FieldSchemaModel() = default ;
    FieldSchemaModel& operator=(const FieldSchemaModel &) = default ;
    FieldSchemaModel& operator=(FieldSchemaModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoIncrement_ != nullptr
        && this->columnRawName_ != nullptr && this->comment_ != nullptr && this->compressFloatUseShort_ != nullptr && this->compression_ != nullptr && this->createTime_ != nullptr
        && this->dataType_ != nullptr && this->databaseName_ != nullptr && this->defaultValue_ != nullptr && this->delimiter_ != nullptr && this->encode_ != nullptr
        && this->isPartitionKey_ != nullptr && this->mappedName_ != nullptr && this->name_ != nullptr && this->nullable_ != nullptr && this->onUpdate_ != nullptr
        && this->ordinalPosition_ != nullptr && this->physicalColumnName_ != nullptr && this->pkPosition_ != nullptr && this->precision_ != nullptr && this->primarykey_ != nullptr
        && this->scale_ != nullptr && this->tableName_ != nullptr && this->tokenizer_ != nullptr && this->type_ != nullptr && this->updateTime_ != nullptr
        && this->valueType_ != nullptr; };
    // autoIncrement Field Functions 
    bool hasAutoIncrement() const { return this->autoIncrement_ != nullptr;};
    void deleteAutoIncrement() { this->autoIncrement_ = nullptr;};
    inline bool autoIncrement() const { DARABONBA_PTR_GET_DEFAULT(autoIncrement_, false) };
    inline FieldSchemaModel& setAutoIncrement(bool autoIncrement) { DARABONBA_PTR_SET_VALUE(autoIncrement_, autoIncrement) };


    // columnRawName Field Functions 
    bool hasColumnRawName() const { return this->columnRawName_ != nullptr;};
    void deleteColumnRawName() { this->columnRawName_ = nullptr;};
    inline string columnRawName() const { DARABONBA_PTR_GET_DEFAULT(columnRawName_, "") };
    inline FieldSchemaModel& setColumnRawName(string columnRawName) { DARABONBA_PTR_SET_VALUE(columnRawName_, columnRawName) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline FieldSchemaModel& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // compressFloatUseShort Field Functions 
    bool hasCompressFloatUseShort() const { return this->compressFloatUseShort_ != nullptr;};
    void deleteCompressFloatUseShort() { this->compressFloatUseShort_ = nullptr;};
    inline bool compressFloatUseShort() const { DARABONBA_PTR_GET_DEFAULT(compressFloatUseShort_, false) };
    inline FieldSchemaModel& setCompressFloatUseShort(bool compressFloatUseShort) { DARABONBA_PTR_SET_VALUE(compressFloatUseShort_, compressFloatUseShort) };


    // compression Field Functions 
    bool hasCompression() const { return this->compression_ != nullptr;};
    void deleteCompression() { this->compression_ = nullptr;};
    inline string compression() const { DARABONBA_PTR_GET_DEFAULT(compression_, "") };
    inline FieldSchemaModel& setCompression(string compression) { DARABONBA_PTR_SET_VALUE(compression_, compression) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline FieldSchemaModel& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline FieldSchemaModel& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline FieldSchemaModel& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline FieldSchemaModel& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // delimiter Field Functions 
    bool hasDelimiter() const { return this->delimiter_ != nullptr;};
    void deleteDelimiter() { this->delimiter_ = nullptr;};
    inline string delimiter() const { DARABONBA_PTR_GET_DEFAULT(delimiter_, "") };
    inline FieldSchemaModel& setDelimiter(string delimiter) { DARABONBA_PTR_SET_VALUE(delimiter_, delimiter) };


    // encode Field Functions 
    bool hasEncode() const { return this->encode_ != nullptr;};
    void deleteEncode() { this->encode_ = nullptr;};
    inline string encode() const { DARABONBA_PTR_GET_DEFAULT(encode_, "") };
    inline FieldSchemaModel& setEncode(string encode) { DARABONBA_PTR_SET_VALUE(encode_, encode) };


    // isPartitionKey Field Functions 
    bool hasIsPartitionKey() const { return this->isPartitionKey_ != nullptr;};
    void deleteIsPartitionKey() { this->isPartitionKey_ = nullptr;};
    inline bool isPartitionKey() const { DARABONBA_PTR_GET_DEFAULT(isPartitionKey_, false) };
    inline FieldSchemaModel& setIsPartitionKey(bool isPartitionKey) { DARABONBA_PTR_SET_VALUE(isPartitionKey_, isPartitionKey) };


    // mappedName Field Functions 
    bool hasMappedName() const { return this->mappedName_ != nullptr;};
    void deleteMappedName() { this->mappedName_ = nullptr;};
    inline string mappedName() const { DARABONBA_PTR_GET_DEFAULT(mappedName_, "") };
    inline FieldSchemaModel& setMappedName(string mappedName) { DARABONBA_PTR_SET_VALUE(mappedName_, mappedName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline FieldSchemaModel& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nullable Field Functions 
    bool hasNullable() const { return this->nullable_ != nullptr;};
    void deleteNullable() { this->nullable_ = nullptr;};
    inline bool nullable() const { DARABONBA_PTR_GET_DEFAULT(nullable_, false) };
    inline FieldSchemaModel& setNullable(bool nullable) { DARABONBA_PTR_SET_VALUE(nullable_, nullable) };


    // onUpdate Field Functions 
    bool hasOnUpdate() const { return this->onUpdate_ != nullptr;};
    void deleteOnUpdate() { this->onUpdate_ = nullptr;};
    inline string onUpdate() const { DARABONBA_PTR_GET_DEFAULT(onUpdate_, "") };
    inline FieldSchemaModel& setOnUpdate(string onUpdate) { DARABONBA_PTR_SET_VALUE(onUpdate_, onUpdate) };


    // ordinalPosition Field Functions 
    bool hasOrdinalPosition() const { return this->ordinalPosition_ != nullptr;};
    void deleteOrdinalPosition() { this->ordinalPosition_ = nullptr;};
    inline int64_t ordinalPosition() const { DARABONBA_PTR_GET_DEFAULT(ordinalPosition_, 0L) };
    inline FieldSchemaModel& setOrdinalPosition(int64_t ordinalPosition) { DARABONBA_PTR_SET_VALUE(ordinalPosition_, ordinalPosition) };


    // physicalColumnName Field Functions 
    bool hasPhysicalColumnName() const { return this->physicalColumnName_ != nullptr;};
    void deletePhysicalColumnName() { this->physicalColumnName_ = nullptr;};
    inline string physicalColumnName() const { DARABONBA_PTR_GET_DEFAULT(physicalColumnName_, "") };
    inline FieldSchemaModel& setPhysicalColumnName(string physicalColumnName) { DARABONBA_PTR_SET_VALUE(physicalColumnName_, physicalColumnName) };


    // pkPosition Field Functions 
    bool hasPkPosition() const { return this->pkPosition_ != nullptr;};
    void deletePkPosition() { this->pkPosition_ = nullptr;};
    inline int64_t pkPosition() const { DARABONBA_PTR_GET_DEFAULT(pkPosition_, 0L) };
    inline FieldSchemaModel& setPkPosition(int64_t pkPosition) { DARABONBA_PTR_SET_VALUE(pkPosition_, pkPosition) };


    // precision Field Functions 
    bool hasPrecision() const { return this->precision_ != nullptr;};
    void deletePrecision() { this->precision_ = nullptr;};
    inline int64_t precision() const { DARABONBA_PTR_GET_DEFAULT(precision_, 0L) };
    inline FieldSchemaModel& setPrecision(int64_t precision) { DARABONBA_PTR_SET_VALUE(precision_, precision) };


    // primarykey Field Functions 
    bool hasPrimarykey() const { return this->primarykey_ != nullptr;};
    void deletePrimarykey() { this->primarykey_ = nullptr;};
    inline bool primarykey() const { DARABONBA_PTR_GET_DEFAULT(primarykey_, false) };
    inline FieldSchemaModel& setPrimarykey(bool primarykey) { DARABONBA_PTR_SET_VALUE(primarykey_, primarykey) };


    // scale Field Functions 
    bool hasScale() const { return this->scale_ != nullptr;};
    void deleteScale() { this->scale_ = nullptr;};
    inline int64_t scale() const { DARABONBA_PTR_GET_DEFAULT(scale_, 0L) };
    inline FieldSchemaModel& setScale(int64_t scale) { DARABONBA_PTR_SET_VALUE(scale_, scale) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline FieldSchemaModel& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tokenizer Field Functions 
    bool hasTokenizer() const { return this->tokenizer_ != nullptr;};
    void deleteTokenizer() { this->tokenizer_ = nullptr;};
    inline string tokenizer() const { DARABONBA_PTR_GET_DEFAULT(tokenizer_, "") };
    inline FieldSchemaModel& setTokenizer(string tokenizer) { DARABONBA_PTR_SET_VALUE(tokenizer_, tokenizer) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline FieldSchemaModel& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline FieldSchemaModel& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // valueType Field Functions 
    bool hasValueType() const { return this->valueType_ != nullptr;};
    void deleteValueType() { this->valueType_ = nullptr;};
    inline string valueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
    inline FieldSchemaModel& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


  protected:
    std::shared_ptr<bool> autoIncrement_ = nullptr;
    std::shared_ptr<string> columnRawName_ = nullptr;
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<bool> compressFloatUseShort_ = nullptr;
    std::shared_ptr<string> compression_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> dataType_ = nullptr;
    std::shared_ptr<string> databaseName_ = nullptr;
    std::shared_ptr<string> defaultValue_ = nullptr;
    std::shared_ptr<string> delimiter_ = nullptr;
    std::shared_ptr<string> encode_ = nullptr;
    std::shared_ptr<bool> isPartitionKey_ = nullptr;
    std::shared_ptr<string> mappedName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> nullable_ = nullptr;
    std::shared_ptr<string> onUpdate_ = nullptr;
    std::shared_ptr<int64_t> ordinalPosition_ = nullptr;
    std::shared_ptr<string> physicalColumnName_ = nullptr;
    std::shared_ptr<int64_t> pkPosition_ = nullptr;
    std::shared_ptr<int64_t> precision_ = nullptr;
    std::shared_ptr<bool> primarykey_ = nullptr;
    std::shared_ptr<int64_t> scale_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<string> tokenizer_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> valueType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
