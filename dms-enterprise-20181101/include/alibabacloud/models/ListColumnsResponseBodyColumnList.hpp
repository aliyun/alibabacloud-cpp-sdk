// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOLUMNSRESPONSEBODYCOLUMNLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCOLUMNSRESPONSEBODYCOLUMNLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListColumnsResponseBodyColumnListColumn.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListColumnsResponseBodyColumnList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListColumnsResponseBodyColumnList& obj) { 
      DARABONBA_PTR_TO_JSON(Column, column_);
    };
    friend void from_json(const Darabonba::Json& j, ListColumnsResponseBodyColumnList& obj) { 
      DARABONBA_PTR_FROM_JSON(Column, column_);
    };
    ListColumnsResponseBodyColumnList() = default ;
    ListColumnsResponseBodyColumnList(const ListColumnsResponseBodyColumnList &) = default ;
    ListColumnsResponseBodyColumnList(ListColumnsResponseBodyColumnList &&) = default ;
    ListColumnsResponseBodyColumnList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListColumnsResponseBodyColumnList() = default ;
    ListColumnsResponseBodyColumnList& operator=(const ListColumnsResponseBodyColumnList &) = default ;
    ListColumnsResponseBodyColumnList& operator=(ListColumnsResponseBodyColumnList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->column_ != nullptr; };
    // column Field Functions 
    bool hasColumn() const { return this->column_ != nullptr;};
    void deleteColumn() { this->column_ = nullptr;};
    inline const vector<Models::ListColumnsResponseBodyColumnListColumn> & column() const { DARABONBA_PTR_GET_CONST(column_, vector<Models::ListColumnsResponseBodyColumnListColumn>) };
    inline vector<Models::ListColumnsResponseBodyColumnListColumn> column() { DARABONBA_PTR_GET(column_, vector<Models::ListColumnsResponseBodyColumnListColumn>) };
    inline ListColumnsResponseBodyColumnList& setColumn(const vector<Models::ListColumnsResponseBodyColumnListColumn> & column) { DARABONBA_PTR_SET_VALUE(column_, column) };
    inline ListColumnsResponseBodyColumnList& setColumn(vector<Models::ListColumnsResponseBodyColumnListColumn> && column) { DARABONBA_PTR_SET_RVALUE(column_, column) };


  protected:
    std::shared_ptr<vector<Models::ListColumnsResponseBodyColumnListColumn>> column_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
