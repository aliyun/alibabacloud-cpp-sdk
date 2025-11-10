// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTROLPOLICIESRESPONSEBODYCONTROLPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTROLPOLICIESRESPONSEBODYCONTROLPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListControlPoliciesResponseBodyControlPoliciesControlPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListControlPoliciesResponseBodyControlPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListControlPoliciesResponseBodyControlPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(ControlPolicy, controlPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, ListControlPoliciesResponseBodyControlPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(ControlPolicy, controlPolicy_);
    };
    ListControlPoliciesResponseBodyControlPolicies() = default ;
    ListControlPoliciesResponseBodyControlPolicies(const ListControlPoliciesResponseBodyControlPolicies &) = default ;
    ListControlPoliciesResponseBodyControlPolicies(ListControlPoliciesResponseBodyControlPolicies &&) = default ;
    ListControlPoliciesResponseBodyControlPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListControlPoliciesResponseBodyControlPolicies() = default ;
    ListControlPoliciesResponseBodyControlPolicies& operator=(const ListControlPoliciesResponseBodyControlPolicies &) = default ;
    ListControlPoliciesResponseBodyControlPolicies& operator=(ListControlPoliciesResponseBodyControlPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->controlPolicy_ == nullptr; };
    // controlPolicy Field Functions 
    bool hasControlPolicy() const { return this->controlPolicy_ != nullptr;};
    void deleteControlPolicy() { this->controlPolicy_ = nullptr;};
    inline const vector<Models::ListControlPoliciesResponseBodyControlPoliciesControlPolicy> & controlPolicy() const { DARABONBA_PTR_GET_CONST(controlPolicy_, vector<Models::ListControlPoliciesResponseBodyControlPoliciesControlPolicy>) };
    inline vector<Models::ListControlPoliciesResponseBodyControlPoliciesControlPolicy> controlPolicy() { DARABONBA_PTR_GET(controlPolicy_, vector<Models::ListControlPoliciesResponseBodyControlPoliciesControlPolicy>) };
    inline ListControlPoliciesResponseBodyControlPolicies& setControlPolicy(const vector<Models::ListControlPoliciesResponseBodyControlPoliciesControlPolicy> & controlPolicy) { DARABONBA_PTR_SET_VALUE(controlPolicy_, controlPolicy) };
    inline ListControlPoliciesResponseBodyControlPolicies& setControlPolicy(vector<Models::ListControlPoliciesResponseBodyControlPoliciesControlPolicy> && controlPolicy) { DARABONBA_PTR_SET_RVALUE(controlPolicy_, controlPolicy) };


  protected:
    std::shared_ptr<vector<Models::ListControlPoliciesResponseBodyControlPoliciesControlPolicy>> controlPolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
