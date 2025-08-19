// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRUSTEDSERVICESTATUSRESPONSEBODYENABLEDSERVICEPRINCIPALS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRUSTEDSERVICESTATUSRESPONSEBODYENABLEDSERVICEPRINCIPALS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListTrustedServiceStatusResponseBodyEnabledServicePrincipals : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrustedServiceStatusResponseBodyEnabledServicePrincipals& obj) { 
      DARABONBA_PTR_TO_JSON(EnabledServicePrincipal, enabledServicePrincipal_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrustedServiceStatusResponseBodyEnabledServicePrincipals& obj) { 
      DARABONBA_PTR_FROM_JSON(EnabledServicePrincipal, enabledServicePrincipal_);
    };
    ListTrustedServiceStatusResponseBodyEnabledServicePrincipals() = default ;
    ListTrustedServiceStatusResponseBodyEnabledServicePrincipals(const ListTrustedServiceStatusResponseBodyEnabledServicePrincipals &) = default ;
    ListTrustedServiceStatusResponseBodyEnabledServicePrincipals(ListTrustedServiceStatusResponseBodyEnabledServicePrincipals &&) = default ;
    ListTrustedServiceStatusResponseBodyEnabledServicePrincipals(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrustedServiceStatusResponseBodyEnabledServicePrincipals() = default ;
    ListTrustedServiceStatusResponseBodyEnabledServicePrincipals& operator=(const ListTrustedServiceStatusResponseBodyEnabledServicePrincipals &) = default ;
    ListTrustedServiceStatusResponseBodyEnabledServicePrincipals& operator=(ListTrustedServiceStatusResponseBodyEnabledServicePrincipals &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabledServicePrincipal_ != nullptr; };
    // enabledServicePrincipal Field Functions 
    bool hasEnabledServicePrincipal() const { return this->enabledServicePrincipal_ != nullptr;};
    void deleteEnabledServicePrincipal() { this->enabledServicePrincipal_ = nullptr;};
    inline const vector<Models::ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal> & enabledServicePrincipal() const { DARABONBA_PTR_GET_CONST(enabledServicePrincipal_, vector<Models::ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal>) };
    inline vector<Models::ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal> enabledServicePrincipal() { DARABONBA_PTR_GET(enabledServicePrincipal_, vector<Models::ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal>) };
    inline ListTrustedServiceStatusResponseBodyEnabledServicePrincipals& setEnabledServicePrincipal(const vector<Models::ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal> & enabledServicePrincipal) { DARABONBA_PTR_SET_VALUE(enabledServicePrincipal_, enabledServicePrincipal) };
    inline ListTrustedServiceStatusResponseBodyEnabledServicePrincipals& setEnabledServicePrincipal(vector<Models::ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal> && enabledServicePrincipal) { DARABONBA_PTR_SET_RVALUE(enabledServicePrincipal_, enabledServicePrincipal) };


  protected:
    std::shared_ptr<vector<Models::ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal>> enabledServicePrincipal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
