// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZETABLERESPONSEBODYDATATABLES_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZETABLERESPONSEBODYDATATABLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeTableResponseBodyDataTablesTableRows.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeTableResponseBodyDataTables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeTableResponseBodyDataTables& obj) { 
      DARABONBA_PTR_TO_JSON(Head, head_);
      DARABONBA_PTR_TO_JSON(TableRows, tableRows_);
      DARABONBA_PTR_TO_JSON(Tail, tail_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeTableResponseBodyDataTables& obj) { 
      DARABONBA_PTR_FROM_JSON(Head, head_);
      DARABONBA_PTR_FROM_JSON(TableRows, tableRows_);
      DARABONBA_PTR_FROM_JSON(Tail, tail_);
    };
    RecognizeTableResponseBodyDataTables() = default ;
    RecognizeTableResponseBodyDataTables(const RecognizeTableResponseBodyDataTables &) = default ;
    RecognizeTableResponseBodyDataTables(RecognizeTableResponseBodyDataTables &&) = default ;
    RecognizeTableResponseBodyDataTables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeTableResponseBodyDataTables() = default ;
    RecognizeTableResponseBodyDataTables& operator=(const RecognizeTableResponseBodyDataTables &) = default ;
    RecognizeTableResponseBodyDataTables& operator=(RecognizeTableResponseBodyDataTables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->head_ != nullptr
        && this->tableRows_ != nullptr && this->tail_ != nullptr; };
    // head Field Functions 
    bool hasHead() const { return this->head_ != nullptr;};
    void deleteHead() { this->head_ = nullptr;};
    inline const vector<string> & head() const { DARABONBA_PTR_GET_CONST(head_, vector<string>) };
    inline vector<string> head() { DARABONBA_PTR_GET(head_, vector<string>) };
    inline RecognizeTableResponseBodyDataTables& setHead(const vector<string> & head) { DARABONBA_PTR_SET_VALUE(head_, head) };
    inline RecognizeTableResponseBodyDataTables& setHead(vector<string> && head) { DARABONBA_PTR_SET_RVALUE(head_, head) };


    // tableRows Field Functions 
    bool hasTableRows() const { return this->tableRows_ != nullptr;};
    void deleteTableRows() { this->tableRows_ = nullptr;};
    inline const vector<Models::RecognizeTableResponseBodyDataTablesTableRows> & tableRows() const { DARABONBA_PTR_GET_CONST(tableRows_, vector<Models::RecognizeTableResponseBodyDataTablesTableRows>) };
    inline vector<Models::RecognizeTableResponseBodyDataTablesTableRows> tableRows() { DARABONBA_PTR_GET(tableRows_, vector<Models::RecognizeTableResponseBodyDataTablesTableRows>) };
    inline RecognizeTableResponseBodyDataTables& setTableRows(const vector<Models::RecognizeTableResponseBodyDataTablesTableRows> & tableRows) { DARABONBA_PTR_SET_VALUE(tableRows_, tableRows) };
    inline RecognizeTableResponseBodyDataTables& setTableRows(vector<Models::RecognizeTableResponseBodyDataTablesTableRows> && tableRows) { DARABONBA_PTR_SET_RVALUE(tableRows_, tableRows) };


    // tail Field Functions 
    bool hasTail() const { return this->tail_ != nullptr;};
    void deleteTail() { this->tail_ = nullptr;};
    inline const vector<string> & tail() const { DARABONBA_PTR_GET_CONST(tail_, vector<string>) };
    inline vector<string> tail() { DARABONBA_PTR_GET(tail_, vector<string>) };
    inline RecognizeTableResponseBodyDataTables& setTail(const vector<string> & tail) { DARABONBA_PTR_SET_VALUE(tail_, tail) };
    inline RecognizeTableResponseBodyDataTables& setTail(vector<string> && tail) { DARABONBA_PTR_SET_RVALUE(tail_, tail) };


  protected:
    std::shared_ptr<vector<string>> head_ = nullptr;
    std::shared_ptr<vector<Models::RecognizeTableResponseBodyDataTablesTableRows>> tableRows_ = nullptr;
    std::shared_ptr<vector<string>> tail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
