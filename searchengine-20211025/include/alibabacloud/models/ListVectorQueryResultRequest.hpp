// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVECTORQUERYRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVECTORQUERYRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListVectorQueryResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVectorQueryResultRequest& obj) { 
      DARABONBA_ANY_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(queryType, queryType_);
      DARABONBA_PTR_TO_JSON(vectorQueryType, vectorQueryType_);
    };
    friend void from_json(const Darabonba::Json& j, ListVectorQueryResultRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(queryType, queryType_);
      DARABONBA_PTR_FROM_JSON(vectorQueryType, vectorQueryType_);
    };
    ListVectorQueryResultRequest() = default ;
    ListVectorQueryResultRequest(const ListVectorQueryResultRequest &) = default ;
    ListVectorQueryResultRequest(ListVectorQueryResultRequest &&) = default ;
    ListVectorQueryResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVectorQueryResultRequest() = default ;
    ListVectorQueryResultRequest& operator=(const ListVectorQueryResultRequest &) = default ;
    ListVectorQueryResultRequest& operator=(ListVectorQueryResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->path_ != nullptr && this->queryType_ != nullptr && this->vectorQueryType_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline     const Darabonba::Json & body() const { DARABONBA_GET(body_) };
    Darabonba::Json & body() { DARABONBA_GET(body_) };
    inline ListVectorQueryResultRequest& setBody(const Darabonba::Json & body) { DARABONBA_SET_VALUE(body_, body) };
    inline ListVectorQueryResultRequest& setBody(Darabonba::Json & body) { DARABONBA_SET_RVALUE(body_, body) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListVectorQueryResultRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // queryType Field Functions 
    bool hasQueryType() const { return this->queryType_ != nullptr;};
    void deleteQueryType() { this->queryType_ = nullptr;};
    inline string queryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
    inline ListVectorQueryResultRequest& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


    // vectorQueryType Field Functions 
    bool hasVectorQueryType() const { return this->vectorQueryType_ != nullptr;};
    void deleteVectorQueryType() { this->vectorQueryType_ = nullptr;};
    inline string vectorQueryType() const { DARABONBA_PTR_GET_DEFAULT(vectorQueryType_, "") };
    inline ListVectorQueryResultRequest& setVectorQueryType(string vectorQueryType) { DARABONBA_PTR_SET_VALUE(vectorQueryType_, vectorQueryType) };


  protected:
    // The request body.
    Darabonba::Json body_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    // The query type. Valid values: vector, primary_key, and vector_text.
    std::shared_ptr<string> queryType_ = nullptr;
    // The vector query type. Valid values: vector, image, and text.
    std::shared_ptr<string> vectorQueryType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
