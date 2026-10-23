// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELOGSTASHCHARGETYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELOGSTASHCHARGETYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateLogstashChargeTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLogstashChargeTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLogstashChargeTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    UpdateLogstashChargeTypeRequest() = default ;
    UpdateLogstashChargeTypeRequest(const UpdateLogstashChargeTypeRequest &) = default ;
    UpdateLogstashChargeTypeRequest(UpdateLogstashChargeTypeRequest &&) = default ;
    UpdateLogstashChargeTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLogstashChargeTypeRequest() = default ;
    UpdateLogstashChargeTypeRequest& operator=(const UpdateLogstashChargeTypeRequest &) = default ;
    UpdateLogstashChargeTypeRequest& operator=(UpdateLogstashChargeTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && this->clientToken_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline UpdateLogstashChargeTypeRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateLogstashChargeTypeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The billing information of the Logstash instance after conversion, including the subscription duration and billing cycle.
    shared_ptr<string> body_ {};
    // The client token that is used to ensure the idempotence of the request. The client generates the parameter value. The value must be unique across different requests and can contain a maximum of 64 ASCII characters.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
