// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPENDPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPENDPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGroupEndpointsResponseBodyEndpoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeGroupEndpointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupEndpointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupEndpointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGroupEndpointsResponseBody() = default ;
    DescribeGroupEndpointsResponseBody(const DescribeGroupEndpointsResponseBody &) = default ;
    DescribeGroupEndpointsResponseBody(DescribeGroupEndpointsResponseBody &&) = default ;
    DescribeGroupEndpointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupEndpointsResponseBody() = default ;
    DescribeGroupEndpointsResponseBody& operator=(const DescribeGroupEndpointsResponseBody &) = default ;
    DescribeGroupEndpointsResponseBody& operator=(DescribeGroupEndpointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->endpoints_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline DescribeGroupEndpointsResponseBody& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<DescribeGroupEndpointsResponseBodyEndpoints> & endpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<DescribeGroupEndpointsResponseBodyEndpoints>) };
    inline vector<DescribeGroupEndpointsResponseBodyEndpoints> endpoints() { DARABONBA_PTR_GET(endpoints_, vector<DescribeGroupEndpointsResponseBodyEndpoints>) };
    inline DescribeGroupEndpointsResponseBody& setEndpoints(const vector<DescribeGroupEndpointsResponseBodyEndpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline DescribeGroupEndpointsResponseBody& setEndpoints(vector<DescribeGroupEndpointsResponseBodyEndpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeGroupEndpointsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupEndpointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The service token.
    std::shared_ptr<string> accessToken_ = nullptr;
    // The endpoints of the service group.
    std::shared_ptr<vector<DescribeGroupEndpointsResponseBodyEndpoints>> endpoints_ = nullptr;
    // The response message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
