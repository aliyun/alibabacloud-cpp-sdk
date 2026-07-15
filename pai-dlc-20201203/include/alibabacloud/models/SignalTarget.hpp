// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIGNALTARGET_HPP_
#define ALIBABACLOUD_MODELS_SIGNALTARGET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class SignalTarget : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SignalTarget& obj) { 
      DARABONBA_PTR_TO_JSON(PodNames, podNames_);
      DARABONBA_PTR_TO_JSON(Roles, roles_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, SignalTarget& obj) { 
      DARABONBA_PTR_FROM_JSON(PodNames, podNames_);
      DARABONBA_PTR_FROM_JSON(Roles, roles_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
    };
    SignalTarget() = default ;
    SignalTarget(const SignalTarget &) = default ;
    SignalTarget(SignalTarget &&) = default ;
    SignalTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SignalTarget() = default ;
    SignalTarget& operator=(const SignalTarget &) = default ;
    SignalTarget& operator=(SignalTarget &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->podNames_ == nullptr
        && this->roles_ == nullptr && this->scope_ == nullptr; };
    // podNames Field Functions 
    bool hasPodNames() const { return this->podNames_ != nullptr;};
    void deletePodNames() { this->podNames_ = nullptr;};
    inline const vector<string> & getPodNames() const { DARABONBA_PTR_GET_CONST(podNames_, vector<string>) };
    inline vector<string> getPodNames() { DARABONBA_PTR_GET(podNames_, vector<string>) };
    inline SignalTarget& setPodNames(const vector<string> & podNames) { DARABONBA_PTR_SET_VALUE(podNames_, podNames) };
    inline SignalTarget& setPodNames(vector<string> && podNames) { DARABONBA_PTR_SET_RVALUE(podNames_, podNames) };


    // roles Field Functions 
    bool hasRoles() const { return this->roles_ != nullptr;};
    void deleteRoles() { this->roles_ = nullptr;};
    inline const vector<string> & getRoles() const { DARABONBA_PTR_GET_CONST(roles_, vector<string>) };
    inline vector<string> getRoles() { DARABONBA_PTR_GET(roles_, vector<string>) };
    inline SignalTarget& setRoles(const vector<string> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
    inline SignalTarget& setRoles(vector<string> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline SignalTarget& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


  protected:
    shared_ptr<vector<string>> podNames_ {};
    shared_ptr<vector<string>> roles_ {};
    shared_ptr<string> scope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
