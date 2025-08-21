// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROVISIONAPPLICATIONRESPONSEBODYAPPLICATIONPROVISIONINFODELEGATEDSCOPEPREDEFINEDSCOPES_HPP_
#define ALIBABACLOUD_MODELS_PROVISIONAPPLICATIONRESPONSEBODYAPPLICATIONPROVISIONINFODELEGATEDSCOPEPREDEFINEDSCOPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopesPredefinedScope.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes& obj) { 
      DARABONBA_PTR_TO_JSON(PredefinedScope, predefinedScope_);
    };
    friend void from_json(const Darabonba::Json& j, ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes& obj) { 
      DARABONBA_PTR_FROM_JSON(PredefinedScope, predefinedScope_);
    };
    ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes() = default ;
    ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes(const ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes &) = default ;
    ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes(ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes &&) = default ;
    ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes() = default ;
    ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes& operator=(const ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes &) = default ;
    ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes& operator=(ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->predefinedScope_ != nullptr; };
    // predefinedScope Field Functions 
    bool hasPredefinedScope() const { return this->predefinedScope_ != nullptr;};
    void deletePredefinedScope() { this->predefinedScope_ = nullptr;};
    inline const vector<Models::ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopesPredefinedScope> & predefinedScope() const { DARABONBA_PTR_GET_CONST(predefinedScope_, vector<Models::ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopesPredefinedScope>) };
    inline vector<Models::ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopesPredefinedScope> predefinedScope() { DARABONBA_PTR_GET(predefinedScope_, vector<Models::ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopesPredefinedScope>) };
    inline ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes& setPredefinedScope(const vector<Models::ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopesPredefinedScope> & predefinedScope) { DARABONBA_PTR_SET_VALUE(predefinedScope_, predefinedScope) };
    inline ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopes& setPredefinedScope(vector<Models::ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopesPredefinedScope> && predefinedScope) { DARABONBA_PTR_SET_RVALUE(predefinedScope_, predefinedScope) };


  protected:
    std::shared_ptr<vector<Models::ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScopePredefinedScopesPredefinedScope>> predefinedScope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
