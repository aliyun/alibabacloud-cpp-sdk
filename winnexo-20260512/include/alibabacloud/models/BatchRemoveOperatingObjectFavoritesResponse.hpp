// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHREMOVEOPERATINGOBJECTFAVORITESRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_BATCHREMOVEOPERATINGOBJECTFAVORITESRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/BatchRemoveOperatingObjectFavoritesResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class BatchRemoveOperatingObjectFavoritesResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchRemoveOperatingObjectFavoritesResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, BatchRemoveOperatingObjectFavoritesResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    BatchRemoveOperatingObjectFavoritesResponse() = default ;
    BatchRemoveOperatingObjectFavoritesResponse(const BatchRemoveOperatingObjectFavoritesResponse &) = default ;
    BatchRemoveOperatingObjectFavoritesResponse(BatchRemoveOperatingObjectFavoritesResponse &&) = default ;
    BatchRemoveOperatingObjectFavoritesResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchRemoveOperatingObjectFavoritesResponse() = default ;
    BatchRemoveOperatingObjectFavoritesResponse& operator=(const BatchRemoveOperatingObjectFavoritesResponse &) = default ;
    BatchRemoveOperatingObjectFavoritesResponse& operator=(BatchRemoveOperatingObjectFavoritesResponse &&) = default ;
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
    inline BatchRemoveOperatingObjectFavoritesResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline BatchRemoveOperatingObjectFavoritesResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline BatchRemoveOperatingObjectFavoritesResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const BatchRemoveOperatingObjectFavoritesResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, BatchRemoveOperatingObjectFavoritesResponseBody) };
    inline BatchRemoveOperatingObjectFavoritesResponseBody getBody() { DARABONBA_PTR_GET(body_, BatchRemoveOperatingObjectFavoritesResponseBody) };
    inline BatchRemoveOperatingObjectFavoritesResponse& setBody(const BatchRemoveOperatingObjectFavoritesResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline BatchRemoveOperatingObjectFavoritesResponse& setBody(BatchRemoveOperatingObjectFavoritesResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<BatchRemoveOperatingObjectFavoritesResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
