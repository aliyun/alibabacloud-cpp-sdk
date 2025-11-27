// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CredentialConfigChain.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CredentialConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Chain, chain_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(ServiceRole, serviceRole_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Chain, chain_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(ServiceRole, serviceRole_);
    };
    CredentialConfig() = default ;
    CredentialConfig(const CredentialConfig &) = default ;
    CredentialConfig(CredentialConfig &&) = default ;
    CredentialConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialConfig() = default ;
    CredentialConfig& operator=(const CredentialConfig &) = default ;
    CredentialConfig& operator=(CredentialConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chain_ == nullptr
        && return this->policy_ == nullptr && return this->serviceRole_ == nullptr; };
    // chain Field Functions 
    bool hasChain() const { return this->chain_ != nullptr;};
    void deleteChain() { this->chain_ = nullptr;};
    inline const vector<CredentialConfigChain> & chain() const { DARABONBA_PTR_GET_CONST(chain_, vector<CredentialConfigChain>) };
    inline vector<CredentialConfigChain> chain() { DARABONBA_PTR_GET(chain_, vector<CredentialConfigChain>) };
    inline CredentialConfig& setChain(const vector<CredentialConfigChain> & chain) { DARABONBA_PTR_SET_VALUE(chain_, chain) };
    inline CredentialConfig& setChain(vector<CredentialConfigChain> && chain) { DARABONBA_PTR_SET_RVALUE(chain_, chain) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline CredentialConfig& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // serviceRole Field Functions 
    bool hasServiceRole() const { return this->serviceRole_ != nullptr;};
    void deleteServiceRole() { this->serviceRole_ = nullptr;};
    inline string serviceRole() const { DARABONBA_PTR_GET_DEFAULT(serviceRole_, "") };
    inline CredentialConfig& setServiceRole(string serviceRole) { DARABONBA_PTR_SET_VALUE(serviceRole_, serviceRole) };


  protected:
    std::shared_ptr<vector<CredentialConfigChain>> chain_ = nullptr;
    std::shared_ptr<string> policy_ = nullptr;
    std::shared_ptr<string> serviceRole_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
