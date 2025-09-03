// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVERECEIVERDETAILRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_SAVERECEIVERDETAILRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/SaveReceiverDetailResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class SaveReceiverDetailResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveReceiverDetailResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, SaveReceiverDetailResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    SaveReceiverDetailResponse() = default ;
    SaveReceiverDetailResponse(const SaveReceiverDetailResponse &) = default ;
    SaveReceiverDetailResponse(SaveReceiverDetailResponse &&) = default ;
    SaveReceiverDetailResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveReceiverDetailResponse() = default ;
    SaveReceiverDetailResponse& operator=(const SaveReceiverDetailResponse &) = default ;
    SaveReceiverDetailResponse& operator=(SaveReceiverDetailResponse &&) = default ;
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
    inline SaveReceiverDetailResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline SaveReceiverDetailResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline SaveReceiverDetailResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const SaveReceiverDetailResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, SaveReceiverDetailResponseBody) };
    inline SaveReceiverDetailResponseBody body() { DARABONBA_PTR_GET(body_, SaveReceiverDetailResponseBody) };
    inline SaveReceiverDetailResponse& setBody(const SaveReceiverDetailResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline SaveReceiverDetailResponse& setBody(SaveReceiverDetailResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<SaveReceiverDetailResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
