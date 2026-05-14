// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEBSEARCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_WEBSEARCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaasAISearchProxy20260424
{
namespace Models
{
  class WebSearchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WebSearchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
    };
    friend void from_json(const Darabonba::Json& j, WebSearchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
    };
    WebSearchResponseBody() = default ;
    WebSearchResponseBody(const WebSearchResponseBody &) = default ;
    WebSearchResponseBody(WebSearchResponseBody &&) = default ;
    WebSearchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WebSearchResponseBody() = default ;
    WebSearchResponseBody& operator=(const WebSearchResponseBody &) = default ;
    WebSearchResponseBody& operator=(WebSearchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(result, result_);
        DARABONBA_PTR_TO_JSON(total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(result, result_);
        DARABONBA_PTR_FROM_JSON(total, total_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(date, date_);
          DARABONBA_PTR_TO_JSON(snippet, snippet_);
          DARABONBA_PTR_TO_JSON(source, source_);
          DARABONBA_PTR_TO_JSON(title, title_);
          DARABONBA_PTR_TO_JSON(url, url_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(date, date_);
          DARABONBA_PTR_FROM_JSON(snippet, snippet_);
          DARABONBA_PTR_FROM_JSON(source, source_);
          DARABONBA_PTR_FROM_JSON(title, title_);
          DARABONBA_PTR_FROM_JSON(url, url_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Source : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Source& obj) { 
            DARABONBA_PTR_TO_JSON(domain, domain_);
            DARABONBA_PTR_TO_JSON(favicon, favicon_);
            DARABONBA_PTR_TO_JSON(name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Source& obj) { 
            DARABONBA_PTR_FROM_JSON(domain, domain_);
            DARABONBA_PTR_FROM_JSON(favicon, favicon_);
            DARABONBA_PTR_FROM_JSON(name, name_);
          };
          Source() = default ;
          Source(const Source &) = default ;
          Source(Source &&) = default ;
          Source(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Source() = default ;
          Source& operator=(const Source &) = default ;
          Source& operator=(Source &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->domain_ == nullptr
        && this->favicon_ == nullptr && this->name_ == nullptr; };
          // domain Field Functions 
          bool hasDomain() const { return this->domain_ != nullptr;};
          void deleteDomain() { this->domain_ = nullptr;};
          inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
          inline Source& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


          // favicon Field Functions 
          bool hasFavicon() const { return this->favicon_ != nullptr;};
          void deleteFavicon() { this->favicon_ = nullptr;};
          inline string getFavicon() const { DARABONBA_PTR_GET_DEFAULT(favicon_, "") };
          inline Source& setFavicon(string favicon) { DARABONBA_PTR_SET_VALUE(favicon_, favicon) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Source& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          shared_ptr<string> domain_ {};
          shared_ptr<string> favicon_ {};
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->date_ == nullptr
        && this->snippet_ == nullptr && this->source_ == nullptr && this->title_ == nullptr && this->url_ == nullptr; };
        // date Field Functions 
        bool hasDate() const { return this->date_ != nullptr;};
        void deleteDate() { this->date_ = nullptr;};
        inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
        inline Result& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


        // snippet Field Functions 
        bool hasSnippet() const { return this->snippet_ != nullptr;};
        void deleteSnippet() { this->snippet_ = nullptr;};
        inline string getSnippet() const { DARABONBA_PTR_GET_DEFAULT(snippet_, "") };
        inline Result& setSnippet(string snippet) { DARABONBA_PTR_SET_VALUE(snippet_, snippet) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline const Result::Source & getSource() const { DARABONBA_PTR_GET_CONST(source_, Result::Source) };
        inline Result::Source getSource() { DARABONBA_PTR_GET(source_, Result::Source) };
        inline Result& setSource(const Result::Source & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
        inline Result& setSource(Result::Source && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Result& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Result& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<string> date_ {};
        shared_ptr<string> snippet_ {};
        shared_ptr<Result::Source> source_ {};
        shared_ptr<string> title_ {};
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->result_ == nullptr
        && this->total_ == nullptr; };
      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Data::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Data::Result>) };
      inline vector<Data::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Data::Result>) };
      inline Data& setResult(const vector<Data::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(vector<Data::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<vector<Data::Result>> result_ {};
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline WebSearchResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const WebSearchResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, WebSearchResponseBody::Data) };
    inline WebSearchResponseBody::Data getData() { DARABONBA_PTR_GET(data_, WebSearchResponseBody::Data) };
    inline WebSearchResponseBody& setData(const WebSearchResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline WebSearchResponseBody& setData(WebSearchResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline WebSearchResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<WebSearchResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaasAISearchProxy20260424
#endif
