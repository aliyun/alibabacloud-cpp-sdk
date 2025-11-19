// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROXYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_PROXYCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ProxyConfigEndpoints.hpp>
#include <alibabacloud/models/ProxyConfigPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ProxyConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProxyConfig& obj) { 
      DARABONBA_PTR_TO_JSON(endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(policies, policies_);
    };
    friend void from_json(const Darabonba::Json& j, ProxyConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(policies, policies_);
    };
    ProxyConfig() = default ;
    ProxyConfig(const ProxyConfig &) = default ;
    ProxyConfig(ProxyConfig &&) = default ;
    ProxyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProxyConfig() = default ;
    ProxyConfig& operator=(const ProxyConfig &) = default ;
    ProxyConfig& operator=(ProxyConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpoints_ == nullptr
        && return this->policies_ == nullptr; };
    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<ProxyConfigEndpoints> & endpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<ProxyConfigEndpoints>) };
    inline vector<ProxyConfigEndpoints> endpoints() { DARABONBA_PTR_GET(endpoints_, vector<ProxyConfigEndpoints>) };
    inline ProxyConfig& setEndpoints(const vector<ProxyConfigEndpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline ProxyConfig& setEndpoints(vector<ProxyConfigEndpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const ProxyConfigPolicies & policies() const { DARABONBA_PTR_GET_CONST(policies_, ProxyConfigPolicies) };
    inline ProxyConfigPolicies policies() { DARABONBA_PTR_GET(policies_, ProxyConfigPolicies) };
    inline ProxyConfig& setPolicies(const ProxyConfigPolicies & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline ProxyConfig& setPolicies(ProxyConfigPolicies && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


  protected:
    std::shared_ptr<vector<ProxyConfigEndpoints>> endpoints_ = nullptr;
    std::shared_ptr<ProxyConfigPolicies> policies_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
