// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYADDONSRESPONSEBODYADDONSENVIRONMENTSPOLICIESMETRICCHECKRULE_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYADDONSRESPONSEBODYADDONSENVIRONMENTSPOLICIESMETRICCHECKRULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesMetricCheckRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesMetricCheckRule& obj) { 
      DARABONBA_PTR_TO_JSON(promQl, promQl_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesMetricCheckRule& obj) { 
      DARABONBA_PTR_FROM_JSON(promQl, promQl_);
    };
    ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesMetricCheckRule() = default ;
    ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesMetricCheckRule(const ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesMetricCheckRule &) = default ;
    ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesMetricCheckRule(ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesMetricCheckRule &&) = default ;
    ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesMetricCheckRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesMetricCheckRule() = default ;
    ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesMetricCheckRule& operator=(const ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesMetricCheckRule &) = default ;
    ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesMetricCheckRule& operator=(ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesMetricCheckRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->promQl_ == nullptr; };
    // promQl Field Functions 
    bool hasPromQl() const { return this->promQl_ != nullptr;};
    void deletePromQl() { this->promQl_ = nullptr;};
    inline const vector<string> & promQl() const { DARABONBA_PTR_GET_CONST(promQl_, vector<string>) };
    inline vector<string> promQl() { DARABONBA_PTR_GET(promQl_, vector<string>) };
    inline ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesMetricCheckRule& setPromQl(const vector<string> & promQl) { DARABONBA_PTR_SET_VALUE(promQl_, promQl) };
    inline ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesMetricCheckRule& setPromQl(vector<string> && promQl) { DARABONBA_PTR_SET_RVALUE(promQl_, promQl) };


  protected:
    std::shared_ptr<vector<string>> promQl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
