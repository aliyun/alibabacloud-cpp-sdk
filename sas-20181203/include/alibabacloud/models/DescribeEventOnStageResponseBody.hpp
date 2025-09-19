// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTONSTAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTONSTAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEventOnStageResponseBodySecurityEventStageResponse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeEventOnStageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventOnStageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityEventStageResponse, securityEventStageResponse_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventOnStageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityEventStageResponse, securityEventStageResponse_);
    };
    DescribeEventOnStageResponseBody() = default ;
    DescribeEventOnStageResponseBody(const DescribeEventOnStageResponseBody &) = default ;
    DescribeEventOnStageResponseBody(DescribeEventOnStageResponseBody &&) = default ;
    DescribeEventOnStageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventOnStageResponseBody() = default ;
    DescribeEventOnStageResponseBody& operator=(const DescribeEventOnStageResponseBody &) = default ;
    DescribeEventOnStageResponseBody& operator=(DescribeEventOnStageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->securityEventStageResponse_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEventOnStageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityEventStageResponse Field Functions 
    bool hasSecurityEventStageResponse() const { return this->securityEventStageResponse_ != nullptr;};
    void deleteSecurityEventStageResponse() { this->securityEventStageResponse_ = nullptr;};
    inline const DescribeEventOnStageResponseBodySecurityEventStageResponse & securityEventStageResponse() const { DARABONBA_PTR_GET_CONST(securityEventStageResponse_, DescribeEventOnStageResponseBodySecurityEventStageResponse) };
    inline DescribeEventOnStageResponseBodySecurityEventStageResponse securityEventStageResponse() { DARABONBA_PTR_GET(securityEventStageResponse_, DescribeEventOnStageResponseBodySecurityEventStageResponse) };
    inline DescribeEventOnStageResponseBody& setSecurityEventStageResponse(const DescribeEventOnStageResponseBodySecurityEventStageResponse & securityEventStageResponse) { DARABONBA_PTR_SET_VALUE(securityEventStageResponse_, securityEventStageResponse) };
    inline DescribeEventOnStageResponseBody& setSecurityEventStageResponse(DescribeEventOnStageResponseBodySecurityEventStageResponse && securityEventStageResponse) { DARABONBA_PTR_SET_RVALUE(securityEventStageResponse_, securityEventStageResponse) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The platforms that are supported by the feature of container threat detection.
    std::shared_ptr<DescribeEventOnStageResponseBodySecurityEventStageResponse> securityEventStageResponse_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
