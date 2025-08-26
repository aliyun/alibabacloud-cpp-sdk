// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZETABLERESPONSEBODYDATATABLESTABLEROWSTABLECOLUMNS_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZETABLERESPONSEBODYDATATABLESTABLEROWSTABLECOLUMNS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeTableResponseBodyDataTablesTableRowsTableColumns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeTableResponseBodyDataTablesTableRowsTableColumns& obj) { 
      DARABONBA_PTR_TO_JSON(EndColumn, endColumn_);
      DARABONBA_PTR_TO_JSON(EndRow, endRow_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(StartColumn, startColumn_);
      DARABONBA_PTR_TO_JSON(StartRow, startRow_);
      DARABONBA_PTR_TO_JSON(Texts, texts_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeTableResponseBodyDataTablesTableRowsTableColumns& obj) { 
      DARABONBA_PTR_FROM_JSON(EndColumn, endColumn_);
      DARABONBA_PTR_FROM_JSON(EndRow, endRow_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(StartColumn, startColumn_);
      DARABONBA_PTR_FROM_JSON(StartRow, startRow_);
      DARABONBA_PTR_FROM_JSON(Texts, texts_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    RecognizeTableResponseBodyDataTablesTableRowsTableColumns() = default ;
    RecognizeTableResponseBodyDataTablesTableRowsTableColumns(const RecognizeTableResponseBodyDataTablesTableRowsTableColumns &) = default ;
    RecognizeTableResponseBodyDataTablesTableRowsTableColumns(RecognizeTableResponseBodyDataTablesTableRowsTableColumns &&) = default ;
    RecognizeTableResponseBodyDataTablesTableRowsTableColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeTableResponseBodyDataTablesTableRowsTableColumns() = default ;
    RecognizeTableResponseBodyDataTablesTableRowsTableColumns& operator=(const RecognizeTableResponseBodyDataTablesTableRowsTableColumns &) = default ;
    RecognizeTableResponseBodyDataTablesTableRowsTableColumns& operator=(RecognizeTableResponseBodyDataTablesTableRowsTableColumns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endColumn_ != nullptr
        && this->endRow_ != nullptr && this->height_ != nullptr && this->startColumn_ != nullptr && this->startRow_ != nullptr && this->texts_ != nullptr
        && this->width_ != nullptr; };
    // endColumn Field Functions 
    bool hasEndColumn() const { return this->endColumn_ != nullptr;};
    void deleteEndColumn() { this->endColumn_ = nullptr;};
    inline int32_t endColumn() const { DARABONBA_PTR_GET_DEFAULT(endColumn_, 0) };
    inline RecognizeTableResponseBodyDataTablesTableRowsTableColumns& setEndColumn(int32_t endColumn) { DARABONBA_PTR_SET_VALUE(endColumn_, endColumn) };


    // endRow Field Functions 
    bool hasEndRow() const { return this->endRow_ != nullptr;};
    void deleteEndRow() { this->endRow_ = nullptr;};
    inline int32_t endRow() const { DARABONBA_PTR_GET_DEFAULT(endRow_, 0) };
    inline RecognizeTableResponseBodyDataTablesTableRowsTableColumns& setEndRow(int32_t endRow) { DARABONBA_PTR_SET_VALUE(endRow_, endRow) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline RecognizeTableResponseBodyDataTablesTableRowsTableColumns& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // startColumn Field Functions 
    bool hasStartColumn() const { return this->startColumn_ != nullptr;};
    void deleteStartColumn() { this->startColumn_ = nullptr;};
    inline int32_t startColumn() const { DARABONBA_PTR_GET_DEFAULT(startColumn_, 0) };
    inline RecognizeTableResponseBodyDataTablesTableRowsTableColumns& setStartColumn(int32_t startColumn) { DARABONBA_PTR_SET_VALUE(startColumn_, startColumn) };


    // startRow Field Functions 
    bool hasStartRow() const { return this->startRow_ != nullptr;};
    void deleteStartRow() { this->startRow_ = nullptr;};
    inline int32_t startRow() const { DARABONBA_PTR_GET_DEFAULT(startRow_, 0) };
    inline RecognizeTableResponseBodyDataTablesTableRowsTableColumns& setStartRow(int32_t startRow) { DARABONBA_PTR_SET_VALUE(startRow_, startRow) };


    // texts Field Functions 
    bool hasTexts() const { return this->texts_ != nullptr;};
    void deleteTexts() { this->texts_ = nullptr;};
    inline const vector<string> & texts() const { DARABONBA_PTR_GET_CONST(texts_, vector<string>) };
    inline vector<string> texts() { DARABONBA_PTR_GET(texts_, vector<string>) };
    inline RecognizeTableResponseBodyDataTablesTableRowsTableColumns& setTexts(const vector<string> & texts) { DARABONBA_PTR_SET_VALUE(texts_, texts) };
    inline RecognizeTableResponseBodyDataTablesTableRowsTableColumns& setTexts(vector<string> && texts) { DARABONBA_PTR_SET_RVALUE(texts_, texts) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline RecognizeTableResponseBodyDataTablesTableRowsTableColumns& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<int32_t> endColumn_ = nullptr;
    std::shared_ptr<int32_t> endRow_ = nullptr;
    std::shared_ptr<int32_t> height_ = nullptr;
    std::shared_ptr<int32_t> startColumn_ = nullptr;
    std::shared_ptr<int32_t> startRow_ = nullptr;
    std::shared_ptr<vector<string>> texts_ = nullptr;
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
