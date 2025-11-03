// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTARTIFACTLIFECYCLERULERESPONSEBODYRULESPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTARTIFACTLIFECYCLERULERESPONSEBODYRULESPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListArtifactLifecycleRuleResponseBodyRulesPoliciesCondition.hpp>
#include <alibabacloud/models/ListArtifactLifecycleRuleResponseBodyRulesPoliciesFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListArtifactLifecycleRuleResponseBodyRulesPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListArtifactLifecycleRuleResponseBodyRulesPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListArtifactLifecycleRuleResponseBodyRulesPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListArtifactLifecycleRuleResponseBodyRulesPolicies() = default ;
    ListArtifactLifecycleRuleResponseBodyRulesPolicies(const ListArtifactLifecycleRuleResponseBodyRulesPolicies &) = default ;
    ListArtifactLifecycleRuleResponseBodyRulesPolicies(ListArtifactLifecycleRuleResponseBodyRulesPolicies &&) = default ;
    ListArtifactLifecycleRuleResponseBodyRulesPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListArtifactLifecycleRuleResponseBodyRulesPolicies() = default ;
    ListArtifactLifecycleRuleResponseBodyRulesPolicies& operator=(const ListArtifactLifecycleRuleResponseBodyRulesPolicies &) = default ;
    ListArtifactLifecycleRuleResponseBodyRulesPolicies& operator=(ListArtifactLifecycleRuleResponseBodyRulesPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->condition_ == nullptr
        && return this->filter_ == nullptr && return this->type_ == nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline const Models::ListArtifactLifecycleRuleResponseBodyRulesPoliciesCondition & condition() const { DARABONBA_PTR_GET_CONST(condition_, Models::ListArtifactLifecycleRuleResponseBodyRulesPoliciesCondition) };
    inline Models::ListArtifactLifecycleRuleResponseBodyRulesPoliciesCondition condition() { DARABONBA_PTR_GET(condition_, Models::ListArtifactLifecycleRuleResponseBodyRulesPoliciesCondition) };
    inline ListArtifactLifecycleRuleResponseBodyRulesPolicies& setCondition(const Models::ListArtifactLifecycleRuleResponseBodyRulesPoliciesCondition & condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };
    inline ListArtifactLifecycleRuleResponseBodyRulesPolicies& setCondition(Models::ListArtifactLifecycleRuleResponseBodyRulesPoliciesCondition && condition) { DARABONBA_PTR_SET_RVALUE(condition_, condition) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const Models::ListArtifactLifecycleRuleResponseBodyRulesPoliciesFilter & filter() const { DARABONBA_PTR_GET_CONST(filter_, Models::ListArtifactLifecycleRuleResponseBodyRulesPoliciesFilter) };
    inline Models::ListArtifactLifecycleRuleResponseBodyRulesPoliciesFilter filter() { DARABONBA_PTR_GET(filter_, Models::ListArtifactLifecycleRuleResponseBodyRulesPoliciesFilter) };
    inline ListArtifactLifecycleRuleResponseBodyRulesPolicies& setFilter(const Models::ListArtifactLifecycleRuleResponseBodyRulesPoliciesFilter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListArtifactLifecycleRuleResponseBodyRulesPolicies& setFilter(Models::ListArtifactLifecycleRuleResponseBodyRulesPoliciesFilter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListArtifactLifecycleRuleResponseBodyRulesPolicies& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::ListArtifactLifecycleRuleResponseBodyRulesPoliciesCondition> condition_ = nullptr;
    std::shared_ptr<Models::ListArtifactLifecycleRuleResponseBodyRulesPoliciesFilter> filter_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
