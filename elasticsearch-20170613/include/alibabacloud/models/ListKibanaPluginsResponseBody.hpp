// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKIBANAPLUGINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKIBANAPLUGINSRESPONSEBODY_HPP_
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
  class ListKibanaPluginsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKibanaPluginsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListKibanaPluginsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListKibanaPluginsResponseBody() = default ;
    ListKibanaPluginsResponseBody(const ListKibanaPluginsResponseBody &) = default ;
    ListKibanaPluginsResponseBody(ListKibanaPluginsResponseBody &&) = default ;
    ListKibanaPluginsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKibanaPluginsResponseBody() = default ;
    ListKibanaPluginsResponseBody& operator=(const ListKibanaPluginsResponseBody &) = default ;
    ListKibanaPluginsResponseBody& operator=(ListKibanaPluginsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(source, source_);
        DARABONBA_PTR_TO_JSON(specificationUrl, specificationUrl_);
        DARABONBA_PTR_TO_JSON(state, state_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(source, source_);
        DARABONBA_PTR_FROM_JSON(specificationUrl, specificationUrl_);
        DARABONBA_PTR_FROM_JSON(state, state_);
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
      virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->source_ == nullptr && this->specificationUrl_ == nullptr && this->state_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


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


      // specificationUrl Field Functions 
      bool hasSpecificationUrl() const { return this->specificationUrl_ != nullptr;};
      void deleteSpecificationUrl() { this->specificationUrl_ = nullptr;};
      inline string getSpecificationUrl() const { DARABONBA_PTR_GET_DEFAULT(specificationUrl_, "") };
      inline Result& setSpecificationUrl(string specificationUrl) { DARABONBA_PTR_SET_VALUE(specificationUrl_, specificationUrl) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Result& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // The description of the plug-in.
      shared_ptr<string> description_ {};
      // The name of the plug-in.
      shared_ptr<string> name_ {};
      // The source of the plug-in.
      shared_ptr<string> source_ {};
      // The URL of the introduction to the plug-in. The value null is supported.
      shared_ptr<string> specificationUrl_ {};
      // The installation status of the plug-in.
      shared_ptr<string> state_ {};
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
      inline int32_t getXTotalCount() const { DARABONBA_PTR_GET_DEFAULT(xTotalCount_, 0) };
      inline Headers& setXTotalCount(int32_t xTotalCount) { DARABONBA_PTR_SET_VALUE(xTotalCount_, xTotalCount) };


    protected:
      // The total number of entries returned.
      shared_ptr<int32_t> xTotalCount_ {};
    };

    virtual bool empty() const override { return this->headers_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const ListKibanaPluginsResponseBody::Headers & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, ListKibanaPluginsResponseBody::Headers) };
    inline ListKibanaPluginsResponseBody::Headers getHeaders() { DARABONBA_PTR_GET(headers_, ListKibanaPluginsResponseBody::Headers) };
    inline ListKibanaPluginsResponseBody& setHeaders(const ListKibanaPluginsResponseBody::Headers & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListKibanaPluginsResponseBody& setHeaders(ListKibanaPluginsResponseBody::Headers && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKibanaPluginsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListKibanaPluginsResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListKibanaPluginsResponseBody::Result>) };
    inline vector<ListKibanaPluginsResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListKibanaPluginsResponseBody::Result>) };
    inline ListKibanaPluginsResponseBody& setResult(const vector<ListKibanaPluginsResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListKibanaPluginsResponseBody& setResult(vector<ListKibanaPluginsResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request header.
    shared_ptr<ListKibanaPluginsResponseBody::Headers> headers_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the plug-ins.
    shared_ptr<vector<ListKibanaPluginsResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
