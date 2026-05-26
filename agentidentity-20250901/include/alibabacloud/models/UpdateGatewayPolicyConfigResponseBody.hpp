// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYPOLICYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYPOLICYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class UpdateGatewayPolicyConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayPolicyConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GatewayPolicyConfig, gatewayPolicyConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayPolicyConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewayPolicyConfig, gatewayPolicyConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateGatewayPolicyConfigResponseBody() = default ;
    UpdateGatewayPolicyConfigResponseBody(const UpdateGatewayPolicyConfigResponseBody &) = default ;
    UpdateGatewayPolicyConfigResponseBody(UpdateGatewayPolicyConfigResponseBody &&) = default ;
    UpdateGatewayPolicyConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayPolicyConfigResponseBody() = default ;
    UpdateGatewayPolicyConfigResponseBody& operator=(const UpdateGatewayPolicyConfigResponseBody &) = default ;
    UpdateGatewayPolicyConfigResponseBody& operator=(UpdateGatewayPolicyConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GatewayPolicyConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GatewayPolicyConfig& obj) { 
        DARABONBA_PTR_TO_JSON(EnforcementMode, enforcementMode_);
        DARABONBA_PTR_TO_JSON(PolicySetArn, policySetArn_);
      };
      friend void from_json(const Darabonba::Json& j, GatewayPolicyConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(EnforcementMode, enforcementMode_);
        DARABONBA_PTR_FROM_JSON(PolicySetArn, policySetArn_);
      };
      GatewayPolicyConfig() = default ;
      GatewayPolicyConfig(const GatewayPolicyConfig &) = default ;
      GatewayPolicyConfig(GatewayPolicyConfig &&) = default ;
      GatewayPolicyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GatewayPolicyConfig() = default ;
      GatewayPolicyConfig& operator=(const GatewayPolicyConfig &) = default ;
      GatewayPolicyConfig& operator=(GatewayPolicyConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enforcementMode_ == nullptr
        && this->policySetArn_ == nullptr; };
      // enforcementMode Field Functions 
      bool hasEnforcementMode() const { return this->enforcementMode_ != nullptr;};
      void deleteEnforcementMode() { this->enforcementMode_ = nullptr;};
      inline string getEnforcementMode() const { DARABONBA_PTR_GET_DEFAULT(enforcementMode_, "") };
      inline GatewayPolicyConfig& setEnforcementMode(string enforcementMode) { DARABONBA_PTR_SET_VALUE(enforcementMode_, enforcementMode) };


      // policySetArn Field Functions 
      bool hasPolicySetArn() const { return this->policySetArn_ != nullptr;};
      void deletePolicySetArn() { this->policySetArn_ = nullptr;};
      inline string getPolicySetArn() const { DARABONBA_PTR_GET_DEFAULT(policySetArn_, "") };
      inline GatewayPolicyConfig& setPolicySetArn(string policySetArn) { DARABONBA_PTR_SET_VALUE(policySetArn_, policySetArn) };


    protected:
      shared_ptr<string> enforcementMode_ {};
      shared_ptr<string> policySetArn_ {};
    };

    virtual bool empty() const override { return this->gatewayPolicyConfig_ == nullptr
        && this->requestId_ == nullptr; };
    // gatewayPolicyConfig Field Functions 
    bool hasGatewayPolicyConfig() const { return this->gatewayPolicyConfig_ != nullptr;};
    void deleteGatewayPolicyConfig() { this->gatewayPolicyConfig_ = nullptr;};
    inline const UpdateGatewayPolicyConfigResponseBody::GatewayPolicyConfig & getGatewayPolicyConfig() const { DARABONBA_PTR_GET_CONST(gatewayPolicyConfig_, UpdateGatewayPolicyConfigResponseBody::GatewayPolicyConfig) };
    inline UpdateGatewayPolicyConfigResponseBody::GatewayPolicyConfig getGatewayPolicyConfig() { DARABONBA_PTR_GET(gatewayPolicyConfig_, UpdateGatewayPolicyConfigResponseBody::GatewayPolicyConfig) };
    inline UpdateGatewayPolicyConfigResponseBody& setGatewayPolicyConfig(const UpdateGatewayPolicyConfigResponseBody::GatewayPolicyConfig & gatewayPolicyConfig) { DARABONBA_PTR_SET_VALUE(gatewayPolicyConfig_, gatewayPolicyConfig) };
    inline UpdateGatewayPolicyConfigResponseBody& setGatewayPolicyConfig(UpdateGatewayPolicyConfigResponseBody::GatewayPolicyConfig && gatewayPolicyConfig) { DARABONBA_PTR_SET_RVALUE(gatewayPolicyConfig_, gatewayPolicyConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateGatewayPolicyConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<UpdateGatewayPolicyConfigResponseBody::GatewayPolicyConfig> gatewayPolicyConfig_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
