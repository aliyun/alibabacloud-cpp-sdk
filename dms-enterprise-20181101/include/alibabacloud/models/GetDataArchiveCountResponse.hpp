// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAARCHIVECOUNTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETDATAARCHIVECOUNTRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataArchiveCountResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataArchiveCountResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataArchiveCountResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetDataArchiveCountResponse() = default ;
    GetDataArchiveCountResponse(const GetDataArchiveCountResponse &) = default ;
    GetDataArchiveCountResponse(GetDataArchiveCountResponse &&) = default ;
    GetDataArchiveCountResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataArchiveCountResponse() = default ;
    GetDataArchiveCountResponse& operator=(const GetDataArchiveCountResponse &) = default ;
    GetDataArchiveCountResponse& operator=(GetDataArchiveCountResponse &&) = default ;
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
    inline GetDataArchiveCountResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetDataArchiveCountResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetDataArchiveCountResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetDataArchiveCountResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetDataArchiveCountResponseBody) };
    inline GetDataArchiveCountResponseBody body() { DARABONBA_PTR_GET(body_, GetDataArchiveCountResponseBody) };
    inline GetDataArchiveCountResponse& setBody(const GetDataArchiveCountResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetDataArchiveCountResponse& setBody(GetDataArchiveCountResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<GetDataArchiveCountResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
