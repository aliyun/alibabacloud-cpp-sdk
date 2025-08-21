// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEUSERFROMGROUPRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_REMOVEUSERFROMGROUPRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/RemoveUserFromGroupResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class RemoveUserFromGroupResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveUserFromGroupResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveUserFromGroupResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    RemoveUserFromGroupResponse() = default ;
    RemoveUserFromGroupResponse(const RemoveUserFromGroupResponse &) = default ;
    RemoveUserFromGroupResponse(RemoveUserFromGroupResponse &&) = default ;
    RemoveUserFromGroupResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveUserFromGroupResponse() = default ;
    RemoveUserFromGroupResponse& operator=(const RemoveUserFromGroupResponse &) = default ;
    RemoveUserFromGroupResponse& operator=(RemoveUserFromGroupResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->statusCode_ != nullptr && this->body_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline RemoveUserFromGroupResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline RemoveUserFromGroupResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline RemoveUserFromGroupResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const RemoveUserFromGroupResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, RemoveUserFromGroupResponseBody) };
    inline RemoveUserFromGroupResponseBody body() { DARABONBA_PTR_GET(body_, RemoveUserFromGroupResponseBody) };
    inline RemoveUserFromGroupResponse& setBody(const RemoveUserFromGroupResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline RemoveUserFromGroupResponse& setBody(RemoveUserFromGroupResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<RemoveUserFromGroupResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
