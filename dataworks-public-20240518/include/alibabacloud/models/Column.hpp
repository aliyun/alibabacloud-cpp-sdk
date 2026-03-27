// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COLUMN_HPP_
#define ALIBABACLOUD_MODELS_COLUMN_HPP_
#include <darabonba/Core.hpp>
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
    class BusinessMetadata : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BusinessMetadata& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
      };
      friend void from_json(const Darabonba::Json& j, BusinessMetadata& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
      };
      BusinessMetadata() = default ;
      BusinessMetadata(const BusinessMetadata &) = default ;
      BusinessMetadata(BusinessMetadata &&) = default ;
      BusinessMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BusinessMetadata() = default ;
      BusinessMetadata& operator=(const BusinessMetadata &) = default ;
      BusinessMetadata& operator=(BusinessMetadata &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline BusinessMetadata& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    protected:
      // A business-level description of the field (supported only by MaxCompute, HMS (EMR clusters) and DLF.
      shared_ptr<string> description_ {};
    };

    virtual bool empty() const override { return this->businessMetadata_ == nullptr
        && this->comment_ == nullptr && this->foreignKey_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->partitionKey_ == nullptr
        && this->position_ == nullptr && this->primaryKey_ == nullptr && this->tableId_ == nullptr && this->type_ == nullptr; };
    // businessMetadata Field Functions 
    bool hasBusinessMetadata() const { return this->businessMetadata_ != nullptr;};
    void deleteBusinessMetadata() { this->businessMetadata_ = nullptr;};
    inline const Column::BusinessMetadata & getBusinessMetadata() const { DARABONBA_PTR_GET_CONST(businessMetadata_, Column::BusinessMetadata) };
    inline Column::BusinessMetadata getBusinessMetadata() { DARABONBA_PTR_GET(businessMetadata_, Column::BusinessMetadata) };
    inline Column& setBusinessMetadata(const Column::BusinessMetadata & businessMetadata) { DARABONBA_PTR_SET_VALUE(businessMetadata_, businessMetadata) };
    inline Column& setBusinessMetadata(Column::BusinessMetadata && businessMetadata) { DARABONBA_PTR_SET_RVALUE(businessMetadata_, businessMetadata) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline Column& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // foreignKey Field Functions 
    bool hasForeignKey() const { return this->foreignKey_ != nullptr;};
    void deleteForeignKey() { this->foreignKey_ = nullptr;};
    inline bool getForeignKey() const { DARABONBA_PTR_GET_DEFAULT(foreignKey_, false) };
    inline Column& setForeignKey(bool foreignKey) { DARABONBA_PTR_SET_VALUE(foreignKey_, foreignKey) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline Column& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Column& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // partitionKey Field Functions 
    bool hasPartitionKey() const { return this->partitionKey_ != nullptr;};
    void deletePartitionKey() { this->partitionKey_ = nullptr;};
    inline bool getPartitionKey() const { DARABONBA_PTR_GET_DEFAULT(partitionKey_, false) };
    inline Column& setPartitionKey(bool partitionKey) { DARABONBA_PTR_SET_VALUE(partitionKey_, partitionKey) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline int32_t getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, 0) };
    inline Column& setPosition(int32_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // primaryKey Field Functions 
    bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
    void deletePrimaryKey() { this->primaryKey_ = nullptr;};
    inline bool getPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, false) };
    inline Column& setPrimaryKey(bool primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline string getTableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
    inline Column& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline Column& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Business metadata.
    shared_ptr<Column::BusinessMetadata> businessMetadata_ {};
    // The comment.
    shared_ptr<string> comment_ {};
    // Specifies whether the column is a foreign key (only supported by MaxCompute).
    shared_ptr<bool> foreignKey_ {};
    // The ID. For more information, see [Description of concepts related to metadata entities](https://help.aliyun.com/document_detail/2880092.html).
    // 
    // The format is: `${EntityType}:${Instance ID or encoded URL}:${Catalog Identifier}:${Database name}:${Schema name}:${Table Name}:${Column name}`. Use empty strings as placeholders for non-existent hierarchy levels.
    // 
    // >  For the MaxCompute and DLF types, use an empty string as the placeholder for the instance ID. For MaxCompute, the database name refers to the MaxCompute project name. If the project has schema enabled, you must specify the schema name. Otherwise, use an empty string as the placeholder for the schema name.
    // 
    // >  For StarRocks, the catalog identifier is the catalog name. For DLF, it is the catalog ID. Other types do not support the catalog level and you can use an empty string as a placeholder.
    // 
    // Examples of ID formats for common types are as follows:
    // 
    // `maxcompute-column:::project_name:[schema_name]:table_name:column_name`
    // 
    // `dlf-column::catalog_id:database_name::table_name:column_name`
    // 
    // `hms-column:instance_id::database_name::table_name:column_name`
    // 
    // `holo-column:instance_id::database_name:schema_name:table_name:column_name`
    // 
    // `mysql-column:(instance_id|encoded_jdbc_url)::database_name::table_name:column_name`
    // 
    // > \\
    // `instance_id`: The instance ID, required when the data source is registered in instance mode.\\
    // `encoded_jdbc_url`: The URL-encoded JDBC connection string, which is required when the data source is registered via a connection string.\\
    // `catalog_id`: The DLF catalog ID.\\
    // `project_name`: The MaxCompute project name.\\
    // `database_name`: The database name.\\
    // `schema_name`: The schema name. For the MaxCompute type, this is required only if the project has enabled schema; otherwise, use an empty string as a placeholder.\\
    // `table_name`: The table name.\\
    // `column_name`: The field name.
    shared_ptr<string> id_ {};
    // The name.
    shared_ptr<string> name_ {};
    // Specifies whether the column is a partition key.
    shared_ptr<bool> partitionKey_ {};
    // The position of the field.
    shared_ptr<int32_t> position_ {};
    // Specifies whether the column is a primary key (only supported by MaxCompute).
    shared_ptr<bool> primaryKey_ {};
    // The table ID. You can refer to the `Table` object.
    shared_ptr<string> tableId_ {};
    // The type.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
