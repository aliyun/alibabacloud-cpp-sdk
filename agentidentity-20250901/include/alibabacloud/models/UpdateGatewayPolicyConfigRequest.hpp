// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYPOLICYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYPOLICYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class UpdateGatewayPolicyConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayPolicyConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnforcementMode, enforcementMode_);
      DARABONBA_PTR_TO_JSON(GatewayArn, gatewayArn_);
      DARABONBA_PTR_TO_JSON(GatewayType, gatewayType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayPolicyConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnforcementMode, enforcementMode_);
      DARABONBA_PTR_FROM_JSON(GatewayArn, gatewayArn_);
      DARABONBA_PTR_FROM_JSON(GatewayType, gatewayType_);
    };
    UpdateGatewayPolicyConfigRequest() = default ;
    UpdateGatewayPolicyConfigRequest(const UpdateGatewayPolicyConfigRequest &) = default ;
    UpdateGatewayPolicyConfigRequest(UpdateGatewayPolicyConfigRequest &&) = default ;
    UpdateGatewayPolicyConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayPolicyConfigRequest() = default ;
    UpdateGatewayPolicyConfigRequest& operator=(const UpdateGatewayPolicyConfigRequest &) = default ;
    UpdateGatewayPolicyConfigRequest& operator=(UpdateGatewayPolicyConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enforcementMode_ == nullptr
        && this->gatewayArn_ == nullptr && this->gatewayType_ == nullptr; };
    // enforcementMode Field Functions 
    bool hasEnforcementMode() const { return this->enforcementMode_ != nullptr;};
    void deleteEnforcementMode() { this->enforcementMode_ = nullptr;};
    inline string getEnforcementMode() const { DARABONBA_PTR_GET_DEFAULT(enforcementMode_, "") };
    inline UpdateGatewayPolicyConfigRequest& setEnforcementMode(string enforcementMode) { DARABONBA_PTR_SET_VALUE(enforcementMode_, enforcementMode) };


    // gatewayArn Field Functions 
    bool hasGatewayArn() const { return this->gatewayArn_ != nullptr;};
    void deleteGatewayArn() { this->gatewayArn_ = nullptr;};
    inline string getGatewayArn() const { DARABONBA_PTR_GET_DEFAULT(gatewayArn_, "") };
    inline UpdateGatewayPolicyConfigRequest& setGatewayArn(string gatewayArn) { DARABONBA_PTR_SET_VALUE(gatewayArn_, gatewayArn) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline UpdateGatewayPolicyConfigRequest& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


  protected:
    shared_ptr<string> enforcementMode_ {};
    shared_ptr<string> gatewayArn_ {};
    shared_ptr<string> gatewayType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
