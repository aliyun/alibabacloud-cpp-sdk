// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LINEAGETABLE_HPP_
#define ALIBABACLOUD_MODELS_LINEAGETABLE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LineageColumn.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class LineageTable : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LineageTable& obj) { 
      DARABONBA_PTR_TO_JSON(columns, columns_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_ANY_TO_JSON(properties, properties_);
      DARABONBA_PTR_TO_JSON(tableName, tableName_);
      DARABONBA_ANY_TO_JSON(with, with_);
    };
    friend void from_json(const Darabonba::Json& j, LineageTable& obj) { 
      DARABONBA_PTR_FROM_JSON(columns, columns_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_ANY_FROM_JSON(properties, properties_);
      DARABONBA_PTR_FROM_JSON(tableName, tableName_);
      DARABONBA_ANY_FROM_JSON(with, with_);
    };
    LineageTable() = default ;
    LineageTable(const LineageTable &) = default ;
    LineageTable(LineageTable &&) = default ;
    LineageTable(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LineageTable() = default ;
    LineageTable& operator=(const LineageTable &) = default ;
    LineageTable& operator=(LineageTable &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columns_ == nullptr
        && this->id_ == nullptr && this->properties_ == nullptr && this->tableName_ == nullptr && this->with_ == nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<LineageColumn> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<LineageColumn>) };
    inline vector<LineageColumn> getColumns() { DARABONBA_PTR_GET(columns_, vector<LineageColumn>) };
    inline LineageTable& setColumns(const vector<LineageColumn> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline LineageTable& setColumns(vector<LineageColumn> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline LineageTable& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline     const Darabonba::Json & getProperties() const { DARABONBA_GET(properties_) };
    Darabonba::Json & getProperties() { DARABONBA_GET(properties_) };
    inline LineageTable& setProperties(const Darabonba::Json & properties) { DARABONBA_SET_VALUE(properties_, properties) };
    inline LineageTable& setProperties(Darabonba::Json && properties) { DARABONBA_SET_RVALUE(properties_, properties) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline LineageTable& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // with Field Functions 
    bool hasWith() const { return this->with_ != nullptr;};
    void deleteWith() { this->with_ = nullptr;};
    inline     const Darabonba::Json & getWith() const { DARABONBA_GET(with_) };
    Darabonba::Json & getWith() { DARABONBA_GET(with_) };
    inline LineageTable& setWith(const Darabonba::Json & with) { DARABONBA_SET_VALUE(with_, with) };
    inline LineageTable& setWith(Darabonba::Json && with) { DARABONBA_SET_RVALUE(with_, with) };


  protected:
    // The information about columns.
    shared_ptr<vector<LineageColumn>> columns_ {};
    // The table ID.
    shared_ptr<string> id_ {};
    // The information about the table. The information includes the user who creates the table, the user who modifies the table, and the creation time and modification time of the table.
    Darabonba::Json properties_ {};
    // The name of the table.
    shared_ptr<string> tableName_ {};
    // The parameters of the table.
    Darabonba::Json with_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
