// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TABLESCHEMA_HPP_
#define ALIBABACLOUD_MODELS_TABLESCHEMA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Schema.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class TableSchema : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TableSchema& obj) { 
      DARABONBA_PTR_TO_JSON(schema, schema_);
      DARABONBA_PTR_TO_JSON(tableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, TableSchema& obj) { 
      DARABONBA_PTR_FROM_JSON(schema, schema_);
      DARABONBA_PTR_FROM_JSON(tableName, tableName_);
    };
    TableSchema() = default ;
    TableSchema(const TableSchema &) = default ;
    TableSchema(TableSchema &&) = default ;
    TableSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TableSchema() = default ;
    TableSchema& operator=(const TableSchema &) = default ;
    TableSchema& operator=(TableSchema &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->schema_ == nullptr
        && return this->tableName_ == nullptr; };
    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline const Schema & schema() const { DARABONBA_PTR_GET_CONST(schema_, Schema) };
    inline Schema schema() { DARABONBA_PTR_GET(schema_, Schema) };
    inline TableSchema& setSchema(const Schema & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
    inline TableSchema& setSchema(Schema && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline TableSchema& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    std::shared_ptr<Schema> schema_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
