// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODYAPPLICATIONSAPPLICATIONDELEGATEDSCOPEPREDEFINEDSCOPES_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODYAPPLICATIONSAPPLICATIONDELEGATEDSCOPEPREDEFINEDSCOPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopesPredefinedScope.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes& obj) { 
      DARABONBA_PTR_TO_JSON(PredefinedScope, predefinedScope_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes& obj) { 
      DARABONBA_PTR_FROM_JSON(PredefinedScope, predefinedScope_);
    };
    ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes() = default ;
    ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes(const ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes &) = default ;
    ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes(ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes &&) = default ;
    ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes() = default ;
    ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes& operator=(const ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes &) = default ;
    ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes& operator=(ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->predefinedScope_ != nullptr; };
    // predefinedScope Field Functions 
    bool hasPredefinedScope() const { return this->predefinedScope_ != nullptr;};
    void deletePredefinedScope() { this->predefinedScope_ = nullptr;};
    inline const vector<Models::ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopesPredefinedScope> & predefinedScope() const { DARABONBA_PTR_GET_CONST(predefinedScope_, vector<Models::ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopesPredefinedScope>) };
    inline vector<Models::ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopesPredefinedScope> predefinedScope() { DARABONBA_PTR_GET(predefinedScope_, vector<Models::ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopesPredefinedScope>) };
    inline ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes& setPredefinedScope(const vector<Models::ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopesPredefinedScope> & predefinedScope) { DARABONBA_PTR_SET_VALUE(predefinedScope_, predefinedScope) };
    inline ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes& setPredefinedScope(vector<Models::ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopesPredefinedScope> && predefinedScope) { DARABONBA_PTR_SET_RVALUE(predefinedScope_, predefinedScope) };


  protected:
    std::shared_ptr<vector<Models::ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopesPredefinedScope>> predefinedScope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
