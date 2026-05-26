// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHPOLICYSETTOGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHPOLICYSETTOGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class AttachPolicySetToGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachPolicySetToGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnforcementMode, enforcementMode_);
      DARABONBA_PTR_TO_JSON(GatewayArn, gatewayArn_);
      DARABONBA_PTR_TO_JSON(GatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(PolicySetName, policySetName_);
    };
    friend void from_json(const Darabonba::Json& j, AttachPolicySetToGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnforcementMode, enforcementMode_);
      DARABONBA_PTR_FROM_JSON(GatewayArn, gatewayArn_);
      DARABONBA_PTR_FROM_JSON(GatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(PolicySetName, policySetName_);
    };
    AttachPolicySetToGatewayRequest() = default ;
    AttachPolicySetToGatewayRequest(const AttachPolicySetToGatewayRequest &) = default ;
    AttachPolicySetToGatewayRequest(AttachPolicySetToGatewayRequest &&) = default ;
    AttachPolicySetToGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachPolicySetToGatewayRequest() = default ;
    AttachPolicySetToGatewayRequest& operator=(const AttachPolicySetToGatewayRequest &) = default ;
    AttachPolicySetToGatewayRequest& operator=(AttachPolicySetToGatewayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enforcementMode_ == nullptr
        && this->gatewayArn_ == nullptr && this->gatewayType_ == nullptr && this->policySetName_ == nullptr; };
    // enforcementMode Field Functions 
    bool hasEnforcementMode() const { return this->enforcementMode_ != nullptr;};
    void deleteEnforcementMode() { this->enforcementMode_ = nullptr;};
    inline string getEnforcementMode() const { DARABONBA_PTR_GET_DEFAULT(enforcementMode_, "") };
    inline AttachPolicySetToGatewayRequest& setEnforcementMode(string enforcementMode) { DARABONBA_PTR_SET_VALUE(enforcementMode_, enforcementMode) };


    // gatewayArn Field Functions 
    bool hasGatewayArn() const { return this->gatewayArn_ != nullptr;};
    void deleteGatewayArn() { this->gatewayArn_ = nullptr;};
    inline string getGatewayArn() const { DARABONBA_PTR_GET_DEFAULT(gatewayArn_, "") };
    inline AttachPolicySetToGatewayRequest& setGatewayArn(string gatewayArn) { DARABONBA_PTR_SET_VALUE(gatewayArn_, gatewayArn) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline AttachPolicySetToGatewayRequest& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // policySetName Field Functions 
    bool hasPolicySetName() const { return this->policySetName_ != nullptr;};
    void deletePolicySetName() { this->policySetName_ = nullptr;};
    inline string getPolicySetName() const { DARABONBA_PTR_GET_DEFAULT(policySetName_, "") };
    inline AttachPolicySetToGatewayRequest& setPolicySetName(string policySetName) { DARABONBA_PTR_SET_VALUE(policySetName_, policySetName) };


  protected:
    shared_ptr<string> enforcementMode_ {};
    shared_ptr<string> gatewayArn_ {};
    shared_ptr<string> gatewayType_ {};
    shared_ptr<string> policySetName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
