// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SQLOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_SQLOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SqlOutputRows.hpp>
#include <alibabacloud/models/SqlOutputSchema.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class SqlOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SqlOutput& obj) { 
      DARABONBA_PTR_TO_JSON(rows, rows_);
      DARABONBA_PTR_TO_JSON(schema, schema_);
    };
    friend void from_json(const Darabonba::Json& j, SqlOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(rows, rows_);
      DARABONBA_PTR_FROM_JSON(schema, schema_);
    };
    SqlOutput() = default ;
    SqlOutput(const SqlOutput &) = default ;
    SqlOutput(SqlOutput &&) = default ;
    SqlOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SqlOutput() = default ;
    SqlOutput& operator=(const SqlOutput &) = default ;
    SqlOutput& operator=(SqlOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rows_ != nullptr
        && this->schema_ != nullptr; };
    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline const vector<SqlOutputRows> & rows() const { DARABONBA_PTR_GET_CONST(rows_, vector<SqlOutputRows>) };
    inline vector<SqlOutputRows> rows() { DARABONBA_PTR_GET(rows_, vector<SqlOutputRows>) };
    inline SqlOutput& setRows(const vector<SqlOutputRows> & rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };
    inline SqlOutput& setRows(vector<SqlOutputRows> && rows) { DARABONBA_PTR_SET_RVALUE(rows_, rows) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline const SqlOutputSchema & schema() const { DARABONBA_PTR_GET_CONST(schema_, SqlOutputSchema) };
    inline SqlOutputSchema schema() { DARABONBA_PTR_GET(schema_, SqlOutputSchema) };
    inline SqlOutput& setSchema(const SqlOutputSchema & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
    inline SqlOutput& setSchema(SqlOutputSchema && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


  protected:
    std::shared_ptr<vector<SqlOutputRows>> rows_ = nullptr;
    std::shared_ptr<SqlOutputSchema> schema_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
