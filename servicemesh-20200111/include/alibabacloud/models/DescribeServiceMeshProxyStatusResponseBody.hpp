// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHPROXYSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHPROXYSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeServiceMeshProxyStatusResponseBodyProxyStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshProxyStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshProxyStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ProxyStatus, proxyStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshProxyStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ProxyStatus, proxyStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeServiceMeshProxyStatusResponseBody() = default ;
    DescribeServiceMeshProxyStatusResponseBody(const DescribeServiceMeshProxyStatusResponseBody &) = default ;
    DescribeServiceMeshProxyStatusResponseBody(DescribeServiceMeshProxyStatusResponseBody &&) = default ;
    DescribeServiceMeshProxyStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshProxyStatusResponseBody() = default ;
    DescribeServiceMeshProxyStatusResponseBody& operator=(const DescribeServiceMeshProxyStatusResponseBody &) = default ;
    DescribeServiceMeshProxyStatusResponseBody& operator=(DescribeServiceMeshProxyStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->proxyStatus_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeServiceMeshProxyStatusResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeServiceMeshProxyStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // proxyStatus Field Functions 
    bool hasProxyStatus() const { return this->proxyStatus_ != nullptr;};
    void deleteProxyStatus() { this->proxyStatus_ = nullptr;};
    inline const vector<DescribeServiceMeshProxyStatusResponseBodyProxyStatus> & proxyStatus() const { DARABONBA_PTR_GET_CONST(proxyStatus_, vector<DescribeServiceMeshProxyStatusResponseBodyProxyStatus>) };
    inline vector<DescribeServiceMeshProxyStatusResponseBodyProxyStatus> proxyStatus() { DARABONBA_PTR_GET(proxyStatus_, vector<DescribeServiceMeshProxyStatusResponseBodyProxyStatus>) };
    inline DescribeServiceMeshProxyStatusResponseBody& setProxyStatus(const vector<DescribeServiceMeshProxyStatusResponseBodyProxyStatus> & proxyStatus) { DARABONBA_PTR_SET_VALUE(proxyStatus_, proxyStatus) };
    inline DescribeServiceMeshProxyStatusResponseBody& setProxyStatus(vector<DescribeServiceMeshProxyStatusResponseBodyProxyStatus> && proxyStatus) { DARABONBA_PTR_SET_RVALUE(proxyStatus_, proxyStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServiceMeshProxyStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeServiceMeshProxyStatusResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code. Valid values:
    // 
    // `200`: The operation is successful.
    // 
    // *   `403`: You are not authorized to perform this operation.
    // *   `503`: A backend server error occurs.
    std::shared_ptr<string> code_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The information about the status of the proxies on the data plane.
    std::shared_ptr<vector<DescribeServiceMeshProxyStatusResponseBodyProxyStatus>> proxyStatus_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
