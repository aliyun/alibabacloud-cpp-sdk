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
      DARABONBA_PTR_TO_JSON(collectSinkOperatorId, collectSinkOperatorId_);
      DARABONBA_PTR_TO_JSON(schema, schema_);
      DARABONBA_PTR_TO_JSON(tableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, TableSchema& obj) { 
      DARABONBA_PTR_FROM_JSON(collectSinkOperatorId, collectSinkOperatorId_);
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
    virtual bool empty() const override { return this->collectSinkOperatorId_ == nullptr
        && this->schema_ == nullptr && this->tableName_ == nullptr; };
    // collectSinkOperatorId Field Functions 
    bool hasCollectSinkOperatorId() const { return this->collectSinkOperatorId_ != nullptr;};
    void deleteCollectSinkOperatorId() { this->collectSinkOperatorId_ = nullptr;};
    inline string getCollectSinkOperatorId() const { DARABONBA_PTR_GET_DEFAULT(collectSinkOperatorId_, "") };
    inline TableSchema& setCollectSinkOperatorId(string collectSinkOperatorId) { DARABONBA_PTR_SET_VALUE(collectSinkOperatorId_, collectSinkOperatorId) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline const Schema & getSchema() const { DARABONBA_PTR_GET_CONST(schema_, Schema) };
    inline Schema getSchema() { DARABONBA_PTR_GET(schema_, Schema) };
    inline TableSchema& setSchema(const Schema & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
    inline TableSchema& setSchema(Schema && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline TableSchema& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The ID of the collect sink operator.
    shared_ptr<string> collectSinkOperatorId_ {};
    // The schema of the table.
    shared_ptr<Schema> schema_ {};
    // The name of the table.
    shared_ptr<string> tableName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
