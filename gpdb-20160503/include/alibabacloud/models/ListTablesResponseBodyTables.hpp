// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLESRESPONSEBODYTABLES_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLESRESPONSEBODYTABLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListTablesResponseBodyTables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTablesResponseBodyTables& obj) { 
      DARABONBA_PTR_TO_JSON(Tables, tables_);
    };
    friend void from_json(const Darabonba::Json& j, ListTablesResponseBodyTables& obj) { 
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
    };
    ListTablesResponseBodyTables() = default ;
    ListTablesResponseBodyTables(const ListTablesResponseBodyTables &) = default ;
    ListTablesResponseBodyTables(ListTablesResponseBodyTables &&) = default ;
    ListTablesResponseBodyTables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTablesResponseBodyTables() = default ;
    ListTablesResponseBodyTables& operator=(const ListTablesResponseBodyTables &) = default ;
    ListTablesResponseBodyTables& operator=(ListTablesResponseBodyTables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tables_ == nullptr; };
    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<string> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<string>) };
    inline vector<string> tables() { DARABONBA_PTR_GET(tables_, vector<string>) };
    inline ListTablesResponseBodyTables& setTables(const vector<string> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline ListTablesResponseBodyTables& setTables(vector<string> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


  protected:
    std::shared_ptr<vector<string>> tables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
