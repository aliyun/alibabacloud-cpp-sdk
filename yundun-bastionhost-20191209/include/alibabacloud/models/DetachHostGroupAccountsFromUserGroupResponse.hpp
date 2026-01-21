// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHHOSTGROUPACCOUNTSFROMUSERGROUPRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DETACHHOSTGROUPACCOUNTSFROMUSERGROUPRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DetachHostGroupAccountsFromUserGroupResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DetachHostGroupAccountsFromUserGroupResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachHostGroupAccountsFromUserGroupResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DetachHostGroupAccountsFromUserGroupResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DetachHostGroupAccountsFromUserGroupResponse() = default ;
    DetachHostGroupAccountsFromUserGroupResponse(const DetachHostGroupAccountsFromUserGroupResponse &) = default ;
    DetachHostGroupAccountsFromUserGroupResponse(DetachHostGroupAccountsFromUserGroupResponse &&) = default ;
    DetachHostGroupAccountsFromUserGroupResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachHostGroupAccountsFromUserGroupResponse() = default ;
    DetachHostGroupAccountsFromUserGroupResponse& operator=(const DetachHostGroupAccountsFromUserGroupResponse &) = default ;
    DetachHostGroupAccountsFromUserGroupResponse& operator=(DetachHostGroupAccountsFromUserGroupResponse &&) = default ;
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
    inline DetachHostGroupAccountsFromUserGroupResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DetachHostGroupAccountsFromUserGroupResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DetachHostGroupAccountsFromUserGroupResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DetachHostGroupAccountsFromUserGroupResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, DetachHostGroupAccountsFromUserGroupResponseBody) };
    inline DetachHostGroupAccountsFromUserGroupResponseBody getBody() { DARABONBA_PTR_GET(body_, DetachHostGroupAccountsFromUserGroupResponseBody) };
    inline DetachHostGroupAccountsFromUserGroupResponse& setBody(const DetachHostGroupAccountsFromUserGroupResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DetachHostGroupAccountsFromUserGroupResponse& setBody(DetachHostGroupAccountsFromUserGroupResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<DetachHostGroupAccountsFromUserGroupResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
