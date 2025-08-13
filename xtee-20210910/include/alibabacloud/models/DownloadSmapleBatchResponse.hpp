// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADSMAPLEBATCHRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADSMAPLEBATCHRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DownloadSmapleBatchResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DownloadSmapleBatchResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadSmapleBatchResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadSmapleBatchResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DownloadSmapleBatchResponse() = default ;
    DownloadSmapleBatchResponse(const DownloadSmapleBatchResponse &) = default ;
    DownloadSmapleBatchResponse(DownloadSmapleBatchResponse &&) = default ;
    DownloadSmapleBatchResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadSmapleBatchResponse() = default ;
    DownloadSmapleBatchResponse& operator=(const DownloadSmapleBatchResponse &) = default ;
    DownloadSmapleBatchResponse& operator=(DownloadSmapleBatchResponse &&) = default ;
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
    inline DownloadSmapleBatchResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DownloadSmapleBatchResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DownloadSmapleBatchResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DownloadSmapleBatchResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DownloadSmapleBatchResponseBody) };
    inline DownloadSmapleBatchResponseBody body() { DARABONBA_PTR_GET(body_, DownloadSmapleBatchResponseBody) };
    inline DownloadSmapleBatchResponse& setBody(const DownloadSmapleBatchResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DownloadSmapleBatchResponse& setBody(DownloadSmapleBatchResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DownloadSmapleBatchResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
