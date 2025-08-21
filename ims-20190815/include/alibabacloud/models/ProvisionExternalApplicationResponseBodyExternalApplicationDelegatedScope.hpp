// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROVISIONEXTERNALAPPLICATIONRESPONSEBODYEXTERNALAPPLICATIONDELEGATEDSCOPE_HPP_
#define ALIBABACLOUD_MODELS_PROVISIONEXTERNALAPPLICATIONRESPONSEBODYEXTERNALAPPLICATIONDELEGATEDSCOPE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ProvisionExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ProvisionExternalApplicationResponseBodyExternalApplicationDelegatedScope : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProvisionExternalApplicationResponseBodyExternalApplicationDelegatedScope& obj) { 
      DARABONBA_PTR_TO_JSON(PredefinedScopes, predefinedScopes_);
    };
    friend void from_json(const Darabonba::Json& j, ProvisionExternalApplicationResponseBodyExternalApplicationDelegatedScope& obj) { 
      DARABONBA_PTR_FROM_JSON(PredefinedScopes, predefinedScopes_);
    };
    ProvisionExternalApplicationResponseBodyExternalApplicationDelegatedScope() = default ;
    ProvisionExternalApplicationResponseBodyExternalApplicationDelegatedScope(const ProvisionExternalApplicationResponseBodyExternalApplicationDelegatedScope &) = default ;
    ProvisionExternalApplicationResponseBodyExternalApplicationDelegatedScope(ProvisionExternalApplicationResponseBodyExternalApplicationDelegatedScope &&) = default ;
    ProvisionExternalApplicationResponseBodyExternalApplicationDelegatedScope(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProvisionExternalApplicationResponseBodyExternalApplicationDelegatedScope() = default ;
    ProvisionExternalApplicationResponseBodyExternalApplicationDelegatedScope& operator=(const ProvisionExternalApplicationResponseBodyExternalApplicationDelegatedScope &) = default ;
    ProvisionExternalApplicationResponseBodyExternalApplicationDelegatedScope& operator=(ProvisionExternalApplicationResponseBodyExternalApplicationDelegatedScope &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->predefinedScopes_ != nullptr; };
    // predefinedScopes Field Functions 
    bool hasPredefinedScopes() const { return this->predefinedScopes_ != nullptr;};
    void deletePredefinedScopes() { this->predefinedScopes_ = nullptr;};
    inline const Models::ProvisionExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes & predefinedScopes() const { DARABONBA_PTR_GET_CONST(predefinedScopes_, Models::ProvisionExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes) };
    inline Models::ProvisionExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes predefinedScopes() { DARABONBA_PTR_GET(predefinedScopes_, Models::ProvisionExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes) };
    inline ProvisionExternalApplicationResponseBodyExternalApplicationDelegatedScope& setPredefinedScopes(const Models::ProvisionExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes & predefinedScopes) { DARABONBA_PTR_SET_VALUE(predefinedScopes_, predefinedScopes) };
    inline ProvisionExternalApplicationResponseBodyExternalApplicationDelegatedScope& setPredefinedScopes(Models::ProvisionExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes && predefinedScopes) { DARABONBA_PTR_SET_RVALUE(predefinedScopes_, predefinedScopes) };


  protected:
    // The information about the scopes of permissions that are granted to the application.
    std::shared_ptr<Models::ProvisionExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes> predefinedScopes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
