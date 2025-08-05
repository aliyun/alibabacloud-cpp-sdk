// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListTablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(tables, tables_);
    };
    friend void from_json(const Darabonba::Json& j, ListTablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(tables, tables_);
    };
    ListTablesResponseBody() = default ;
    ListTablesResponseBody(const ListTablesResponseBody &) = default ;
    ListTablesResponseBody(ListTablesResponseBody &&) = default ;
    ListTablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTablesResponseBody() = default ;
    ListTablesResponseBody& operator=(const ListTablesResponseBody &) = default ;
    ListTablesResponseBody& operator=(ListTablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextPageToken_ != nullptr
        && this->tables_ != nullptr; };
    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListTablesResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<string> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<string>) };
    inline vector<string> tables() { DARABONBA_PTR_GET(tables_, vector<string>) };
    inline ListTablesResponseBody& setTables(const vector<string> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline ListTablesResponseBody& setTables(vector<string> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


  protected:
    std::shared_ptr<string> nextPageToken_ = nullptr;
    std::shared_ptr<vector<string>> tables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
