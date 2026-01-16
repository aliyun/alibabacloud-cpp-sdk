// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNINSTALLLOGSTASHPLUGINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UNINSTALLLOGSTASHPLUGINRESPONSEBODY_HPP_
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
  class UninstallLogstashPluginResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UninstallLogstashPluginResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, UninstallLogstashPluginResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    UninstallLogstashPluginResponseBody() = default ;
    UninstallLogstashPluginResponseBody(const UninstallLogstashPluginResponseBody &) = default ;
    UninstallLogstashPluginResponseBody(UninstallLogstashPluginResponseBody &&) = default ;
    UninstallLogstashPluginResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UninstallLogstashPluginResponseBody() = default ;
    UninstallLogstashPluginResponseBody& operator=(const UninstallLogstashPluginResponseBody &) = default ;
    UninstallLogstashPluginResponseBody& operator=(UninstallLogstashPluginResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline     const Darabonba::Json & getHeaders() const { DARABONBA_GET(headers_) };
    Darabonba::Json & getHeaders() { DARABONBA_GET(headers_) };
    inline UninstallLogstashPluginResponseBody& setHeaders(const Darabonba::Json & headers) { DARABONBA_SET_VALUE(headers_, headers) };
    inline UninstallLogstashPluginResponseBody& setHeaders(Darabonba::Json && headers) { DARABONBA_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UninstallLogstashPluginResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<string> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<string>) };
    inline vector<string> getResult() { DARABONBA_PTR_GET(result_, vector<string>) };
    inline UninstallLogstashPluginResponseBody& setResult(const vector<string> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline UninstallLogstashPluginResponseBody& setResult(vector<string> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    Darabonba::Json headers_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<string>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
