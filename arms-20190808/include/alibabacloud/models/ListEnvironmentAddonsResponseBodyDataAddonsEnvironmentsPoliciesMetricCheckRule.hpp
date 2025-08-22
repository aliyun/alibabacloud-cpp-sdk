// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTADDONSRESPONSEBODYDATAADDONSENVIRONMENTSPOLICIESMETRICCHECKRULE_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTADDONSRESPONSEBODYDATAADDONSENVIRONMENTSPOLICIESMETRICCHECKRULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesMetricCheckRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesMetricCheckRule& obj) { 
      DARABONBA_PTR_TO_JSON(PromQL, promQL_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesMetricCheckRule& obj) { 
      DARABONBA_PTR_FROM_JSON(PromQL, promQL_);
    };
    ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesMetricCheckRule() = default ;
    ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesMetricCheckRule(const ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesMetricCheckRule &) = default ;
    ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesMetricCheckRule(ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesMetricCheckRule &&) = default ;
    ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesMetricCheckRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesMetricCheckRule() = default ;
    ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesMetricCheckRule& operator=(const ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesMetricCheckRule &) = default ;
    ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesMetricCheckRule& operator=(ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesMetricCheckRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->promQL_ != nullptr; };
    // promQL Field Functions 
    bool hasPromQL() const { return this->promQL_ != nullptr;};
    void deletePromQL() { this->promQL_ = nullptr;};
    inline const vector<string> & promQL() const { DARABONBA_PTR_GET_CONST(promQL_, vector<string>) };
    inline vector<string> promQL() { DARABONBA_PTR_GET(promQL_, vector<string>) };
    inline ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesMetricCheckRule& setPromQL(const vector<string> & promQL) { DARABONBA_PTR_SET_VALUE(promQL_, promQL) };
    inline ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesMetricCheckRule& setPromQL(vector<string> && promQL) { DARABONBA_PTR_SET_RVALUE(promQL_, promQL) };


  protected:
    // The PromQL statements.
    std::shared_ptr<vector<string>> promQL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
