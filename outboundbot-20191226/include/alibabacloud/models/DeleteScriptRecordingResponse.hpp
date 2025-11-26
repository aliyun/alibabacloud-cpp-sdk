// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESCRIPTRECORDINGRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DELETESCRIPTRECORDINGRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DeleteScriptRecordingResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DeleteScriptRecordingResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteScriptRecordingResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteScriptRecordingResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DeleteScriptRecordingResponse() = default ;
    DeleteScriptRecordingResponse(const DeleteScriptRecordingResponse &) = default ;
    DeleteScriptRecordingResponse(DeleteScriptRecordingResponse &&) = default ;
    DeleteScriptRecordingResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteScriptRecordingResponse() = default ;
    DeleteScriptRecordingResponse& operator=(const DeleteScriptRecordingResponse &) = default ;
    DeleteScriptRecordingResponse& operator=(DeleteScriptRecordingResponse &&) = default ;
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
    inline DeleteScriptRecordingResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DeleteScriptRecordingResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DeleteScriptRecordingResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeleteScriptRecordingResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DeleteScriptRecordingResponseBody) };
    inline DeleteScriptRecordingResponseBody body() { DARABONBA_PTR_GET(body_, DeleteScriptRecordingResponseBody) };
    inline DeleteScriptRecordingResponse& setBody(const DeleteScriptRecordingResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DeleteScriptRecordingResponse& setBody(DeleteScriptRecordingResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DeleteScriptRecordingResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
