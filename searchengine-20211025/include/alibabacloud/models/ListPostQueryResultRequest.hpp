// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOSTQUERYRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPOSTQUERYRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListPostQueryResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPostQueryResultRequest& obj) { 
      DARABONBA_ANY_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListPostQueryResultRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListPostQueryResultRequest() = default ;
    ListPostQueryResultRequest(const ListPostQueryResultRequest &) = default ;
    ListPostQueryResultRequest(ListPostQueryResultRequest &&) = default ;
    ListPostQueryResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPostQueryResultRequest() = default ;
    ListPostQueryResultRequest& operator=(const ListPostQueryResultRequest &) = default ;
    ListPostQueryResultRequest& operator=(ListPostQueryResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->type_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline     const Darabonba::Json & body() const { DARABONBA_GET(body_) };
    Darabonba::Json & body() { DARABONBA_GET(body_) };
    inline ListPostQueryResultRequest& setBody(const Darabonba::Json & body) { DARABONBA_SET_VALUE(body_, body) };
    inline ListPostQueryResultRequest& setBody(Darabonba::Json & body) { DARABONBA_SET_RVALUE(body_, body) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListPostQueryResultRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The request body.
    Darabonba::Json body_ = nullptr;
    // The query type. Valid values: sql: SQL query. ha3: Havenask query.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
