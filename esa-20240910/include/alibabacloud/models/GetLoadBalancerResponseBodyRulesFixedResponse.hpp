// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOADBALANCERRESPONSEBODYRULESFIXEDRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETLOADBALANCERRESPONSEBODYRULESFIXEDRESPONSE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetLoadBalancerResponseBodyRulesFixedResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoadBalancerResponseBodyRulesFixedResponse& obj) { 
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(MessageBody, messageBody_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoadBalancerResponseBodyRulesFixedResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(MessageBody, messageBody_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    GetLoadBalancerResponseBodyRulesFixedResponse() = default ;
    GetLoadBalancerResponseBodyRulesFixedResponse(const GetLoadBalancerResponseBodyRulesFixedResponse &) = default ;
    GetLoadBalancerResponseBodyRulesFixedResponse(GetLoadBalancerResponseBodyRulesFixedResponse &&) = default ;
    GetLoadBalancerResponseBodyRulesFixedResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoadBalancerResponseBodyRulesFixedResponse() = default ;
    GetLoadBalancerResponseBodyRulesFixedResponse& operator=(const GetLoadBalancerResponseBodyRulesFixedResponse &) = default ;
    GetLoadBalancerResponseBodyRulesFixedResponse& operator=(GetLoadBalancerResponseBodyRulesFixedResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contentType_ != nullptr
        && this->location_ != nullptr && this->messageBody_ != nullptr && this->statusCode_ != nullptr; };
    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline GetLoadBalancerResponseBodyRulesFixedResponse& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline GetLoadBalancerResponseBodyRulesFixedResponse& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // messageBody Field Functions 
    bool hasMessageBody() const { return this->messageBody_ != nullptr;};
    void deleteMessageBody() { this->messageBody_ = nullptr;};
    inline string messageBody() const { DARABONBA_PTR_GET_DEFAULT(messageBody_, "") };
    inline GetLoadBalancerResponseBodyRulesFixedResponse& setMessageBody(string messageBody) { DARABONBA_PTR_SET_VALUE(messageBody_, messageBody) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetLoadBalancerResponseBodyRulesFixedResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    // The Content-Type field in the HTTP Header.
    std::shared_ptr<string> contentType_ = nullptr;
    // The location field in the HTTP response.
    std::shared_ptr<string> location_ = nullptr;
    // The body value of the response.
    std::shared_ptr<string> messageBody_ = nullptr;
    // Status code.
    std::shared_ptr<int32_t> statusCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
