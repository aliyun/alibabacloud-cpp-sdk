// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COLUMNMETADATA_HPP_
#define ALIBABACLOUD_MODELS_COLUMNMETADATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ColumnMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ColumnMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnDefault, columnDefault_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(IsCaseSensitive, isCaseSensitive_);
      DARABONBA_PTR_TO_JSON(IsCurrency, isCurrency_);
      DARABONBA_PTR_TO_JSON(IsPrimaryKey, isPrimaryKey_);
      DARABONBA_PTR_TO_JSON(IsSigned, isSigned_);
      DARABONBA_PTR_TO_JSON(MaxLength, maxLength_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Nullable, nullable_);
      DARABONBA_PTR_TO_JSON(Precision, precision_);
      DARABONBA_PTR_TO_JSON(Scale, scale_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(UdtName, udtName_);
    };
    friend void from_json(const Darabonba::Json& j, ColumnMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnDefault, columnDefault_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(IsCaseSensitive, isCaseSensitive_);
      DARABONBA_PTR_FROM_JSON(IsCurrency, isCurrency_);
      DARABONBA_PTR_FROM_JSON(IsPrimaryKey, isPrimaryKey_);
      DARABONBA_PTR_FROM_JSON(IsSigned, isSigned_);
      DARABONBA_PTR_FROM_JSON(MaxLength, maxLength_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Nullable, nullable_);
      DARABONBA_PTR_FROM_JSON(Precision, precision_);
      DARABONBA_PTR_FROM_JSON(Scale, scale_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(UdtName, udtName_);
    };
    ColumnMetadata() = default ;
    ColumnMetadata(const ColumnMetadata &) = default ;
    ColumnMetadata(ColumnMetadata &&) = default ;
    ColumnMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ColumnMetadata() = default ;
    ColumnMetadata& operator=(const ColumnMetadata &) = default ;
    ColumnMetadata& operator=(ColumnMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnDefault_ != nullptr
        && this->comment_ != nullptr && this->dataType_ != nullptr && this->isCaseSensitive_ != nullptr && this->isCurrency_ != nullptr && this->isPrimaryKey_ != nullptr
        && this->isSigned_ != nullptr && this->maxLength_ != nullptr && this->name_ != nullptr && this->nullable_ != nullptr && this->precision_ != nullptr
        && this->scale_ != nullptr && this->schemaName_ != nullptr && this->tableName_ != nullptr && this->udtName_ != nullptr; };
    // columnDefault Field Functions 
    bool hasColumnDefault() const { return this->columnDefault_ != nullptr;};
    void deleteColumnDefault() { this->columnDefault_ = nullptr;};
    inline string columnDefault() const { DARABONBA_PTR_GET_DEFAULT(columnDefault_, "") };
    inline ColumnMetadata& setColumnDefault(string columnDefault) { DARABONBA_PTR_SET_VALUE(columnDefault_, columnDefault) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ColumnMetadata& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline ColumnMetadata& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // isCaseSensitive Field Functions 
    bool hasIsCaseSensitive() const { return this->isCaseSensitive_ != nullptr;};
    void deleteIsCaseSensitive() { this->isCaseSensitive_ = nullptr;};
    inline bool isCaseSensitive() const { DARABONBA_PTR_GET_DEFAULT(isCaseSensitive_, false) };
    inline ColumnMetadata& setIsCaseSensitive(bool isCaseSensitive) { DARABONBA_PTR_SET_VALUE(isCaseSensitive_, isCaseSensitive) };


    // isCurrency Field Functions 
    bool hasIsCurrency() const { return this->isCurrency_ != nullptr;};
    void deleteIsCurrency() { this->isCurrency_ = nullptr;};
    inline bool isCurrency() const { DARABONBA_PTR_GET_DEFAULT(isCurrency_, false) };
    inline ColumnMetadata& setIsCurrency(bool isCurrency) { DARABONBA_PTR_SET_VALUE(isCurrency_, isCurrency) };


    // isPrimaryKey Field Functions 
    bool hasIsPrimaryKey() const { return this->isPrimaryKey_ != nullptr;};
    void deleteIsPrimaryKey() { this->isPrimaryKey_ = nullptr;};
    inline bool isPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(isPrimaryKey_, false) };
    inline ColumnMetadata& setIsPrimaryKey(bool isPrimaryKey) { DARABONBA_PTR_SET_VALUE(isPrimaryKey_, isPrimaryKey) };


    // isSigned Field Functions 
    bool hasIsSigned() const { return this->isSigned_ != nullptr;};
    void deleteIsSigned() { this->isSigned_ = nullptr;};
    inline bool isSigned() const { DARABONBA_PTR_GET_DEFAULT(isSigned_, false) };
    inline ColumnMetadata& setIsSigned(bool isSigned) { DARABONBA_PTR_SET_VALUE(isSigned_, isSigned) };


    // maxLength Field Functions 
    bool hasMaxLength() const { return this->maxLength_ != nullptr;};
    void deleteMaxLength() { this->maxLength_ = nullptr;};
    inline int32_t maxLength() const { DARABONBA_PTR_GET_DEFAULT(maxLength_, 0) };
    inline ColumnMetadata& setMaxLength(int32_t maxLength) { DARABONBA_PTR_SET_VALUE(maxLength_, maxLength) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ColumnMetadata& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nullable Field Functions 
    bool hasNullable() const { return this->nullable_ != nullptr;};
    void deleteNullable() { this->nullable_ = nullptr;};
    inline bool nullable() const { DARABONBA_PTR_GET_DEFAULT(nullable_, false) };
    inline ColumnMetadata& setNullable(bool nullable) { DARABONBA_PTR_SET_VALUE(nullable_, nullable) };


    // precision Field Functions 
    bool hasPrecision() const { return this->precision_ != nullptr;};
    void deletePrecision() { this->precision_ = nullptr;};
    inline int32_t precision() const { DARABONBA_PTR_GET_DEFAULT(precision_, 0) };
    inline ColumnMetadata& setPrecision(int32_t precision) { DARABONBA_PTR_SET_VALUE(precision_, precision) };


    // scale Field Functions 
    bool hasScale() const { return this->scale_ != nullptr;};
    void deleteScale() { this->scale_ = nullptr;};
    inline int32_t scale() const { DARABONBA_PTR_GET_DEFAULT(scale_, 0) };
    inline ColumnMetadata& setScale(int32_t scale) { DARABONBA_PTR_SET_VALUE(scale_, scale) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline ColumnMetadata& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ColumnMetadata& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // udtName Field Functions 
    bool hasUdtName() const { return this->udtName_ != nullptr;};
    void deleteUdtName() { this->udtName_ = nullptr;};
    inline string udtName() const { DARABONBA_PTR_GET_DEFAULT(udtName_, "") };
    inline ColumnMetadata& setUdtName(string udtName) { DARABONBA_PTR_SET_VALUE(udtName_, udtName) };


  protected:
    std::shared_ptr<string> columnDefault_ = nullptr;
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<string> dataType_ = nullptr;
    std::shared_ptr<bool> isCaseSensitive_ = nullptr;
    std::shared_ptr<bool> isCurrency_ = nullptr;
    std::shared_ptr<bool> isPrimaryKey_ = nullptr;
    std::shared_ptr<bool> isSigned_ = nullptr;
    std::shared_ptr<int32_t> maxLength_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> nullable_ = nullptr;
    std::shared_ptr<int32_t> precision_ = nullptr;
    std::shared_ptr<int32_t> scale_ = nullptr;
    std::shared_ptr<string> schemaName_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<string> udtName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
