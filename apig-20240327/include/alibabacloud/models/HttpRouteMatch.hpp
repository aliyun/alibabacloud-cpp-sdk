// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPROUTEMATCH_HPP_
#define ALIBABACLOUD_MODELS_HTTPROUTEMATCH_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HttpRouteMatchHeaders.hpp>
#include <alibabacloud/models/HttpRouteMatchPath.hpp>
#include <alibabacloud/models/HttpRouteMatchQueryParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpRouteMatch : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpRouteMatch& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(ignoreUriCase, ignoreUriCase_);
      DARABONBA_PTR_TO_JSON(methods, methods_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(queryParams, queryParams_);
    };
    friend void from_json(const Darabonba::Json& j, HttpRouteMatch& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(ignoreUriCase, ignoreUriCase_);
      DARABONBA_PTR_FROM_JSON(methods, methods_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(queryParams, queryParams_);
    };
    HttpRouteMatch() = default ;
    HttpRouteMatch(const HttpRouteMatch &) = default ;
    HttpRouteMatch(HttpRouteMatch &&) = default ;
    HttpRouteMatch(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpRouteMatch() = default ;
    HttpRouteMatch& operator=(const HttpRouteMatch &) = default ;
    HttpRouteMatch& operator=(HttpRouteMatch &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->ignoreUriCase_ != nullptr && this->methods_ != nullptr && this->path_ != nullptr && this->queryParams_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const vector<HttpRouteMatchHeaders> & headers() const { DARABONBA_PTR_GET_CONST(headers_, vector<HttpRouteMatchHeaders>) };
    inline vector<HttpRouteMatchHeaders> headers() { DARABONBA_PTR_GET(headers_, vector<HttpRouteMatchHeaders>) };
    inline HttpRouteMatch& setHeaders(const vector<HttpRouteMatchHeaders> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline HttpRouteMatch& setHeaders(vector<HttpRouteMatchHeaders> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // ignoreUriCase Field Functions 
    bool hasIgnoreUriCase() const { return this->ignoreUriCase_ != nullptr;};
    void deleteIgnoreUriCase() { this->ignoreUriCase_ = nullptr;};
    inline bool ignoreUriCase() const { DARABONBA_PTR_GET_DEFAULT(ignoreUriCase_, false) };
    inline HttpRouteMatch& setIgnoreUriCase(bool ignoreUriCase) { DARABONBA_PTR_SET_VALUE(ignoreUriCase_, ignoreUriCase) };


    // methods Field Functions 
    bool hasMethods() const { return this->methods_ != nullptr;};
    void deleteMethods() { this->methods_ = nullptr;};
    inline const vector<string> & methods() const { DARABONBA_PTR_GET_CONST(methods_, vector<string>) };
    inline vector<string> methods() { DARABONBA_PTR_GET(methods_, vector<string>) };
    inline HttpRouteMatch& setMethods(const vector<string> & methods) { DARABONBA_PTR_SET_VALUE(methods_, methods) };
    inline HttpRouteMatch& setMethods(vector<string> && methods) { DARABONBA_PTR_SET_RVALUE(methods_, methods) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline const HttpRouteMatchPath & path() const { DARABONBA_PTR_GET_CONST(path_, HttpRouteMatchPath) };
    inline HttpRouteMatchPath path() { DARABONBA_PTR_GET(path_, HttpRouteMatchPath) };
    inline HttpRouteMatch& setPath(const HttpRouteMatchPath & path) { DARABONBA_PTR_SET_VALUE(path_, path) };
    inline HttpRouteMatch& setPath(HttpRouteMatchPath && path) { DARABONBA_PTR_SET_RVALUE(path_, path) };


    // queryParams Field Functions 
    bool hasQueryParams() const { return this->queryParams_ != nullptr;};
    void deleteQueryParams() { this->queryParams_ = nullptr;};
    inline const vector<HttpRouteMatchQueryParams> & queryParams() const { DARABONBA_PTR_GET_CONST(queryParams_, vector<HttpRouteMatchQueryParams>) };
    inline vector<HttpRouteMatchQueryParams> queryParams() { DARABONBA_PTR_GET(queryParams_, vector<HttpRouteMatchQueryParams>) };
    inline HttpRouteMatch& setQueryParams(const vector<HttpRouteMatchQueryParams> & queryParams) { DARABONBA_PTR_SET_VALUE(queryParams_, queryParams) };
    inline HttpRouteMatch& setQueryParams(vector<HttpRouteMatchQueryParams> && queryParams) { DARABONBA_PTR_SET_RVALUE(queryParams_, queryParams) };


  protected:
    std::shared_ptr<vector<HttpRouteMatchHeaders>> headers_ = nullptr;
    std::shared_ptr<bool> ignoreUriCase_ = nullptr;
    std::shared_ptr<vector<string>> methods_ = nullptr;
    std::shared_ptr<HttpRouteMatchPath> path_ = nullptr;
    std::shared_ptr<vector<HttpRouteMatchQueryParams>> queryParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
