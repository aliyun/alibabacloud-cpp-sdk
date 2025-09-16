// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUERYRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUERYRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListQueryResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueryResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(sql, sql_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueryResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(sql, sql_);
    };
    ListQueryResultRequest() = default ;
    ListQueryResultRequest(const ListQueryResultRequest &) = default ;
    ListQueryResultRequest(ListQueryResultRequest &&) = default ;
    ListQueryResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueryResultRequest() = default ;
    ListQueryResultRequest& operator=(const ListQueryResultRequest &) = default ;
    ListQueryResultRequest& operator=(ListQueryResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->query_ != nullptr
        && this->sql_ != nullptr; };
    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListQueryResultRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string sql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline ListQueryResultRequest& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


  protected:
    // The query statement
    std::shared_ptr<string> query_ = nullptr;
    // The SQL statement that is executed in the query
    std::shared_ptr<string> sql_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
