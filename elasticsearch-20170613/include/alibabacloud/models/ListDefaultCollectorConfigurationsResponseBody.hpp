// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEFAULTCOLLECTORCONFIGURATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDEFAULTCOLLECTORCONFIGURATIONSRESPONSEBODY_HPP_
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
  class ListDefaultCollectorConfigurationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDefaultCollectorConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListDefaultCollectorConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListDefaultCollectorConfigurationsResponseBody() = default ;
    ListDefaultCollectorConfigurationsResponseBody(const ListDefaultCollectorConfigurationsResponseBody &) = default ;
    ListDefaultCollectorConfigurationsResponseBody(ListDefaultCollectorConfigurationsResponseBody &&) = default ;
    ListDefaultCollectorConfigurationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDefaultCollectorConfigurationsResponseBody() = default ;
    ListDefaultCollectorConfigurationsResponseBody& operator=(const ListDefaultCollectorConfigurationsResponseBody &) = default ;
    ListDefaultCollectorConfigurationsResponseBody& operator=(ListDefaultCollectorConfigurationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(fileName, fileName_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(fileName, fileName_);
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
      virtual bool empty() const override { return this->content_ == nullptr
        && this->fileName_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Result& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Result& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    protected:
      // The content of the configuration file.
      shared_ptr<string> content_ {};
      // The name of the configuration file.
      shared_ptr<string> fileName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDefaultCollectorConfigurationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListDefaultCollectorConfigurationsResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListDefaultCollectorConfigurationsResponseBody::Result>) };
    inline vector<ListDefaultCollectorConfigurationsResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListDefaultCollectorConfigurationsResponseBody::Result>) };
    inline ListDefaultCollectorConfigurationsResponseBody& setResult(const vector<ListDefaultCollectorConfigurationsResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListDefaultCollectorConfigurationsResponseBody& setResult(vector<ListDefaultCollectorConfigurationsResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<vector<ListDefaultCollectorConfigurationsResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
