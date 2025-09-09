// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECURSIONZONESRESPONSEBODYZONESZONEEFFECTIVESCOPES_HPP_
#define ALIBABACLOUD_MODELS_LISTRECURSIONZONESRESPONSEBODYZONESZONEEFFECTIVESCOPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListRecursionZonesResponseBodyZonesZoneEffectiveScopes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecursionZonesResponseBodyZonesZoneEffectiveScopes& obj) { 
      DARABONBA_PTR_TO_JSON(EffectiveScope, effectiveScope_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecursionZonesResponseBodyZonesZoneEffectiveScopes& obj) { 
      DARABONBA_PTR_FROM_JSON(EffectiveScope, effectiveScope_);
    };
    ListRecursionZonesResponseBodyZonesZoneEffectiveScopes() = default ;
    ListRecursionZonesResponseBodyZonesZoneEffectiveScopes(const ListRecursionZonesResponseBodyZonesZoneEffectiveScopes &) = default ;
    ListRecursionZonesResponseBodyZonesZoneEffectiveScopes(ListRecursionZonesResponseBodyZonesZoneEffectiveScopes &&) = default ;
    ListRecursionZonesResponseBodyZonesZoneEffectiveScopes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecursionZonesResponseBodyZonesZoneEffectiveScopes() = default ;
    ListRecursionZonesResponseBodyZonesZoneEffectiveScopes& operator=(const ListRecursionZonesResponseBodyZonesZoneEffectiveScopes &) = default ;
    ListRecursionZonesResponseBodyZonesZoneEffectiveScopes& operator=(ListRecursionZonesResponseBodyZonesZoneEffectiveScopes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->effectiveScope_ != nullptr; };
    // effectiveScope Field Functions 
    bool hasEffectiveScope() const { return this->effectiveScope_ != nullptr;};
    void deleteEffectiveScope() { this->effectiveScope_ = nullptr;};
    inline const vector<Models::ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope> & effectiveScope() const { DARABONBA_PTR_GET_CONST(effectiveScope_, vector<Models::ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope>) };
    inline vector<Models::ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope> effectiveScope() { DARABONBA_PTR_GET(effectiveScope_, vector<Models::ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope>) };
    inline ListRecursionZonesResponseBodyZonesZoneEffectiveScopes& setEffectiveScope(const vector<Models::ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope> & effectiveScope) { DARABONBA_PTR_SET_VALUE(effectiveScope_, effectiveScope) };
    inline ListRecursionZonesResponseBodyZonesZoneEffectiveScopes& setEffectiveScope(vector<Models::ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope> && effectiveScope) { DARABONBA_PTR_SET_RVALUE(effectiveScope_, effectiveScope) };


  protected:
    std::shared_ptr<vector<Models::ListRecursionZonesResponseBodyZonesZoneEffectiveScopesEffectiveScope>> effectiveScope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
