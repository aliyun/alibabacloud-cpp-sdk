// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECURSIONZONESRESPONSEBODYZONESZONEEFFECTIVESCOPESEFFECTIVESCOPE_HPP_
#define ALIBABACLOUD_MODELS_LISTRECURSIONZONESRESPONSEBODYZONESZONEEFFECTIVESCOPESEFFECTIVESCOPE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope& obj) { 
      DARABONBA_PTR_TO_JSON(EffectiveType, effectiveType_);
      DARABONBA_PTR_TO_JSON(Scopes, scopes_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope& obj) { 
      DARABONBA_PTR_FROM_JSON(EffectiveType, effectiveType_);
      DARABONBA_PTR_FROM_JSON(Scopes, scopes_);
    };
    ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope() = default ;
    ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope(const ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope &) = default ;
    ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope(ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope &&) = default ;
    ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope() = default ;
    ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope& operator=(const ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope &) = default ;
    ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope& operator=(ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope &&) = default ;
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
    inline ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope& setEffectiveType(string effectiveType) { DARABONBA_PTR_SET_VALUE(effectiveType_, effectiveType) };


    // scopes Field Functions 
    bool hasScopes() const { return this->scopes_ != nullptr;};
    void deleteScopes() { this->scopes_ = nullptr;};
    inline const Models::ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes & scopes() const { DARABONBA_PTR_GET_CONST(scopes_, Models::ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes) };
    inline Models::ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes scopes() { DARABONBA_PTR_GET(scopes_, Models::ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes) };
    inline ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope& setScopes(const Models::ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes & scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };
    inline ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope& setScopes(Models::ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes && scopes) { DARABONBA_PTR_SET_RVALUE(scopes_, scopes) };


  protected:
    std::shared_ptr<string> effectiveType_ = nullptr;
    std::shared_ptr<Models::ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScopeScopes> scopes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
