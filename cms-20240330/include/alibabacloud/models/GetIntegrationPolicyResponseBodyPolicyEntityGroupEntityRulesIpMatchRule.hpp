// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTEGRATIONPOLICYRESPONSEBODYPOLICYENTITYGROUPENTITYRULESIPMATCHRULE_HPP_
#define ALIBABACLOUD_MODELS_GETINTEGRATIONPOLICYRESPONSEBODYPOLICYENTITYGROUPENTITYRULESIPMATCHRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesIpMatchRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesIpMatchRule& obj) { 
      DARABONBA_PTR_TO_JSON(ipCidr, ipCidr_);
      DARABONBA_PTR_TO_JSON(ipFieldKey, ipFieldKey_);
    };
    friend void from_json(const Darabonba::Json& j, GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesIpMatchRule& obj) { 
      DARABONBA_PTR_FROM_JSON(ipCidr, ipCidr_);
      DARABONBA_PTR_FROM_JSON(ipFieldKey, ipFieldKey_);
    };
    GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesIpMatchRule() = default ;
    GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesIpMatchRule(const GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesIpMatchRule &) = default ;
    GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesIpMatchRule(GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesIpMatchRule &&) = default ;
    GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesIpMatchRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesIpMatchRule() = default ;
    GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesIpMatchRule& operator=(const GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesIpMatchRule &) = default ;
    GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesIpMatchRule& operator=(GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesIpMatchRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipCidr_ != nullptr
        && this->ipFieldKey_ != nullptr; };
    // ipCidr Field Functions 
    bool hasIpCidr() const { return this->ipCidr_ != nullptr;};
    void deleteIpCidr() { this->ipCidr_ = nullptr;};
    inline string ipCidr() const { DARABONBA_PTR_GET_DEFAULT(ipCidr_, "") };
    inline GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesIpMatchRule& setIpCidr(string ipCidr) { DARABONBA_PTR_SET_VALUE(ipCidr_, ipCidr) };


    // ipFieldKey Field Functions 
    bool hasIpFieldKey() const { return this->ipFieldKey_ != nullptr;};
    void deleteIpFieldKey() { this->ipFieldKey_ = nullptr;};
    inline string ipFieldKey() const { DARABONBA_PTR_GET_DEFAULT(ipFieldKey_, "") };
    inline GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesIpMatchRule& setIpFieldKey(string ipFieldKey) { DARABONBA_PTR_SET_VALUE(ipFieldKey_, ipFieldKey) };


  protected:
    std::shared_ptr<string> ipCidr_ = nullptr;
    std::shared_ptr<string> ipFieldKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
