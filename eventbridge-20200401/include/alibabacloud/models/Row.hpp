// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROW_HPP_
#define ALIBABACLOUD_MODELS_ROW_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Column.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class Row : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Row& obj) { 
      DARABONBA_PTR_TO_JSON(Columns, columns_);
    };
    friend void from_json(const Darabonba::Json& j, Row& obj) { 
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
    };
    Row() = default ;
    Row(const Row &) = default ;
    Row(Row &&) = default ;
    Row(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Row() = default ;
    Row& operator=(const Row &) = default ;
    Row& operator=(Row &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columns_ == nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<Column> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<Column>) };
    inline vector<Column> getColumns() { DARABONBA_PTR_GET(columns_, vector<Column>) };
    inline Row& setColumns(const vector<Column> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline Row& setColumns(vector<Column> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


  protected:
    shared_ptr<vector<Column>> columns_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
