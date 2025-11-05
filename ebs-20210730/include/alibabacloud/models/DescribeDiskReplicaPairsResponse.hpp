// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKREPLICAPAIRSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKREPLICAPAIRSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeDiskReplicaPairsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeDiskReplicaPairsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiskReplicaPairsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiskReplicaPairsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeDiskReplicaPairsResponse() = default ;
    DescribeDiskReplicaPairsResponse(const DescribeDiskReplicaPairsResponse &) = default ;
    DescribeDiskReplicaPairsResponse(DescribeDiskReplicaPairsResponse &&) = default ;
    DescribeDiskReplicaPairsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiskReplicaPairsResponse() = default ;
    DescribeDiskReplicaPairsResponse& operator=(const DescribeDiskReplicaPairsResponse &) = default ;
    DescribeDiskReplicaPairsResponse& operator=(DescribeDiskReplicaPairsResponse &&) = default ;
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
    inline DescribeDiskReplicaPairsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeDiskReplicaPairsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeDiskReplicaPairsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeDiskReplicaPairsResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribeDiskReplicaPairsResponseBody) };
    inline DescribeDiskReplicaPairsResponseBody body() { DARABONBA_PTR_GET(body_, DescribeDiskReplicaPairsResponseBody) };
    inline DescribeDiskReplicaPairsResponse& setBody(const DescribeDiskReplicaPairsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeDiskReplicaPairsResponse& setBody(DescribeDiskReplicaPairsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribeDiskReplicaPairsResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
