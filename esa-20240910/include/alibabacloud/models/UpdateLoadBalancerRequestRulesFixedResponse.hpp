// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELOADBALANCERREQUESTRULESFIXEDRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_UPDATELOADBALANCERREQUESTRULESFIXEDRESPONSE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateLoadBalancerRequestRulesFixedResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLoadBalancerRequestRulesFixedResponse& obj) { 
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(MessageBody, messageBody_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLoadBalancerRequestRulesFixedResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(MessageBody, messageBody_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    UpdateLoadBalancerRequestRulesFixedResponse() = default ;
    UpdateLoadBalancerRequestRulesFixedResponse(const UpdateLoadBalancerRequestRulesFixedResponse &) = default ;
    UpdateLoadBalancerRequestRulesFixedResponse(UpdateLoadBalancerRequestRulesFixedResponse &&) = default ;
    UpdateLoadBalancerRequestRulesFixedResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLoadBalancerRequestRulesFixedResponse() = default ;
    UpdateLoadBalancerRequestRulesFixedResponse& operator=(const UpdateLoadBalancerRequestRulesFixedResponse &) = default ;
    UpdateLoadBalancerRequestRulesFixedResponse& operator=(UpdateLoadBalancerRequestRulesFixedResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentType_ == nullptr
        && return this->location_ == nullptr && return this->messageBody_ == nullptr && return this->statusCode_ == nullptr; };
    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline UpdateLoadBalancerRequestRulesFixedResponse& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline UpdateLoadBalancerRequestRulesFixedResponse& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // messageBody Field Functions 
    bool hasMessageBody() const { return this->messageBody_ != nullptr;};
    void deleteMessageBody() { this->messageBody_ = nullptr;};
    inline string messageBody() const { DARABONBA_PTR_GET_DEFAULT(messageBody_, "") };
    inline UpdateLoadBalancerRequestRulesFixedResponse& setMessageBody(string messageBody) { DARABONBA_PTR_SET_VALUE(messageBody_, messageBody) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline UpdateLoadBalancerRequestRulesFixedResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    // Content-Type field in the HTTP Header.
    std::shared_ptr<string> contentType_ = nullptr;
    // Location field in the HTTP response.
    std::shared_ptr<string> location_ = nullptr;
    // Response body value.
    std::shared_ptr<string> messageBody_ = nullptr;
    // Response status code.
    std::shared_ptr<int32_t> statusCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
