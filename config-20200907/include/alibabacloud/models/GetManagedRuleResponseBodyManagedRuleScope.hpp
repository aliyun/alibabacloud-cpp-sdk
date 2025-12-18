// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMANAGEDRULERESPONSEBODYMANAGEDRULESCOPE_HPP_
#define ALIBABACLOUD_MODELS_GETMANAGEDRULERESPONSEBODYMANAGEDRULESCOPE_HPP_
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
  class GetManagedRuleResponseBodyManagedRuleScope : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetManagedRuleResponseBodyManagedRuleScope& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceResourceTypes, complianceResourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, GetManagedRuleResponseBodyManagedRuleScope& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceResourceTypes, complianceResourceTypes_);
    };
    GetManagedRuleResponseBodyManagedRuleScope() = default ;
    GetManagedRuleResponseBodyManagedRuleScope(const GetManagedRuleResponseBodyManagedRuleScope &) = default ;
    GetManagedRuleResponseBodyManagedRuleScope(GetManagedRuleResponseBodyManagedRuleScope &&) = default ;
    GetManagedRuleResponseBodyManagedRuleScope(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetManagedRuleResponseBodyManagedRuleScope() = default ;
    GetManagedRuleResponseBodyManagedRuleScope& operator=(const GetManagedRuleResponseBodyManagedRuleScope &) = default ;
    GetManagedRuleResponseBodyManagedRuleScope& operator=(GetManagedRuleResponseBodyManagedRuleScope &&) = default ;
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
    inline GetManagedRuleResponseBodyManagedRuleScope& setComplianceResourceTypes(const vector<string> & complianceResourceTypes) { DARABONBA_PTR_SET_VALUE(complianceResourceTypes_, complianceResourceTypes) };
    inline GetManagedRuleResponseBodyManagedRuleScope& setComplianceResourceTypes(vector<string> && complianceResourceTypes) { DARABONBA_PTR_SET_RVALUE(complianceResourceTypes_, complianceResourceTypes) };


  protected:
    // The types of resources to which the managed rule applies.
    std::shared_ptr<vector<string>> complianceResourceTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
