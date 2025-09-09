// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRECURSIONZONESRESPONSEBODYZONESZONEEFFECTIVESCOPESEFFECTIVESCOPE_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRECURSIONZONESRESPONSEBODYZONESZONEEFFECTIVESCOPESEFFECTIVESCOPE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope& obj) { 
      DARABONBA_PTR_TO_JSON(EffectiveType, effectiveType_);
      DARABONBA_PTR_TO_JSON(Scopes, scopes_);
    };
    friend void from_json(const Darabonba::Json& j, SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope& obj) { 
      DARABONBA_PTR_FROM_JSON(EffectiveType, effectiveType_);
      DARABONBA_PTR_FROM_JSON(Scopes, scopes_);
    };
    SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope() = default ;
    SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope(const SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope &) = default ;
    SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope(SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope &&) = default ;
    SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope() = default ;
    SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope& operator=(const SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope &) = default ;
    SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope& operator=(SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->effectiveType_ != nullptr
        && this->scopes_ != nullptr; };
    // effectiveType Field Functions 
    bool hasEffectiveType() const { return this->effectiveType_ != nullptr;};
    void deleteEffectiveType() { this->effectiveType_ = nullptr;};
    inline string effectiveType() const { DARABONBA_PTR_GET_DEFAULT(effectiveType_, "") };
    inline SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope& setEffectiveType(string effectiveType) { DARABONBA_PTR_SET_VALUE(effectiveType_, effectiveType) };


    // scopes Field Functions 
    bool hasScopes() const { return this->scopes_ != nullptr;};
    void deleteScopes() { this->scopes_ = nullptr;};
    inline const Models::SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes & scopes() const { DARABONBA_PTR_GET_CONST(scopes_, Models::SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes) };
    inline Models::SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes scopes() { DARABONBA_PTR_GET(scopes_, Models::SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes) };
    inline SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope& setScopes(const Models::SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes & scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };
    inline SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope& setScopes(Models::SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes && scopes) { DARABONBA_PTR_SET_RVALUE(scopes_, scopes) };


  protected:
    std::shared_ptr<string> effectiveType_ = nullptr;
    std::shared_ptr<Models::SearchRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes> scopes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
