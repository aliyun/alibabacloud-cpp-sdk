// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEENDPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEENDPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeServiceEndpointsResponseBodyEndpoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeServiceEndpointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceEndpointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceEndpointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeServiceEndpointsResponseBody() = default ;
    DescribeServiceEndpointsResponseBody(const DescribeServiceEndpointsResponseBody &) = default ;
    DescribeServiceEndpointsResponseBody(DescribeServiceEndpointsResponseBody &&) = default ;
    DescribeServiceEndpointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceEndpointsResponseBody() = default ;
    DescribeServiceEndpointsResponseBody& operator=(const DescribeServiceEndpointsResponseBody &) = default ;
    DescribeServiceEndpointsResponseBody& operator=(DescribeServiceEndpointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessToken_ != nullptr
        && this->endpoints_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline DescribeServiceEndpointsResponseBody& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<DescribeServiceEndpointsResponseBodyEndpoints> & endpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<DescribeServiceEndpointsResponseBodyEndpoints>) };
    inline vector<DescribeServiceEndpointsResponseBodyEndpoints> endpoints() { DARABONBA_PTR_GET(endpoints_, vector<DescribeServiceEndpointsResponseBodyEndpoints>) };
    inline DescribeServiceEndpointsResponseBody& setEndpoints(const vector<DescribeServiceEndpointsResponseBodyEndpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline DescribeServiceEndpointsResponseBody& setEndpoints(vector<DescribeServiceEndpointsResponseBodyEndpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeServiceEndpointsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServiceEndpointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The service token.
    std::shared_ptr<string> accessToken_ = nullptr;
    // The service endpoints.
    std::shared_ptr<vector<DescribeServiceEndpointsResponseBodyEndpoints>> endpoints_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
