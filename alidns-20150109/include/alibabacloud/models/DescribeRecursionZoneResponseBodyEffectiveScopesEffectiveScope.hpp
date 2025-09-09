// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECURSIONZONERESPONSEBODYEFFECTIVESCOPESEFFECTIVESCOPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECURSIONZONERESPONSEBODYEFFECTIVESCOPESEFFECTIVESCOPE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScopeScopes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScope : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScope& obj) { 
      DARABONBA_PTR_TO_JSON(EffectiveType, effectiveType_);
      DARABONBA_PTR_TO_JSON(Scopes, scopes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScope& obj) { 
      DARABONBA_PTR_FROM_JSON(EffectiveType, effectiveType_);
      DARABONBA_PTR_FROM_JSON(Scopes, scopes_);
    };
    DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScope() = default ;
    DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScope(const DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScope &) = default ;
    DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScope(DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScope &&) = default ;
    DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScope(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScope() = default ;
    DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScope& operator=(const DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScope &) = default ;
    DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScope& operator=(DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScope &&) = default ;
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
    inline DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScope& setEffectiveType(string effectiveType) { DARABONBA_PTR_SET_VALUE(effectiveType_, effectiveType) };


    // scopes Field Functions 
    bool hasScopes() const { return this->scopes_ != nullptr;};
    void deleteScopes() { this->scopes_ = nullptr;};
    inline const Models::DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScopeScopes & scopes() const { DARABONBA_PTR_GET_CONST(scopes_, Models::DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScopeScopes) };
    inline Models::DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScopeScopes scopes() { DARABONBA_PTR_GET(scopes_, Models::DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScopeScopes) };
    inline DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScope& setScopes(const Models::DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScopeScopes & scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };
    inline DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScope& setScopes(Models::DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScopeScopes && scopes) { DARABONBA_PTR_SET_RVALUE(scopes_, scopes) };


  protected:
    std::shared_ptr<string> effectiveType_ = nullptr;
    std::shared_ptr<Models::DescribeRecursionZoneResponseBodyEffectiveScopesEffectiveScopeScopes> scopes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
