// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRECURSIONZONESRESPONSEBODYZONESZONEEFFECTIVESCOPESEFFECTIVESCOPESCOPES_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRECURSIONZONESRESPONSEBODYZONESZONEEFFECTIVESCOPESEFFECTIVESCOPESCOPES_HPP_
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
  class SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes& obj) { 
      DARABONBA_PTR_TO_JSON(Scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes& obj) { 
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
    };
    SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes() = default ;
    SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes(const SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes &) = default ;
    SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes(SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes &&) = default ;
    SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes() = default ;
    SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes& operator=(const SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes &) = default ;
    SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes& operator=(SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scope_ == nullptr; };
    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline const vector<string> & scope() const { DARABONBA_PTR_GET_CONST(scope_, vector<string>) };
    inline vector<string> scope() { DARABONBA_PTR_GET(scope_, vector<string>) };
    inline SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes& setScope(const vector<string> & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
    inline SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes& setScope(vector<string> && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


  protected:
    std::shared_ptr<vector<string>> scope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
