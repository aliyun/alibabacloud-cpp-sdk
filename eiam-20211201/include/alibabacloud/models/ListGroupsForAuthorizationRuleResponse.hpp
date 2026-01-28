// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGROUPSFORAUTHORIZATIONRULERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTGROUPSFORAUTHORIZATIONRULERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListGroupsForAuthorizationRuleResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListGroupsForAuthorizationRuleResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGroupsForAuthorizationRuleResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListGroupsForAuthorizationRuleResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListGroupsForAuthorizationRuleResponse() = default ;
    ListGroupsForAuthorizationRuleResponse(const ListGroupsForAuthorizationRuleResponse &) = default ;
    ListGroupsForAuthorizationRuleResponse(ListGroupsForAuthorizationRuleResponse &&) = default ;
    ListGroupsForAuthorizationRuleResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGroupsForAuthorizationRuleResponse() = default ;
    ListGroupsForAuthorizationRuleResponse& operator=(const ListGroupsForAuthorizationRuleResponse &) = default ;
    ListGroupsForAuthorizationRuleResponse& operator=(ListGroupsForAuthorizationRuleResponse &&) = default ;
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
    inline ListGroupsForAuthorizationRuleResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListGroupsForAuthorizationRuleResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListGroupsForAuthorizationRuleResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListGroupsForAuthorizationRuleResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, ListGroupsForAuthorizationRuleResponseBody) };
    inline ListGroupsForAuthorizationRuleResponseBody getBody() { DARABONBA_PTR_GET(body_, ListGroupsForAuthorizationRuleResponseBody) };
    inline ListGroupsForAuthorizationRuleResponse& setBody(const ListGroupsForAuthorizationRuleResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListGroupsForAuthorizationRuleResponse& setBody(ListGroupsForAuthorizationRuleResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<ListGroupsForAuthorizationRuleResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
