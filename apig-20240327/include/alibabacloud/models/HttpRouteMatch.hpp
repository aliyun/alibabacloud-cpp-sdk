// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPROUTEMATCH_HPP_
#define ALIBABACLOUD_MODELS_HTTPROUTEMATCH_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class QueryParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QueryParams& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, QueryParams& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      QueryParams() = default ;
      QueryParams(const QueryParams &) = default ;
      QueryParams(QueryParams &&) = default ;
      QueryParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QueryParams() = default ;
      QueryParams& operator=(const QueryParams &) = default ;
      QueryParams& operator=(QueryParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline QueryParams& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline QueryParams& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline QueryParams& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> value_ {};
    };

    class Path : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Path& obj) { 
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Path& obj) { 
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      Path() = default ;
      Path(const Path &) = default ;
      Path(Path &&) = default ;
      Path(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Path() = default ;
      Path& operator=(const Path &) = default ;
      Path& operator=(Path &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->type_ == nullptr
        && this->value_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Path& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Path& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> type_ {};
      shared_ptr<string> value_ {};
    };

    class Headers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Headers& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Headers& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      Headers() = default ;
      Headers(const Headers &) = default ;
      Headers(Headers &&) = default ;
      Headers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Headers() = default ;
      Headers& operator=(const Headers &) = default ;
      Headers& operator=(Headers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Headers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Headers& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Headers& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->headers_ == nullptr
        && this->ignoreUriCase_ == nullptr && this->methods_ == nullptr && this->path_ == nullptr && this->queryParams_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const vector<HttpRouteMatch::Headers> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, vector<HttpRouteMatch::Headers>) };
    inline vector<HttpRouteMatch::Headers> getHeaders() { DARABONBA_PTR_GET(headers_, vector<HttpRouteMatch::Headers>) };
    inline HttpRouteMatch& setHeaders(const vector<HttpRouteMatch::Headers> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline HttpRouteMatch& setHeaders(vector<HttpRouteMatch::Headers> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // ignoreUriCase Field Functions 
    bool hasIgnoreUriCase() const { return this->ignoreUriCase_ != nullptr;};
    void deleteIgnoreUriCase() { this->ignoreUriCase_ = nullptr;};
    inline bool getIgnoreUriCase() const { DARABONBA_PTR_GET_DEFAULT(ignoreUriCase_, false) };
    inline HttpRouteMatch& setIgnoreUriCase(bool ignoreUriCase) { DARABONBA_PTR_SET_VALUE(ignoreUriCase_, ignoreUriCase) };


    // methods Field Functions 
    bool hasMethods() const { return this->methods_ != nullptr;};
    void deleteMethods() { this->methods_ = nullptr;};
    inline const vector<string> & getMethods() const { DARABONBA_PTR_GET_CONST(methods_, vector<string>) };
    inline vector<string> getMethods() { DARABONBA_PTR_GET(methods_, vector<string>) };
    inline HttpRouteMatch& setMethods(const vector<string> & methods) { DARABONBA_PTR_SET_VALUE(methods_, methods) };
    inline HttpRouteMatch& setMethods(vector<string> && methods) { DARABONBA_PTR_SET_RVALUE(methods_, methods) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline const HttpRouteMatch::Path & getPath() const { DARABONBA_PTR_GET_CONST(path_, HttpRouteMatch::Path) };
    inline HttpRouteMatch::Path getPath() { DARABONBA_PTR_GET(path_, HttpRouteMatch::Path) };
    inline HttpRouteMatch& setPath(const HttpRouteMatch::Path & path) { DARABONBA_PTR_SET_VALUE(path_, path) };
    inline HttpRouteMatch& setPath(HttpRouteMatch::Path && path) { DARABONBA_PTR_SET_RVALUE(path_, path) };


    // queryParams Field Functions 
    bool hasQueryParams() const { return this->queryParams_ != nullptr;};
    void deleteQueryParams() { this->queryParams_ = nullptr;};
    inline const vector<HttpRouteMatch::QueryParams> & getQueryParams() const { DARABONBA_PTR_GET_CONST(queryParams_, vector<HttpRouteMatch::QueryParams>) };
    inline vector<HttpRouteMatch::QueryParams> getQueryParams() { DARABONBA_PTR_GET(queryParams_, vector<HttpRouteMatch::QueryParams>) };
    inline HttpRouteMatch& setQueryParams(const vector<HttpRouteMatch::QueryParams> & queryParams) { DARABONBA_PTR_SET_VALUE(queryParams_, queryParams) };
    inline HttpRouteMatch& setQueryParams(vector<HttpRouteMatch::QueryParams> && queryParams) { DARABONBA_PTR_SET_RVALUE(queryParams_, queryParams) };


  protected:
    shared_ptr<vector<HttpRouteMatch::Headers>> headers_ {};
    shared_ptr<bool> ignoreUriCase_ {};
    shared_ptr<vector<string>> methods_ {};
    shared_ptr<HttpRouteMatch::Path> path_ {};
    shared_ptr<vector<HttpRouteMatch::QueryParams>> queryParams_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
