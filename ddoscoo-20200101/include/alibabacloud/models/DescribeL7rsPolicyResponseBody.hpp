// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEL7RSPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEL7RSPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeL7RsPolicyResponseBodyAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeL7RsPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeL7RsPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(ProxyMode, proxyMode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RsAttrRwTimeoutMax, rsAttrRwTimeoutMax_);
      DARABONBA_PTR_TO_JSON(UpstreamRetry, upstreamRetry_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeL7RsPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(ProxyMode, proxyMode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RsAttrRwTimeoutMax, rsAttrRwTimeoutMax_);
      DARABONBA_PTR_FROM_JSON(UpstreamRetry, upstreamRetry_);
    };
    DescribeL7RsPolicyResponseBody() = default ;
    DescribeL7RsPolicyResponseBody(const DescribeL7RsPolicyResponseBody &) = default ;
    DescribeL7RsPolicyResponseBody(DescribeL7RsPolicyResponseBody &&) = default ;
    DescribeL7RsPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeL7RsPolicyResponseBody() = default ;
    DescribeL7RsPolicyResponseBody& operator=(const DescribeL7RsPolicyResponseBody &) = default ;
    DescribeL7RsPolicyResponseBody& operator=(DescribeL7RsPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attributes_ != nullptr
        && this->proxyMode_ != nullptr && this->requestId_ != nullptr && this->rsAttrRwTimeoutMax_ != nullptr && this->upstreamRetry_ != nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const vector<DescribeL7RsPolicyResponseBodyAttributes> & attributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<DescribeL7RsPolicyResponseBodyAttributes>) };
    inline vector<DescribeL7RsPolicyResponseBodyAttributes> attributes() { DARABONBA_PTR_GET(attributes_, vector<DescribeL7RsPolicyResponseBodyAttributes>) };
    inline DescribeL7RsPolicyResponseBody& setAttributes(const vector<DescribeL7RsPolicyResponseBodyAttributes> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline DescribeL7RsPolicyResponseBody& setAttributes(vector<DescribeL7RsPolicyResponseBodyAttributes> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // proxyMode Field Functions 
    bool hasProxyMode() const { return this->proxyMode_ != nullptr;};
    void deleteProxyMode() { this->proxyMode_ = nullptr;};
    inline string proxyMode() const { DARABONBA_PTR_GET_DEFAULT(proxyMode_, "") };
    inline DescribeL7RsPolicyResponseBody& setProxyMode(string proxyMode) { DARABONBA_PTR_SET_VALUE(proxyMode_, proxyMode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeL7RsPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rsAttrRwTimeoutMax Field Functions 
    bool hasRsAttrRwTimeoutMax() const { return this->rsAttrRwTimeoutMax_ != nullptr;};
    void deleteRsAttrRwTimeoutMax() { this->rsAttrRwTimeoutMax_ = nullptr;};
    inline int64_t rsAttrRwTimeoutMax() const { DARABONBA_PTR_GET_DEFAULT(rsAttrRwTimeoutMax_, 0L) };
    inline DescribeL7RsPolicyResponseBody& setRsAttrRwTimeoutMax(int64_t rsAttrRwTimeoutMax) { DARABONBA_PTR_SET_VALUE(rsAttrRwTimeoutMax_, rsAttrRwTimeoutMax) };


    // upstreamRetry Field Functions 
    bool hasUpstreamRetry() const { return this->upstreamRetry_ != nullptr;};
    void deleteUpstreamRetry() { this->upstreamRetry_ = nullptr;};
    inline int32_t upstreamRetry() const { DARABONBA_PTR_GET_DEFAULT(upstreamRetry_, 0) };
    inline DescribeL7RsPolicyResponseBody& setUpstreamRetry(int32_t upstreamRetry) { DARABONBA_PTR_SET_VALUE(upstreamRetry_, upstreamRetry) };


  protected:
    // The details about the parameters for back-to-origin settings.
    std::shared_ptr<vector<DescribeL7RsPolicyResponseBodyAttributes>> attributes_ = nullptr;
    // The scheduling algorithm for back-to-origin traffic. Valid values:
    // 
    // *   **ip_hash**: the IP hash algorithm. This algorithm is used to redirect the requests from the same IP address to the same origin server.
    // *   **rr**: the round-robin algorithm. This algorithm is used to redirect requests to origin servers in turn.
    // *   **least_time**: the least response time algorithm. This algorithm is used to minimize the latency when requests are forwarded from Anti-DDoS Pro or Anti-DDoS Premium instances to origin servers based on the intelligent DNS resolution feature.
    std::shared_ptr<string> proxyMode_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The timeout period for a read or write connection.
    std::shared_ptr<int64_t> rsAttrRwTimeoutMax_ = nullptr;
    // The back-to-origin retry switch. Valid values:
    // 
    // *   **1**: on
    // *   **0**: off
    std::shared_ptr<int32_t> upstreamRetry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
