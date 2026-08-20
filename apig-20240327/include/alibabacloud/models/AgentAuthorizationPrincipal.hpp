// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTAUTHORIZATIONPRINCIPAL_HPP_
#define ALIBABACLOUD_MODELS_AGENTAUTHORIZATIONPRINCIPAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class AgentAuthorizationPrincipal : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgentAuthorizationPrincipal& obj) { 
      DARABONBA_PTR_TO_JSON(principalId, principalId_);
      DARABONBA_PTR_TO_JSON(principalType, principalType_);
    };
    friend void from_json(const Darabonba::Json& j, AgentAuthorizationPrincipal& obj) { 
      DARABONBA_PTR_FROM_JSON(principalId, principalId_);
      DARABONBA_PTR_FROM_JSON(principalType, principalType_);
    };
    AgentAuthorizationPrincipal() = default ;
    AgentAuthorizationPrincipal(const AgentAuthorizationPrincipal &) = default ;
    AgentAuthorizationPrincipal(AgentAuthorizationPrincipal &&) = default ;
    AgentAuthorizationPrincipal(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgentAuthorizationPrincipal() = default ;
    AgentAuthorizationPrincipal& operator=(const AgentAuthorizationPrincipal &) = default ;
    AgentAuthorizationPrincipal& operator=(AgentAuthorizationPrincipal &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->principalId_ == nullptr
        && this->principalType_ == nullptr; };
    // principalId Field Functions 
    bool hasPrincipalId() const { return this->principalId_ != nullptr;};
    void deletePrincipalId() { this->principalId_ = nullptr;};
    inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
    inline AgentAuthorizationPrincipal& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


    // principalType Field Functions 
    bool hasPrincipalType() const { return this->principalType_ != nullptr;};
    void deletePrincipalType() { this->principalType_ = nullptr;};
    inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
    inline AgentAuthorizationPrincipal& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


  protected:
    // The ID of the authorization principal. Specify a consumer ID or consumer group ID based on the value of principalType.
    // 
    // This parameter is required.
    shared_ptr<string> principalId_ {};
    // The type of the authorization principal. Valid values:
    // 
    // - Consumer: consumer.
    // - ConsumerGroup: consumer group.
    // 
    // This parameter is required.
    shared_ptr<string> principalType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
