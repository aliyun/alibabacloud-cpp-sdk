// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKILLINSTANCESESSIONTASKRESULTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETKILLINSTANCESESSIONTASKRESULTRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetKillInstanceSessionTaskResultResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetKillInstanceSessionTaskResultResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKillInstanceSessionTaskResultResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetKillInstanceSessionTaskResultResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetKillInstanceSessionTaskResultResponse() = default ;
    GetKillInstanceSessionTaskResultResponse(const GetKillInstanceSessionTaskResultResponse &) = default ;
    GetKillInstanceSessionTaskResultResponse(GetKillInstanceSessionTaskResultResponse &&) = default ;
    GetKillInstanceSessionTaskResultResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKillInstanceSessionTaskResultResponse() = default ;
    GetKillInstanceSessionTaskResultResponse& operator=(const GetKillInstanceSessionTaskResultResponse &) = default ;
    GetKillInstanceSessionTaskResultResponse& operator=(GetKillInstanceSessionTaskResultResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && return this->statusCode_ == nullptr && return this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline GetKillInstanceSessionTaskResultResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetKillInstanceSessionTaskResultResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetKillInstanceSessionTaskResultResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetKillInstanceSessionTaskResultResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetKillInstanceSessionTaskResultResponseBody) };
    inline GetKillInstanceSessionTaskResultResponseBody body() { DARABONBA_PTR_GET(body_, GetKillInstanceSessionTaskResultResponseBody) };
    inline GetKillInstanceSessionTaskResultResponse& setBody(const GetKillInstanceSessionTaskResultResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetKillInstanceSessionTaskResultResponse& setBody(GetKillInstanceSessionTaskResultResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<GetKillInstanceSessionTaskResultResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
