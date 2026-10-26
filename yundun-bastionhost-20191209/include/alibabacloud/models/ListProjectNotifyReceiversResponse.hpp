// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTNOTIFYRECEIVERSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTNOTIFYRECEIVERSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListProjectNotifyReceiversResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListProjectNotifyReceiversResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectNotifyReceiversResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectNotifyReceiversResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListProjectNotifyReceiversResponse() = default ;
    ListProjectNotifyReceiversResponse(const ListProjectNotifyReceiversResponse &) = default ;
    ListProjectNotifyReceiversResponse(ListProjectNotifyReceiversResponse &&) = default ;
    ListProjectNotifyReceiversResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectNotifyReceiversResponse() = default ;
    ListProjectNotifyReceiversResponse& operator=(const ListProjectNotifyReceiversResponse &) = default ;
    ListProjectNotifyReceiversResponse& operator=(ListProjectNotifyReceiversResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && this->statusCode_ == nullptr && this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline ListProjectNotifyReceiversResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListProjectNotifyReceiversResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListProjectNotifyReceiversResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListProjectNotifyReceiversResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, ListProjectNotifyReceiversResponseBody) };
    inline ListProjectNotifyReceiversResponseBody getBody() { DARABONBA_PTR_GET(body_, ListProjectNotifyReceiversResponseBody) };
    inline ListProjectNotifyReceiversResponse& setBody(const ListProjectNotifyReceiversResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListProjectNotifyReceiversResponse& setBody(ListProjectNotifyReceiversResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<ListProjectNotifyReceiversResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
