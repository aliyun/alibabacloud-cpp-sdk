// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVESTREAMMONITORRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVESTREAMMONITORRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/UpdateLiveStreamMonitorResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateLiveStreamMonitorResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveStreamMonitorResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveStreamMonitorResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateLiveStreamMonitorResponse() = default ;
    UpdateLiveStreamMonitorResponse(const UpdateLiveStreamMonitorResponse &) = default ;
    UpdateLiveStreamMonitorResponse(UpdateLiveStreamMonitorResponse &&) = default ;
    UpdateLiveStreamMonitorResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveStreamMonitorResponse() = default ;
    UpdateLiveStreamMonitorResponse& operator=(const UpdateLiveStreamMonitorResponse &) = default ;
    UpdateLiveStreamMonitorResponse& operator=(UpdateLiveStreamMonitorResponse &&) = default ;
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
    inline UpdateLiveStreamMonitorResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline UpdateLiveStreamMonitorResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline UpdateLiveStreamMonitorResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateLiveStreamMonitorResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, UpdateLiveStreamMonitorResponseBody) };
    inline UpdateLiveStreamMonitorResponseBody body() { DARABONBA_PTR_GET(body_, UpdateLiveStreamMonitorResponseBody) };
    inline UpdateLiveStreamMonitorResponse& setBody(const UpdateLiveStreamMonitorResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateLiveStreamMonitorResponse& setBody(UpdateLiveStreamMonitorResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<UpdateLiveStreamMonitorResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
