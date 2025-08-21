// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESNAPSHOTSETTINGRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_UPDATESNAPSHOTSETTINGRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/UpdateSnapshotSettingResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateSnapshotSettingResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSnapshotSettingResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSnapshotSettingResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateSnapshotSettingResponse() = default ;
    UpdateSnapshotSettingResponse(const UpdateSnapshotSettingResponse &) = default ;
    UpdateSnapshotSettingResponse(UpdateSnapshotSettingResponse &&) = default ;
    UpdateSnapshotSettingResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSnapshotSettingResponse() = default ;
    UpdateSnapshotSettingResponse& operator=(const UpdateSnapshotSettingResponse &) = default ;
    UpdateSnapshotSettingResponse& operator=(UpdateSnapshotSettingResponse &&) = default ;
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
    inline UpdateSnapshotSettingResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline UpdateSnapshotSettingResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline UpdateSnapshotSettingResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateSnapshotSettingResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, UpdateSnapshotSettingResponseBody) };
    inline UpdateSnapshotSettingResponseBody body() { DARABONBA_PTR_GET(body_, UpdateSnapshotSettingResponseBody) };
    inline UpdateSnapshotSettingResponse& setBody(const UpdateSnapshotSettingResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateSnapshotSettingResponse& setBody(UpdateSnapshotSettingResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<UpdateSnapshotSettingResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
