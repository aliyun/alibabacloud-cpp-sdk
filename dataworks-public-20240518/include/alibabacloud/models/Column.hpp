// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COLUMN_HPP_
#define ALIBABACLOUD_MODELS_COLUMN_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ColumnBusinessMetadata.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class Column : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Column& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessMetadata, businessMetadata_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(ForeignKey, foreignKey_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PartitionKey, partitionKey_);
      DARABONBA_PTR_TO_JSON(Position, position_);
      DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
      DARABONBA_PTR_TO_JSON(TableId, tableId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, Column& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessMetadata, businessMetadata_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(ForeignKey, foreignKey_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PartitionKey, partitionKey_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
      DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
      DARABONBA_PTR_FROM_JSON(TableId, tableId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    Column() = default ;
    Column(const Column &) = default ;
    Column(Column &&) = default ;
    Column(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Column() = default ;
    Column& operator=(const Column &) = default ;
    Column& operator=(Column &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessMetadata_ != nullptr
        && this->comment_ != nullptr && this->foreignKey_ != nullptr && this->id_ != nullptr && this->name_ != nullptr && this->partitionKey_ != nullptr
        && this->position_ != nullptr && this->primaryKey_ != nullptr && this->tableId_ != nullptr && this->type_ != nullptr; };
    // businessMetadata Field Functions 
    bool hasBusinessMetadata() const { return this->businessMetadata_ != nullptr;};
    void deleteBusinessMetadata() { this->businessMetadata_ = nullptr;};
    inline const ColumnBusinessMetadata & businessMetadata() const { DARABONBA_PTR_GET_CONST(businessMetadata_, ColumnBusinessMetadata) };
    inline ColumnBusinessMetadata businessMetadata() { DARABONBA_PTR_GET(businessMetadata_, ColumnBusinessMetadata) };
    inline Column& setBusinessMetadata(const ColumnBusinessMetadata & businessMetadata) { DARABONBA_PTR_SET_VALUE(businessMetadata_, businessMetadata) };
    inline Column& setBusinessMetadata(ColumnBusinessMetadata && businessMetadata) { DARABONBA_PTR_SET_RVALUE(businessMetadata_, businessMetadata) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline Column& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // foreignKey Field Functions 
    bool hasForeignKey() const { return this->foreignKey_ != nullptr;};
    void deleteForeignKey() { this->foreignKey_ = nullptr;};
    inline bool foreignKey() const { DARABONBA_PTR_GET_DEFAULT(foreignKey_, false) };
    inline Column& setForeignKey(bool foreignKey) { DARABONBA_PTR_SET_VALUE(foreignKey_, foreignKey) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline Column& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Column& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // partitionKey Field Functions 
    bool hasPartitionKey() const { return this->partitionKey_ != nullptr;};
    void deletePartitionKey() { this->partitionKey_ = nullptr;};
    inline bool partitionKey() const { DARABONBA_PTR_GET_DEFAULT(partitionKey_, false) };
    inline Column& setPartitionKey(bool partitionKey) { DARABONBA_PTR_SET_VALUE(partitionKey_, partitionKey) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline int32_t position() const { DARABONBA_PTR_GET_DEFAULT(position_, 0) };
    inline Column& setPosition(int32_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // primaryKey Field Functions 
    bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
    void deletePrimaryKey() { this->primaryKey_ = nullptr;};
    inline bool primaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, false) };
    inline Column& setPrimaryKey(bool primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline string tableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
    inline Column& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline Column& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<ColumnBusinessMetadata> businessMetadata_ = nullptr;
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<bool> foreignKey_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> partitionKey_ = nullptr;
    std::shared_ptr<int32_t> position_ = nullptr;
    std::shared_ptr<bool> primaryKey_ = nullptr;
    std::shared_ptr<string> tableId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
