// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADVANCESECURITYEVENTOPERATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADVANCESECURITYEVENTOPERATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AdvanceSecurityEventOperationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AdvanceSecurityEventOperationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityEventOperationsResponse, securityEventOperationsResponse_);
    };
    friend void from_json(const Darabonba::Json& j, AdvanceSecurityEventOperationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityEventOperationsResponse, securityEventOperationsResponse_);
    };
    AdvanceSecurityEventOperationsResponseBody() = default ;
    AdvanceSecurityEventOperationsResponseBody(const AdvanceSecurityEventOperationsResponseBody &) = default ;
    AdvanceSecurityEventOperationsResponseBody(AdvanceSecurityEventOperationsResponseBody &&) = default ;
    AdvanceSecurityEventOperationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AdvanceSecurityEventOperationsResponseBody() = default ;
    AdvanceSecurityEventOperationsResponseBody& operator=(const AdvanceSecurityEventOperationsResponseBody &) = default ;
    AdvanceSecurityEventOperationsResponseBody& operator=(AdvanceSecurityEventOperationsResponseBody &&) = default ;
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
    inline AdvanceSecurityEventOperationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityEventOperationsResponse Field Functions 
    bool hasSecurityEventOperationsResponse() const { return this->securityEventOperationsResponse_ != nullptr;};
    void deleteSecurityEventOperationsResponse() { this->securityEventOperationsResponse_ = nullptr;};
    inline const vector<AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponse> & securityEventOperationsResponse() const { DARABONBA_PTR_GET_CONST(securityEventOperationsResponse_, vector<AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponse>) };
    inline vector<AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponse> securityEventOperationsResponse() { DARABONBA_PTR_GET(securityEventOperationsResponse_, vector<AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponse>) };
    inline AdvanceSecurityEventOperationsResponseBody& setSecurityEventOperationsResponse(const vector<AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponse> & securityEventOperationsResponse) { DARABONBA_PTR_SET_VALUE(securityEventOperationsResponse_, securityEventOperationsResponse) };
    inline AdvanceSecurityEventOperationsResponseBody& setSecurityEventOperationsResponse(vector<AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponse> && securityEventOperationsResponse) { DARABONBA_PTR_SET_RVALUE(securityEventOperationsResponse_, securityEventOperationsResponse) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The operation performed on the alert event.
    std::shared_ptr<vector<AdvanceSecurityEventOperationsResponseBodySecurityEventOperationsResponse>> securityEventOperationsResponse_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
