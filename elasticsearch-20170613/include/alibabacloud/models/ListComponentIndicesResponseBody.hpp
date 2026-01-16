// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTINDICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTINDICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListComponentIndicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentIndicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentIndicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListComponentIndicesResponseBody() = default ;
    ListComponentIndicesResponseBody(const ListComponentIndicesResponseBody &) = default ;
    ListComponentIndicesResponseBody(ListComponentIndicesResponseBody &&) = default ;
    ListComponentIndicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentIndicesResponseBody() = default ;
    ListComponentIndicesResponseBody& operator=(const ListComponentIndicesResponseBody &) = default ;
    ListComponentIndicesResponseBody& operator=(ListComponentIndicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(composed, composed_);
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(composed, composed_);
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(name, name_);
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
      class Content : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Content& obj) { 
          DARABONBA_ANY_TO_JSON(_meta, meta_);
          DARABONBA_PTR_TO_JSON(template, template_);
          DARABONBA_PTR_TO_JSON(version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_ANY_FROM_JSON(_meta, meta_);
          DARABONBA_PTR_FROM_JSON(template, template_);
          DARABONBA_PTR_FROM_JSON(version, version_);
        };
        Content() = default ;
        Content(const Content &) = default ;
        Content(Content &&) = default ;
        Content(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Content() = default ;
        Content& operator=(const Content &) = default ;
        Content& operator=(Content &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Template : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Template& obj) { 
            DARABONBA_PTR_TO_JSON(settings, settings_);
          };
          friend void from_json(const Darabonba::Json& j, Template& obj) { 
            DARABONBA_PTR_FROM_JSON(settings, settings_);
          };
          Template() = default ;
          Template(const Template &) = default ;
          Template(Template &&) = default ;
          Template(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Template() = default ;
          Template& operator=(const Template &) = default ;
          Template& operator=(Template &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Settings : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Settings& obj) { 
              DARABONBA_PTR_TO_JSON(index, index_);
            };
            friend void from_json(const Darabonba::Json& j, Settings& obj) { 
              DARABONBA_PTR_FROM_JSON(index, index_);
            };
            Settings() = default ;
            Settings(const Settings &) = default ;
            Settings(Settings &&) = default ;
            Settings(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Settings() = default ;
            Settings& operator=(const Settings &) = default ;
            Settings& operator=(Settings &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Index : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Index& obj) { 
                DARABONBA_PTR_TO_JSON(codec, codec_);
                DARABONBA_PTR_TO_JSON(lifecycle, lifecycle_);
              };
              friend void from_json(const Darabonba::Json& j, Index& obj) { 
                DARABONBA_PTR_FROM_JSON(codec, codec_);
                DARABONBA_PTR_FROM_JSON(lifecycle, lifecycle_);
              };
              Index() = default ;
              Index(const Index &) = default ;
              Index(Index &&) = default ;
              Index(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Index() = default ;
              Index& operator=(const Index &) = default ;
              Index& operator=(Index &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Lifecycle : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Lifecycle& obj) { 
                  DARABONBA_PTR_TO_JSON(name, name_);
                };
                friend void from_json(const Darabonba::Json& j, Lifecycle& obj) { 
                  DARABONBA_PTR_FROM_JSON(name, name_);
                };
                Lifecycle() = default ;
                Lifecycle(const Lifecycle &) = default ;
                Lifecycle(Lifecycle &&) = default ;
                Lifecycle(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Lifecycle() = default ;
                Lifecycle& operator=(const Lifecycle &) = default ;
                Lifecycle& operator=(Lifecycle &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->name_ == nullptr; };
                // name Field Functions 
                bool hasName() const { return this->name_ != nullptr;};
                void deleteName() { this->name_ = nullptr;};
                inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
                inline Lifecycle& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


              protected:
                shared_ptr<string> name_ {};
              };

              virtual bool empty() const override { return this->codec_ == nullptr
        && this->lifecycle_ == nullptr; };
              // codec Field Functions 
              bool hasCodec() const { return this->codec_ != nullptr;};
              void deleteCodec() { this->codec_ = nullptr;};
              inline string getCodec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
              inline Index& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


              // lifecycle Field Functions 
              bool hasLifecycle() const { return this->lifecycle_ != nullptr;};
              void deleteLifecycle() { this->lifecycle_ = nullptr;};
              inline const Index::Lifecycle & getLifecycle() const { DARABONBA_PTR_GET_CONST(lifecycle_, Index::Lifecycle) };
              inline Index::Lifecycle getLifecycle() { DARABONBA_PTR_GET(lifecycle_, Index::Lifecycle) };
              inline Index& setLifecycle(const Index::Lifecycle & lifecycle) { DARABONBA_PTR_SET_VALUE(lifecycle_, lifecycle) };
              inline Index& setLifecycle(Index::Lifecycle && lifecycle) { DARABONBA_PTR_SET_RVALUE(lifecycle_, lifecycle) };


            protected:
              shared_ptr<string> codec_ {};
              shared_ptr<Index::Lifecycle> lifecycle_ {};
            };

            virtual bool empty() const override { return this->index_ == nullptr; };
            // index Field Functions 
            bool hasIndex() const { return this->index_ != nullptr;};
            void deleteIndex() { this->index_ = nullptr;};
            inline const Settings::Index & getIndex() const { DARABONBA_PTR_GET_CONST(index_, Settings::Index) };
            inline Settings::Index getIndex() { DARABONBA_PTR_GET(index_, Settings::Index) };
            inline Settings& setIndex(const Settings::Index & index) { DARABONBA_PTR_SET_VALUE(index_, index) };
            inline Settings& setIndex(Settings::Index && index) { DARABONBA_PTR_SET_RVALUE(index_, index) };


          protected:
            shared_ptr<Settings::Index> index_ {};
          };

          virtual bool empty() const override { return this->settings_ == nullptr; };
          // settings Field Functions 
          bool hasSettings() const { return this->settings_ != nullptr;};
          void deleteSettings() { this->settings_ = nullptr;};
          inline const Template::Settings & getSettings() const { DARABONBA_PTR_GET_CONST(settings_, Template::Settings) };
          inline Template::Settings getSettings() { DARABONBA_PTR_GET(settings_, Template::Settings) };
          inline Template& setSettings(const Template::Settings & settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };
          inline Template& setSettings(Template::Settings && settings) { DARABONBA_PTR_SET_RVALUE(settings_, settings) };


        protected:
          shared_ptr<Template::Settings> settings_ {};
        };

        virtual bool empty() const override { return this->meta_ == nullptr
        && this->template_ == nullptr && this->version_ == nullptr; };
        // meta Field Functions 
        bool hasMeta() const { return this->meta_ != nullptr;};
        void deleteMeta() { this->meta_ = nullptr;};
        inline         const Darabonba::Json & getMeta() const { DARABONBA_GET(meta_) };
        Darabonba::Json & getMeta() { DARABONBA_GET(meta_) };
        inline Content& setMeta(const Darabonba::Json & meta) { DARABONBA_SET_VALUE(meta_, meta) };
        inline Content& setMeta(Darabonba::Json && meta) { DARABONBA_SET_RVALUE(meta_, meta) };


        // template Field Functions 
        bool hasTemplate() const { return this->template_ != nullptr;};
        void deleteTemplate() { this->template_ = nullptr;};
        inline const Content::Template & getTemplate() const { DARABONBA_PTR_GET_CONST(template_, Content::Template) };
        inline Content::Template getTemplate() { DARABONBA_PTR_GET(template_, Content::Template) };
        inline Content& setTemplate(const Content::Template & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
        inline Content& setTemplate(Content::Template && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
        inline Content& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        Darabonba::Json meta_ {};
        shared_ptr<Content::Template> template_ {};
        shared_ptr<int64_t> version_ {};
      };

      virtual bool empty() const override { return this->composed_ == nullptr
        && this->content_ == nullptr && this->name_ == nullptr; };
      // composed Field Functions 
      bool hasComposed() const { return this->composed_ != nullptr;};
      void deleteComposed() { this->composed_ = nullptr;};
      inline const vector<string> & getComposed() const { DARABONBA_PTR_GET_CONST(composed_, vector<string>) };
      inline vector<string> getComposed() { DARABONBA_PTR_GET(composed_, vector<string>) };
      inline Result& setComposed(const vector<string> & composed) { DARABONBA_PTR_SET_VALUE(composed_, composed) };
      inline Result& setComposed(vector<string> && composed) { DARABONBA_PTR_SET_RVALUE(composed_, composed) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const Result::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, Result::Content) };
      inline Result::Content getContent() { DARABONBA_PTR_GET(content_, Result::Content) };
      inline Result& setContent(const Result::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline Result& setContent(Result::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<vector<string>> composed_ {};
      shared_ptr<Result::Content> content_ {};
      shared_ptr<string> name_ {};
    };

    class Headers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Headers& obj) { 
        DARABONBA_PTR_TO_JSON(X-Total-Count, xTotalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Headers& obj) { 
        DARABONBA_PTR_FROM_JSON(X-Total-Count, xTotalCount_);
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
      virtual bool empty() const override { return this->xTotalCount_ == nullptr; };
      // xTotalCount Field Functions 
      bool hasXTotalCount() const { return this->xTotalCount_ != nullptr;};
      void deleteXTotalCount() { this->xTotalCount_ = nullptr;};
      inline int64_t getXTotalCount() const { DARABONBA_PTR_GET_DEFAULT(xTotalCount_, 0L) };
      inline Headers& setXTotalCount(int64_t xTotalCount) { DARABONBA_PTR_SET_VALUE(xTotalCount_, xTotalCount) };


    protected:
      shared_ptr<int64_t> xTotalCount_ {};
    };

    virtual bool empty() const override { return this->headers_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const ListComponentIndicesResponseBody::Headers & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, ListComponentIndicesResponseBody::Headers) };
    inline ListComponentIndicesResponseBody::Headers getHeaders() { DARABONBA_PTR_GET(headers_, ListComponentIndicesResponseBody::Headers) };
    inline ListComponentIndicesResponseBody& setHeaders(const ListComponentIndicesResponseBody::Headers & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListComponentIndicesResponseBody& setHeaders(ListComponentIndicesResponseBody::Headers && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListComponentIndicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListComponentIndicesResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListComponentIndicesResponseBody::Result>) };
    inline vector<ListComponentIndicesResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListComponentIndicesResponseBody::Result>) };
    inline ListComponentIndicesResponseBody& setResult(const vector<ListComponentIndicesResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListComponentIndicesResponseBody& setResult(vector<ListComponentIndicesResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<ListComponentIndicesResponseBody::Headers> headers_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListComponentIndicesResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
