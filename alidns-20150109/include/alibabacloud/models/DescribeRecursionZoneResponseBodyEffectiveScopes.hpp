// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECURSIONZONERESPONSEBODYEFFECTIVESCOPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECURSIONZONERESPONSEBODYEFFECTIVESCOPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScope.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeRecursionZoneResponseBodyEffectiveScopes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecursionZoneResponseBodyEffectiveScopes& obj) { 
      DARABONBA_PTR_TO_JSON(EffectiveScope, effectiveScope_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecursionZoneResponseBodyEffectiveScopes& obj) { 
      DARABONBA_PTR_FROM_JSON(EffectiveScope, effectiveScope_);
    };
    DescribeRecursionZoneResponseBodyEffectiveScopes() = default ;
    DescribeRecursionZoneResponseBodyEffectiveScopes(const DescribeRecursionZoneResponseBodyEffectiveScopes &) = default ;
    DescribeRecursionZoneResponseBodyEffectiveScopes(DescribeRecursionZoneResponseBodyEffectiveScopes &&) = default ;
    DescribeRecursionZoneResponseBodyEffectiveScopes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecursionZoneResponseBodyEffectiveScopes() = default ;
    DescribeRecursionZoneResponseBodyEffectiveScopes& operator=(const DescribeRecursionZoneResponseBodyEffectiveScopes &) = default ;
    DescribeRecursionZoneResponseBodyEffectiveScopes& operator=(DescribeRecursionZoneResponseBodyEffectiveScopes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->effectiveScope_ == nullptr; };
    // effectiveScope Field Functions 
    bool hasEffectiveScope() const { return this->effectiveScope_ != nullptr;};
    void deleteEffectiveScope() { this->effectiveScope_ = nullptr;};
    inline const vector<Models::DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScope> & effectiveScope() const { DARABONBA_PTR_GET_CONST(effectiveScope_, vector<Models::DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScope>) };
    inline vector<Models::DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScope> effectiveScope() { DARABONBA_PTR_GET(effectiveScope_, vector<Models::DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScope>) };
    inline DescribeRecursionZoneResponseBodyEffectiveScopes& setEffectiveScope(const vector<Models::DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScope> & effectiveScope) { DARABONBA_PTR_SET_VALUE(effectiveScope_, effectiveScope) };
    inline DescribeRecursionZoneResponseBodyEffectiveScopes& setEffectiveScope(vector<Models::DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScope> && effectiveScope) { DARABONBA_PTR_SET_RVALUE(effectiveScope_, effectiveScope) };


  protected:
    std::shared_ptr<vector<Models::DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScope>> effectiveScope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
