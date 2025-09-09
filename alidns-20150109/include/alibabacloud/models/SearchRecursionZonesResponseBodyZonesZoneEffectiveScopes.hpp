// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRECURSIONZONESRESPONSEBODYZONESZONEEFFECTIVESCOPES_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRECURSIONZONESRESPONSEBODYZONESZONEEFFECTIVESCOPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SearchRecursionZonesResponseBodyZonesZoneEffectiveScopes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchRecursionZonesResponseBodyZonesZoneEffectiveScopes& obj) { 
      DARABONBA_PTR_TO_JSON(EffectiveScope, effectiveScope_);
    };
    friend void from_json(const Darabonba::Json& j, SearchRecursionZonesResponseBodyZonesZoneEffectiveScopes& obj) { 
      DARABONBA_PTR_FROM_JSON(EffectiveScope, effectiveScope_);
    };
    SearchRecursionZonesResponseBodyZonesZoneEffectiveScopes() = default ;
    SearchRecursionZonesResponseBodyZonesZoneEffectiveScopes(const SearchRecursionZonesResponseBodyZonesZoneEffectiveScopes &) = default ;
    SearchRecursionZonesResponseBodyZonesZoneEffectiveScopes(SearchRecursionZonesResponseBodyZonesZoneEffectiveScopes &&) = default ;
    SearchRecursionZonesResponseBodyZonesZoneEffectiveScopes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchRecursionZonesResponseBodyZonesZoneEffectiveScopes() = default ;
    SearchRecursionZonesResponseBodyZonesZoneEffectiveScopes& operator=(const SearchRecursionZonesResponseBodyZonesZoneEffectiveScopes &) = default ;
    SearchRecursionZonesResponseBodyZonesZoneEffectiveScopes& operator=(SearchRecursionZonesResponseBodyZonesZoneEffectiveScopes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->effectiveScope_ != nullptr; };
    // effectiveScope Field Functions 
    bool hasEffectiveScope() const { return this->effectiveScope_ != nullptr;};
    void deleteEffectiveScope() { this->effectiveScope_ = nullptr;};
    inline const vector<Models::SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope> & effectiveScope() const { DARABONBA_PTR_GET_CONST(effectiveScope_, vector<Models::SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope>) };
    inline vector<Models::SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope> effectiveScope() { DARABONBA_PTR_GET(effectiveScope_, vector<Models::SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope>) };
    inline SearchRecursionZonesResponseBodyZonesZoneEffectiveScopes& setEffectiveScope(const vector<Models::SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope> & effectiveScope) { DARABONBA_PTR_SET_VALUE(effectiveScope_, effectiveScope) };
    inline SearchRecursionZonesResponseBodyZonesZoneEffectiveScopes& setEffectiveScope(vector<Models::SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope> && effectiveScope) { DARABONBA_PTR_SET_RVALUE(effectiveScope_, effectiveScope) };


  protected:
    std::shared_ptr<vector<Models::SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope>> effectiveScope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
