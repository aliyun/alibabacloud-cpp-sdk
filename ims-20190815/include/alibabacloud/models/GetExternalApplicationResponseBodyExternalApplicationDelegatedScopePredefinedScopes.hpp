// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXTERNALAPPLICATIONRESPONSEBODYEXTERNALAPPLICATIONDELEGATEDSCOPEPREDEFINEDSCOPES_HPP_
#define ALIBABACLOUD_MODELS_GETEXTERNALAPPLICATIONRESPONSEBODYEXTERNALAPPLICATIONDELEGATEDSCOPEPREDEFINEDSCOPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopesPredefinedScope.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes& obj) { 
      DARABONBA_PTR_TO_JSON(PredefinedScope, predefinedScope_);
    };
    friend void from_json(const Darabonba::Json& j, GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes& obj) { 
      DARABONBA_PTR_FROM_JSON(PredefinedScope, predefinedScope_);
    };
    GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes() = default ;
    GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes(const GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes &) = default ;
    GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes(GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes &&) = default ;
    GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes() = default ;
    GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes& operator=(const GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes &) = default ;
    GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes& operator=(GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->predefinedScope_ != nullptr; };
    // predefinedScope Field Functions 
    bool hasPredefinedScope() const { return this->predefinedScope_ != nullptr;};
    void deletePredefinedScope() { this->predefinedScope_ = nullptr;};
    inline const vector<Models::GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopesPredefinedScope> & predefinedScope() const { DARABONBA_PTR_GET_CONST(predefinedScope_, vector<Models::GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopesPredefinedScope>) };
    inline vector<Models::GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopesPredefinedScope> predefinedScope() { DARABONBA_PTR_GET(predefinedScope_, vector<Models::GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopesPredefinedScope>) };
    inline GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes& setPredefinedScope(const vector<Models::GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopesPredefinedScope> & predefinedScope) { DARABONBA_PTR_SET_VALUE(predefinedScope_, predefinedScope) };
    inline GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopes& setPredefinedScope(vector<Models::GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopesPredefinedScope> && predefinedScope) { DARABONBA_PTR_SET_RVALUE(predefinedScope_, predefinedScope) };


  protected:
    std::shared_ptr<vector<Models::GetExternalApplicationResponseBodyExternalApplicationDelegatedScopePredefinedScopesPredefinedScope>> predefinedScope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
