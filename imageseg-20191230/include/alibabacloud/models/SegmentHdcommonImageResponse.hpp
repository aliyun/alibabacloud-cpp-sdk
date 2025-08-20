// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEGMENTHDCOMMONIMAGERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_SEGMENTHDCOMMONIMAGERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/SegmentHDCommonImageResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageseg20191230
{
namespace Models
{
  class SegmentHDCommonImageResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SegmentHDCommonImageResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, SegmentHDCommonImageResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    SegmentHDCommonImageResponse() = default ;
    SegmentHDCommonImageResponse(const SegmentHDCommonImageResponse &) = default ;
    SegmentHDCommonImageResponse(SegmentHDCommonImageResponse &&) = default ;
    SegmentHDCommonImageResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SegmentHDCommonImageResponse() = default ;
    SegmentHDCommonImageResponse& operator=(const SegmentHDCommonImageResponse &) = default ;
    SegmentHDCommonImageResponse& operator=(SegmentHDCommonImageResponse &&) = default ;
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
    inline SegmentHDCommonImageResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline SegmentHDCommonImageResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline SegmentHDCommonImageResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const SegmentHDCommonImageResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, SegmentHDCommonImageResponseBody) };
    inline SegmentHDCommonImageResponseBody body() { DARABONBA_PTR_GET(body_, SegmentHDCommonImageResponseBody) };
    inline SegmentHDCommonImageResponse& setBody(const SegmentHDCommonImageResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline SegmentHDCommonImageResponse& setBody(SegmentHDCommonImageResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<SegmentHDCommonImageResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageseg20191230
#endif
