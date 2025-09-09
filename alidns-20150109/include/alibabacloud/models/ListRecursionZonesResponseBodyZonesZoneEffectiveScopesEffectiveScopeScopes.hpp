// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECURSIONZONESRESPONSEBODYZONESZONEEFFECTIVESCOPESEFFECTIVESCOPESCOPES_HPP_
#define ALIBABACLOUD_MODELS_LISTRECURSIONZONESRESPONSEBODYZONESZONEEFFECTIVESCOPESEFFECTIVESCOPESCOPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes& obj) { 
      DARABONBA_PTR_TO_JSON(Scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes& obj) { 
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
    };
    ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes() = default ;
    ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes(const ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes &) = default ;
    ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes(ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes &&) = default ;
    ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes() = default ;
    ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes& operator=(const ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes &) = default ;
    ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes& operator=(ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->scope_ != nullptr; };
    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline const vector<string> & scope() const { DARABONBA_PTR_GET_CONST(scope_, vector<string>) };
    inline vector<string> scope() { DARABONBA_PTR_GET(scope_, vector<string>) };
    inline ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes& setScope(const vector<string> & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
    inline ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes& setScope(vector<string> && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


  protected:
    std::shared_ptr<vector<string>> scope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
