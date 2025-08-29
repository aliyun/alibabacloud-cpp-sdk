// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFEROWNERSHIPFORALLOBJECTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_TRANSFEROWNERSHIPFORALLOBJECTRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/TransferOwnershipForAllObjectResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class TransferOwnershipForAllObjectResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferOwnershipForAllObjectResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, TransferOwnershipForAllObjectResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    TransferOwnershipForAllObjectResponse() = default ;
    TransferOwnershipForAllObjectResponse(const TransferOwnershipForAllObjectResponse &) = default ;
    TransferOwnershipForAllObjectResponse(TransferOwnershipForAllObjectResponse &&) = default ;
    TransferOwnershipForAllObjectResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferOwnershipForAllObjectResponse() = default ;
    TransferOwnershipForAllObjectResponse& operator=(const TransferOwnershipForAllObjectResponse &) = default ;
    TransferOwnershipForAllObjectResponse& operator=(TransferOwnershipForAllObjectResponse &&) = default ;
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
    inline TransferOwnershipForAllObjectResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline TransferOwnershipForAllObjectResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline TransferOwnershipForAllObjectResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const TransferOwnershipForAllObjectResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, TransferOwnershipForAllObjectResponseBody) };
    inline TransferOwnershipForAllObjectResponseBody body() { DARABONBA_PTR_GET(body_, TransferOwnershipForAllObjectResponseBody) };
    inline TransferOwnershipForAllObjectResponse& setBody(const TransferOwnershipForAllObjectResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline TransferOwnershipForAllObjectResponse& setBody(TransferOwnershipForAllObjectResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<TransferOwnershipForAllObjectResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
