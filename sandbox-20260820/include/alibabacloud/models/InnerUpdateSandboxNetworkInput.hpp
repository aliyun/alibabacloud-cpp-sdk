// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INNERUPDATESANDBOXNETWORKINPUT_HPP_
#define ALIBABACLOUD_MODELS_INNERUPDATESANDBOXNETWORKINPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class InnerUpdateSandboxNetworkInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InnerUpdateSandboxNetworkInput& obj) { 
      DARABONBA_PTR_TO_JSON(allowInternetAccess, allowInternetAccess_);
      DARABONBA_PTR_TO_JSON(allowOut, allowOut_);
      DARABONBA_PTR_TO_JSON(denyOut, denyOut_);
      DARABONBA_PTR_TO_JSON(rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, InnerUpdateSandboxNetworkInput& obj) { 
      DARABONBA_PTR_FROM_JSON(allowInternetAccess, allowInternetAccess_);
      DARABONBA_PTR_FROM_JSON(allowOut, allowOut_);
      DARABONBA_PTR_FROM_JSON(denyOut, denyOut_);
      DARABONBA_PTR_FROM_JSON(rules, rules_);
    };
    InnerUpdateSandboxNetworkInput() = default ;
    InnerUpdateSandboxNetworkInput(const InnerUpdateSandboxNetworkInput &) = default ;
    InnerUpdateSandboxNetworkInput(InnerUpdateSandboxNetworkInput &&) = default ;
    InnerUpdateSandboxNetworkInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InnerUpdateSandboxNetworkInput() = default ;
    InnerUpdateSandboxNetworkInput& operator=(const InnerUpdateSandboxNetworkInput &) = default ;
    InnerUpdateSandboxNetworkInput& operator=(InnerUpdateSandboxNetworkInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowInternetAccess_ == nullptr
        && this->allowOut_ == nullptr && this->denyOut_ == nullptr && this->rules_ == nullptr; };
    // allowInternetAccess Field Functions 
    bool hasAllowInternetAccess() const { return this->allowInternetAccess_ != nullptr;};
    void deleteAllowInternetAccess() { this->allowInternetAccess_ = nullptr;};
    inline bool getAllowInternetAccess() const { DARABONBA_PTR_GET_DEFAULT(allowInternetAccess_, false) };
    inline InnerUpdateSandboxNetworkInput& setAllowInternetAccess(bool allowInternetAccess) { DARABONBA_PTR_SET_VALUE(allowInternetAccess_, allowInternetAccess) };


    // allowOut Field Functions 
    bool hasAllowOut() const { return this->allowOut_ != nullptr;};
    void deleteAllowOut() { this->allowOut_ = nullptr;};
    inline const vector<string> & getAllowOut() const { DARABONBA_PTR_GET_CONST(allowOut_, vector<string>) };
    inline vector<string> getAllowOut() { DARABONBA_PTR_GET(allowOut_, vector<string>) };
    inline InnerUpdateSandboxNetworkInput& setAllowOut(const vector<string> & allowOut) { DARABONBA_PTR_SET_VALUE(allowOut_, allowOut) };
    inline InnerUpdateSandboxNetworkInput& setAllowOut(vector<string> && allowOut) { DARABONBA_PTR_SET_RVALUE(allowOut_, allowOut) };


    // denyOut Field Functions 
    bool hasDenyOut() const { return this->denyOut_ != nullptr;};
    void deleteDenyOut() { this->denyOut_ = nullptr;};
    inline const vector<string> & getDenyOut() const { DARABONBA_PTR_GET_CONST(denyOut_, vector<string>) };
    inline vector<string> getDenyOut() { DARABONBA_PTR_GET(denyOut_, vector<string>) };
    inline InnerUpdateSandboxNetworkInput& setDenyOut(const vector<string> & denyOut) { DARABONBA_PTR_SET_VALUE(denyOut_, denyOut) };
    inline InnerUpdateSandboxNetworkInput& setDenyOut(vector<string> && denyOut) { DARABONBA_PTR_SET_RVALUE(denyOut_, denyOut) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const map<string, vector<Darabonba::Json>> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, map<string, vector<Darabonba::Json>>) };
    inline map<string, vector<Darabonba::Json>> getRules() { DARABONBA_PTR_GET(rules_, map<string, vector<Darabonba::Json>>) };
    inline InnerUpdateSandboxNetworkInput& setRules(const map<string, vector<Darabonba::Json>> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline InnerUpdateSandboxNetworkInput& setRules(map<string, vector<Darabonba::Json>> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The switch for outbound public network access from the sandbox. When set to false, it collapses to the default deny policy of the platform and shares the same outbound policy with allowOut and denyOut. This field is included in the full replacement. If omitted, no deny entries are appended based on this switch. However, if allowOut is not empty and denyOut is empty, denyOut is automatically set to 0.0.0.0/0, and IPv4 outbound traffic to destinations other than those in allowOut is denied.
    shared_ptr<bool> allowInternetAccess_ {};
    // The destinations allowed for outbound access, which can be IP addresses, CIDR blocks, exact domain names, or domain names with a wildcard only in the leftmost label (such as *.example.com). allowOut takes precedence over denyOut. The maximum list length depends on the account quota. If omitted, the existing allow list is cleared.
    shared_ptr<vector<string>> allowOut_ {};
    // The destinations denied for outbound access, in the same format as allowOut. If a destination matches both allow and deny rules, the allow rule takes precedence. The maximum list length depends on the account quota. If omitted, the existing deny list is cleared.
    shared_ptr<vector<string>> denyOut_ {};
    // The outbound network rules where the key is an exact destination hostname or the E2B reserved key @fc.sandbox.identity, and the value is a list of rule objects. The number of hosts and replacement entries is subject to the account quota limit. Omitting rules or passing a null object clears the standard host rules. OAuth options tables are updated individually. Omitting the corresponding reserved header retains the original table, while passing the character string "{}" clears the table.
    shared_ptr<map<string, vector<Darabonba::Json>>> rules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
