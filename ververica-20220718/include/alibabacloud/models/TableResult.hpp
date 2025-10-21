// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TABLERESULT_HPP_
#define ALIBABACLOUD_MODELS_TABLERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RowUpdate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class TableResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TableResult& obj) { 
      DARABONBA_PTR_TO_JSON(rowUpdates, rowUpdates_);
      DARABONBA_PTR_TO_JSON(tableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, TableResult& obj) { 
      DARABONBA_PTR_FROM_JSON(rowUpdates, rowUpdates_);
      DARABONBA_PTR_FROM_JSON(tableName, tableName_);
    };
    TableResult() = default ;
    TableResult(const TableResult &) = default ;
    TableResult(TableResult &&) = default ;
    TableResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TableResult() = default ;
    TableResult& operator=(const TableResult &) = default ;
    TableResult& operator=(TableResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rowUpdates_ == nullptr
        && return this->tableName_ == nullptr; };
    // rowUpdates Field Functions 
    bool hasRowUpdates() const { return this->rowUpdates_ != nullptr;};
    void deleteRowUpdates() { this->rowUpdates_ = nullptr;};
    inline const vector<RowUpdate> & rowUpdates() const { DARABONBA_PTR_GET_CONST(rowUpdates_, vector<RowUpdate>) };
    inline vector<RowUpdate> rowUpdates() { DARABONBA_PTR_GET(rowUpdates_, vector<RowUpdate>) };
    inline TableResult& setRowUpdates(const vector<RowUpdate> & rowUpdates) { DARABONBA_PTR_SET_VALUE(rowUpdates_, rowUpdates) };
    inline TableResult& setRowUpdates(vector<RowUpdate> && rowUpdates) { DARABONBA_PTR_SET_RVALUE(rowUpdates_, rowUpdates) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline TableResult& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    std::shared_ptr<vector<RowUpdate>> rowUpdates_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
