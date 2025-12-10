// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICIESRESPONSEBODYPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICIESRESPONSEBODYPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPoliciesResponseBodyPoliciesPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListPoliciesResponseBodyPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPoliciesResponseBodyPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(Policy, policy_);
    };
    friend void from_json(const Darabonba::Json& j, ListPoliciesResponseBodyPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
    };
    ListPoliciesResponseBodyPolicies() = default ;
    ListPoliciesResponseBodyPolicies(const ListPoliciesResponseBodyPolicies &) = default ;
    ListPoliciesResponseBodyPolicies(ListPoliciesResponseBodyPolicies &&) = default ;
    ListPoliciesResponseBodyPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPoliciesResponseBodyPolicies() = default ;
    ListPoliciesResponseBodyPolicies& operator=(const ListPoliciesResponseBodyPolicies &) = default ;
    ListPoliciesResponseBodyPolicies& operator=(ListPoliciesResponseBodyPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policy_ == nullptr; };
    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline const vector<Models::ListPoliciesResponseBodyPoliciesPolicy> & policy() const { DARABONBA_PTR_GET_CONST(policy_, vector<Models::ListPoliciesResponseBodyPoliciesPolicy>) };
    inline vector<Models::ListPoliciesResponseBodyPoliciesPolicy> policy() { DARABONBA_PTR_GET(policy_, vector<Models::ListPoliciesResponseBodyPoliciesPolicy>) };
    inline ListPoliciesResponseBodyPolicies& setPolicy(const vector<Models::ListPoliciesResponseBodyPoliciesPolicy> & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
    inline ListPoliciesResponseBodyPolicies& setPolicy(vector<Models::ListPoliciesResponseBodyPoliciesPolicy> && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


  protected:
    std::shared_ptr<vector<Models::ListPoliciesResponseBodyPoliciesPolicy>> policy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
