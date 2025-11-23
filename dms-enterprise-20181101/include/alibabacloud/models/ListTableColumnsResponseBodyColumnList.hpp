// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLECOLUMNSRESPONSEBODYCOLUMNLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLECOLUMNSRESPONSEBODYCOLUMNLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTableColumnsResponseBodyColumnListColumn.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTableColumnsResponseBodyColumnList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTableColumnsResponseBodyColumnList& obj) { 
      DARABONBA_PTR_TO_JSON(Column, column_);
    };
    friend void from_json(const Darabonba::Json& j, ListTableColumnsResponseBodyColumnList& obj) { 
      DARABONBA_PTR_FROM_JSON(Column, column_);
    };
    ListTableColumnsResponseBodyColumnList() = default ;
    ListTableColumnsResponseBodyColumnList(const ListTableColumnsResponseBodyColumnList &) = default ;
    ListTableColumnsResponseBodyColumnList(ListTableColumnsResponseBodyColumnList &&) = default ;
    ListTableColumnsResponseBodyColumnList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTableColumnsResponseBodyColumnList() = default ;
    ListTableColumnsResponseBodyColumnList& operator=(const ListTableColumnsResponseBodyColumnList &) = default ;
    ListTableColumnsResponseBodyColumnList& operator=(ListTableColumnsResponseBodyColumnList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->column_ == nullptr; };
    // column Field Functions 
    bool hasColumn() const { return this->column_ != nullptr;};
    void deleteColumn() { this->column_ = nullptr;};
    inline const vector<Models::ListTableColumnsResponseBodyColumnListColumn> & column() const { DARABONBA_PTR_GET_CONST(column_, vector<Models::ListTableColumnsResponseBodyColumnListColumn>) };
    inline vector<Models::ListTableColumnsResponseBodyColumnListColumn> column() { DARABONBA_PTR_GET(column_, vector<Models::ListTableColumnsResponseBodyColumnListColumn>) };
    inline ListTableColumnsResponseBodyColumnList& setColumn(const vector<Models::ListTableColumnsResponseBodyColumnListColumn> & column) { DARABONBA_PTR_SET_VALUE(column_, column) };
    inline ListTableColumnsResponseBodyColumnList& setColumn(vector<Models::ListTableColumnsResponseBodyColumnListColumn> && column) { DARABONBA_PTR_SET_RVALUE(column_, column) };


  protected:
    std::shared_ptr<vector<Models::ListTableColumnsResponseBodyColumnListColumn>> column_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
