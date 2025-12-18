// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONFIGRULERESPONSEBODYCONFIGRULESCOPE_HPP_
#define ALIBABACLOUD_MODELS_GETCONFIGRULERESPONSEBODYCONFIGRULESCOPE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetConfigRuleResponseBodyConfigRuleScope : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConfigRuleResponseBodyConfigRuleScope& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceResourceTypes, complianceResourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, GetConfigRuleResponseBodyConfigRuleScope& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceResourceTypes, complianceResourceTypes_);
    };
    GetConfigRuleResponseBodyConfigRuleScope() = default ;
    GetConfigRuleResponseBodyConfigRuleScope(const GetConfigRuleResponseBodyConfigRuleScope &) = default ;
    GetConfigRuleResponseBodyConfigRuleScope(GetConfigRuleResponseBodyConfigRuleScope &&) = default ;
    GetConfigRuleResponseBodyConfigRuleScope(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConfigRuleResponseBodyConfigRuleScope() = default ;
    GetConfigRuleResponseBodyConfigRuleScope& operator=(const GetConfigRuleResponseBodyConfigRuleScope &) = default ;
    GetConfigRuleResponseBodyConfigRuleScope& operator=(GetConfigRuleResponseBodyConfigRuleScope &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->complianceResourceTypes_ == nullptr; };
    // complianceResourceTypes Field Functions 
    bool hasComplianceResourceTypes() const { return this->complianceResourceTypes_ != nullptr;};
    void deleteComplianceResourceTypes() { this->complianceResourceTypes_ = nullptr;};
    inline const vector<string> & complianceResourceTypes() const { DARABONBA_PTR_GET_CONST(complianceResourceTypes_, vector<string>) };
    inline vector<string> complianceResourceTypes() { DARABONBA_PTR_GET(complianceResourceTypes_, vector<string>) };
    inline GetConfigRuleResponseBodyConfigRuleScope& setComplianceResourceTypes(const vector<string> & complianceResourceTypes) { DARABONBA_PTR_SET_VALUE(complianceResourceTypes_, complianceResourceTypes) };
    inline GetConfigRuleResponseBodyConfigRuleScope& setComplianceResourceTypes(vector<string> && complianceResourceTypes) { DARABONBA_PTR_SET_RVALUE(complianceResourceTypes_, complianceResourceTypes) };


  protected:
    // The types of the resources to be evaluated against the rule. You can also view the resource types by using the ResourceTypesScope parameter.
    std::shared_ptr<vector<string>> complianceResourceTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
