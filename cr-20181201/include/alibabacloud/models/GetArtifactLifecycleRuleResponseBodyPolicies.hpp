// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETARTIFACTLIFECYCLERULERESPONSEBODYPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_GETARTIFACTLIFECYCLERULERESPONSEBODYPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetArtifactLifecycleRuleResponseBodyPoliciesCondition.hpp>
#include <alibabacloud/models/GetArtifactLifecycleRuleResponseBodyPoliciesFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetArtifactLifecycleRuleResponseBodyPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetArtifactLifecycleRuleResponseBodyPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetArtifactLifecycleRuleResponseBodyPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetArtifactLifecycleRuleResponseBodyPolicies() = default ;
    GetArtifactLifecycleRuleResponseBodyPolicies(const GetArtifactLifecycleRuleResponseBodyPolicies &) = default ;
    GetArtifactLifecycleRuleResponseBodyPolicies(GetArtifactLifecycleRuleResponseBodyPolicies &&) = default ;
    GetArtifactLifecycleRuleResponseBodyPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetArtifactLifecycleRuleResponseBodyPolicies() = default ;
    GetArtifactLifecycleRuleResponseBodyPolicies& operator=(const GetArtifactLifecycleRuleResponseBodyPolicies &) = default ;
    GetArtifactLifecycleRuleResponseBodyPolicies& operator=(GetArtifactLifecycleRuleResponseBodyPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->condition_ == nullptr
        && return this->filter_ == nullptr && return this->type_ == nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline const Models::GetArtifactLifecycleRuleResponseBodyPoliciesCondition & condition() const { DARABONBA_PTR_GET_CONST(condition_, Models::GetArtifactLifecycleRuleResponseBodyPoliciesCondition) };
    inline Models::GetArtifactLifecycleRuleResponseBodyPoliciesCondition condition() { DARABONBA_PTR_GET(condition_, Models::GetArtifactLifecycleRuleResponseBodyPoliciesCondition) };
    inline GetArtifactLifecycleRuleResponseBodyPolicies& setCondition(const Models::GetArtifactLifecycleRuleResponseBodyPoliciesCondition & condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };
    inline GetArtifactLifecycleRuleResponseBodyPolicies& setCondition(Models::GetArtifactLifecycleRuleResponseBodyPoliciesCondition && condition) { DARABONBA_PTR_SET_RVALUE(condition_, condition) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const Models::GetArtifactLifecycleRuleResponseBodyPoliciesFilter & filter() const { DARABONBA_PTR_GET_CONST(filter_, Models::GetArtifactLifecycleRuleResponseBodyPoliciesFilter) };
    inline Models::GetArtifactLifecycleRuleResponseBodyPoliciesFilter filter() { DARABONBA_PTR_GET(filter_, Models::GetArtifactLifecycleRuleResponseBodyPoliciesFilter) };
    inline GetArtifactLifecycleRuleResponseBodyPolicies& setFilter(const Models::GetArtifactLifecycleRuleResponseBodyPoliciesFilter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline GetArtifactLifecycleRuleResponseBodyPolicies& setFilter(Models::GetArtifactLifecycleRuleResponseBodyPoliciesFilter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetArtifactLifecycleRuleResponseBodyPolicies& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::GetArtifactLifecycleRuleResponseBodyPoliciesCondition> condition_ = nullptr;
    std::shared_ptr<Models::GetArtifactLifecycleRuleResponseBodyPoliciesFilter> filter_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
