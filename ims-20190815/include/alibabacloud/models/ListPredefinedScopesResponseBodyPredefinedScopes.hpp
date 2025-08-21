// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPREDEFINEDSCOPESRESPONSEBODYPREDEFINEDSCOPES_HPP_
#define ALIBABACLOUD_MODELS_LISTPREDEFINEDSCOPESRESPONSEBODYPREDEFINEDSCOPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPredefinedScopesResponseBodyPredefinedScopesPredefinedScope.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListPredefinedScopesResponseBodyPredefinedScopes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPredefinedScopesResponseBodyPredefinedScopes& obj) { 
      DARABONBA_PTR_TO_JSON(PredefinedScope, predefinedScope_);
    };
    friend void from_json(const Darabonba::Json& j, ListPredefinedScopesResponseBodyPredefinedScopes& obj) { 
      DARABONBA_PTR_FROM_JSON(PredefinedScope, predefinedScope_);
    };
    ListPredefinedScopesResponseBodyPredefinedScopes() = default ;
    ListPredefinedScopesResponseBodyPredefinedScopes(const ListPredefinedScopesResponseBodyPredefinedScopes &) = default ;
    ListPredefinedScopesResponseBodyPredefinedScopes(ListPredefinedScopesResponseBodyPredefinedScopes &&) = default ;
    ListPredefinedScopesResponseBodyPredefinedScopes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPredefinedScopesResponseBodyPredefinedScopes() = default ;
    ListPredefinedScopesResponseBodyPredefinedScopes& operator=(const ListPredefinedScopesResponseBodyPredefinedScopes &) = default ;
    ListPredefinedScopesResponseBodyPredefinedScopes& operator=(ListPredefinedScopesResponseBodyPredefinedScopes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->predefinedScope_ != nullptr; };
    // predefinedScope Field Functions 
    bool hasPredefinedScope() const { return this->predefinedScope_ != nullptr;};
    void deletePredefinedScope() { this->predefinedScope_ = nullptr;};
    inline const vector<Models::ListPredefinedScopesResponseBodyPredefinedScopesPredefinedScope> & predefinedScope() const { DARABONBA_PTR_GET_CONST(predefinedScope_, vector<Models::ListPredefinedScopesResponseBodyPredefinedScopesPredefinedScope>) };
    inline vector<Models::ListPredefinedScopesResponseBodyPredefinedScopesPredefinedScope> predefinedScope() { DARABONBA_PTR_GET(predefinedScope_, vector<Models::ListPredefinedScopesResponseBodyPredefinedScopesPredefinedScope>) };
    inline ListPredefinedScopesResponseBodyPredefinedScopes& setPredefinedScope(const vector<Models::ListPredefinedScopesResponseBodyPredefinedScopesPredefinedScope> & predefinedScope) { DARABONBA_PTR_SET_VALUE(predefinedScope_, predefinedScope) };
    inline ListPredefinedScopesResponseBodyPredefinedScopes& setPredefinedScope(vector<Models::ListPredefinedScopesResponseBodyPredefinedScopesPredefinedScope> && predefinedScope) { DARABONBA_PTR_SET_RVALUE(predefinedScope_, predefinedScope) };


  protected:
    std::shared_ptr<vector<Models::ListPredefinedScopesResponseBodyPredefinedScopesPredefinedScope>> predefinedScope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
