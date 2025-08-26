// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZETABLERESPONSEBODYDATATABLESTABLEROWS_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZETABLERESPONSEBODYDATATABLESTABLEROWS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeTableResponseBodyDataTablesTableRowsTableColumns.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeTableResponseBodyDataTablesTableRows : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeTableResponseBodyDataTablesTableRows& obj) { 
      DARABONBA_PTR_TO_JSON(TableColumns, tableColumns_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeTableResponseBodyDataTablesTableRows& obj) { 
      DARABONBA_PTR_FROM_JSON(TableColumns, tableColumns_);
    };
    RecognizeTableResponseBodyDataTablesTableRows() = default ;
    RecognizeTableResponseBodyDataTablesTableRows(const RecognizeTableResponseBodyDataTablesTableRows &) = default ;
    RecognizeTableResponseBodyDataTablesTableRows(RecognizeTableResponseBodyDataTablesTableRows &&) = default ;
    RecognizeTableResponseBodyDataTablesTableRows(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeTableResponseBodyDataTablesTableRows() = default ;
    RecognizeTableResponseBodyDataTablesTableRows& operator=(const RecognizeTableResponseBodyDataTablesTableRows &) = default ;
    RecognizeTableResponseBodyDataTablesTableRows& operator=(RecognizeTableResponseBodyDataTablesTableRows &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tableColumns_ != nullptr; };
    // tableColumns Field Functions 
    bool hasTableColumns() const { return this->tableColumns_ != nullptr;};
    void deleteTableColumns() { this->tableColumns_ = nullptr;};
    inline const vector<Models::RecognizeTableResponseBodyDataTablesTableRowsTableColumns> & tableColumns() const { DARABONBA_PTR_GET_CONST(tableColumns_, vector<Models::RecognizeTableResponseBodyDataTablesTableRowsTableColumns>) };
    inline vector<Models::RecognizeTableResponseBodyDataTablesTableRowsTableColumns> tableColumns() { DARABONBA_PTR_GET(tableColumns_, vector<Models::RecognizeTableResponseBodyDataTablesTableRowsTableColumns>) };
    inline RecognizeTableResponseBodyDataTablesTableRows& setTableColumns(const vector<Models::RecognizeTableResponseBodyDataTablesTableRowsTableColumns> & tableColumns) { DARABONBA_PTR_SET_VALUE(tableColumns_, tableColumns) };
    inline RecognizeTableResponseBodyDataTablesTableRows& setTableColumns(vector<Models::RecognizeTableResponseBodyDataTablesTableRowsTableColumns> && tableColumns) { DARABONBA_PTR_SET_RVALUE(tableColumns_, tableColumns) };


  protected:
    std::shared_ptr<vector<Models::RecognizeTableResponseBodyDataTablesTableRowsTableColumns>> tableColumns_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
