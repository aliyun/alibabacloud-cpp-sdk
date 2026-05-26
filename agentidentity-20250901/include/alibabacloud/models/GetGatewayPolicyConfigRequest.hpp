// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYPOLICYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYPOLICYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class GetGatewayPolicyConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayPolicyConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GatewayArn, gatewayArn_);
      DARABONBA_PTR_TO_JSON(GatewayType, gatewayType_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayPolicyConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewayArn, gatewayArn_);
      DARABONBA_PTR_FROM_JSON(GatewayType, gatewayType_);
    };
    GetGatewayPolicyConfigRequest() = default ;
    GetGatewayPolicyConfigRequest(const GetGatewayPolicyConfigRequest &) = default ;
    GetGatewayPolicyConfigRequest(GetGatewayPolicyConfigRequest &&) = default ;
    GetGatewayPolicyConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayPolicyConfigRequest() = default ;
    GetGatewayPolicyConfigRequest& operator=(const GetGatewayPolicyConfigRequest &) = default ;
    GetGatewayPolicyConfigRequest& operator=(GetGatewayPolicyConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayArn_ == nullptr
        && this->gatewayType_ == nullptr; };
    // gatewayArn Field Functions 
    bool hasGatewayArn() const { return this->gatewayArn_ != nullptr;};
    void deleteGatewayArn() { this->gatewayArn_ = nullptr;};
    inline string getGatewayArn() const { DARABONBA_PTR_GET_DEFAULT(gatewayArn_, "") };
    inline GetGatewayPolicyConfigRequest& setGatewayArn(string gatewayArn) { DARABONBA_PTR_SET_VALUE(gatewayArn_, gatewayArn) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline GetGatewayPolicyConfigRequest& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


  protected:
    shared_ptr<string> gatewayArn_ {};
    shared_ptr<string> gatewayType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
