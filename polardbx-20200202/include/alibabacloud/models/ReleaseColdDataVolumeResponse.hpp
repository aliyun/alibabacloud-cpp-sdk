// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASECOLDDATAVOLUMERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_RELEASECOLDDATAVOLUMERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ReleaseColdDataVolumeResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ReleaseColdDataVolumeResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseColdDataVolumeResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseColdDataVolumeResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ReleaseColdDataVolumeResponse() = default ;
    ReleaseColdDataVolumeResponse(const ReleaseColdDataVolumeResponse &) = default ;
    ReleaseColdDataVolumeResponse(ReleaseColdDataVolumeResponse &&) = default ;
    ReleaseColdDataVolumeResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseColdDataVolumeResponse() = default ;
    ReleaseColdDataVolumeResponse& operator=(const ReleaseColdDataVolumeResponse &) = default ;
    ReleaseColdDataVolumeResponse& operator=(ReleaseColdDataVolumeResponse &&) = default ;
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
    inline ReleaseColdDataVolumeResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ReleaseColdDataVolumeResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ReleaseColdDataVolumeResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ReleaseColdDataVolumeResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ReleaseColdDataVolumeResponseBody) };
    inline ReleaseColdDataVolumeResponseBody body() { DARABONBA_PTR_GET(body_, ReleaseColdDataVolumeResponseBody) };
    inline ReleaseColdDataVolumeResponse& setBody(const ReleaseColdDataVolumeResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ReleaseColdDataVolumeResponse& setBody(ReleaseColdDataVolumeResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ReleaseColdDataVolumeResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
