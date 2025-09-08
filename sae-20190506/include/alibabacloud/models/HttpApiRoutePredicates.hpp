// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIROUTEPREDICATES_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIROUTEPREDICATES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HttpApiRoutePredicatesHeaderPredicates.hpp>
#include <alibabacloud/models/HttpApiRoutePredicatesPathPredicates.hpp>
#include <alibabacloud/models/HttpApiRoutePredicatesQueryPredicates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class HttpApiRoutePredicates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiRoutePredicates& obj) { 
      DARABONBA_PTR_TO_JSON(HeaderPredicates, headerPredicates_);
      DARABONBA_PTR_TO_JSON(MethodPredicates, methodPredicates_);
      DARABONBA_PTR_TO_JSON(PathPredicates, pathPredicates_);
      DARABONBA_PTR_TO_JSON(QueryPredicates, queryPredicates_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiRoutePredicates& obj) { 
      DARABONBA_PTR_FROM_JSON(HeaderPredicates, headerPredicates_);
      DARABONBA_PTR_FROM_JSON(MethodPredicates, methodPredicates_);
      DARABONBA_PTR_FROM_JSON(PathPredicates, pathPredicates_);
      DARABONBA_PTR_FROM_JSON(QueryPredicates, queryPredicates_);
    };
    HttpApiRoutePredicates() = default ;
    HttpApiRoutePredicates(const HttpApiRoutePredicates &) = default ;
    HttpApiRoutePredicates(HttpApiRoutePredicates &&) = default ;
    HttpApiRoutePredicates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiRoutePredicates() = default ;
    HttpApiRoutePredicates& operator=(const HttpApiRoutePredicates &) = default ;
    HttpApiRoutePredicates& operator=(HttpApiRoutePredicates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headerPredicates_ != nullptr
        && this->methodPredicates_ != nullptr && this->pathPredicates_ != nullptr && this->queryPredicates_ != nullptr; };
    // headerPredicates Field Functions 
    bool hasHeaderPredicates() const { return this->headerPredicates_ != nullptr;};
    void deleteHeaderPredicates() { this->headerPredicates_ = nullptr;};
    inline const vector<Models::HttpApiRoutePredicatesHeaderPredicates> & headerPredicates() const { DARABONBA_PTR_GET_CONST(headerPredicates_, vector<Models::HttpApiRoutePredicatesHeaderPredicates>) };
    inline vector<Models::HttpApiRoutePredicatesHeaderPredicates> headerPredicates() { DARABONBA_PTR_GET(headerPredicates_, vector<Models::HttpApiRoutePredicatesHeaderPredicates>) };
    inline HttpApiRoutePredicates& setHeaderPredicates(const vector<Models::HttpApiRoutePredicatesHeaderPredicates> & headerPredicates) { DARABONBA_PTR_SET_VALUE(headerPredicates_, headerPredicates) };
    inline HttpApiRoutePredicates& setHeaderPredicates(vector<Models::HttpApiRoutePredicatesHeaderPredicates> && headerPredicates) { DARABONBA_PTR_SET_RVALUE(headerPredicates_, headerPredicates) };


    // methodPredicates Field Functions 
    bool hasMethodPredicates() const { return this->methodPredicates_ != nullptr;};
    void deleteMethodPredicates() { this->methodPredicates_ = nullptr;};
    inline const vector<string> & methodPredicates() const { DARABONBA_PTR_GET_CONST(methodPredicates_, vector<string>) };
    inline vector<string> methodPredicates() { DARABONBA_PTR_GET(methodPredicates_, vector<string>) };
    inline HttpApiRoutePredicates& setMethodPredicates(const vector<string> & methodPredicates) { DARABONBA_PTR_SET_VALUE(methodPredicates_, methodPredicates) };
    inline HttpApiRoutePredicates& setMethodPredicates(vector<string> && methodPredicates) { DARABONBA_PTR_SET_RVALUE(methodPredicates_, methodPredicates) };


    // pathPredicates Field Functions 
    bool hasPathPredicates() const { return this->pathPredicates_ != nullptr;};
    void deletePathPredicates() { this->pathPredicates_ = nullptr;};
    inline const Models::HttpApiRoutePredicatesPathPredicates & pathPredicates() const { DARABONBA_PTR_GET_CONST(pathPredicates_, Models::HttpApiRoutePredicatesPathPredicates) };
    inline Models::HttpApiRoutePredicatesPathPredicates pathPredicates() { DARABONBA_PTR_GET(pathPredicates_, Models::HttpApiRoutePredicatesPathPredicates) };
    inline HttpApiRoutePredicates& setPathPredicates(const Models::HttpApiRoutePredicatesPathPredicates & pathPredicates) { DARABONBA_PTR_SET_VALUE(pathPredicates_, pathPredicates) };
    inline HttpApiRoutePredicates& setPathPredicates(Models::HttpApiRoutePredicatesPathPredicates && pathPredicates) { DARABONBA_PTR_SET_RVALUE(pathPredicates_, pathPredicates) };


    // queryPredicates Field Functions 
    bool hasQueryPredicates() const { return this->queryPredicates_ != nullptr;};
    void deleteQueryPredicates() { this->queryPredicates_ = nullptr;};
    inline const vector<Models::HttpApiRoutePredicatesQueryPredicates> & queryPredicates() const { DARABONBA_PTR_GET_CONST(queryPredicates_, vector<Models::HttpApiRoutePredicatesQueryPredicates>) };
    inline vector<Models::HttpApiRoutePredicatesQueryPredicates> queryPredicates() { DARABONBA_PTR_GET(queryPredicates_, vector<Models::HttpApiRoutePredicatesQueryPredicates>) };
    inline HttpApiRoutePredicates& setQueryPredicates(const vector<Models::HttpApiRoutePredicatesQueryPredicates> & queryPredicates) { DARABONBA_PTR_SET_VALUE(queryPredicates_, queryPredicates) };
    inline HttpApiRoutePredicates& setQueryPredicates(vector<Models::HttpApiRoutePredicatesQueryPredicates> && queryPredicates) { DARABONBA_PTR_SET_RVALUE(queryPredicates_, queryPredicates) };


  protected:
    std::shared_ptr<vector<Models::HttpApiRoutePredicatesHeaderPredicates>> headerPredicates_ = nullptr;
    std::shared_ptr<vector<string>> methodPredicates_ = nullptr;
    std::shared_ptr<Models::HttpApiRoutePredicatesPathPredicates> pathPredicates_ = nullptr;
    std::shared_ptr<vector<Models::HttpApiRoutePredicatesQueryPredicates>> queryPredicates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
