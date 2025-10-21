// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROWUPDATE_HPP_
#define ALIBABACLOUD_MODELS_ROWUPDATE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Row.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class RowUpdate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RowUpdate& obj) { 
      DARABONBA_PTR_TO_JSON(row, row_);
      DARABONBA_PTR_TO_JSON(rowKind, rowKind_);
    };
    friend void from_json(const Darabonba::Json& j, RowUpdate& obj) { 
      DARABONBA_PTR_FROM_JSON(row, row_);
      DARABONBA_PTR_FROM_JSON(rowKind, rowKind_);
    };
    RowUpdate() = default ;
    RowUpdate(const RowUpdate &) = default ;
    RowUpdate(RowUpdate &&) = default ;
    RowUpdate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RowUpdate() = default ;
    RowUpdate& operator=(const RowUpdate &) = default ;
    RowUpdate& operator=(RowUpdate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->row_ == nullptr
        && return this->rowKind_ == nullptr; };
    // row Field Functions 
    bool hasRow() const { return this->row_ != nullptr;};
    void deleteRow() { this->row_ = nullptr;};
    inline const Row & row() const { DARABONBA_PTR_GET_CONST(row_, Row) };
    inline Row row() { DARABONBA_PTR_GET(row_, Row) };
    inline RowUpdate& setRow(const Row & row) { DARABONBA_PTR_SET_VALUE(row_, row) };
    inline RowUpdate& setRow(Row && row) { DARABONBA_PTR_SET_RVALUE(row_, row) };


    // rowKind Field Functions 
    bool hasRowKind() const { return this->rowKind_ != nullptr;};
    void deleteRowKind() { this->rowKind_ = nullptr;};
    inline string rowKind() const { DARABONBA_PTR_GET_DEFAULT(rowKind_, "") };
    inline RowUpdate& setRowKind(string rowKind) { DARABONBA_PTR_SET_VALUE(rowKind_, rowKind) };


  protected:
    std::shared_ptr<Row> row_ = nullptr;
    std::shared_ptr<string> rowKind_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
