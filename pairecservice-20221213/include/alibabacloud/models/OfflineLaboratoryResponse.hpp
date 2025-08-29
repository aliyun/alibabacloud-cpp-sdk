// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OFFLINELABORATORYRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_OFFLINELABORATORYRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/OfflineLaboratoryResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class OfflineLaboratoryResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OfflineLaboratoryResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, OfflineLaboratoryResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    OfflineLaboratoryResponse() = default ;
    OfflineLaboratoryResponse(const OfflineLaboratoryResponse &) = default ;
    OfflineLaboratoryResponse(OfflineLaboratoryResponse &&) = default ;
    OfflineLaboratoryResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OfflineLaboratoryResponse() = default ;
    OfflineLaboratoryResponse& operator=(const OfflineLaboratoryResponse &) = default ;
    OfflineLaboratoryResponse& operator=(OfflineLaboratoryResponse &&) = default ;
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
    inline OfflineLaboratoryResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline OfflineLaboratoryResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline OfflineLaboratoryResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const OfflineLaboratoryResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, OfflineLaboratoryResponseBody) };
    inline OfflineLaboratoryResponseBody body() { DARABONBA_PTR_GET(body_, OfflineLaboratoryResponseBody) };
    inline OfflineLaboratoryResponse& setBody(const OfflineLaboratoryResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline OfflineLaboratoryResponse& setBody(OfflineLaboratoryResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<OfflineLaboratoryResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
