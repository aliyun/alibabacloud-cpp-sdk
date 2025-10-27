// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERSERVICEK8SCLUSTERSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERSERVICEK8SCLUSTERSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeContainerServiceK8sClustersResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeContainerServiceK8sClustersResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContainerServiceK8sClustersResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContainerServiceK8sClustersResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeContainerServiceK8sClustersResponse() = default ;
    DescribeContainerServiceK8sClustersResponse(const DescribeContainerServiceK8sClustersResponse &) = default ;
    DescribeContainerServiceK8sClustersResponse(DescribeContainerServiceK8sClustersResponse &&) = default ;
    DescribeContainerServiceK8sClustersResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContainerServiceK8sClustersResponse() = default ;
    DescribeContainerServiceK8sClustersResponse& operator=(const DescribeContainerServiceK8sClustersResponse &) = default ;
    DescribeContainerServiceK8sClustersResponse& operator=(DescribeContainerServiceK8sClustersResponse &&) = default ;
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
    inline DescribeContainerServiceK8sClustersResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeContainerServiceK8sClustersResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeContainerServiceK8sClustersResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeContainerServiceK8sClustersResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribeContainerServiceK8sClustersResponseBody) };
    inline DescribeContainerServiceK8sClustersResponseBody body() { DARABONBA_PTR_GET(body_, DescribeContainerServiceK8sClustersResponseBody) };
    inline DescribeContainerServiceK8sClustersResponse& setBody(const DescribeContainerServiceK8sClustersResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeContainerServiceK8sClustersResponse& setBody(DescribeContainerServiceK8sClustersResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribeContainerServiceK8sClustersResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
