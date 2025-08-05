// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUDMSNAPSHOTSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUDMSNAPSHOTSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeUdmSnapshotsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUdmSnapshotsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUdmSnapshotsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeUdmSnapshotsResponse() = default ;
    DescribeUdmSnapshotsResponse(const DescribeUdmSnapshotsResponse &) = default ;
    DescribeUdmSnapshotsResponse(DescribeUdmSnapshotsResponse &&) = default ;
    DescribeUdmSnapshotsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUdmSnapshotsResponse() = default ;
    DescribeUdmSnapshotsResponse& operator=(const DescribeUdmSnapshotsResponse &) = default ;
    DescribeUdmSnapshotsResponse& operator=(DescribeUdmSnapshotsResponse &&) = default ;
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
    inline DescribeUdmSnapshotsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeUdmSnapshotsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeUdmSnapshotsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeUdmSnapshotsResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribeUdmSnapshotsResponseBody) };
    inline DescribeUdmSnapshotsResponseBody body() { DARABONBA_PTR_GET(body_, DescribeUdmSnapshotsResponseBody) };
    inline DescribeUdmSnapshotsResponse& setBody(const DescribeUdmSnapshotsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeUdmSnapshotsResponse& setBody(DescribeUdmSnapshotsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribeUdmSnapshotsResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
