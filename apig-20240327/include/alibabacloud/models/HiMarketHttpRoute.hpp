// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HIMARKETHTTPROUTE_HPP_
#define ALIBABACLOUD_MODELS_HIMARKETHTTPROUTE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HiMarketDomain.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HiMarketHttpRoute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HiMarketHttpRoute& obj) { 
      DARABONBA_PTR_TO_JSON(builtin, builtin_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(domains, domains_);
      DARABONBA_PTR_TO_JSON(match, match_);
    };
    friend void from_json(const Darabonba::Json& j, HiMarketHttpRoute& obj) { 
      DARABONBA_PTR_FROM_JSON(builtin, builtin_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(domains, domains_);
      DARABONBA_PTR_FROM_JSON(match, match_);
    };
    HiMarketHttpRoute() = default ;
    HiMarketHttpRoute(const HiMarketHttpRoute &) = default ;
    HiMarketHttpRoute(HiMarketHttpRoute &&) = default ;
    HiMarketHttpRoute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HiMarketHttpRoute() = default ;
    HiMarketHttpRoute& operator=(const HiMarketHttpRoute &) = default ;
    HiMarketHttpRoute& operator=(HiMarketHttpRoute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Match : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Match& obj) { 
        DARABONBA_PTR_TO_JSON(headers, headers_);
        DARABONBA_PTR_TO_JSON(methods, methods_);
        DARABONBA_PTR_TO_JSON(modelMatches, modelMatches_);
        DARABONBA_PTR_TO_JSON(path, path_);
        DARABONBA_PTR_TO_JSON(queryParams, queryParams_);
      };
      friend void from_json(const Darabonba::Json& j, Match& obj) { 
        DARABONBA_PTR_FROM_JSON(headers, headers_);
        DARABONBA_PTR_FROM_JSON(methods, methods_);
        DARABONBA_PTR_FROM_JSON(modelMatches, modelMatches_);
        DARABONBA_PTR_FROM_JSON(path, path_);
        DARABONBA_PTR_FROM_JSON(queryParams, queryParams_);
      };
      Match() = default ;
      Match(const Match &) = default ;
      Match(Match &&) = default ;
      Match(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Match() = default ;
      Match& operator=(const Match &) = default ;
      Match& operator=(Match &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class QueryParams : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QueryParams& obj) { 
          DARABONBA_PTR_TO_JSON(caseSensitive, caseSensitive_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, QueryParams& obj) { 
          DARABONBA_PTR_FROM_JSON(caseSensitive, caseSensitive_);
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
        virtual bool empty() const override { return this->caseSensitive_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
        // caseSensitive Field Functions 
        bool hasCaseSensitive() const { return this->caseSensitive_ != nullptr;};
        void deleteCaseSensitive() { this->caseSensitive_ = nullptr;};
        inline bool getCaseSensitive() const { DARABONBA_PTR_GET_DEFAULT(caseSensitive_, false) };
        inline QueryParams& setCaseSensitive(bool caseSensitive) { DARABONBA_PTR_SET_VALUE(caseSensitive_, caseSensitive) };


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
        // Indicates whether the matching is case-sensitive.
        shared_ptr<bool> caseSensitive_ {};
        // The parameter name.
        shared_ptr<string> name_ {};
        // The matching type.
        shared_ptr<string> type_ {};
        // The matching value.
        shared_ptr<string> value_ {};
      };

      class Path : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Path& obj) { 
          DARABONBA_PTR_TO_JSON(caseSensitive, caseSensitive_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Path& obj) { 
          DARABONBA_PTR_FROM_JSON(caseSensitive, caseSensitive_);
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
        virtual bool empty() const override { return this->caseSensitive_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
        // caseSensitive Field Functions 
        bool hasCaseSensitive() const { return this->caseSensitive_ != nullptr;};
        void deleteCaseSensitive() { this->caseSensitive_ = nullptr;};
        inline bool getCaseSensitive() const { DARABONBA_PTR_GET_DEFAULT(caseSensitive_, false) };
        inline Path& setCaseSensitive(bool caseSensitive) { DARABONBA_PTR_SET_VALUE(caseSensitive_, caseSensitive) };


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
        // Indicates whether the matching is case-sensitive.
        shared_ptr<bool> caseSensitive_ {};
        // The matching type.
        shared_ptr<string> type_ {};
        // The path value.
        shared_ptr<string> value_ {};
      };

      class ModelMatches : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModelMatches& obj) { 
          DARABONBA_PTR_TO_JSON(caseSensitive, caseSensitive_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, ModelMatches& obj) { 
          DARABONBA_PTR_FROM_JSON(caseSensitive, caseSensitive_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(value, value_);
        };
        ModelMatches() = default ;
        ModelMatches(const ModelMatches &) = default ;
        ModelMatches(ModelMatches &&) = default ;
        ModelMatches(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ModelMatches() = default ;
        ModelMatches& operator=(const ModelMatches &) = default ;
        ModelMatches& operator=(ModelMatches &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->caseSensitive_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
        // caseSensitive Field Functions 
        bool hasCaseSensitive() const { return this->caseSensitive_ != nullptr;};
        void deleteCaseSensitive() { this->caseSensitive_ = nullptr;};
        inline bool getCaseSensitive() const { DARABONBA_PTR_GET_DEFAULT(caseSensitive_, false) };
        inline ModelMatches& setCaseSensitive(bool caseSensitive) { DARABONBA_PTR_SET_VALUE(caseSensitive_, caseSensitive) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ModelMatches& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ModelMatches& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline ModelMatches& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // Indicates whether the matching is case-sensitive.
        shared_ptr<bool> caseSensitive_ {};
        // The parameter name.
        shared_ptr<string> name_ {};
        // The matching type.
        shared_ptr<string> type_ {};
        // The matching value.
        shared_ptr<string> value_ {};
      };

      class Headers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Headers& obj) { 
          DARABONBA_PTR_TO_JSON(caseSensitive, caseSensitive_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Headers& obj) { 
          DARABONBA_PTR_FROM_JSON(caseSensitive, caseSensitive_);
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
        virtual bool empty() const override { return this->caseSensitive_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
        // caseSensitive Field Functions 
        bool hasCaseSensitive() const { return this->caseSensitive_ != nullptr;};
        void deleteCaseSensitive() { this->caseSensitive_ = nullptr;};
        inline bool getCaseSensitive() const { DARABONBA_PTR_GET_DEFAULT(caseSensitive_, false) };
        inline Headers& setCaseSensitive(bool caseSensitive) { DARABONBA_PTR_SET_VALUE(caseSensitive_, caseSensitive) };


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
        // Indicates whether the matching is case-sensitive.
        shared_ptr<bool> caseSensitive_ {};
        // The parameter name.
        shared_ptr<string> name_ {};
        // The matching type.
        shared_ptr<string> type_ {};
        // The matching value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->headers_ == nullptr
        && this->methods_ == nullptr && this->modelMatches_ == nullptr && this->path_ == nullptr && this->queryParams_ == nullptr; };
      // headers Field Functions 
      bool hasHeaders() const { return this->headers_ != nullptr;};
      void deleteHeaders() { this->headers_ = nullptr;};
      inline const vector<Match::Headers> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, vector<Match::Headers>) };
      inline vector<Match::Headers> getHeaders() { DARABONBA_PTR_GET(headers_, vector<Match::Headers>) };
      inline Match& setHeaders(const vector<Match::Headers> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
      inline Match& setHeaders(vector<Match::Headers> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


      // methods Field Functions 
      bool hasMethods() const { return this->methods_ != nullptr;};
      void deleteMethods() { this->methods_ = nullptr;};
      inline const vector<string> & getMethods() const { DARABONBA_PTR_GET_CONST(methods_, vector<string>) };
      inline vector<string> getMethods() { DARABONBA_PTR_GET(methods_, vector<string>) };
      inline Match& setMethods(const vector<string> & methods) { DARABONBA_PTR_SET_VALUE(methods_, methods) };
      inline Match& setMethods(vector<string> && methods) { DARABONBA_PTR_SET_RVALUE(methods_, methods) };


      // modelMatches Field Functions 
      bool hasModelMatches() const { return this->modelMatches_ != nullptr;};
      void deleteModelMatches() { this->modelMatches_ = nullptr;};
      inline const vector<Match::ModelMatches> & getModelMatches() const { DARABONBA_PTR_GET_CONST(modelMatches_, vector<Match::ModelMatches>) };
      inline vector<Match::ModelMatches> getModelMatches() { DARABONBA_PTR_GET(modelMatches_, vector<Match::ModelMatches>) };
      inline Match& setModelMatches(const vector<Match::ModelMatches> & modelMatches) { DARABONBA_PTR_SET_VALUE(modelMatches_, modelMatches) };
      inline Match& setModelMatches(vector<Match::ModelMatches> && modelMatches) { DARABONBA_PTR_SET_RVALUE(modelMatches_, modelMatches) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline const Match::Path & getPath() const { DARABONBA_PTR_GET_CONST(path_, Match::Path) };
      inline Match::Path getPath() { DARABONBA_PTR_GET(path_, Match::Path) };
      inline Match& setPath(const Match::Path & path) { DARABONBA_PTR_SET_VALUE(path_, path) };
      inline Match& setPath(Match::Path && path) { DARABONBA_PTR_SET_RVALUE(path_, path) };


      // queryParams Field Functions 
      bool hasQueryParams() const { return this->queryParams_ != nullptr;};
      void deleteQueryParams() { this->queryParams_ = nullptr;};
      inline const vector<Match::QueryParams> & getQueryParams() const { DARABONBA_PTR_GET_CONST(queryParams_, vector<Match::QueryParams>) };
      inline vector<Match::QueryParams> getQueryParams() { DARABONBA_PTR_GET(queryParams_, vector<Match::QueryParams>) };
      inline Match& setQueryParams(const vector<Match::QueryParams> & queryParams) { DARABONBA_PTR_SET_VALUE(queryParams_, queryParams) };
      inline Match& setQueryParams(vector<Match::QueryParams> && queryParams) { DARABONBA_PTR_SET_RVALUE(queryParams_, queryParams) };


    protected:
      // The list of header matching rules.
      shared_ptr<vector<Match::Headers>> headers_ {};
      // The list of HTTP methods.
      shared_ptr<vector<string>> methods_ {};
      // The list of model matching rules (specific to Agent API).
      shared_ptr<vector<Match::ModelMatches>> modelMatches_ {};
      // The path matching rule.
      shared_ptr<Match::Path> path_ {};
      // The list of query parameter matching rules.
      shared_ptr<vector<Match::QueryParams>> queryParams_ {};
    };

    virtual bool empty() const override { return this->builtin_ == nullptr
        && this->description_ == nullptr && this->domains_ == nullptr && this->match_ == nullptr; };
    // builtin Field Functions 
    bool hasBuiltin() const { return this->builtin_ != nullptr;};
    void deleteBuiltin() { this->builtin_ = nullptr;};
    inline bool getBuiltin() const { DARABONBA_PTR_GET_DEFAULT(builtin_, false) };
    inline HiMarketHttpRoute& setBuiltin(bool builtin) { DARABONBA_PTR_SET_VALUE(builtin_, builtin) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline HiMarketHttpRoute& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<HiMarketDomain> & getDomains() const { DARABONBA_PTR_GET_CONST(domains_, vector<HiMarketDomain>) };
    inline vector<HiMarketDomain> getDomains() { DARABONBA_PTR_GET(domains_, vector<HiMarketDomain>) };
    inline HiMarketHttpRoute& setDomains(const vector<HiMarketDomain> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline HiMarketHttpRoute& setDomains(vector<HiMarketDomain> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline const HiMarketHttpRoute::Match & getMatch() const { DARABONBA_PTR_GET_CONST(match_, HiMarketHttpRoute::Match) };
    inline HiMarketHttpRoute::Match getMatch() { DARABONBA_PTR_GET(match_, HiMarketHttpRoute::Match) };
    inline HiMarketHttpRoute& setMatch(const HiMarketHttpRoute::Match & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
    inline HiMarketHttpRoute& setMatch(HiMarketHttpRoute::Match && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


  protected:
    // Indicates whether the route is a built-in route.
    shared_ptr<bool> builtin_ {};
    // The route description.
    shared_ptr<string> description_ {};
    // The list of associated domain names.
    shared_ptr<vector<HiMarketDomain>> domains_ {};
    // The route matching rule.
    shared_ptr<HiMarketHttpRoute::Match> match_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
