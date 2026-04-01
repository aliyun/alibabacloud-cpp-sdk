// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERPLUGINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERPLUGINRESPONSEBODY_HPP_
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
  class ListUserPluginResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserPluginResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserPluginResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListUserPluginResponseBody() = default ;
    ListUserPluginResponseBody(const ListUserPluginResponseBody &) = default ;
    ListUserPluginResponseBody(ListUserPluginResponseBody &&) = default ;
    ListUserPluginResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserPluginResponseBody() = default ;
    ListUserPluginResponseBody& operator=(const ListUserPluginResponseBody &) = default ;
    ListUserPluginResponseBody& operator=(ListUserPluginResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(bingoPlugins, bingoPlugins_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(source, source_);
        DARABONBA_PTR_TO_JSON(state, state_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(bingoPlugins, bingoPlugins_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(source, source_);
        DARABONBA_PTR_FROM_JSON(state, state_);
        DARABONBA_PTR_FROM_JSON(version, version_);
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
      class BingoPlugins : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BingoPlugins& obj) { 
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(elasticsearchVersion, elasticsearchVersion_);
          DARABONBA_PTR_TO_JSON(fileVersion, fileVersion_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(source, source_);
          DARABONBA_PTR_TO_JSON(state, state_);
          DARABONBA_PTR_TO_JSON(version, version_);
        };
        friend void from_json(const Darabonba::Json& j, BingoPlugins& obj) { 
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(elasticsearchVersion, elasticsearchVersion_);
          DARABONBA_PTR_FROM_JSON(fileVersion, fileVersion_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(source, source_);
          DARABONBA_PTR_FROM_JSON(state, state_);
          DARABONBA_PTR_FROM_JSON(version, version_);
        };
        BingoPlugins() = default ;
        BingoPlugins(const BingoPlugins &) = default ;
        BingoPlugins(BingoPlugins &&) = default ;
        BingoPlugins(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BingoPlugins() = default ;
        BingoPlugins& operator=(const BingoPlugins &) = default ;
        BingoPlugins& operator=(BingoPlugins &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->elasticsearchVersion_ == nullptr && this->fileVersion_ == nullptr && this->name_ == nullptr && this->source_ == nullptr && this->state_ == nullptr
        && this->version_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline BingoPlugins& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // elasticsearchVersion Field Functions 
        bool hasElasticsearchVersion() const { return this->elasticsearchVersion_ != nullptr;};
        void deleteElasticsearchVersion() { this->elasticsearchVersion_ = nullptr;};
        inline string getElasticsearchVersion() const { DARABONBA_PTR_GET_DEFAULT(elasticsearchVersion_, "") };
        inline BingoPlugins& setElasticsearchVersion(string elasticsearchVersion) { DARABONBA_PTR_SET_VALUE(elasticsearchVersion_, elasticsearchVersion) };


        // fileVersion Field Functions 
        bool hasFileVersion() const { return this->fileVersion_ != nullptr;};
        void deleteFileVersion() { this->fileVersion_ = nullptr;};
        inline string getFileVersion() const { DARABONBA_PTR_GET_DEFAULT(fileVersion_, "") };
        inline BingoPlugins& setFileVersion(string fileVersion) { DARABONBA_PTR_SET_VALUE(fileVersion_, fileVersion) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline BingoPlugins& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline BingoPlugins& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline BingoPlugins& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline BingoPlugins& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> elasticsearchVersion_ {};
        shared_ptr<string> fileVersion_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> source_ {};
        shared_ptr<string> state_ {};
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->bingoPlugins_ == nullptr
        && this->name_ == nullptr && this->source_ == nullptr && this->state_ == nullptr && this->version_ == nullptr; };
      // bingoPlugins Field Functions 
      bool hasBingoPlugins() const { return this->bingoPlugins_ != nullptr;};
      void deleteBingoPlugins() { this->bingoPlugins_ = nullptr;};
      inline const vector<Result::BingoPlugins> & getBingoPlugins() const { DARABONBA_PTR_GET_CONST(bingoPlugins_, vector<Result::BingoPlugins>) };
      inline vector<Result::BingoPlugins> getBingoPlugins() { DARABONBA_PTR_GET(bingoPlugins_, vector<Result::BingoPlugins>) };
      inline Result& setBingoPlugins(const vector<Result::BingoPlugins> & bingoPlugins) { DARABONBA_PTR_SET_VALUE(bingoPlugins_, bingoPlugins) };
      inline Result& setBingoPlugins(vector<Result::BingoPlugins> && bingoPlugins) { DARABONBA_PTR_SET_RVALUE(bingoPlugins_, bingoPlugins) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Result& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Result& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Result& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<vector<Result::BingoPlugins>> bingoPlugins_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> source_ {};
      shared_ptr<string> state_ {};
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->headers_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline     const Darabonba::Json & getHeaders() const { DARABONBA_GET(headers_) };
    Darabonba::Json & getHeaders() { DARABONBA_GET(headers_) };
    inline ListUserPluginResponseBody& setHeaders(const Darabonba::Json & headers) { DARABONBA_SET_VALUE(headers_, headers) };
    inline ListUserPluginResponseBody& setHeaders(Darabonba::Json && headers) { DARABONBA_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserPluginResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListUserPluginResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListUserPluginResponseBody::Result>) };
    inline vector<ListUserPluginResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListUserPluginResponseBody::Result>) };
    inline ListUserPluginResponseBody& setResult(const vector<ListUserPluginResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListUserPluginResponseBody& setResult(vector<ListUserPluginResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    Darabonba::Json headers_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListUserPluginResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
