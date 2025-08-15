// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLSTATEMENTRESPONSEBODYDATASQLOUTPUTS_HPP_
#define ALIBABACLOUD_MODELS_GETSQLSTATEMENTRESPONSEBODYDATASQLOUTPUTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetSqlStatementResponseBodyDataSqlOutputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSqlStatementResponseBodyDataSqlOutputs& obj) { 
      DARABONBA_PTR_TO_JSON(rows, rows_);
      DARABONBA_PTR_TO_JSON(rowsFilePath, rowsFilePath_);
      DARABONBA_PTR_TO_JSON(schema, schema_);
    };
    friend void from_json(const Darabonba::Json& j, GetSqlStatementResponseBodyDataSqlOutputs& obj) { 
      DARABONBA_PTR_FROM_JSON(rows, rows_);
      DARABONBA_PTR_FROM_JSON(rowsFilePath, rowsFilePath_);
      DARABONBA_PTR_FROM_JSON(schema, schema_);
    };
    GetSqlStatementResponseBodyDataSqlOutputs() = default ;
    GetSqlStatementResponseBodyDataSqlOutputs(const GetSqlStatementResponseBodyDataSqlOutputs &) = default ;
    GetSqlStatementResponseBodyDataSqlOutputs(GetSqlStatementResponseBodyDataSqlOutputs &&) = default ;
    GetSqlStatementResponseBodyDataSqlOutputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSqlStatementResponseBodyDataSqlOutputs() = default ;
    GetSqlStatementResponseBodyDataSqlOutputs& operator=(const GetSqlStatementResponseBodyDataSqlOutputs &) = default ;
    GetSqlStatementResponseBodyDataSqlOutputs& operator=(GetSqlStatementResponseBodyDataSqlOutputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rows_ != nullptr
        && this->rowsFilePath_ != nullptr && this->schema_ != nullptr; };
    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline string rows() const { DARABONBA_PTR_GET_DEFAULT(rows_, "") };
    inline GetSqlStatementResponseBodyDataSqlOutputs& setRows(string rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };


    // rowsFilePath Field Functions 
    bool hasRowsFilePath() const { return this->rowsFilePath_ != nullptr;};
    void deleteRowsFilePath() { this->rowsFilePath_ = nullptr;};
    inline string rowsFilePath() const { DARABONBA_PTR_GET_DEFAULT(rowsFilePath_, "") };
    inline GetSqlStatementResponseBodyDataSqlOutputs& setRowsFilePath(string rowsFilePath) { DARABONBA_PTR_SET_VALUE(rowsFilePath_, rowsFilePath) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline GetSqlStatementResponseBodyDataSqlOutputs& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


  protected:
    // The queried data, which is a string in the JSON format.
    std::shared_ptr<string> rows_ = nullptr;
    std::shared_ptr<string> rowsFilePath_ = nullptr;
    // The information about the schema, which is a string in the JSON format.
    std::shared_ptr<string> schema_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
