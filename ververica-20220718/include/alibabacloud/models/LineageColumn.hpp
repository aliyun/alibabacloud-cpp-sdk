// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LINEAGECOLUMN_HPP_
#define ALIBABACLOUD_MODELS_LINEAGECOLUMN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class LineageColumn : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LineageColumn& obj) { 
      DARABONBA_PTR_TO_JSON(columnName, columnName_);
      DARABONBA_PTR_TO_JSON(columnNativeType, columnNativeType_);
      DARABONBA_PTR_TO_JSON(columnType, columnType_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(modifiedAt, modifiedAt_);
      DARABONBA_PTR_TO_JSON(modifier, modifier_);
      DARABONBA_PTR_TO_JSON(nullable, nullable_);
    };
    friend void from_json(const Darabonba::Json& j, LineageColumn& obj) { 
      DARABONBA_PTR_FROM_JSON(columnName, columnName_);
      DARABONBA_PTR_FROM_JSON(columnNativeType, columnNativeType_);
      DARABONBA_PTR_FROM_JSON(columnType, columnType_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(modifiedAt, modifiedAt_);
      DARABONBA_PTR_FROM_JSON(modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(nullable, nullable_);
    };
    LineageColumn() = default ;
    LineageColumn(const LineageColumn &) = default ;
    LineageColumn(LineageColumn &&) = default ;
    LineageColumn(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LineageColumn() = default ;
    LineageColumn& operator=(const LineageColumn &) = default ;
    LineageColumn& operator=(LineageColumn &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnName_ == nullptr
        && return this->columnNativeType_ == nullptr && return this->columnType_ == nullptr && return this->createdAt_ == nullptr && return this->creator_ == nullptr && return this->description_ == nullptr
        && return this->id_ == nullptr && return this->modifiedAt_ == nullptr && return this->modifier_ == nullptr && return this->nullable_ == nullptr; };
    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline LineageColumn& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // columnNativeType Field Functions 
    bool hasColumnNativeType() const { return this->columnNativeType_ != nullptr;};
    void deleteColumnNativeType() { this->columnNativeType_ = nullptr;};
    inline string columnNativeType() const { DARABONBA_PTR_GET_DEFAULT(columnNativeType_, "") };
    inline LineageColumn& setColumnNativeType(string columnNativeType) { DARABONBA_PTR_SET_VALUE(columnNativeType_, columnNativeType) };


    // columnType Field Functions 
    bool hasColumnType() const { return this->columnType_ != nullptr;};
    void deleteColumnType() { this->columnType_ = nullptr;};
    inline string columnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
    inline LineageColumn& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline LineageColumn& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline LineageColumn& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline LineageColumn& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline LineageColumn& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifiedAt Field Functions 
    bool hasModifiedAt() const { return this->modifiedAt_ != nullptr;};
    void deleteModifiedAt() { this->modifiedAt_ = nullptr;};
    inline int64_t modifiedAt() const { DARABONBA_PTR_GET_DEFAULT(modifiedAt_, 0L) };
    inline LineageColumn& setModifiedAt(int64_t modifiedAt) { DARABONBA_PTR_SET_VALUE(modifiedAt_, modifiedAt) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline LineageColumn& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // nullable Field Functions 
    bool hasNullable() const { return this->nullable_ != nullptr;};
    void deleteNullable() { this->nullable_ = nullptr;};
    inline bool nullable() const { DARABONBA_PTR_GET_DEFAULT(nullable_, false) };
    inline LineageColumn& setNullable(bool nullable) { DARABONBA_PTR_SET_VALUE(nullable_, nullable) };


  protected:
    std::shared_ptr<string> columnName_ = nullptr;
    std::shared_ptr<string> columnNativeType_ = nullptr;
    std::shared_ptr<string> columnType_ = nullptr;
    std::shared_ptr<int64_t> createdAt_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<int64_t> modifiedAt_ = nullptr;
    std::shared_ptr<string> modifier_ = nullptr;
    std::shared_ptr<bool> nullable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
