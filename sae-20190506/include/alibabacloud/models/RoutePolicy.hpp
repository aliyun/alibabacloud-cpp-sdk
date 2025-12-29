// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROUTEPOLICY_HPP_
#define ALIBABACLOUD_MODELS_ROUTEPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PolicyItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class RoutePolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RoutePolicy& obj) { 
      DARABONBA_PTR_TO_JSON(condition, condition_);
      DARABONBA_PTR_TO_JSON(policyItems, policyItems_);
    };
    friend void from_json(const Darabonba::Json& j, RoutePolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(condition, condition_);
      DARABONBA_PTR_FROM_JSON(policyItems, policyItems_);
    };
    RoutePolicy() = default ;
    RoutePolicy(const RoutePolicy &) = default ;
    RoutePolicy(RoutePolicy &&) = default ;
    RoutePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RoutePolicy() = default ;
    RoutePolicy& operator=(const RoutePolicy &) = default ;
    RoutePolicy& operator=(RoutePolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->condition_ == nullptr
        && this->policyItems_ == nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline RoutePolicy& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // policyItems Field Functions 
    bool hasPolicyItems() const { return this->policyItems_ != nullptr;};
    void deletePolicyItems() { this->policyItems_ = nullptr;};
    inline const vector<PolicyItem> & getPolicyItems() const { DARABONBA_PTR_GET_CONST(policyItems_, vector<PolicyItem>) };
    inline vector<PolicyItem> getPolicyItems() { DARABONBA_PTR_GET(policyItems_, vector<PolicyItem>) };
    inline RoutePolicy& setPolicyItems(const vector<PolicyItem> & policyItems) { DARABONBA_PTR_SET_VALUE(policyItems_, policyItems) };
    inline RoutePolicy& setPolicyItems(vector<PolicyItem> && policyItems) { DARABONBA_PTR_SET_RVALUE(policyItems_, policyItems) };


  protected:
    shared_ptr<string> condition_ {};
    shared_ptr<vector<PolicyItem>> policyItems_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
