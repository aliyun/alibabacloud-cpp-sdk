// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECURSIONZONERESPONSEBODYEFFECTIVESCOPESEFFECTIVESCOPESCOPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECURSIONZONERESPONSEBODYEFFECTIVESCOPESEFFECTIVESCOPESCOPES_HPP_
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
  class DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScopeScopes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScopeScopes& obj) { 
      DARABONBA_PTR_TO_JSON(Scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScopeScopes& obj) { 
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
    };
    DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScopeScopes() = default ;
    DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScopeScopes(const DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScopeScopes &) = default ;
    DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScopeScopes(DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScopeScopes &&) = default ;
    DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScopeScopes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScopeScopes() = default ;
    DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScopeScopes& operator=(const DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScopeScopes &) = default ;
    DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScopeScopes& operator=(DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScopeScopes &&) = default ;
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
    inline DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScopeScopes& setScope(const vector<string> & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
    inline DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScopeScopes& setScope(vector<string> && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


  protected:
    std::shared_ptr<vector<string>> scope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
