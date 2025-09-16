// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESTQUERYRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESTQUERYRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListRestQueryResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRestQueryResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(indexName, indexName_);
      DARABONBA_ANY_TO_JSON(query, query_);
    };
    friend void from_json(const Darabonba::Json& j, ListRestQueryResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(indexName, indexName_);
      DARABONBA_ANY_FROM_JSON(query, query_);
    };
    ListRestQueryResultRequest() = default ;
    ListRestQueryResultRequest(const ListRestQueryResultRequest &) = default ;
    ListRestQueryResultRequest(ListRestQueryResultRequest &&) = default ;
    ListRestQueryResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRestQueryResultRequest() = default ;
    ListRestQueryResultRequest& operator=(const ListRestQueryResultRequest &) = default ;
    ListRestQueryResultRequest& operator=(ListRestQueryResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->indexName_ != nullptr
        && this->query_ != nullptr; };
    // indexName Field Functions 
    bool hasIndexName() const { return this->indexName_ != nullptr;};
    void deleteIndexName() { this->indexName_ = nullptr;};
    inline string indexName() const { DARABONBA_PTR_GET_DEFAULT(indexName_, "") };
    inline ListRestQueryResultRequest& setIndexName(string indexName) { DARABONBA_PTR_SET_VALUE(indexName_, indexName) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline     const Darabonba::Json & query() const { DARABONBA_GET(query_) };
    Darabonba::Json & query() { DARABONBA_GET(query_) };
    inline ListRestQueryResultRequest& setQuery(const Darabonba::Json & query) { DARABONBA_SET_VALUE(query_, query) };
    inline ListRestQueryResultRequest& setQuery(Darabonba::Json & query) { DARABONBA_SET_RVALUE(query_, query) };


  protected:
    // The name of the index table.
    std::shared_ptr<string> indexName_ = nullptr;
    // The rest query statement.
    Darabonba::Json query_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
