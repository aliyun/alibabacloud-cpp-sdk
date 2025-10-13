// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDONMETAENVIRONMENTSPOLICIESMETRICCHECKRULE_HPP_
#define ALIBABACLOUD_MODELS_ADDONMETAENVIRONMENTSPOLICIESMETRICCHECKRULE_HPP_
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
  class AddonMetaEnvironmentsPoliciesMetricCheckRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddonMetaEnvironmentsPoliciesMetricCheckRule& obj) { 
      DARABONBA_PTR_TO_JSON(promQL, promQL_);
    };
    friend void from_json(const Darabonba::Json& j, AddonMetaEnvironmentsPoliciesMetricCheckRule& obj) { 
      DARABONBA_PTR_FROM_JSON(promQL, promQL_);
    };
    AddonMetaEnvironmentsPoliciesMetricCheckRule() = default ;
    AddonMetaEnvironmentsPoliciesMetricCheckRule(const AddonMetaEnvironmentsPoliciesMetricCheckRule &) = default ;
    AddonMetaEnvironmentsPoliciesMetricCheckRule(AddonMetaEnvironmentsPoliciesMetricCheckRule &&) = default ;
    AddonMetaEnvironmentsPoliciesMetricCheckRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddonMetaEnvironmentsPoliciesMetricCheckRule() = default ;
    AddonMetaEnvironmentsPoliciesMetricCheckRule& operator=(const AddonMetaEnvironmentsPoliciesMetricCheckRule &) = default ;
    AddonMetaEnvironmentsPoliciesMetricCheckRule& operator=(AddonMetaEnvironmentsPoliciesMetricCheckRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->promQL_ == nullptr; };
    // promQL Field Functions 
    bool hasPromQL() const { return this->promQL_ != nullptr;};
    void deletePromQL() { this->promQL_ = nullptr;};
    inline const vector<string> & promQL() const { DARABONBA_PTR_GET_CONST(promQL_, vector<string>) };
    inline vector<string> promQL() { DARABONBA_PTR_GET(promQL_, vector<string>) };
    inline AddonMetaEnvironmentsPoliciesMetricCheckRule& setPromQL(const vector<string> & promQL) { DARABONBA_PTR_SET_VALUE(promQL_, promQL) };
    inline AddonMetaEnvironmentsPoliciesMetricCheckRule& setPromQL(vector<string> && promQL) { DARABONBA_PTR_SET_RVALUE(promQL_, promQL) };


  protected:
    std::shared_ptr<vector<string>> promQL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
