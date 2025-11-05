// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTDISKREPLICAPAIRRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_STARTDISKREPLICAPAIRRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/StartDiskReplicaPairResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class StartDiskReplicaPairResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartDiskReplicaPairResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, StartDiskReplicaPairResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    StartDiskReplicaPairResponse() = default ;
    StartDiskReplicaPairResponse(const StartDiskReplicaPairResponse &) = default ;
    StartDiskReplicaPairResponse(StartDiskReplicaPairResponse &&) = default ;
    StartDiskReplicaPairResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartDiskReplicaPairResponse() = default ;
    StartDiskReplicaPairResponse& operator=(const StartDiskReplicaPairResponse &) = default ;
    StartDiskReplicaPairResponse& operator=(StartDiskReplicaPairResponse &&) = default ;
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
    inline StartDiskReplicaPairResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline StartDiskReplicaPairResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline StartDiskReplicaPairResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const StartDiskReplicaPairResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, StartDiskReplicaPairResponseBody) };
    inline StartDiskReplicaPairResponseBody body() { DARABONBA_PTR_GET(body_, StartDiskReplicaPairResponseBody) };
    inline StartDiskReplicaPairResponse& setBody(const StartDiskReplicaPairResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline StartDiskReplicaPairResponse& setBody(StartDiskReplicaPairResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<StartDiskReplicaPairResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
