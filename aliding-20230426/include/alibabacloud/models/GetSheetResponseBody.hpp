// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSHEETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSHEETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetSheetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSheetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(columnCount, columnCount_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(lastNonEmptyColumn, lastNonEmptyColumn_);
      DARABONBA_PTR_TO_JSON(lastNonEmptyRow, lastNonEmptyRow_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(rowCount, rowCount_);
      DARABONBA_PTR_TO_JSON(visibility, visibility_);
    };
    friend void from_json(const Darabonba::Json& j, GetSheetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(columnCount, columnCount_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(lastNonEmptyColumn, lastNonEmptyColumn_);
      DARABONBA_PTR_FROM_JSON(lastNonEmptyRow, lastNonEmptyRow_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(rowCount, rowCount_);
      DARABONBA_PTR_FROM_JSON(visibility, visibility_);
    };
    GetSheetResponseBody() = default ;
    GetSheetResponseBody(const GetSheetResponseBody &) = default ;
    GetSheetResponseBody(GetSheetResponseBody &&) = default ;
    GetSheetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSheetResponseBody() = default ;
    GetSheetResponseBody& operator=(const GetSheetResponseBody &) = default ;
    GetSheetResponseBody& operator=(GetSheetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnCount_ == nullptr
        && return this->id_ == nullptr && return this->lastNonEmptyColumn_ == nullptr && return this->lastNonEmptyRow_ == nullptr && return this->name_ == nullptr && return this->requestId_ == nullptr
        && return this->rowCount_ == nullptr && return this->visibility_ == nullptr; };
    // columnCount Field Functions 
    bool hasColumnCount() const { return this->columnCount_ != nullptr;};
    void deleteColumnCount() { this->columnCount_ = nullptr;};
    inline int64_t columnCount() const { DARABONBA_PTR_GET_DEFAULT(columnCount_, 0L) };
    inline GetSheetResponseBody& setColumnCount(int64_t columnCount) { DARABONBA_PTR_SET_VALUE(columnCount_, columnCount) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetSheetResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastNonEmptyColumn Field Functions 
    bool hasLastNonEmptyColumn() const { return this->lastNonEmptyColumn_ != nullptr;};
    void deleteLastNonEmptyColumn() { this->lastNonEmptyColumn_ = nullptr;};
    inline int64_t lastNonEmptyColumn() const { DARABONBA_PTR_GET_DEFAULT(lastNonEmptyColumn_, 0L) };
    inline GetSheetResponseBody& setLastNonEmptyColumn(int64_t lastNonEmptyColumn) { DARABONBA_PTR_SET_VALUE(lastNonEmptyColumn_, lastNonEmptyColumn) };


    // lastNonEmptyRow Field Functions 
    bool hasLastNonEmptyRow() const { return this->lastNonEmptyRow_ != nullptr;};
    void deleteLastNonEmptyRow() { this->lastNonEmptyRow_ = nullptr;};
    inline int64_t lastNonEmptyRow() const { DARABONBA_PTR_GET_DEFAULT(lastNonEmptyRow_, 0L) };
    inline GetSheetResponseBody& setLastNonEmptyRow(int64_t lastNonEmptyRow) { DARABONBA_PTR_SET_VALUE(lastNonEmptyRow_, lastNonEmptyRow) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSheetResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSheetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rowCount Field Functions 
    bool hasRowCount() const { return this->rowCount_ != nullptr;};
    void deleteRowCount() { this->rowCount_ = nullptr;};
    inline int64_t rowCount() const { DARABONBA_PTR_GET_DEFAULT(rowCount_, 0L) };
    inline GetSheetResponseBody& setRowCount(int64_t rowCount) { DARABONBA_PTR_SET_VALUE(rowCount_, rowCount) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string visibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline GetSheetResponseBody& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


  protected:
    std::shared_ptr<int64_t> columnCount_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<int64_t> lastNonEmptyColumn_ = nullptr;
    std::shared_ptr<int64_t> lastNonEmptyRow_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> rowCount_ = nullptr;
    std::shared_ptr<string> visibility_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
