// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRECURSIONZONESREQUESTEFFECTIVESCOPES_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRECURSIONZONESREQUESTEFFECTIVESCOPES_HPP_
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
  class SearchRecursionZonesRequestEffectiveScopes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchRecursionZonesRequestEffectiveScopes& obj) { 
      DARABONBA_PTR_TO_JSON(EffectiveType, effectiveType_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, SearchRecursionZonesRequestEffectiveScopes& obj) { 
      DARABONBA_PTR_FROM_JSON(EffectiveType, effectiveType_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
    };
    SearchRecursionZonesRequestEffectiveScopes() = default ;
    SearchRecursionZonesRequestEffectiveScopes(const SearchRecursionZonesRequestEffectiveScopes &) = default ;
    SearchRecursionZonesRequestEffectiveScopes(SearchRecursionZonesRequestEffectiveScopes &&) = default ;
    SearchRecursionZonesRequestEffectiveScopes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchRecursionZonesRequestEffectiveScopes() = default ;
    SearchRecursionZonesRequestEffectiveScopes& operator=(const SearchRecursionZonesRequestEffectiveScopes &) = default ;
    SearchRecursionZonesRequestEffectiveScopes& operator=(SearchRecursionZonesRequestEffectiveScopes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->effectiveType_ == nullptr
        && return this->scope_ == nullptr; };
    // effectiveType Field Functions 
    bool hasEffectiveType() const { return this->effectiveType_ != nullptr;};
    void deleteEffectiveType() { this->effectiveType_ = nullptr;};
    inline string effectiveType() const { DARABONBA_PTR_GET_DEFAULT(effectiveType_, "") };
    inline SearchRecursionZonesRequestEffectiveScopes& setEffectiveType(string effectiveType) { DARABONBA_PTR_SET_VALUE(effectiveType_, effectiveType) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline const vector<string> & scope() const { DARABONBA_PTR_GET_CONST(scope_, vector<string>) };
    inline vector<string> scope() { DARABONBA_PTR_GET(scope_, vector<string>) };
    inline SearchRecursionZonesRequestEffectiveScopes& setScope(const vector<string> & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
    inline SearchRecursionZonesRequestEffectiveScopes& setScope(vector<string> && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


  protected:
    std::shared_ptr<string> effectiveType_ = nullptr;
    std::shared_ptr<vector<string>> scope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
