// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTOPERATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTOPERATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSecurityEventOperationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventOperationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityEventOperationsResponse, securityEventOperationsResponse_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventOperationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityEventOperationsResponse, securityEventOperationsResponse_);
    };
    DescribeSecurityEventOperationsResponseBody() = default ;
    DescribeSecurityEventOperationsResponseBody(const DescribeSecurityEventOperationsResponseBody &) = default ;
    DescribeSecurityEventOperationsResponseBody(DescribeSecurityEventOperationsResponseBody &&) = default ;
    DescribeSecurityEventOperationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventOperationsResponseBody() = default ;
    DescribeSecurityEventOperationsResponseBody& operator=(const DescribeSecurityEventOperationsResponseBody &) = default ;
    DescribeSecurityEventOperationsResponseBody& operator=(DescribeSecurityEventOperationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->securityEventOperationsResponse_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityEventOperationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityEventOperationsResponse Field Functions 
    bool hasSecurityEventOperationsResponse() const { return this->securityEventOperationsResponse_ != nullptr;};
    void deleteSecurityEventOperationsResponse() { this->securityEventOperationsResponse_ = nullptr;};
    inline const vector<DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse> & securityEventOperationsResponse() const { DARABONBA_PTR_GET_CONST(securityEventOperationsResponse_, vector<DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse>) };
    inline vector<DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse> securityEventOperationsResponse() { DARABONBA_PTR_GET(securityEventOperationsResponse_, vector<DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse>) };
    inline DescribeSecurityEventOperationsResponseBody& setSecurityEventOperationsResponse(const vector<DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse> & securityEventOperationsResponse) { DARABONBA_PTR_SET_VALUE(securityEventOperationsResponse_, securityEventOperationsResponse) };
    inline DescribeSecurityEventOperationsResponseBody& setSecurityEventOperationsResponse(vector<DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse> && securityEventOperationsResponse) { DARABONBA_PTR_SET_RVALUE(securityEventOperationsResponse_, securityEventOperationsResponse) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The operations that are performed to handle the alert.
    std::shared_ptr<vector<DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponse>> securityEventOperationsResponse_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
