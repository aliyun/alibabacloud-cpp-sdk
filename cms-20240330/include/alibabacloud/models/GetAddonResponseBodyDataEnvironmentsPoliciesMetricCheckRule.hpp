// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADDONRESPONSEBODYDATAENVIRONMENTSPOLICIESMETRICCHECKRULE_HPP_
#define ALIBABACLOUD_MODELS_GETADDONRESPONSEBODYDATAENVIRONMENTSPOLICIESMETRICCHECKRULE_HPP_
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
  class GetAddonResponseBodyDataEnvironmentsPoliciesMetricCheckRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAddonResponseBodyDataEnvironmentsPoliciesMetricCheckRule& obj) { 
      DARABONBA_PTR_TO_JSON(promQL, promQL_);
    };
    friend void from_json(const Darabonba::Json& j, GetAddonResponseBodyDataEnvironmentsPoliciesMetricCheckRule& obj) { 
      DARABONBA_PTR_FROM_JSON(promQL, promQL_);
    };
    GetAddonResponseBodyDataEnvironmentsPoliciesMetricCheckRule() = default ;
    GetAddonResponseBodyDataEnvironmentsPoliciesMetricCheckRule(const GetAddonResponseBodyDataEnvironmentsPoliciesMetricCheckRule &) = default ;
    GetAddonResponseBodyDataEnvironmentsPoliciesMetricCheckRule(GetAddonResponseBodyDataEnvironmentsPoliciesMetricCheckRule &&) = default ;
    GetAddonResponseBodyDataEnvironmentsPoliciesMetricCheckRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAddonResponseBodyDataEnvironmentsPoliciesMetricCheckRule() = default ;
    GetAddonResponseBodyDataEnvironmentsPoliciesMetricCheckRule& operator=(const GetAddonResponseBodyDataEnvironmentsPoliciesMetricCheckRule &) = default ;
    GetAddonResponseBodyDataEnvironmentsPoliciesMetricCheckRule& operator=(GetAddonResponseBodyDataEnvironmentsPoliciesMetricCheckRule &&) = default ;
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
    inline GetAddonResponseBodyDataEnvironmentsPoliciesMetricCheckRule& setPromQL(const vector<string> & promQL) { DARABONBA_PTR_SET_VALUE(promQL_, promQL) };
    inline GetAddonResponseBodyDataEnvironmentsPoliciesMetricCheckRule& setPromQL(vector<string> && promQL) { DARABONBA_PTR_SET_RVALUE(promQL_, promQL) };


  protected:
    std::shared_ptr<vector<string>> promQL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
