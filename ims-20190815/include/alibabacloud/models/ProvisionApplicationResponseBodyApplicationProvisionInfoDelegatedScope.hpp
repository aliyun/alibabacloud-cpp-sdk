// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROVISIONAPPLICATIONRESPONSEBODYAPPLICATIONPROVISIONINFODELEGATEDSCOPE_HPP_
#define ALIBABACLOUD_MODELS_PROVISIONAPPLICATIONRESPONSEBODYAPPLICATIONPROVISIONINFODELEGATEDSCOPE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScope : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScope& obj) { 
      DARABONBA_PTR_TO_JSON(PredefinedScopes, predefinedScopes_);
    };
    friend void from_json(const Darabonba::Json& j, ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScope& obj) { 
      DARABONBA_PTR_FROM_JSON(PredefinedScopes, predefinedScopes_);
    };
    ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScope() = default ;
    ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScope(const ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScope &) = default ;
    ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScope(ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScope &&) = default ;
    ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScope(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScope() = default ;
    ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScope& operator=(const ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScope &) = default ;
    ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScope& operator=(ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScope &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->predefinedScopes_ != nullptr; };
    // predefinedScopes Field Functions 
    bool hasPredefinedScopes() const { return this->predefinedScopes_ != nullptr;};
    void deletePredefinedScopes() { this->predefinedScopes_ = nullptr;};
    inline const Models::ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes & predefinedScopes() const { DARABONBA_PTR_GET_CONST(predefinedScopes_, Models::ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes) };
    inline Models::ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes predefinedScopes() { DARABONBA_PTR_GET(predefinedScopes_, Models::ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes) };
    inline ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScope& setPredefinedScopes(const Models::ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes & predefinedScopes) { DARABONBA_PTR_SET_VALUE(predefinedScopes_, predefinedScopes) };
    inline ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScope& setPredefinedScopes(Models::ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes && predefinedScopes) { DARABONBA_PTR_SET_RVALUE(predefinedScopes_, predefinedScopes) };


  protected:
    // The information about the permissions that are granted to the application.
    std::shared_ptr<Models::ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes> predefinedScopes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
