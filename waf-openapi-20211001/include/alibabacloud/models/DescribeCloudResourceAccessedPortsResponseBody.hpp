// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDRESOURCEACCESSEDPORTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDRESOURCEACCESSEDPORTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeCloudResourceAccessedPortsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudResourceAccessedPortsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Http, http_);
      DARABONBA_PTR_TO_JSON(Https, https_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudResourceAccessedPortsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Http, http_);
      DARABONBA_PTR_FROM_JSON(Https, https_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCloudResourceAccessedPortsResponseBody() = default ;
    DescribeCloudResourceAccessedPortsResponseBody(const DescribeCloudResourceAccessedPortsResponseBody &) = default ;
    DescribeCloudResourceAccessedPortsResponseBody(DescribeCloudResourceAccessedPortsResponseBody &&) = default ;
    DescribeCloudResourceAccessedPortsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudResourceAccessedPortsResponseBody() = default ;
    DescribeCloudResourceAccessedPortsResponseBody& operator=(const DescribeCloudResourceAccessedPortsResponseBody &) = default ;
    DescribeCloudResourceAccessedPortsResponseBody& operator=(DescribeCloudResourceAccessedPortsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->http_ == nullptr
        && return this->https_ == nullptr && return this->requestId_ == nullptr; };
    // http Field Functions 
    bool hasHttp() const { return this->http_ != nullptr;};
    void deleteHttp() { this->http_ = nullptr;};
    inline const vector<int32_t> & http() const { DARABONBA_PTR_GET_CONST(http_, vector<int32_t>) };
    inline vector<int32_t> http() { DARABONBA_PTR_GET(http_, vector<int32_t>) };
    inline DescribeCloudResourceAccessedPortsResponseBody& setHttp(const vector<int32_t> & http) { DARABONBA_PTR_SET_VALUE(http_, http) };
    inline DescribeCloudResourceAccessedPortsResponseBody& setHttp(vector<int32_t> && http) { DARABONBA_PTR_SET_RVALUE(http_, http) };


    // https Field Functions 
    bool hasHttps() const { return this->https_ != nullptr;};
    void deleteHttps() { this->https_ = nullptr;};
    inline const vector<int32_t> & https() const { DARABONBA_PTR_GET_CONST(https_, vector<int32_t>) };
    inline vector<int32_t> https() { DARABONBA_PTR_GET(https_, vector<int32_t>) };
    inline DescribeCloudResourceAccessedPortsResponseBody& setHttps(const vector<int32_t> & https) { DARABONBA_PTR_SET_VALUE(https_, https) };
    inline DescribeCloudResourceAccessedPortsResponseBody& setHttps(vector<int32_t> && https) { DARABONBA_PTR_SET_RVALUE(https_, https) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudResourceAccessedPortsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP ports.
    std::shared_ptr<vector<int32_t>> http_ = nullptr;
    // The HTTPS ports.
    std::shared_ptr<vector<int32_t>> https_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
