// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTOPERATIONSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTOPERATIONSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSecurityEventOperationStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventOperationStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityEventOperationStatusResponse, securityEventOperationStatusResponse_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventOperationStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityEventOperationStatusResponse, securityEventOperationStatusResponse_);
    };
    DescribeSecurityEventOperationStatusResponseBody() = default ;
    DescribeSecurityEventOperationStatusResponseBody(const DescribeSecurityEventOperationStatusResponseBody &) = default ;
    DescribeSecurityEventOperationStatusResponseBody(DescribeSecurityEventOperationStatusResponseBody &&) = default ;
    DescribeSecurityEventOperationStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventOperationStatusResponseBody() = default ;
    DescribeSecurityEventOperationStatusResponseBody& operator=(const DescribeSecurityEventOperationStatusResponseBody &) = default ;
    DescribeSecurityEventOperationStatusResponseBody& operator=(DescribeSecurityEventOperationStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->securityEventOperationStatusResponse_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityEventOperationStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityEventOperationStatusResponse Field Functions 
    bool hasSecurityEventOperationStatusResponse() const { return this->securityEventOperationStatusResponse_ != nullptr;};
    void deleteSecurityEventOperationStatusResponse() { this->securityEventOperationStatusResponse_ = nullptr;};
    inline const DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponse & securityEventOperationStatusResponse() const { DARABONBA_PTR_GET_CONST(securityEventOperationStatusResponse_, DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponse) };
    inline DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponse securityEventOperationStatusResponse() { DARABONBA_PTR_GET(securityEventOperationStatusResponse_, DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponse) };
    inline DescribeSecurityEventOperationStatusResponseBody& setSecurityEventOperationStatusResponse(const DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponse & securityEventOperationStatusResponse) { DARABONBA_PTR_SET_VALUE(securityEventOperationStatusResponse_, securityEventOperationStatusResponse) };
    inline DescribeSecurityEventOperationStatusResponseBody& setSecurityEventOperationStatusResponse(DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponse && securityEventOperationStatusResponse) { DARABONBA_PTR_SET_RVALUE(securityEventOperationStatusResponse_, securityEventOperationStatusResponse) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the task that handles the alert events.
    std::shared_ptr<DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponse> securityEventOperationStatusResponse_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
